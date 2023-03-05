import random

prog = ""


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

# char buffer[] = "In this tutorial, we discussed how to escape curly braces in f-strings in Python. We first discussed the basics of the f-strings and the use of the curly braces. We then discussed how to escape curly braces by using them twice as {{ and }}. We also discussed using curly braces thrice to escape them and print the missing values";


for i in range(25):
    name = f"file{i}.txt"
    prog +=\
f"""
    success = Create(\"{name}\");
    if (success != 1) MSG("open failed");
"""


freelist = [i for i in range(20)]
opentable = [0 for i in range(20)]

for i in range(100):

    op = random.randint(0, 1)
    fileNum = random.randint(0, 24)  
    fid = random.randint(0, 19)  
   
    if(op == 0): 
        tableIdx = -1
        if(len(freelist)):
            tableIdx = freelist.pop(0)
            opentable[tableIdx] = 1
            prog +=\
f"""
    fid = Open(\"file{fileNum}.txt\");
    if(fid != {tableIdx}) MSG("fid not correct");
"""     
        else:
            prog +=\
f"""
    fid = Open(\"file{fileNum}.txt\");
    if(fid != -1) MSG("fid not correct");
""" 

    else: 
        if(opentable[fid]):
            opentable[fid] = 0
            freelist.append(fid)
            prog +=\
f"""
    success = Close({fid});
    if (success != 1) MSG("close not correct");
"""
        else:
            prog +=\
f"""
    success = Close({fid});
    if (success == 1) MSG("close not correct");
"""            


## close 

prog +=\
"""
    for(i = 0; i < 20; i++){
        success = Close(i);
        //if (success != 1) MSG("close failed");
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
