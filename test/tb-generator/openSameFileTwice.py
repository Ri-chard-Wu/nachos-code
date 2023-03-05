import random

prog = ""

def Create(name):
    global prog
    prog +=\
f"""
    success = Create(\"{name}\");
    if (success != 1) MSG("open failed");
"""


def Open(name):
    global prog
    prog +=\
f"""
    Open(\"{name}\");
"""

    
#  Write("buffer", bufferSize, 0, fid, pk_sz)

def Write(buffer_name, size, offset, fid, pk_sz):
    global prog
    prog +=\
f"""
    for (i = 0; i < {size}; i += {pk_sz}) {{
        int count = Write({buffer_name} + {offset} + i, {pk_sz}, {fid});
"""    

    if(fid >= 20):
        prog +=\
f"""        if (count != -1) MSG("Write {fid} failed");
    }}
"""          
    else:
        prog +=\
f"""        if (count != {pk_sz}) MSG("Write {fid} failed");
    }}
"""          

def Close(fid):
    global prog
    prog +=\
f"""
    success = Close({fid});
    if (success != 1) MSG("close failed");
"""

##############################################
##############################################
prog +=\
"""

#include "syscall.h"

int main(void)
{

"""

## init
  
prog +=\
"""
    int pk_sz = 13;
    int n_pk = 2;
    int failed = 0;
    OpenFileId fid;
    int i;
    int success;

"""


for i in range(25):
    name = f"file{i}.txt"
    prog +=\
f"""
    success = Create(\"{name}\");
    if (success != 1) MSG("open failed");
"""

fileNumsToOpen = [2,5,5,2,8,7]

for fileNum in fileNumsToOpen:
    prog +=\
f"""
    fid = Open(\"file{fileNum}.txt\");
"""        


## close all
prog +=\
"""
    for(i = 0; i < 6; i++){
        success = Close(i);
        if (success != 1) MSG("close failed");
    }
"""


prog +=\
"""

	Halt();
}

"""

# f = open("fileIO_test1.c", "a")
f = open("tb.c", "w")
f.write(prog)
f.close()
