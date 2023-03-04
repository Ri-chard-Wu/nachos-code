#include "syscall.h"


int main(void)
{
	char test[] = "abcdefghijklmnopqrstuvwxyz";
	int pk_sz = 2;
	int n_pk = 13;	
	int success= Create("file1.test");
	OpenFileId fid;
	int i;
	if (success != 1) MSG("Failed on creating file");
	
	fid = Open("file1.test");
	
	// MSG("fid: ");
	// PrintInt(fid);

	if (fid < 0) MSG("Failed on opening file");


	for (i = 0; i < 26; i += pk_sz) {
		int count = Write(test + i, pk_sz, fid);
		if (count != pk_sz) MSG("Failed on writing file");
	}
       
	success = Close(fid);
	if (success != 1) MSG("Failed on closing file");
	MSG("Success on creating file1.test");
	Halt();
}

