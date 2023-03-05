

#include "syscall.h"

int main(void)
{


    int fids[25];
    int pk_sz = 13;
    int n_pk = 2;
    int failed = 0;
    OpenFileId fid;
    int i;
    int success;

    char buffer[] = "In this tutorial, we discussed how to escape curly braces in f-strings in Python. We first discussed the basics of the f-strings and the use of the curly braces. We then discussed how to escape curly braces by using them twice as {{ and }}. We also discussed using curly braces thrice to escape them and print the missing values";

    success = Create("file0.txt");
    if (success != 1) failed = 1;

    success = Create("file1.txt");
    if (success != 1) failed = 1;

    success = Create("file2.txt");
    if (success != 1) failed = 1;

    success = Create("file3.txt");
    if (success != 1) failed = 1;

    success = Create("file4.txt");
    if (success != 1) failed = 1;

    success = Create("file5.txt");
    if (success != 1) failed = 1;

    success = Create("file6.txt");
    if (success != 1) failed = 1;

    success = Create("file7.txt");
    if (success != 1) failed = 1;

    success = Create("file8.txt");
    if (success != 1) failed = 1;

    success = Create("file9.txt");
    if (success != 1) failed = 1;

    success = Create("file10.txt");
    if (success != 1) failed = 1;

    success = Create("file11.txt");
    if (success != 1) failed = 1;

    success = Create("file12.txt");
    if (success != 1) failed = 1;

    success = Create("file13.txt");
    if (success != 1) failed = 1;

    success = Create("file14.txt");
    if (success != 1) failed = 1;

    success = Create("file15.txt");
    if (success != 1) failed = 1;

    success = Create("file16.txt");
    if (success != 1) failed = 1;

    success = Create("file17.txt");
    if (success != 1) failed = 1;

    success = Create("file18.txt");
    if (success != 1) failed = 1;

    success = Create("file19.txt");
    if (success != 1) failed = 1;

    success = Create("file20.txt");
    if (success != 1) failed = 1;

    success = Create("file21.txt");
    if (success != 1) failed = 1;

    success = Create("file22.txt");
    if (success != 1) failed = 1;

    success = Create("file23.txt");
    if (success != 1) failed = 1;

    success = Create("file24.txt");
    if (success != 1) failed = 1;

    fid = Open("file0.txt");
    fids[0] = fid;

    fid = Open("file1.txt");
    fids[1] = fid;

    fid = Open("file2.txt");
    fids[2] = fid;

    fid = Open("file3.txt");
    fids[3] = fid;

    fid = Open("file4.txt");
    fids[4] = fid;

    fid = Open("file5.txt");
    fids[5] = fid;

    fid = Open("file6.txt");
    fids[6] = fid;

    fid = Open("file7.txt");
    fids[7] = fid;

    fid = Open("file8.txt");
    fids[8] = fid;

    fid = Open("file9.txt");
    fids[9] = fid;

    fid = Open("file10.txt");
    fids[10] = fid;

    fid = Open("file11.txt");
    fids[11] = fid;

    fid = Open("file12.txt");
    fids[12] = fid;

    fid = Open("file13.txt");
    fids[13] = fid;

    fid = Open("file14.txt");
    fids[14] = fid;

    fid = Open("file15.txt");
    fids[15] = fid;

    fid = Open("file16.txt");
    fids[16] = fid;

    fid = Open("file17.txt");
    fids[17] = fid;

    fid = Open("file18.txt");
    fids[18] = fid;

    fid = Open("file19.txt");
    fids[19] = fid;

    fid = Open("file20.txt");
    fids[20] = fid;

    fid = Open("file21.txt");
    fids[21] = fid;

    fid = Open("file22.txt");
    fids[22] = fid;

    fid = Open("file23.txt");
    fids[23] = fid;

    fid = Open("file24.txt");
    fids[24] = fid;

    for(i = 0; i < 20; i++){
        if(fids[i] < 0 ) failed = 1;
    }

    for(i = 19; i < 25; i++){
        if(fids[i] != -1 ) failed = 1;
    }

    for (i = 0; i < 328; i += 82) {
        int count = Write(buffer + 0 + i, 82, 7);
        if (count != 82) failed = 1;
    }

    for (i = 0; i < 328; i += 41) {
        int count = Write(buffer + 0 + i, 41, 5);
        if (count != 41) failed = 1;
    }

    for (i = 0; i < 328; i += 164) {
        int count = Write(buffer + 0 + i, 164, 7);
        if (count != 164) failed = 1;
    }

    for (i = 0; i < 328; i += 2) {
        int count = Write(buffer + 0 + i, 2, 7);
        if (count != 2) failed = 1;
    }

    for (i = 0; i < 328; i += 2) {
        int count = Write(buffer + 0 + i, 2, 18);
        if (count != 2) failed = 1;
    }

    for (i = 0; i < 328; i += 8) {
        int count = Write(buffer + 0 + i, 8, 17);
        if (count != 8) failed = 1;
    }

    for (i = 0; i < 328; i += 82) {
        int count = Write(buffer + 0 + i, 82, 5);
        if (count != 82) failed = 1;
    }

    for (i = 0; i < 328; i += 164) {
        int count = Write(buffer + 0 + i, 164, 10);
        if (count != 164) failed = 1;
    }

    for (i = 0; i < 328; i += 4) {
        int count = Write(buffer + 0 + i, 4, 2);
        if (count != 4) failed = 1;
    }

    for (i = 0; i < 328; i += 164) {
        int count = Write(buffer + 0 + i, 164, 6);
        if (count != 164) failed = 1;
    }

    for (i = 0; i < 328; i += 8) {
        int count = Write(buffer + 0 + i, 8, 21);
        if (count != -1) failed = 1;
    }

    for (i = 0; i < 328; i += 82) {
        int count = Write(buffer + 0 + i, 82, 19);
        if (count != 82) failed = 1;
    }

    for (i = 0; i < 328; i += 4) {
        int count = Write(buffer + 0 + i, 4, 20);
        if (count != -1) failed = 1;
    }

    for (i = 0; i < 328; i += 82) {
        int count = Write(buffer + 0 + i, 82, 15);
        if (count != 82) failed = 1;
    }

    for (i = 0; i < 328; i += 41) {
        int count = Write(buffer + 0 + i, 41, 23);
        if (count != -1) failed = 1;
    }

    for (i = 0; i < 328; i += 4) {
        int count = Write(buffer + 0 + i, 4, 3);
        if (count != 4) failed = 1;
    }

    for (i = 0; i < 328; i += 4) {
        int count = Write(buffer + 0 + i, 4, 7);
        if (count != 4) failed = 1;
    }

    for (i = 0; i < 328; i += 2) {
        int count = Write(buffer + 0 + i, 2, 23);
        if (count != -1) failed = 1;
    }

    for (i = 0; i < 328; i += 41) {
        int count = Write(buffer + 0 + i, 41, 24);
        if (count != -1) failed = 1;
    }

    for (i = 0; i < 328; i += 4) {
        int count = Write(buffer + 0 + i, 4, 2);
        if (count != 4) failed = 1;
    }

    for (i = 0; i < 328; i += 82) {
        int count = Write(buffer + 0 + i, 82, 21);
        if (count != -1) failed = 1;
    }

    for (i = 0; i < 328; i += 2) {
        int count = Write(buffer + 0 + i, 2, 20);
        if (count != -1) failed = 1;
    }

    for (i = 0; i < 328; i += 4) {
        int count = Write(buffer + 0 + i, 4, 17);
        if (count != 4) failed = 1;
    }

    for (i = 0; i < 328; i += 82) {
        int count = Write(buffer + 0 + i, 82, 8);
        if (count != 82) failed = 1;
    }

    for (i = 0; i < 328; i += 41) {
        int count = Write(buffer + 0 + i, 41, 20);
        if (count != -1) failed = 1;
    }

    for (i = 0; i < 328; i += 8) {
        int count = Write(buffer + 0 + i, 8, 22);
        if (count != -1) failed = 1;
    }

    for (i = 0; i < 328; i += 41) {
        int count = Write(buffer + 0 + i, 41, 7);
        if (count != 41) failed = 1;
    }

    for (i = 0; i < 328; i += 2) {
        int count = Write(buffer + 0 + i, 2, 23);
        if (count != -1) failed = 1;
    }

    for (i = 0; i < 328; i += 41) {
        int count = Write(buffer + 0 + i, 41, 17);
        if (count != 41) failed = 1;
    }

    for (i = 0; i < 328; i += 4) {
        int count = Write(buffer + 0 + i, 4, 13);
        if (count != 4) failed = 1;
    }

    for (i = 0; i < 328; i += 2) {
        int count = Write(buffer + 0 + i, 2, 24);
        if (count != -1) failed = 1;
    }

    for (i = 0; i < 328; i += 2) {
        int count = Write(buffer + 0 + i, 2, 8);
        if (count != 2) failed = 1;
    }

    for (i = 0; i < 328; i += 2) {
        int count = Write(buffer + 0 + i, 2, 20);
        if (count != -1) failed = 1;
    }

    for (i = 0; i < 328; i += 4) {
        int count = Write(buffer + 0 + i, 4, 20);
        if (count != -1) failed = 1;
    }

    for (i = 0; i < 328; i += 82) {
        int count = Write(buffer + 0 + i, 82, 9);
        if (count != 82) failed = 1;
    }

    for (i = 0; i < 328; i += 41) {
        int count = Write(buffer + 0 + i, 41, 14);
        if (count != 41) failed = 1;
    }

    for (i = 0; i < 328; i += 164) {
        int count = Write(buffer + 0 + i, 164, 14);
        if (count != 164) failed = 1;
    }

    for (i = 0; i < 328; i += 2) {
        int count = Write(buffer + 0 + i, 2, 19);
        if (count != 2) failed = 1;
    }

    for (i = 0; i < 328; i += 2) {
        int count = Write(buffer + 0 + i, 2, 13);
        if (count != 2) failed = 1;
    }

    for (i = 0; i < 328; i += 2) {
        int count = Write(buffer + 0 + i, 2, 18);
        if (count != 2) failed = 1;
    }

    for (i = 0; i < 328; i += 164) {
        int count = Write(buffer + 0 + i, 164, 14);
        if (count != 164) failed = 1;
    }

    for (i = 0; i < 328; i += 41) {
        int count = Write(buffer + 0 + i, 41, 9);
        if (count != 41) failed = 1;
    }

    for (i = 0; i < 328; i += 82) {
        int count = Write(buffer + 0 + i, 82, 12);
        if (count != 82) failed = 1;
    }

    for (i = 0; i < 328; i += 41) {
        int count = Write(buffer + 0 + i, 41, 19);
        if (count != 41) failed = 1;
    }

    for (i = 0; i < 328; i += 41) {
        int count = Write(buffer + 0 + i, 41, 15);
        if (count != 41) failed = 1;
    }

    for (i = 0; i < 328; i += 41) {
        int count = Write(buffer + 0 + i, 41, 16);
        if (count != 41) failed = 1;
    }

    for (i = 0; i < 328; i += 8) {
        int count = Write(buffer + 0 + i, 8, 10);
        if (count != 8) failed = 1;
    }

    for (i = 0; i < 328; i += 4) {
        int count = Write(buffer + 0 + i, 4, 22);
        if (count != -1) failed = 1;
    }

    for (i = 0; i < 328; i += 4) {
        int count = Write(buffer + 0 + i, 4, 9);
        if (count != 4) failed = 1;
    }

    for (i = 0; i < 328; i += 41) {
        int count = Write(buffer + 0 + i, 41, 11);
        if (count != 41) failed = 1;
    }

    for (i = 0; i < 328; i += 2) {
        int count = Write(buffer + 0 + i, 2, 12);
        if (count != 2) failed = 1;
    }

    for (i = 0; i < 328; i += 82) {
        int count = Write(buffer + 0 + i, 82, 10);
        if (count != 82) failed = 1;
    }

    for (i = 0; i < 328; i += 164) {
        int count = Write(buffer + 0 + i, 164, 7);
        if (count != 164) failed = 1;
    }

    for(i = 0; i < 25; i++){
        if(fids[i] != -1 ){
            success = Close(fids[i]);
            if (success != 1) failed = 1;
        }
    }

    if(failed){
        MSG("failed");
    }else{
        MSG("passed");
    }


	Halt();
}

