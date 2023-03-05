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
tableIdx = -1

for i in range(120):

    op = random.randint(0, 1)
    fileNum = random.randint(-10, 40)  
    fid = random.randint(-10, 30)  
   
    if(op == 0): 
        

        if(len(freelist)):

            if(fileNum < 0 or fileNum >= 25):
                prog +=\
f"""
    fid = Open(\"file{fileNum}.txt\");
    if(fid != -1) MSG("[{i}] fid not correct 1");
"""            
            else:       
                tableIdx = freelist.pop(0)
                opentable[tableIdx] = 1
                prog +=\
f"""
    fid = Open(\"file{fileNum}.txt\");
    if(fid != {tableIdx}) MSG("[{i}] fid not correct 2");
"""     
        else:
            prog +=\
f"""
    fid = Open(\"file{fileNum}.txt\");
    if(fid != -1) MSG("[{i}] fid not correct 3");
""" 







    else: 
        if(fid < 0 or fid >=20):
                prog +=\
f"""
    success = Close({fid});
    if (success == 1) MSG("[{i}] close not correct 1");
"""            
        else:
            if(opentable[fid]):
                opentable[fid] = 0
                freelist.append(fid)
                prog +=\
f"""
    success = Close({fid});
    if (success != 1) MSG("[{i}] close not correct 2");
"""
            else:
                prog +=\
f"""
    success = Close({fid});
    if (success == 1) MSG("[{i}] close not correct 3");
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
