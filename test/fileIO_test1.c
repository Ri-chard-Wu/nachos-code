#include "syscall.h"







int main(void)
{
	
	char test[] = "abcdefghijklmnopqrstuvwxyz";
	int pk_sz = 2;
	int n_pk = 13;	
	int failed = 0;
	OpenFileId fid;
	int i;


	int success= Create("file1.test");
	if (success != 1) failed = 1;
	
	fid = Open("file1.test");
	if (fid < 0) failed = 1;


	for (i = 0; i < 26; i += pk_sz) {
		int count = Write(test + i, pk_sz, fid);
		if (count != pk_sz) failed = 1;
	}
       
	success = Close(fid);
	if (success != 1) failed = 1;

	if(failed){
		MSG("test  1: failed");
	}else{
		MSG("test  1: passed");
	}

	
	Halt();
}

