

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

    success = Close(20);
    if (success == 1) MSG("[0] close not correct 1");

    success = Close(-3);
    if (success == 1) MSG("[1] close not correct 1");

    fid = Open("file22.txt");
    if(fid != 0) MSG("[2] fid not correct 2");

    success = Close(-4);
    if (success == 1) MSG("[3] close not correct 1");

    success = Close(0);
    if (success != 1) MSG("[4] close not correct 2");

    fid = Open("file28.txt");
    if(fid != -1) MSG("[5] fid not correct 1");

    fid = Open("file22.txt");
    if(fid != 1) MSG("[6] fid not correct 2");

    success = Close(14);
    if (success == 1) MSG("[7] close not correct 3");

    success = Close(18);
    if (success == 1) MSG("[8] close not correct 3");

    fid = Open("file35.txt");
    if(fid != -1) MSG("[9] fid not correct 1");

    success = Close(11);
    if (success == 1) MSG("[10] close not correct 3");

    success = Close(30);
    if (success == 1) MSG("[11] close not correct 1");

    fid = Open("file36.txt");
    if(fid != -1) MSG("[12] fid not correct 1");

    fid = Open("file-6.txt");
    if(fid != -1) MSG("[13] fid not correct 1");

    fid = Open("file30.txt");
    if(fid != -1) MSG("[14] fid not correct 1");

    fid = Open("file0.txt");
    if(fid != 2) MSG("[15] fid not correct 2");

    success = Close(-8);
    if (success == 1) MSG("[16] close not correct 1");

    fid = Open("file33.txt");
    if(fid != -1) MSG("[17] fid not correct 1");

    success = Close(8);
    if (success == 1) MSG("[18] close not correct 3");

    success = Close(-7);
    if (success == 1) MSG("[19] close not correct 1");

    fid = Open("file24.txt");
    if(fid != 3) MSG("[20] fid not correct 2");

    success = Close(3);
    if (success != 1) MSG("[21] close not correct 2");

    fid = Open("file-6.txt");
    if(fid != -1) MSG("[22] fid not correct 1");

    fid = Open("file22.txt");
    if(fid != 4) MSG("[23] fid not correct 2");

    success = Close(16);
    if (success == 1) MSG("[24] close not correct 3");

    fid = Open("file5.txt");
    if(fid != 5) MSG("[25] fid not correct 2");

    fid = Open("file22.txt");
    if(fid != 6) MSG("[26] fid not correct 2");

    success = Close(26);
    if (success == 1) MSG("[27] close not correct 1");

    success = Close(11);
    if (success == 1) MSG("[28] close not correct 3");

    fid = Open("file28.txt");
    if(fid != -1) MSG("[29] fid not correct 1");

    success = Close(-7);
    if (success == 1) MSG("[30] close not correct 1");

    success = Close(5);
    if (success != 1) MSG("[31] close not correct 2");

    success = Close(30);
    if (success == 1) MSG("[32] close not correct 1");

    success = Close(2);
    if (success != 1) MSG("[33] close not correct 2");

    success = Close(-10);
    if (success == 1) MSG("[34] close not correct 1");

    fid = Open("file36.txt");
    if(fid != -1) MSG("[35] fid not correct 1");

    success = Close(0);
    if (success == 1) MSG("[36] close not correct 3");

    success = Close(9);
    if (success == 1) MSG("[37] close not correct 3");

    fid = Open("file20.txt");
    if(fid != 7) MSG("[38] fid not correct 2");

    fid = Open("file19.txt");
    if(fid != 8) MSG("[39] fid not correct 2");

    success = Close(11);
    if (success == 1) MSG("[40] close not correct 3");

    success = Close(9);
    if (success == 1) MSG("[41] close not correct 3");

    fid = Open("file4.txt");
    if(fid != 9) MSG("[42] fid not correct 2");

    success = Close(-9);
    if (success == 1) MSG("[43] close not correct 1");

    fid = Open("file24.txt");
    if(fid != 10) MSG("[44] fid not correct 2");

    fid = Open("file3.txt");
    if(fid != 11) MSG("[45] fid not correct 2");

    success = Close(-5);
    if (success == 1) MSG("[46] close not correct 1");

    success = Close(6);
    if (success != 1) MSG("[47] close not correct 2");

    fid = Open("file25.txt");
    if(fid != -1) MSG("[48] fid not correct 1");

    fid = Open("file30.txt");
    if(fid != -1) MSG("[49] fid not correct 1");

    fid = Open("file33.txt");
    if(fid != -1) MSG("[50] fid not correct 1");

    success = Close(-6);
    if (success == 1) MSG("[51] close not correct 1");

    success = Close(12);
    if (success == 1) MSG("[52] close not correct 3");

    fid = Open("file37.txt");
    if(fid != -1) MSG("[53] fid not correct 1");

    success = Close(6);
    if (success == 1) MSG("[54] close not correct 3");

    fid = Open("file1.txt");
    if(fid != 12) MSG("[55] fid not correct 2");

    fid = Open("file4.txt");
    if(fid != 13) MSG("[56] fid not correct 2");

    success = Close(26);
    if (success == 1) MSG("[57] close not correct 1");

    success = Close(10);
    if (success != 1) MSG("[58] close not correct 2");

    success = Close(21);
    if (success == 1) MSG("[59] close not correct 1");

    fid = Open("file-8.txt");
    if(fid != -1) MSG("[60] fid not correct 1");

    success = Close(16);
    if (success == 1) MSG("[61] close not correct 3");

    success = Close(-7);
    if (success == 1) MSG("[62] close not correct 1");

    fid = Open("file32.txt");
    if(fid != -1) MSG("[63] fid not correct 1");

    fid = Open("file33.txt");
    if(fid != -1) MSG("[64] fid not correct 1");

    fid = Open("file2.txt");
    if(fid != 14) MSG("[65] fid not correct 2");

    fid = Open("file22.txt");
    if(fid != 15) MSG("[66] fid not correct 2");

    fid = Open("file26.txt");
    if(fid != -1) MSG("[67] fid not correct 1");

    fid = Open("file-4.txt");
    if(fid != -1) MSG("[68] fid not correct 1");

    fid = Open("file20.txt");
    if(fid != 16) MSG("[69] fid not correct 2");

    success = Close(13);
    if (success != 1) MSG("[70] close not correct 2");

    fid = Open("file32.txt");
    if(fid != -1) MSG("[71] fid not correct 1");

    success = Close(13);
    if (success == 1) MSG("[72] close not correct 3");

    success = Close(-7);
    if (success == 1) MSG("[73] close not correct 1");

    success = Close(-7);
    if (success == 1) MSG("[74] close not correct 1");

    fid = Open("file-4.txt");
    if(fid != -1) MSG("[75] fid not correct 1");

    success = Close(14);
    if (success != 1) MSG("[76] close not correct 2");

    success = Close(24);
    if (success == 1) MSG("[77] close not correct 1");

    fid = Open("file13.txt");
    if(fid != 17) MSG("[78] fid not correct 2");

    success = Close(28);
    if (success == 1) MSG("[79] close not correct 1");

    success = Close(-7);
    if (success == 1) MSG("[80] close not correct 1");

    fid = Open("file-5.txt");
    if(fid != -1) MSG("[81] fid not correct 1");

    success = Close(-4);
    if (success == 1) MSG("[82] close not correct 1");

    fid = Open("file11.txt");
    if(fid != 18) MSG("[83] fid not correct 2");

    success = Close(11);
    if (success != 1) MSG("[84] close not correct 2");

    fid = Open("file8.txt");
    if(fid != 19) MSG("[85] fid not correct 2");

    fid = Open("file-8.txt");
    if(fid != -1) MSG("[86] fid not correct 1");

    success = Close(24);
    if (success == 1) MSG("[87] close not correct 1");

    success = Close(14);
    if (success == 1) MSG("[88] close not correct 3");

    success = Close(-2);
    if (success == 1) MSG("[89] close not correct 1");

    fid = Open("file22.txt");
    if(fid != 0) MSG("[90] fid not correct 2");

    success = Close(3);
    if (success == 1) MSG("[91] close not correct 3");

    success = Close(-5);
    if (success == 1) MSG("[92] close not correct 1");

    success = Close(-3);
    if (success == 1) MSG("[93] close not correct 1");

    fid = Open("file12.txt");
    if(fid != 3) MSG("[94] fid not correct 2");

    fid = Open("file3.txt");
    if(fid != 5) MSG("[95] fid not correct 2");

    fid = Open("file11.txt");
    if(fid != 2) MSG("[96] fid not correct 2");

    success = Close(28);
    if (success == 1) MSG("[97] close not correct 1");

    fid = Open("file33.txt");
    if(fid != -1) MSG("[98] fid not correct 1");

    success = Close(5);
    if (success != 1) MSG("[99] close not correct 2");

    fid = Open("file35.txt");
    if(fid != -1) MSG("[100] fid not correct 1");

    success = Close(5);
    if (success == 1) MSG("[101] close not correct 3");

    success = Close(-3);
    if (success == 1) MSG("[102] close not correct 1");

    success = Close(-2);
    if (success == 1) MSG("[103] close not correct 1");

    success = Close(-7);
    if (success == 1) MSG("[104] close not correct 1");

    success = Close(4);
    if (success != 1) MSG("[105] close not correct 2");

    success = Close(19);
    if (success != 1) MSG("[106] close not correct 2");

    fid = Open("file-5.txt");
    if(fid != -1) MSG("[107] fid not correct 1");

    success = Close(-7);
    if (success == 1) MSG("[108] close not correct 1");

    success = Close(22);
    if (success == 1) MSG("[109] close not correct 1");

    fid = Open("file7.txt");
    if(fid != 6) MSG("[110] fid not correct 2");

    fid = Open("file26.txt");
    if(fid != -1) MSG("[111] fid not correct 1");

    success = Close(30);
    if (success == 1) MSG("[112] close not correct 1");

    fid = Open("file-5.txt");
    if(fid != -1) MSG("[113] fid not correct 1");

    fid = Open("file1.txt");
    if(fid != 10) MSG("[114] fid not correct 2");

    success = Close(-10);
    if (success == 1) MSG("[115] close not correct 1");

    success = Close(-7);
    if (success == 1) MSG("[116] close not correct 1");

    success = Close(-2);
    if (success == 1) MSG("[117] close not correct 1");

    success = Close(26);
    if (success == 1) MSG("[118] close not correct 1");

    fid = Open("file32.txt");
    if(fid != -1) MSG("[119] fid not correct 1");

    for(i = 0; i < 20; i++){
        success = Close(i);
        //if (success != 1) MSG("close failed");
    }


	Halt();
}

