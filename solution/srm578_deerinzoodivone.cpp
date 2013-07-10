/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12543
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

class DeerInZooDivOne {
public:
    int getmax(vector<int> a, vector<int> b);
};

int DeerInZooDivOne::getmax(vector<int> a, vector<int> b) {
    int ret;
    return ret;
}


int test0() {
    vector<int> a = {0, 1, 2};
    vector<int> b = {1, 2, 3};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
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
    vector<int> a = {2, 0, 4, 0};
    vector<int> b = {1, 2, 3, 3};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> a = {5, 8, 2, 6, 0, 4, 8, 7, 6};
    vector<int> b = {4, 9, 0, 7, 3, 1, 4, 4, 3};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
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
    vector<int> a = {5, 9, 11, 7, 11, 0, 1, 14, 4, 7, 10, 11, 9, 8};
    vector<int> b = {1, 8, 14, 3, 6, 6, 9, 13, 12, 2, 9, 4, 6, 7};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> a = {13, 0, 1, 10, 18, 13, 5, 11, 3, 11, 4, 1, 19, 16, 15, 16, 3, 17, 8};
    vector<int> b = {11, 8, 17, 7, 7, 9, 13, 0, 5, 12, 11, 14, 0, 7, 3, 19, 2, 11, 6};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> a = {21, 8, 8, 5, 7, 11, 9, 24, 12, 9, 5, 3, 17, 8, 22, 10, 11, 7, 8, 10, 1, 23, 18, 0};
    vector<int> b = {8, 15, 3, 23, 2, 4, 18, 9, 14, 16, 13, 12, 14, 1, 1, 19, 3, 12, 9, 20, 20, 1, 6, 2};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> a = {7, 0, 1, 13, 22, 3, 16, 21, 25, 21, 5, 5, 3, 20, 20, 19, 21, 1, 20, 1, 26, 25, 24, 12, 18, 21, 9, 29, 28};
    vector<int> b = {15, 13, 29, 15, 14, 8, 15, 24, 1, 27, 10, 12, 4, 21, 8, 26, 6, 20, 2, 26, 14, 17, 23, 21, 25, 13, 6, 11, 19};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> a = {22, 13, 24, 9, 31, 33, 25, 34, 7, 31, 7, 2, 24, 22, 8, 13, 10, 3, 8, 13, 18, 22, 6, 4, 6, 10, 23, 7, 12, 16, 21, 23, 33, 7};
    vector<int> b = {33, 20, 26, 25, 34, 15, 0, 27, 28, 29, 30, 13, 9, 11, 7, 32, 12, 34, 34, 0, 3, 31, 7, 5, 19, 1, 20, 14, 11, 28, 25, 4, 17, 21};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> a = {10, 16, 20, 29, 31, 20, 25, 15, 30, 30, 26, 31, 27, 33, 39, 2, 37, 5, 32, 39, 8, 31, 11, 35, 20, 4, 21, 11, 25, 11, 24, 17, 8, 30, 26, 16, 25, 39, 16};
    vector<int> b = {0, 30, 36, 24, 16, 12, 19, 28, 1, 14, 28, 22, 8, 18, 3, 34, 11, 18, 16, 7, 11, 0, 33, 37, 34, 6, 19, 12, 23, 31, 20, 27, 38, 13, 1, 9, 37, 12, 4};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> a = {41, 32, 38, 24, 21, 31, 42, 41, 38, 27, 10, 6, 2, 17, 17, 0, 35, 34, 37, 16, 30, 22, 0, 7, 30, 8, 3, 30, 11, 13, 12, 11, 23, 30, 43, 5, 18, 23, 8, 19, 37, 24, 8, 4};
    vector<int> b = {37, 39, 40, 38, 10, 20, 44, 20, 28, 44, 16, 1, 22, 9, 2, 23, 3, 32, 25, 22, 42, 36, 14, 44, 2, 41, 16, 32, 38, 43, 3, 16, 11, 29, 10, 27, 9, 20, 15, 2, 26, 6, 33, 16};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> a = {27, 15, 24, 46, 9, 7, 7, 37, 45, 26, 36, 14, 47, 15, 31, 13, 37, 47, 32, 42, 8, 26, 10, 17, 40, 49, 4, 4, 15, 4, 6, 35, 24, 28, 47, 43, 23, 23, 2, 48, 29, 41, 15, 8, 49, 41, 38, 7, 39};
    vector<int> b = {39, 2, 28, 16, 31, 6, 3, 21, 23, 33, 43, 20, 22, 30, 7, 8, 24, 12, 46, 41, 44, 3, 20, 2, 11, 23, 48, 29, 11, 27, 18, 26, 19, 46, 29, 33, 47, 0, 48, 21, 33, 1, 14, 32, 34, 39, 37, 5, 25};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> a = {28, 19, 5, 35, 5, 31, 42, 28, 33, 3, 9, 38, 20, 7, 1, 11, 26, 12, 17, 3, 46, 48, 8, 19, 21, 41, 16, 32, 43, 45, 42, 26, 24, 36, 37, 33, 7, 11, 29, 39, 24, 44, 22, 40, 18, 48, 1, 13, 15};
    vector<int> b = {27, 18, 4, 34, 6, 30, 43, 29, 32, 2, 10, 37, 21, 6, 0, 12, 27, 13, 16, 4, 47, 49, 9, 20, 22, 40, 15, 31, 44, 46, 41, 25, 23, 35, 36, 34, 8, 10, 30, 38, 25, 45, 23, 39, 17, 47, 2, 14, 14};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> a = {0, 0, 7, 19, 32, 0, 0, 29, 0, 0, 47, 14, 23, 0, 41, 0, 0, 0, 34, 0, 0, 0, 13, 0, 16, 30, 0, 4, 0, 0, 40, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 24, 0, 25, 0, 31};
    vector<int> b = {48, 12, 0, 0, 0, 49, 27, 0, 15, 5, 0, 0, 0, 11, 0, 39, 43, 1, 0, 9, 6, 45, 0, 8, 0, 0, 33, 0, 21, 38, 0, 0, 20, 17, 35, 26, 3, 22, 46, 18, 36, 0, 10, 44, 0, 2, 0, 37, 0};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> a = {0, 1, 2, 3, 4, 5, 6, 2, 8, 9, 6, 11, 12};
    vector<int> b = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> a = {1, 8, 1, 7, 4, 2, 5, 2};
    vector<int> b = {5, 3, 6, 8, 2, 6, 8, 0};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> a = {22, 22, 38, 38, 2, 44, 34, 0, 30, 23, 48, 37, 46, 7, 11, 26, 4, 14, 27, 6, 18, 25, 36, 47, 50, 13, 45, 16, 31, 41, 39, 42, 29, 3, 12, 10, 32, 28, 19, 15, 40, 20, 49, 43, 21, 35, 8, 17, 33, 5};
    vector<int> b = {9, 2, 24, 1, 44, 34, 0, 30, 23, 48, 37, 46, 7, 11, 26, 4, 14, 27, 6, 18, 25, 36, 47, 50, 13, 45, 16, 31, 41, 39, 42, 29, 3, 12, 10, 32, 28, 19, 15, 40, 20, 49, 43, 21, 35, 8, 17, 33, 5, 1};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> a = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 12, 22, 9, 18, 35, 17, 13, 3};
    vector<int> b = {31, 1, 4, 38, 33, 34, 37, 39, 45, 47, 29, 19, 28, 7, 5, 42, 20, 40, 24, 48, 12, 46, 8, 0, 11, 21, 25, 44, 10, 27, 32, 15, 49, 14, 43, 36, 16, 23, 26, 2, 41, 30, 22, 9, 18, 35, 17, 13, 3, 30};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> a = {0};
    vector<int> b = {1};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> a = {0, 11, 10, 10, 19, 17, 6, 17, 19, 10, 10, 11, 9, 9, 14, 2, 13, 11, 6};
    vector<int> b = {7, 5, 2, 12, 8, 9, 16, 8, 4, 18, 8, 13, 15, 13, 17, 16, 3, 1, 7};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> a = {14, 13, 28, 15, 20, 4, 9, 6, 1, 23, 19, 25, 25, 8, 14, 16, 2, 8, 15, 25, 22, 22, 28, 10, 10, 14, 24, 27, 8};
    vector<int> b = {21, 5, 12, 13, 27, 1, 24, 17, 27, 17, 23, 14, 18, 26, 7, 26, 11, 0, 25, 23, 3, 29, 22, 11, 22, 29, 15, 28, 29};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> a = {46, 7, 3, 35, 43, 40, 36, 18, 46, 49, 31, 48, 7, 6, 16, 23, 0, 19, 3, 21, 46, 38, 25, 17, 27, 36, 37, 34, 28, 47, 21, 31, 1, 31, 4, 21, 28, 10, 42, 30, 12, 14, 28, 10, 50, 9, 16, 45, 35, 32};
    vector<int> b = {26, 6, 38, 20, 30, 35, 20, 3, 11, 45, 46, 46, 15, 27, 20, 12, 2, 44, 22, 45, 24, 44, 28, 6, 22, 10, 21, 25, 37, 31, 15, 8, 27, 33, 29, 39, 9, 13, 1, 0, 5, 39, 2, 12, 46, 29, 50, 20, 41, 19};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> a = {47, 12, 33, 31, 32, 15, 27, 40, 5, 31, 11, 18, 24, 25, 13, 25, 10, 25, 2, 23, 30, 8, 10, 29, 26, 38, 23, 32, 6, 14, 18, 13, 39, 23, 33, 46, 4, 50, 36, 12, 16, 32, 43, 35, 26, 30, 39, 0, 22, 35};
    vector<int> b = {29, 29, 32, 7, 12, 32, 32, 10, 32, 42, 49, 31, 48, 16, 48, 41, 4, 3, 10, 47, 44, 41, 50, 14, 12, 19, 0, 39, 3, 17, 46, 10, 49, 19, 1, 34, 9, 32, 18, 20, 48, 28, 1, 25, 37, 45, 21, 42, 25, 44};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> a = {26, 12, 7, 21, 2, 35, 18, 47, 28, 8, 46, 12, 20, 42, 46, 15, 33, 45, 11, 48, 1, 48, 14, 48, 22, 45, 38, 32, 22, 30, 11, 24, 12, 9, 38, 4, 15, 29, 38, 11, 19, 7, 27, 49, 21, 21, 41, 19, 33, 27};
    vector<int> b = {11, 5, 49, 7, 24, 18, 50, 48, 7, 35, 17, 26, 44, 38, 16, 11, 50, 40, 29, 35, 13, 10, 48, 9, 23, 16, 31, 16, 29, 3, 46, 19, 39, 37, 9, 23, 1, 43, 21, 6, 36, 44, 30, 25, 0, 5, 30, 42, 34, 45};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> a = {25, 28, 22, 5, 6, 18, 33, 40, 16, 14, 24, 20, 42, 26, 44, 47, 27, 43, 4, 40, 36, 38, 11, 22, 7, 44, 28, 22, 2, 29, 1, 29, 24, 47, 35, 49, 31, 5, 3, 19, 41, 43, 8, 50, 9, 10, 15, 6, 9, 43};
    vector<int> b = {33, 46, 10, 39, 11, 20, 22, 33, 38, 40, 49, 38, 19, 50, 20, 21, 24, 10, 20, 48, 21, 17, 0, 38, 26, 30, 15, 12, 28, 25, 30, 45, 37, 34, 28, 18, 3, 2, 16, 50, 16, 5, 11, 14, 0, 23, 32, 13, 10, 47};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> a = {24, 27, 13, 1, 47, 27, 0, 36, 20, 0, 1, 19, 38, 35, 29, 28, 43, 2, 23, 40, 20, 5, 45, 29, 30, 39, 49, 37, 26, 19, 28, 22, 42, 5, 1, 43, 32, 26, 20, 40, 39, 41, 10, 42, 18, 38, 4, 17, 24, 18};
    vector<int> b = {42, 12, 49, 14, 43, 11, 31, 20, 4, 22, 10, 7, 34, 15, 50, 8, 13, 34, 33, 16, 6, 21, 38, 12, 5, 2, 26, 5, 44, 25, 21, 29, 0, 25, 40, 46, 17, 20, 1, 5, 28, 38, 9, 15, 26, 33, 0, 5, 48, 3};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> a = {4, 2, 27, 11, 41, 29, 25, 14, 45, 39, 20, 20, 17, 37, 0, 34, 14, 29, 19, 25, 11, 0, 18, 30, 32, 23, 8, 24, 15, 44, 16, 30, 42, 26, 13, 35, 44, 44, 31, 9, 28, 49, 33, 22, 23, 37, 33, 26, 27, 43};
    vector<int> b = {2, 40, 41, 46, 48, 30, 49, 5, 35, 3, 13, 17, 36, 7, 37, 11, 36, 26, 18, 41, 10, 42, 22, 17, 35, 1, 28, 43, 19, 0, 40, 40, 10, 42, 50, 29, 21, 3, 46, 23, 2, 43, 6, 1, 10, 38, 24, 25, 47, 12};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> a = {14, 44, 17, 47, 32, 3, 20, 46, 40, 0, 14, 2, 17, 12, 24, 13, 39, 36, 35, 28, 23, 14, 17, 17, 30, 22, 48, 45, 10, 49, 46, 47, 7, 19, 24, 7, 10, 42, 43, 29, 26, 9, 3, 29, 26, 18, 4, 22, 41, 31};
    vector<int> b = {41, 34, 14, 20, 11, 46, 21, 40, 47, 18, 25, 14, 18, 20, 47, 36, 27, 38, 16, 50, 37, 6, 34, 11, 9, 41, 40, 30, 22, 16, 23, 8, 43, 24, 4, 27, 50, 46, 1, 4, 15, 33, 5, 27, 4, 38, 44, 45, 16, 17};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> a = {8, 21, 42, 41, 26, 45, 39, 7, 9, 13, 35, 23, 45, 26, 0, 43, 0, 41, 15, 31, 13, 4, 0, 25, 38, 5, 16, 11, 42, 38, 12, 42, 45, 5, 25, 15, 16, 28, 34, 0, 6, 48, 38, 30, 20, 2, 31, 16, 33, 43};
    vector<int> b = {3, 8, 18, 22, 47, 16, 25, 37, 50, 14, 36, 6, 41, 27, 37, 44, 10, 28, 28, 43, 38, 0, 5, 4, 17, 17, 29, 18, 48, 31, 46, 12, 32, 40, 2, 3, 1, 48, 26, 49, 16, 19, 42, 47, 43, 50, 34, 24, 17, 36};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> a = {31, 15, 5, 15, 29, 23, 0, 46, 8, 24, 41, 35, 47, 43, 47, 26, 16, 30, 21, 26, 23, 10, 5, 35, 50, 48, 25, 48, 40, 3, 4, 10, 28, 39, 50, 44, 2, 7, 31, 12, 3, 47, 22, 50, 49, 22, 25, 45, 40, 19};
    vector<int> b = {17, 14, 14, 1, 6, 46, 34, 20, 38, 30, 42, 33, 23, 29, 41, 8, 35, 48, 27, 17, 36, 6, 37, 45, 33, 20, 17, 13, 46, 5, 42, 22, 10, 23, 18, 45, 27, 48, 49, 22, 42, 31, 11, 41, 0, 32, 9, 28, 19, 27};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> a = {40, 7, 33, 24, 6, 15, 26, 18, 12, 34, 39, 43, 44, 21, 0, 49, 8, 13, 16, 41, 11, 4, 48, 42, 42, 18, 14, 38, 13, 25, 47, 43, 45, 12, 15, 23, 31, 35, 40, 35, 22, 41, 2, 22, 42, 28, 27, 12, 35, 19};
    vector<int> b = {7, 29, 22, 8, 21, 20, 30, 49, 50, 45, 8, 12, 43, 32, 34, 13, 47, 37, 41, 1, 48, 8, 46, 26, 22, 3, 26, 47, 33, 21, 41, 17, 1, 9, 29, 48, 32, 5, 41, 11, 10, 36, 48, 40, 5, 32, 10, 27, 32, 50};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> a = {41, 9, 36, 50, 21, 9, 18, 15, 48, 30, 42, 14, 44, 12, 34, 3, 27, 47, 20, 17, 25, 30, 3, 29, 21, 24, 33, 17, 25, 43, 32, 1, 7, 23, 40, 37, 38, 13, 1, 48, 4, 7, 36, 27, 46, 41, 10, 6, 34, 12};
    vector<int> b = {42, 8, 35, 49, 20, 10, 19, 16, 49, 29, 43, 15, 45, 13, 33, 2, 26, 46, 19, 18, 26, 31, 4, 28, 22, 23, 32, 16, 24, 44, 31, 2, 8, 22, 39, 38, 39, 14, 0, 47, 5, 6, 37, 28, 45, 40, 11, 5, 35, 11};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> a = {0, 0, 0, 19, 0, 0, 38, 0, 40, 15, 26, 0, 0, 0, 0, 10, 0, 0, 46, 25, 0, 0, 0, 0, 44, 0, 49, 0, 22, 0, 0, 0, 0, 0, 0, 0, 30, 0, 27, 0, 13, 0, 0, 2, 0, 0, 3, 0, 0, 37};
    vector<int> b = {32, 8, 45, 0, 14, 20, 0, 36, 0, 0, 0, 16, 1, 50, 33, 0, 43, 31, 0, 0, 47, 5, 9, 11, 0, 35, 0, 23, 0, 18, 34, 4, 48, 39, 12, 17, 0, 42, 0, 7, 0, 29, 28, 0, 24, 21, 0, 41, 6, 0};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> a = {40, 39, 29, 8, 18, 7, 13, 10, 4, 9, 25, 34, 45, 7, 4, 47, 44, 16, 26, 1, 39, 34, 2, 24, 22, 11, 8, 49, 38, 48, 34, 12, 0, 30, 31, 14, 23, 28, 37, 3, 24, 31, 41, 31, 41, 35, 6, 1, 47, 43};
    vector<int> b = {30, 6, 1, 19, 40, 36, 31, 34, 5, 16, 28, 6, 29, 50, 15, 27, 30, 32, 49, 32, 17, 32, 3, 25, 25, 16, 3, 0, 2, 25, 28, 30, 5, 31, 7, 11, 32, 21, 16, 29, 42, 34, 46, 33, 11, 20, 0, 35, 16, 6};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> a = {13, 25, 38, 14, 33, 49, 9, 46, 5, 34, 21, 7, 39, 30, 32, 6, 11, 2, 50, 20, 46, 28, 50, 28, 49, 43, 47, 33, 21, 15, 40, 28, 4, 28, 26, 24, 42, 10, 8, 23, 35, 31, 32, 34, 19, 22, 26, 26, 36, 5};
    vector<int> b = {25, 27, 18, 1, 48, 39, 49, 28, 17, 28, 44, 33, 14, 46, 0, 27, 15, 16, 14, 5, 12, 32, 2, 33, 45, 45, 12, 3, 28, 37, 32, 15, 43, 14, 28, 30, 19, 25, 12, 32, 28, 26, 25, 29, 46, 28, 38, 41, 15, 32};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> a = {21, 14, 4, 7, 50, 0, 45, 30, 32, 46, 37, 3, 19, 43, 46, 44, 31, 29, 26, 8, 23, 2, 41, 33, 48, 4, 48, 24, 17, 49, 35, 36, 15, 35, 33, 8, 27, 40, 6, 15, 12, 20, 24, 40, 33, 49, 10, 10, 5, 8};
    vector<int> b = {50, 40, 11, 42, 8, 15, 34, 36, 45, 4, 18, 0, 22, 18, 22, 43, 18, 33, 18, 15, 11, 45, 12, 26, 13, 43, 26, 39, 11, 9, 18, 23, 43, 5, 1, 16, 34, 26, 17, 45, 35, 18, 46, 47, 25, 7, 42, 8, 38, 28};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> a = {48, 25, 32, 41, 42, 3, 8, 20, 23, 15, 43, 47, 31, 6, 50, 13, 15, 27, 29, 23, 35, 24, 29, 32, 39, 2, 9, 0, 18, 46, 39, 40, 5, 49, 0, 49, 14, 9, 15, 39, 25, 50, 30, 20, 28, 2, 8, 18, 0, 21};
    vector<int> b = {31, 39, 29, 44, 2, 7, 0, 34, 33, 30, 25, 35, 29, 44, 2, 48, 17, 25, 38, 7, 49, 8, 6, 11, 22, 10, 19, 37, 2, 11, 26, 43, 45, 1, 4, 36, 16, 31, 7, 50, 45, 30, 31, 15, 22, 35, 16, 12, 18, 22};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> a = {14, 42, 34, 39, 1, 26, 31, 40, 7, 16, 6, 2, 49, 27, 9, 9, 24, 22, 2, 40, 3, 48, 40, 9, 18, 49, 29, 6, 29, 41, 2, 31, 0, 39, 3, 16, 18, 18, 40, 17, 19, 21, 11, 29, 15, 32, 22, 46, 37, 15};
    vector<int> b = {7, 30, 47, 48, 44, 31, 13, 18, 40, 25, 2, 43, 23, 30, 50, 18, 27, 44, 5, 10, 49, 45, 6, 35, 20, 36, 3, 21, 41, 4, 38, 50, 7, 7, 14, 34, 28, 12, 16, 2, 29, 8, 3, 30, 39, 6, 49, 18, 9, 33};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> a = {26, 7, 24, 19, 46, 29, 9, 45, 32, 6, 2, 43, 49, 2, 14, 31, 2, 12, 47, 40, 16, 2, 42, 46, 45, 33, 37, 42, 47, 17, 10, 16, 41, 46, 31, 41, 49, 0, 42, 11, 14, 38, 0, 19, 37, 33, 10, 39, 25, 46};
    vector<int> b = {27, 13, 16, 36, 1, 6, 41, 4, 47, 30, 48, 3, 4, 26, 45, 5, 24, 35, 7, 14, 29, 44, 34, 8, 42, 15, 20, 46, 21, 43, 42, 50, 23, 22, 46, 10, 28, 18, 47, 8, 35, 14, 44, 44, 10, 45, 3, 41, 43, 24};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> a = {35, 13, 46, 17, 28, 44, 22, 16, 43, 2, 45, 20, 9, 48, 40, 35, 19, 6, 49, 34, 42, 14, 8, 31, 37, 32, 29, 49, 15, 13, 41, 29, 20, 33, 22, 27, 12, 1, 3, 25, 4, 41, 31, 21, 22, 21, 25, 32, 27, 42};
    vector<int> b = {22, 46, 50, 45, 27, 10, 27, 28, 22, 16, 38, 17, 10, 11, 20, 30, 27, 22, 38, 35, 48, 20, 36, 33, 27, 49, 17, 22, 0, 18, 39, 7, 0, 23, 41, 5, 42, 6, 42, 0, 42, 46, 8, 47, 33, 46, 26, 24, 10, 27};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> a = {48, 28, 30, 50, 40, 23, 30, 45, 8, 43, 21, 28, 15, 49, 40, 42, 31, 36, 14, 34, 39, 40, 20, 28, 32, 45, 21, 32, 45, 1, 46, 27, 20, 31, 0, 33, 28, 49, 46, 26, 13, 3, 8, 26, 9, 11, 40, 31, 4, 9};
    vector<int> b = {5, 24, 25, 30, 48, 12, 20, 28, 10, 38, 5, 8, 20, 23, 16, 44, 28, 43, 8, 25, 17, 49, 39, 38, 42, 6, 2, 23, 19, 47, 1, 9, 7, 3, 25, 49, 18, 20, 23, 22, 8, 35, 29, 40, 41, 25, 28, 37, 5, 24};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> a = {18, 44, 8, 32, 49, 18, 38, 18, 18, 19, 8, 39, 39, 6, 18, 46, 5, 28, 22, 29, 5, 7, 27, 5, 2, 23, 28, 1, 21, 44, 28, 49, 7, 32, 21, 36, 8, 34, 7, 48, 6, 31, 26, 47, 15, 2, 10, 35, 7, 18};
    vector<int> b = {33, 32, 42, 25, 41, 15, 10, 27, 24, 6, 15, 50, 44, 8, 4, 12, 26, 3, 34, 24, 17, 13, 9, 50, 10, 45, 40, 4, 16, 20, 11, 27, 30, 40, 3, 15, 46, 10, 27, 26, 37, 20, 43, 23, 32, 0, 15, 0, 14, 47};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> a = {47, 2, 21, 2, 23, 34, 4, 36, 38, 36, 26, 6, 14, 25, 24, 25, 44, 36, 47, 3, 32, 15, 26, 42, 12, 37, 43, 38, 47, 2, 20, 30, 49, 27, 23, 1, 6, 30, 22, 1, 50, 35, 23, 16, 25, 35, 16, 14, 4, 19};
    vector<int> b = {13, 5, 25, 0, 4, 23, 10, 7, 33, 41, 45, 34, 8, 44, 34, 40, 36, 31, 30, 6, 4, 4, 23, 2, 26, 10, 1, 4, 18, 17, 35, 29, 15, 23, 2, 0, 39, 2, 26, 9, 10, 11, 44, 28, 46, 15, 50, 4, 48, 33};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> a = {20, 9, 13, 24, 10, 13, 8, 9, 14, 8, 7, 17, 18, 9, 6, 23, 24, 21, 6, 13, 19, 6, 14, 7};
    vector<int> b = {24, 11, 3, 15, 5, 9, 12, 6, 17, 5, 13, 16, 4, 18, 8, 24, 7, 1, 2, 14, 22, 21, 22, 0};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> a = {9, 5, 0, 19, 11, 13, 22, 23, 14, 20, 17, 4, 13, 27, 26, 8, 10, 4, 1, 13, 14, 13, 28, 22, 13, 2, 18, 10};
    vector<int> b = {4, 7, 6, 6, 3, 5, 13, 26, 21, 18, 2, 3, 2, 19, 19, 4, 24, 21, 8, 15, 2, 10, 2, 16, 18, 19, 12, 25};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> a = {1, 1};
    vector<int> b = {0, 2};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> a = {17, 15, 0, 14, 25, 6, 16, 12, 2, 16, 23, 9, 7, 21, 16, 2, 12, 21, 13, 15, 12, 26, 4, 9, 18, 15};
    vector<int> b = {6, 1, 14, 11, 14, 23, 12, 10, 26, 6, 15, 13, 12, 12, 22, 24, 20, 19, 7, 8, 11, 20, 6, 3, 3, 5};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> a = {0, 12, 26, 1, 39, 41, 23, 41, 34, 26, 1, 13, 25, 29, 34, 18, 37, 4, 32, 36, 17, 11, 9, 20, 8, 31, 16, 24, 31, 35, 30, 40, 21, 41, 27, 33, 25, 17, 25, 38, 19, 2, 24};
    vector<int> b = {35, 26, 3, 10, 10, 6, 29, 37, 15, 16, 4, 7, 42, 25, 6, 35, 31, 40, 24, 13, 28, 37, 4, 33, 22, 40, 22, 5, 22, 31, 43, 36, 41, 17, 43, 17, 14, 27, 26, 37, 31, 11, 40};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> a = {4, 6, 1, 4, 3, 2};
    vector<int> b = {5, 4, 4, 0, 4, 6};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> a = {17, 4, 11, 11, 12, 10, 9, 5, 16, 1, 2, 2, 13, 4, 7, 12, 18, 4};
    vector<int> b = {1, 8, 0, 1, 18, 0, 8, 15, 12, 6, 3, 14, 11, 11, 12, 11, 15, 2};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> a = {3, 6, 3, 0, 3, 4};
    vector<int> b = {5, 5, 0, 4, 2, 1};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> a = {18, 31, 9, 47, 40, 42, 12, 38, 16, 3, 21, 5, 43, 37, 33, 45, 27, 31, 40, 15, 4, 27, 20, 21, 5, 0, 19, 46, 8, 25, 10, 27, 28, 32, 8, 1, 31, 4, 11, 25, 5, 44, 43, 37, 3, 8, 17};
    vector<int> b = {25, 0, 33, 9, 2, 37, 22, 40, 45, 12, 9, 25, 23, 6, 43, 36, 13, 35, 39, 24, 40, 0, 11, 7, 3, 29, 37, 19, 5, 34, 3, 41, 46, 31, 45, 43, 3, 32, 25, 14, 43, 45, 26, 30, 37, 15, 3};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> a = {33, 43, 27, 25, 27, 37, 30, 10, 19, 11, 7, 17, 2, 40, 13, 30, 19, 4, 14, 3, 28, 39, 14, 42, 8, 39, 11, 39, 48, 0, 2, 23, 11, 34, 47, 29, 5, 47, 14, 9, 17, 16, 25, 17, 31, 33, 23, 15, 1};
    vector<int> b = {3, 0, 45, 19, 28, 44, 7, 12, 42, 42, 46, 15, 24, 7, 23, 10, 10, 49, 25, 15, 7, 37, 16, 20, 2, 19, 21, 38, 38, 22, 47, 41, 43, 6, 15, 10, 34, 49, 34, 23, 25, 26, 36, 32, 5, 18, 25, 35, 2};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> a = {4, 13, 39, 40, 39, 4, 47, 2, 7, 32, 50, 3, 18, 0, 41, 42, 7, 24, 18, 0, 25, 47, 33, 50, 29, 6, 35, 15, 28, 30, 22, 37, 19, 34, 29, 9, 41, 17, 46, 4, 38, 35, 46, 16, 10, 43, 34, 13, 8, 20};
    vector<int> b = {9, 49, 26, 5, 49, 2, 3, 21, 12, 1, 14, 44, 48, 23, 42, 14, 25, 18, 44, 6, 43, 49, 18, 38, 10, 34, 47, 19, 34, 23, 5, 11, 41, 32, 40, 48, 8, 46, 36, 42, 27, 37, 45, 28, 0, 30, 31, 40, 36, 17};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> a = {36, 30, 15, 25, 3, 26, 39, 20, 24, 4, 22, 40, 9, 5, 9, 17, 44, 27, 12, 26, 1, 45, 11, 28, 36, 42, 44, 24, 3, 17, 6, 19, 27, 9, 30, 10, 20, 30, 45, 32, 33, 26, 13, 21, 40, 4, 13, 18, 45, 4};
    vector<int> b = {23, 8, 11, 7, 10, 28, 35, 5, 37, 49, 2, 25, 0, 33, 1, 25, 16, 49, 15, 10, 50, 31, 14, 46, 43, 32, 19, 28, 34, 29, 15, 27, 17, 48, 48, 47, 32, 22, 12, 41, 30, 38, 4, 0, 18, 37, 36, 42, 2, 35};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> a = {44, 49, 3, 8, 19, 1, 14, 33, 24, 17, 31, 42, 47, 18, 15, 5, 14, 44, 35, 12, 34, 3, 18, 39, 18, 7, 23, 5, 42, 25, 40, 26, 10, 28, 17, 46, 27, 38, 10, 20, 15, 37, 43, 17, 48, 32, 26, 36, 50, 23};
    vector<int> b = {20, 44, 4, 11, 8, 47, 46, 46, 26, 22, 7, 30, 0, 21, 26, 47, 45, 34, 44, 3, 7, 8, 27, 44, 1, 2, 16, 28, 13, 15, 4, 50, 41, 2, 30, 49, 6, 6, 17, 48, 47, 16, 11, 14, 9, 49, 29, 25, 11, 12};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> a = {47, 3, 14, 25, 11, 46, 13, 13, 50, 16, 44, 50, 38, 19, 17, 31, 17, 41, 0, 36, 47, 7, 5, 44, 12, 25, 39, 15, 33, 1, 9, 39, 44, 27, 21, 30, 18, 35, 43, 37, 22, 6, 9, 15, 1, 21, 17, 32, 24, 49};
    vector<int> b = {4, 13, 6, 40, 12, 20, 28, 10, 13, 42, 2, 11, 28, 1, 48, 3, 20, 44, 42, 38, 26, 35, 2, 8, 33, 39, 45, 22, 25, 10, 27, 24, 18, 17, 35, 18, 0, 0, 15, 3, 7, 9, 34, 9, 29, 23, 47, 26, 44, 6};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> a = {7, 2, 46, 17, 45, 6, 28, 23, 23, 7, 35, 27, 13, 23, 41, 15, 15, 39, 29, 28, 19, 21, 9, 12, 42, 26, 12, 18, 49, 4, 40, 26, 36, 11, 24, 25, 49, 45, 6, 31, 30, 48, 14, 32, 44, 30, 19, 49, 47, 14};
    vector<int> b = {11, 39, 27, 43, 10, 39, 11, 42, 50, 25, 20, 3, 50, 5, 44, 8, 3, 35, 47, 34, 32, 12, 37, 48, 24, 17, 0, 27, 44, 1, 17, 35, 21, 5, 33, 49, 38, 1, 22, 40, 33, 40, 24, 18, 3, 20, 16, 10, 48, 9};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> a = {32, 49, 1, 6, 49, 49, 0, 48, 48, 30, 48, 49, 49, 49, 7, 40, 5, 12, 48, 22, 49, 39, 49, 48, 49, 49, 49, 37, 18, 48, 11, 49, 49, 9, 4, 2, 42, 48, 49, 8, 48, 19, 48, 36, 27, 46, 49, 48, 20};
    vector<int> b = {49, 34, 48, 48, 31, 28, 48, 16, 23, 49, 10, 43, 25, 29, 48, 49, 48, 48, 13, 48, 45, 49, 47, 3, 44, 26, 35, 49, 48, 49, 48, 24, 33, 48, 48, 48, 49, 21, 41, 48, 14, 48, 15, 49, 49, 49, 38, 17, 48};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> a = {49, 48, 49, 49, 49, 48, 34, 48, 44, 48, 49, 49, 48, 48, 8, 49, 32, 19, 3, 48, 48, 48, 48, 50, 49, 48, 49, 48, 48, 49, 48, 48, 49, 27, 49, 9, 49, 25, 48, 49, 7, 49, 48, 45, 49, 15, 30, 49, 17, 1};
    vector<int> b = {39, 5, 43, 47, 37, 6, 49, 0, 49, 22, 36, 29, 10, 21, 48, 31, 49, 48, 48, 2, 18, 14, 23, 49, 35, 16, 42, 12, 11, 41, 4, 20, 26, 49, 40, 48, 46, 49, 50, 33, 48, 24, 13, 49, 28, 48, 49, 38, 48, 48};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> a = {41, 34, 1, 40, 41, 28, 40, 40, 23, 41, 40, 44, 41, 29, 7, 42, 5, 40, 13, 41, 41, 41, 48, 40, 45, 41, 35, 37, 40, 50, 40, 41, 33, 9, 4, 2, 43, 41, 43, 40, 14, 40, 15, 36, 27, 47, 41, 17, 20, 47};
    vector<int> b = {32, 41, 40, 6, 31, 41, 0, 16, 41, 30, 10, 45, 25, 41, 40, 40, 40, 12, 40, 22, 50, 39, 49, 3, 46, 26, 41, 41, 18, 49, 11, 24, 41, 40, 40, 40, 44, 21, 42, 8, 40, 19, 40, 41, 41, 48, 38, 40, 41, 46};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> a = {0, 1, 2, 2, 0, 2, 2, 6, 8, 9, 6, 5, 11, 6, 12, 7, 6, 7, 8, 12, 18, 7, 7, 5, 10, 25, 6, 2, 1, 25, 6, 18, 11, 21, 15, 9, 31, 27, 27, 21, 11, 14, 3, 12, 20, 37, 11, 43, 34};
    vector<int> b = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    DeerInZooDivOne* pObj = new DeerInZooDivOne();
    clock_t start = clock();
    int result = pObj->getmax(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22694621&rd=15498&pm=12543
********************************************************************************
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <utility>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
 
#define ALL(c) (c).begin(), (c).end()
#define FOR(i, n) for (int i = 0; i < (int)(n); ++i)
#define FOREACH(i, n) for (__typeof(n.begin()) i = n.begin(); i != n.end(); ++i)
#define MEMSET(p, c) memset(p, c, sizeof(p))
typedef long long llint;
typedef pair<int, int> PII;
#ifndef __WATASHI__
#define errf(fmt, ...) do { } while (false)
#endif
 
struct DeerInZooDivOne {
  int getmax(vector <int> a, vector <int> b);
};
 
const int MAXN = 54;
 
vector<int> e[MAXN];
int dp[MAXN][MAXN];
 
int parent[MAXN];
vector<int> child[MAXN];
vector<int> treea, treeb;
 
template<int MAXN, typename S>
struct MinCostMaxFlow {
  struct NegativeCostCircuitExistsException {
  };
 
  struct Edge {
    int v;
    bool c;
    S w;
    int b;
    Edge(int v, bool c, S w, int b) : v(v), c(c), w(w), b(b) { }
  };
 
  int n, source, sink;
  vector<Edge> e[MAXN];
 
  void init(int n, int source, int sink) {
    this->n = n;
    this->source = source;
    this->sink = sink;
    for (int i = 0; i < n; ++i) {
      e[i].clear();
    }
  }
 
  void addEdge(int a, int b, S w) {
    e[a].push_back(Edge(b, true, w, e[b].size()));
    e[b].push_back(Edge(a, false, -w, e[a].size() - 1));  // TODO
  }
 
  bool mark[MAXN];
  S minw[MAXN];
  int dist[MAXN];
  Edge* prev[MAXN];
 
  bool _spfa() {
    queue<int> q;
    fill(mark, mark + n, false);
    fill(minw, minw + n, numeric_limits<S>::max());
    fill(dist, dist + n, 0);
    fill(prev, prev + n, (Edge*)NULL);
    mark[source] = true;
    minw[source] = 0;
 
    q.push(source);
    while (!q.empty()) {
      int cur = q.front();
      mark[cur] = false;
      q.pop();
      for (typename vector<Edge>::iterator it = e[cur].begin(); it != e[cur].end(); ++it) {
        if (!it->c) {
          continue;
        }
        int v = it->v;
        S w = minw[cur] + it->w;
        if (minw[v] > w) { // TODO
          minw[v] = w;
          dist[v] = dist[cur] + 1;
          if (dist[v] >= n) {
            return false;
          }
          prev[v] = &*it;
          if (!mark[v]) {
            mark[v] = true;
            q.push(v);
          }
        }
      }
    }
    return true;
  }
 
  pair<int, S> gao() {
    int sumc = 0;
    S sumw = 0;
    while (true) {
      if (!_spfa()) {
        throw NegativeCostCircuitExistsException();
      } else if (minw[sink] == numeric_limits<S>::max()) {
        break;
      } else {
        ++sumc;
        sumw += minw[sink];
 
        int cur = sink;
        while (cur != source) {
          Edge* e1 = prev[cur];
          e1->c = false;
          Edge* e2 = &e[e1->v][e1->b];
          e2->c = true;
          cur = e2->v;
        }
      }
    }
    return make_pair(sumc, sumw);
  }
};
 
MinCostMaxFlow<MAXN, int> mcmf;
 
int gao(int a, int b) {
  int& ret = dp[a][b];
  if (ret == -1) {
    if (child[a].empty() || child[b].empty()) {
      ret = 1;
    } else {
      int na = child[a].size();
      int nb = child[b].size();
      vector<vector<int> > w(na, vector<int>(nb));
      FOR (i, na) {
        FOR (j, nb) {
          w[i][j] = gao(child[a][i], child[b][j]);
        }
      }
      int s = na + nb;
      int t = s + 1;
      mcmf.init(t + 1, s, t);
      FOR (i, na) {
        mcmf.addEdge(s, i, 0);
      }
      FOR (i, nb) {
        mcmf.addEdge(na + i, t, 0);
      }
      FOR (i, na) {
        FOR (j, nb) {
          mcmf.addEdge(i, na + j, -w[i][j]);
        }
      }
      ret = 1 - mcmf.gao().second;
    }
  }
  return ret;
}
 
void dfs(int v, int p, vector<int>& tree) {
  parent[v] = p;
  child[v].clear();
  tree.push_back(v);
  FOREACH (w, e[v]) {
    if (*w != p) {
      child[v].push_back(*w);
      dfs(*w, v, tree);
    }
  }
}
 
int DeerInZooDivOne::getmax(vector <int> a, vector <int> b) {
  int n = a.size() + 1;
  int ans = 1;
 
  // 50
  FOR (i, a.size()) {
    FOR (j, n) {
      e[j].clear();
    }
    FOR (j, a.size()) {
      if (i != j) {
        e[a[j]].push_back(b[j]);
        e[b[j]].push_back(a[j]);
      }
    }
    treea.clear();
    dfs(a[i], -1, treea);
    treeb.clear();
    dfs(b[i], -1, treeb);
    if (treea.size() < treeb.size()) {
      treea.swap(treeb);
    }
    if ((int)treeb.size() <= ans) {
      continue;
    }
 
    // 25
    FOR (j, treeb.size()) {
      vector<int> dummy;
      dfs(treeb[j], -1, dummy);
      MEMSET(dp, 0xff);
      FOREACH (u, treea) {
        FOREACH (v, treeb) {
          ans = max(ans, gao(*u, *v));
        }
      }
    }
  }
 
  return ans;
}
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/