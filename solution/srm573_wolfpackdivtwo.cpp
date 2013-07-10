/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12467
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

class WolfPackDivTwo {
public:
    int calc(vector<int> x, vector<int> y, int m);
};

int WolfPackDivTwo::calc(vector<int> x, vector<int> y, int m) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {3, 5};
    vector<int> y = {0, 0};
    int m = 1;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 1};
    vector<int> y = {0, 0};
    int m = 1;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {0, 2, 4};
    vector<int> y = {0, 0, 0};
    int m = 2;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {33, 31, 23};
    vector<int> y = {12, 22, 30};
    int m = 17;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 32212804;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {34, 28, 16, 12, 44, 34};
    vector<int> y = {18, 16, 4, 28, 38, 24};
    int m = 38;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 170739128;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {29, 13, 47, 10, 16, 29, 29, 5, 40};
    vector<int> y = {36, 46, 36, 7, 17, 4, 26, 42, 45};
    int m = 25;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {5, 28, 28, 50, 28, 13, 50, 14, 17, 42, 1, 21};
    vector<int> y = {3, 24, 34, 22, 38, 7, 44, 46, 9, 36, 45, 33};
    int m = 12;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {39, 18, 34, 7, 31, 24, 37, 8, 15, 14, 40, 17, 42, 29, 36};
    vector<int> y = {34, 0, 49, 18, 24, 1, 10, 39, 6, 25, 49, 0, 1, 34, 33};
    int m = 38;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {15, 3, 44, 29, 24, 8, 31, 45, 37, 4, 29, 21, 8, 39, 20, 8, 44, 50};
    vector<int> y = {45, 45, 32, 33, 36, 16, 47, 17, 29, 12, 13, 19, 42, 39, 42, 40, 16, 46};
    int m = 23;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {45, 32, 48, 17, 28, 26, 7, 21, 16, 21, 4, 0, 28, 1, 12, 22, 3, 15, 26, 16, 14};
    vector<int> y = {38, 49, 15, 32, 37, 0, 28, 48, 9, 36, 15, 21, 31, 0, 29, 29, 12, 14, 35, 35, 1};
    int m = 50;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {0, 3, 19, 31, 8, 26, 20, 38, 19, 38, 41, 7, 26, 10, 17, 5, 50, 18, 34, 46, 24, 10, 41, 17};
    vector<int> y = {12, 5, 1, 3, 18, 14, 2, 14, 3, 16, 17, 11, 36, 24, 37, 47, 18, 10, 48, 18, 24, 38, 29, 5};
    int m = 38;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 722032521;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {22, 30, 7, 7, 50, 33, 46, 41, 5, 9, 44, 25, 2, 48, 14, 21, 43, 18, 25, 28, 14, 47, 33, 34, 7, 28, 4};
    vector<int> y = {33, 33, 22, 8, 9, 4, 15, 20, 12, 2, 47, 24, 17, 21, 1, 46, 26, 0, 26, 37, 49, 22, 36, 43, 38, 13, 47};
    int m = 23;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {28, 2, 33, 11, 22, 25, 40, 18, 45, 35, 41, 44, 14, 35, 43, 45, 11, 36, 3, 39, 21, 43, 32, 42, 36, 21, 11, 10, 30, 35};
    vector<int> y = {26, 48, 39, 37, 46, 33, 2, 40, 33, 49, 39, 48, 26, 31, 1, 49, 13, 0, 5, 41, 29, 15, 8, 4, 44, 17, 15, 4, 2, 39};
    int m = 41;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {10, 24, 41, 34, 30, 44, 6, 1, 21, 44, 7, 19, 20, 24, 49, 20, 36, 13, 24, 50, 30, 39, 33, 13, 17, 45, 45, 18, 35, 27, 18, 31, 21};
    vector<int> y = {23, 15, 22, 13, 19, 7, 9, 38, 44, 41, 48, 4, 37, 1, 48, 35, 49, 30, 17, 49, 39, 30, 28, 12, 40, 4, 32, 27, 44, 4, 25, 30, 16};
    int m = 2;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {19, 39, 23, 1, 4, 26, 37, 12, 1, 37, 33, 9, 26, 20, 34, 37, 29, 30, 44, 22, 22, 44, 42, 0, 50, 6, 1, 30, 15, 16, 25, 12, 23, 16, 9, 29};
    vector<int> y = {29, 45, 35, 11, 22, 44, 23, 6, 5, 11, 11, 1, 30, 24, 44, 15, 21, 42, 20, 34, 36, 46, 14, 20, 40, 30, 13, 44, 15, 24, 43, 32, 25, 20, 0, 45};
    int m = 8;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {32, 28, 48, 37, 29, 42, 9, 13, 49, 37, 32, 30, 4, 32, 16, 40, 36, 27, 14, 8, 50, 46, 44, 0, 0, 40, 43, 26, 3, 45, 43, 16, 18, 47, 33, 41, 25, 47, 41};
    vector<int> y = {11, 0, 33, 44, 32, 0, 10, 2, 36, 30, 3, 43, 47, 47, 35, 7, 15, 40, 17, 33, 11, 39, 11, 47, 31, 39, 30, 5, 30, 32, 12, 21, 15, 46, 42, 28, 4, 40, 34};
    int m = 27;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {21, 11, 7, 14, 32, 46, 39, 28, 30, 36, 4, 5, 48, 48, 29, 50, 22, 19, 2, 47, 2, 10, 32, 20, 20, 19, 27, 8, 30, 50, 16, 45, 44, 34, 2, 7, 48, 44, 39, 5, 18, 15};
    vector<int> y = {45, 17, 0, 22, 20, 26, 43, 26, 40, 26, 48, 0, 22, 30, 23, 46, 2, 7, 34, 15, 42, 42, 28, 24, 28, 17, 41, 8, 44, 42, 20, 25, 34, 44, 10, 27, 6, 16, 33, 5, 0, 45};
    int m = 10;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {6, 1, 33, 6, 49, 44, 48, 1, 29, 39, 13, 9, 24, 35, 20, 37, 15, 7, 6, 14, 21, 26, 26, 33, 0, 12, 38, 41, 6, 11, 20, 48, 28, 14, 40, 25, 50, 12, 13, 45, 1, 48, 46, 39, 18};
    vector<int> y = {17, 28, 40, 47, 20, 29, 3, 8, 32, 2, 18, 42, 49, 22, 37, 26, 34, 28, 31, 23, 36, 27, 29, 8, 27, 17, 25, 26, 19, 0, 43, 39, 27, 37, 33, 22, 41, 3, 38, 20, 44, 15, 21, 46, 41};
    int m = 50;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 611169760;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {34, 6, 14, 47, 39, 0, 15, 49, 34, 37, 27, 30, 8, 28, 40, 43, 17, 16, 24, 29, 13, 16, 25, 19, 30, 47, 3, 10, 0, 18, 4, 15, 2, 8, 29, 14, 21, 35, 20, 5, 24, 14, 37, 46, 4, 15, 12, 5};
    vector<int> y = {44, 50, 36, 25, 33, 10, 27, 47, 50, 41, 29, 20, 38, 42, 44, 7, 13, 16, 0, 33, 7, 50, 19, 21, 16, 13, 21, 4, 32, 38, 8, 39, 18, 36, 15, 6, 49, 0, 8, 29, 4, 8, 3, 40, 42, 15, 44, 5};
    int m = 22;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {25, 33, 42, 47, 5, 37, 14, 49, 35, 47, 41, 45, 42, 4, 49, 33, 18, 11, 31, 5, 3, 3, 24, 32, 8, 7, 30, 20, 32, 13, 32, 0, 46, 4, 10, 39, 13, 32, 0, 49, 3, 6, 48, 30, 20, 4, 15, 29, 15, 2};
    vector<int> y = {36, 36, 29, 30, 48, 48, 17, 42, 10, 32, 42, 42, 37, 39, 28, 4, 11, 16, 16, 22, 10, 16, 41, 7, 19, 14, 49, 15, 13, 44, 23, 25, 45, 25, 7, 28, 24, 39, 45, 20, 24, 1, 47, 47, 5, 7, 2, 30, 28, 19};
    int m = 5;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {29, 16, 18, 30, 36, 21, 50, 33, 36, 19, 49, 32, 14, 29, 3, 17, 24, 17, 49, 38, 24, 43, 7, 16, 10, 14, 8, 13, 1, 2, 40, 17, 43, 2, 46, 30, 26, 3, 18, 1, 3, 49, 43, 43, 15, 49, 43, 24, 38, 46};
    vector<int> y = {31, 12, 4, 14, 16, 17, 46, 49, 8, 27, 11, 2, 48, 15, 47, 15, 28, 1, 17, 28, 16, 19, 47, 2, 8, 38, 8, 29, 19, 6, 20, 47, 3, 32, 10, 4, 40, 49, 44, 41, 5, 13, 21, 23, 49, 25, 27, 0, 0, 4};
    int m = 9;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {26, 32, 13, 6, 25, 39, 44, 18, 42, 8, 4, 9, 27, 20, 49, 10, 44, 28, 18, 33, 3, 21, 10, 43, 15, 46, 48, 34, 44, 13, 30, 22, 35, 27, 29, 2, 30, 34, 9, 29, 17, 36, 7, 48, 46, 36, 31, 45, 49, 31};
    vector<int> y = {29, 33, 14, 19, 24, 46, 9, 23, 7, 31, 25, 2, 46, 29, 0, 19, 19, 9, 25, 4, 28, 42, 17, 18, 6, 37, 19, 49, 13, 24, 27, 13, 28, 22, 26, 45, 21, 37, 8, 30, 18, 15, 10, 25, 5, 49, 18, 2, 30, 20};
    int m = 4;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {18, 20, 1, 25, 36, 19, 12, 15, 6, 36, 40, 2, 0, 45, 49, 46, 29, 28, 2, 30, 48, 46, 10, 4, 12, 40, 12, 28, 16, 20, 4, 14, 29, 41, 45, 33, 17, 10, 14, 49, 32, 38, 46, 30, 29, 50, 34, 30, 50, 43};
    vector<int> y = {22, 26, 9, 1, 32, 3, 36, 29, 50, 34, 24, 28, 22, 9, 19, 44, 17, 24, 36, 4, 30, 36, 10, 28, 32, 18, 0, 48, 42, 12, 2, 2, 21, 11, 15, 9, 49, 38, 4, 43, 44, 22, 42, 10, 7, 2, 0, 32, 24, 0};
    int m = 5;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {6, 50, 24, 11, 2, 37, 22, 31, 32, 11, 27, 8, 27, 5, 30, 13, 0, 34, 8, 18, 29, 34, 3, 45, 21, 5, 49, 48, 42, 28, 22, 15, 44, 11, 47, 12, 0, 22, 5, 45, 2, 27, 18, 29, 20, 31, 6, 42, 43, 31};
    vector<int> y = {1, 35, 7, 26, 7, 10, 3, 28, 39, 20, 24, 43, 0, 20, 11, 32, 31, 31, 3, 47, 18, 41, 46, 26, 46, 18, 12, 49, 43, 15, 13, 38, 29, 8, 28, 1, 21, 29, 30, 22, 9, 2, 7, 0, 45, 26, 9, 31, 34, 30};
    int m = 20;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {50, 28, 34, 3, 20, 34, 35, 30, 46, 37, 29, 27, 44, 46, 23, 17, 20, 43, 11, 0, 27, 17, 1, 15, 44, 24, 24, 16, 34, 31, 32, 11, 36, 6, 16, 31, 17, 20, 24, 9, 7, 4, 48, 37, 20, 27, 2, 48, 4, 0};
    vector<int> y = {28, 20, 42, 35, 22, 6, 39, 14, 32, 49, 0, 41, 22, 0, 3, 17, 46, 31, 39, 42, 47, 7, 49, 23, 4, 42, 6, 22, 30, 7, 40, 1, 18, 50, 26, 23, 31, 6, 44, 43, 49, 38, 28, 33, 8, 3, 32, 14, 16, 32};
    int m = 3;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {43, 7, 20, 22, 44, 6, 49, 30, 24, 26, 46, 49, 41, 45, 35, 7, 28, 50, 15, 35, 0, 1, 14, 10, 50, 25, 3, 35, 5, 22, 14, 0, 30, 12, 38, 14, 46, 36, 16, 35, 28, 39, 0, 39, 1, 6, 30, 49, 19, 2};
    vector<int> y = {24, 42, 17, 47, 47, 7, 38, 7, 25, 45, 31, 16, 26, 40, 32, 12, 11, 21, 4, 20, 47, 26, 37, 17, 39, 44, 10, 24, 32, 45, 3, 1, 9, 19, 47, 21, 45, 3, 37, 26, 37, 42, 7, 24, 6, 29, 41, 14, 38, 19};
    int m = 26;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {14, 22, 10, 31, 38, 16, 48, 4, 9, 42, 24, 30, 37, 24, 9, 9, 32, 42, 26, 2, 8, 13, 18, 5, 12, 11, 22, 32, 1, 11, 33, 42, 38, 48, 26, 5, 9, 16, 12, 50, 36, 3, 38, 32, 15, 49, 11, 43, 21, 6};
    vector<int> y = {34, 48, 2, 49, 12, 32, 26, 38, 49, 0, 36, 28, 21, 32, 21, 31, 44, 26, 20, 20, 32, 29, 22, 7, 40, 11, 38, 16, 21, 25, 15, 48, 32, 30, 16, 33, 17, 10, 4, 28, 14, 49, 4, 14, 45, 23, 0, 9, 17, 18};
    int m = 16;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {34, 23, 0, 11, 2, 40, 6, 28, 27, 13, 12, 46, 23, 15, 22, 28, 10, 4, 16, 47, 18, 21, 27, 4, 25, 2, 13, 3, 10, 33, 6, 36, 37, 13, 15, 33, 37, 44, 11, 15, 36, 2, 35, 48, 31, 13, 49, 32, 7, 46};
    vector<int> y = {21, 30, 19, 6, 1, 1, 25, 25, 2, 42, 3, 17, 40, 46, 3, 33, 25, 39, 3, 50, 0, 8, 38, 47, 8, 23, 14, 42, 11, 48, 27, 13, 40, 4, 38, 28, 28, 41, 30, 22, 41, 45, 20, 39, 38, 6, 0, 1, 0, 27};
    int m = 27;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {16, 8, 19, 22, 27, 16, 49, 35, 50, 40, 12, 0, 26, 0, 23, 45, 12, 19, 45, 39, 36, 24, 9, 14, 21, 41, 9, 35, 20, 26, 14, 4, 3, 14, 4, 4, 40, 42, 36, 28, 21, 3, 46, 43, 43, 10, 47, 29, 20, 46};
    vector<int> y = {4, 10, 19, 16, 21, 46, 17, 25, 0, 48, 0, 22, 2, 32, 19, 31, 36, 7, 29, 11, 28, 2, 27, 48, 27, 13, 29, 13, 32, 26, 34, 34, 17, 50, 12, 36, 46, 38, 4, 34, 31, 33, 18, 3, 45, 0, 25, 11, 30, 2};
    int m = 42;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {34, 29, 5, 0, 38, 40, 14, 47, 42, 19, 11, 11, 4, 25, 0, 28, 22, 28, 13, 15, 16, 42, 6, 3, 20, 39, 26, 48, 4, 4, 20, 0, 18, 31, 20, 2, 1, 7, 8, 45, 49, 30, 50, 41, 19, 29, 13, 45, 43, 47};
    vector<int> y = {15, 40, 12, 41, 15, 35, 37, 16, 33, 16, 4, 8, 35, 20, 13, 5, 29, 49, 14, 22, 25, 31, 31, 40, 31, 46, 25, 47, 37, 17, 47, 19, 27, 0, 11, 19, 22, 10, 31, 44, 8, 25, 31, 10, 22, 46, 28, 24, 40, 2};
    int m = 44;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 201839943;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {26, 42, 16, 39, 31, 9, 30, 19, 14, 39, 13, 18, 17, 33, 17, 33, 35, 7, 25, 6, 45, 2, 3, 25, 34, 39, 10, 27, 33, 50, 19, 44, 46, 46, 2, 33, 44, 42, 17, 30, 16, 16, 10, 26, 10, 49, 45, 24, 7, 38};
    vector<int> y = {50, 48, 18, 19, 25, 13, 46, 43, 6, 17, 43, 26, 43, 29, 29, 41, 31, 3, 13, 26, 11, 6, 17, 41, 30, 43, 12, 39, 43, 20, 31, 48, 10, 38, 32, 27, 12, 24, 17, 38, 30, 44, 34, 44, 46, 41, 43, 32, 5, 20};
    int m = 26;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {6, 23, 26, 46, 14, 34, 29, 18, 1, 33, 31, 5, 12, 29, 37, 45, 39, 14, 5, 9, 8, 35, 4, 17, 38, 44, 3, 4, 38, 1, 44, 19, 42, 40, 10, 4, 27, 46, 46, 4, 26, 41, 13, 4, 10, 33, 19, 13, 15, 46};
    vector<int> y = {23, 24, 25, 3, 0, 35, 36, 9, 34, 8, 8, 10, 37, 6, 18, 28, 4, 7, 20, 16, 5, 22, 11, 24, 5, 17, 8, 21, 41, 50, 27, 28, 39, 3, 15, 35, 28, 13, 17, 49, 47, 20, 48, 37, 39, 44, 2, 0, 14, 35};
    int m = 12;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {24, 6, 22, 16, 35, 2, 27, 14, 11, 45, 34, 9, 20, 33, 4, 33, 6, 38, 41, 10, 27, 0, 22, 30, 9, 15, 42, 8, 18, 5, 22, 9, 16, 5, 27, 21, 31, 18, 44, 9, 48, 4, 25, 38, 14, 26, 6, 35, 15, 38};
    vector<int> y = {38, 44, 48, 8, 21, 24, 43, 28, 33, 49, 10, 41, 32, 47, 36, 41, 10, 36, 25, 36, 47, 38, 2, 28, 9, 41, 32, 44, 8, 17, 22, 39, 16, 27, 49, 39, 25, 28, 32, 23, 26, 42, 29, 32, 10, 10, 32, 0, 5, 10};
    int m = 33;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {49, 47, 30, 6, 26, 37, 42, 36, 1, 12, 24, 25, 43, 50, 2, 36, 0, 35, 22, 2, 8, 20, 43, 9, 15, 12, 14, 24, 33, 36, 16, 20, 31, 12, 2, 46, 32, 9, 2, 25, 2, 28, 41, 19, 47, 42, 12, 24, 46, 34};
    vector<int> y = {42, 36, 0, 45, 23, 46, 27, 7, 44, 19, 39, 46, 44, 5, 15, 35, 3, 22, 9, 7, 43, 43, 28, 30, 4, 33, 7, 49, 24, 29, 35, 35, 26, 3, 37, 17, 11, 32, 39, 22, 25, 3, 44, 8, 4, 37, 39, 37, 41, 5};
    int m = 21;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {33, 42, 36, 18, 2, 5, 48, 3, 11, 23, 39, 21, 37, 4, 37, 41, 46, 43, 23, 11, 22, 34, 33, 1, 5, 35, 22, 8, 28, 48, 37, 8, 5, 22, 3, 12, 39, 21, 41, 25, 36, 33, 20, 46, 28, 41, 9, 3, 43, 24};
    vector<int> y = {41, 18, 50, 2, 48, 43, 2, 7, 1, 11, 19, 27, 35, 18, 17, 1, 4, 35, 43, 23, 16, 2, 49, 11, 25, 43, 26, 4, 14, 22, 41, 32, 45, 32, 35, 20, 21, 15, 41, 1, 38, 23, 42, 0, 22, 19, 37, 11, 23, 8};
    int m = 34;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {10, 9, 11, 26, 8, 22, 11, 42, 18, 20, 12, 3, 11, 17, 30, 20, 24, 12, 41, 6, 45, 14, 23, 12, 4, 31, 36, 35, 25, 45, 44, 29, 46, 8, 11, 0, 17, 32, 41, 19, 27, 44, 20, 17, 13, 34, 38, 36, 42, 16};
    vector<int> y = {31, 6, 30, 29, 7, 15, 32, 1, 15, 35, 23, 8, 6, 36, 31, 49, 39, 27, 24, 9, 18, 25, 8, 15, 39, 14, 23, 6, 40, 40, 9, 10, 49, 21, 50, 5, 44, 45, 2, 6, 36, 13, 13, 28, 14, 17, 3, 3, 31, 35};
    int m = 28;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {26, 8, 0, 48, 39, 28, 29, 11, 31, 36, 38, 32, 3, 19, 37, 17, 49, 50, 10, 1, 34, 2, 19, 19, 31, 36, 40, 20, 3, 40, 24, 23, 14, 45, 25, 15, 48, 5, 18, 36, 18, 38, 46, 34, 34, 44, 29, 11, 1, 27};
    vector<int> y = {50, 4, 46, 10, 3, 34, 29, 49, 7, 26, 16, 4, 11, 19, 41, 11, 13, 18, 46, 5, 10, 38, 27, 23, 47, 30, 48, 42, 41, 26, 2, 11, 18, 13, 37, 13, 16, 7, 28, 48, 2, 22, 20, 40, 22, 44, 39, 11, 1, 29};
    int m = 4;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {14, 14, 45, 22, 33, 25, 46, 20, 8, 21, 33, 16, 14, 33, 48, 6, 19, 4, 43, 13, 30, 48, 16, 28, 30, 31, 40, 10, 43, 39, 2, 3, 18, 38, 19, 1, 9, 24, 28, 14, 30, 16, 11, 23, 28, 11, 17, 24, 6, 8};
    vector<int> y = {31, 37, 20, 15, 18, 26, 39, 7, 3, 4, 40, 41, 49, 48, 3, 5, 2, 5, 46, 32, 39, 25, 0, 15, 45, 30, 27, 11, 2, 18, 13, 18, 43, 19, 46, 26, 42, 31, 3, 47, 27, 47, 6, 48, 39, 36, 22, 41, 13, 15};
    int m = 10;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {5, 4, 16, 9, 39, 21, 12, 7, 44, 2, 48, 4, 3, 43, 5, 46, 46, 19, 23, 48, 4, 13, 44, 43, 21, 36, 43, 4, 22, 32, 40, 36, 21, 48, 38, 6, 37, 43, 33, 29, 4, 17, 31, 43, 27, 41, 6, 24, 1, 35};
    vector<int> y = {45, 40, 30, 37, 21, 19, 46, 41, 8, 0, 22, 20, 23, 39, 25, 28, 34, 1, 47, 46, 38, 21, 16, 23, 35, 30, 41, 48, 10, 24, 14, 36, 37, 44, 14, 22, 27, 43, 31, 33, 12, 21, 47, 45, 41, 27, 18, 14, 37, 49};
    int m = 26;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {35, 47, 39, 41, 42, 49, 18, 42, 37, 29, 24, 30, 50, 0, 5, 33, 3, 37, 49, 46, 13, 34, 12, 5, 25, 14, 9, 39, 47, 4, 36, 35, 11, 5, 3, 15, 29, 47, 38, 34, 41, 19, 23, 30, 9, 18, 34, 29, 46, 42};
    vector<int> y = {12, 28, 42, 18, 45, 28, 39, 33, 8, 24, 43, 31, 47, 17, 38, 2, 0, 34, 14, 37, 36, 19, 39, 18, 20, 5, 8, 44, 2, 47, 27, 46, 22, 26, 6, 34, 6, 26, 7, 31, 36, 12, 12, 39, 0, 49, 13, 42, 7, 27};
    int m = 12;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {13, 25, 19, 42, 33, 29, 37, 20, 26, 2, 31, 4, 1, 33, 27, 49, 25, 2, 20, 46, 6, 36, 20, 9, 9, 37, 21, 33, 43, 42, 38, 39, 9, 17, 4, 43, 48, 30, 0, 17, 5, 30, 33, 12, 6, 38, 26, 36, 21, 50};
    vector<int> y = {35, 45, 19, 16, 15, 9, 25, 40, 50, 26, 25, 24, 5, 41, 35, 21, 39, 4, 36, 24, 26, 36, 18, 31, 5, 43, 0, 21, 29, 22, 48, 17, 33, 11, 42, 3, 16, 2, 4, 3, 15, 34, 17, 18, 20, 42, 22, 34, 15, 30};
    int m = 48;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {48, 17, 33, 39, 11, 14, 46, 35, 25, 3, 24, 10, 24, 11, 46, 10, 37, 19, 0, 19, 11, 42, 30, 0, 9, 1, 7, 46, 38, 8, 13, 0, 26, 37, 33, 30, 36, 45, 9, 43, 38, 24, 31, 8, 24, 30, 29, 5, 27, 36};
    vector<int> y = {11, 6, 12, 46, 44, 27, 21, 0, 22, 38, 47, 27, 49, 12, 11, 9, 10, 4, 27, 14, 0, 29, 1, 19, 50, 28, 10, 13, 3, 37, 0, 39, 49, 32, 14, 21, 15, 8, 10, 20, 25, 5, 0, 1, 39, 3, 6, 44, 10, 17};
    int m = 20;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {20, 35, 26, 7, 18, 27, 44, 35, 4, 42, 5, 24, 8, 1, 41, 25, 6, 12, 38, 37, 46, 17, 11, 5, 47, 8, 16, 22, 19, 6, 5, 18, 18, 14, 24, 26, 15, 28, 13, 32, 12, 10, 46, 20, 0, 27, 4, 34, 5, 13};
    vector<int> y = {38, 45, 28, 5, 24, 21, 4, 49, 20, 6, 1, 28, 18, 47, 35, 7, 44, 2, 2, 17, 2, 43, 19, 3, 11, 22, 4, 18, 47, 22, 7, 4, 48, 34, 22, 4, 15, 50, 3, 16, 42, 2, 0, 16, 44, 37, 18, 6, 31, 11};
    int m = 9;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {22, 17, 28, 21, 14, 30, 44, 7, 41, 38, 15, 9, 6, 43, 11, 31, 31, 28, 36, 0, 7, 39, 5, 20, 42, 26, 21, 47, 27, 44, 17, 10, 4, 28, 28, 3, 4, 20, 1, 1, 0, 40, 15, 45, 8, 41, 7, 44, 12, 38};
    vector<int> y = {19, 48, 27, 28, 45, 49, 35, 32, 30, 13, 0, 42, 43, 38, 24, 4, 44, 41, 23, 25, 10, 26, 40, 47, 17, 49, 30, 32, 30, 43, 14, 11, 39, 13, 21, 4, 41, 25, 40, 14, 43, 19, 28, 32, 3, 18, 46, 49, 9, 15};
    int m = 11;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {32, 25, 48, 13, 5, 15, 30, 33, 22, 2, 31, 18, 24, 4, 49, 26, 49, 8, 37, 36, 2, 9, 38, 45, 41, 42, 9, 48, 11, 16, 8, 44, 32, 14, 25, 30, 13, 42, 35, 1, 30, 41, 9, 43, 34, 19, 22, 31, 41, 40};
    vector<int> y = {46, 39, 38, 31, 29, 11, 0, 37, 12, 40, 43, 8, 36, 32, 31, 16, 13, 4, 19, 14, 2, 17, 26, 47, 39, 40, 27, 44, 11, 48, 40, 22, 48, 38, 13, 6, 3, 4, 19, 23, 46, 33, 45, 37, 38, 29, 38, 9, 27, 2};
    int m = 28;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {8, 19, 30, 35, 27, 9, 50, 14, 18, 41, 40, 14, 48, 17, 33, 49, 23, 40, 18, 35, 10, 6, 19, 40, 50, 5, 13, 6, 24, 0, 1, 1, 8, 13, 42, 26, 23, 5, 36, 38, 37, 25, 43, 44, 29, 38, 3, 15, 25, 37};
    vector<int> y = {27, 16, 31, 48, 12, 16, 25, 19, 37, 44, 9, 3, 7, 34, 24, 2, 14, 45, 19, 26, 7, 5, 46, 39, 5, 46, 30, 37, 33, 31, 20, 32, 37, 40, 13, 25, 24, 18, 39, 11, 10, 26, 46, 45, 48, 23, 10, 42, 42, 12};
    int m = 23;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {48, 20, 43, 19, 10, 15, 20, 44, 12, 35, 8, 37, 37, 30, 10, 34, 49, 2, 36, 17, 47, 1, 31, 40, 9, 19, 22, 34, 12, 24, 26, 5, 15, 42, 36, 37, 8, 41, 21, 7, 47, 30, 44, 46, 36, 20, 8, 24, 50, 7};
    vector<int> y = {36, 38, 41, 43, 18, 15, 50, 42, 28, 41, 36, 27, 17, 48, 36, 42, 15, 18, 30, 25, 21, 15, 33, 24, 43, 45, 44, 28, 2, 4, 42, 29, 19, 20, 32, 41, 32, 23, 35, 25, 41, 2, 44, 0, 6, 40, 30, 24, 0, 41};
    int m = 5;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {44, 3, 8, 9, 34, 6, 1, 19, 31, 45, 8, 19, 7, 2, 4, 29, 33, 34, 3, 24, 6, 34, 50, 8, 33, 35, 36, 26, 16, 36, 14, 42, 17, 27, 21, 37, 44, 37, 47, 1, 49, 20, 4, 14, 50, 38, 28, 21, 41, 49};
    vector<int> y = {21, 34, 5, 30, 23, 5, 44, 30, 22, 48, 9, 28, 18, 7, 23, 20, 2, 29, 32, 43, 43, 1, 35, 17, 0, 32, 39, 49, 13, 7, 27, 5, 10, 24, 4, 42, 3, 2, 16, 4, 30, 37, 1, 15, 43, 19, 13, 26, 50, 6};
    int m = 9;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {41, 31, 26, 11, 49, 46, 41, 49, 33, 34, 24, 4, 9, 36, 37, 37, 49, 30, 1, 38, 10, 30, 25, 35, 41, 46, 49, 5, 12, 32, 24, 50, 5, 8, 18, 6, 14, 46, 3, 5, 17, 1, 2, 3, 4, 45, 25, 45, 5, 36};
    vector<int> y = {49, 45, 6, 31, 9, 34, 25, 45, 3, 18, 48, 14, 17, 20, 17, 39, 11, 12, 17, 8, 6, 28, 33, 41, 0, 28, 0, 47, 38, 46, 14, 16, 11, 4, 2, 16, 32, 48, 49, 29, 17, 33, 38, 39, 28, 43, 49, 17, 13, 22};
    int m = 47;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {18, 47, 36, 24, 44, 41, 3, 11, 21, 12, 38, 37, 47, 8, 41, 31, 4, 29, 17, 30, 43, 48, 6, 49, 10, 2, 31, 18, 8, 50, 7, 49, 26, 34, 37, 35, 17, 3, 37, 4, 3, 16, 49, 41, 44, 22, 42, 40, 13, 19};
    vector<int> y = {49, 20, 17, 35, 25, 38, 16, 28, 0, 29, 17, 38, 0, 27, 34, 16, 35, 44, 4, 25, 14, 41, 21, 16, 43, 39, 6, 9, 7, 41, 2, 40, 37, 17, 36, 4, 48, 12, 12, 25, 26, 19, 10, 6, 7, 23, 45, 47, 40, 28};
    int m = 1;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {23, 19, 35, 32, 38, 42, 18, 41, 16, 19, 35, 22, 20, 8, 42, 9, 29, 27, 43, 37, 4, 23, 30, 47, 17, 25, 24, 48, 5, 2, 46, 24, 42, 49, 24, 41, 12, 30, 19, 45, 22, 9, 2, 15, 24, 42, 44, 0, 31, 2};
    vector<int> y = {3, 47, 29, 36, 38, 44, 0, 3, 44, 3, 21, 42, 8, 6, 18, 37, 23, 25, 41, 15, 32, 25, 26, 17, 17, 0, 36, 44, 39, 28, 22, 32, 26, 41, 22, 43, 36, 42, 31, 39, 6, 19, 24, 31, 30, 10, 24, 28, 41, 36};
    int m = 16;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {28, 23, 36, 46, 20, 40, 41, 22, 11, 22, 26, 23, 30, 10, 21, 9, 13, 15, 14, 4, 20, 0, 21, 31, 46, 34, 33, 21, 20, 37, 27, 44, 35, 0, 28, 18, 5, 19, 39, 12, 27, 17, 14, 10, 4, 13, 37, 5, 46, 10};
    vector<int> y = {15, 44, 39, 25, 5, 21, 28, 17, 0, 15, 39, 4, 49, 47, 16, 18, 32, 34, 35, 41, 13, 19, 40, 46, 45, 45, 14, 42, 7, 28, 24, 3, 50, 39, 0, 43, 16, 16, 18, 11, 16, 6, 31, 15, 21, 4, 8, 0, 15, 23};
    int m = 31;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {13, 43, 13, 23, 31, 7, 43, 17, 42, 43, 47, 5, 25, 2, 6, 18, 34, 46, 33, 32, 49, 1, 22, 6, 46, 25, 13, 49, 43, 39, 44, 43, 31, 27, 22, 33, 11, 18, 19, 20, 49, 35, 33, 5, 32, 7, 34, 34, 45, 13};
    vector<int> y = {47, 47, 23, 37, 7, 19, 19, 45, 30, 11, 39, 31, 29, 36, 34, 6, 22, 24, 3, 34, 3, 25, 42, 2, 46, 23, 41, 1, 13, 39, 4, 15, 1, 47, 34, 21, 0, 42, 1, 26, 17, 45, 19, 39, 16, 31, 6, 0, 0, 19};
    int m = 12;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {47, 25, 41, 40, 21, 13, 43, 2, 10, 44, 4, 29, 33, 0, 23, 33, 20, 36, 38, 7, 37, 9, 12, 18, 18, 30, 1, 22, 28, 47, 34, 12, 0, 3, 18, 11, 9, 4, 5, 36, 35, 21, 4, 35, 28, 20, 24, 21, 19, 11};
    vector<int> y = {30, 20, 10, 45, 44, 10, 38, 31, 25, 17, 5, 44, 46, 1, 36, 10, 19, 29, 3, 32, 34, 24, 17, 39, 5, 9, 32, 33, 21, 16, 11, 29, 33, 32, 49, 18, 12, 9, 0, 17, 50, 12, 43, 4, 27, 37, 41, 16, 10, 8};
    int m = 18;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {3, 4, 25, 1, 25, 39, 11, 5, 50, 20, 30, 10, 41, 2, 6, 2, 30, 3, 22, 33, 35, 47, 48, 23, 10, 17, 15, 12, 33, 8, 28, 38, 49, 3, 21, 30, 43, 11, 20, 7, 1, 1, 3, 30, 37, 42, 44, 27, 32, 15};
    vector<int> y = {9, 28, 37, 31, 17, 33, 45, 33, 14, 20, 20, 2, 17, 36, 44, 48, 24, 33, 2, 27, 31, 3, 38, 41, 32, 7, 49, 24, 43, 12, 6, 34, 37, 29, 41, 22, 7, 49, 10, 37, 23, 43, 3, 10, 33, 36, 30, 49, 36, 5};
    int m = 22;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {18, 2, 11, 7, 14, 26, 7, 15, 46, 15, 19, 15, 12, 18, 23, 13, 43, 38, 13, 46, 6, 31, 19, 34, 40, 22, 16, 11, 44, 7, 48, 5, 20, 23, 43, 28, 6, 17, 46, 11, 17, 32, 17, 27, 1, 8, 17, 13, 34, 25};
    vector<int> y = {19, 25, 8, 38, 41, 11, 14, 48, 17, 50, 38, 10, 33, 47, 40, 26, 24, 21, 12, 31, 25, 36, 46, 19, 17, 9, 23, 42, 15, 12, 41, 38, 41, 26, 6, 11, 13, 28, 37, 2, 22, 21, 2, 32, 0, 15, 50, 22, 0, 40};
    int m = 46;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {15, 7, 7, 33, 30, 5, 23, 47, 10, 43, 25, 5, 21, 50, 38, 50, 34, 40, 21, 31, 27, 2, 48, 41, 36, 9, 8, 8, 49, 11, 30, 0, 40, 48, 17, 34, 49, 47, 20, 41, 40, 3, 43, 0, 13, 13, 38, 35, 25, 46};
    vector<int> y = {25, 43, 35, 43, 24, 49, 37, 21, 36, 31, 41, 31, 31, 16, 24, 26, 40, 40, 37, 35, 41, 38, 2, 1, 8, 0, 10, 50, 27, 21, 36, 46, 32, 12, 39, 36, 47, 43, 34, 31, 8, 25, 3, 14, 17, 33, 0, 9, 5, 24};
    int m = 3;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {47, 14, 27, 23, 40, 2, 45, 39, 26, 0, 24, 39, 50, 32, 11, 16, 27, 22, 47, 3, 41, 33, 34, 2, 45, 41, 30, 17, 32, 46, 41, 28, 3, 11, 39, 12, 28, 22, 31, 26, 5, 20, 41, 36, 46, 20, 35, 34, 7, 11};
    vector<int> y = {22, 25, 32, 48, 1, 31, 24, 10, 35, 49, 27, 6, 15, 35, 6, 29, 18, 41, 12, 6, 40, 32, 21, 5, 10, 16, 41, 42, 17, 11, 30, 5, 16, 44, 38, 7, 17, 15, 42, 0, 12, 15, 14, 27, 1, 27, 26, 27, 36, 30};
    int m = 39;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {50, 43, 27, 30, 30, 37, 21, 40, 7, 30, 38, 18, 39, 27, 5, 6, 34, 22, 37, 8, 33, 33, 16, 19, 19, 28, 36, 4, 28, 39, 37, 8, 8, 11, 15, 27, 35, 19, 7, 41, 30, 35, 33, 18, 49, 41, 0, 42, 23, 45};
    vector<int> y = {6, 33, 15, 42, 36, 5, 35, 40, 47, 40, 26, 10, 39, 1, 41, 30, 28, 10, 35, 16, 23, 33, 30, 17, 5, 10, 28, 6, 46, 25, 11, 44, 2, 15, 13, 43, 9, 7, 1, 23, 16, 15, 1, 6, 35, 13, 28, 30, 43, 23};
    int m = 20;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {50, 17, 22, 27, 2, 21, 25, 41, 24, 13, 19, 13, 12, 17, 39, 0, 16, 15, 49, 14, 25, 45, 31, 24, 12, 41, 31, 18, 37, 27, 5, 26, 35, 42, 2, 46, 5, 41, 31, 38, 18, 0, 8, 5, 46, 48, 1, 13, 43, 46};
    vector<int> y = {23, 44, 45, 6, 19, 18, 50, 24, 45, 34, 22, 14, 19, 34, 38, 19, 27, 36, 18, 5, 34, 6, 18, 49, 5, 8, 8, 37, 2, 14, 38, 45, 36, 37, 9, 25, 12, 18, 36, 17, 17, 1, 43, 14, 45, 23, 36, 36, 44, 27};
    int m = 34;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {13, 29, 8, 21, 43, 37, 33, 8, 49, 4, 47, 45, 46, 14, 27, 48, 46, 33, 3, 36, 11, 31, 21, 38, 30, 33, 6, 24, 30, 31, 1, 44, 35, 45, 45, 29, 20, 4, 48, 14, 1, 41, 47, 32, 2, 42, 34, 1, 17, 34};
    vector<int> y = {15, 39, 40, 47, 49, 11, 23, 24, 3, 34, 49, 27, 44, 16, 1, 16, 20, 0, 43, 12, 35, 31, 7, 16, 10, 41, 38, 6, 32, 1, 33, 44, 25, 45, 1, 41, 12, 18, 46, 48, 15, 21, 39, 48, 46, 24, 26, 47, 15, 36};
    int m = 33;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {49, 32, 24, 43, 2, 5, 40, 44, 44, 4, 39, 47, 48, 4, 34, 0, 32, 48, 23, 24, 43, 40, 42, 9, 34, 42, 10, 47, 19, 39, 16, 2, 23, 24, 40, 34, 9, 40, 38, 29, 40, 1, 49, 43, 42, 32, 9, 49, 28, 30};
    vector<int> y = {40, 45, 3, 12, 27, 6, 47, 9, 3, 15, 2, 18, 39, 29, 45, 21, 39, 5, 38, 9, 32, 49, 45, 2, 1, 33, 5, 38, 14, 38, 33, 47, 46, 7, 27, 35, 20, 35, 35, 44, 39, 24, 16, 18, 29, 27, 32, 32, 39, 47};
    int m = 42;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {19, 32, 39, 13, 16, 40, 34, 6, 36, 40, 23, 41, 12, 43, 31, 0, 44, 36, 50, 23, 31, 29, 15, 17, 0, 37, 20, 15, 18, 0, 45, 18, 23, 16, 47, 1, 20, 20, 43, 10, 3, 29, 7, 35, 39, 44, 21, 40, 44, 41};
    vector<int> y = {21, 28, 39, 19, 18, 36, 32, 40, 20, 0, 11, 45, 8, 13, 29, 8, 50, 32, 36, 3, 33, 15, 43, 27, 6, 19, 2, 7, 34, 50, 33, 36, 33, 16, 37, 17, 38, 40, 37, 48, 15, 7, 29, 39, 47, 40, 11, 30, 46, 0};
    int m = 16;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {41, 14, 1, 3, 17, 28, 48, 29, 6, 23, 14, 7, 2, 28, 35, 36, 24, 20, 48, 36, 9, 49, 28, 7, 13, 29, 12, 48, 49, 43, 38, 7, 29, 17, 0, 25, 49, 14, 42, 48, 30, 1, 4, 9, 7, 40, 1, 23, 30, 27};
    vector<int> y = {20, 25, 44, 38, 46, 1, 5, 32, 39, 22, 27, 28, 49, 17, 24, 49, 11, 23, 23, 45, 20, 12, 37, 24, 24, 0, 17, 1, 8, 20, 49, 12, 14, 44, 9, 2, 42, 33, 35, 21, 11, 30, 29, 36, 16, 15, 14, 32, 9, 14};
    int m = 9;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {24, 36, 13, 25, 20, 8, 20, 34, 9, 28, 39, 30, 49, 24, 33, 45, 40, 7, 5, 30, 15, 8, 40, 43, 22, 25, 35, 24, 33, 41, 11, 8, 50, 11, 1, 25, 44, 18, 1, 30, 49, 47, 50, 32, 11, 35, 47, 15, 37, 14};
    vector<int> y = {18, 46, 21, 3, 2, 20, 28, 14, 9, 44, 15, 2, 37, 44, 9, 41, 20, 3, 0, 18, 11, 44, 28, 49, 6, 0, 31, 0, 29, 19, 49, 42, 50, 39, 1, 35, 0, 20, 25, 48, 35, 49, 24, 22, 31, 33, 17, 17, 11, 28};
    int m = 48;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {0, 43, 8, 11, 31, 36, 27, 50, 9, 41, 19, 44, 15, 33, 41, 47, 1, 2, 20, 8, 0, 6, 34, 45, 25, 1, 31, 12, 49, 38, 35, 3, 38, 26, 42, 3, 19, 42, 47, 33, 0, 5, 6, 16, 16, 28, 47, 19, 28, 42};
    vector<int> y = {27, 16, 27, 50, 34, 5, 38, 11, 20, 28, 24, 45, 44, 20, 38, 38, 26, 49, 49, 3, 35, 9, 7, 34, 22, 38, 30, 17, 18, 47, 8, 48, 13, 37, 29, 42, 26, 19, 30, 36, 9, 22, 25, 1, 33, 49, 26, 40, 33, 9};
    int m = 5;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {28, 16, 26, 6, 10, 18, 42, 40, 14, 15, 3, 48, 32, 10, 37, 16, 41, 44, 44, 9, 27, 18, 18, 45, 0, 35, 39, 17, 9, 46, 9, 37, 14, 46, 23, 33, 35, 35, 41, 31, 22, 48, 21, 6, 16, 47, 37, 35, 23, 27};
    vector<int> y = {22, 10, 18, 12, 28, 48, 32, 34, 16, 43, 29, 20, 26, 42, 15, 16, 23, 34, 32, 31, 31, 40, 4, 1, 42, 37, 35, 23, 45, 24, 35, 17, 2, 14, 15, 19, 47, 39, 49, 11, 28, 4, 11, 16, 20, 37, 7, 49, 21, 25};
    int m = 1;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {11, 4, 50, 21, 7, 23, 50, 13, 37, 50, 35, 22, 15, 42, 12, 5, 44, 12, 1, 15, 49, 25, 10, 28, 7, 43, 29, 19, 17, 38, 9, 20, 31, 27, 0, 46, 29, 13, 25, 33, 20, 26, 30, 9, 4, 27, 0, 49, 32, 33};
    vector<int> y = {28, 49, 43, 22, 34, 6, 5, 10, 32, 1, 34, 37, 22, 15, 27, 6, 35, 25, 0, 50, 38, 30, 41, 1, 32, 6, 50, 42, 4, 13, 34, 29, 48, 36, 21, 11, 42, 18, 48, 22, 49, 37, 17, 32, 25, 20, 27, 30, 23, 0};
    int m = 4;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {27, 34, 26, 50, 25, 36, 20, 32, 49, 38, 42, 40, 36, 24, 9, 39, 14, 21, 38, 17, 39, 5, 24, 6, 0, 39, 33, 37, 43, 38, 29, 15, 11, 24, 49, 6, 29, 30, 22, 8, 29, 11, 33, 4, 20, 2, 34, 15, 0, 30};
    vector<int> y = {13, 8, 42, 42, 49, 28, 48, 22, 11, 40, 26, 20, 46, 8, 41, 45, 26, 21, 0, 3, 23, 25, 48, 22, 50, 9, 17, 29, 39, 14, 35, 3, 5, 42, 23, 12, 3, 42, 38, 38, 1, 17, 1, 48, 22, 20, 4, 11, 22, 34};
    int m = 26;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {42, 47, 39, 19, 25, 8, 49, 26, 29, 11, 30, 20, 33, 8, 0, 19, 21, 47, 29, 9, 28, 17, 4, 18, 1, 36, 25, 48, 44, 10, 28, 29, 34, 15, 36, 35, 40, 46, 44, 45, 14, 26, 41, 4, 10, 32, 36, 31, 0, 18};
    vector<int> y = {49, 0, 24, 44, 10, 19, 44, 43, 22, 0, 47, 11, 10, 37, 3, 0, 40, 4, 40, 22, 21, 38, 43, 29, 50, 45, 8, 9, 35, 49, 15, 34, 37, 42, 5, 2, 37, 25, 27, 8, 5, 47, 38, 41, 13, 27, 15, 36, 9, 31};
    int m = 12;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {27, 10, 25, 14, 44, 27, 19, 19, 5, 18, 39, 12, 33, 18, 8, 32, 35, 7, 30, 29, 33, 50, 46, 49, 35, 28, 7, 6, 38, 6, 38, 45, 8, 34, 43, 30, 41, 30, 28, 23, 29, 34, 33, 3, 49, 47, 1, 29, 25, 8};
    vector<int> y = {33, 2, 1, 22, 4, 27, 5, 45, 19, 42, 1, 6, 43, 38, 6, 22, 7, 41, 50, 1, 27, 26, 12, 47, 41, 4, 15, 42, 28, 0, 24, 15, 2, 32, 9, 20, 3, 36, 14, 35, 9, 20, 11, 37, 41, 45, 3, 17, 19, 12};
    int m = 8;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {36, 14, 26, 2, 4, 22, 9, 16, 1, 39, 6, 9, 20, 25, 4, 47, 27, 15, 10, 27, 26, 40, 20, 24, 25, 5, 34, 34, 27, 38, 20, 34, 22, 45, 12, 28, 48, 23, 37, 48, 26, 37, 1, 43, 9, 46, 18, 26, 25, 4};
    vector<int> y = {43, 1, 47, 5, 7, 47, 6, 39, 20, 18, 31, 44, 31, 50, 29, 12, 38, 18, 47, 40, 13, 3, 49, 1, 0, 24, 45, 15, 34, 1, 11, 41, 33, 12, 13, 23, 17, 30, 24, 43, 17, 2, 46, 46, 38, 13, 11, 31, 40, 17};
    int m = 19;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {38, 34, 34, 47, 32, 15, 25, 13, 15, 1, 24, 48, 20, 24, 19, 18, 35, 17, 10, 6, 40, 19, 32, 48, 50, 20, 47, 11, 50, 2, 37, 37, 1, 26, 31, 32, 43, 48, 5, 30, 3, 34, 31, 49, 44, 18, 35, 34, 16, 38};
    vector<int> y = {8, 4, 46, 17, 18, 37, 49, 41, 39, 3, 42, 6, 30, 46, 37, 20, 39, 5, 38, 22, 0, 33, 26, 20, 8, 0, 31, 5, 44, 12, 47, 45, 47, 22, 37, 20, 9, 30, 15, 0, 23, 38, 1, 17, 38, 24, 5, 6, 44, 10};
    int m = 11;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {21, 25, 45, 44, 20, 19, 49, 17, 40, 45, 7, 32, 31, 29, 4, 8, 42, 32, 39, 34, 33, 39, 3, 4, 9, 37, 5, 41, 15, 44, 21, 28, 4, 26, 48, 29, 14, 6, 19, 47, 3, 6, 31, 0, 0, 35, 40, 12, 50, 37};
    vector<int> y = {2, 36, 28, 7, 17, 42, 16, 34, 0, 26, 42, 31, 48, 28, 43, 7, 39, 33, 10, 9, 34, 44, 46, 5, 10, 30, 24, 16, 0, 37, 14, 23, 13, 47, 29, 16, 31, 39, 36, 18, 14, 41, 50, 43, 23, 14, 7, 0, 15, 28};
    int m = 6;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {3, 35, 31, 32, 13, 36, 6, 6, 11, 7, 46, 49, 47, 37, 13, 19, 24, 16, 35, 28, 41, 15, 39, 17, 35, 19, 31, 0, 30, 37, 11, 49, 24, 25, 39, 20, 25, 14, 9, 23, 2, 9, 11, 17, 5, 19, 19, 12, 30, 15};
    vector<int> y = {23, 43, 23, 38, 45, 36, 30, 20, 37, 27, 30, 33, 5, 27, 43, 27, 32, 32, 33, 10, 43, 5, 9, 21, 13, 17, 27, 30, 12, 33, 15, 21, 18, 47, 35, 46, 15, 46, 49, 1, 26, 3, 17, 11, 7, 33, 47, 38, 36, 3};
    int m = 19;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {49, 31, 28, 14, 33, 41, 5, 35, 6, 39, 48, 6, 11, 13, 45, 1, 12, 46, 37, 41, 1, 2, 49, 46, 8, 5, 41, 41, 31, 32, 43, 11, 43, 11, 43, 36, 29, 6, 28, 10, 23, 11, 50, 24, 37, 37, 20, 21, 13, 5};
    vector<int> y = {36, 14, 41, 25, 24, 48, 40, 16, 37, 32, 31, 41, 12, 36, 36, 12, 37, 39, 36, 10, 32, 13, 22, 3, 41, 46, 40, 32, 34, 7, 20, 34, 12, 44, 10, 31, 12, 5, 43, 41, 16, 46, 43, 39, 0, 2, 27, 8, 16, 42};
    int m = 5;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {49, 23, 35, 45, 47, 11, 0, 1, 33, 22, 22, 21, 0, 40, 6, 45, 30, 25, 44, 38, 12, 29, 47, 45, 1, 21, 21, 10, 9, 14, 36, 28, 18, 49, 12, 20, 47, 28, 11, 9, 0, 7, 8, 29, 38, 24, 6, 19, 33, 40};
    vector<int> y = {33, 27, 19, 3, 39, 1, 44, 9, 37, 14, 36, 39, 0, 46, 30, 37, 14, 29, 26, 36, 46, 13, 27, 47, 39, 5, 29, 38, 11, 18, 18, 22, 2, 25, 8, 48, 17, 4, 27, 13, 34, 11, 44, 43, 4, 24, 20, 49, 11, 28};
    int m = 48;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 764120109;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {45, 26, 26, 34, 15, 46, 46, 6, 4, 19, 18, 13, 25, 16, 9, 31, 11, 41, 31, 22, 44, 49, 5, 15, 44, 42, 17, 44, 47, 15, 35, 48, 3, 4, 14, 25, 47, 13, 26, 36, 40, 22, 23, 4, 32, 6, 26, 9, 18, 21};
    vector<int> y = {0, 5, 7, 27, 8, 31, 17, 45, 11, 38, 7, 48, 10, 0, 36, 4, 14, 12, 8, 33, 31, 28, 40, 36, 37, 7, 34, 21, 34, 2, 18, 39, 22, 49, 15, 30, 20, 12, 33, 33, 9, 9, 26, 27, 11, 49, 37, 30, 21, 32};
    int m = 12;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {44, 42, 16, 33, 0, 35, 8, 12, 17, 35, 31, 23, 7, 24, 22, 28, 9, 9, 3, 39, 39, 37, 35, 9, 35, 45, 50, 27, 22, 40, 29, 7, 50, 44, 42, 13, 11, 15, 15, 5, 38, 27, 46, 40, 40, 20, 47, 32, 34, 42};
    vector<int> y = {42, 16, 22, 25, 46, 13, 38, 30, 47, 35, 47, 1, 27, 20, 24, 8, 19, 31, 3, 3, 21, 45, 15, 41, 1, 35, 22, 37, 16, 34, 1, 15, 20, 48, 10, 29, 33, 25, 21, 5, 8, 49, 0, 10, 42, 44, 45, 16, 32, 8};
    int m = 42;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {34, 27, 43, 27, 45, 0, 17, 12, 27, 17, 44, 42, 26, 21, 4, 12, 11, 25, 17, 22, 41, 36, 33, 21, 39, 40, 33, 49, 3, 48, 42, 8, 6, 28, 35, 11, 19, 28, 3, 19, 27, 1, 36, 5, 28, 1, 46, 15, 7, 24};
    vector<int> y = {9, 16, 8, 28, 4, 33, 10, 17, 12, 6, 49, 7, 37, 50, 45, 39, 18, 2, 2, 45, 36, 11, 46, 42, 40, 37, 36, 6, 38, 25, 39, 47, 27, 0, 22, 50, 46, 2, 42, 0, 10, 40, 31, 30, 19, 32, 9, 18, 48, 11};
    int m = 43;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {21, 50, 20, 12, 14, 35, 15, 45, 19, 32, 2, 9, 36, 41, 11, 16, 12, 44, 33, 29, 46, 2, 37, 42, 30, 18, 25, 1, 5, 24, 16, 42, 28, 38, 6, 18, 1, 19, 41, 2, 45, 43, 24, 12, 37, 9, 48, 27, 3, 35};
    vector<int> y = {49, 38, 16, 44, 32, 33, 19, 3, 5, 16, 4, 0, 42, 17, 11, 10, 18, 50, 19, 17, 38, 18, 25, 10, 48, 20, 31, 5, 49, 12, 0, 2, 24, 26, 42, 46, 17, 45, 27, 48, 47, 5, 32, 38, 7, 15, 2, 41, 35, 3};
    int m = 42;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {39, 41, 47, 47, 41, 2, 18, 17, 8, 34, 25, 27, 50, 42, 45, 50, 22, 40, 6, 36, 45, 36, 18, 9, 50, 28, 26, 38, 19, 21, 50, 37, 14, 48, 5, 49, 27, 3, 30, 38, 12, 4, 18, 7, 0, 26, 26, 7, 28, 2};
    vector<int> y = {28, 8, 30, 16, 36, 45, 49, 16, 35, 0, 48, 2, 47, 9, 4, 29, 49, 31, 49, 33, 6, 41, 23, 46, 35, 25, 33, 37, 42, 38, 27, 24, 5, 17, 24, 42, 20, 32, 27, 7, 15, 33, 41, 48, 49, 41, 0, 42, 45, 47};
    int m = 47;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {32, 18, 48, 36, 11, 31, 27, 29, 21, 45, 2, 35, 16, 45, 16, 22, 12, 50, 44, 6, 31, 23, 32, 2, 25, 9, 13, 41, 26, 46, 22, 39, 40, 36, 39, 45, 16, 22, 5, 47, 18, 36, 30, 6, 27, 50, 48, 46, 38, 17};
    vector<int> y = {28, 6, 34, 30, 19, 21, 15, 39, 27, 29, 20, 25, 2, 35, 26, 26, 0, 48, 36, 16, 3, 13, 36, 16, 27, 29, 29, 1, 34, 18, 38, 43, 26, 16, 33, 3, 4, 24, 21, 13, 28, 26, 10, 24, 23, 42, 28, 42, 46, 19};
    int m = 4;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {20, 22, 43, 18, 7, 2, 49, 31, 13, 19, 10, 49, 46, 11, 49, 49, 6, 25, 33, 2, 4, 8, 22, 42, 21, 28, 32, 18, 2, 41, 30, 26, 8, 38, 24, 43, 41, 44, 35, 16, 39, 24, 35, 40, 32, 45, 35, 23, 47, 9};
    vector<int> y = {0, 33, 38, 9, 6, 33, 18, 38, 24, 40, 11, 14, 7, 20, 36, 8, 31, 36, 36, 5, 31, 23, 31, 37, 10, 33, 7, 23, 13, 16, 9, 11, 41, 37, 7, 40, 34, 21, 22, 0, 48, 43, 24, 41, 9, 8, 30, 16, 38, 14};
    int m = 44;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {29, 22, 16, 30, 49, 18, 1, 1, 27, 45, 14, 45, 47, 47, 32, 6, 38, 23, 49, 47, 5, 16, 4, 28, 4, 8, 21, 28, 33, 49, 5, 13, 43, 0, 28, 15, 26, 34, 41, 39, 24, 27, 41, 38, 2, 16, 6, 0, 32, 37};
    vector<int> y = {13, 36, 48, 32, 23, 44, 1, 45, 23, 47, 14, 45, 29, 5, 28, 46, 38, 11, 5, 23, 45, 30, 42, 22, 22, 24, 45, 6, 11, 7, 13, 35, 1, 48, 48, 7, 36, 30, 45, 21, 50, 17, 11, 14, 32, 50, 48, 32, 4, 41};
    int m = 36;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {49, 35, 6, 30, 9, 15, 44, 2, 46, 3, 44, 24, 31, 24, 9, 11, 9, 3, 2, 23, 40, 29, 26, 42, 45, 39, 50, 3, 24, 3, 39, 27, 7, 16, 50, 16, 44, 19, 47, 22, 32, 46, 42, 15, 31, 50, 45, 5, 40, 35};
    vector<int> y = {38, 24, 1, 47, 36, 44, 43, 33, 5, 28, 45, 25, 34, 1, 4, 20, 38, 30, 1, 46, 47, 0, 27, 45, 34, 42, 21, 20, 47, 14, 16, 28, 16, 21, 13, 29, 3, 18, 28, 43, 5, 47, 7, 0, 14, 19, 40, 30, 49, 14};
    int m = 11;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {16, 31, 16, 18, 22, 23, 39, 30, 8, 2, 7, 10, 48, 38, 44, 39, 24, 7, 16, 44, 1, 41, 50, 18, 6, 40, 50, 43, 30, 39, 14, 33, 2, 1, 9, 28, 10, 14, 0, 11, 17, 6, 12, 19, 36, 49, 40, 29, 50, 21};
    vector<int> y = {26, 31, 38, 8, 8, 11, 9, 36, 18, 50, 17, 8, 42, 38, 38, 29, 38, 11, 42, 6, 49, 3, 30, 12, 16, 44, 40, 17, 48, 5, 30, 31, 8, 43, 3, 8, 40, 20, 32, 37, 43, 30, 18, 47, 34, 25, 14, 3, 42, 45};
    int m = 49;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 723552581;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {18, 22, 21, 45, 32, 30, 2, 14, 45, 4, 50, 37, 47, 5, 1, 5, 30, 5, 16, 20, 41, 1, 11, 29, 49, 2, 30, 26, 18, 30, 45, 2, 6, 38, 33, 13, 17, 14, 12, 47, 9, 5, 32, 31, 46, 49, 5, 47, 5, 45};
    vector<int> y = {41, 45, 0, 14, 17, 19, 37, 41, 28, 3, 31, 8, 44, 28, 48, 0, 17, 4, 25, 3, 18, 6, 46, 34, 42, 45, 1, 21, 43, 25, 46, 11, 31, 31, 40, 18, 28, 35, 25, 28, 34, 30, 13, 14, 11, 14, 10, 30, 22, 4};
    int m = 15;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {28, 2, 37, 37, 20, 27, 28, 38, 30, 3, 44, 12, 45, 32, 22, 30, 21, 9, 18, 43, 7, 23, 5, 4, 26, 50, 45, 4, 28, 42, 26, 29, 25, 31, 17, 2, 44, 47, 1, 29, 15, 17, 22, 30, 36, 23, 23, 50, 37, 19};
    vector<int> y = {10, 44, 35, 23, 36, 39, 16, 6, 20, 27, 26, 40, 21, 36, 28, 0, 43, 19, 12, 7, 5, 9, 37, 14, 38, 30, 19, 24, 18, 18, 10, 39, 35, 0, 3, 22, 22, 27, 37, 3, 27, 21, 30, 38, 32, 15, 37, 36, 45, 47};
    int m = 38;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {44, 12, 28, 31, 11, 19, 50, 27, 36, 32, 18, 24, 40, 3, 32, 9, 21, 29, 38, 41, 24, 44, 18, 23, 2, 37, 45, 7, 16, 49, 27, 13, 48, 8, 25, 35, 31, 19, 1, 32, 7, 9, 47, 49, 11, 5, 38, 32, 0, 19};
    vector<int> y = {19, 47, 39, 28, 44, 50, 17, 24, 11, 45, 1, 17, 7, 38, 31, 32, 22, 4, 17, 16, 27, 21, 47, 2, 25, 36, 18, 26, 37, 4, 10, 32, 29, 41, 20, 6, 42, 20, 2, 35, 50, 20, 6, 46, 16, 22, 9, 47, 1, 18};
    int m = 20;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {11, 36, 44, 8, 47, 45, 38, 7, 18, 31, 8, 24, 32, 26, 29, 22, 43, 50, 3, 39, 48, 11, 50, 0, 12, 24, 25, 19, 1, 11, 9, 20, 7, 0, 9, 28, 28, 31, 35, 22, 45, 10, 43, 5, 46, 13, 2, 41, 31, 17};
    vector<int> y = {15, 30, 44, 20, 23, 47, 14, 3, 4, 19, 34, 44, 32, 44, 33, 18, 7, 22, 1, 15, 16, 3, 42, 32, 16, 26, 49, 9, 41, 35, 41, 46, 31, 42, 3, 4, 38, 23, 29, 8, 11, 46, 5, 19, 2, 27, 50, 17, 31, 25};
    int m = 16;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {19, 46, 36, 45, 3, 32, 36, 7, 32, 7, 9, 5, 37, 39, 12, 44, 3, 2, 17, 29, 2, 31, 46, 50, 27, 40, 1, 14, 30, 15, 18, 47, 44, 50, 21, 13, 1, 50, 0, 30, 3, 16, 38, 10, 4, 49, 45, 7, 46, 21};
    vector<int> y = {16, 17, 33, 2, 6, 33, 37, 4, 9, 2, 6, 8, 20, 30, 39, 5, 32, 47, 48, 34, 39, 48, 5, 23, 8, 17, 36, 15, 7, 40, 21, 0, 29, 31, 0, 48, 20, 3, 45, 15, 24, 9, 15, 3, 19, 44, 42, 0, 7, 10};
    int m = 35;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {11, 45, 29, 17, 50, 23, 16, 36, 2, 13, 2, 45, 48, 41, 26, 20, 41, 14, 33, 38, 33, 44, 3, 33, 25, 50, 39, 29, 9, 42, 45, 4, 0, 41, 10, 3, 0, 29, 29, 43, 7, 49, 44, 7, 45, 12, 21, 1, 42, 50};
    vector<int> y = {49, 35, 17, 33, 42, 37, 8, 32, 42, 35, 20, 7, 14, 11, 48, 48, 15, 16, 27, 24, 37, 24, 5, 23, 43, 40, 27, 1, 5, 18, 47, 0, 14, 39, 20, 11, 42, 5, 9, 7, 13, 7, 12, 7, 15, 20, 45, 39, 22, 18};
    int m = 25;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {34, 10, 22, 16, 21, 16, 23, 17, 39, 1, 14, 15, 0, 25, 6, 20, 20, 46, 23, 8, 23, 23, 31, 34, 42, 19, 14, 18, 6, 8, 42, 3, 24, 32, 28, 7, 13, 5, 5, 47, 29, 42, 50, 8, 42, 28, 21, 33, 10, 13};
    vector<int> y = {25, 47, 31, 25, 34, 5, 46, 4, 12, 34, 29, 38, 39, 20, 37, 37, 49, 21, 36, 41, 48, 34, 12, 47, 17, 44, 35, 13, 25, 39, 13, 0, 17, 33, 11, 18, 20, 40, 26, 18, 36, 15, 23, 31, 31, 0, 24, 2, 25, 40};
    int m = 34;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {35, 45, 35, 23, 34, 43, 16, 26, 3, 36, 8, 9, 11, 10, 4, 1, 49, 29, 49, 27, 27, 23, 19, 8, 46, 13, 20, 48, 30, 28, 17, 46, 13, 48, 28, 30, 30, 1, 19, 14, 31, 22, 23, 3, 10, 25, 3, 12, 21, 20};
    vector<int> y = {35, 35, 23, 21, 18, 45, 42, 16, 33, 12, 14, 25, 25, 10, 12, 5, 37, 15, 49, 0, 21, 31, 7, 12, 22, 37, 12, 8, 18, 8, 23, 16, 15, 26, 10, 14, 50, 9, 3, 20, 39, 28, 35, 15, 42, 15, 17, 44, 39, 20};
    int m = 36;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {16, 29, 1, 5, 38, 30, 39, 16, 1, 35, 14, 35, 14, 47, 1, 22, 37, 17, 45, 29, 48, 22, 38, 27, 44, 49, 5, 31, 20, 46, 46, 30, 0, 36, 7, 27, 37, 49, 46, 8, 46, 45, 41, 40, 32, 8, 8, 27, 24, 49};
    vector<int> y = {49, 32, 12, 16, 49, 29, 16, 37, 10, 16, 29, 12, 39, 46, 42, 5, 48, 38, 16, 26, 37, 3, 43, 30, 17, 32, 18, 8, 25, 43, 17, 21, 33, 5, 16, 22, 50, 26, 19, 9, 47, 30, 8, 25, 21, 31, 11, 48, 25, 38};
    int m = 37;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {14, 30, 38, 6, 25, 43, 28, 2, 23, 31, 23, 2, 30, 29, 0, 21, 29, 43, 48, 8, 16, 30, 25, 25, 42, 31, 3, 3, 37, 17, 34, 29, 49, 10, 28, 21, 4, 44, 38, 43, 45, 43, 20, 1, 25, 34, 18, 19, 4, 32};
    vector<int> y = {14, 42, 20, 48, 11, 21, 36, 12, 31, 9, 1, 38, 0, 11, 46, 31, 29, 29, 22, 48, 14, 2, 15, 43, 10, 13, 23, 43, 33, 49, 30, 33, 35, 38, 34, 15, 38, 4, 26, 15, 41, 13, 24, 33, 13, 50, 12, 15, 46, 20};
    int m = 4;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {0, 49, 31, 21, 5, 19, 46, 33, 14, 18, 17, 36, 26, 6, 18, 36, 5, 22, 26, 20, 32, 2, 47, 22, 5, 26, 10, 1, 4, 34, 37, 41, 32, 3, 33, 21, 5, 29, 11, 42, 11, 10, 39, 50, 5, 23, 32, 21, 36, 23};
    vector<int> y = {27, 36, 48, 6, 12, 34, 37, 8, 27, 41, 44, 33, 29, 49, 7, 9, 38, 25, 15, 1, 37, 33, 34, 27, 16, 27, 29, 8, 7, 19, 4, 14, 39, 22, 34, 2, 32, 44, 50, 39, 14, 31, 26, 11, 6, 46, 23, 16, 21, 4};
    int m = 49;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 491616217;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {9, 0, 19, 35, 34, 19, 24, 15, 38, 2, 20, 1, 0, 49, 47, 35, 23, 48, 27, 22, 22, 25, 31, 41, 20, 12, 41, 18, 12, 18, 9, 9, 8, 8, 9, 34, 26, 33, 15, 31, 34, 42, 17, 0, 45, 40, 28, 8, 47, 19};
    vector<int> y = {31, 34, 33, 7, 42, 11, 6, 23, 38, 32, 8, 3, 4, 41, 5, 43, 0, 14, 17, 38, 16, 49, 23, 5, 14, 38, 15, 46, 30, 48, 49, 3, 18, 22, 0, 18, 22, 25, 33, 11, 16, 0, 5, 36, 3, 18, 44, 14, 19, 3};
    int m = 25;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {30, 33, 15, 33, 48, 6, 29, 45, 3, 31, 14, 1, 42, 31, 7, 2, 35, 38, 38, 26, 19, 44, 38, 10, 40, 10, 37, 24, 3, 24, 16, 30, 2, 37, 25, 6, 17, 3, 14, 3, 40, 24, 49, 48, 49, 3, 24, 41, 7, 3};
    vector<int> y = {33, 44, 48, 0, 31, 33, 4, 2, 4, 36, 9, 46, 27, 38, 26, 9, 36, 29, 45, 0, 2, 45, 25, 37, 21, 33, 22, 13, 16, 29, 37, 0, 19, 36, 46, 27, 10, 44, 47, 32, 11, 21, 24, 23, 12, 18, 3, 0, 34, 40};
    int m = 49;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {33, 22, 49, 43, 40, 34, 48, 16, 45, 6, 37, 38, 3, 13, 4, 13, 25, 46, 42, 15, 41, 39, 27, 30, 3, 14, 25, 39, 30, 8, 41, 42, 10, 19, 4, 35, 44, 12, 21, 12, 38, 13, 9, 44, 3, 4, 50, 22, 9, 44};
    vector<int> y = {31, 32, 41, 15, 16, 26, 26, 22, 37, 26, 29, 46, 47, 0, 0, 43, 19, 38, 30, 23, 43, 23, 19, 10, 19, 38, 1, 29, 46, 48, 25, 12, 42, 37, 48, 43, 12, 34, 23, 36, 2, 13, 9, 8, 43, 24, 48, 8, 1, 48};
    int m = 42;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {35, 14, 22, 33, 12, 24, 14, 23, 4, 29, 28, 1, 5, 20, 1, 49, 22, 43, 24, 14, 15, 37, 10, 1, 41, 46, 40, 25, 7, 12, 20, 43, 45, 35, 4, 8, 20, 7, 19, 29, 38, 1, 34, 38, 28, 23, 5, 48, 3, 47};
    vector<int> y = {16, 9, 47, 14, 3, 49, 45, 20, 5, 8, 23, 16, 20, 41, 28, 14, 5, 20, 25, 33, 10, 48, 49, 24, 16, 19, 7, 42, 0, 41, 23, 44, 22, 8, 21, 7, 11, 6, 24, 10, 39, 2, 9, 0, 1, 44, 22, 25, 40, 42};
    int m = 20;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {25, 7, 41, 3, 21, 31, 35, 13, 0, 31, 19, 29, 21, 23, 14, 36, 3, 27, 24, 1, 28, 31, 16, 37, 37, 5, 36, 28, 20, 7, 7, 45, 37, 37, 21, 43, 8, 31, 0, 24, 18, 36, 21, 9, 35, 16, 24, 35, 43, 47};
    vector<int> y = {35, 49, 39, 0, 33, 7, 27, 15, 48, 41, 39, 25, 0, 11, 4, 8, 31, 35, 30, 1, 2, 11, 22, 13, 47, 0, 44, 50, 16, 9, 37, 21, 19, 43, 5, 39, 10, 15, 46, 34, 48, 10, 41, 15, 43, 10, 22, 17, 0, 17};
    int m = 7;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {7, 8};
    vector<int> y = {8, 7};
    int m = 1;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
    vector<int> y = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    int m = 12;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
    vector<int> y = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    int m = 31;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 573748580;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
    vector<int> y = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    int m = 31;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 573748580;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x = {20, 30};
    vector<int> y = {20, 30};
    int m = 50;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 138410702;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x = {0, 8, 42, 21, 20, 42, 11, 44, 4, 6, 17, 13, 16, 8, 26, 6, 24, 50, 4, 4, 42, 8, 1, 50, 21, 27, 22, 32, 40, 43, 11, 12, 50, 30, 22, 47, 8, 16, 29, 10, 32, 11, 20, 9, 21, 32, 33, 36, 38, 32};
    vector<int> y = {50, 22, 27, 0, 31, 42, 22, 11, 5, 26, 20, 45, 19, 9, 24, 13, 46, 7, 25, 37, 37, 23, 8, 39, 39, 11, 41, 32, 8, 45, 50, 48, 14, 49, 7, 9, 37, 27, 5, 14, 47, 42, 30, 45, 45, 11, 28, 14, 21, 35};
    int m = 50;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
    vector<int> y = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    int m = 50;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 161178936;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int m = 50;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 358035358;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x = {5, 3};
    vector<int> y = {5, 3};
    int m = 2;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x = {50, 48, 48, 46, 46};
    vector<int> y = {50, 50, 48, 48, 50};
    int m = 50;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 196557771;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
    vector<int> y = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    int m = 49;
    WolfPackDivTwo* pObj = new WolfPackDivTwo();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 626353207;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22855235&rd=15493&pm=12467
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
 
using namespace std;
 
class WolfPackDivTwo {
public:
  int calc(vector <int>, vector <int>, int);
};
 
#define p 1000000007
#define F first
#define S second
#define mp make_pair
 
map<pair<int,int> , long long > ar[50],tmp;
 
int WolfPackDivTwo::calc(vector <int> x, vector <int> y, int m) {
  for(int i=0;i<x.size();i++)
    ar[i][ mp( x[i] , y[i] ) ] = 1;
  for(int i=0;i<m;i++){
    for(int j=0;j<x.size();j++){
        tmp.clear();
        for( map<pair<int,int>,long long>::iterator k=ar[j].begin() ; k!=ar[j].end() ; k++ ){
          k->S %= p;
          tmp[ mp( (k->F.F)+1 , k->F.S ) ] += k->S;
          tmp[ mp( k->F.F , (k->F.S)+1 ) ] += k->S;
          tmp[ mp( (k->F.F)-1 , k->F.S ) ] += k->S;
          tmp[ mp( k->F.F , (k->F.S)-1 ) ] += k->S;
        }
        ar[j].clear();
        swap( ar[j] , tmp );
    }
  }
  long long ans = 0;
  
  for( map<pair<int,int>,long long>::iterator i = ar[0].begin() ; i!=ar[0].end() ; i++ ){
    long long mul=1;
    for( int j=0;j<x.size();j++ )
      mul = (mul*( ar[j][ mp( i->F.F , i->F.S ) ] ) ) % p;
    ans = ( ans + mul )%p;
  }
  return (int)ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/