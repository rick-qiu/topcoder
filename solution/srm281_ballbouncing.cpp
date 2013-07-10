/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5919
*******************************************************************************/
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class BallBouncing {
public:
    int bounces(int rows, int columns, int startrow, int startcol, vector<string> holes);
};

int BallBouncing::bounces(int rows, int columns, int startrow, int startcol, vector<string> holes) {
    int ret;
    return ret;
}


int test0() {
    int rows = 8;
    int columns = 11;
    int startrow = 2;
    int startcol = 1;
    vector<string> holes = {"1 5", "5 3", "4 4"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int rows = 6;
    int columns = 5;
    int startrow = 5;
    int startcol = 3;
    vector<string> holes = {"1 3"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int rows = 6;
    int columns = 7;
    int startrow = 4;
    int startcol = 4;
    vector<string> holes = {};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int rows = 3;
    int columns = 3;
    int startrow = 1;
    int startcol = 1;
    vector<string> holes = {"2 2"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int rows = 5;
    int columns = 3;
    int startrow = 0;
    int startcol = 0;
    vector<string> holes = {"3 1"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int rows = 668;
    int columns = 527;
    int startrow = 102;
    int startcol = 94;
    vector<string> holes = {"3 362", "311 344", "34 367", "49 402", "158 280", "198 269", "256 211"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 290;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int rows = 1000000;
    int columns = 999999;
    int startrow = 0;
    int startcol = 0;
    vector<string> holes = {};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int rows = 6;
    int columns = 6;
    int startrow = 0;
    int startcol = 5;
    vector<string> holes = {"4 1", "3 2", "4 3", "2 1", "3 0", "5 2"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int rows = 83;
    int columns = 77;
    int startrow = 82;
    int startcol = 76;
    vector<string> holes = {"24 54", "6 3", "41 33", "67 60", "18 70", "69 16", "46 29", "45 20", "50 31", "15 27", "46 68", "50 21", "60 48", "39 70", "42 13", "14 44", "7 73", "80 38", "34 75", "64 21", "53 10", "3 54", "40 63"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int rows = 89;
    int columns = 69;
    int startrow = 0;
    int startcol = 68;
    vector<string> holes = {"86 18", "42 31", "25 22", "15 20", "24 33", "16 61", "50 33", "49 0", "57 6", "32 3", "22 4", "40 15", "1 20", "49 34", "83 19", "15 53", "15 16", "71 6", "65 48", "16 64", "16 4", "12 44", "87 23", "4 39", "34 6", "75 38", "19 21", "63 56", "85 13", "83 34", "65 27"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int rows = 82;
    int columns = 53;
    int startrow = 81;
    int startcol = 0;
    vector<string> holes = {"41 5", "65 47", "29 52", "78 51", "7 34", "68 2", "30 19", "45 46", "6 50", "3 6", "25 22", "57 25", "12 1", "1 20", "20 52", "40 0", "30 37", "59 19", "23 43", "40 41", "33 27", "61 24", "9 42", "61 51", "80 23", "67 21", "51 26", "70 36", "18 36", "59 25", "40 25", "65 15", "3 10", "15 2", "12 2", "0 11", "4 24"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int rows = 97;
    int columns = 96;
    int startrow = 0;
    int startcol = 0;
    vector<string> holes = {"47 34", "5 67", "9 3", "5 94", "6 64", "2 33", "26 78", "26 13", "29 55", "43 42", "27 82", "20 83", "55 51", "70 32", "42 31", "57 79", "51 34", "53 6", "25 65", "47 4", "27 5", "62 19", "2 27", "89 57", "36 76", "58 5", "18 24", "44 41", "82 7", "96 48", "84 35", "88 4", "31 56"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int rows = 98;
    int columns = 84;
    int startrow = 84;
    int startcol = 18;
    vector<string> holes = {"75 55", "47 83", "11 68", "90 46", "58 22", "8 63", "89 63", "41 49", "65 77", "55 20", "48 7", "46 63", "39 59", "83 17", "82 16", "81 15"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int rows = 1000000;
    int columns = 999999;
    int startrow = 1;
    int startcol = 1;
    vector<string> holes = {"0 0"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 3999995;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int rows = 987;
    int columns = 1;
    int startrow = 13;
    int startcol = 0;
    vector<string> holes = {"1 0"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 1959;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int rows = 1;
    int columns = 4732;
    int startrow = 0;
    int startcol = 131;
    vector<string> holes = {"0 4371"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 4240;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int rows = 1;
    int columns = 10000;
    int startrow = 0;
    int startcol = 0;
    vector<string> holes = {"0 9999"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 9999;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int rows = 999999;
    int columns = 1;
    int startrow = 0;
    int startcol = 0;
    vector<string> holes = {"999998 0"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 999998;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int rows = 23757;
    int columns = 953443;
    int startrow = 11659;
    int startcol = 523894;
    vector<string> holes = {"4833 925642", "8162 675942", "3986 873506", "10961 459266", "15231 93645", "1858 107716", "22310 197749", "6302 79472", "20972 199072", "17138 315831", "14776 8248", "14348 758269", "7527 756454", "3807 739625", "18826 28260", "12917 55912", "17841 492566", "20519 538818", "17840 721291", "14339 202385", "19737 155072", "4466 836685", "16574 200558", "18228 74979", "17405 417497", "13553 865176", "2519 444682", "20551 712978", "22462 847617", "21547 204208", "20819 19567", "12791 805032", "287 934536", "8890 254637", "18915 348274", "14961 628080", "6927 330530", "9755 251274", "20059 206480", "18729 689069", "23026 580667", "13955 248629", "8522 175666", "18575 32480", "19608 280356"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 19784;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int rows = 86000;
    int columns = 403824;
    int startrow = 25162;
    int startcol = 151823;
    vector<string> holes = {"71672 186197", "62171 44210", "28898 286926", "77467 283389", "4547 311415", "79848 98905", "64668 203791", "37024 252417", "70900 101719", "27096 8657", "75243 126740", "64102 306955", "38357 391753", "76351 83055", "74056 335520", "16617 148768", "73567 163256", "32043 386484", "41332 397298", "4629 64652", "71955 352434", "9664 339405", "70380 210132", "63039 344438", "58006 133287"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 51786;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int rows = 754601;
    int columns = 709403;
    int startrow = 608835;
    int startcol = 433199;
    vector<string> holes = {"278665 478110", "398063 278128", "578293 628986", "567442 595668", "513120 330267", "666453 26198", "377816 192532", "321902 681200", "523086 641380", "193730 633279", "274808 153014", "643215 424577", "428794 417731", "19528 188725", "468383 425623", "194272 496583", "582363 409010", "387220 462464", "649659 587723", "139567 391092", "364052 172198", "554069 119951", "711978 571401", "503509 567634", "653065 479859", "271067 414576", "409241 300040", "123542 549938", "145788 157184", "420851 97320", "507360 357816", "43868 337386", "621464 170973", "748369 426210", "496180 126372", "17992 556290"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 78710;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int rows = 569206;
    int columns = 915283;
    int startrow = 194440;
    int startcol = 854068;
    vector<string> holes = {"257196 365895", "13282 74449", "331224 256378", "165712 553192", "417964 607881", "123757 390421", "308060 280185", "539620 440215", "256942 564485", "169712 367067", "285770 657875", "247817 476359", "202674 893503", "413141 555371", "506843 544368", "518730 272298", "524764 145100", "213189 56623", "289843 787071", "183016 822894", "293238 112469", "467531 668198", "133933 143456", "460171 862077", "6718 334163", "410092 832981", "554426 750571", "362765 200644", "547733 703352", "195608 763131"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 26811;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int rows = 755482;
    int columns = 527417;
    int startrow = 465359;
    int startcol = 372463;
    vector<string> holes = {"232262 12486", "538192 309366", "672465 353950", "626692 358632"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 61988;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int rows = 44516;
    int columns = 632448;
    int startrow = 20839;
    int startcol = 610065;
    vector<string> holes = {"43860 247088", "13731 432698", "5690 152600", "29472 567964", "38097 479178", "1579 530757", "31319 91300", "27924 187297", "19080 460138", "12540 403220", "11329 430627", "31812 78018", "3979 217348", "14177 310807", "9920 498498", "2910 110270", "2949 327928", "30956 589870", "35188 178634", "4887 59504", "7293 107657", "2776 60056", "1058 507781", "18213 295171", "1344 441779", "37682 533", "23260 311575", "4494 386021", "17505 48386", "42710 76774", "27811 384162", "43182 591625", "8352 416845", "19217 198357", "5358 606885", "37251 405131", "24161 151111", "22390 428536", "12637 336952"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 20389;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int rows = 737289;
    int columns = 55410;
    int startrow = 666601;
    int startcol = 51251;
    vector<string> holes = {"433880 52641", "513518 29521", "246994 10967", "253218 52645", "659595 32666", "481214 38589", "431061 8876", "291338 7584", "301245 11266", "607744 53417", "343929 53912", "48109 13176", "494263 21150", "107736 19568", "390554 19775", "465335 37025", "394235 43983", "568556 37948", "314167 50519", "547025 15588", "70736 31001", "136580 27505", "575159 30403", "382897 5055", "719897 35106", "346307 37583", "725832 13703", "141043 32231", "696438 50262", "93742 34122", "566002 32425", "155278 53048", "132772 2841", "560582 39084", "307224 4524", "661730 36134", "37827 50426", "197512 40118", "585416 35978", "583333 10831", "99300 7724", "514953 30315", "360306 26497"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 13443;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int rows = 930215;
    int columns = 445390;
    int startrow = 37304;
    int startcol = 192082;
    vector<string> holes = {"107933 300975", "758842 204821", "376739 390996", "59627 77959", "149498 138373", "347433 36735", "759492 325367", "323167 162026", "348008 56071", "310170 195969", "740561 392365", "661802 324731", "14346 117062", "330156 349955", "71789 59933", "242206 28200", "131705 165216", "65087 337804", "702982 192126", "287972 390004", "913223 270472"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 24250;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int rows = 660313;
    int columns = 31061;
    int startrow = 649279;
    int startcol = 27755;
    vector<string> holes = {"53748 24200", "323551 393", "127947 6325", "227746 2713", "243853 18176", "260302 13674", "60529 3722", "115899 7267", "605089 25233", "443521 14248", "603105 5252"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 17027;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int rows = 586884;
    int columns = 791368;
    int startrow = 433566;
    int startcol = 746749;
    vector<string> holes = {"233981 400497", "185163 498237", "285749 372810"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 155787;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int rows = 431812;
    int columns = 468764;
    int startrow = 83249;
    int startcol = 384193;
    vector<string> holes = {"287547 461260", "162550 210670", "287420 237750", "209067 14490", "183579 99439", "157245 81971", "286654 316644", "382194 246178", "142515 57289", "329586 406021", "336310 195175", "10984 160811", "299819 68794", "190940 222471", "396203 403043", "222756 66509", "122608 448492", "230758 46955", "4028 65056", "271305 278249", "149742 294865", "138816 23031", "132797 289886", "227429 431123", "32182 205274", "292830 111393", "175826 95215", "51876 114459", "235339 138049", "206715 407030", "37671 290318", "345626 250877", "100488 276458", "407473 349060", "352834 311872", "14306 243443", "88098 176928", "244125 191183", "82672 164618", "126520 174703"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 3533;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int rows = 239017;
    int columns = 225168;
    int startrow = 76852;
    int startcol = 100743;
    vector<string> holes = {"219643 82216", "95040 184769", "141398 182744", "49580 58496", "185308 154674", "55604 53498", "97600 194927", "175127 2993", "76779 93635", "165198 139214", "34774 125960", "130793 108774", "85723 57729", "73618 47053", "53404 152928", "52413 60284", "77493 103825", "204806 19945", "149105 50247", "71799 79746", "9606 177301", "226753 118389", "105677 202136", "222841 61136", "95419 2482", "162749 60084", "224725 103550", "165746 20557", "42982 146920", "67553 47408", "69944 195318", "69613 215722", "157257 140987", "21948 80320", "110679 2021", "15775 111260", "83616 152957", "83295 178977", "206830 53664", "181184 151111", "52358 97632", "95379 89257", "131410 135963", "102600 171645", "131089 178906", "31904 187454", "118772 25605", "195639 128234", "110469 9885", "66099 175995"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 715;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int rows = 266394;
    int columns = 312439;
    int startrow = 199123;
    int startcol = 187607;
    vector<string> holes = {"199349 252352", "253885 287514", "10399 244424", "23349 40419", "102156 71186", "78262 87919", "42136 180868", "101705 34344", "54608 251819", "224017 228921", "116812 78957", "18559 17079", "195017 203785", "246286 115656", "19894 198869", "64544 54707", "177845 288107", "15299 118766", "224983 161727", "154200 224215", "44267 65418", "104668 83660", "225891 119511", "3309 77009", "187693 154780", "204266 245035", "147170 282333", "234176 39374", "158288 263089", "265317 234907", "85722 198825", "144246 89646", "58018 131473", "119682 233218", "95185 37926", "111287 31652", "23707 26930", "200639 264970", "172488 243260"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int rows = 124634;
    int columns = 111914;
    int startrow = 86366;
    int startcol = 80849;
    vector<string> holes = {"25423 25028", "26053 63637", "115452 81916", "27663 45760", "122565 84617", "18007 52631", "55589 60697", "15905 48426", "21551 108532", "119840 45916", "87546 97905", "101366 1958", "77184 19677", "45241 44489", "17367 8155", "32254 15351", "111931 71679"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 35637;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int rows = 321200;
    int columns = 311398;
    int startrow = 315927;
    int startcol = 274686;
    vector<string> holes = {"35876 234813", "18424 282995", "33534 235473", "76619 45428", "130289 1375", "279377 174366", "198572 73183", "161108 299764", "73129 246040", "203497 208287", "282432 125681", "251033 288296", "280591 282511", "194647 103934", "114538 110118", "261631 104492", "70936 234496", "294467 276795", "296542 133401", "123946 162834", "157207 296766", "97593 52249", "35144 302431", "131836 183142", "123947 21421", "269106 47874", "129746 158449", "53437 133755", "211494 247291", "82288 68334"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 29759;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int rows = 763480;
    int columns = 267679;
    int startrow = 691223;
    int startcol = 179688;
    vector<string> holes = {"197466 65744", "21013 260668", "63195 195393", "440965 33342", "742928 107009", "488868 53293", "751949 95745", "355427 178845", "497894 199405", "186655 158040", "725178 155184", "411642 202168"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 68375;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int rows = 321713;
    int columns = 769135;
    int startrow = 67222;
    int startcol = 36960;
    vector<string> holes = {"15186 8420", "295085 105937", "71075 184088", "70044 29072", "301846 193527", "54018 364773", "100686 685657"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 166064;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int rows = 689243;
    int columns = 101966;
    int startrow = 145230;
    int startcol = 94114;
    vector<string> holes = {"375190 63193", "305476 99607", "31751 70722", "649704 55824", "293742 101056", "185280 41281", "413368 98513", "614198 9645", "42107 74612", "527654 55865", "569572 80587", "586330 41299", "660355 28715", "83781 47027", "498962 75353", "565230 67781", "210250 81844", "555353 5428", "3907 52017", "332324 60321", "510366 82553", "59141 30697", "110208 24190", "585024 71478", "399319 53756", "624826 71889", "98554 9781", "29899 36439", "456583 56169", "650436 21392", "373250 57808", "284326 27420", "141574 21610", "363916 72945"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 5960;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int rows = 421696;
    int columns = 447105;
    int startrow = 167010;
    int startcol = 274651;
    vector<string> holes = {"357746 222036", "37335 416080", "179047 22833", "207689 93475", "32194 1707", "109527 21181"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 88277;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int rows = 489552;
    int columns = 674519;
    int startrow = 180192;
    int startcol = 155592;
    vector<string> holes = {"231842 535329", "302748 309161", "327600 180071", "143814 142719", "289158 535209", "90824 662150", "193655 279665", "120728 341749", "261685 412808", "24052 132614", "7505 378345", "300394 1211", "26654 653266", "6210 656632", "345273 41461", "52437 406107", "115900 358441", "408112 355933", "421585 600192", "175122 98580", "230182 230067", "361296 650698", "273873 428336", "415361 339159", "20444 324542", "257908 119740", "139055 233756", "99383 146007", "362952 645480", "158553 99465", "84644 79884", "394563 360704", "41030 11265", "239762 1203", "267781 170331", "127423 490585", "250674 182363"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 8201;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int rows = 960169;
    int columns = 52;
    int startrow = 628473;
    int startcol = 12;
    vector<string> holes = {"483514 2", "498696 12", "851128 47", "421012 23", "471798 8", "499373 22", "831416 10", "24699 8", "293462 27", "316152 50", "927729 3", "521583 17", "148907 24", "405794 47", "922010 49", "231910 38", "317741 43", "70915 36", "773998 28", "320967 20", "882875 0", "613841 41", "896958 0", "525489 22", "406634 25", "295040 30", "309882 40", "196874 42"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 82339;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int rows = 480010;
    int columns = 17;
    int startrow = 436240;
    int startcol = 8;
    vector<string> holes = {"365362 15", "46660 5", "163313 4", "11069 5", "243510 6", "121160 13", "455922 11", "419768 8"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 28067;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int rows = 424624;
    int columns = 83;
    int startrow = 155036;
    int startcol = 0;
    vector<string> holes = {"145629 2", "354610 37", "73185 29", "38814 40", "33475 33", "106093 45", "358340 79", "197513 2", "304722 7", "317539 52", "182751 49", "75374 24", "414980 32", "334938 18", "391248 23", "130454 32", "327916 23", "174303 20", "47817 75", "93033 59", "7909 59"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 36686;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int rows = 93927;
    int columns = 23;
    int startrow = 48431;
    int startcol = 20;
    vector<string> holes = {"27531 16"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 13036;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int rows = 50594;
    int columns = 82;
    int startrow = 28800;
    int startcol = 73;
    vector<string> holes = {"47164 61", "1708 12", "31277 44", "12275 79", "17187 19", "4338 57", "33496 27", "35308 39", "50483 57", "36849 71", "23841 0", "536 63", "40806 44", "45057 65", "45835 42", "30955 26", "38502 50", "47040 75", "28242 35", "5176 23", "22845 1", "14253 18", "20154 54", "8536 78", "37479 77", "13440 51", "4045 16", "9322 12", "39636 37", "27986 43", "32180 62", "17653 80", "2516 67", "46873 73", "33673 78", "36449 37", "41910 76", "34406 18", "7494 44", "10550 68", "37223 81", "3251 15", "22675 70", "27643 55", "1846 72", "39002 10", "16948 79", "10884 59", "3179 63", "379 58"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 608;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int rows = 700021;
    int columns = 94;
    int startrow = 442752;
    int startcol = 48;
    vector<string> holes = {"456085 8", "595497 18", "696607 70", "92278 40", "558999 27", "572001 80", "213994 78", "27213 66", "144822 85", "532933 38", "672622 2", "667723 79", "220848 13", "575121 70", "343231 76", "388224 12", "210166 92", "302553 24", "484669 75", "501908 9", "333232 72", "328676 28", "531355 87", "103793 90", "374385 35", "641291 50", "455092 29", "645632 20", "151574 60", "328653 90", "331617 38", "108493 80", "118174 57", "688960 62", "58779 81", "691475 72", "273053 45", "50533 2", "24061 35"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 6202;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int rows = 55244;
    int columns = 11;
    int startrow = 18189;
    int startcol = 3;
    vector<string> holes = {"9411 9", "2051 8", "30550 0", "36104 10", "13558 0", "16705 6", "22606 10", "6480 8", "54237 3"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 1124;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int rows = 685698;
    int columns = 3;
    int startrow = 656779;
    int startcol = 1;
    vector<string> holes = {"438621 1", "17127 2", "278027 1", "240683 1", "609134 0", "589447 2", "356742 0", "10788 1", "497477 0", "279022 2", "63396 2", "109744 0", "382096 0", "221887 1", "39344 0", "11779 1", "113741 1", "95095 1", "391019 1", "177889 1", "52714 0", "258999 2", "669709 0", "70336 0", "537183 0", "651392 1", "678173 0", "629971 1", "666948 0", "432595 1", "194864 0", "357018 2", "478357 1", "522361 1", "89424 2", "87439 1", "535968 1", "443995 1", "17047 0"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 3390;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int rows = 518232;
    int columns = 12;
    int startrow = 85798;
    int startcol = 3;
    vector<string> holes = {"52161 2", "17481 1", "279890 10", "38060 7", "61252 7", "307373 9", "488959 5", "338398 8", "94561 9", "363276 3", "204399 7", "146509 10", "307715 4", "140749 1", "149621 0", "270311 0", "281779 7", "274433 6", "175461 5", "204942 8", "145718 0", "452195 2", "319271 1", "182846 4", "179791 1", "213493 1", "408000 5", "25086 6", "314198 11", "390238 9", "448898 3", "513563 10", "10172 11", "500415 6", "113844 0", "200504 1", "169195 3", "441074 5", "444328 4", "407552 7", "393765 10", "140924 10", "333857 8", "146706 5", "208622 10", "436588 6", "274398 10", "295351 11"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 8087;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int rows = 16473;
    int columns = 16;
    int startrow = 4619;
    int startcol = 3;
    vector<string> holes = {"7595 14", "12415 15", "5778 15", "13171 10", "15259 5", "10287 5", "338 14", "13115 11", "9921 12", "14521 2", "822 0", "6362 15", "5308 12", "7122 5", "2145 15", "7057 0", "3098 9", "13579 7", "6318 0", "8136 4", "16285 5", "6004 7", "2853 10", "11140 13", "7734 7", "4982 2", "10686 8", "11365 13", "6596 14", "13764 9", "679 9", "6380 8", "5168 13", "12965 10", "642 1", "4368 12", "12372 2", "12062 15", "6490 6", "5175 5", "12427 8", "14872 13", "12459 11"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 1128;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int rows = 93;
    int columns = 226721;
    int startrow = 71;
    int startcol = 17445;
    vector<string> holes = {"87 23246", "25 91240", "20 122637", "36 104394", "18 58628", "38 66173", "7 179505", "74 100999", "45 172777", "13 174641", "66 143830", "92 75608", "53 77502", "56 28247", "34 48116", "32 213437", "7 46127", "3 11391", "51 216344", "50 214935", "85 126295", "35 143112", "15 182897", "9 220406", "61 88861", "6 183015", "41 172076", "19 60743", "36 220457", "51 178257", "3 125434", "92 130162", "85 27707", "59 149965", "9 120800", "69 113899", "91 221485", "21 216972", "63 21078", "35 197607", "54 84678", "25 75195", "76 51712", "81 177747", "49 183912", "74 102907", "54 75611", "87 125270"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 899;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int rows = 37;
    int columns = 751777;
    int startrow = 30;
    int startcol = 422116;
    vector<string> holes = {"23 244937", "17 210607", "24 467390", "24 678257", "20 421739", "12 443687", "5 196774"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 128839;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int rows = 56;
    int columns = 754674;
    int startrow = 51;
    int startcol = 691620;
    vector<string> holes = {"16 357839", "11 287688", "5 281710", "55 649555", "30 732555", "48 137635", "11 48275", "53 88689", "17 584340", "22 664398", "10 375309", "21 229139"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 27686;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int rows = 15;
    int columns = 170839;
    int startrow = 13;
    int startcol = 11255;
    vector<string> holes = {"7 117926", "6 120351", "4 69845", "10 165076", "12 136577", "12 160966", "5 24003", "13 134649", "10 12634", "13 138163", "10 119348", "14 96440"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 43968;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int rows = 2;
    int columns = 701985;
    int startrow = 0;
    int startcol = 569109;
    vector<string> holes = {"0 587702", "0 603968", "0 41335", "0 265691", "1 159507", "0 100326", "1 256888", "1 66518", "0 523007", "0 351494", "0 179847", "0 609731", "1 128487", "1 464284", "1 595331", "0 561257", "1 59464", "0 653147", "1 639404", "1 664772", "1 142464", "1 59459", "0 536138", "1 255723", "1 522572", "1 650107", "0 28825", "0 580434", "1 508162", "0 588431", "0 566111", "1 62849", "1 228745", "1 97793", "1 626918", "0 370475", "1 490558", "0 384908", "1 371204", "1 362721"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 13111;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int rows = 44;
    int columns = 94673;
    int startrow = 21;
    int startcol = 6086;
    vector<string> holes = {"24 30960", "2 74078", "23 87322", "8 37448", "0 11026", "7 19036", "28 85995", "10 79950", "13 80120", "6 64706", "17 21989", "13 28133", "34 67211", "17 75877", "23 36028", "21 5829", "1 15839", "9 28202", "30 26924", "17 17353", "17 22093", "10 69779", "43 41244", "12 60961", "5 7916", "25 16683", "24 77959", "42 36696", "8 27153", "4 52009"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 4669;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int rows = 87;
    int columns = 668458;
    int startrow = 33;
    int startcol = 121689;
    vector<string> holes = {"1 625259", "52 193740", "68 382964", "63 278526", "56 584322", "47 441001", "32 170453", "49 573812", "65 200871", "39 480913", "14 544093", "41 315891", "73 498050", "31 303629", "63 401070", "75 571497", "45 397737", "63 180681", "41 548920", "24 444508"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 69135;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int rows = 55;
    int columns = 856008;
    int startrow = 6;
    int startcol = 640200;
    vector<string> holes = {"44 701554", "23 494154", "27 293831", "41 208064", "7 192438", "48 225184", "27 470072", "17 142362", "42 850880", "21 121009", "25 775197", "4 399629", "43 369487", "46 179676", "53 781362", "22 103759", "47 316880", "53 356142", "24 708891"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 25251;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int rows = 83;
    int columns = 978134;
    int startrow = 5;
    int startcol = 182741;
    vector<string> holes = {"52 716932", "13 514112", "60 909663", "0 580470", "37 516918", "38 949363", "9 117922", "15 977250", "59 8536"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 268881;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int rows = 28;
    int columns = 662452;
    int startrow = 15;
    int startcol = 550814;
    vector<string> holes = {"23 531194", "26 61707", "11 636153", "19 398475", "11 160741", "0 45395", "23 54945", "18 118189", "1 455153", "16 234469", "25 126468", "19 425408", "22 531727", "18 549651", "5 340324", "6 199247", "18 640837", "24 422585", "22 139417", "0 454007", "22 455941", "22 539667", "6 505406", "16 174402", "0 161613", "13 170188"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int rows = 625339;
    int columns = 330002;
    int startrow = 57750;
    int startcol = 255986;
    vector<string> holes = {"261510 163938"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 245780;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int rows = 282861;
    int columns = 446006;
    int startrow = 36877;
    int startcol = 314579;
    vector<string> holes = {"184097 431892"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 540982;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int rows = 805737;
    int columns = 134121;
    int startrow = 799493;
    int startcol = 58679;
    vector<string> holes = {"472455 33759", "736264 27171", "24373 2025", "387804 119966", "487324 45150"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 10024;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int rows = 621321;
    int columns = 723323;
    int startrow = 213926;
    int startcol = 643811;
    vector<string> holes = {"459574 138542", "152463 276835", "490984 28520"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 872568;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int rows = 280877;
    int columns = 481811;
    int startrow = 120015;
    int startcol = 211107;
    vector<string> holes = {"145782 437233", "280298 78154", "261198 196331", "256773 82413"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 171363;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int rows = 225426;
    int columns = 239452;
    int startrow = 207968;
    int startcol = 46910;
    vector<string> holes = {"50826 13623"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 224616;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int rows = 568413;
    int columns = 400205;
    int startrow = 178185;
    int startcol = 368690;
    vector<string> holes = {"454496 296374", "416638 301568"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 115693;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int rows = 372166;
    int columns = 472320;
    int startrow = 275423;
    int startcol = 452796;
    vector<string> holes = {"283808 152972", "48153 12596"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 344301;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int rows = 89379;
    int columns = 170442;
    int startrow = 7678;
    int startcol = 127058;
    vector<string> holes = {"81829 116277", "77408 57071", "3178 113270", "31183 54437"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 12744;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int rows = 499999;
    int columns = 999998;
    int startrow = 0;
    int startcol = 0;
    vector<string> holes = {};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int rows = 499999;
    int columns = 999998;
    int startrow = 0;
    int startcol = 0;
    vector<string> holes = {"220935 667509", "421821 421267", "115650 507706", "413847 395691", "173802 841050", "65566 632297", "330444 495836", "340790 910415", "54768 977164", "144771 569199", "340050 995808", "301988 375869", "470407 304339", "456839 128312", "227978 256944", "94303 318365", "317651 960886", "62160 561371", "5803 956276", "184451 630023", "171750 739152", "235018 688813", "214828 649735", "425822 640541", "240856 511502", "222152 968099", "14822 461243", "160103 350375", "404837 498517", "450764 787090", "382577 137570", "361232 133900", "358639 893511", "80323 739303", "499319 381412", "465078 245561", "302156 454385", "388107 605990", "15046 866931", "54567 685656", "327463 965080", "244634 548146", "268076 328567", "412170 184034", "128414 208880", "376348 319967", "154623 33141", "489571 486800", "332071 511450", "262529 131392"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int rows = 545517;
    int columns = 545517;
    int startrow = 272758;
    int startcol = 272758;
    vector<string> holes = {"323478 186868", "404850 265589", "37351 416574", "142997 232355", "491972 516654", "115869 367814", "335040 483345", "158607 360207", "51592 520203", "484859 221101", "255098 474779", "224270 178754", "506094 519289", "97243 292690", "201799 216723", "400656 223673", "529077 19188", "482116 67877", "21204 177157", "4792 400804", "400689 312734", "311937 448191", "520894 267394", "116781 436645", "452880 30076", "89604 258352", "23644 439701", "6240 280079", "52529 443535", "238471 261637", "166791 54018", "437399 249667", "364935 356449", "178945 57075", "76458 259031", "71283 290099", "452046 301892", "123951 276339", "241177 198228", "96491 7408", "324230 249007", "542820 305054", "208412 83270", "416481 479707", "38517 107320", "82561 253835", "25194 22503", "296092 318359", "57683 152162", "240521 268647"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int rows = 187719;
    int columns = 187719;
    int startrow = 42908;
    int startcol = 113296;
    vector<string> holes = {"127233 4733", "155307 117274", "93939 144785", "102388 99468", "1072 57178", "98105 135963", "59559 118492", "168370 86516", "9314 141791", "25944 108110", "98585 87254", "5580 59226", "179687 106989", "146885 12443", "102675 36874", "3990 180511", "70384 49606", "131100 11348", "27315 101946", "370 164848", "109247 14658", "148615 67599", "90676 79205", "5566 10764", "53455 116883", "19091 58636", "128630 61216", "79476 114501", "146280 104293", "127367 3121", "20347 130038", "130685 1695", "70822 152831", "86314 165265", "142582 34748", "1912 110764", "124816 32463", "135717 58163", "9479 43415", "163043 122891", "161876 65168", "74528 179597", "144631 73128", "21507 86219", "52746 160512", "38834 89406", "88727 149999", "67512 13856", "133194 8506", "23933 98920"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int rows = 351369;
    int columns = 351369;
    int startrow = 32896;
    int startcol = 206392;
    vector<string> holes = {"236841 209215", "143710 96807", "282188 31824", "219038 275252", "211424 195442", "182869 257138", "76827 88032", "34813 334517", "137186 199518", "141993 279233", "349101 292462", "230809 323009", "287730 29861", "18034 304751", "168188 265261", "138752 67912", "5941 108821", "183218 328857", "337281 105496", "290496 34318", "217215 126799", "183573 168882", "314180 75652", "322690 83286", "68048 100795", "158387 37887", "146670 343", "290523 177104", "325524 301813", "27629 243878", "314497 336620", "186399 200565", "33391 337760", "290530 313704", "322988 169164", "90493 34650", "229250 71271", "123205 295555", "63934 241377", "46759 218984", "107789 111123", "8524 246804", "137947 71911", "25782 125942", "180062 70913", "255540 187362", "90684 156988", "312439 230140", "223026 65895", "83928 93652"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int rows = 167590;
    int columns = 167590;
    int startrow = 30836;
    int startcol = 132870;
    vector<string> holes = {"57001 66402", "149582 95498", "57413 35971", "6450 99803", "46136 121142", "83651 3261", "88258 93904", "8273 21721", "139636 10361", "160440 84607", "98591 35634", "126501 31802", "161476 44609", "62377 28792", "93400 193", "46650 116481", "77474 84847", "60096 64871", "119037 135183", "69232 140823", "106416 74952", "72761 10503", "154415 165205", "35127 101743", "26118 51241", "80408 41357", "52436 147634", "111021 52510", "128152 14309", "75592 15644", "95722 74228", "157168 145222", "120596 101469", "25846 69280", "100336 149914", "60676 139164", "76006 23508", "69926 57398", "55221 40706", "30605 147738", "94011 123658", "98533 112945", "27799 52052", "160780 6557", "118012 167536", "153264 47731", "127244 15998", "141728 146280", "20887 90453", "8850 83010"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int rows = 309463;
    int columns = 309463;
    int startrow = 83248;
    int startcol = 223640;
    vector<string> holes = {"111958 110970", "297167 242088", "175365 230422", "14533 276399", "102768 60216", "268499 243990", "222091 124861", "241489 76206", "90937 169359", "142641 305331", "147271 111268", "192294 35344", "181865 44683", "219922 227327", "220334 245721", "270116 156073", "95900 718", "20432 256201", "293231 123175", "235016 214478", "210625 152346", "56340 10830", "39611 145204", "275016 1766", "158817 276955", "85607 162029", "215074 125363", "202029 103556", "96933 297631", "267126 253537", "145727 119261", "93590 117224", "147390 299557", "180764 265186", "39603 285877", "249676 24201", "186401 51322", "91536 181523", "152697 153596", "280584 224273", "49142 86195", "153914 168329", "15391 224927", "119167 259323", "306858 40037", "264997 39192", "207413 46263", "165362 17499", "130470 287264", "213533 40500"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int rows = 967553;
    int columns = 967553;
    int startrow = 846079;
    int startcol = 580075;
    vector<string> holes = {"849234 82430", "204497 279770", "464681 257743", "183374 310927", "210058 797117", "47158 11689", "824296 378415", "955845 59095", "730277 197869", "388377 506944", "575232 761477", "865458 479379", "364929 510313", "522911 160817", "597018 590757", "433247 912285", "681855 759146", "624784 23037", "172323 190039", "520131 494549", "598141 283282", "672255 351949", "290624 260138", "636992 537815", "440080 434885", "720857 847482", "474967 22508", "447709 91229", "289887 337261", "85705 937628", "763044 870058", "953088 911185", "635109 691811", "885908 862704", "349092 317541", "27064 944133", "376968 795232", "115253 8003", "245386 554793", "733090 132875", "658077 706174", "404336 14296", "102069 460353", "322183 178234", "314535 383222", "499902 714478", "366798 497686", "732224 696889", "652359 171145", "831261 438049"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int rows = 909306;
    int columns = 909306;
    int startrow = 575951;
    int startcol = 56619;
    vector<string> holes = {"463791 138770", "266788 569572", "804250 70891", "378234 586591", "591294 586044", "418595 383445", "217621 570353", "800195 431863", "191945 901073", "391810 899665", "833686 874740", "808720 132352", "872519 765033", "890927 528951", "107268 445447", "548121 273626", "587023 223863", "739548 776152", "894448 312052", "141339 825366", "228691 810507", "27526 362483", "721982 864127", "904867 65777", "206596 545749", "582241 477265", "249419 306362", "102188 66085", "90950 781457", "28701 278235", "388820 145162", "630823 59737", "875074 73901", "156248 550890", "433313 202966", "555688 716715", "640347 238255", "142331 84354", "21915 641296", "279024 403061", "881868 436845", "673540 604166", "44096 663540", "880292 429972", "138225 144321", "544886 480344", "104060 341655", "869760 156476", "487154 222837", "547975 415302"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int rows = 472854;
    int columns = 472854;
    int startrow = 417422;
    int startcol = 60067;
    vector<string> holes = {"282256 388934", "414698 112297", "250040 399275", "17729 381442", "28591 457265", "78930 419386", "286075 195088", "168345 189090", "431817 65573", "142830 139504", "268683 208417", "106581 325640", "133505 138723", "411154 325338", "420943 234573", "277836 276383", "245555 233782", "164993 138851", "23444 293104", "291476 211669", "463513 390560", "397193 343802", "376182 280900", "321982 463819", "455201 346795", "117432 195067", "58618 224305", "257197 243875", "448793 303292", "427878 252232", "185778 149351", "373010 125688", "252772 438092", "120522 52860", "293531 360289", "170181 281235", "225036 60410", "213616 184170", "308446 80824", "157922 96244", "271632 34583", "363965 106998", "457252 293498", "445637 144026", "233228 82365", "276501 221811", "380224 46669", "250585 445815", "268129 40527", "393930 251124"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int rows = 543324;
    int columns = 543324;
    int startrow = 175274;
    int startcol = 61464;
    vector<string> holes = {"85752 456948", "348748 443226", "375111 481070", "244545 100018", "515860 359778", "64174 395991", "113434 288053", "281577 539940", "255504 327989", "50834 122437", "270941 344388", "23384 77160", "196071 122352", "122920 326920", "508413 104215", "518900 353605", "402940 358408", "119412 64563", "276127 242794", "538833 168813", "56506 449110", "206499 449269", "335763 346478", "282382 431269", "5185 469435", "120906 190234", "26962 376941", "349293 42285", "302715 236388", "523624 65981", "17153 312411", "9883 495121", "199044 321806", "421486 520702", "175149 183303", "425223 264401", "272033 349997", "166722 48153", "46634 213995", "467053 276296", "284196 122934", "118581 75133", "139453 431195", "493648 308315", "438910 529852", "148114 450601", "515922 240180", "129415 166461", "142413 461315", "269356 173872"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int rows = 442522;
    int columns = 442522;
    int startrow = 413740;
    int startcol = 359944;
    vector<string> holes = {"145772 155066", "94087 355777", "27777 364205", "19539 307044", "29315 349035", "433628 326234", "397691 21431", "339110 96358", "439566 248851", "110822 400928", "377351 320068", "361232 142515", "271872 248337", "345842 392902", "302008 302601", "224602 98675", "206275 139054", "36307 239048", "289335 385236", "293551 145516", "405333 246927", "261659 413401", "18064 419684", "367294 407573", "306458 292869", "136820 369685", "186238 274591", "365169 420679", "144563 232340", "370243 358246", "30660 116549", "138660 217843", "423462 299142", "305732 113854", "33763 292969", "25581 75646", "129057 159809", "416529 252674", "275427 354699", "127615 133392", "431785 275984", "101468 221093", "88716 322985", "143496 190072", "420689 277448", "143775 97874", "408635 13752", "383932 12640", "368123 30582", "17794 294157"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int rows = 917864;
    int columns = 917864;
    int startrow = 87480;
    int startcol = 916022;
    vector<string> holes = {"85851 4316", "152351 673347", "421172 572746", "138417 341350", "144617 283388", "897343 692988", "336113 361900", "232479 255834", "807898 201363", "111300 327061", "819106 234121", "867784 760074", "774140 255332", "749093 862767", "817155 852179", "770045 219145", "274473 754734", "414126 142676", "412462 104432", "668478 748550", "369423 353765", "855714 151588", "579124 460605", "649266 746167", "750019 807285", "153847 862404", "816897 553548", "246439 340491", "749510 233509", "60864 59316", "268008 413828", "23727 867309", "632053 398704", "641985 64409", "341416 456954", "609920 274814", "51669 417204", "357239 183960", "171587 751686", "740586 225856", "290506 436091", "635476 214819", "228146 229559", "915395 232606", "290152 201596", "155071 639457", "249804 174472", "701511 166659", "504251 785386", "828000 541"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int rows = 687035;
    int columns = 687035;
    int startrow = 237480;
    int startcol = 161608;
    vector<string> holes = {"195430 453123", "402009 63377", "522298 220502", "429787 204554", "668766 166830", "427858 253528", "439895 226921", "156555 6739", "257101 330066", "502105 44278", "133024 449798", "40122 140517", "321458 529672", "50231 200758", "584441 314809", "565581 151336", "303305 529697", "113991 38119", "40606 377804", "254571 143250", "574047 4254", "632513 350704", "629648 467189", "643630 545638", "116783 296316", "537831 136635", "245241 435138", "310111 108792", "434537 484594", "122759 301936", "309721 611624", "52314 295566", "280605 2368", "67096 437069", "603692 175266", "128293 280191", "98549 238706", "529491 190167", "315473 595270", "411394 224413", "191310 336169", "326348 659745", "66094 611988", "593026 197520", "571498 426086", "294979 76619", "686036 635801", "591986 264090", "83837 549594", "15749 164265"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int rows = 1000000;
    int columns = 999999;
    int startrow = 66246;
    int startcol = 84332;
    vector<string> holes = {"854350 4982"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 1662562;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int rows = 5;
    int columns = 7;
    int startrow = 3;
    int startcol = 4;
    vector<string> holes = {"0 6", "2 3"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int rows = 1;
    int columns = 5;
    int startrow = 0;
    int startcol = 1;
    vector<string> holes = {"0 3"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int rows = 1;
    int columns = 1;
    int startrow = 0;
    int startcol = 0;
    vector<string> holes = {};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int rows = 1;
    int columns = 2;
    int startrow = 0;
    int startcol = 0;
    vector<string> holes = {};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int rows = 1;
    int columns = 2;
    int startrow = 0;
    int startcol = 0;
    vector<string> holes = {"0 1"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int rows = 1;
    int columns = 2;
    int startrow = 0;
    int startcol = 1;
    vector<string> holes = {"0 0"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int rows = 2;
    int columns = 1;
    int startrow = 0;
    int startcol = 0;
    vector<string> holes = {};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int rows = 2;
    int columns = 1;
    int startrow = 0;
    int startcol = 0;
    vector<string> holes = {"1 0"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int rows = 2;
    int columns = 1;
    int startrow = 1;
    int startcol = 0;
    vector<string> holes = {"0 0"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int rows = 1000000;
    int columns = 999999;
    int startrow = 0;
    int startcol = 0;
    vector<string> holes = {"999950 0", "999951 0", "999952 0", "999953 0", "999954 0", "999955 0", "999956 0", "999957 0", "999958 0", "999959 0", "999960 0", "999961 0", "999962 0", "999963 0", "999964 0", "999965 0", "999966 0", "999967 0", "999968 0", "999969 0", "999970 0", "999971 0", "999972 0", "999973 0", "999974 0", "999975 0", "999976 0", "999977 0", "999978 0", "999979 0", "999980 0", "999981 0", "999982 0", "999983 0", "999984 0", "999985 0", "999986 0", "999987 0", "999988 0", "999989 0", "999990 0", "999991 0", "999992 0", "999993 0", "999994 0", "999995 0", "999996 0", "999997 0", "999998 0", "999999 0"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 1999898;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int rows = 1000000;
    int columns = 999999;
    int startrow = 66246;
    int startcol = 84332;
    vector<string> holes = {"854350 4982"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 1662562;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int rows = 1000000;
    int columns = 999999;
    int startrow = 66246;
    int startcol = 84332;
    vector<string> holes = {};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int rows = 999999;
    int columns = 999998;
    int startrow = 123456;
    int startcol = 745321;
    vector<string> holes = {"12221 44432", "324324 342231", "33111 44564"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 2691839;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int rows = 1000000;
    int columns = 1000000;
    int startrow = 0;
    int startcol = 0;
    vector<string> holes = {"0 1", "0 2", "0 3", "0 4", "0 5", "0 6", "0 7", "0 8", "0 9", "0 10", "0 11", "0 12", "0 13", "0 14", "0 15", "0 16", "0 17", "0 18", "0 19", "0 20", "0 21", "0 22", "0 23", "0 24", "0 25", "0 26", "0 27", "0 28", "0 29", "0 30", "0 31", "0 32", "0 33", "0 34", "0 35", "0 36", "0 37", "0 38", "0 39", "0 40", "0 41", "0 42", "0 43", "0 44", "0 45", "0 46", "0 47", "0 48", "0 49", "0 50"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int rows = 1000000;
    int columns = 999900;
    int startrow = 1;
    int startcol = 2;
    vector<string> holes = {"1 1", "2 2", "3 3", "4 4", "5 5", "6 6", "7 7", "8 8", "9 9", "10 10", "11 11", "12 12", "13 13", "14 14", "15 15", "16 16", "17 17", "18 18", "19 19", "20 20", "21 21", "22 22", "23 23", "24 24", "25 25", "26 26", "27 27", "28 28", "29 29", "30 30", "31 31", "32 32", "33 33", "34 34", "35 35", "36 36", "37 37", "38 38", "39 39", "40 40", "41 41", "42 42", "43 43", "44 44", "45 45", "46 46", "47 47", "48 48", "49 49", "50 50"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int rows = 1000000;
    int columns = 100000;
    int startrow = 100;
    int startcol = 101;
    vector<string> holes = {"99 100"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int rows = 5;
    int columns = 7;
    int startrow = 3;
    int startcol = 4;
    vector<string> holes = {"0 6", "2 3"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int rows = 5;
    int columns = 5;
    int startrow = 4;
    int startcol = 4;
    vector<string> holes = {"3 3"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int rows = 1000000;
    int columns = 999999;
    int startrow = 49999;
    int startcol = 999998;
    vector<string> holes = {"999999 999998"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 2099997;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int rows = 732307;
    int columns = 826891;
    int startrow = 243723;
    int startcol = 1;
    vector<string> holes = {"204397 1"};
    BallBouncing* pObj = new BallBouncing();
    clock_t start = clock();
    int result = pObj->bounces(rows, columns, startrow, startcol, holes);
    clock_t end = clock();
    delete pObj;
    int expected = 2668975;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}



int main(int argc, char* argv[]) {
    int passed = 0;
    int failed = 0;
    test0() == 0 ? ++passed : ++failed;
    test1() == 0 ? ++passed : ++failed;
    test2() == 0 ? ++passed : ++failed;
    test3() == 0 ? ++passed : ++failed;
    test4() == 0 ? ++passed : ++failed;
    test5() == 0 ? ++passed : ++failed;
    test6() == 0 ? ++passed : ++failed;
    test7() == 0 ? ++passed : ++failed;
    test8() == 0 ? ++passed : ++failed;
    test9() == 0 ? ++passed : ++failed;
    test10() == 0 ? ++passed : ++failed;
    test11() == 0 ? ++passed : ++failed;
    test12() == 0 ? ++passed : ++failed;
    test13() == 0 ? ++passed : ++failed;
    test14() == 0 ? ++passed : ++failed;
    test15() == 0 ? ++passed : ++failed;
    test16() == 0 ? ++passed : ++failed;
    test17() == 0 ? ++passed : ++failed;
    test18() == 0 ? ++passed : ++failed;
    test19() == 0 ? ++passed : ++failed;
    test20() == 0 ? ++passed : ++failed;
    test21() == 0 ? ++passed : ++failed;
    test22() == 0 ? ++passed : ++failed;
    test23() == 0 ? ++passed : ++failed;
    test24() == 0 ? ++passed : ++failed;
    test25() == 0 ? ++passed : ++failed;
    test26() == 0 ? ++passed : ++failed;
    test27() == 0 ? ++passed : ++failed;
    test28() == 0 ? ++passed : ++failed;
    test29() == 0 ? ++passed : ++failed;
    test30() == 0 ? ++passed : ++failed;
    test31() == 0 ? ++passed : ++failed;
    test32() == 0 ? ++passed : ++failed;
    test33() == 0 ? ++passed : ++failed;
    test34() == 0 ? ++passed : ++failed;
    test35() == 0 ? ++passed : ++failed;
    test36() == 0 ? ++passed : ++failed;
    test37() == 0 ? ++passed : ++failed;
    test38() == 0 ? ++passed : ++failed;
    test39() == 0 ? ++passed : ++failed;
    test40() == 0 ? ++passed : ++failed;
    test41() == 0 ? ++passed : ++failed;
    test42() == 0 ? ++passed : ++failed;
    test43() == 0 ? ++passed : ++failed;
    test44() == 0 ? ++passed : ++failed;
    test45() == 0 ? ++passed : ++failed;
    test46() == 0 ? ++passed : ++failed;
    test47() == 0 ? ++passed : ++failed;
    test48() == 0 ? ++passed : ++failed;
    test49() == 0 ? ++passed : ++failed;
    test50() == 0 ? ++passed : ++failed;
    test51() == 0 ? ++passed : ++failed;
    test52() == 0 ? ++passed : ++failed;
    test53() == 0 ? ++passed : ++failed;
    test54() == 0 ? ++passed : ++failed;
    test55() == 0 ? ++passed : ++failed;
    test56() == 0 ? ++passed : ++failed;
    test57() == 0 ? ++passed : ++failed;
    test58() == 0 ? ++passed : ++failed;
    test59() == 0 ? ++passed : ++failed;
    test60() == 0 ? ++passed : ++failed;
    test61() == 0 ? ++passed : ++failed;
    test62() == 0 ? ++passed : ++failed;
    test63() == 0 ? ++passed : ++failed;
    test64() == 0 ? ++passed : ++failed;
    test65() == 0 ? ++passed : ++failed;
    test66() == 0 ? ++passed : ++failed;
    test67() == 0 ? ++passed : ++failed;
    test68() == 0 ? ++passed : ++failed;
    test69() == 0 ? ++passed : ++failed;
    test70() == 0 ? ++passed : ++failed;
    test71() == 0 ? ++passed : ++failed;
    test72() == 0 ? ++passed : ++failed;
    test73() == 0 ? ++passed : ++failed;
    test74() == 0 ? ++passed : ++failed;
    test75() == 0 ? ++passed : ++failed;
    test76() == 0 ? ++passed : ++failed;
    test77() == 0 ? ++passed : ++failed;
    test78() == 0 ? ++passed : ++failed;
    test79() == 0 ? ++passed : ++failed;
    test80() == 0 ? ++passed : ++failed;
    test81() == 0 ? ++passed : ++failed;
    test82() == 0 ? ++passed : ++failed;
    test83() == 0 ? ++passed : ++failed;
    test84() == 0 ? ++passed : ++failed;
    test85() == 0 ? ++passed : ++failed;
    test86() == 0 ? ++passed : ++failed;
    test87() == 0 ? ++passed : ++failed;
    test88() == 0 ? ++passed : ++failed;
    test89() == 0 ? ++passed : ++failed;
    test90() == 0 ? ++passed : ++failed;
    test91() == 0 ? ++passed : ++failed;
    test92() == 0 ? ++passed : ++failed;
    test93() == 0 ? ++passed : ++failed;
    test94() == 0 ? ++passed : ++failed;
    test95() == 0 ? ++passed : ++failed;
    test96() == 0 ? ++passed : ++failed;
    test97() == 0 ? ++passed : ++failed;
    test98() == 0 ? ++passed : ++failed;
    test99() == 0 ? ++passed : ++failed;
    test100() == 0 ? ++passed : ++failed;
    test101() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15805598&rd=8078&pm=5919
********************************************************************************
#include <vector>
#include <string>
using namespace std;
 
class BallBouncing {
  public:
  int abs (int x) {if (x<0) return -x; else return x;};
  int hr[50], hc[50], n;
  int bounces (int r, int c, int rr, int cc, vector <string> hh) {
    n=hh.size ();
    for (int i=0; i<n; i++)
      sscanf (&hh[i][0], "%d %d", &hr[i], &hc[i]);
    for (int i=0; i<n; i++)
      hr[i]=2*hr[i]+1, hc[i]=2*hc[i]+1;
    r*=2; c*=2; rr*=2; cc*=2;
    int dr=1; int dc=1;
    int rb, cb, m, cnt=0, f;
    do {
      if (dr>0) rb=r; else rb=0;
      if (dc>0) cb=c; else cb=0;
      if (abs (rb-rr)<abs (cb-cc)) m=abs (rb-rr), f=1; else m=abs (cb-cc), f=0;
      if (abs (rb-rr)==abs (cb-cc)) f=2;
      for (int i=0; i<n; i++)
        if ((hr[i]-rr)*dr>=0&&(hc[i]-cc)*dc>=0&&(hr[i]-rr)*dr==(hc[i]-cc)*dc)
          return cnt;
      rr+=m*dr;
      cc+=m*dc;
      if (f==2) dr=-dr, dc=-dc; else
      if (f) dr=-dr; else dc=-dc;
      ++cnt;
    } while (cnt<5000000); 
    return -1;
  };
};

********************************************************************************
*******************************************************************************/