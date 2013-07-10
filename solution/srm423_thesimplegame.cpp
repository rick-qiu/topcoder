/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9966
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

class TheSimpleGame {
public:
    int count(int n, vector<int> x, vector<int> y);
};

int TheSimpleGame::count(int n, vector<int> x, vector<int> y) {
    int ret;
    return ret;
}


int test0() {
    int n = 4;
    vector<int> x = {2};
    vector<int> y = {3};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 3;
    vector<int> x = {2, 2, 1, 3};
    vector<int> y = {2, 2, 3, 1};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 7;
    vector<int> x = {7, 1, 7, 7, 1, 7, 1};
    vector<int> y = {7, 1, 1, 1, 1, 7, 7};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 3;
    vector<int> x = {3, 2};
    vector<int> y = {1, 1};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 4;
    vector<int> x = {1, 1, 1};
    vector<int> y = {1, 1, 3};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 1;
    vector<int> x = {1};
    vector<int> y = {1};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
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
    int n = 8;
    vector<int> x = {1, 1, 5, 1, 7, 3, 5};
    vector<int> y = {6, 4, 7, 1, 3, 3, 6};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 9;
    vector<int> x = {7};
    vector<int> y = {1};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 1;
    vector<int> x = {1, 1, 1, 1, 1, 1, 1};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
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
    int n = 1;
    vector<int> x = {1, 1, 1, 1, 1};
    vector<int> y = {1, 1, 1, 1, 1};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
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
    int n = 37;
    vector<int> x = {35};
    vector<int> y = {26};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 75;
    vector<int> x = {13, 27, 66, 73, 40, 7, 20, 37, 11, 73, 49, 4, 9, 16, 34, 52, 73, 52, 30, 44, 10, 34, 19, 38, 36, 31};
    vector<int> y = {4, 6, 23, 31, 61, 51, 7, 40, 43, 37, 16, 42, 24, 67, 24, 57, 52, 40, 46, 13, 46, 13, 4, 71, 54, 31};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1037;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 13;
    vector<int> x = {5, 12, 4, 1, 2, 2, 3, 6, 4, 3, 1, 9, 7, 13, 10};
    vector<int> y = {1, 6, 12, 1, 13, 7, 4, 12, 9, 2, 1, 10, 6, 12, 9};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 10;
    vector<int> x = {5, 1, 10, 5, 5, 8, 1, 3, 5, 6, 1, 5, 5, 3, 7, 9, 6, 10, 2, 3, 1, 5, 1, 9, 3, 4, 5, 7, 3, 1, 9, 1, 7, 9, 1, 9, 3, 6, 9, 5, 9, 3, 10, 3, 9, 1, 1, 8};
    vector<int> y = {9, 10, 6, 1, 1, 9, 10, 5, 7, 10, 5, 7, 6, 7, 3, 1, 5, 8, 5, 4, 4, 5, 6, 3, 1, 7, 1, 5, 7, 9, 6, 6, 7, 1, 9, 9, 3, 5, 3, 10, 1, 9, 7, 9, 3, 1, 6, 9};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 188;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 11;
    vector<int> x = {7, 6, 9, 1, 2, 6, 6, 7, 3, 10, 2, 8, 8, 1, 11, 10, 4, 9, 9, 9, 2, 10, 5, 1, 4};
    vector<int> y = {4, 1, 11, 6, 1, 3, 6, 9, 4, 1, 5, 1, 10, 9, 9, 3, 10, 4, 8, 8, 6, 11, 6, 3, 5};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 52;
    vector<int> x = {11, 36, 1, 37, 41, 1};
    vector<int> y = {46, 24, 29, 5, 33, 14};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 27;
    vector<int> x = {19, 3, 21, 26, 13, 5, 9, 25, 13, 21, 24};
    vector<int> y = {13, 18, 27, 1, 10, 7, 22, 20, 25, 26, 19};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 20;
    vector<int> x = {8, 10, 13, 5, 13, 6, 8, 6, 9, 1, 7, 17, 9, 14, 17, 2, 6, 17, 11, 7, 15, 16, 16, 11, 5, 16, 1, 20, 3, 19, 9, 1, 17};
    vector<int> y = {1, 14, 6, 5, 8, 13, 17, 9, 1, 1, 1, 5, 1, 20, 1, 11, 14, 11, 3, 1, 13, 6, 1, 5, 8, 1, 5, 5, 8, 8, 1, 3, 18};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 272;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 49;
    vector<int> x = {16, 32, 17, 33, 32, 15, 6, 3, 3, 47, 10, 1, 10, 6, 37, 47, 41, 31, 46, 43, 42, 36, 31, 31, 37, 18, 8, 11, 23, 43, 45, 47, 29, 44, 12, 23, 33, 48, 29, 15, 29, 35, 49, 4, 20, 36, 26};
    vector<int> y = {15, 39, 7, 29, 3, 1, 2, 42, 9, 9, 49, 22, 49, 37, 19, 24, 9, 20, 2, 15, 36, 16, 22, 43, 28, 39, 43, 40, 36, 36, 7, 17, 1, 26, 11, 47, 15, 31, 39, 15, 30, 39, 2, 22, 31, 2, 32};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1034;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 65;
    vector<int> x = {20};
    vector<int> y = {1};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 98;
    vector<int> x = {34, 3, 43, 53, 1, 71, 78, 57, 77, 4, 36, 75, 10, 5, 35, 21, 83, 85, 94, 12, 18, 1, 1, 48, 96, 5, 1, 69, 25};
    vector<int> y = {27, 73, 84, 2, 39, 75, 33, 17, 51, 61, 42, 43, 49, 14, 43, 22, 72, 1, 53, 35, 58, 11, 77, 51, 63, 8, 31, 45, 31};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1360;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 59;
    vector<int> x = {59, 24, 46, 4, 55, 1, 36, 11, 13, 13, 51, 59, 23, 19, 11, 27, 24, 28, 12, 12, 37, 28, 25, 58, 56, 52, 39, 13, 24, 4, 14, 57, 47, 6, 46, 49, 3, 44, 36, 18, 35};
    vector<int> y = {40, 8, 20, 21, 45, 56, 50, 44, 26, 36, 1, 47, 12, 45, 45, 16, 49, 22, 55, 9, 41, 22, 29, 23, 58, 13, 20, 5, 17, 7, 6, 42, 41, 16, 11, 13, 59, 51, 37, 7, 46};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1070;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 67;
    vector<int> x = {45, 25, 43, 6, 55, 40, 18};
    vector<int> y = {14, 3, 25, 33, 4, 34, 52};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 32;
    vector<int> x = {1, 11, 29, 9, 11, 25, 13, 15, 6, 32, 13, 31, 21, 9, 1, 31, 9, 13, 31, 25, 3, 7, 9, 5, 29, 9, 28, 27, 25, 29, 27, 17, 29, 1, 27, 25, 30, 27, 29, 5, 29, 5, 15, 13, 30, 17, 5};
    vector<int> y = {7, 12, 27, 25, 11, 17, 6, 4, 2, 1, 9, 3, 14, 13, 13, 3, 28, 10, 16, 13, 13, 11, 1, 23, 21, 11, 13, 1, 3, 19, 20, 11, 15, 5, 19, 13, 27, 12, 32, 21, 9, 1, 1, 1, 3, 31, 21};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 628;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 67;
    vector<int> x = {17, 52, 3, 16, 22, 66, 59, 29, 24, 38, 55, 50, 21, 4, 43, 1, 2, 30, 63, 55, 30, 17, 17, 67, 40, 19, 32, 47, 59, 23, 15, 24, 66, 21, 62, 64, 13, 33, 3};
    vector<int> y = {27, 10, 23, 7, 40, 27, 1, 44, 49, 18, 60, 23, 38, 43, 54, 7, 66, 12, 57, 13, 1, 4, 1, 1, 1, 64, 45, 44, 28, 60, 34, 11, 31, 2, 57, 21, 60, 22, 1};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1105;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 10;
    vector<int> x = {5, 9, 9, 6, 4, 1, 7, 3, 1, 3, 1, 6, 4, 5, 1};
    vector<int> y = {8, 1, 6, 1, 6, 9, 5, 3, 5, 1, 8, 6, 9, 8, 9};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 78;
    vector<int> x = {73, 1, 1, 76, 51, 76, 67, 33, 27};
    vector<int> y = {23, 56, 3, 49, 7, 55, 75, 7, 63};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 233;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 97;
    vector<int> x = {58, 21, 21, 1, 1, 2, 40, 86, 33, 9, 96};
    vector<int> y = {56, 27, 83, 43, 93, 19, 97, 51, 25, 1, 94};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 389;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 28;
    vector<int> x = {5, 13, 17, 3, 12, 17, 1, 1, 13, 16, 23, 9, 8};
    vector<int> y = {28, 17, 2, 5, 7, 17, 11, 9, 5, 6, 1, 15, 1};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 42;
    vector<int> x = {39, 2, 22, 25, 16};
    vector<int> y = {4, 7, 38, 13, 37};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 68;
    vector<int> x = {5, 29, 1, 49, 4, 29, 9, 25, 68, 54, 12, 21, 67, 53, 1, 12, 41, 33, 9, 1, 51, 63, 1, 15, 33, 13, 59, 61, 59, 37, 5, 13, 39, 57, 29};
    vector<int> y = {25, 26, 61, 19, 23, 51, 1, 53, 15, 53, 62, 28, 5, 2, 40, 14, 41, 30, 63, 48, 53, 41, 68, 53, 55, 12, 39, 57, 61, 3, 9, 56, 11, 24, 63};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 978;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 37;
    vector<int> x = {30, 31, 19, 22, 24, 9, 34, 20, 1, 35, 33, 3, 34, 2, 30, 12, 14, 18, 22, 30, 30};
    vector<int> y = {5, 24, 1, 4, 27, 9, 12, 1, 27, 24, 11, 1, 3, 9, 29, 16, 10, 33, 20, 30, 14};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 341;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 43;
    vector<int> x = {3, 22, 24, 36, 19, 4, 1, 22, 31, 35, 17, 21, 7, 34, 14, 41, 41, 11, 37, 5, 37, 39, 33, 34, 2, 40, 3, 13, 35, 25, 1, 37, 18, 20, 36, 27, 30, 41, 2, 3, 39, 11, 9, 17, 4, 26};
    vector<int> y = {41, 7, 39, 3, 18, 8, 41, 30, 4, 14, 13, 23, 17, 36, 2, 20, 3, 8, 23, 9, 41, 43, 19, 11, 9, 24, 42, 41, 15, 38, 3, 17, 12, 6, 37, 40, 15, 36, 27, 5, 16, 28, 39, 19, 11, 7};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 825;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 96;
    vector<int> x = {45, 85, 33, 26, 76, 36, 51, 85, 85, 79, 89, 13, 11, 19, 55, 73, 18, 67, 94, 19, 25, 28, 69, 53, 79, 40, 88, 59, 21, 61, 1, 33, 65, 31, 67, 45, 7, 61, 4, 73, 1, 33, 45, 49, 39, 3, 13, 46, 76, 7};
    vector<int> y = {1, 19, 67, 38, 33, 55, 46, 1, 85, 13, 14, 91, 45, 21, 13, 53, 46, 16, 96, 40, 14, 63, 13, 45, 45, 49, 61, 7, 15, 73, 37, 4, 29, 93, 9, 37, 13, 49, 79, 60, 37, 49, 30, 81, 25, 28, 55, 35, 65, 94};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2428;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 95;
    vector<int> x = {5, 78, 37, 14, 86, 85, 72, 68, 1, 75, 71, 24, 58, 19, 65, 7, 33, 6, 29, 91, 27, 74, 91, 24, 28, 16, 79, 10, 44, 23, 50, 38, 39, 31, 71, 63, 59, 25, 6, 11, 66, 39, 60, 20, 57, 50, 25, 82, 26, 77};
    vector<int> y = {88, 16, 30, 53, 80, 79, 59, 35, 46, 63, 36, 42, 81, 75, 92, 24, 1, 11, 77, 76, 39, 59, 8, 70, 78, 95, 56, 74, 22, 94, 18, 31, 21, 39, 69, 50, 91, 39, 81, 4, 32, 47, 39, 11, 45, 92, 46, 45, 36, 31};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2357;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 100;
    vector<int> x = {76, 33, 57, 42, 97, 66, 76, 65, 93, 1, 21, 63, 1, 56, 61, 33, 51, 61, 81, 76, 45, 17, 87, 55, 85, 53, 89, 1, 61, 71, 51, 53, 95, 77, 53, 56, 99, 76, 13, 61, 25, 9, 58, 76, 41, 33, 81, 82, 18, 61};
    vector<int> y = {61, 45, 41, 99, 1, 25, 56, 1, 63, 81, 69, 17, 32, 51, 81, 13, 1, 45, 61, 1, 56, 97, 83, 83, 28, 10, 13, 5, 33, 86, 68, 86, 89, 81, 87, 57, 89, 34, 17, 82, 86, 17, 51, 67, 95, 76, 76, 71, 85, 16};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2461;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 93;
    vector<int> x = {24, 44, 64, 49, 52, 4, 13, 82, 17, 84, 43, 31, 43, 42, 44, 6, 61, 38, 80, 73, 3, 31, 50, 10, 82, 16, 23, 73, 65, 70, 46, 52, 40, 89, 25, 33, 19, 49, 41, 36, 22, 13, 34, 8, 1, 64, 46, 7, 66, 46};
    vector<int> y = {59, 91, 70, 85, 93, 22, 13, 22, 58, 79, 49, 54, 2, 32, 1, 21, 8, 47, 58, 57, 16, 7, 88, 93, 58, 34, 38, 26, 49, 7, 4, 85, 76, 1, 66, 53, 34, 77, 19, 25, 34, 17, 7, 37, 58, 10, 32, 46, 74, 10};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2346;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 99;
    vector<int> x = {49, 86, 89, 1, 61, 56, 43, 14, 4, 55, 47, 88, 36, 70, 64, 49, 12, 45, 46, 97, 55, 67, 67, 98, 73, 13, 33, 19, 36, 1, 82, 78, 98, 36, 34, 8, 1, 3, 94, 43, 1, 46, 22, 5, 61, 82, 1, 79, 67, 20};
    vector<int> y = {31, 55, 99, 68, 64, 95, 42, 28, 34, 13, 52, 37, 82, 46, 26, 93, 3, 52, 35, 92, 9, 87, 76, 88, 70, 91, 15, 52, 75, 37, 89, 73, 6, 70, 53, 42, 46, 97, 67, 10, 64, 85, 19, 73, 52, 45, 40, 3, 64, 43};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2433;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 96;
    vector<int> x = {85, 67, 46, 73, 13, 90, 85, 33, 67, 49, 59, 33, 95, 65, 49, 55, 59, 81, 53, 4, 51, 61, 39, 41, 87, 21, 49, 18, 31, 7, 13, 1, 19, 1, 25, 70, 7, 65, 75, 13, 65, 94, 59, 33, 73, 39, 73, 59, 13, 85};
    vector<int> y = {37, 67, 10, 92, 49, 85, 89, 43, 93, 82, 31, 7, 71, 49, 31, 85, 73, 60, 88, 53, 48, 81, 1, 94, 33, 57, 73, 49, 49, 67, 14, 22, 88, 62, 17, 96, 49, 67, 13, 76, 46, 33, 67, 25, 85, 19, 33, 43, 61, 9};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2433;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 91;
    vector<int> x = {22, 63, 66, 60, 57, 40, 83, 66, 30, 27, 31, 20, 62, 35, 15, 14, 13, 61, 43, 49, 7, 71, 18, 18, 67, 47, 46, 8, 22, 84, 15, 5, 44, 37, 47, 57, 39, 85, 41, 76, 7, 79, 7, 7, 35, 65, 3, 85, 79, 76};
    vector<int> y = {78, 85, 80, 6, 14, 50, 71, 68, 29, 14, 90, 50, 26, 39, 30, 41, 34, 36, 27, 66, 16, 21, 7, 1, 87, 88, 35, 26, 53, 59, 57, 8, 59, 81, 69, 11, 8, 1, 58, 65, 31, 50, 41, 76, 79, 68, 29, 43, 40, 40};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2271;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 90;
    vector<int> x = {1, 74, 31, 55, 51, 66, 25, 77, 73, 1, 61, 56, 71, 73, 11, 13, 78, 70, 1, 57, 61, 13, 13, 22, 19, 61, 27, 22, 1, 25, 13, 40, 81, 40, 73, 73, 73, 73, 81, 27, 1, 37, 39, 11, 61, 73, 8, 1, 36, 7};
    vector<int> y = {55, 33, 61, 34, 16, 9, 88, 31, 55, 87, 87, 61, 34, 67, 67, 25, 70, 55, 85, 59, 49, 6, 4, 1, 57, 33, 81, 13, 61, 56, 64, 55, 31, 28, 31, 36, 1, 16, 59, 55, 3, 5, 41, 28, 46, 49, 38, 59, 65, 79};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2128;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 95;
    vector<int> x = {86, 22, 75, 57, 26, 18, 43, 82, 21, 29, 31, 80, 93, 58, 66, 35, 17, 31, 89, 1, 85, 26, 69, 36, 8, 41, 18, 61, 36, 19, 38, 37, 6, 46, 10, 86, 51, 5, 44, 39, 22, 78, 51, 18, 17, 93, 66, 75, 24, 62};
    vector<int> y = {51, 91, 35, 1, 4, 86, 56, 48, 89, 23, 46, 80, 33, 20, 41, 10, 48, 12, 81, 20, 45, 36, 78, 33, 93, 62, 3, 31, 13, 1, 6, 85, 78, 69, 11, 61, 49, 4, 75, 71, 74, 63, 23, 31, 51, 81, 51, 56, 9, 15};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2300;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 93;
    vector<int> x = {74, 6, 1, 52, 58, 13, 45, 70, 26, 46, 54, 31, 53, 9, 42, 5, 50, 65, 82, 42, 85, 35, 80, 85, 88, 46, 2, 83, 32, 68, 93, 90, 49, 49, 52, 18, 19, 69, 4, 47, 92, 53, 91, 37, 68, 53, 4, 43, 28, 43};
    vector<int> y = {89, 29, 88, 64, 40, 85, 14, 58, 34, 41, 63, 38, 71, 79, 83, 63, 90, 77, 38, 80, 60, 73, 63, 85, 22, 50, 67, 91, 7, 19, 70, 19, 16, 52, 7, 85, 21, 47, 52, 38, 52, 52, 25, 2, 34, 55, 1, 55, 40, 73};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2395;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 97;
    vector<int> x = {56, 76, 29, 14, 15, 61, 38, 11, 66, 60, 94, 1, 10, 4, 43, 49, 7, 94, 31, 88, 91, 70, 17, 29, 65, 96, 60, 61, 28, 64, 82, 32, 10, 3, 20, 93, 15, 52, 78, 32, 49, 69, 18, 7, 71, 59, 67, 28, 91, 91};
    vector<int> y = {66, 25, 82, 8, 75, 44, 94, 70, 51, 58, 77, 54, 55, 35, 30, 36, 18, 14, 17, 50, 1, 1, 73, 29, 20, 67, 63, 91, 30, 17, 3, 26, 15, 62, 7, 60, 91, 36, 44, 97, 58, 12, 91, 11, 42, 26, 1, 1, 34, 38};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2229;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 99;
    vector<int> x = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<int> y = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4900;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 100;
    vector<int> x = {50, 50, 51, 51, 51, 50, 50, 50, 51, 50, 51, 50, 50, 50, 51, 50, 51, 51, 50, 50, 50, 50, 50, 50, 51, 51, 50, 50, 50, 51, 50, 51, 51, 50, 51, 51, 50, 51, 50, 50, 51, 50, 51, 50, 51, 51, 51, 50, 50, 50};
    vector<int> y = {50, 51, 50, 51, 50, 50, 50, 51, 51, 51, 50, 51, 50, 51, 51, 50, 50, 50, 50, 51, 51, 51, 50, 50, 50, 51, 51, 50, 50, 51, 51, 51, 50, 50, 51, 50, 51, 51, 51, 51, 50, 51, 51, 51, 50, 50, 50, 50, 50, 50};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4900;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 100;
    vector<int> x = {51, 51, 51, 51, 50, 51, 50, 50, 50, 51, 51, 51, 50, 50, 50, 50, 51, 50, 50, 51, 50, 51, 50, 50, 50, 51, 50, 50, 51, 51, 51, 50, 50, 51, 51, 50, 51, 50, 51, 50, 50, 50, 50, 51, 50, 50, 51, 51, 50, 50};
    vector<int> y = {51, 50, 50, 50, 50, 51, 50, 50, 51, 51, 51, 50, 51, 51, 50, 50, 51, 50, 50, 51, 50, 50, 51, 51, 51, 50, 51, 50, 51, 50, 50, 51, 50, 51, 51, 50, 51, 51, 51, 50, 51, 50, 51, 51, 51, 50, 51, 51, 51, 50};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4900;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 7;
    vector<int> x = {7, 1, 7, 7, 1, 7, 1};
    vector<int> y = {7, 1, 1, 1, 1, 7, 7};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
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
    int n = 3;
    vector<int> x = {2, 2, 1, 3};
    vector<int> y = {2, 2, 3, 1};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 100;
    vector<int> x = {1, 99, 3, 7, 10};
    vector<int> y = {2, 88, 2, 8, 100};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 3;
    vector<int> x = {1};
    vector<int> y = {2};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 100;
    vector<int> x = {1, 56, 20, 81, 58, 48, 35, 89, 82, 74, 18, 86, 71, 51, 31, 2, 10, 37, 15, 17, 98, 45, 12, 1, 1, 38, 53, 57, 60, 61, 17, 66, 45, 35, 6, 61, 78, 80, 52, 30, 87, 72, 95, 92, 54, 15, 46, 24, 86, 21};
    vector<int> y = {1, 84, 99, 99, 61, 39, 27, 30, 84, 3, 38, 10, 68, 6, 1, 91, 28, 28, 59, 69, 83, 72, 49, 21, 74, 47, 46, 94, 74, 11, 60, 39, 73, 61, 57, 36, 16, 23, 43, 80, 52, 99, 75, 35, 17, 66, 49, 7, 70, 50};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2515;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 100;
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 13, 14, 15, 56, 7, 8, 99, 67, 56, 45, 32, 22, 33, 44, 55, 66, 77, 55, 44, 22, 88, 88, 66, 88, 99, 6, 55, 55, 55, 44, 2, 22, 78, 56, 45, 36, 46, 89, 99};
    vector<int> y = {4, 5, 6, 7, 8, 9, 4, 12, 12, 12, 34, 56, 78, 78, 99, 98, 97, 9, 78, 67, 89, 99, 88, 77, 66, 55, 44, 33, 4, 56, 7, 8, 98, 5, 4, 5, 6, 6, 4, 5, 77, 6, 7, 8, 5, 3, 4, 5, 6, 7};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1686;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 100;
    vector<int> x = {50};
    vector<int> y = {50};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 10;
    vector<int> x = {5, 7};
    vector<int> y = {2, 8};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 100;
    vector<int> x = {100, 99};
    vector<int> y = {100, 99};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 3;
    vector<int> x = {1};
    vector<int> y = {1};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
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
    int n = 4;
    vector<int> x = {4};
    vector<int> y = {3};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 10;
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 6;
    vector<int> x = {3};
    vector<int> y = {3};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 10;
    vector<int> x = {1, 1, 1, 1, 1};
    vector<int> y = {1, 1, 1, 1, 1};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
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
    int n = 10;
    vector<int> x = {9};
    vector<int> y = {3};
    TheSimpleGame* pObj = new TheSimpleGame();
    clock_t start = clock();
    int result = pObj->count(n, x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22626886&rd=13514&pm=9966
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
#include <complex>
#include <queue>
#include <ext/numeric>
 
using namespace std;
using namespace __gnu_cxx;
 
#define PB push_back
#define rep(i,X,n) for( int (i) = (X) ; (i)<(n) ; (i) ++)
#define repit(it,X,n) for(__typeof((X)) it = (X) ; (it) != (n) ; (it)++)
#define ALL(X) (X).begin(),(X).end()
 
 
class TheSimpleGame {
public:
  int count(int, vector <int>, vector <int>);
};
 
int TheSimpleGame::count(int n, vector <int> x, vector <int> y) {
  int res=0;
  rep(i,0,x.size())
    res+=min(abs(x[i]-1)+abs(y[i]-1),min(abs(x[i]-n)+abs(y[i]-1),min(abs(x[i]-1)+abs(y[i]-n),abs(x[i]-n)+abs(y[i]-n))));
  return res;
}
 
 
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/