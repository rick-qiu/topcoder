/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7521
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

class RoadCrossing {
public:
    double passTime(vector<string> pedestrians, int roadWidth, int carWidth, int carArrival);
};

double RoadCrossing::passTime(vector<string> pedestrians, int roadWidth, int carWidth, int carArrival) {
    double ret;
    return ret;
}


int test0() {
    vector<string> pedestrians = {"0 1", "2 5"};
    int roadWidth = 8;
    int carWidth = 4;
    int carArrival = 3;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> pedestrians = {"40 1"};
    int roadWidth = 100;
    int carWidth = 100;
    int carArrival = 41;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 140.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> pedestrians = {"0 1", "0 2", "0 4", "0 8", "0 16", "0 32", "0 64", "0 128", "0 256"};
    int roadWidth = 100;
    int carWidth = 50;
    int carArrival = 3;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 3.125;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> pedestrians = {"0 1", "0 2", "0 4", "0 8", "0 16", "0 32", "0 64", "0 128", "0 256"};
    int roadWidth = 100;
    int carWidth = 51;
    int carArrival = 3;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 51.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> pedestrians = {"1000 1", "100 1"};
    int roadWidth = 1000;
    int carWidth = 1000;
    int carArrival = 1000;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 2000.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> pedestrians = {"0 10", "10 10", "20 10", "30 10", "40 10", "50 10", "60 10", "70 10", "80 10", "90 10"};
    int roadWidth = 500;
    int carWidth = 101;
    int carArrival = 40;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 100.1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> pedestrians = {"1 1"};
    int roadWidth = 1000;
    int carWidth = 1000;
    int carArrival = 1;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> pedestrians = {"1 1"};
    int roadWidth = 1000;
    int carWidth = 1000;
    int carArrival = 2;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1001.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> pedestrians = {};
    int roadWidth = 1000;
    int carWidth = 1000;
    int carArrival = 1000;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> pedestrians = {"613 71"};
    int roadWidth = 1000;
    int carWidth = 792;
    int carArrival = 616;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 624.1549295774648;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> pedestrians = {"195 282", "269 682", "38 29", "592 654", "255 241", "923 689", "923 689", "98 814", "867 799"};
    int roadWidth = 913;
    int carWidth = 426;
    int carArrival = 596;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 596.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> pedestrians = {"0 100", "1 800"};
    int roadWidth = 1000;
    int carWidth = 601;
    int carArrival = 2;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0014285714285713;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> pedestrians = {"2 68", "5 1", "10 25", "9 59", "3 65", "6 46", "2 28", "2 92", "6 43", "8 37", "2 5", "3 54", "3 83", "2 17", "9 96", "8 27", "2 39", "10 13", "8 100", "6 95", "4 12", "3 34", "4 65", "2 12", "4 69", "8 45", "3 58", "8 60", "4 42", "10 79", "7 36", "1 43", "9 7", "1 43", "5 49", "7 6", "1 30", "1 51", "7 2", "4 49", "10 24", "5 55", "7 41", "7 77", "2 9", "5 40", "7 24", "8 39", "9 83", "10 42"};
    int roadWidth = 1000;
    int carWidth = 300;
    int carArrival = 10;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 98.66666666666667;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> pedestrians = {"2 1", "5 1", "10 1", "9 1", "3 1", "6 1", "2 1", "2 1", "6 1", "8 1", "2 1", "3 1", "3 1", "2 1", "9 1", "8 1", "2 1", "10 1", "8 1", "6 1", "4 1", "3 1", "4 1", "2 1", "4 1", "8 1", "3 1", "8 1", "4 1", "10 1", "7 1", "1 1", "9 1", "1 1", "5 1", "7 1", "1 1", "1 1", "7 1", "4 1", "10 1", "5 1", "7 1", "7 1", "2 1", "5 1", "7 1", "8 1", "9 1", "10 1"};
    int roadWidth = 1000;
    int carWidth = 999;
    int carArrival = 10;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1009.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> pedestrians = {"42 18", "335 11", "170 5", "479 19", "963 15", "706 6", "282 28", "962 12", "996 3", "828 7", "392 25", "903 4", "293 23", "422 27", "719 6", "448 7", "772 19", "870 23", "668 20", "36 25", "704 22", "323 4", "674 15", "142 2", "254 29", "548 15", "663 28", "38 20", "724 22", "530 29", "317 6", "191 13", "289 17", "41 3", "265 29", "447 16", "891 10", "371 21", "7 22", "394 9", "630 24", "85 5", "757 21", "967 27", "932 29", "945 10", "627 14", "538 29", "119 13", "930 12"};
    int roadWidth = 1000;
    int carWidth = 800;
    int carArrival = 343;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 601.3333333333334;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> pedestrians = {"328 8", "150 1", "467 5", "936 19", "700 5", "258 6", "952 8", "993 12", "823 3", "359 17", "899 5", "292 14", "404 3", "699 17", "442 16", "757 7", "868 19", "642 13", "18 20", "675 15", "291 12", "656 14", "126 5", "225 12", "522 9", "630 5", "17 18", "715 20", "502 2", "304 19", "168 16", "288 843", "31 107", "245 943", "419 649", "875 806", "346 730", "992 351", "369 102", "610 549", "60 624"};
    int roadWidth = 955;
    int carWidth = 381;
    int carArrival = 757;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 811.4285714285714;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> pedestrians = {"918 17", "928 9", "602 20", "532 4", "102 19", "907 3", "829 2", "635 16", "682 19", "964 931", "642 307", "16 387", "898 746", "264 73", "751 830", "92 574", "963 513", "152 291", "333 637"};
    int roadWidth = 768;
    int carWidth = 215;
    int carArrival = 656;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 656.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> pedestrians = {"323 53", "925 151"};
    int roadWidth = 725;
    int carWidth = 531;
    int carArrival = 967;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 967.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> pedestrians = {"990 12", "442 18", "726 8", "931 4", "177 10", "197 19", "416 9", "479 7", "397 11", "900 9", "744 12", "393 16", "597 20", "527 18", "568 4", "599 2", "281 11", "365 17", "592 1", "321 2", "649 20", "273 5", "53 15", "392 20", "894 19", "109 9", "725 8", "624 14", "790 4", "296 2", "791 18", "295 15", "917 17", "580 12", "503 10", "776 17", "218 4", "839 9", "975 610", "192 703", "90 486", "493 344", "285 588", "441 504", "445 201", "560 619", "784 797", "570 282"};
    int roadWidth = 799;
    int carWidth = 791;
    int carArrival = 10;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> pedestrians = {"520 3", "32 13", "172 20", "951 18", "796 12", "137 9", "186 12", "248 15", "308 16", "336 7", "857 7", "840 434", "821 143", "860 417", "312 999", "11 652", "554 700", "865 477", "70 390", "598 713", "983 511"};
    int roadWidth = 870;
    int carWidth = 769;
    int carArrival = 862;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 864.4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> pedestrians = {"240 10", "998 4", "158 6", "61 6", "589 7", "823 18", "165 13", "696 15", "957 10", "366 10", "404 13", "431 16", "434 10", "115 13", "697 1", "123 14", "263 4", "671 17", "527 10", "847 18", "193 10", "294 16", "258 17", "464 6", "443 3", "96 15", "285 2", "781 12", "309 4", "154 356", "912 54", "831 809", "309 946", "293 757", "623 559", "481 983", "173 145", "122 223", "530 162"};
    int roadWidth = 451;
    int carWidth = 94;
    int carArrival = 174;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 174.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> pedestrians = {"328 468", "150 501", "467 725", "936 359", "700 465", "258 146", "952 828", "993 492", "823 943", "359 437", "899 605", "292 154", "404 383", "699 717", "442 896", "757 727", "868 539", "642 913", "18 300", "675 895", "291 12", "656 14", "126 5", "225 12", "522 9", "630 5", "17 18", "715 20", "502 2", "304 19", "168 6", "288 3", "31 7", "245 3", "419 9", "875 6", "346 10", "992 1", "369 2", "610 9", "60 4"};
    int roadWidth = 955;
    int carWidth = 915;
    int carArrival = 757;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1907.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> pedestrians = {"282 932", "407 945", "312 627", "517 538", "80 119", "525 930", "84 834", "629 640", "921 705", "304 978", "364 674", "717 2", "53 5", "824 11", "558 18", "496 18", "277 7", "618 2", "743 16", "559 16", "40 12", "149 1", "703 2", "427 7", "161 8", "326 8", "275 8", "373 4", "901 6", "749 10", "570 2", "922 3"};
    int roadWidth = 507;
    int carWidth = 494;
    int carArrival = 31;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 31.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> pedestrians = {"744 592", "393 656", "597 360", "527 538", "568 484", "599 42", "281 351", "365 837", "592 21", "321 22", "649 200", "273 485", "53 15", "392 20", "894 19", "109 9", "725 8", "624 14", "790 4", "296 2", "791 18", "295 15", "917 7", "580 2", "503 10", "776 7", "218 4", "839 9", "975 10", "192 3", "90 6", "493 4", "285 8"};
    int roadWidth = 504;
    int carWidth = 504;
    int carArrival = 449;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1025.4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> pedestrians = {"777 581", "266 799", "778 590", "130 10", "599 473", "280 539", "155 39", "628 191", "185 959", "866 816", "500 157", "632 203", "35 273", "624 329", "882 363", "405 876", "122 870", "415 845", "967 2", "633 3", "694 2", "448 18", "365 13", "702 16", "508 1", "843 4", "674 2", "780 2", "407 6", "575 3", "275 3", "395 9", "734 8", "902 3", "152 10", "172 2", "298 7", "664 9", "545 6"};
    int roadWidth = 435;
    int carWidth = 394;
    int carArrival = 550;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1164.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> pedestrians = {"697 1", "123 4", "263 4", "671 7"};
    int roadWidth = 530;
    int carWidth = 493;
    int carArrival = 550;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 550.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> pedestrians = {"172 194", "396 298", "89 287", "266 489", "709 456", "690 115", "651 317", "251 787", "331 314", "33 186", "798 913", "925 833", "729 314", "539 322", "955 647", "140 482", "202 197", "159 130", "430 536", "456 174", "638 45", "413 293", "4 254", "481 155", "629 746", "305 7", "995 15", "4 9", "896 8", "384 19", "622 3", "410 18", "799 15", "849 15", "139 13", "42 4", "269 8", "169 9", "238 4", "666 4", "972 3", "472 3", "620 4", "95 3", "623 8", "923 4"};
    int roadWidth = 24;
    int carWidth = 22;
    int carArrival = 973;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 979.3333333333334;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> pedestrians = {"488 433", "703 594", "484 32", "205 143", "51 287", "168 901", "391 361", "256 975", "235 171", "692 834", "878 761", "278 668", "140 551", "693 695", "992 625", "550 126", "636 695", "354 303", "674 467", "828 594", "17 485", "98 465", "798 153", "29 88", "1 927", "138 18", "567 16", "31 8", "157 19", "875 10", "536 7", "548 8", "623 15", "624 8", "398 9", "896 1", "123 3", "734 7", "185 2", "263 6", "196 1", "25 7", "983 7", "405 2", "132 8", "761 1"};
    int roadWidth = 925;
    int carWidth = 862;
    int carArrival = 189;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1758.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> pedestrians = {"816 663", "696 901", "561 959", "995 366", "199 478", "433 59", "748 304", "322 358", "103 478", "873 114", "828 802", "406 461", "357 994", "534 406", "676 112", "324 836", "321 73", "471 824", "193 557", "348 627", "344 527", "248 338", "332 10", "9 17", "102 18", "678 18", "17 6", "105 4", "561 10", "924 20", "826 17", "946 14", "705 5", "956 5", "355 8", "961 3", "481 8", "624 2", "826 8", "926 6", "120 4", "505 5", "155 2"};
    int roadWidth = 460;
    int carWidth = 439;
    int carArrival = 826;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 880.875;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> pedestrians = {"190 935", "827 784", "257 399", "181 702", "636 735", "551 535", "166 994", "956 706", "866 549", "399 301", "836 642", "129 856", "584 463", "404 878", "751 679", "268 444", "30 674", "875 314", "806 73", "16 611", "84 933", "156 696", "20 832", "657 489", "478 11", "965 10", "334 6", "633 15", "22 1", "335 19", "181 20", "239 6", "475 2", "752 10", "263 9", "532 8", "536 7", "461 8", "103 2", "786 1", "581 5", "195 8", "205 4", "799 3", "369 2"};
    int roadWidth = 760;
    int carWidth = 732;
    int carArrival = 671;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1518.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> pedestrians = {"768 6", "946 9", "824 8", "503 5"};
    int roadWidth = 222;
    int carWidth = 216;
    int carArrival = 664;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 664.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> pedestrians = {"462 172", "152 241", "612 543", "584 914", "787 705", "750 233", "971 206", "303 540", "77 423", "571 248", "969 649", "891 865", "524 76", "529 13", "768 19", "511 3", "261 6", "863 5", "222 1", "290 9", "592 11", "111 4", "125 13", "542 8", "872 4", "409 4", "589 8", "1 10", "28 6", "322 4", "941 9", "387 8", "44 4", "587 2"};
    int roadWidth = 343;
    int carWidth = 299;
    int carArrival = 609;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 736.5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> pedestrians = {"868 955", "690 147", "831 950", "595 11", "40 9", "763 17", "194 16", "31 6", "604 14", "733 5", "356 4", "742 18", "941 5", "694 9", "4 2", "971 6", "487 10", "506 5", "319 5", "896 6", "165 3", "47 9", "592 7", "405 4"};
    int roadWidth = 405;
    int carWidth = 379;
    int carArrival = 706;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 808.8;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> pedestrians = {"549 94", "722 37", "784 142", "248 995", "913 653", "462 839", "995 356", "212 132", "611 842", "605 12", "671 187", "657 651", "883 635", "395 354", "995 453", "211 263", "287 455", "277 635", "148 257", "305 125", "82 214", "171 29", "297 81", "26 859", "330 156", "892 5", "614 17", "888 10", "461 2", "281 9", "644 14", "397 1", "828 4", "875 10", "990 20", "948 10", "924 4", "478 2", "653 3", "692 4", "710 10", "18 9", "430 1", "496 5", "956 2", "514 4"};
    int roadWidth = 270;
    int carWidth = 201;
    int carArrival = 938;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1056.5;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> pedestrians = {"238 12", "199 8", "808 6", "36 1", "259 3", "953 3", "690 6", "750 5", "786 1", "535 2", "678 6", "873 1"};
    int roadWidth = 74;
    int carWidth = 3;
    int carArrival = 789;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 789.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> pedestrians = {"87 10", "929 9", "722 11", "28 4", "754 5", "66 1", "953 6", "322 12", "127 8", "136 6", "667 6", "622 10", "306 9", "682 4", "106 1", "641 10", "653 9", "392 5", "818 6"};
    int roadWidth = 817;
    int carWidth = 791;
    int carArrival = 517;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1084.8333333333333;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> pedestrians = {"945 2", "681 1", "651 2", "58 2", "395 10", "844 3", "918 5", "731 6", "504 4", "256 7", "597 9", "283 8", "11 2", "604 7", "783 5", "533 5", "272 1"};
    int roadWidth = 997;
    int carWidth = 943;
    int carArrival = 153;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1624.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> pedestrians = {"484 9", "126 13", "423 15", "698 19", "989 5", "244 13", "220 20", "891 4", "642 7", "458 9", "455 7", "146 4", "145 3", "24 3", "637 6", "596 9", "94 8", "263 1", "271 1", "334 10"};
    int roadWidth = 449;
    int carWidth = 409;
    int carArrival = 883;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 883.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> pedestrians = {"558 763", "379 337", "878 419", "838 829", "206 817", "909 450", "229 659", "930 521", "132 561", "654 163", "792 676", "723 362", "123 399", "920 715", "550 189", "636 19", "491 16", "475 2", "508 16", "558 15", "455 6", "934 18", "494 2", "452 10", "892 11", "319 1", "900 6", "320 8", "277 8", "629 4", "136 5", "930 2", "503 6", "995 8", "621 8", "961 5"};
    int roadWidth = 609;
    int carWidth = 528;
    int carArrival = 569;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 847.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> pedestrians = {"624 374", "867 195", "368 7", "243 13", "145 1", "943 20", "940 12", "411 10", "802 6", "200 6", "614 11", "53 10", "877 7", "496 5", "676 1", "574 4", "141 2", "331 9", "242 2", "482 7", "744 3", "880 10", "178 3"};
    int roadWidth = 392;
    int carWidth = 328;
    int carArrival = 496;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 561.6;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> pedestrians = {"227 903", "474 461", "795 973", "522 123", "780 578", "165 606", "943 595", "754 344", "11 482", "416 673", "907 429", "962 763", "411 409", "206 909", "408 760", "457 205", "958 320", "780 6", "682 7", "675 8", "504 8", "944 17", "16 8", "196 4", "374 12", "922 4", "965 4", "762 9", "80 1", "833 3", "917 1", "480 5", "954 8", "527 4", "646 8", "970 9", "776 7", "720 9"};
    int roadWidth = 427;
    int carWidth = 330;
    int carArrival = 872;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1247.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> pedestrians = {"397 28", "499 546", "208 186", "417 238", "479 314", "103 851", "627 112", "181 150", "854 455", "438 682", "696 268", "616 794", "952 473", "877 831", "172 443", "745 878", "350 3", "574 2", "235 4", "147 4", "149 16", "30 8", "154 11", "919 19", "669 8", "646 9", "206 9", "758 1", "740 7", "468 1", "416 9", "698 2", "853 4", "928 6", "248 2", "586 1", "430 9"};
    int roadWidth = 662;
    int carWidth = 606;
    int carArrival = 64;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 105.75;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> pedestrians = {"416 490", "43 366", "385 587", "352 834", "22 331", "463 929", "817 434", "734 767", "588 811", "871 838", "321 3", "358 13", "773 5", "243 9", "415 8", "201 16", "494 5", "622 4", "815 16", "84 10", "618 3", "832 4", "605 5", "173 2", "981 5", "915 8", "556 1", "512 2", "474 1", "503 10", "533 4"};
    int roadWidth = 493;
    int carWidth = 441;
    int carArrival = 194;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 194.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> pedestrians = {"839 835", "783 498", "509 530", "763 806", "197 393", "557 550", "941 980", "73 278", "619 194", "813 18", "771 17", "565 3", "398 20", "159 10", "912 10", "370 13", "940 9", "471 9", "355 4", "182 8", "709 5", "0 2", "45 2", "132 1", "703 4", "427 3", "950 2", "860 4", "445 7", "894 6"};
    int roadWidth = 600;
    int carWidth = 520;
    int carArrival = 137;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 841.8888888888889;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> pedestrians = {"552 8", "514 1"};
    int roadWidth = 7;
    int carWidth = 4;
    int carArrival = 671;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 671.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> pedestrians = {"727 4", "592 6", "289 6", "663 7"};
    int roadWidth = 179;
    int carWidth = 121;
    int carArrival = 580;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 580.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> pedestrians = {};
    int roadWidth = 8;
    int carWidth = 4;
    int carArrival = 730;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 730.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> pedestrians = {"726 677", "773 900", "90 566", "166 609", "900 244", "158 15", "180 16", "914 14", "646 9", "142 7", "546 7", "615 18", "869 17", "454 12", "138 13", "82 4", "923 6", "620 8", "236 3", "478 2", "134 7", "160 6", "150 5", "62 8", "511 6", "566 2"};
    int roadWidth = 79;
    int carWidth = 39;
    int carArrival = 879;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 879.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> pedestrians = {"170 6", "476 16", "143 11", "852 14", "265 15", "405 8", "351 17", "878 3", "624 11", "185 12", "473 6", "532 2", "428 2", "637 9", "734 7", "392 10", "478 7", "26 6", "856 5", "766 4", "491 9"};
    int roadWidth = 862;
    int carWidth = 780;
    int carArrival = 432;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1138.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> pedestrians = {"744 7", "279 2", "996 2", "932 16", "300 5", "365 16", "830 15", "62 19", "916 4", "642 6", "145 9", "743 3", "907 1", "444 9", "937 2", "835 10", "711 4", "530 4", "467 6"};
    int roadWidth = 275;
    int carWidth = 222;
    int carArrival = 551;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 585.5;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> pedestrians = {"92 10", "448 4", "527 3"};
    int roadWidth = 982;
    int carWidth = 906;
    int carArrival = 113;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 182.6;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> pedestrians = {"655 891", "340 806", "986 33", "142 321", "649 432", "189 294", "932 579", "144 207", "393 167", "990 698", "514 695", "79 789", "958 985", "596 979", "610 16", "159 5", "903 7", "90 18", "184 11", "472 6", "408 20", "253 11", "388 14", "318 6", "330 1", "379 8", "163 5", "356 8", "46 8", "145 2", "258 2", "866 4", "280 8", "665 5", "761 7", "394 3"};
    int roadWidth = 1;
    int carWidth = 1;
    int carArrival = 543;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 543.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> pedestrians = {"276 16", "178 8", "568 14", "751 8", "209 14", "465 2", "650 8", "82 14", "76 5", "191 6", "760 5", "98 3", "340 7", "53 4", "854 1", "700 2", "248 9", "67 7", "23 9"};
    int roadWidth = 532;
    int carWidth = 453;
    int carArrival = 934;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1307.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> pedestrians = {"909 14", "341 16", "713 15", "655 16", "437 17", "67 6", "546 9", "597 17", "898 3", "368 1", "863 3", "59 3", "787 7", "498 3", "335 1", "49 7", "733 4", "454 7", "78 4"};
    int roadWidth = 881;
    int carWidth = 809;
    int carArrival = 336;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 336.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> pedestrians = {"646 956", "565 142", "151 482", "377 316", "8 226", "118 13", "744 456", "742 44", "905 22", "239 513", "341 19", "705 718", "277 651", "747 336", "874 170", "618 304", "175 980", "767 106", "673 662", "745 653", "998 34", "35 988", "63 254", "799 1", "232 19", "222 4", "846 13", "440 10", "26 6", "466 15", "273 7", "534 4", "967 20", "686 9", "928 2", "442 2", "566 4", "974 6", "1 10", "115 3", "169 8", "86 4", "760 6", "776 4"};
    int roadWidth = 963;
    int carWidth = 962;
    int carArrival = 966;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1761.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> pedestrians = {"667 568", "639 135", "986 458", "584 546", "830 219", "365 5", "7 4", "773 5", "477 4", "570 5", "186 8", "752 13", "272 4", "714 4", "404 6", "592 6", "725 6", "781 3", "993 2", "390 6", "264 9", "607 3", "819 5", "221 8", "144 9", "308 1"};
    int roadWidth = 155;
    int carWidth = 132;
    int carArrival = 605;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 651.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> pedestrians = {"950 725", "704 331", "574 224", "828 131", "416 988", "608 806", "469 751", "942 339", "683 136", "609 210", "907 225", "450 738", "345 921", "852 294", "552 15", "579 17", "68 5", "105 3", "402 2", "767 5", "265 20", "806 8", "94 6", "10 18", "557 10", "77 8", "773 7", "880 1", "429 4", "576 7", "902 6", "46 5", "764 10", "11 7", "321 2"};
    int roadWidth = 291;
    int carWidth = 219;
    int carArrival = 975;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1099.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> pedestrians = {};
    int roadWidth = 788;
    int carWidth = 749;
    int carArrival = 491;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 491.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> pedestrians = {"671 64", "979 904", "461 177", "133 696", "985 469", "616 84", "594 516", "811 994", "815 723", "569 829", "970 400", "22 892", "810 944", "342 244", "699 703", "116 503", "338 688", "613 892", "389 414", "659 817", "927 163", "391 127", "371 878", "162 1", "861 6", "702 4", "544 16", "32 1", "804 9", "458 6", "841 6", "532 10", "526 4", "588 3", "999 10", "172 7", "30 9", "628 1", "942 9", "396 7", "933 2", "968 10", "524 7", "36 6"};
    int roadWidth = 592;
    int carWidth = 564;
    int carArrival = 804;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1215.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> pedestrians = {"266 10", "354 2", "774 4", "546 3"};
    int roadWidth = 301;
    int carWidth = 275;
    int carArrival = 955;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 955.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> pedestrians = {"893 14", "93 11", "216 1", "247 3", "972 2", "620 9", "28 9", "649 3", "277 10", "972 4", "553 3", "879 3", "991 6"};
    int roadWidth = 362;
    int carWidth = 268;
    int carArrival = 743;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 743.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> pedestrians = {"38 179", "918 358", "462 848", "376 346", "950 914", "41 711", "53 386", "453 505", "74 704", "149 70", "521 530", "130 75", "242 731", "36 5", "41 19", "533 4", "452 14", "741 12", "864 12", "488 19", "325 4", "25 20", "508 4", "562 9", "841 5", "233 3", "483 2", "552 2", "589 8", "159 7", "601 1", "772 9", "604 10", "881 8"};
    int roadWidth = 663;
    int carWidth = 601;
    int carArrival = 903;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1202.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> pedestrians = {"264 23", "674 842", "914 889", "891 718", "256 699", "65 750", "926 390", "65 620", "101 4", "613 29", "129 590", "153 631", "401 5", "403 16", "472 2", "151 11", "211 12", "623 20", "606 1", "870 18", "254 11", "754 14", "444 4", "643 1", "977 8", "405 2", "701 1", "675 1", "879 7", "637 2", "366 6", "733 2", "824 2"};
    int roadWidth = 210;
    int carWidth = 127;
    int carArrival = 498;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 498.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> pedestrians = {"175 2", "761 2", "283 2", "492 10"};
    int roadWidth = 980;
    int carWidth = 980;
    int carArrival = 139;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 139.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> pedestrians = {"205 19", "810 1", "611 10", "757 9", "923 9", "584 2", "475 8", "142 7", "528 7", "518 1", "534 7", "355 8", "747 1"};
    int roadWidth = 759;
    int carWidth = 704;
    int carArrival = 434;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 443.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> pedestrians = {"31 2", "383 10", "246 9", "177 3", "107 4", "687 4", "681 2", "595 9", "989 9", "876 9", "138 8", "669 2"};
    int roadWidth = 876;
    int carWidth = 827;
    int carArrival = 599;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 599.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> pedestrians = {"442 4", "136 12", "430 2", "944 6", "382 17", "837 5", "278 4", "666 4", "645 3", "437 9", "781 1", "74 5", "720 8", "589 5", "188 5", "153 7", "849 10"};
    int roadWidth = 810;
    int carWidth = 763;
    int carArrival = 890;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1544.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> pedestrians = {"958 365", "64 27", "36 504", "834 413", "662 571", "613 396", "634 987", "179 110", "64 84", "219 391", "751 687", "100 382", "253 503", "398 863", "869 566", "855 833", "640 429", "472 890", "901 884", "229 266", "758 46", "842 822", "915 521", "109 14", "653 12", "318 17", "735 2", "969 11", "336 11", "48 12", "113 16", "824 3", "560 19", "24 3", "896 9", "716 3", "520 3", "936 8", "201 4", "839 6", "809 9", "391 6", "626 10", "675 3"};
    int roadWidth = 863;
    int carWidth = 790;
    int carArrival = 73;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 525.3333333333334;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> pedestrians = {"539 18", "184 9", "119 18", "400 15", "364 19", "716 10", "922 19", "703 9", "653 7", "554 8", "956 5", "954 1", "987 3", "70 9", "993 5", "498 8", "263 4", "229 5"};
    int roadWidth = 822;
    int carWidth = 779;
    int carArrival = 59;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 59.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> pedestrians = {"828 20", "883 2", "622 5", "64 16", "841 10", "598 16", "943 17", "700 10", "88 3", "818 2", "222 9", "208 9", "262 5", "863 4", "158 9", "597 3", "898 5", "917 9"};
    int roadWidth = 86;
    int carWidth = 62;
    int carArrival = 401;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 401.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> pedestrians = {"750 3", "392 8"};
    int roadWidth = 678;
    int carWidth = 674;
    int carArrival = 785;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 974.6666666666666;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> pedestrians = {"0 1", "0 98"};
    int roadWidth = 1000;
    int carWidth = 600;
    int carArrival = 5;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 6.185567010309279;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> pedestrians = {"0 1", "0 89", "10 1", "10 2", "10 3", "10 4", "10 5", "10 6", "10 7", "10 8", "10 7", "10 1", "10 1"};
    int roadWidth = 1000;
    int carWidth = 600;
    int carArrival = 5;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 6.818181818181818;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> pedestrians = {"0 1", "0 2", "0 4", "0 8", "0 16", "0 32", "0 64", "0 128", "0 256", "1 1", "1 2", "1 4", "1 8", "1 16", "1 32", "1 64", "3 128", "5 256", "4 1", "4 2", "3 4", "4 8", "4 16", "4 32", "5 64", "7 128", "11 256", "8 1", "8 2", "5 4", "8 16", "8 32", "7 64", "11 128", "12 256", "2 1", "2 2", "2 4", "2 8", "2 16", "2 32", "2 64", "3 129", "7 256", "11 1", "11 4", "11 8", "11 16", "11 32", "11 64"};
    int roadWidth = 100;
    int carWidth = 63;
    int carArrival = 3;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 74.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> pedestrians = {"100 100"};
    int roadWidth = 10;
    int carWidth = 10;
    int carArrival = 10;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> pedestrians = {"401 26", "501 37", "527 28", "514 6", "465 33", "409 23", "426 20", "566 42", "449 32", "426 18", "454 14", "546 46", "464 41", "460 22", "587 46", "512 21", "544 46", "573 30", "451 9", "402 48", "583 41", "535 21", "568 41", "480 14", "510 9", "526 46", "446 24", "540 49", "436 26", "540 8", "474 45", "448 33", "542 20", "473 17", "411 40", "434 36", "541 49", "529 28", "539 6", "591 44", "585 44", "440 27", "557 27", "498 5", "544 19", "433 2", "586 17", "531 21", "433 4", "540 30"};
    int roadWidth = 100;
    int carWidth = 50;
    int carArrival = 500;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 500.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> pedestrians = {};
    int roadWidth = 1;
    int carWidth = 1;
    int carArrival = 10;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> pedestrians = {};
    int roadWidth = 1000;
    int carWidth = 1000;
    int carArrival = 1000;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> pedestrians = {"10 1", "20 1"};
    int roadWidth = 11;
    int carWidth = 11;
    int carArrival = 5;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> pedestrians = {};
    int roadWidth = 10;
    int carWidth = 10;
    int carArrival = 10;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> pedestrians = {"1 1", "10 1", "100 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1", "1000 1"};
    int roadWidth = 1000;
    int carWidth = 1000;
    int carArrival = 2;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 2000.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> pedestrians = {"0 2", "0 250", "0 750", "0 334", "224 169", "358 48", "464 62", "145 75", "327 281", "491 61", "42 995", "436 827", "104 31", "13 902", "382 292", "216 21", "35 718", "226 447", "38 771", "412 69", "299 667", "394 35", "311 73", "33 32", "164 673", "211 41", "368 53", "144 7", "257 662", "39 37", "241 723", "278 59", "35 316", "342 90", "106 28", "442 40", "148 264", "30 44", "229 890", "350 370", "101 6", "48 393", "123 629", "454 8", "340 76", "36 66", "308 91", "499 2"};
    int roadWidth = 1000;
    int carWidth = 999;
    int carArrival = 1;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 998.5;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> pedestrians = {"84 81", "99 34", "63 35", "73 98", "22 32", "27 13", "56 84", "56 76", "31 22", "59 71", "77 79", "1 46", "2 26", "47 95", "99 97", "24 7", "28 92", "38 71", "47 41", "81 45", "6 20", "75 47", "66 92", "87 80", "62 61", "80 13", "7 4", "55 58", "14 93", "20 5", "76 3", "82 38", "75 54", "48 96", "27 32", "75 11", "83 92", "51 39", "53 91", "62 41", "27 44", "90 3", "35 67", "49 5", "87 64", "10 13", "13 17", "96 70", "59 46", "3 74"};
    int roadWidth = 99;
    int carWidth = 78;
    int carArrival = 14;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 36.16417910447761;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> pedestrians = {"999 1"};
    int roadWidth = 100;
    int carWidth = 100;
    int carArrival = 1;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> pedestrians = {"0 1", "0 2", "0 4", "0 8", "0 16", "0 32", "0 64", "0 128", "0 256"};
    int roadWidth = 100;
    int carWidth = 50;
    int carArrival = 3;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 3.125;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> pedestrians = {"1 1"};
    int roadWidth = 1;
    int carWidth = 1;
    int carArrival = 1000;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> pedestrians = {};
    int roadWidth = 2;
    int carWidth = 2;
    int carArrival = 5;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> pedestrians = {"1 750"};
    int roadWidth = 1000;
    int carWidth = 1000;
    int carArrival = 2;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 2.333333333333333;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> pedestrians = {"0 51", "0 12"};
    int roadWidth = 1000;
    int carWidth = 500;
    int carArrival = 10;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 12.820512820512821;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> pedestrians = {};
    int roadWidth = 100;
    int carWidth = 10;
    int carArrival = 50;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> pedestrians = {"0 1", "0 1"};
    int roadWidth = 5;
    int carWidth = 3;
    int carArrival = 1;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> pedestrians = {"0 3"};
    int roadWidth = 10;
    int carWidth = 10;
    int carArrival = 1;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3333333333333335;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> pedestrians = {"252 361", "741 179", "982 607", "834 723", "571 584", "588 213", "550 478", "370 199", "64 497", "296 741", "669 845", "805 21", "425 922", "368 241", "167 167", "491 50", "180 144", "108 896", "401 307", "457 354", "374 440", "133 314", "580 164", "247 254", "171 21", "542 565", "17 30", "710 140", "834 523", "914 116", "323 162", "110 568", "327 392", "665 407"};
    int roadWidth = 891;
    int carWidth = 833;
    int carArrival = 838;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 844.6666666666666;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> pedestrians = {"5 5"};
    int roadWidth = 10;
    int carWidth = 10;
    int carArrival = 1;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> pedestrians = {"0 1", "0 20", "10 30", "45 2", "5 6", "7 20", "3 5"};
    int roadWidth = 300;
    int carWidth = 123;
    int carArrival = 2;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> pedestrians = {"1 10"};
    int roadWidth = 15;
    int carWidth = 10;
    int carArrival = 1;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> pedestrians = {"0 1", "1 1", "3 1"};
    int roadWidth = 5;
    int carWidth = 4;
    int carArrival = 5;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> pedestrians = {"1 3"};
    int roadWidth = 300;
    int carWidth = 200;
    int carArrival = 50;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 67.66666666666667;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> pedestrians = {"0 1"};
    int roadWidth = 6;
    int carWidth = 5;
    int carArrival = 2;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> pedestrians = {"90 90", "90 10"};
    int roadWidth = 1000;
    int carWidth = 200;
    int carArrival = 100;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> pedestrians = {"0 5", "0 8", "2 7"};
    int roadWidth = 27;
    int carWidth = 10;
    int carArrival = 3;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3333333333333335;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> pedestrians = {"1 3"};
    int roadWidth = 120;
    int carWidth = 100;
    int carArrival = 30;
    RoadCrossing* pObj = new RoadCrossing();
    clock_t start = clock();
    double result = pObj->passTime(pedestrians, roadWidth, carWidth, carArrival);
    clock_t end = clock();
    delete pObj;
    double expected = 34.333333333333336;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=15868491&rd=10791&pm=7521
********************************************************************************
#include <vector> 
#include <string> 
#include <algorithm> 
#include <sstream> 
#include <iostream> 
#include <queue> 
#include <set> 
#include <map> 
 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#include <ctype.h> 
 
using namespace std; 
 
#define PB push_back 
typedef long long LL; 
typedef vector <int> VI; 
typedef pair <int, int> PII; 
#define SZ(a) (int)((a).size()) 
#define ALL(a) (a).begin(), (a).end() 
#define REP(i, a) for (i = 0; i < (a); i++) 
#define REPS(i, a) REP(i, SZ(a)) 
 
#define eps 1e-9 
 
class RoadCrossing 
{ 
  VI t, v, x; 
  int n, rw, cw, t0; 
  double res; 
   
  void Try( double curt ) 
  { 
    if (curt < t0 - eps) 
      return; 
   
//    printf("%.20lf\n", curt); 
     
    vector <double> xx; 
    int i; 
    REP(i, n) 
      if (curt >= t[i] - eps) 
        xx.PB(max(0.0, min(x[i] + (curt - t[i]) * v[i], (double)rw))); 
    sort(ALL(xx)); 
    for (i = 1; i < SZ(xx); i++) 
      if (xx[i] - xx[i - 1] > cw - eps) 
        res <?= curt; 
  } 
public: 
  double passTime(vector <string> s, int _rw, int _cw, int _t0) 
  { 
    res = 1e20; 
    rw = _rw, cw = _cw, t0 = _t0; 
    n = SZ(s) + 2; 
    t = VI(n), v = VI(n), x = VI(n); 
    int i, j; 
     
    REPS(i, s) 
    { 
      stringstream ss(s[i]); 
      ss >> t[i] >> v[i]; 
      x[i] = 0; 
    } 
    t[n - 1] = 0, v[n - 1] = 0, x[n - 1] = 0; 
    t[n - 2] = 0, v[n - 2] = 0, x[n - 2] = rw; 
 
    Try(t0); 
    REP(i, n) 
      Try(t[i]); 
    REP(i, n) 
      REP(j, n) 
        if (fabs(v[i] - v[j]) > eps) 
          Try((cw - (x[j] - v[j] * t[j] - x[i] + v[i] * t[i])) / (double)(v[j] - v[i])); 
    return res; 
  } 
};

********************************************************************************
*******************************************************************************/