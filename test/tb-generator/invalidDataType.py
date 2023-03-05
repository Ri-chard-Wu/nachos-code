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

inputs = {
    ("\"file1.txt\"", 1),
    (12,             -1),
    (3.6,            -1),
    ("\"file12.txt\"", 1),
    ("\"file1.txt\"", 1)
}

for input in inputs:
    prog +=\
f"""
    fid = Open({input[0]});
    if(fid != {input[1]}) MSG("fid not correct 1");
"""            



inputs = {
    ("\"lalala\"",   -1),
    (12,             -1),
    (0,               1),
    (3.6,            -1),
    (1,               1)
}

for input in inputs:
    prog +=\
f"""
    success = Close({input[0]});
    if (success != {input[1]}) MSG("[close not correct 1");
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
