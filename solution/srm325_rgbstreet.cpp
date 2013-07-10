/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6680
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

class RGBStreet {
public:
    int estimateCost(vector<string> houses);
};

int RGBStreet::estimateCost(vector<string> houses) {
    int ret;
    return ret;
}


int test0() {
    vector<string> houses = {"1 100 100", "100 1 100", "100 100 1"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
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
    vector<string> houses = {"1 100 100", "100 100 100", "1 100 100"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> houses = {"26 40 83", "49 60 57", "13 89 99"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> houses = {"30 19 5", "64 77 64", "15 19 97", "4 71 57", "90 86 84", "93 32 91"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 208;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> houses = {"71 39 44", "32 83 55", "51 37 63", "89 29 100", "83 58 11", "65 13 15", "47 25 29", "60 66 19"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> houses = {"244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426", "244 538 426"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 6700;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> houses = {"370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163", "370 941 163"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 5330;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> houses = {"634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634", "634 634 634"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 12680;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> houses = {"254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254", "254 254 254"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 5080;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> houses = {"1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000", "1000 1000 1000"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> houses = {"54 85 50", "98 58 29", "59 3 81", "12 58 75", "52 71 98", "63 66 74", "60 25 66"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 257;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> houses = {"27 54 16", "95 12 80", "60 29 46", "7 54 47"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> houses = {"13 28 68", "80 86 46", "59 95 96", "49 9 62", "95 79 87", "49 70 83"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 263;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> houses = {"71 99 65", "62 7 63", "26 53 63", "24 93 62", "26 31 25", "43 49 8", "95 1 81"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> houses = {"13 23 12", "77 36 64", "44 89 76", "31 78 45"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> houses = {"13 80 29", "48 39 10", "5 88 8", "6 76 91", "64 43 49", "53 71 12"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> houses = {"100 87 33", "92 52 79", "50 1 6", "25 26 73", "88 92 89", "13 33 43"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 218;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> houses = {"89 97 33", "46 89 23", "56 80 54", "7 1 50", "14 46 15", "39 82 18", "99 42 100", "92 74 47", "84 63 74", "39 7 63"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 346;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> houses = {"33 77 4", "23 19 2", "1 93 13", "22 51 30", "49 69 51", "43 3 73", "59 52 8", "24 4 59"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> houses = {"94 91 10", "40 86 93", "84 58 26", "87 28 20", "44 51 51", "35 48 5", "58 15 2", "31 54 100", "55 25 8", "82 56 63"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 263;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> houses = {"54 85 50", "98 58 29", "59 3 81", "12 58 75", "52 71 98", "63 66 74", "60 25 66"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 257;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> houses = {"27 54 16", "95 12 80", "60 29 46", "7 54 47"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> houses = {"13 28 68", "80 86 46", "59 95 96", "49 9 62", "95 79 87", "49 70 83"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 263;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> houses = {"71 99 65", "62 7 63", "26 53 63", "24 93 62", "26 31 25", "43 49 8", "95 1 81"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> houses = {"13 23 12", "77 36 64", "44 89 76", "31 78 45"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> houses = {"13 80 29", "48 39 10", "5 88 8", "6 76 91", "64 43 49", "53 71 12"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> houses = {"100 87 33", "92 52 79", "50 1 6", "25 26 73", "88 92 89", "13 33 43"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 218;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> houses = {"89 97 33", "46 89 23", "56 80 54", "7 1 50", "14 46 15", "39 82 18", "99 42 100", "92 74 47", "84 63 74", "39 7 63"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 346;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> houses = {"33 77 4", "23 19 2", "1 93 13", "22 51 30", "49 69 51", "43 3 73", "59 52 8", "24 4 59"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> houses = {"94 91 10", "40 86 93", "84 58 26", "87 28 20", "44 51 51", "35 48 5", "58 15 2", "31 54 100", "55 25 8", "82 56 63"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 263;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> houses = {"183 836 909", "323 7 263", "237 406 168", "797 850 928", "223 243 916", "625 40 435", "482 446 533"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1953;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> houses = {"328 511 821", "245 572 537", "446 970 116", "413 970 968", "294 312 990"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1597;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> houses = {"730 698 558", "377 492 648", "98 896 932", "440 221 929", "474 900 452", "160 77 568", "657 87 198", "789 37 38", "114 693 219", "996 847 898", "817 564 791", "76 235 433", "95 303 915", "475 713 281", "367 106 759", "15 230 357", "944 653 704", "275 529 104", "67 283 609", "545 860 412"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 5699;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> houses = {"308 307 404", "733 169 389", "731 349 705", "197 421 855", "40 615 155", "638 208 889", "199 182 976", "733 959 624", "764 841 851", "356 961 530", "489 186 4", "296 952 502", "521 376 652", "631 608 222", "829 505 501", "979 10 990", "963 242 394", "412 888 82", "60 871 638", "935 97 433"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 6488;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> houses = {"1 79 681", "916 12 459", "710 496 367", "886 964 38", "735 763 441", "564 795 137", "93 774 855", "295 732 862", "333 548 333", "418 148 719", "649 243 499", "13 508 274", "96 513 169", "322 584 178", "482 148 934", "632 270 762", "527 81 527", "278 737 897", "173 10 682", "991 893 370"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 5461;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> houses = {"798 967 733", "68 475 124", "501 783 925", "598 635 790", "719 504 244", "437 439 926", "301 864 985", "713 576 850", "707 736 815", "259 474 915", "743 516 339", "813 190 793", "637 499 671", "6 302 691", "775 737 878", "618 449 516", "887 794 967", "450 463 307", "918 174 93", "15 308 345"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 8441;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> houses = {"609 535 566", "5 270 130", "43 202 751", "862 3 320", "878 275 758", "577 467 274", "116 536 119", "614 548 517", "967 244 880", "865 167 118", "271 627 365", "936 680 719", "437 706 433", "422 187 875", "151 726 612", "740 183 149", "682 739 65", "460 963 145", "773 305 816", "439 869 819"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 5746;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> houses = {"115 52 671", "465 457 308", "763 695 676", "130 479 445", "972 179 240", "695 110 578", "790 744 267", "787 921 349"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 2589;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> houses = {"667 962 159", "657 363 270", "33 740 526", "404 838 536", "681 453 840", "865 768 64", "976 332 271", "852 886 122", "96 922 769", "677 97 755", "928 516 537", "852 301 565", "248 79 501", "432 137 717", "618 682 643", "585 701 545", "663 861 119"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 4825;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> houses = {"150 59 673", "451 382 38", "376 954 154", "54 876 914", "554 451 628", "210 747 957", "291 512 109", "660 339 850", "925 744 805", "909 313 157", "955 454 641", "338 776 887", "568 671 103", "691 657 934"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 4461;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> houses = {"444 220 35", "931 688 938", "550 133 192", "863 961 145", "569 597 904", "893 427 599", "179 95 831", "469 629 834", "966 571 298", "958 139 320", "276 825 190", "326 24 558", "576 607 599", "98 47 48", "760 453 280", "597 878 975", "45 828 469", "675 27 888", "164 853 39", "316 152 465"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 5671;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> houses = {"287 691 608", "229 936 492", "219 670 811", "534 236 742", "951 812 122", "608 986 493", "30 84 781", "912 83 688", "173 818 73", "2 425 67", "365 234 750", "246 217 955", "450 207 549", "558 834 71", "263 850 860", "777 586 117", "281 925 994", "38 325 722", "578 103 76", "452 582 519"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 4802;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> houses = {"148 416 577", "235 308 506", "417 889 598", "448 490 443", "845 777 290", "676 77 693", "313 23 449", "349 227 245", "678 307 614", "989 700 888", "955 238 462", "569 469 993", "368 121 793", "635 133 45", "617 61 64", "213 789 609", "502 837 707"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 5437;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> houses = {"747 246 555", "317 848 178", "673 910 138", "664 132 605", "111 900 551", "19 56 348", "133 628 308", "469 498 70"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1203;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> houses = {"849 585 770", "791 274 197", "137 712 717", "669 99 204", "719 857 466", "236 409 218", "450 479 382", "828 314 645", "599 204 255", "215 782 800", "424 82 79", "244 400 647", "963 811 970", "529 695 449", "858 845 942", "830 363 539", "582 304 887", "318 323 426", "183 138 563"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 6613;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> houses = {"919 373 628", "675 492 855", "897 816 224", "297 4 347", "40 901 142", "368 765 633", "315 528 261", "190 737 692", "535 247 242", "267 630 954", "235 547 705", "137 316 710", "707 879 21", "559 878 948", "395 194 825", "436 156 203", "172 294 751", "533 260 9"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 4588;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> houses = {"368 416 608", "397 657 85", "380 950 519", "36 369 311"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1144;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> houses = {"9 86 57", "653 62 115", "419 447 226", "881 778 438", "589 551 251", "418 825 204", "401 853 358", "691 287 492", "263 319 494", "560 516 519", "975 431 959", "684 250 568", "598 998 121", "466 814 551", "242 250 628", "58 185 411", "456 137 138"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 5300;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> houses = {"524 483 837", "57 859 80", "205 149 210", "659 340 929", "247 804 224", "930 510 195", "652 217 492", "982 529 850", "24 946 693", "811 316 803", "173 303 765", "640 548 517", "432 190 739", "486 194 759", "37 731 405", "298 701 477"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 4769;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> houses = {"62 5 346", "881 717 557", "957 643 270", "58 704 154", "101 510 673", "184 225 47", "462 157 35", "8 211 522", "252 761 342", "903 96 804", "692 499 309", "282 919 546", "695 147 146", "519 602 323", "113 947 278", "140 829 994", "537 94 873", "854 121 835", "768 731 114", "334 185 815"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 5031;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> houses = {"194 90 96", "53 179 99", "524 113 25", "538 164 34", "328 234 19", "514 116 49", "224 214 12", "135 221 87", "670 150 56", "375 256 84", "151 296 27", "200 233 1", "84 24 32", "408 218 70", "238 341 70", "26 205 50", "620 26 34", "119 88 75", "50 160 38", "72 128 87"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1620;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> houses = {"284 704 84", "47 605 114", "339 217 140", "63 868 206", "365 215 113", "168 607 102", "103 101 4", "66 222 34", "215 793 35", "60 898 143", "273 521 180", "314 863 174", "425 20 144", "287 907 173", "280 769 87", "178 758 145", "388 874 152", "205 893 82", "431 360 236", "274 288 250"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 2713;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> houses = {"262 600 465", "168 369 24", "245 606 151", "277 263 22", "344 132 224", "123 254 118", "330 180 194", "9 535 374", "167 12 324", "43 270 64", "286 359 155", "390 296 72", "227 484 33", "113 72 56", "231 409 243", "147 62 367", "134 267 300", "327 327 423", "232 145 290", "377 614 187"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 2776;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> houses = {"58 52 125", "27 107 359", "11 3 148", "84 131 365", "55 108 412", "67 136 202", "95 207 107", "62 71 456", "30 201 30", "116 116 601", "11 185 89", "116 140 454", "66 190 87", "13 48 249", "85 82 380", "117 138 574", "103 16 215", "86 155 465", "116 99 469", "12 42 370"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1319;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> houses = {"211 637 636", "163 602 343", "271 390 824", "24 304 2", "65 297 448", "272 576 437", "57 638 278", "353 306 389", "260 754 236", "185 291 299", "177 453 565", "284 419 314", "173 793 23", "239 711 811", "290 223 80", "188 61 695", "140 343 148", "269 40 592", "200 607 707", "292 376 358"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 3956;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> houses = {"3 323 536", "2 332 295", "5 487 446", "6 271 161", "4 523 511", "7 367 641", "10 451 406", "5 217 310", "17 65 703", "5 96 724", "4 870 19", "11 331 104", "4 452 478", "4 108 643", "7 299 295", "20 308 674", "8 707 360", "14 280 162", "9 243 611", "1 145 496"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 2034;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> houses = {"61 414 47", "424 313 52", "302 523 24", "1 785 29", "778 242 44", "341 410 23", "112 778 34", "300 220 50", "539 855 12", "151 499 41", "665 312 38", "382 560 12", "508 369 54", "286 71 35", "706 97 54", "435 809 19", "277 581 56", "470 458 8", "536 422 36", "37 870 16"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 2712;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> houses = {"100 9 351", "123 522 323", "91 265 351", "7 424 41", "79 410 372", "93 206 556", "44 570 238", "83 70 275", "83 345 74", "123 399 320", "60 385 389", "118 30 308", "134 495 261", "71 249 368", "9 474 641", "125 266 579", "67 275 421", "88 309 522", "135 107 315", "101 512 12"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 2511;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> houses = {"3 246 780", "214 300 631", "215 534 91", "11 623 398", "171 718 390", "384 495 209", "441 814 697", "203 461 118", "227 337 341", "22 535 158", "527 427 136", "274 446 532", "375 278 261", "223 541 139", "8 41 296", "512 154 539", "112 695 319", "442 104 550", "139 740 524", "137 675 515"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 4067;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> houses = {"124 663 48", "24 453 243", "141 779 2", "25 29 234", "121 167 238", "70 698 67", "60 403 97", "117 100 145", "165 54 54", "162 667 180", "115 807 168", "11 351 249", "73 353 3", "134 699 169", "101 598 174", "83 31 10", "155 612 137", "24 106 265", "10 194 203", "62 262 200"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1605;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> houses = {"512 93 595", "316 214 82", "446 87 460", "773 39 80", "633 74 378", "684 322 185", "202 131 638", "580 51 276", "535 388 299", "508 199 639", "360 181 924", "854 168 713", "176 184 606", "222 145 145", "389 341 673", "692 187 904", "56 185 11", "18 141 883", "814 428 880", "166 95 12"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 3246;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> houses = {"629 8 47", "374 4 35", "437 20 37", "751 83 24", "719 111 6", "389 117 8", "236 119 45", "250 98 30", "70 67 10", "550 33 55", "843 106 29", "696 49 45", "879 46 23", "49 93 21", "364 13 74", "498 34 84", "190 26 9", "827 68 77", "489 74 61", "573 129 36"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 918;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> houses = {"139 191 128", "24 514 115", "168 525 370", "36 572 35", "113 569 387", "88 554 537", "96 121 15", "39 328 469", "175 706 385", "84 186 113", "39 167 188", "11 167 213", "188 227 419", "247 468 272", "94 129 339", "27 210 2", "6 671 215", "118 273 4", "228 707 291", "167 57 403"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 2624;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> houses = {"76 718 764", "205 716 786", "273 140 755", "541 13 348", "594 51 104", "99 37 377", "363 627 679", "232 200 145", "205 364 590", "431 278 101", "29 509 590", "525 3 309", "55 133 519", "680 361 373", "709 592 34", "353 76 736", "84 571 750", "687 532 459", "67 576 536", "123 645 625"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 3826;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> houses = {"38 34 196", "109 30 146", "91 11 317", "47 38 248", "30 32 380", "18 46 307", "20 34 222", "88 15 135", "30 28 156", "104 3 30", "48 33 164", "19 30 539", "16 13 34", "2 32 194", "77 15 322", "72 15 167", "93 15 255", "101 21 282", "96 39 109", "38 21 420"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 715;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> houses = {"203 28 317", "13 13 245", "237 13 175", "346 38 417", "402 2 11", "408 1 419", "292 8 364", "16 42 485", "144 13 112", "217 1 76", "355 11 99", "437 35 289", "49 48 480", "445 13 364", "52 21 311", "33 10 389", "78 2 33", "240 37 399", "479 32 457", "477 23 423"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1521;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> houses = {"476 62 56", "149 68 74", "570 19 2", "18 67 2", "605 65 5", "194 49 9", "386 82 76", "378 89 76", "295 1 18", "55 51 28", "234 47 18", "298 76 37", "614 104 79", "590 23 61", "87 37 51", "370 64 20", "599 4 68", "31 72 52", "445 30 55", "179 97 43"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 819;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> houses = {"51 376 51", "84 285 414", "59 291 341", "13 437 227", "77 396 252", "2 370 387", "9 173 261", "56 237 480", "64 176 219", "37 287 162", "34 312 84", "35 121 362", "81 403 347", "74 311 71", "27 381 199", "26 10 101", "97 91 239", "23 282 69", "25 128 224", "49 187 280"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1872;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> houses = {"27 126 61", "248 95 462", "95 229 411", "159 381 805", "223 526 673", "497 431 6", "323 325 321", "169 2 826", "3 444 618", "107 55 127", "469 373 106", "10 111 634", "214 25 71", "48 151 638", "14 107 226", "540 221 900", "163 41 544", "124 40 426", "209 479 465", "403 545 724"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 2740;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> houses = {"114 143 106", "19 291 19", "19 201 38", "118 290 142", "43 177 258", "30 108 187", "100 59 43", "66 205 222", "111 61 64", "74 56 341", "75 203 63", "6 314 122", "69 102 266", "26 297 153", "89 304 203", "16 4 35", "35 182 294", "118 304 32", "140 97 390", "62 298 200"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1304;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> houses = {"37 378 319", "55 196 638", "70 231 114", "18 347 472", "33 129 104", "39 49 593", "18 18 135", "69 394 166", "75 400 263", "72 89 472", "39 253 655", "40 263 623", "51 19 613", "52 147 542", "19 359 490", "22 138 616", "31 83 184", "55 380 536", "48 342 98", "68 300 102"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1918;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> houses = {"77 324 433", "64 86 152", "530 213 196", "242 18 334", "130 320 141", "524 16 173", "501 59 464", "316 56 186", "78 253 355", "517 318 244", "454 183 167", "503 80 335", "197 290 82", "555 85 499", "4 79 7", "523 135 213", "111 227 46", "274 39 415", "12 69 354", "397 284 44"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 2015;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> houses = {"183 338 22", "117 233 554", "379 98 260", "255 36 299", "100 75 287", "616 65 462", "431 331 163", "29 363 152", "479 80 96", "157 454 656", "453 390 220", "82 299 351", "35 158 250", "439 185 300", "462 25 323", "152 182 422", "331 155 164", "331 375 215", "467 283 361", "609 94 212"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 2831;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> houses = {"316 164 301", "246 197 319", "36 357 535", "353 25 380", "477 179 283", "465 149 364", "164 215 470", "72 137 127", "371 98 414", "334 62 396", "462 168 302", "43 36 256", "462 310 32", "314 321 232", "70 7 522", "223 33 4", "455 83 301", "310 111 464", "418 299 286", "465 56 138"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 3002;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> houses = {"75 26 59", "164 27 3", "172 68 160", "191 7 259", "183 80 64", "212 55 180", "233 56 1", "110 5 175", "72 29 225", "50 1 147", "109 46 204", "108 73 140", "158 49 222", "19 22 196", "192 29 243", "194 65 127", "112 77 35", "201 45 10", "223 84 242", "147 59 20"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1070;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> houses = {"59 37 29", "359 104 32", "926 109 3", "317 46 39", "937 24 33", "153 43 7", "413 59 44", "750 92 11", "877 30 46", "807 38 12", "847 88 42", "896 22 10", "149 30 9", "815 85 31", "891 27 23", "853 3 41", "454 38 35", "318 57 41", "553 59 33", "620 15 46"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 771;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> houses = {"142 104 163", "247 74 35", "54 18 41", "327 123 60", "80 120 378", "249 79 47", "142 13 88", "46 91 10", "361 120 196", "114 95 48", "287 58 413", "51 150 168", "47 18 388", "227 83 21", "73 18 373", "425 79 62", "283 26 243", "31 22 216", "213 80 318", "196 106 298"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1096;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> houses = {"49 111 100", "19 214 146", "38 118 257", "75 270 209", "14 194 46", "37 257 34", "28 116 275", "7 26 132", "58 166 99", "45 33 258", "46 71 176", "75 126 70", "76 151 380", "70 120 178", "27 107 104", "79 307 183", "59 207 317", "14 348 162", "5 257 141", "66 240 368"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1558;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> houses = {"172 168 776", "540 414 65", "6 616 669", "289 317 295", "142 278 81", "685 321 781", "641 320 126", "66 661 150", "121 444 122", "548 248 33", "418 86 794", "22 730 400", "205 528 277", "17 506 654", "191 141 460", "188 46 429", "12 350 822", "327 608 582", "70 31 115", "333 686 663"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 3399;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> houses = {"80 99 947", "6 58 435", "28 47 386", "75 178 318", "116 69 302", "68 120 742", "208 132 777", "57 203 503", "34 90 342", "36 85 327", "104 99 53", "113 147 59", "194 88 317", "29 161 408", "93 90 243", "2 179 546", "53 109 5", "146 171 506", "95 65 381", "22 44 856"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1284;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> houses = {"5 4 5", "5 4 3", "1 1 5", "1 1 3", "3 4 3", "4 1 1", "1 2 2", "2 1 3", "5 2 1", "3 4 2", "4 2 1", "1 3 1", "1 2 3", "4 4 4", "1 3 5", "3 4 5", "5 3 2", "3 3 4", "3 4 2", "3 4 4"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> houses = {"2 4 5", "2 3 4", "1 1 1", "2 2 1", "1 2 5", "1 2 2", "1 1 1", "1 2 2", "1 4 1", "1 1 5", "2 1 5", "1 3 5", "1 4 1", "1 2 1", "2 3 3", "1 3 1", "2 2 1", "1 3 1", "1 4 5", "2 2 2"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> houses = {"3 3 1", "4 2 1", "5 3 1", "5 2 1", "2 2 1", "3 1 1", "5 3 1", "5 1 1", "2 4 1", "2 3 1", "5 4 1", "2 4 1", "3 3 1", "3 4 1", "5 4 1", "2 1 1", "4 3 1", "4 3 1", "2 1 1", "3 2 1"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> houses = {"1 1 1", "1 1 3", "2 3 2", "1 2 2", "2 3 1", "2 1 1", "1 1 3", "2 1 4", "2 1 1", "2 3 4", "2 3 4", "1 2 2", "1 2 4", "1 2 3", "2 3 2", "2 3 3", "2 1 1", "1 2 1", "2 1 2", "1 2 1"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> houses = {"2 3 4", "3 2 4", "1 4 1", "3 1 2", "1 4 1", "1 4 1", "2 1 3", "3 4 4", "2 4 1", "2 3 4", "1 3 3", "4 4 4", "1 2 1", "4 4 1", "3 4 3", "3 4 4", "4 4 1", "1 4 4", "1 2 2", "2 2 3"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> houses = {"3 1 1", "1 1 1", "1 1 1", "3 1 1", "2 1 1", "1 1 1", "2 1 1", "1 1 1", "1 1 1", "1 1 1", "3 1 1", "2 1 1", "3 1 1", "1 1 1", "2 1 1", "2 1 1", "2 1 1", "3 1 1", "3 1 1", "2 1 1"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> houses = {"5 1 1", "1 2 1", "5 1 2", "3 2 2", "2 1 2", "1 2 2", "4 1 2", "3 2 1", "5 2 1", "3 2 2", "3 2 2", "4 1 2", "4 2 1", "3 1 2", "1 1 2", "3 1 1", "2 2 2", "5 1 2", "3 1 1", "4 2 2"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> houses = {"1 1 1", "1 2 1", "1 3 2", "1 1 2", "1 2 1", "1 1 1", "1 2 2", "1 2 3", "1 2 2", "1 2 2", "1 2 3", "1 3 4", "1 1 4", "1 2 2", "1 1 4", "1 1 3", "1 2 3", "1 3 3", "1 2 3", "1 3 4"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> houses = {"2 3 1", "5 4 2", "4 3 1", "3 4 1", "5 4 1", "5 2 1", "4 1 1", "1 4 1", "2 1 2", "5 1 2", "3 3 2", "4 1 1", "4 1 2", "3 1 2", "4 2 1", "4 2 2", "2 3 2", "5 2 1", "2 3 2", "2 3 2"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> houses = {"1 1 4", "2 1 1", "1 1 2", "3 1 4", "3 1 1", "2 1 1", "3 1 2", "1 1 4", "1 1 3", "2 1 3", "1 1 4", "2 1 3", "1 1 1", "3 1 3", "3 1 4", "2 1 2", "1 1 1", "1 1 2", "3 1 2", "1 1 4"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> houses = {"1 444 55", "1 960 999", "50 300 299", "1 1 1", "99 999 99", "1 444 55", "1 960 999", "50 300 299", "1 1 1", "99 999 99", "1 444 55", "1 960 999", "50 300 299", "1 1 1", "99 999 99", "1 444 55", "1 960 999", "50 300 299", "1 1 1", "99 999 99"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1820;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> houses = {"1 2 3", "4 5 6", "7 8 9", "10 11 12", "13 14 15", "16 17 18", "19 20 21", "22 23 24", "25 26 27", "28 29 30", "31 32 33", "34 35 36", "37 38 39", "40 41 42", "43 44 45", "46 47 48", "49 50 51", "52 53 54", "55 56 57", "58 59 60"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> houses = {"47 25 29", "47 25 29", "47 25 29", "47 25 29", "47 25 29", "47 25 29", "47 25 29", "32 83 55", "32 83 55", "32 83 55", "32 83 55", "32 83 55", "32 83 55", "32 83 55", "71 39 44", "71 39 44", "71 39 44", "71 39 44", "71 39 44", "43 41 42"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 727;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> houses = {"1 5 4", "2 5 5", "3 5 1"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> houses = {"71 39 44", "32 83 55", "51 37 63", "89 29 100", "83 58 11", "65 13 15", "47 25 29", "60 66 19"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> houses = {"1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100", "1 100 100"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1010;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> houses = {"71 39 44", "32 83 55", "51 37 63", "89 29 100", "83 58 11", "65 13 15", "47 25 29", "60 66 19", "100 200 100", "10 20 30", "30 40 50", "50 60 70", "10 20 3", "4 3 2", "1 1 1", "2 2 2", "3 4 5", "100 200 100", "10 10 10", "20 20 10"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 595;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> houses = {"12 23 8", "45 12 56", "23 67 23"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> houses = {"100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> houses = {"91 41 91", "64 67 94", "86 59 32", "28 69 65", "53 47 12", "16 18 64", "96 83 89", "91 47 58", "54 85 15", "17 66 43", "76 25 15", "81 76 58", "43 52 50", "17 78 34", "84 39 32", "9 64 65", "52 7 61", "62 62 87", "44 71 2", "87 14 94"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 639;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> houses = {"1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99", "1 100 99"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> houses = {"1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> houses = {"999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999", "999 999 999"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 19980;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> houses = {"2 3 4", "20 20 30", "11 21 31", "12 22 32", "31 32 33", "111 112 113", "221 222 223", "331 332 113", "221 442 443", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "1 2 3", "999 99 9", "999 99 9", "999 99 9", "999 99 9", "999 99 9", "999 99 9"};
    RGBStreet* pObj = new RGBStreet();
    clock_t start = clock();
    int result = pObj->estimateCost(houses);
    clock_t end = clock();
    delete pObj;
    int expected = 1085;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22647875&rd=10005&pm=6680
********************************************************************************
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
 
using namespace std ; 
 
vector<string> Split(string s , string delimit) 
{ 
  vector<string> ret ; 
  int index = s.find( delimit , 0 ) ; 
  if( index == 0 ) 
    index += delimit.length() ; 
  else 
    index = 0 ; 
 
  while( true ) 
  { 
    int prevIndex = index ; 
    index = s.find( delimit , prevIndex ) ; 
    if( index == string::npos ) 
    { 
      if( s.length()-prevIndex  > 0 )// count empty string out 
        ret.push_back( s.substr( prevIndex,s.length()-prevIndex  ) ); 
      break ; 
    } 
    if( index-prevIndex > 0 )// count empty string out 
      ret.push_back( s.substr( prevIndex , index-prevIndex ) ); 
    index += delimit.length() ; 
  } 
  return ret ; 
} 
 
 
class RGBStreet 
{  
  public:  
  int estimateCost(vector <string> houses)  
  {  
    int rgb[20][3] ; 
    for( int i=0 ; i<houses.size() ; i++ ) 
    { 
      vector<string> t = Split(houses[i] ," ") ; 
      rgb[i][0] = atoi(t[0].c_str()) ; 
      rgb[i][1] = atoi(t[1].c_str()) ; 
      rgb[i][2] = atoi(t[2].c_str()) ; 
    } 
    int dp[20][3]  = {0} ; 
    for( int i=0 ; i<3 ; i++ ) 
      dp[0][i] = rgb[0][i] ; 
 
    for( int i=1 ; i<houses.size() ; i++ ) 
    { 
      dp[i][0] = min( dp[i-1][1] , dp[i-1][2] ) + rgb[i][0] ; 
      dp[i][1] = min( dp[i-1][0] , dp[i-1][2] ) + rgb[i][1] ; 
      dp[i][2] = min( dp[i-1][0] , dp[i-1][1] ) + rgb[i][2] ;       
    } 
    return min(min( dp[houses.size()-1][0], dp[houses.size()-1][1]) , dp[houses.size()-1][2]) ; 
  }  
   
  
};  
 
//i love you, hs! 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/