

#include "syscall.h"

int main(void)
{


    int pk_sz = 13;
    int n_pk = 2;
    int failed = 0;
    OpenFileId fid;
    int i;
    int success;

    success = Create("file0.txt");
    if (success != 1) MSG("open failed");

    success = Create("file1.txt");
    if (success != 1) MSG("open failed");

    success = Create("file2.txt");
    if (success != 1) MSG("open failed");

    success = Create("file3.txt");
    if (success != 1) MSG("open failed");

    success = Create("file4.txt");
    if (success != 1) MSG("open failed");

    success = Create("file5.txt");
    if (success != 1) MSG("open failed");

    success = Create("file6.txt");
    if (success != 1) MSG("open failed");

    success = Create("file7.txt");
    if (success != 1) MSG("open failed");

    success = Create("file8.txt");
    if (success != 1) MSG("open failed");

    success = Create("file9.txt");
    if (success != 1) MSG("open failed");

    success = Create("file10.txt");
    if (success != 1) MSG("open failed");

    success = Create("file11.txt");
    if (success != 1) MSG("open failed");

    success = Create("file12.txt");
    if (success != 1) MSG("open failed");

    success = Create("file13.txt");
    if (success != 1) MSG("open failed");

    success = Create("file14.txt");
    if (success != 1) MSG("open failed");

    success = Create("file15.txt");
    if (success != 1) MSG("open failed");

    success = Create("file16.txt");
    if (success != 1) MSG("open failed");

    success = Create("file17.txt");
    if (success != 1) MSG("open failed");

    success = Create("file18.txt");
    if (success != 1) MSG("open failed");

    success = Create("file19.txt");
    if (success != 1) MSG("open failed");

    success = Create("file20.txt");
    if (success != 1) MSG("open failed");

    success = Create("file21.txt");
    if (success != 1) MSG("open failed");

    success = Create("file22.txt");
    if (success != 1) MSG("open failed");

    success = Create("file23.txt");
    if (success != 1) MSG("open failed");

    success = Create("file24.txt");
    if (success != 1) MSG("open failed");

    fid = Open("file14.txt");
    if(fid != 0) MSG("fid not correct");

    fid = Open("file2.txt");
    if(fid != 1) MSG("fid not correct");

    fid = Open("file19.txt");
    if(fid != 2) MSG("fid not correct");

    fid = Open("file24.txt");
    if(fid != 3) MSG("fid not correct");

    success = Close(11);
    if (success == 1) MSG("close not correct");

    fid = Open("file22.txt");
    if(fid != 4) MSG("fid not correct");

    success = Close(4);
    if (success != 1) MSG("close not correct");

    fid = Open("file22.txt");
    if(fid != 5) MSG("fid not correct");

    success = Close(5);
    if (success != 1) MSG("close not correct");

    fid = Open("file21.txt");
    if(fid != 6) MSG("fid not correct");

    fid = Open("file19.txt");
    if(fid != 7) MSG("fid not correct");

    success = Close(12);
    if (success == 1) MSG("close not correct");

    fid = Open("file14.txt");
    if(fid != 8) MSG("fid not correct");

    success = Close(0);
    if (success != 1) MSG("close not correct");

    fid = Open("file4.txt");
    if(fid != 9) MSG("fid not correct");

    fid = Open("file0.txt");
    if(fid != 10) MSG("fid not correct");

    success = Close(0);
    if (success == 1) MSG("close not correct");

    fid = Open("file4.txt");
    if(fid != 11) MSG("fid not correct");

    success = Close(7);
    if (success != 1) MSG("close not correct");

    fid = Open("file5.txt");
    if(fid != 12) MSG("fid not correct");

    success = Close(8);
    if (success != 1) MSG("close not correct");

    success = Close(1);
    if (success != 1) MSG("close not correct");

    success = Close(2);
    if (success != 1) MSG("close not correct");

    success = Close(8);
    if (success == 1) MSG("close not correct");

    success = Close(9);
    if (success != 1) MSG("close not correct");

    success = Close(3);
    if (success != 1) MSG("close not correct");

    success = Close(1);
    if (success == 1) MSG("close not correct");

    fid = Open("file18.txt");
    if(fid != 13) MSG("fid not correct");

    success = Close(1);
    if (success == 1) MSG("close not correct");

    success = Close(14);
    if (success == 1) MSG("close not correct");

    success = Close(18);
    if (success == 1) MSG("close not correct");

    fid = Open("file11.txt");
    if(fid != 14) MSG("fid not correct");

    fid = Open("file19.txt");
    if(fid != 15) MSG("fid not correct");

    fid = Open("file11.txt");
    if(fid != 16) MSG("fid not correct");

    fid = Open("file24.txt");
    if(fid != 17) MSG("fid not correct");

    success = Close(15);
    if (success != 1) MSG("close not correct");

    fid = Open("file8.txt");
    if(fid != 18) MSG("fid not correct");

    fid = Open("file2.txt");
    if(fid != 19) MSG("fid not correct");

    success = Close(2);
    if (success == 1) MSG("close not correct");

    fid = Open("file16.txt");
    if(fid != 4) MSG("fid not correct");

    success = Close(2);
    if (success == 1) MSG("close not correct");

    success = Close(18);
    if (success != 1) MSG("close not correct");

    fid = Open("file22.txt");
    if(fid != 5) MSG("fid not correct");

    success = Close(9);
    if (success == 1) MSG("close not correct");

    fid = Open("file6.txt");
    if(fid != 0) MSG("fid not correct");

    success = Close(6);
    if (success != 1) MSG("close not correct");

    success = Close(14);
    if (success != 1) MSG("close not correct");

    success = Close(5);
    if (success != 1) MSG("close not correct");

    success = Close(16);
    if (success != 1) MSG("close not correct");

    fid = Open("file3.txt");
    if(fid != 7) MSG("fid not correct");

    success = Close(3);
    if (success == 1) MSG("close not correct");

    success = Close(4);
    if (success != 1) MSG("close not correct");

    fid = Open("file17.txt");
    if(fid != 8) MSG("fid not correct");

    fid = Open("file8.txt");
    if(fid != 1) MSG("fid not correct");

    fid = Open("file21.txt");
    if(fid != 2) MSG("fid not correct");

    fid = Open("file21.txt");
    if(fid != 9) MSG("fid not correct");

    fid = Open("file10.txt");
    if(fid != 3) MSG("fid not correct");

    fid = Open("file22.txt");
    if(fid != 15) MSG("fid not correct");

    success = Close(8);
    if (success != 1) MSG("close not correct");

    fid = Open("file19.txt");
    if(fid != 18) MSG("fid not correct");

    fid = Open("file18.txt");
    if(fid != 6) MSG("fid not correct");

    success = Close(13);
    if (success != 1) MSG("close not correct");

    fid = Open("file18.txt");
    if(fid != 14) MSG("fid not correct");

    success = Close(12);
    if (success != 1) MSG("close not correct");

    success = Close(9);
    if (success != 1) MSG("close not correct");

    success = Close(14);
    if (success != 1) MSG("close not correct");

    fid = Open("file12.txt");
    if(fid != 5) MSG("fid not correct");

    fid = Open("file12.txt");
    if(fid != 16) MSG("fid not correct");

    success = Close(16);
    if (success != 1) MSG("close not correct");

    success = Close(10);
    if (success != 1) MSG("close not correct");

    fid = Open("file1.txt");
    if(fid != 4) MSG("fid not correct");

    success = Close(3);
    if (success != 1) MSG("close not correct");

    fid = Open("file3.txt");
    if(fid != 8) MSG("fid not correct");

    success = Close(19);
    if (success != 1) MSG("close not correct");

    success = Close(19);
    if (success == 1) MSG("close not correct");

    fid = Open("file0.txt");
    if(fid != 13) MSG("fid not correct");

    fid = Open("file14.txt");
    if(fid != 12) MSG("fid not correct");

    fid = Open("file23.txt");
    if(fid != 9) MSG("fid not correct");

    fid = Open("file9.txt");
    if(fid != 14) MSG("fid not correct");

    success = Close(8);
    if (success != 1) MSG("close not correct");

    success = Close(6);
    if (success != 1) MSG("close not correct");

    fid = Open("file21.txt");
    if(fid != 16) MSG("fid not correct");

    success = Close(18);
    if (success != 1) MSG("close not correct");

    success = Close(11);
    if (success != 1) MSG("close not correct");

    success = Close(6);
    if (success == 1) MSG("close not correct");

    success = Close(8);
    if (success == 1) MSG("close not correct");

    fid = Open("file4.txt");
    if(fid != 10) MSG("fid not correct");

    success = Close(15);
    if (success != 1) MSG("close not correct");

    success = Close(18);
    if (success == 1) MSG("close not correct");

    fid = Open("file24.txt");
    if(fid != 3) MSG("fid not correct");

    fid = Open("file17.txt");
    if(fid != 19) MSG("fid not correct");

    success = Close(8);
    if (success == 1) MSG("close not correct");

    success = Close(10);
    if (success != 1) MSG("close not correct");

    fid = Open("file7.txt");
    if(fid != 8) MSG("fid not correct");

    success = Close(19);
    if (success != 1) MSG("close not correct");

    success = Close(12);
    if (success != 1) MSG("close not correct");

    success = Close(16);
    if (success != 1) MSG("close not correct");

    fid = Open("file18.txt");
    if(fid != 6) MSG("fid not correct");

    fid = Open("file10.txt");
    if(fid != 18) MSG("fid not correct");

    fid = Open("file22.txt");
    if(fid != 11) MSG("fid not correct");

    for(i = 0; i < 20; i++){
        success = Close(i);
        //if (success != 1) MSG("close failed");
    }


	Halt();
}

