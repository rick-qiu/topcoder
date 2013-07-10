/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10512
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

class TheNewHouseDivOne {
public:
    double distance(vector<int> x, vector<int> y, int k);
};

double TheNewHouseDivOne::distance(vector<int> x, vector<int> y, int k) {
    double ret;
    return ret;
}


int test0() {
    vector<int> x = {-1, -1, 1, 1};
    vector<int> y = {-1, 1, -1, 1};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {-1, -1, 1, 1};
    vector<int> y = {-1, 1, -1, 1};
    int k = 2;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {4, 4, 4, 4, 4, 3, 3, 5, 5};
    vector<int> y = {7, 7, 7, 4, 4, 5, 6, 5, 6};
    int k = 9;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {30, -15, 24, -23, 43, -8, -6, -47, 23, -11, 43, 6, -18, 44, -46, 16, 32, 31, 13, 9, 22, 25, 4, -44, 38, -41, -20, 41, -35, 7, 25, 39, -36, -20, -5, -38, -15, -22, 0};
    vector<int> y = {-45, -7, -33, 31, -8, -33, -20, -14, -50, -48, -31, 35, -24, -31, -11, 41, -41, -11, 46, -1, -5, 5, -39, -26, -40, -9, 16, 38, -30, 34, 46, -17, -27, 33, -38, 28, 46, -16, -46};
    int k = 13;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 32.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {22, -37, -39, 29, -28, 17, -13, 27, -40, -31, 15, 23, -47, 28, -7, 46, -36, -15, 8, 11, 49, -41, -24, -3, -46, -22, 49, -44, 10, -12, 26, -7, -28, 2, -44, -8, -14};
    vector<int> y = {32, 8, -38, 47, 26, 31, 3, 21, 49, 26, -7, 45, 22, 40, 11, -21, -21, 1, 40, -46, 14, -7, -8, 46, -33, 39, -1, -18, 3, -38, -27, 37, 26, -31, 26, 11, -49};
    int k = 34;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 69.5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {32};
    vector<int> y = {13};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {-44, 46, -42, -42, 38, -13, -17, 18, 12, 24, 4, 23, -49, 10, 5, -45, -14, -19, -43, 8, 46, 33, 30, -47, -17, -36, -13, 7, -30, -19, 2, -1, 19, 17, 33, -7, -50, -28, -30, 18, 28, -16, 50, 33, -3, -9, -12};
    vector<int> y = {44, 24, -43, 44, -19, -25, -10, -23, 46, 11, 1, 1, 44, -5, 1, 37, 20, 43, 40, -22, 21, 1, 5, 13, 6, 26, 20, 41, 20, 13, -47, -17, -49, 43, 46, -32, -34, -47, 13, 17, -19, -10, 17, -2, -34, 26, -4};
    int k = 36;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 57.5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {-5};
    vector<int> y = {-49};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {32, -37, 18, -32, -23, -24, 26, 12, -11, -36, -29, -31, -20, 2, 26, 19, 9, -14, -50, -32, 7, 34, -13, -27, -38, -16, 47, 32, 15, -5, -37, 26, 46, -11, -7, -35, -37, 49, -41, 45, 23, -49, 25};
    vector<int> y = {-14, -32, -32, -43, -43, 38, -26, 38, 37, -23, -38, 1, 37, -2, 37, 5, -22, -22, 27, -7, 30, -1, -11, -29, 36, 23, 22, -8, -47, -11, 16, 31, -29, -44, 0, 38, -43, -34, -26, 35, 5, 24, 26};
    int k = 36;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 65.5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {12, -20, 25, -50, -34, 29, 5, 23, 13, 17, 20, 16, -13, -12, -11, -22, -28, -25, -20, 45, -16, 24, -34, -4, -5, -50, 42, 44, 23};
    vector<int> y = {-49, -4, -47, -16, 40, 11, -16, 44, 39, 49, -50, 37, 33, 42, -20, -11, -44, -2, 17, -44, -39, -5, 29, -45, 15, 40, -19, -25, 27};
    int k = 8;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 28.5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {49, 45, 48, 45, 47, 49, 47, 47, 45, 45, 49, 45, 47, 49, 46, 45, 47, 47, 45, 45, 46, 50, 47, 45, 47, 45, 49, 48, 48, 45, 48, 48, 46, 49, 49, 46, 49, 46, 49, 49, 49, 47, 47, 48, 47, 45, 47, 50};
    vector<int> y = {46, 46, 46, 45, 48, 48, 46, 49, 48, 49, 50, 45, 45, 48, 46, 48, 45, 48, 48, 47, 47, 47, 48, 48, 47, 46, 45, 50, 45, 46, 47, 46, 45, 46, 48, 46, 45, 45, 49, 48, 48, 45, 48, 47, 49, 45, 49, 50};
    int k = 41;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {45, 49, 50, 47, 47, 50, 48, 45, 49, 48, 47, 46, 45, 49, 49, 46, 45, 49, 48, 49, 48, 46, 46, 45, 47, 48, 45, 49, 46, 47, 50, 45, 48, 45, 46, 48, 46, 48, 46, 49, 47, 45, 48, 49, 48, 46, 48};
    vector<int> y = {45, 46, 48, 47, 49, 49, 48, 48, 48, 46, 45, 45, 48, 49, 48, 48, 47, 46, 48, 49, 45, 47, 48, 47, 49, 48, 45, 45, 48, 48, 45, 45, 48, 45, 45, 45, 46, 48, 47, 47, 46, 49, 45, 46, 48, 46, 45};
    int k = 13;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {45, 45, 46, 45, 46, 50, 46, 47, 48, 49, 49, 49, 48, 45, 49, 48, 45, 48, 46, 49, 47, 48, 49, 47, 47, 46, 46, 46, 48, 48, 46, 47, 50, 45, 49, 45, 46, 46, 48, 47, 46};
    vector<int> y = {48, 47, 45, 47, 50, 45, 45, 45, 46, 45, 47, 45, 45, 45, 48, 45, 45, 46, 47, 45, 47, 45, 47, 45, 49, 45, 47, 48, 45, 45, 48, 49, 48, 48, 45, 45, 48, 45, 49, 45, 49};
    int k = 33;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {45, 49, 49, 49, 48, 48, 46, 48, 45, 46, 45, 46, 48, 48, 50, 45, 49, 48, 47, 47, 49, 48, 48, 45, 47, 48, 45, 45, 50, 46, 49, 48, 48, 47, 49, 47, 45, 49, 50, 45, 45, 46, 48, 47, 47};
    vector<int> y = {48, 46, 45, 47, 45, 45, 45, 45, 46, 45, 45, 49, 49, 46, 45, 48, 47, 47, 47, 46, 45, 48, 49, 48, 47, 48, 45, 48, 49, 49, 48, 49, 45, 45, 49, 45, 47, 45, 47, 46, 46, 49, 45, 50, 48};
    int k = 21;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {45, 45, 47, 46, 48, 46, 49, 45, 48, 48, 45, 49, 46, 46, 45, 46, 48, 47, 47, 48, 48, 49, 47, 46, 47, 48, 46, 49, 45, 48, 48, 48, 45, 46, 45, 45, 49, 45, 45, 49, 48, 46, 45, 45, 46};
    vector<int> y = {45, 45, 48, 45, 45, 45, 46, 47, 46, 48, 45, 49, 45, 48, 47, 48, 48, 47, 46, 45, 45, 48, 49, 47, 49, 48, 48, 49, 47, 45, 49, 47, 45, 49, 49, 49, 48, 48, 48, 46, 47, 50, 46, 47, 45};
    int k = 31;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {48, 49, 45, 46, 48, 47, 47, 48, 48, 45, 45, 48, 45, 45, 49, 48, 46, 47, 48, 49, 47, 47, 47, 49, 49, 45, 45, 45, 45, 46, 47, 45, 46, 46, 45, 49, 47, 49, 48, 48, 46};
    vector<int> y = {47, 45, 47, 45, 45, 46, 47, 45, 49, 46, 49, 47, 48, 46, 48, 49, 50, 48, 45, 45, 48, 48, 48, 49, 48, 46, 49, 49, 47, 45, 46, 49, 46, 49, 48, 47, 46, 45, 49, 45, 47};
    int k = 22;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {-1, -39, 43, -49, -29, -22, 42, -49, -26, 6, 4, -46, 41, -25, -10, -49, 10, 24, -29, 44, 7, -15, 34, -3, 11, 23, 32, -49, -41, -50, 47, 4, -9, -1, -10, 28, 20, 40, 35, -13, -36, 21, 21, 47, 13, 19, 17, 46, 46, 44};
    vector<int> y = {38, 15, 9, -47, 5, 46, 42, 7, 41, -40, 43, 41, -22, -46, -44, 17, 29, -37, 34, -25, 32, 11, 16, -37, -10, -35, -17, 25, -40, -40, -35, -23, 35, -46, -40, -5, -32, -17, -37, -46, -50, 31, -20, -10, 10, 2, 47, 6, 32, 47};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {-29, 33, 4, -30, -27, -1, 42, -38, -43, 43, 40, 27, -23, 13, 35, -29, 4, 24, -17, -15, -26, -45, 41, -36, -29, 1, 10, -5, -26, 25, 49, -42, -3, -23, -12, 28, -17, -13, 21, -43, -23, 20, -45, -18, 22, -11, -28};
    vector<int> y = {12, -22, 29, -33, -33, 13, -32, 19, 25, 4, 47, 47, -46, -11, 42, -35, -44, 27, 25, 42, 3, -38, 31, -12, 36, -23, -16, -7, 18, -48, 34, -21, 39, 44, 1, -44, -17, 9, -17, -23, -45, 19, -37, 23, -6, 40, -29};
    int k = 41;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 70.5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {17, 4, 25, -32, 24, 22, -36, -22, -20, -11, 43, -6, 31, -15, -23, 7, -17, 44, 25, -41, -47, 39, 49, -26, 13, 16, 30, -20, 41, 23, -15, 38, 34, -44, 20, -8, 32, 43, 47, 22, -38, -46, -8, -35, -18, 32, 9};
    vector<int> y = {-9, -39, 46, 2, -33, -5, -27, -16, 33, -48, -8, -20, -11, -7, 31, 34, -44, -31, 5, -9, -14, -17, -23, 20, 46, 41, -45, 16, 38, -50, 46, -40, 2, -26, -50, 42, -41, -31, 0, 35, 28, -11, -33, -30, -24, 2, -1};
    int k = 42;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 64.5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {30, 49, 32, -43, -40, -10, -40, -28, -45, -3, 26, 26, 15, -44, -14, 11, -36, -35, 23, -29, 17, -46, 18, 38, 5, 28, -13, -37, -7, 4, -19, -8, -13, -13, -39, 19, 49, -28, -28, -15, 2, -24, -41, 33, -46, 33, 27, -44, 41, -12};
    vector<int> y = {5, 14, 13, 40, -8, 46, 14, 26, 37, -34, -4, -27, -7, -18, -49, -46, -21, -4, 45, 29, 31, -33, 17, -19, 1, 40, 20, 8, -32, -22, 11, 11, 3, -11, -38, -49, -1, -47, 26, 1, -47, -8, -7, 46, 17, 1, 21, 26, 46, -38};
    int k = 18;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 33.5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {-28, -22, -13, -32, -23, -3, 14, -28, 14, -41, 11, 17, -22, 11, -8, -29, 12, -44, 44, -49, -26, -39, 37, -42, 28, 25, -27, 15, 25, -26, -4, 19, -33, -13, 17, 15, 1, -29, 31, 17, 25, -32, -11, -36, -6, 11, -50, -38, -46};
    vector<int> y = {15, -31, -18, 32, 15, 35, 5, 7, 13, 24, -22, 20, 1, 43, -38, 40, 25, -23, -46, 4, 35, 23, -50, -23, -44, 36, 16, 17, -27, 23, 1, -16, 44, 19, -2, 6, 16, -46, 4, 32, 29, -12, -44, 16, -5, -44, -46, -49, -8};
    int k = 22;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 35.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {25, 45, 12, 9, 5, -26, -19, -28, -3, 16, -48, 9, 47, -15, 19, -46, 42, -50, 21, 32, 49, 18, 15, -33, 31, -1, -32, -20};
    vector<int> y = {-14, 8, -1, -7, -26, 21, 47, 5, -46, 27, -15, 49, 0, -6, 25, 5, 1, 29, 38, -23, 20, 23, 39, 1, -23, -43, 46, 43};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {31, 18, 17, 33, 29, 38, 9, 17, 38, -26, -33, -3, 46, -35, -16, 38};
    vector<int> y = {38, 49, -48, 23, -36, -21, -32, 1, -16, -11, 6, -1, -19, 15, -16, 11};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {17, 1, 20, 36, -34, 33, -49, 4, 11, -34, -5, -17, -16, 17, 48, -50, -23, -30, 7, -1, 39};
    vector<int> y = {-21, 27, 11, -31, 28, 1, -35, -8, 37, -2, -10, -44, 27, -49, -9, -38, -13, 19, 7, 37, -12};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {16};
    vector<int> y = {27};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {50, 50, 0, 50, -50, -50, -50, -50, 0, 50, -50, -50, 50, 0, -50, -50, -50, -50, -50, 50, 50, -50, -50, -50, 50, -50, -50};
    vector<int> y = {0, -50, -50, -50, -50, 0, -50, 50, -50, -50, -50, -50, 50, -50, -50, -50, 50, 50, -50, -50, -50, -50, -50, 50, 0, 0, -50};
    int k = 20;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 75.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {-50, -50, -50, -50, -50, 0, 0, -50, 50, -50, -50, 50, -50, 0, 50, -50, 50, 50, 50, -50, 50, 50, 50, -50, -50, 50, -50, 0, -50};
    vector<int> y = {-50, -50, -50, -50, 0, -50, 0, -50, -50, 50, 50, 0, 0, 0, -50, -50, 50, -50, 50, -50, -50, -50, -50, -50, 50, -50, -50, 0, 0};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {50, -50, -50, -50, 50, 50, -50, -50, 0, 50, 50, -50, 50, 0, 0, -50, -50, -50, -50, 0, 0, 0, 0, 0, -50, -50, 0, -50, -50, 50};
    vector<int> y = {50, -50, -50, 50, -50, 50, 0, 50, -50, 0, -50, 50, -50, -50, -50, -50, -50, -50, 50, 50, -50, -50, 0, 50, 50, 50, -50, 50, 50, 0};
    int k = 21;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 75.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {-50, 50, 0, 50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, 0, 50, -50, 50, 50, 0, 50, -50, -50, -50, 0, -50, 0, 50, -50, -50, 0, -50, 0, 50, 0, 0, 0, 50, -50, 0};
    vector<int> y = {-50, 0, -50, -50, 0, -50, -50, 50, -50, -50, -50, 50, 50, -50, -50, 0, -50, -50, 0, 0, -50, 50, 50, -50, 0, -50, -50, 0, 50, 50, 50, 0, 0, 0, -50, 0, 50, -50, -50, -50, -50, 0, 50};
    int k = 15;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {-5, -10, 25, 40, -50, -50, -40, -50, -35, -40, -50, -5, -40, -50, -5, -20, 15, 20, -50, 50, -50, -15, -15, -25, 10, -5, -20, -35, -50, -5, 35, -35, -40, 10, -40, 30, 40, 40, -35, 10, -10, 20, -40, 50, -30, 30, 20, -20, -15, -35};
    vector<int> y = {-50, -30, 20, 45, 10, 15, -15, -50, -10, -40, -5, -10, 40, 5, -5, 40, 10, -5, -5, -50, 10, -5, -50, -50, -50, -5, 25, -20, -40, -35, 10, -15, -35, 25, -5, 40, 40, -15, -20, 25, 40, 10, -5, -40, 10, -10, 20, -40, 20, -50};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {35, -15, 40, 35, 20, 30, 30, -45, -50, 15, -50, -15, 25, 5, -5, -50, 25, -20, -30, 5, -15, 45, -50, 20, -35, -45, 50, -50, -20, 40, -20, -5, 10, -35, -15, 5, -50, 35, -50, 40, 20, 0, 5, 10, -30, -15, 25, 10, -20, -30};
    vector<int> y = {-30, 15, -35, -15, 20, 45, -50, -50, 20, 20, -35, -45, -5, -15, 40, -50, 15, -20, 5, -40, 20, 35, 35, 15, 50, -50, 45, -30, 15, 10, -50, 40, -40, 0, 20, -50, 30, 20, 0, -20, 20, -35, 40, -25, 5, 5, 30, 0, 10, -40};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {-40, -50, 40, -50, 40, -30, -40, -15, 25, 10, 35, -35, -10, 10, -15, -50, 10, 20, 10, -50, -35, 10, 15, -50, 20, -50, 10, -50, 35, 30, -50, -5, 20, -15, 50, 40, -5, 40, -30, -5, 0, 50, 0, 25, 20, -50, -35, -20, 10, 20};
    vector<int> y = {-35, 10, -15, -25, -45, -20, -15, -50, 30, -45, 45, -25, -5, -50, 15, -30, -50, -5, -35, -50, -20, 0, -50, -50, -5, -20, 10, -5, -50, 20, 50, -50, 5, -20, 25, -30, -35, -35, -35, 45, 40, -15, -35, -10, 20, 50, -5, -50, -35, -35};
    int k = 18;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 35.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<int> y = {24, -22, 23, 47, -32, -29, 34, -46, 41, 44, -46, 42, -37, 28, 6, 4, 10, 42, 38, -3, -1, -25, -47, 11, 46, 47, 31, 43, -39, 43, -49, 11, 44, -35, -37, 41, 15, -1, -10, -15, -49, 9, 20, 7, -25, -46, 29, 17, 21, -5};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<int> y = {36, 39, 17, -39, -42, 17, -10, -15, -41, 17, 22, -10, 46, -13, 20, 46, 45, -44, 28, 7, 41, 33, -4, -36, 8, 11, -16, -46, -47, -38, -27, -23, 27, 14, -32, -1, 38, -17, 1, 25, -26, 22, -21, -5, 22, -6, 17, -21, -27, 50};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<int> y = {-45, -44, -26, -17, -29, 47, -46, -29, 7, 19, 12, -34, -38, -31, -22, -2, 30, -22, -45, 8, -16, 49, 32, 24, -5, -2, 2, 10, -22, -9, -37, -28, 25, 6, 33, 5, 29, -3, -28, -13, 43, -31, 40, 25, 22, -21, -46, -17, -16, -34};
    int k = 43;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 37.5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<int> y = {-30, -46, 13, 32, 28, 46, 17, 22, 49, 31, 0, -11, -36, -41, -11, 43, -38, -5, 7, -27, -6, -8, -1, 46, -38, -8, 9, -47, -46, -33, -17, -41, -24, -31, 13, 24, -5, 25, -20, 47, 35, 6, -35, -1, 16, -18, 39, -20, -14, 38};
    int k = 13;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<int> y = {-37, 15, 18, -3, -21, 33, 1, -16, 17, -48, 13, 42, -6, 1, 4, 39, 28, -10, 31, 34, 49, 48, -4, -40, 49, -41, -44, -17, 26, 8, 8, -26, -40, -40, 32, -39, 49, -42, -35, -17, 40, -50, -40, 37, -37, 7, -44, 44, -36, 46};
    int k = 30;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 29.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<int> y = {26, -13, 1, -11, -21, -13, -49, 11, 4, -8, -46, -15, -28, -24, 23, 17, -4, 26, 26, -22, -29, -27, -40, 15, 31, -41, 17, -46, -7, 3, 11, 14, -18, -4, -10, 46, 26, -44, -44, -14, -38, -8, -40, 45, -19, -39, -35, 29, -7, -36};
    int k = 20;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 12.5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<int> y = {-16, -39, -38, -11, -38, 50, -44, -34, -28, 17, -13, -38, 16, -36, -33, -1, -33, 25, -28, 11, 13, 33, -22, 44, -50, -44, -35, -31, -35, 7, 29, 36, -11, -29, -16, -23, -49, -17, 5, -15, 11, -22, 7, 32, -11, 41, -14, -44, 43, 50};
    int k = 6;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {24, -22, 23, 47, -32, -29, 34, -46, 41, 44, -46, 42, -37, 28, 6, 4, 10, 42, 38, -3, -1, -25, -47, 11, 46, 47, 31, 43, -39, 43, -49, 11, 44, -35, -37, 41, 15, -1, -10, -15, -49, 9, 20, 7, -25, -46, 29, 17, 21, -5};
    vector<int> y = {-50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {36, 39, 17, -39, -42, 17, -10, -15, -41, 17, 22, -10, 46, -13, 20, 46, 45, -44, 28, 7, 41, 33, -4, -36, 8, 11, -16, -46, -47, -38, -27, -23, 27, 14, -32, -1, 38, -17, 1, 25, -26, 22, -21, -5, 22, -6, 17, -21, -27, 50};
    vector<int> y = {-50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {-45, -44, -26, -17, -29, 47, -46, -29, 7, 19, 12, -34, -38, -31, -22, -2, 30, -22, -45, 8, -16, 49, 32, 24, -5, -2, 2, 10, -22, -9, -37, -28, 25, 6, 33, 5, 29, -3, -28, -13, 43, -31, 40, 25, 22, -21, -46, -17, -16, -34};
    vector<int> y = {-50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50};
    int k = 43;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 37.5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {-30, -46, 13, 32, 28, 46, 17, 22, 49, 31, 0, -11, -36, -41, -11, 43, -38, -5, 7, -27, -6, -8, -1, 46, -38, -8, 9, -47, -46, -33, -17, -41, -24, -31, 13, 24, -5, 25, -20, 47, 35, 6, -35, -1, 16, -18, 39, -20, -14, 38};
    vector<int> y = {-50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50};
    int k = 13;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {-37, 15, 18, -3, -21, 33, 1, -16, 17, -48, 13, 42, -6, 1, 4, 39, 28, -10, 31, 34, 49, 48, -4, -40, 49, -41, -44, -17, 26, 8, 8, -26, -40, -40, 32, -39, 49, -42, -35, -17, 40, -50, -40, 37, -37, 7, -44, 44, -36, 46};
    vector<int> y = {-50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50, -50};
    int k = 30;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 29.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {30, -15, 24, -23, 43, -8, -6, -47, 23, -11, 43, 6, -18, 44, -46, 16, 32, 31, 13, 9, 22, 25, 4, -44, 38, -41, -20, 41, -35, 7, 25, 39, -36, -20, -5, -38, -15, -22, 0};
    vector<int> y = {-45, -7, -33, 31, -8, -33, -20, -14, -50, -48, -31, 35, -24, -31, -11, 41, -41, -11, 46, -1, -5, 5, -39, -26, -40, -9, 16, 38, -30, 34, 46, -17, -27, 33, -38, 28, 46, -16, -46};
    int k = 13;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 32.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {-1, -1, 1, 1};
    vector<int> y = {-1, 1, -1, 1};
    int k = 2;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {24, 26, 38, -44, 6, 9, 32, -23, -17, -27, 2, 12, -34, -42, -19, -42, 3, -13, -8, 7, -14, -20, 9, -13, -12, -36, 2, 31, 0, 18, -18, -21, -38, -24, 32, 13, 30, 19, 36, -32, 37, -7, -13, -42, -4, 13, 13, 6, -45};
    vector<int> y = {-40, 20, 38, -15, -16, -20, 18, -44, 27, -34, 1, -37, -44, -13, 22, -23, -26, -10, 14, 38, -19, -11, -8, -19, 21, -43, -16, -11, 15, -3, -11, 20, -27, -17, 13, -36, -30, 38, -35, 5, -40, -27, -25, -39, -33, 42, 35, -14, 39};
    int k = 37;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 52.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {-9, 35, 22, -12, 30, 19, 15, 18, 46, -28, -1, 17, 1, 11, 13, 37, 16, -26, 30, 33, 21, 10, 14, 2, 40, 10, -1, -19, -27, 49, 44, -39, -25, -26, 1, -35, -37, -11, 17, 47, -31, 26, -38, -17, 49, -32, 42, -15, 24, -50};
    vector<int> y = {-50, 45, 21, -11, -17, -11, -18, -13, -5, 7, 21, 45, -45, 21, -26, 36, -42, 1, 4, 24, -26, 25, 20, -17, 13, -21, 49, 8, 44, 2, -37, -15, 49, -4, 7, 21, -27, -33, -47, 44, -2, 27, -32, 33, -39, 33, -25, 9, 12, -48};
    int k = 48;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 80.5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {-26, -12, 45, -10, 34, -21, 25, 37, -27, -48, -9, 43, -25, -11, 5, 3, -7, 35, -42, -46, 18, 40, -47, -24, -10, 6, 3, 41, -2, 15, 15, 29, -35, -21, -45, -19, -25, 4, -9, -4, 16, -4, -33, -44, 17, -24, -41, 11, 42, 10};
    vector<int> y = {20, -17, 20, -31, -44, -41, -32, -28, 18, -21, 35, 10, -47, -48, 23, 46, 33, 0, 48, 35, 31, -14, 12, -31, -46, 35, 42, -16, 22, 17, 21, 10, -44, -19, -37, 41, 5, -28, -21, -25, -1, -18, 18, -26, 19, -41, 45, -44, 30, 1};
    int k = 38;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 58.5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {1, 2, 3};
    vector<int> y = {1, 4, 1};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {0, 1, 2};
    vector<int> y = {0, 3, 0};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {0, 3, 4};
    vector<int> y = {0, 4, 0};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {-2, 2, 0};
    vector<int> y = {0, 0, 4};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {0, 2, 1};
    vector<int> y = {0, 0, 2};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {50};
    vector<int> y = {50};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {30, -15, 24, -23, 43, -8, -6, -47, 23, -11, 43, 6, -18, 44, -46, 16, 32, 31, 13, 9, 22, 25, 4, -44, 38, -41, -20, 41, -35, 7, 25, 39, -36, -20, -5, -38, -15, -22, 0};
    vector<int> y = {-45, -7, -33, 31, -8, -33, -20, -14, -50, -48, -31, 35, -24, -31, -11, 41, -41, -11, 46, -1, -5, 5, -39, -26, -40, -9, 16, 38, -30, 34, 46, -17, -27, 33, -38, 28, 46, -16, -46};
    int k = 39;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 74.5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {50, 50};
    vector<int> y = {-50, 50};
    int k = 2;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {30, -15, 24, -23, 43, -8, -6, -47, 23, -11, 43, 6, -18, 44, -46, 16, 32, 31, 13, 9, 22, 25, 4, -44, 38, -41, -20, 41, -35, 7, 25, 39, -36, -20, -5, -38, -15, -22, 0, 1, 2, 3};
    vector<int> y = {-45, -7, -33, 31, -8, -33, -20, -14, -50, -48, -31, 35, -24, -31, -11, 41, -41, -11, 46, -1, -5, 5, -39, -26, -40, -9, 16, 38, -30, 34, 46, -17, -27, 33, -38, 28, 46, -16, -46, -49, -48, -47};
    int k = 13;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 28.5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {4, -4, -3};
    vector<int> y = {0, 0, 2};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {0, 0, 1, 1};
    vector<int> y = {0, 1, 0, 1};
    int k = 4;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {4, 4, 4, 4, 4, 3, 3, 5, 5};
    vector<int> y = {7, 7, 7, 4, 4, 5, 6, 5, 6};
    int k = 9;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {1, 1};
    vector<int> y = {0, 1};
    int k = 2;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {0, 0, 0, 2};
    vector<int> y = {-1, 1, 1, 0};
    int k = 4;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {3};
    vector<int> y = {3};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {1, -7, -9, -2, 3};
    vector<int> y = {9, 7, 1, -8, -7};
    int k = 4;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {1, 1, 1, 1, 1};
    vector<int> y = {3, 3, 3, 3, 3};
    int k = 4;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {0, 2};
    vector<int> y = {0, 0};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {49, 48};
    vector<int> y = {49, 48};
    int k = 2;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {0, 30, 15};
    vector<int> y = {0, 0, 30};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 22.5;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {0, 1, 2};
    vector<int> y = {0, 2, 0};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {30, -15, 24, -23, 43, -8, -6, -47, 23, -11, 43, 6, -18, 44, -46, 16, 32, 31, 13, 9, 22, 25, 4, -44, 38, -41, -20, 41, -35, 7, 25, 39, -36, -20, -5, -38, -15, -22, 0, 4, 6, 2, 45, 2, 5, 2, 6, 2, 1, 5};
    vector<int> y = {-45, -7, -33, 31, -8, -33, -20, -14, -50, -48, -31, 35, -24, -31, -11, 41, -41, -11, 46, -1, -5, 5, -39, -26, -40, -9, 16, 38, -30, 34, 46, -17, -27, 33, -38, 28, 46, -16, -46, 9, -9, 39, 39, 1, 39, 40, -3, 0, 5, 6};
    int k = 10;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 16.5;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {-30, 38, -48, -4, 44, 36, 22, 31};
    vector<int> y = {8, -45, -12, -39, 7, 49, 4, -2};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 12.5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {-1, -1, -2, -4, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    vector<int> y = {-1, -50, 50, -7, -50, -50, 50, -50, 50, -50, 50, -50, 50, -50, 50, -50, 50, -50, 50, -50, 50, -50, 50, -50, 50, -50, 50, -50};
    int k = 14;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {-50};
    vector<int> y = {-50};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {0};
    vector<int> y = {0};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {1, 2, 10};
    vector<int> y = {0, 0, 0};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {2, 0, -1};
    vector<int> y = {0, 2, -1};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {0, 1, 3};
    vector<int> y = {0, 3, 1};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {-1, 1, 0};
    vector<int> y = {0, 0, 49};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {-50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, -50, 50, 50, 50, 50};
    vector<int> y = {-50, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, -50, 38, 37, 36, 35};
    int k = 2;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {36, -16, -21, -46, -18, 46, -20, 17, -23, 27, 47, -37, 16, 9, 9, -23, 47, 16, 17, 50, -9, -22, 16, -3, 14, 18, 9, 3};
    vector<int> y = {-31, 35, -48, 1, -15, -25, 14, 19, -49, -39, 39, 47, -37, -39, 31, -44, 36, -22, -10, -44, 39, 6, -37, 21, 4, 5, 3, 50};
    int k = 28;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 89.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {50, 50};
    vector<int> y = {50, 50};
    int k = 2;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {15, 19, -48, -49};
    vector<int> y = {17, 17, -49, -49};
    int k = 2;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {0, 4, 8};
    vector<int> y = {0, 16, 0};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {0, 0, 2};
    vector<int> y = {0, 2, 1};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {0, 1};
    vector<int> y = {0, 0};
    int k = 2;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {1};
    vector<int> y = {1};
    int k = 1;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {-1, -1, 1};
    vector<int> y = {-1, 1, 0};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {-1, -1, 1, 2};
    vector<int> y = {1, -2, -1, 4};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {10, 10, 11, -10, -10, -11};
    vector<int> y = {10, 11, 11, 10, 11, 11};
    int k = 2;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {0, 2, -1};
    vector<int> y = {2, 0, -1};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {0, 4, 4};
    vector<int> y = {0, -3, 3};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {1, 2};
    vector<int> y = {0, 0};
    int k = 2;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {1, 39, 36, 40, 32, 0, 44, 38, 10, 14};
    vector<int> y = {33, 31, 30, 22, 40, 42, 28, 26, 25, 6};
    int k = 9;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 26.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {33, -49, -20, 45, 13, -23};
    vector<int> y = {-12, 40, -13, 6, -39, -8};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 29.5;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {-3, -2, 1, 2};
    vector<int> y = {1, -2, 3, -2};
    int k = 4;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {1, 1, -1, -1, 50, 50, 49, 49};
    vector<int> y = {1, -1, 1, -1, 49, 50, 49, 50};
    int k = 4;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {0, 2, 10};
    vector<int> y = {0, 20, 7};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 5, 5, 4, 4, 5, 5, 5, 5};
    vector<int> y = {3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 5, 5, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5, 5};
    int k = 4;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {0, 25, 0};
    vector<int> y = {0, 0, 25};
    int k = 2;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 12.5;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {50, 50, 0, 1, 0, -1};
    vector<int> y = {50, 50, 1, 0, -1, 0};
    int k = 2;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {0, 3, 6};
    vector<int> y = {0, 4, 0};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {0, 2, 1, 0, 1, 2};
    vector<int> y = {4, 4, 0, 2, 2, 2};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {40, 45, 30, 19, 1, 37, 13, 8, 9, 17, 36, 44, 5, 26, 24, 44, 17, 24, 34, 42, 48, 47, 26, 0, 19, 42, 45, 10, 9, 13, 14, 4, 21, 38, 11, 23, 24, 22, 20, 20, 0, 2, 16, 14, 29, 34, 42, 18, 13, 12};
    vector<int> y = {6, 16, 49, 40, 7, 45, 14, 26, 9, 47, 32, 29, 31, 16, 45, 47, 16, 39, 20, 38, 6, 8, 27, 14, 35, 3, 5, 20, 19, 24, 21, 43, 7, 38, 21, 22, 0, 35, 30, 14, 9, 24, 45, 37, 47, 47, 6, 3, 31, 33};
    int k = 50;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 41.5;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {1, -33, -26, 21, -25, -34, 47, -18, -46, 45};
    vector<int> y = {-28, 2, 45, 3, 28, -8, 38, -33, -7, -1};
    int k = 8;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 49.5;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {0, 2, 10};
    vector<int> y = {0, 30, 7};
    int k = 3;
    TheNewHouseDivOne* pObj = new TheNewHouseDivOne();
    clock_t start = clock();
    double result = pObj->distance(x, y, k);
    clock_t end = clock();
    delete pObj;
    double expected = 16.0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22654575&rd=13899&pm=10512
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
 
#define Rep(i,n) for(int i=0;i<(n);++i)
#define For(i,a,b) for(int i=(a);i<=(b);++i)
#define Ford(i,a,b) for(int i=(a);i>=(b);--i)
#define Fill(a,b) memset( (a), (b), sizeof(a))
#define pb push_back
#define MP make_pair
 
class TheNewHouseDivOne {
public:
  double distance(vector <int>, vector <int>, int);
};
 
double TheNewHouseDivOne::distance(vector <int> x, vector <int> y, int k) {
  int n = x.size();
  Rep(i,n) {
    x[i] *= 2;
    y[i] *= 2;
  }
  int best = 1000000000;
  For(u,-100,100) {
    For(v,-100,100) {
      vector<int> dist;
      Rep(i,n) {
        dist.pb( abs(x[i] - u) + abs(y[i] - v));
        
      }
      sort( dist.begin(), dist.end());
      int r = dist[k-1];
      if(best > r) best = r;
    }
  }  
  return best * 0.5;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/