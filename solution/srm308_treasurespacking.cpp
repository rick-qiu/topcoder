/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6476
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

class TreasuresPacking {
public:
    double maximizeCost(vector<string> treasures, int W);
};

double TreasuresPacking::maximizeCost(vector<string> treasures, int W) {
    double ret;
    return ret;
}


int test0() {
    vector<string> treasures = {"100 100 N", "100 100 N", "130 10 Y"};
    int W = 150;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 103.84615384615384;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> treasures = {"100 100 N", "100 100 N", "100 1000 Y"};
    int W = 150;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> treasures = {"207 1459 Y", "150 6867 N", "694 3494 Y", "417 7479 N"};
    int W = 650;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 14931.00966183575;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> treasures = {"350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "774 2273 Y", "318 1572 Y"};
    int W = 3301;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 19467.907849829353;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> treasures = {"1 1 Y"};
    int W = 10000;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> treasures = {"1 1 Y"};
    int W = 1;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> treasures = {"10000 1 Y"};
    int W = 9999;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> treasures = {"1 1 N"};
    int W = 10000;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> treasures = {"1 1 N"};
    int W = 1;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> treasures = {"10000 1 N"};
    int W = 9999;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> treasures = {"10000 10000 N", "1000 10000 N"};
    int W = 10000;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 10000.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> treasures = {"5001 10000 N", "5000 5001 N", "5000 5001 N"};
    int W = 10000;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 10002.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> treasures = {"501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N"};
    int W = 9506;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 150006.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> treasures = {"501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "500 5001 N", "501 10000 N", "500 5001 N", "9999 10000 Y"};
    int W = 9506;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 150500.04940494048;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> treasures = {"79 3342 Y", "343 2316 N", "118 7101 N", "257 3144 Y", "622 1318 Y", "182 4018 N", "331 1608 N", "428 9591 N", "689 2457 Y", "820 2002 Y", "522 6230 N", "209 642 Y", "15 2193 Y", "662 3436 N", "541 3304 Y", "939 2896 N", "744 1018 Y", "505 5808 N", "311 1947 Y", "881 4743 Y", "826 144 N", "108 2928 N", "965 624 N", "458 4273 N"};
    int W = 4320;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 58633.79568671963;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> treasures = {"419 2031 Y", "408 2675 Y", "780 6319 N", "430 2097 Y", "71 2848 N", "946 4218 Y", "179 7810 N", "327 9496 N", "947 8788 N", "155 3444 Y", "440 3632 Y", "650 404 Y", "568 644 Y", "171 9545 N", "917 1954 Y", "51 9956 N", "359 724 Y", "785 2210 Y", "972 1565 Y", "632 2844 N"};
    int W = 8119;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 80755.22839506173;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> treasures = {"282 3755 N", "951 981 Y", "497 7122 N", "386 8511 N", "918 3151 Y", "6 550 N", "569 1371 Y", "537 1554 Y", "804 9960 N", "294 3096 Y", "53 298 Y", "866 7588 N"};
    int W = 152;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 2087.4693877551017;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> treasures = {"238 609 Y", "776 1207 Y", "705 3722 Y", "289 9392 N", "591 4262 Y", "376 2462 N", "300 5542 N", "655 9763 N", "349 1616 N", "947 8358 N", "730 2379 N", "937 7833 N", "865 2425 N", "606 3603 Y", "485 9849 N", "856 923 Y", "51 1891 Y", "419 4025 N", "979 4439 Y", "245 3784 N", "505 391 Y", "511 1326 Y", "491 1550 N", "493 1416 Y", "756 4878 Y", "219 518 Y", "677 1064 Y", "989 252 N", "256 4553 N", "256 2926 Y", "221 4671 Y", "459 2779 Y", "817 1839 Y", "196 2281 Y", "405 3672 Y", "786 195 Y", "233 8397 N", "959 2379 Y", "615 4107 N", "803 2103 Y", "709 9768 N", "871 6548 N", "378 2719 Y", "673 4042 Y", "803 787 N", "929 2042 Y", "49 3842 N"};
    int W = 432;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 16222.438914027149;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> treasures = {"363 1708 N", "977 7251 N", "135 3222 N", "377 3636 Y", "405 2283 Y", "803 8592 N", "400 2157 Y", "838 417 N", "490 1712 Y", "542 4260 Y", "931 2539 Y", "469 9691 N", "924 1501 Y", "883 314 Y", "557 3081 Y", "353 5992 N", "345 8059 N", "606 8799 N", "858 5872 N", "32 1978 Y", "489 4982 Y", "410 4341 N", "225 2633 Y", "973 9667 N", "976 3337 Y", "606 8374 N", "530 5001 N", "109 4317 Y", "853 3675 N", "728 1131 N", "635 131 Y", "844 3751 Y", "568 819 N", "661 2538 N", "968 3032 Y", "540 4165 Y", "778 8032 N", "707 9596 N", "62 9643 N", "482 3989 Y", "865 3508 N", "896 2028 N", "904 2132 Y", "180 6688 N", "509 4163 Y", "167 1181 N", "411 7614 N", "354 4638 Y"};
    int W = 6916;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 115581.27402862985;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> treasures = {"31 8441 N", "898 995 N", "713 9418 N", "811 1685 N", "116 3989 N", "684 1623 N", "2 1039 Y", "330 1346 N", "703 1907 Y", "501 5664 N", "623 611 Y", "314 1170 N", "472 3928 N", "105 1977 N", "182 4196 N", "126 4101 N", "727 714 Y", "625 9528 N", "882 2358 Y", "273 1080 Y", "535 3870 Y", "355 7500 N", "665 4870 Y", "827 2766 N", "940 1771 N"};
    int W = 9420;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 82620.99587345254;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> treasures = {"619 1396 N", "788 3109 N", "667 2843 Y", "615 951 Y", "269 7004 N", "370 4156 N", "654 4611 Y", "317 6158 N", "349 9523 N", "703 8721 N", "243 500 N", "367 8489 N", "431 417 Y", "797 4391 Y", "948 8925 N", "2 3226 Y", "927 2828 Y", "862 2120 N", "806 2507 Y", "197 2595 Y", "246 3733 Y", "200 3415 N", "463 7814 N", "379 8610 N", "628 4053 N", "63 4906 Y", "533 8329 N", "902 6100 N", "386 6255 N", "448 6199 N", "91 3652 Y", "608 132 Y", "471 1072 Y", "204 7163 N", "879 1734 Y", "617 3849 N", "638 7234 N"};
    int W = 6476;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 118951.66513761468;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> treasures = {"217 7807 N", "42 4168 Y", "339 3216 Y", "689 242 N", "627 3621 Y", "794 2300 Y", "166 2484 N", "145 69 Y", "324 4870 N", "227 2493 Y", "487 1918 N", "814 1296 Y", "237 8572 N", "942 5576 N", "992 2799 Y", "737 1765 Y", "835 6812 N", "898 3979 Y", "402 3679 Y", "131 7467 N", "386 9978 N", "40 9856 N", "126 6571 N", "153 4816 Y", "765 3951 Y", "439 2962 N", "112 4287 N", "592 4017 Y", "813 6127 N", "216 1356 Y", "642 1389 N", "394 3992 N"};
    int W = 9211;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 121717.63697104677;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> treasures = {"829 3836 Y", "507 888 N", "847 776 Y", "373 605 N", "679 6097 N", "466 7664 N", "120 4461 Y", "724 9113 N", "203 1997 N", "728 7290 N", "670 4941 N", "524 891 Y"};
    int W = 2345;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 31006.235223160435;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> treasures = {"937 2298 Y", "903 8968 N", "3 2453 Y", "492 3011 Y", "851 4390 Y", "619 2913 Y", "116 8488 N", "542 4854 Y", "589 1297 Y", "1 1321 N", "745 6567 N", "207 601 Y", "434 2725 Y", "934 705 Y", "43 1226 Y", "475 4434 Y", "537 1659 Y", "157 5923 N", "399 1949 Y", "598 3754 N", "700 6273 N", "762 1923 N", "310 4325 Y", "871 3271 Y", "824 5967 N", "907 527 Y", "90 615 N"};
    int W = 2882;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 44969.29520295203;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> treasures = {"564 1326 Y", "128 4672 Y", "705 2812 Y", "755 3809 Y", "664 3134 Y", "174 467 Y", "315 4417 N", "196 4262 N", "987 3048 N", "294 2762 Y", "560 3730 Y", "924 1333 Y", "683 5235 N", "707 1838 Y", "21 2030 N", "933 4339 N", "510 8968 N", "428 3649 N", "531 4598 Y", "636 440 Y", "362 3209 N", "579 1787 Y", "591 3430 Y", "980 8254 N", "875 4278 Y", "473 6873 N", "932 3414 Y", "481 3546 Y", "76 635 Y", "594 3346 Y", "688 4919 Y", "422 8530 N"};
    int W = 5409;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 68010.44736842105;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> treasures = {"927 205 Y", "344 1963 Y", "78 2152 Y", "938 2737 Y", "442 2496 Y", "291 712 Y", "158 782 N", "43 2284 Y", "453 1724 N", "924 261 N", "288 4428 Y", "48 1881 N", "737 3864 Y", "429 5305 N", "397 2635 Y", "444 3033 Y", "722 555 N", "137 9883 N", "980 3640 N", "717 8555 N", "42 1931 Y"};
    int W = 593;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 21897.875;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> treasures = {"246 153 N", "183 3977 N", "758 3224 Y", "9 735 Y", "319 741 Y", "317 2774 N", "763 1548 Y", "527 7887 N", "118 4143 Y", "86 6392 N", "343 2091 Y", "218 1410 Y", "541 1384 N", "581 2659 N", "409 3390 Y", "369 1134 Y", "586 2552 N", "765 9076 N", "424 4911 Y", "837 643 Y", "592 3939 Y", "115 5125 N", "61 6331 N", "136 6507 N", "920 4944 N", "835 7036 N", "89 2692 Y", "965 364 Y", "827 706 N", "938 4839 N", "407 7064 N", "871 1450 Y"};
    int W = 4893;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 80781.33108108108;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> treasures = {"80 3877 Y", "594 3434 N", "487 3343 Y", "893 9485 N", "370 8047 N", "779 9411 N", "268 185 Y", "875 7844 N", "872 6595 N", "203 34 Y", "527 6364 N", "412 2572 Y", "651 1652 Y", "765 1745 Y", "693 754 Y", "666 7014 N", "993 4817 N", "541 1674 N", "811 2132 Y", "912 1192 N", "415 2098 Y", "303 4021 N", "20 5397 N", "24 4355 Y", "173 3786 Y", "224 3069 Y", "875 3155 Y", "796 4819 Y", "107 1810 Y", "150 5024 N", "649 2106 Y", "675 4148 Y", "144 1776 N", "85 1594 Y", "720 5181 N", "677 3934 Y"};
    int W = 4772;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 76588.23613963039;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> treasures = {"148 2379 N", "874 5058 N", "908 235 Y", "43 2088 Y", "199 5571 N", "271 7067 N", "593 3663 Y", "196 1181 N", "646 4508 N", "376 3642 Y", "608 288 Y", "291 941 Y", "69 688 Y", "547 7808 N", "98 2285 N", "848 7804 N", "901 6146 N", "40 5886 N", "836 1163 Y", "597 1775 N", "16 8916 N", "671 1490 Y", "477 8826 N", "678 2988 Y", "535 2558 Y", "735 3484 N", "663 2311 Y", "966 2390 Y", "738 1845 N", "883 4730 N", "402 1699 Y"};
    int W = 2467;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 56286.403035413154;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> treasures = {"502 3650 Y", "442 538 Y", "892 3313 Y", "908 4592 Y", "920 4706 N", "253 3437 Y", "319 2268 Y", "185 3199 Y", "889 7567 N", "856 1888 Y", "1000 3291 Y", "453 4170 Y", "511 657 Y", "530 3945 N", "846 3206 Y", "737 2785 N", "813 470 Y", "657 7643 N", "263 1376 N", "473 3341 Y", "116 317 Y", "444 3648 Y", "189 8625 N", "911 2441 N"};
    int W = 2515;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 33619.2119205298;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> treasures = {"639 616 Y", "845 4468 Y", "837 5264 N", "105 5531 N", "778 2311 Y", "770 6975 N", "684 9786 N", "828 1784 N", "470 2955 Y", "702 946 N", "992 8498 N", "63 2544 Y", "782 1404 N", "382 9387 N", "125 4382 N", "486 3115 Y", "77 3139 Y", "678 2709 N", "302 2976 N", "961 898 N", "462 1949 Y", "570 77 Y", "672 3953 N", "416 4716 Y", "715 2018 Y", "884 276 Y", "790 8298 N", "426 3477 Y", "366 9002 N", "275 2768 Y", "925 9630 N", "513 2297 Y", "193 1687 Y", "209 2166 Y", "221 1708 Y", "133 1044 N", "213 2907 Y", "500 2978 N", "310 684 N", "508 2379 Y", "642 6108 N", "642 5251 N", "926 3510 Y", "853 4308 Y", "912 5857 N", "459 8249 N", "391 1079 Y", "376 6517 N", "767 6304 N", "590 5210 N"};
    int W = 3076;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 64006.057692307695;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> treasures = {"65 1666 N", "810 3437 N", "228 2025 Y", "50 769 N", "742 6973 N", "462 9476 N", "557 5519 N", "330 2328 Y", "425 545 N", "233 6194 N", "889 1197 N", "333 3122 N", "134 1950 Y", "432 186 N", "319 362 Y", "101 392 Y", "655 1602 Y", "468 8457 N", "678 1159 N", "880 4935 Y", "273 5745 N", "33 2747 Y"};
    int W = 3903;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 56935.72727272727;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> treasures = {"348 4072 Y", "402 6005 N", "549 967 N", "205 5494 N", "246 4726 Y", "722 952 N", "402 3960 Y", "968 147 Y", "553 8176 N", "733 4448 N", "483 1575 Y", "126 1557 Y", "452 2369 Y", "173 630 Y", "896 7323 N", "320 9346 N", "57 7821 N", "829 5240 N", "163 9252 N", "818 2760 N", "85 980 Y", "915 233 N", "814 4123 Y", "370 6489 N", "893 5577 N", "300 481 Y", "648 4650 N", "119 8066 N", "730 9009 N", "680 3306 Y", "978 3729 N", "987 1707 Y", "326 8414 N", "406 9496 N", "256 1573 Y", "288 4515 Y", "990 4149 Y", "619 9078 N", "167 4423 N", "950 4351 N", "523 4049 Y", "972 7574 N", "121 3956 Y", "752 440 Y"};
    int W = 4311;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 104457.46875;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> treasures = {"245 3986 Y", "686 1040 N", "535 386 Y", "704 2901 Y", "597 4030 Y", "928 800 Y", "579 4245 Y", "481 4587 N", "586 4849 N", "46 3973 Y", "368 4610 N", "416 8277 N", "634 773 Y"};
    int W = 5351;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 43278.75862068965;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> treasures = {"524 5064 N", "86 8005 N", "544 242 Y", "679 4946 N", "679 3947 Y", "738 3818 Y", "408 2755 Y", "992 4161 N", "307 3305 N", "892 2597 Y", "909 526 Y", "407 2116 N", "788 1448 Y", "447 2905 Y", "755 2948 N", "747 1842 N", "426 3213 N", "819 3718 N", "313 3116 N", "499 3574 Y", "906 1492 Y", "817 1277 Y", "761 5549 N", "282 3775 Y", "439 3793 Y", "509 2458 N", "993 6148 N", "662 8249 N", "469 8193 N", "340 4549 Y", "612 3539 Y", "984 3486 Y", "569 311 N", "976 1462 N", "935 4297 Y", "500 4351 Y", "758 5805 N", "528 6339 N", "433 1727 N", "774 1195 Y", "587 7268 N", "543 8338 N", "876 4267 Y", "635 3053 N", "831 494 Y", "884 2324 N", "694 4284 Y", "799 2157 N", "606 862 N"};
    int W = 10000;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 105820.4265129683;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> treasures = {"497 1184 N", "980 5536 N", "412 2230 Y", "262 2255 Y", "757 9047 N", "974 2251 N", "916 3300 N", "49 2571 N", "797 6077 N", "866 2386 Y", "432 2756 N", "723 519 Y", "594 4409 Y", "722 4200 N", "12 492 Y", "790 6376 N", "317 1537 N", "139 2121 N", "447 3414 Y", "440 4384 Y", "6 4389 N", "615 3000 Y", "367 409 N", "784 155 N", "813 2410 Y", "157 253 Y", "826 3257 N", "650 2439 Y", "583 2370 Y", "961 4664 Y", "660 3562 Y", "9 2436 Y", "864 9379 N", "306 7821 N", "845 4682 N", "208 2706 Y", "501 4804 Y", "203 1621 Y", "410 466 Y", "187 3073 N", "821 1909 Y", "610 2076 N", "888 1154 Y", "558 7006 N", "489 1007 Y", "305 2757 Y", "517 5964 N", "247 9033 N", "446 7994 N"};
    int W = 9924;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 117766.99029126213;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> treasures = {"459 135 Y", "946 4216 Y", "567 674 N", "296 3259 Y", "340 801 Y", "873 3823 Y", "356 2430 N", "973 2190 Y", "896 1011 Y", "289 9704 N", "753 9727 N", "503 3190 Y", "853 8977 N", "260 3679 N", "8 8197 N", "886 6224 N", "338 5276 N", "836 8084 N", "475 2976 Y", "656 9808 N", "148 35 N", "344 3334 Y", "689 1704 Y", "19 8531 N", "478 5027 N", "118 4673 N", "202 2288 Y", "527 28 Y", "108 4421 Y", "824 1938 Y", "20 4187 Y", "21 3761 Y", "128 130 Y", "118 4632 N", "822 1745 Y", "871 4740 Y", "551 4907 N", "514 2757 Y", "142 7142 N", "627 3776 N", "279 9870 N", "372 6293 N", "833 3020 N", "109 1823 N", "303 2970 Y", "875 840 Y", "208 1889 Y"};
    int W = 9834;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 156859.22736842107;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> treasures = {"164 2748 N", "697 1459 N", "31 3722 Y", "6 8251 N", "945 3652 N", "529 2496 Y", "975 2191 N", "669 4653 Y", "996 8489 N", "859 6677 N", "652 4696 Y", "698 4220 Y", "279 2101 N", "557 3985 Y", "254 7586 N", "59 5114 N", "248 3613 Y", "612 2481 Y", "372 127 N", "375 2571 Y", "712 3283 Y", "295 1260 Y", "15 2599 Y", "227 3278 N", "308 6220 N", "611 7149 N", "636 358 Y", "414 3420 Y", "79 9361 N", "576 3317 Y", "60 3058 Y", "516 646 Y", "914 2595 N", "490 3970 Y", "788 7216 N", "199 2715 Y", "179 8644 N", "165 5915 N", "36 2658 Y", "841 2311 Y", "243 770 N", "31 832 Y", "392 176 Y", "27 2799 N", "289 5 Y", "428 5066 N", "266 4868 Y"};
    int W = 9844;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 146223.05444126076;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> treasures = {"265 3277 Y", "632 6037 N", "640 3006 Y", "87 3000 Y", "428 9169 N", "22 1437 N", "971 9320 N", "899 5166 N", "552 2712 N", "61 2852 Y", "34 415 N", "323 5516 N", "328 1354 Y", "575 4337 Y", "223 1387 Y", "929 275 N", "558 3916 Y", "135 4034 N", "851 4563 Y", "124 3088 N", "474 96 Y", "822 700 Y", "317 2407 Y", "499 4845 Y", "900 8237 N", "285 592 Y", "978 2079 Y", "892 2433 Y", "769 2951 N", "96 6667 N", "840 784 Y", "932 94 N", "810 5729 N", "283 3881 Y", "754 4750 Y", "147 3595 Y", "760 49 N", "331 3113 N", "695 1418 Y", "379 3801 Y", "722 3954 Y", "185 9921 N", "790 9760 N", "890 4791 Y", "937 2162 Y"};
    int W = 9794;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 123651.33632286996;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> treasures = {"570 4695 Y", "835 4019 Y", "241 2897 N", "135 9131 N", "272 142 N", "252 2919 N", "151 7863 N", "855 4582 Y", "463 1619 N", "426 4049 Y", "31 1521 Y", "189 2209 Y", "515 4235 N", "100 9743 N", "188 4431 Y", "256 3238 Y", "127 8988 N", "366 76 Y", "225 6807 N", "922 2071 Y", "30 9265 N", "200 2531 N", "949 2189 Y", "402 3486 Y", "692 890 Y", "33 9183 N", "775 4342 Y", "705 2472 Y", "951 3753 Y", "44 2040 N", "795 1157 N", "958 7669 N", "408 1726 N", "296 9695 N", "121 211 Y", "901 554 N", "216 2401 N", "877 2454 Y", "463 2813 N", "74 2415 N"};
    int W = 9849;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 142263.2018927445;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> treasures = {"724 573 N", "801 456 N", "640 3808 Y", "983 2746 Y", "282 5031 N", "136 2920 Y", "685 8897 N", "608 1291 Y", "587 1437 Y", "872 5830 N", "642 1677 Y", "887 3117 N", "133 6004 N", "217 6125 N", "137 351 Y", "228 1832 Y", "250 1039 N", "806 3 N", "266 9541 N", "707 6816 N", "546 4524 Y", "402 1595 Y", "921 7749 N", "856 1971 Y", "944 3274 N", "160 6988 N", "593 4510 Y", "237 9756 N", "459 1953 Y", "128 2335 Y", "320 741 Y", "365 1899 Y", "199 2217 Y", "512 516 Y", "901 7765 N", "690 7951 N", "873 1735 Y", "470 2645 Y", "130 2222 Y", "541 2650 Y", "801 4359 Y", "518 3135 Y", "969 6661 N", "548 3649 Y", "191 1442 Y", "204 4601 Y", "94 3968 Y"};
    int W = 9856;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 128128.76459854015;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> treasures = {"441 8103 N", "883 4919 Y", "588 3486 Y", "667 9958 N", "92 1801 Y", "582 1266 Y", "543 506 N", "906 4049 Y", "232 1650 N", "425 3214 N", "302 3923 Y", "943 3163 N", "35 2832 N", "107 258 Y", "662 1377 Y", "211 2703 Y", "585 2816 Y", "997 213 Y", "519 3661 N", "466 4718 Y", "118 1566 Y", "691 6436 N", "942 9027 N", "572 8781 N", "3 719 N", "723 8325 N", "309 4385 Y", "273 4799 Y", "820 7551 N", "616 6864 N", "432 4691 Y", "457 1551 N", "373 4702 Y", "906 5508 N", "96 8823 N", "85 1342 N", "949 4258 N", "570 16 Y", "71 4496 N", "915 3400 Y", "418 6887 N", "179 2475 Y", "964 2376 Y", "724 5541 N", "480 651 Y", "643 507 Y"};
    int W = 9567;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 130517.88841201717;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> treasures = {"869 2506 N", "67 2008 Y", "125 4844 Y", "589 2295 N", "540 3138 N", "287 2623 N", "758 6880 N", "30 1926 Y", "220 1596 N", "682 1773 Y", "113 3615 Y", "943 405 Y", "508 7903 N", "870 707 Y", "469 971 Y", "214 8625 N", "62 894 N", "937 9012 N", "771 4242 Y", "213 9798 N", "280 6437 N", "936 2700 Y", "389 1117 Y", "404 1790 Y", "209 2197 N", "611 3754 Y", "102 1567 Y", "284 4330 Y", "229 4842 N", "325 2130 Y", "377 3699 N", "235 3513 Y", "812 3875 Y", "877 7089 N", "329 3933 Y", "568 255 Y", "399 2801 Y", "300 9295 N", "636 2110 Y", "359 2240 Y", "163 1625 Y", "736 2144 Y", "679 3693 N", "704 4342 Y", "616 3899 N"};
    int W = 10000;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 127785.63035019455;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> treasures = {"338 3278 Y", "505 3028 Y", "125 3427 Y", "195 5852 N", "251 3221 Y", "836 1988 Y", "25 4164 Y", "90 4144 Y", "250 271 Y", "865 8648 N", "974 3614 Y", "943 1610 N", "248 1997 Y", "202 4062 Y", "99 1540 N", "779 2359 Y", "585 273 Y", "367 3647 Y", "53 6361 N", "791 6873 N", "619 3984 N", "307 122 Y", "122 1049 N", "839 3745 Y", "274 2507 Y", "875 4366 Y", "517 1026 N", "144 1443 Y", "146 342 N", "143 403 Y", "462 3199 N", "318 184 Y", "33 8569 N", "669 8201 N", "238 4313 Y", "530 3915 Y", "611 8724 N", "552 3904 Y", "906 9514 N", "36 3889 N", "937 3753 N", "379 3933 N", "679 1729 Y", "975 4219 Y", "665 1760 N", "694 1894 Y", "712 7113 N", "504 1469 Y", "261 3608 N"};
    int W = 9957;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 133381.60869565216;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> treasures = {"374 3366 Y", "247 6091 N", "464 7471 N", "915 606 Y", "351 130 Y", "315 8581 N", "606 9297 N", "841 3245 Y", "665 6270 N", "108 192 Y", "584 4087 Y", "249 405 N", "791 3411 Y", "303 3601 Y", "447 2070 Y", "910 3759 Y", "924 5699 N", "443 9715 N", "385 2281 Y", "131 722 Y", "47 1788 Y", "412 3441 N", "603 460 Y", "278 2567 Y", "207 4239 Y", "632 9298 N", "787 4050 Y", "860 3736 Y", "639 2180 Y", "33 2599 N", "439 433 Y", "126 2145 Y", "55 3358 Y", "649 241 N", "379 2256 Y", "497 2730 Y", "55 5737 N", "703 1749 N", "939 6592 N", "806 1655 Y", "712 7609 N", "980 4786 Y", "547 3452 Y", "763 1770 Y", "161 2940 N", "887 3909 N", "686 7487 N", "917 2484 Y", "61 3743 N"};
    int W = 9842;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 130958.43327239488;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> treasures = {"109 675 Y", "163 4068 Y", "693 3537 Y", "172 303 Y", "888 2665 Y", "412 3415 N", "228 3283 Y", "619 864 N", "307 2290 Y", "894 2950 Y", "77 5170 N", "96 1006 Y", "42 2262 N", "87 4607 Y", "8 292 N", "845 5486 N", "33 2066 N", "380 1603 Y", "600 696 N", "647 1836 N", "439 2604 N", "241 2290 Y", "920 2794 N", "402 7646 N", "134 523 Y", "996 4581 Y", "705 2753 Y", "121 3150 Y", "295 2152 Y", "881 1296 Y", "404 3571 N", "132 4038 N", "804 4383 N", "214 449 N", "68 3473 Y", "358 2916 N", "214 4656 N", "670 2674 Y", "271 5774 N", "245 7845 N", "302 755 N", "470 1715 Y", "775 644 Y", "310 974 Y"};
    int W = 9987;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 104818.1914893617;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> treasures = {"703 6698 N", "677 671 N", "933 9176 N", "685 4298 N", "228 673 N", "350 7268 N", "385 1448 Y", "733 1425 N", "512 2622 N", "809 3661 N", "947 1359 Y", "541 5275 N", "840 7815 N", "586 132 Y", "708 3939 N", "487 1480 N", "789 1257 Y", "148 3416 Y", "167 2073 Y", "901 4543 Y", "901 4858 Y", "866 6354 N", "523 152 N", "485 4686 Y", "94 4959 Y", "293 4867 N", "332 2958 Y", "933 3163 Y", "242 347 Y", "993 8412 N", "875 3886 Y", "616 1770 N", "595 1805 N", "937 5215 N", "412 982 N", "989 4111 Y", "483 6634 N", "543 4790 Y", "537 7315 N", "403 140 N", "903 4216 Y", "576 6081 N", "613 1424 N", "749 3425 Y", "626 6960 N", "231 1919 Y", "677 835 Y", "461 1598 N", "301 4417 N"};
    int W = 9684;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 109033.68692449355;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> treasures = {"552 3622 Y", "155 3482 Y", "363 3700 Y", "984 2876 Y", "23 1879 Y", "546 6916 N", "362 3562 Y", "654 4164 N", "490 1957 Y", "74 1960 Y", "731 3039 Y", "782 5670 N", "270 7721 N", "152 4739 Y", "1 5446 N", "907 641 N", "393 4054 Y", "57 2123 N", "380 4260 Y", "680 2942 N", "34 1466 N", "264 1768 Y", "414 763 Y", "101 1600 N", "925 1392 Y", "116 3281 Y", "956 6009 N", "588 5198 N", "720 9679 N", "326 6116 N", "969 5655 N", "431 904 N", "174 2745 Y", "380 1456 N", "518 8149 N", "743 5486 N", "81 604 Y", "759 1422 N", "727 4893 N", "761 5502 N"};
    int W = 9571;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 117514.6884057971;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> treasures = {"433 1324 N", "897 6867 N", "330 2924 Y", "868 2368 Y", "901 2543 Y", "794 4342 Y", "84 9002 N", "511 2464 N", "232 839 Y", "510 340 Y", "789 2354 Y", "777 4461 Y", "415 4498 Y", "60 2541 Y", "869 3513 Y", "90 2115 N", "764 571 N", "485 4341 Y", "10 4837 Y", "704 1005 Y", "265 8265 N", "893 1881 Y", "234 8567 N", "595 1175 Y", "785 4529 Y", "533 569 N", "533 9249 N", "370 613 N", "572 1920 Y", "587 9703 N", "670 993 Y", "531 2916 Y", "55 2700 Y", "205 4854 Y", "621 3276 Y", "985 2380 N", "404 4011 N", "112 4033 Y", "250 5284 N", "77 1387 Y"};
    int W = 10000;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 120747.71120689655;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> treasures = {"246 2199 N", "118 2589 N", "938 2035 Y", "447 8549 N", "466 4680 Y", "64 1492 N", "576 3697 Y", "216 5513 N", "772 9047 N", "702 4053 Y", "830 616 N", "378 4454 Y", "87 7516 N", "808 3671 N", "883 2136 Y", "719 2820 N", "64 2964 Y", "101 4105 Y", "366 3333 Y", "438 3120 Y", "350 12 N", "680 4710 Y", "959 1031 N", "354 435 Y", "976 2332 Y", "392 75 Y", "967 941 Y", "190 4400 Y", "378 2833 Y", "225 3523 Y", "239 2494 Y", "311 1114 N", "855 7053 N", "463 2301 N", "491 6372 N", "132 1538 N", "830 3521 Y", "171 2830 Y", "114 1412 N", "384 2237 Y", "308 5748 N", "321 7385 N", "669 2470 Y", "867 4838 Y", "125 4287 Y", "226 2260 Y", "511 4781 N"};
    int W = 9517;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 126119.01041666667;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> treasures = {"383 3469 N", "760 9282 N", "733 3808 Y", "831 2889 Y", "458 9307 N", "463 3077 Y", "137 5364 N", "204 2738 N", "992 2222 Y", "281 6874 N", "808 711 N", "783 1522 N", "383 6327 N", "871 3398 N", "618 4751 Y", "783 2541 Y", "43 2936 Y", "132 9332 N", "760 1782 Y", "451 5433 N", "87 3386 Y", "274 3338 N", "550 1832 N", "234 3029 Y", "459 4116 N", "681 7701 N", "954 4678 N", "286 1397 Y", "666 300 Y", "707 1212 N", "749 5484 N", "979 1167 Y", "564 2750 Y", "359 1083 Y", "823 8287 N", "555 5382 N", "621 61 Y", "181 5733 N", "146 9036 N", "217 1024 Y"};
    int W = 9677;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 130347.63829787234;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> treasures = {"462 1267 N", "555 1651 Y", "696 2024 Y", "864 3020 N", "834 761 Y", "169 233 Y", "110 7196 N", "716 7289 N", "440 1454 Y", "93 4829 N", "297 4695 Y", "680 3036 Y", "146 186 Y", "88 4997 Y", "174 984 Y", "751 7952 N", "158 142 Y", "878 129 Y", "161 4105 N", "765 9199 N", "383 6064 N", "795 9708 N", "330 578 N", "21 4525 N", "531 2065 N", "860 6211 N", "19 5699 N", "690 2050 N", "4 1450 Y", "785 7443 N", "221 2609 Y", "258 1318 Y", "648 3178 Y", "761 44 Y", "563 6839 N", "365 4754 N", "675 1823 N", "641 8495 N", "537 8394 N", "674 3760 N"};
    int W = 10000;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 132009.99411764706;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> treasures = {"84 8484 N", "386 3474 Y", "783 9804 N", "442 4473 Y", "773 4916 N", "950 4264 Y", "517 2463 N", "952 4244 N", "79 1087 Y", "823 356 Y", "951 332 Y", "832 7877 N", "904 9435 N", "359 775 Y", "848 2393 N", "230 4112 N", "938 3398 N", "627 7596 N", "184 2056 N", "799 37 Y", "139 2797 N", "4 6591 N", "447 4147 N", "948 2784 N", "558 2941 N", "916 8353 N", "431 1241 Y", "472 813 Y", "881 9578 N", "917 9343 N", "517 2944 N", "648 1014 Y", "35 3204 Y", "241 6869 N", "839 2349 Y", "817 443 N", "933 4820 Y", "587 4741 N", "357 9673 N", "395 3137 Y"};
    int W = 9722;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 128132.86495176848;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> treasures = {"442 7562 N", "787 991 Y", "506 4042 N", "410 3914 Y", "429 137 N", "821 366 Y", "521 538 N", "141 2149 Y", "714 4356 Y", "785 4240 Y", "542 9206 N", "701 3246 Y", "49 9404 N", "83 6321 N", "588 2554 Y", "761 3386 N", "490 1128 N", "260 9741 N", "972 4921 Y", "180 1937 Y", "928 484 Y", "753 353 N", "607 5392 N", "416 2518 Y", "668 156 Y", "857 3642 Y", "304 7037 N", "186 9246 N", "370 2910 Y", "388 5433 N", "378 1046 N", "716 133 Y", "251 2389 Y", "73 1838 N", "759 6792 N", "756 1629 Y", "292 1322 N", "458 2180 Y", "130 2719 Y", "71 4527 N", "232 3257 Y", "326 7480 N", "965 2257 Y", "9 3644 Y"};
    int W = 9949;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 136474.70042796005;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> treasures = {"2625 810 N", "1988 7831 Y", "2118 5669 Y", "9790 7981 Y", "7421 2447 Y", "9638 9892 Y", "5294 6340 Y", "777 4508 N", "4375 8209 Y", "2945 7667 Y", "8806 8595 Y", "5667 6392 Y", "6099 3243 N", "4903 5595 Y", "2444 9805 N", "5083 4635 Y", "3090 6895 Y", "8177 797 N", "6771 2408 N", "2775 4866 Y", "1529 1656 N", "2538 6085 Y", "5840 9821 N", "7846 3029 Y", "4404 5171 Y", "7586 5560 N", "4157 1247 Y", "9990 2927 Y", "2043 2664 N", "6232 5633 N", "6529 4468 N", "4868 4775 N", "2445 5337 Y", "2835 5126 N", "4506 9966 Y", "3083 849 Y", "831 9095 Y", "9865 9121 Y", "813 9480 Y", "6083 2014 Y"};
    int W = 9819;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 48595.67945670628;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> treasures = {"859 5466 Y", "1216 4369 Y", "5052 3845 N", "4030 7530 N", "7340 9831 Y", "7976 7757 N", "954 5642 N", "1788 8655 N", "9218 6188 Y", "1379 7449 Y", "5722 2126 N", "2963 1626 Y", "8928 5793 N", "2939 1676 N", "9893 2316 N", "9176 6997 Y", "202 8088 N", "901 4429 N", "749 4274 Y", "7049 9150 Y", "9982 3361 N", "9684 5128 Y", "9962 3686 Y", "2493 3817 Y", "6638 7492 N", "8136 2759 N", "143 7955 N", "4418 8946 N", "4772 7218 Y", "1838 3442 N", "705 6232 Y", "9857 2301 Y", "7258 9058 N", "5818 1821 N", "2753 2568 Y", "7724 6268 Y", "4375 1580 Y", "7449 8332 N", "2397 547 N", "9454 89 N", "6468 1904 Y", "9456 2289 N", "1983 6745 N", "2984 9167 N", "7504 3732 N", "8575 5957 N", "3530 3401 N", "3879 3849 Y", "7126 3527 N", "5828 9968 Y"};
    int W = 9770;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 65319.44325657895;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> treasures = {"6764 6411 N", "2091 7539 Y", "5867 3519 Y", "1270 7272 N", "8568 2769 Y", "6109 8336 N", "2793 3604 N", "9175 5064 Y", "516 5611 N", "9029 6545 N", "8212 9046 Y", "5225 4101 Y", "4871 4510 Y", "5428 568 N", "8112 6289 N", "4542 3838 Y", "4992 6691 Y", "8849 6170 N", "3339 4919 N", "922 8231 N", "7494 6917 Y", "4037 8505 Y", "4889 9333 N", "5961 29 Y", "8994 4197 Y", "1300 3860 Y", "1671 4074 N", "4334 8884 Y", "2604 7719 Y", "2690 6473 N", "5008 243 Y", "3986 5132 Y", "9524 4186 N", "999 9184 N", "6221 2097 N", "2513 7270 N", "246 4816 N", "7617 1924 Y", "6328 3066 N", "4961 7991 N", "733 277 Y", "1104 6747 Y", "1767 6612 Y", "5401 7791 N", "5910 1123 Y", "9129 3750 Y", "9286 4061 N", "7247 1894 Y", "1435 2324 N"};
    int W = 9731;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 58434.89230769231;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> treasures = {"5693 2194 Y", "5948 7813 Y", "7131 9232 Y", "3713 2894 N", "7966 5488 Y", "6118 4376 Y", "3421 1111 N", "4929 1875 Y", "6700 5056 Y", "5519 3972 Y", "7738 2274 Y", "5537 781 N", "5185 6466 Y", "3846 9460 Y", "6880 407 N", "710 4894 N", "5460 106 N", "2460 8079 Y", "1832 5617 N", "7850 529 N", "4293 9382 Y", "5393 6603 N", "1635 3885 Y", "1504 5005 N", "70 5470 N", "3653 7704 N", "812 6115 Y", "8493 4844 Y", "5650 5678 N", "5410 2370 Y", "6639 580 Y", "9587 2449 Y", "267 8721 Y", "5500 8808 Y", "7451 9142 Y", "6166 1817 Y", "8469 6948 N", "67 2849 N", "4057 3455 Y", "9242 9665 N", "4372 7912 N", "4363 5808 N", "9204 6482 Y", "6588 2898 Y", "5132 8965 N", "5733 8805 Y"};
    int W = 9784;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 51821.89807592304;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> treasures = {"4787 6013 N", "7949 893 Y", "4460 9286 Y", "2920 4533 Y", "8076 1288 Y", "6458 6774 N", "2978 6225 N", "9259 5481 N", "6994 3364 Y", "2067 2747 Y", "8957 3695 Y", "1971 352 N", "8287 8649 Y", "8522 4640 N", "9956 8658 Y", "5677 392 Y", "5369 7089 N", "8735 2330 N", "7784 9539 N", "6745 9306 Y", "3668 8942 Y", "6607 2515 Y", "8885 9016 Y", "4381 9088 Y", "5657 5980 Y", "3360 3459 N", "7696 4513 Y", "3266 4533 N", "3092 7503 Y", "7187 8705 N", "9752 9654 Y", "6113 8064 Y", "9220 1349 Y", "9911 628 Y", "3874 6407 N", "7068 1602 N", "8964 9880 Y", "7157 3482 Y", "6633 3029 N", "3228 7562 N", "1133 9347 Y", "9866 6337 Y", "8441 6868 Y", "1584 4297 N", "8540 1790 Y", "3026 533 Y", "4511 2055 Y"};
    int W = 9862;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 30890.594170403587;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> treasures = {"2229 2555 N", "8682 6331 Y", "4011 752 Y", "4953 6684 N", "8413 4306 Y", "5566 8812 Y", "296 1944 N", "8374 8029 N", "8591 7763 Y", "7573 6398 Y", "3323 509 N", "6923 5791 N", "8319 7927 Y", "3813 9864 Y", "168 2803 N", "7355 9922 Y", "6305 7949 Y", "8571 7531 Y", "1706 3826 N", "1086 3617 N", "7830 6480 N", "7395 2640 N", "5263 5739 Y", "8119 6375 N", "3825 1718 N", "1911 7153 Y", "8869 7654 Y", "6388 8499 Y", "5412 8228 Y", "6737 122 Y", "3017 5968 N", "1836 7365 N", "8647 9098 Y", "6833 6062 N", "5966 3871 N", "1431 4604 Y", "2295 4845 Y", "8832 2565 N", "5476 2384 N", "1993 4061 N", "1769 5793 N", "2187 2189 Y", "4573 1568 N"};
    int W = 9897;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 36900.71518489379;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> treasures = {"4360 7582 N", "7179 6728 N", "6934 712 Y", "5457 2248 Y", "1021 6297 Y", "651 2163 Y", "3701 1349 N", "48 2525 N", "3728 9730 N", "618 3565 N", "3774 4804 Y", "2775 1069 N", "8225 835 Y", "1387 4902 Y", "459 4537 N", "5468 8549 Y", "2618 5366 Y", "880 3600 Y", "2195 3257 N", "4196 6566 N", "1378 7011 Y", "3732 3689 N", "7921 4888 Y", "6339 8581 Y", "2979 2542 Y", "5445 8754 Y", "9491 5150 Y", "3077 1014 Y", "4873 8053 N", "1659 5066 Y", "4138 4607 Y", "3796 3442 N", "2156 6520 N", "4117 6868 N", "166 3220 N", "6884 1598 Y", "5885 7658 Y", "8562 4786 Y", "7719 8564 N", "547 6704 Y", "7701 5203 Y", "3695 488 N", "1963 6081 N", "5511 369 N", "9120 242 N", "3760 4898 Y", "2090 5607 N"};
    int W = 9511;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 51805.08318264015;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> treasures = {"474 4398 N", "9594 8899 N", "4751 2755 Y", "4991 7920 N", "5189 7545 N", "1864 3900 N", "7619 4792 Y", "2385 8734 N", "1769 9890 N", "2703 7302 Y", "5095 7502 N", "4894 620 N", "4615 5963 Y", "8185 8181 Y", "6429 8540 Y", "5254 9981 N", "7142 8337 N", "1546 5136 Y", "6770 872 Y", "419 159 N", "8005 3643 Y", "786 6218 Y", "2620 3147 Y", "8053 1044 Y", "6672 7883 N", "5600 8768 N", "6364 8732 Y", "6297 1881 N", "9865 3492 N", "3488 6570 N", "219 8782 N", "4040 2982 N", "5178 9615 Y", "9191 6240 Y", "9723 7779 N", "561 7345 Y", "8113 6881 Y", "9249 4998 Y", "5265 4500 Y", "4360 358 N", "6516 4587 Y"};
    int W = 9806;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 56084.18091009989;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> treasures = {"9302 7699 N", "3846 9236 Y", "3762 7976 Y", "8236 6872 N", "7873 1950 N", "9100 4284 N", "7692 8308 Y", "2624 6347 N", "9752 679 Y", "391 185 Y", "5997 5768 N", "5278 8421 Y", "3424 4054 N", "6648 5073 N", "1784 7232 Y", "9346 4250 Y", "413 3693 Y", "9018 502 N", "432 4943 Y", "483 3972 Y", "3896 3345 Y", "5766 1856 N", "9926 3283 N", "5147 5307 Y", "6777 6030 Y", "2293 1610 Y", "3951 6419 N", "3165 5184 N", "6813 2340 Y", "5384 2413 Y", "8010 3021 Y", "7228 3462 N", "8645 9625 N", "5589 1413 N", "3652 9190 Y", "6819 2066 Y", "3124 8359 N", "4570 7424 Y", "3059 6067 Y", "6815 2467 N", "5246 2635 N"};
    int W = 9638;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 36759.892661555314;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> treasures = {"1074 3761 N", "6722 5854 N", "9074 715 N", "7676 9098 N", "958 156 N", "3022 3746 N", "3948 1380 N", "964 4963 N", "5615 1171 N", "2440 4956 N", "2252 7301 N", "3476 9297 Y", "6760 4215 Y", "8965 5649 N", "5608 9052 N", "3570 5141 N", "4316 2437 N", "6526 7400 N", "5390 4941 N", "7795 2820 N", "3196 3624 Y", "1294 7527 N", "636 208 N", "5373 4371 Y", "4521 3075 Y", "372 9020 N", "2421 4383 N", "981 8650 N", "9317 8671 N", "7479 5406 N", "3239 9666 N", "9296 5814 N", "598 3174 N", "4085 5213 N", "9180 6524 N", "1882 4774 N", "4691 1931 N", "9132 2734 N", "9702 4644 N", "4977 9097 N", "4302 5560 N", "6369 4172 N", "7715 969 N", "2484 9674 N", "9381 4556 N", "5520 3930 N", "7102 7372 N", "1775 3511 N", "5374 7742 N", "5828 9571 N"};
    int W = 9892;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 52841.87082853855;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> treasures = {"1993 8581 N", "7632 1624 N", "5109 9387 N", "9757 7544 N", "1349 4354 Y", "129 6339 Y", "3873 209 N", "8193 4620 N", "6851 1379 Y", "9220 2134 N", "5475 5074 N", "9352 5209 N", "9255 1205 N", "5356 3774 N", "1358 8187 N", "1777 9807 N", "2851 8919 N", "6873 6431 N", "857 4367 Y", "5229 3888 N", "4707 8662 N", "8927 9511 N", "7989 5350 N", "945 7869 N", "3820 1556 N", "8488 3253 N", "9073 9191 N", "9859 3446 N", "3210 9254 N", "7993 6983 N", "3866 8872 N", "6954 5541 N", "1688 6687 Y", "2754 6213 N", "1975 9492 N", "8068 4019 N", "5989 4736 N", "5258 8683 N", "8920 8810 N", "3457 8507 N", "105 266 N", "5848 7162 N", "8568 3972 N", "1765 2892 N", "8507 1023 N", "6265 3803 Y", "2988 4517 N", "480 7416 N", "4852 7583 N", "7452 9069 N"};
    int W = 9934;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 63721.82701421801;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> treasures = {"5927 8071 Y", "8607 9651 N", "2022 4074 N", "7759 1546 N", "8486 268 Y", "9643 9220 N", "8895 1757 N", "6594 1440 Y", "2460 1173 N", "9964 1242 N", "5376 5000 N", "4647 2285 N", "8038 3242 N", "3541 5212 N", "443 9350 N", "2272 6606 N", "7370 5649 N", "9869 5747 N", "7895 4590 N", "1547 635 Y", "2278 8874 N", "2848 8685 N", "8130 6032 N", "2367 3066 N", "6812 8633 N", "9965 5016 N", "7319 8641 Y", "8350 3639 N", "9562 5353 N", "7476 4558 N", "3609 1733 N", "3730 8815 N", "3447 5151 N", "9613 4853 N", "4260 7601 N", "2443 40 N", "1484 305 N", "3502 3720 N", "9425 5351 Y", "2820 6076 N"};
    int W = 9701;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 36271.417243124684;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> treasures = {"7288 1339 N", "2022 2738 N", "9964 7298 Y", "8588 6861 N", "9630 1368 N", "6818 8222 N", "2935 2321 N", "8075 7478 Y", "8595 5332 N", "5719 2491 N", "4111 4962 N", "9600 4915 N", "2084 3125 N", "2599 7260 N", "8694 6947 N", "3208 1984 N", "3198 1056 N", "3650 5433 N", "5356 6790 N", "9885 4564 Y", "7085 7747 N", "8893 2762 N", "6502 3166 N", "4363 4639 Y", "1634 835 N", "6271 1015 N", "9424 8558 N", "9911 6443 N", "5327 35 N", "2390 3996 N", "2238 2909 N", "3842 7279 N", "9704 1269 N", "877 9114 N", "2465 9492 N", "6606 7514 N", "6442 9473 N", "8997 1667 N", "5872 2037 Y", "7906 8298 Y", "6107 7092 Y", "4868 4916 N", "8598 8280 N", "8057 3376 N", "8409 986 N"};
    int W = 9843;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 33214.67741935484;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> treasures = {"3630 8779 N", "1978 8273 N", "4575 5807 N", "4031 1488 N", "2522 556 N", "1753 9605 N", "5000 6364 N", "2854 1034 N", "970 4832 N", "614 9153 N", "8595 1610 N", "1836 3195 N", "3470 866 N", "5808 2580 N", "2995 9737 N", "3573 3015 N", "7334 4710 N", "2213 9249 N", "5964 6756 N", "142 4057 N", "1721 9622 N", "516 8045 N", "1261 9629 N", "4901 3203 N", "2468 1651 N", "2477 7695 N", "1903 8526 N", "1801 234 N", "2358 329 N", "8690 3154 N", "9677 1808 N", "1992 9258 N", "4798 4559 N", "4255 8773 N", "2489 6631 N", "3504 6890 N", "6210 282 N", "9388 742 N", "9648 3518 N", "8329 2563 N", "9003 730 N", "1883 1733 N", "6265 2772 Y", "3525 9445 N", "8662 3301 N", "9404 7075 N", "9358 8907 N", "9943 2513 N", "7779 6260 N"};
    int W = 9527;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 64447.89162011173;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> treasures = {"9870 4609 N", "1077 5656 Y", "706 8660 N", "854 9309 Y", "121 7865 N", "1465 4369 N", "3695 17 N", "690 4563 N", "2732 9107 N", "5712 375 N", "9094 7980 N", "1816 9372 N", "9960 8416 N", "9715 697 N", "7824 6006 Y", "4898 3485 N", "4327 3608 N", "5796 9394 N", "5425 7062 Y", "7345 8781 N", "1608 1718 N", "8727 5198 N", "9004 9867 N", "2227 278 N", "5005 3775 Y", "5898 4100 N", "366 5447 N", "3228 375 N", "5177 2028 N", "3794 7286 N", "2979 4182 N", "8143 8941 N", "8907 7719 N", "9929 5103 N", "8286 6995 N", "1787 9222 N", "5546 2758 N", "9626 6196 N", "6241 7751 N", "3719 846 N", "7078 816 N"};
    int W = 9858;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 67672.77715877438;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> treasures = {"836 3089 N", "6495 2319 N", "3766 6274 N", "5970 7521 N", "189 7702 N", "5466 9423 N", "3534 7785 Y", "5616 9823 N", "2771 5180 N", "4466 926 N", "6548 9540 N", "9352 9569 N", "453 6124 N", "2439 3262 N", "9838 5370 N", "9789 1253 N", "2865 7695 N", "8016 3399 Y", "5723 4094 N", "8057 9712 N", "9793 4783 N", "9176 3757 N", "8016 2047 N", "2508 4091 N", "3922 6246 N", "4899 2761 N", "9688 2518 Y", "9990 9273 N", "781 806 N", "2129 2601 N", "3423 2943 Y", "7489 9290 N", "8442 8963 N", "9315 4984 N", "9853 6729 N", "8212 9007 N", "7210 7436 N", "2940 3910 N", "2322 9956 N", "543 8491 N", "8559 5149 N", "673 583 Y", "4539 1593 N", "8673 5436 N"};
    int W = 9589;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 48302.07215619694;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> treasures = {"2783 8186 N", "3623 9774 N", "5505 5595 N", "9240 1218 Y", "8234 5296 N", "3815 5302 N", "6485 88 N", "8885 1799 N", "2948 40 N", "6970 5710 N", "1142 6338 N", "9178 5315 N", "4122 8912 N", "3100 4399 N", "1090 9250 N", "8780 1481 N", "6831 1564 N", "1769 4468 N", "4482 9831 N", "9747 5108 N", "9137 9335 N", "7875 2347 Y", "3343 5582 N", "2367 6488 N", "8180 9163 N", "3459 7139 N", "5726 4594 N", "9482 1890 N", "4162 5677 Y", "1540 5561 N", "6628 1558 N", "3631 2524 N", "2589 491 N", "8506 5839 N", "5742 2497 N", "4835 4367 N", "9703 7009 N", "382 7550 N", "4313 268 N", "5030 6510 N", "7290 5803 N", "9929 9457 N", "1233 8628 N", "1708 5327 N", "6705 1946 N", "3718 2037 N", "973 1228 N", "6120 7765 N", "2991 9296 N"};
    int W = 9558;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 49272.94473810668;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> treasures = {"3195 1635 N", "4677 441 N", "9069 3615 N", "1414 4111 N", "7684 5185 N", "6239 434 N", "6 6608 N", "3576 7113 N", "1014 8250 N", "8953 4345 N", "324 7075 N", "4888 6000 N", "7602 6613 N", "2870 9655 N", "5360 8420 N", "3797 1924 N", "252 9046 N", "5121 6358 N", "1232 4772 N", "6827 6886 N", "4321 1809 N", "662 3231 N", "8777 6039 N", "8522 9366 N", "605 7615 N", "3238 2198 Y", "3802 7039 N", "140 5265 N", "2720 7307 N", "8989 6343 N", "5187 7594 N", "2050 9722 N", "6564 6252 N", "1812 2850 N", "8163 7827 N", "1440 2931 N", "7177 8973 N", "4370 7094 N", "9191 5412 N", "7587 9129 N", "5718 174 N"};
    int W = 9769;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 71655.79184681902;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> treasures = {"6579 3020 N", "6131 5290 N", "1627 2413 N", "9401 8717 N", "4641 4455 N", "6161 4885 N", "8407 2602 N", "1018 3791 N", "4972 7596 N", "30 643 Y", "9882 5401 N", "5330 8975 N", "1489 1202 N", "2169 9489 N", "744 4698 N", "8762 1091 N", "8327 1799 N", "9055 2135 N", "6000 9975 Y", "8415 7706 N", "5167 5400 N", "4309 4793 Y", "6974 5670 N", "5753 3386 N", "4509 2272 N", "4218 5292 N", "7061 6149 N", "1982 8258 N", "88 1290 N", "770 1721 N", "2740 6032 N", "9553 4609 Y", "8514 2945 N", "1848 7366 N", "8627 179 N", "1782 3123 N", "259 4914 Y", "5161 57 N", "317 5232 N", "2089 277 N", "3834 5759 N", "500 2597 N", "564 6225 N", "5137 5717 N", "9787 1858 Y", "8824 1679 N", "4389 4717 N", "6713 7100 N"};
    int W = 9818;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 55000.0875;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> treasures = {"2913 4387 N", "3939 4613 N", "8456 3552 Y", "4105 4922 N", "5103 6031 N", "428 5103 N", "9494 5827 N", "3655 4015 N", "7297 1263 N", "796 329 N", "1613 3084 N", "4683 3667 Y", "3233 7808 N", "3452 9299 N", "4427 4590 N", "1637 2475 N", "8633 7852 N", "4281 5342 N", "1087 822 N", "5166 2327 N", "6613 785 N", "9660 801 N", "7318 163 N", "8779 8901 N", "2749 2646 N", "8942 4874 N", "2639 691 N", "4210 1037 Y", "213 9642 N", "1422 3280 N", "1726 9202 N", "5102 3423 N", "6932 1556 N", "5366 3516 N", "1604 5002 N", "5469 1600 Y", "6033 4836 N", "7233 7498 Y", "796 5323 N", "9121 4556 N", "6104 5401 N", "2859 4 Y", "1389 4434 N", "9272 2480 N", "6256 9611 N", "7991 7262 N"};
    int W = 9583;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 46715.10770081571;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> treasures = {"6643 5250 N", "3252 5374 N", "1338 7707 N", "5064 8076 N", "8874 2728 N", "4812 7400 N", "1600 574 N", "824 6935 N", "5519 6043 N", "4915 7517 N", "6583 4595 Y", "4429 8292 N", "3860 8143 Y", "1389 2018 N", "2684 3192 N", "6246 1910 N", "9080 7976 N", "8644 9254 N", "2079 9926 N", "5647 3487 N", "3469 3075 N", "3686 6139 N", "8523 5217 N", "7010 3576 N", "5762 2211 Y", "4152 4928 N", "2329 2083 N", "283 6110 N", "6431 9014 N", "2268 9685 N", "7312 9734 N", "6367 2694 N", "5448 1686 Y", "5178 7317 N", "5944 4113 N", "3524 5842 N", "5562 9881 N", "4997 3096 N", "6645 8811 N", "7622 6430 Y", "6186 6081 N", "7005 593 N"};
    int W = 9761;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 46626.35932642487;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> treasures = {"3251 8205 N", "2703 3187 N", "6296 7640 N", "20 3719 N", "534 919 N", "7239 368 N", "574 1965 N", "9194 1861 N", "3741 6655 N", "9208 4825 N", "6577 672 N", "9467 9387 N", "8863 6540 N", "7909 6037 N", "4420 8304 N", "7008 7169 N", "439 8679 N", "6163 5466 N", "4305 4389 N", "6443 6821 N", "8781 60 N", "8271 5539 N", "5777 663 N", "872 356 N", "7791 8273 N", "6810 3735 N", "4385 8125 N", "5701 5711 N", "3827 7045 N", "4167 1989 N", "6594 8603 N", "6138 1708 N", "5888 5092 Y", "6336 6365 N", "5526 3011 Y", "5017 3946 N", "6901 5977 N", "9308 5561 N", "3695 8981 N", "189 3133 N", "8627 4585 N", "526 4022 Y", "3081 4555 N", "9256 4056 N", "1071 8487 N", "1478 3595 N"};
    int W = 9667;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 46441.65399239544;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> treasures = {"696 8504 N", "2313 1049 N", "6618 1658 N", "8339 1199 N", "7838 1729 N", "8656 9558 N", "4879 8486 N", "4556 8380 N", "5305 3180 N", "9451 6818 N", "4754 5183 N", "4444 1280 N", "9300 134 N", "5775 245 N", "8917 6073 N", "3630 3581 N", "159 1014 N", "2902 1816 N", "8083 6541 N", "8301 1353 N", "3746 7425 N", "4294 5602 Y", "6345 8212 N", "248 8744 N", "6859 2856 N", "2573 8126 N", "3492 2423 N", "8854 9159 N", "6038 7288 N", "6717 7472 N", "8476 5283 N", "88 2613 N", "4711 6007 N", "8945 3962 N", "5439 5432 N", "5398 7548 N", "6141 8141 N", "4776 4968 N", "5652 7261 N", "8700 9122 N", "5799 3796 N", "9845 3822 N", "8937 7236 N", "3467 8039 Y", "8066 3250 N", "7751 3628 N", "775 9521 N", "5601 4298 Y", "3410 2615 N", "6137 2032 N"};
    int W = 9941;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 49786.79925007211;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> treasures = {"491 1514 N", "6012 4472 N", "1613 133 N", "7887 4568 N", "8021 9938 N", "4473 3111 N", "5497 2585 N", "3268 6292 N", "9963 4510 N", "7575 2436 N", "2076 6208 N", "9892 6760 Y", "9328 3738 N", "1979 205 N", "846 4256 N", "6731 2370 N", "4924 5445 N", "4602 9969 N", "6775 9641 N", "9114 1218 N", "85 6075 Y", "5451 1602 N", "7972 20 N", "4058 5540 N", "70 1596 Y", "8469 1491 N", "8670 9318 N", "813 4344 N", "645 576 N", "3838 3680 N", "6351 6241 N", "9675 9307 N", "507 9601 N", "7944 4476 Y", "7844 8614 N", "5009 27 N", "6987 8880 N", "2767 1966 N", "9044 3032 N", "8816 3018 N", "1424 7835 Y", "2168 8675 N", "75 7729 N"};
    int W = 9582;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 58670.051354630006;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> treasures = {"7311 8829 N", "6149 8310 Y", "5939 7365 N", "3113 6030 N", "9578 945 N", "6055 6527 N", "6814 2685 N", "9902 7837 N", "1267 7706 N", "3745 3314 N", "6845 5768 N", "7553 5586 N", "5275 8986 N", "480 1611 Y", "7273 3956 N", "7967 457 N", "3860 791 N", "2474 4761 Y", "3246 318 N", "159 1502 N", "1522 6037 N", "2105 2405 N", "4119 2337 N", "5548 8979 N", "2410 4524 N", "2873 6389 N", "6543 3237 Y", "3825 2246 N", "3830 621 N", "9415 5451 N", "3109 504 N", "7133 3838 N", "9541 5269 N", "2527 448 N", "8415 5085 N", "3213 8152 N", "4506 4014 N", "3084 1670 N", "6024 7315 N", "9704 8209 N", "6600 6092 N", "5408 4110 N"};
    int W = 9803;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 31953.15561843169;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> treasures = {"7110 5484 N", "4173 822 N", "8576 1446 N", "2584 7838 N", "9470 7252 N", "5181 5127 Y", "3414 937 N", "9862 4982 N", "5678 6921 N", "1860 5075 N", "1028 4048 N", "3343 7029 N", "7206 3192 N", "9901 1606 N", "2284 5060 N", "4997 6468 N", "5179 4927 Y", "7809 3806 N", "9771 9891 N", "3224 3035 N", "7301 4036 N", "8836 2637 N", "2161 5321 N", "4953 6005 N", "4473 8500 Y", "8138 902 N", "7180 953 N", "9225 9353 N", "7658 9872 N", "9388 2719 N", "3883 1098 N", "7808 7622 N", "6293 6723 N", "4477 2973 N", "4794 6161 N", "4583 6978 N", "2835 6619 N", "4037 576 N", "6876 2413 N", "3349 186 N", "8196 4497 N", "4776 2593 N"};
    int W = 9683;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 26194.79991057456;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> treasures = {"7791 1785 Y", "7397 7578 N", "8223 7721 N", "9976 4262 N", "1323 9808 N", "8165 9834 N", "4581 1463 N", "2649 7648 N", "876 5721 N", "4975 8781 N", "9696 4953 N", "2371 3459 N", "7018 7803 N", "6302 265 N", "9973 909 N", "6696 8393 N", "3820 9392 Y", "993 7055 N", "4390 9338 N", "180 4863 N", "754 8137 N", "7541 9246 N", "2904 1856 N", "7423 2538 N", "5940 7546 N", "4370 2029 Y", "5698 1875 N", "6500 8878 N", "917 6995 N", "3061 7131 N", "6789 5953 N", "7716 4526 N", "9337 1300 Y", "345 7641 N", "3025 6475 N", "9364 5174 N", "1852 3858 N", "4533 9271 N", "7160 5155 N", "364 3220 Y", "8148 104 N", "6420 4226 N", "6933 7019 N", "1413 4195 N", "3033 5311 Y", "6167 1486 N", "1476 7154 N"};
    int W = 9757;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 67532.84083769633;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> treasures = {"7342 571 N", "1110 4435 N", "5349 591 N", "113 935 Y", "8973 6674 N", "2243 5362 Y", "969 4893 N", "7319 1155 N", "4315 5922 N", "8871 7072 N", "2750 6125 N", "9400 9311 N", "741 584 N", "5804 6163 N", "5033 1085 N", "1448 4167 N", "9621 927 N", "297 9621 N", "7206 2419 N", "8698 2121 N", "7834 6899 N", "122 3062 N", "4985 5184 N", "3790 6833 N", "6949 1596 N", "6140 8197 Y", "7483 8152 Y", "200 6288 N", "7489 4269 N", "7492 1498 N", "4533 1327 N", "1479 2614 N", "2750 4985 N", "8375 3474 N", "5160 5748 N", "6037 8283 N", "670 9201 N", "9049 6402 N", "3100 6408 N", "8934 580 N", "1711 6938 N", "7039 1835 N", "5508 4626 N", "4942 9063 N", "6703 6743 N"};
    int W = 9912;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 56912.86625055729;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> treasures = {"6624 5994 N", "3810 9696 N", "7259 4135 N", "3156 6974 N", "7340 3330 N", "2489 4436 N", "932 7396 N", "1308 3402 N", "4278 2512 N", "5351 8948 N", "979 7016 N", "1019 8889 N", "1375 3323 N", "8996 1296 N", "2419 793 N", "4890 3012 N", "3640 9876 N", "999 3717 N", "3325 5854 N", "922 111 Y", "2169 540 N", "6611 6322 N", "1182 3078 N", "5573 8208 N", "8360 8025 N", "397 4061 N", "9342 8896 N", "5671 2424 N", "5763 1880 N", "8324 53 Y", "374 5748 N", "8376 7702 N", "2886 7132 N", "7552 2772 N", "965 3394 N", "8265 6403 N", "1692 9690 N", "7891 6704 N", "6962 2591 N", "2463 5609 N", "8195 3243 N", "1810 1496 N", "3272 2545 N", "7427 2698 N", "9682 9385 N", "3446 8426 N", "715 8244 N"};
    int W = 9592;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 61582.52277657267;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> treasures = {"84 10000 N", "24 10000 N", "85 10000 N", "43 10000 N", "72 10000 N", "22 10000 Y", "98 10000 N", "52 10000 N", "26 10000 N", "89 10000 N", "96 10000 N", "90 10000 N", "96 10000 N", "13 10000 N", "31 10000 N", "23 10000 N", "58 10000 N", "82 10000 Y", "4 10000 N", "16 10000 N", "21 10000 N", "31 10000 N", "20 10000 N", "12 10000 N", "15 10000 N", "83 10000 N", "19 10000 N", "39 10000 N", "74 10000 N", "44 10000 Y", "57 10000 N", "53 10000 N", "17 10000 N", "26 10000 N", "95 10000 N", "98 10000 N", "41 10000 N", "83 10000 N", "77 10000 N", "62 10000 N", "45 10000 N", "48 10000 N", "60 10000 N", "23 10000 N", "78 10000 Y", "99 10000 N", "62 10000 N", "43 10000 N", "43 10000 N", "48 10000 N"};
    int W = 9689;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 500000.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> treasures = {"16 10000 N", "79 10000 N", "72 10000 N", "12 10000 N", "89 10000 N", "55 10000 N", "14 10000 N", "70 10000 N", "59 10000 N", "3 10000 N", "54 10000 N", "25 10000 N", "27 10000 N", "72 10000 N", "23 10000 N", "92 10000 N", "15 10000 N", "5 10000 N", "86 10000 N", "64 10000 N", "97 10000 N", "17 10000 N", "37 10000 Y", "29 10000 N", "4 10000 N", "98 10000 N", "48 10000 N", "81 10000 N", "32 10000 N", "14 10000 Y", "89 10000 Y", "80 10000 Y", "71 10000 N", "41 10000 N", "47 10000 N", "31 10000 N", "76 10000 Y", "70 10000 N", "65 10000 N", "10 10000 N", "60 10000 N", "94 10000 N", "16 10000 N", "28 10000 N", "56 10000 N", "15 10000 N", "24 10000 N", "95 10000 N", "13 10000 N", "91 10000 N"};
    int W = 9785;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 500000.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> treasures = {"2 10000 N", "85 10000 Y", "73 10000 N", "85 10000 N", "31 10000 N", "97 10000 N", "33 10000 N", "36 10000 Y", "73 10000 Y", "27 10000 N", "60 10000 N", "44 10000 N", "20 10000 N", "24 10000 N", "40 10000 N", "13 10000 N", "52 10000 N", "23 10000 N", "32 10000 N", "79 10000 N", "22 10000 Y", "39 10000 N", "47 10000 N", "32 10000 N", "62 10000 N", "53 10000 N", "23 10000 N", "31 10000 N", "17 10000 N", "98 10000 N", "27 10000 Y", "18 10000 N", "44 10000 N", "54 10000 Y", "40 10000 Y", "84 10000 N", "9 10000 N", "79 10000 N", "8 10000 N", "22 10000 Y", "46 10000 N", "4 10000 N", "36 10000 N", "83 10000 N", "71 10000 N", "73 10000 N", "90 10000 N", "58 10000 N", "42 10000 N", "20 10000 Y"};
    int W = 99;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 84000.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> treasures = {"92 10000 N", "44 10000 N", "51 10000 N", "47 10000 N", "54 10000 N", "61 10000 N", "9 10000 N", "19 10000 N", "30 10000 N", "9 10000 N", "93 10000 N", "26 10000 N", "68 10000 N", "26 10000 Y", "94 10000 N", "38 10000 N", "74 10000 N", "18 10000 N", "46 10000 N", "98 10000 N", "81 10000 N", "92 10000 N", "96 10000 N", "61 10000 N", "40 10000 N", "13 10000 N", "61 10000 N", "8 10000 Y", "22 10000 N", "30 10000 N", "11 10000 N", "66 10000 N", "61 10000 N", "78 10000 N", "8 10000 N", "24 10000 N", "89 10000 N", "14 10000 N", "17 10000 Y", "42 10000 N", "60 10000 N", "94 10000 Y", "37 10000 N", "45 10000 N", "12 10000 N", "33 10000 N", "65 10000 N", "49 10000 N", "100 10000 N", "9 10000 N"};
    int W = 9715;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 500000.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> treasures = {"64 10000 N", "35 10000 N", "31 10000 N", "57 10000 N", "6 10000 N", "79 10000 N", "36 10000 N", "66 10000 N", "86 10000 N", "74 10000 N", "82 10000 N", "26 10000 N", "95 10000 N", "59 10000 N", "13 10000 N", "85 10000 N", "93 10000 N", "14 10000 N", "27 10000 N", "87 10000 N", "61 10000 N", "71 10000 N", "93 10000 N", "26 10000 N", "76 10000 N", "17 10000 N", "35 10000 N", "75 10000 N", "84 10000 N", "68 10000 N", "24 10000 N", "39 10000 N", "71 10000 Y", "8 10000 N", "23 10000 N", "79 10000 N", "28 10000 N", "22 10000 N", "27 10000 N", "26 10000 N", "80 10000 N", "31 10000 N", "8 10000 N", "17 10000 N", "13 10000 N", "31 10000 N", "44 10000 N", "56 10000 N", "82 10000 N", "42 10000 N"};
    int W = 97;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 80140.84507042254;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> treasures = {"350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "774 2273 Y", "318 1572 Y"};
    int W = 3301;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 19467.907849829353;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> treasures = {"120 1200 Y", "30 299 N"};
    int W = 130;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 1299.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> treasures = {"1 2 N", "100 100 N"};
    int W = 100;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> treasures = {"200 100 Y", "100 99 N"};
    int W = 100;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 99.0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> treasures = {"160 150 N", "100 100 N", "100 100 N"};
    int W = 200;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> treasures = {"10 60 N", "20 100 N", "30 120 N"};
    int W = 50;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 220.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> treasures = {"50 89 N", "45 45 N", "45 45 N"};
    int W = 90;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 90.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> treasures = {"5 60 N", "10 100 N", "15 120 N"};
    int W = 25;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 220.0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> treasures = {"3 5 N", "4 78 Y", "100 100 N", "100 100 N", "130 10 Y", "207 1459 Y", "150 6867 N", "694 3494 Y", "417 7479 N", "350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "774 2273 Y", "318 1572 Y"};
    int W = 10000;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 39063.0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> treasures = {"100 100 Y", "50 50 N", "50 50 N"};
    int W = 110;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 110.0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> treasures = {"100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 100 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y", "100 101 Y"};
    int W = 10000;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 5027.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> treasures = {"123 123 Y", "123 123 Y", "123 123 Y", "10000 10000 Y", "5000 10000 Y", "1000 100 Y", "10000 10000 N", "100 100 Y", "12 1132 Y", "1231 1324 Y", "10000 10000 N", "100 100 Y", "12 1132 Y", "1231 1324 Y", "10000 10000 N", "100 100 Y", "12 1132 Y", "1231 1324 Y", "123 123 Y", "123 123 Y", "10000 10000 Y", "5000 10000 Y", "1000 100 Y", "10000 10000 N", "100 100 Y", "12 1132 Y", "1231 1324 Y", "10000 10000 N", "100 100 Y", "12 1132 Y", "4454 4553 N", "2312 1234 Y"};
    int W = 8653;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 22846.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> treasures = {"350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y"};
    int W = 3302;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 109855.8;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> treasures = {"350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "774 2273 Y", "318 1572 Y", "1 2 Y", "1 3 Y", "1 4 N", "1 6 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y", "20 28 Y"};
    int W = 3301;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 20305.547212741752;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> treasures = {"100 500 Y", "200 500 N", "400 500 Y"};
    int W = 250;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 750.0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> treasures = {"207 1459 Y", "150 6867 N", "694 3494 Y", "417 7479 N"};
    int W = 650;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 14931.00966183575;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> treasures = {"10 10 N", "15 15 N", "20 19 N"};
    int W = 30;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 29.0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> treasures = {"4 12 N", "3 6 N", "5 11 Y"};
    int W = 11;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 26.8;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> treasures = {"350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "774 2273 Y", "318 1572 Y", "320 265 Y", "258 60 Y", "120 9725 N", "679 302 Y", "611 2674 Y", "774 2273 Y", "318 1572 Y", "350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "774 2973 Y", "318 1572 Y", "320 265 Y", "350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "774 2173 Y", "318 1572 Y", "320 265 Y", "258 60 Y", "120 9725 N", "679 302 Y", "611 2674 Y", "778 2273 Y", "308 1572 Y", "350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "774 2273 Y", "328 1572 Y", "320 265 Y"};
    int W = 10000;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 100758.01291989665;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> treasures = {"50 370 N", "26 190 N", "26 190 N", "18 130 N", "18 130 N", "18 130 N"};
    int W = 54;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 390.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> treasures = {"100 100 N", "100 150 Y", "100 100 N"};
    int W = 150;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 175.0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> treasures = {"10 10 N", "2 3 N"};
    int W = 11;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> treasures = {"13 5636 N", "8087 5850 N", "3503 8959 N", "7466 1741 N", "7105 5135 N", "150 914 N", "1473 1659 N", "4457 1191 Y", "90 3779 N", "5712 6018 N", "1663 6630 N", "3521 571 N", "7833 8026 N", "3020 8759 N", "9559 9257 N", "1424 4621 N", "8622 2096 N", "8436 9967 N", "6115 3924 N", "2973 8401 Y", "3759 927 N", "563 88 N", "2759 2729 N", "6912 8376 N", "4849 2054 N", "4685 4580 N", "7444 1083 N", "3852 7350 N", "5724 3614 N", "2251 4252 N", "5171 9899 N", "3456 1690 N", "4919 636 N", "5048 1475 N", "1416 9051 N", "3031 4266 Y", "9666 6832 N", "8772 8216 N", "1914 1779 N", "4753 1556 N", "7320 4056 N", "5687 6822 N", "7219 4753 N", "3678 8346 Y", "5170 6630 N", "1047 9493 N", "5495 3460 N", "3750 8469 N", "4561 2719 N", "2978 7392 N"};
    int W = 10000;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 52208.92566431214;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> treasures = {"350 2765 Y", "258 560 Y", "120 9325 N", "879 302 Y", "611 2674 Y", "774 2273 Y", "318 1572 Y", "600 10000 N", "500 10000 N", "68 1000 Y", "400 100 N", "699 743 Y", "454 100 N", "789 458 N"};
    int W = 1932;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 34543.35849056604;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> treasures = {"101 146 N", "50 49 N", "50 49 N", "50 49 N"};
    int W = 150;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 147.0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> treasures = {"100 100 N", "100 100 N", "101 152 N"};
    int W = 200;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> treasures = {"100 100 N"};
    int W = 100;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> treasures = {"100 100 N", "30 50 N", "25 30 N", "25 30 N"};
    int W = 150;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 160.0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> treasures = {"550 10 Y"};
    int W = 549;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 9.981818181818182;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> treasures = {"2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 1 N", "2 2 N"};
    int W = 4;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> treasures = {"1 11 N", "10 100 N"};
    int W = 10;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> treasures = {"100 101 Y", "100 100 N"};
    int W = 199;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 199.99;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> treasures = {"60 100 N", "49 60 N", "49 60 N"};
    int W = 100;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 120.0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> treasures = {"50 10 N", "55 12 N", "50 10 N"};
    int W = 100;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> treasures = {"15 15 N", "10 8 N", "10 8 N"};
    int W = 20;
    TreasuresPacking* pObj = new TreasuresPacking();
    clock_t start = clock();
    double result = pObj->maximizeCost(treasures, W);
    clock_t end = clock();
    delete pObj;
    double expected = 16.0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test102() == 0 ? ++passed : ++failed;
    test103() == 0 ? ++passed : ++failed;
    test104() == 0 ? ++passed : ++failed;
    test105() == 0 ? ++passed : ++failed;
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13298470&rd=9988&pm=6476
********************************************************************************
/*
Don't try to challenge me.. you will see why!!
*/
#include <string>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;
double v[10001];
int cost[10001];
class TreasuresPacking {
  public:
  double maximizeCost(vector <string> t, int W) {
    double ret;
    vector <int> q;
    vector <int> q2;
    int i, j;
    for (i=0; i<=10000; i++) cost[i]=-1;
    cost[0]=0;
  for (i=0; i<t.size(); i++) {
    int a, b;
    char c;
    sscanf(t[i].c_str(), "%d %d %c", &a, &b, &c);
    
    if ( c == 'Y' ) {q.push_back(a), q2.push_back(b);}
    if (c == 'N') v[i] = 0; else v[i]=1;
    if (c=='N') {
    for (j=W; j>=a; j--) if (cost[j-a] != -1) if (cost[j-a] + b > cost[j]) cost[j] = cost[j-a] + b; }
  }
  cout<<"ok";
  int mm, mn;
  int pmin;
  for (i=0; i<q.size(); i++) {
    mm= q2[i]; mn=q[i];
    pmin=i;
    for (j=i+1; j<q.size(); j++) {int vlad= q2[j], vlad2=q[j]; if (vlad*mn> mm *vlad2) {pmin=j; mm=vlad; mn=vlad2; }}
    int da;
    da = q[i]; q[i]=q[pmin]; q[pmin]=da;
    da = q2[i]; q2[i]=q2[pmin]; q2[pmin]=da;
  }
  ret = 0;
  for (i=0; i<=W; i++) if (cost[i]!=-1) {
    cout<<i<<' '<<cost[i]<<' ';
    int cat = W-i;
    double pret = cost[i];
    for (j=0; j<q.size(); j++) {
      cout<<"q: "<<q[j]<<' '<<q2[j]<<'\n';
      if (cat == 0) break;
      if (q[j] <= cat) {cat-=q[j]; pret+= q2[j];}
      else {pret+= (cat * 1.0*q2[j] /(1.0* q[j])); cat = 0;}
    }
    cout<< pret<<'\n';
    if (pret > ret) ret = pret;
    }
  return ret;
  }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/