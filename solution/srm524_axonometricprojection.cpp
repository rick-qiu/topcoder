/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11608
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

class AxonometricProjection {
public:
    int howManyWays(vector<int> heightsOfLeftView, vector<int> heightsOfFrontView);
};

int AxonometricProjection::howManyWays(vector<int> heightsOfLeftView, vector<int> heightsOfFrontView) {
    int ret;
    return ret;
}


int test0() {
    vector<int> heightsOfLeftView = {1, 1};
    vector<int> heightsOfFrontView = {1, 1};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> heightsOfLeftView = {50, 50, 50, 50, 524};
    vector<int> heightsOfFrontView = {524, 524};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 104060401;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> heightsOfLeftView = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> heightsOfFrontView = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {5, 2, 4, 1};
    vector<int> heightsOfFrontView = {5, 2, 4, 0, 1};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 429287;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> heightsOfLeftView = {5, 2, 4, 52, 24, 524};
    vector<int> heightsOfFrontView = {0, 4, 20, 24, 500, 504, 520, 524};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 97065655;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> heightsOfLeftView = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> heightsOfFrontView = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 592748810;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> heightsOfLeftView = {0, 2, 9, 4, 2, 5, 9, 5, 9, 4, 4, 1, 2, 4, 3, 3, 5, 7, 4, 7, 9, 10, 6, 7, 0, 5, 10, 7, 7, 0, 4, 10, 1, 6, 10, 2, 2, 7, 7};
    vector<int> heightsOfFrontView = {7, 3, 0, 4, 0, 9, 10, 10, 6, 5, 6, 6, 6, 2, 10, 6, 8, 1, 8, 6, 7, 1, 10, 8, 6, 2, 6, 4, 1, 2, 6, 7, 1, 1, 3};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 294068937;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> heightsOfLeftView = {10, 6, 10, 6, 0, 6, 10, 6, 10, 4, 4, 1, 10, 6, 9, 9, 4, 1, 4, 0, 3, 4, 1, 4, 9, 4, 4, 2, 4, 0, 2, 10, 3, 2, 5, 4, 5, 6, 5, 6};
    vector<int> heightsOfFrontView = {10, 1, 8, 9, 9, 8, 0, 3, 2, 3, 5, 8, 9, 2, 1, 6, 7, 7, 3, 10, 6, 4, 9, 10, 5, 2, 8, 2, 6, 2, 9, 10, 7, 2, 5, 5, 0, 3, 3, 6, 4, 6, 3, 7, 0, 6, 4, 3};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 992821094;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> heightsOfLeftView = {6, 10, 10, 8, 2, 6, 4, 4, 3, 4, 8, 0, 6, 6, 4, 6, 3, 7, 7, 5, 10, 7, 1, 0, 3, 3, 9, 1, 8};
    vector<int> heightsOfFrontView = {7, 9, 0, 9, 9, 0, 6, 0, 1, 7, 4, 6, 6, 7, 8, 4, 7, 6, 3, 0, 3, 10, 2, 10, 2, 1, 0, 7, 1, 8, 8, 10, 8, 8, 5, 5, 1, 1, 9, 5, 3};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 924671600;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> heightsOfLeftView = {0, 9, 10, 9, 10, 6, 2, 1, 5, 0, 8, 5, 1};
    vector<int> heightsOfFrontView = {6, 6, 3, 2, 7, 9, 5, 0, 10, 9, 2, 8, 6, 8, 6, 10, 10, 1, 0, 10, 1, 7, 7, 2, 7, 7, 7, 2, 8, 2, 1, 10, 8, 0, 3, 8, 1, 2, 5, 8, 8, 6, 0};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 76356972;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> heightsOfLeftView = {9, 4, 9, 10, 0, 1, 3, 4};
    vector<int> heightsOfFrontView = {10, 9, 6, 8, 3, 10, 7};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 845010484;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> heightsOfLeftView = {10, 3, 8, 10, 5, 7, 3, 5, 4, 6, 9, 9, 2, 1, 8, 8, 1, 7, 2, 8, 4, 8, 3, 6, 0, 0, 2, 2, 0, 8};
    vector<int> heightsOfFrontView = {0, 6, 4, 2, 4, 8, 9, 9, 7, 6, 7, 3, 5, 1};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {1, 3, 8, 9, 3, 6, 4, 1, 1, 4, 5, 10, 9, 0, 5, 7, 7, 2, 5, 8, 4, 0, 1, 8, 9, 8, 2, 8, 9, 10, 6, 3, 3, 9, 3, 2, 10, 6, 5, 7, 5, 2, 6, 5, 10};
    vector<int> heightsOfFrontView = {8, 1, 5, 1, 7, 6, 2, 3, 4, 9, 7, 6, 2, 2, 9, 1, 9, 1, 6, 8, 6, 10, 9, 1, 0, 4, 0, 9, 6, 9, 10, 5, 2, 4, 8, 6, 6};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 627240308;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> heightsOfLeftView = {3, 3, 1, 10, 2, 6, 5, 7, 9, 5, 10, 5, 9, 2};
    vector<int> heightsOfFrontView = {10, 5, 1, 7, 8, 10, 7, 4, 0, 0, 5, 6, 6, 9, 1, 0, 4, 7, 6, 9};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 109198721;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> heightsOfLeftView = {0, 7, 8, 1, 10, 3, 0, 5, 0, 5, 0, 2, 8, 8, 9, 10, 2, 0, 0, 2, 9, 9, 2, 6, 7, 2, 4, 5, 9, 4, 7, 7, 8, 4, 4, 0, 9};
    vector<int> heightsOfFrontView = {2, 5, 8, 7, 5, 3, 2, 0, 4, 6, 10, 9, 7, 6, 10, 1, 2, 7, 5, 3, 6, 5, 3, 10, 0, 9, 5};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 970292528;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> heightsOfLeftView = {27, 24, 19, 31, 2, 2, 29, 20, 17, 35, 14, 32, 31, 50, 10, 38, 47, 17, 50, 32, 9};
    vector<int> heightsOfFrontView = {13, 19, 49, 48, 7, 19, 11, 33, 30, 6, 10, 34, 17, 26, 1, 24, 34, 18, 2, 27, 12, 30, 24, 9, 4, 8, 25, 20, 32, 39, 34};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {41, 36, 41, 5, 28, 1, 48, 14, 6, 45, 32, 27, 19, 33, 20, 50, 8, 4, 25, 10, 0, 39, 40, 41, 30, 29, 49, 47, 29, 5, 36, 33, 25, 35, 20, 43, 19};
    vector<int> heightsOfFrontView = {39, 22, 7, 39, 33, 29, 24, 21, 12, 3, 13, 29, 0, 0, 1, 6, 8, 34, 33, 45, 5, 49, 42, 14, 37, 43, 28, 33, 16, 22, 5, 0, 20, 12, 1, 29, 47};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {25, 10, 20, 11, 27, 40, 23, 44, 47, 12, 16, 34, 16, 34, 43, 43, 2, 25, 20, 21, 36, 1, 37, 12, 40, 26, 3, 48, 45, 21, 2, 19, 22, 49};
    vector<int> heightsOfFrontView = {27, 28, 26, 5, 28};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> heightsOfLeftView = {5, 27, 5, 24, 0, 13, 30, 32, 0, 49, 38, 48};
    vector<int> heightsOfFrontView = {14, 21, 43, 17, 47, 26, 12, 11, 49, 21, 3, 21, 23, 8, 43, 21, 25, 36, 35, 28, 43, 22, 28, 32};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 777310794;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> heightsOfLeftView = {10, 44, 38, 40, 9, 28, 3, 1, 35, 26, 14, 16, 39, 21, 6, 45, 45, 3, 35, 17, 34, 9, 20, 1, 38, 26, 1, 33, 1, 7, 45, 30, 49, 8, 8, 21, 30, 0, 4, 5, 3, 27, 26, 40, 44, 29, 39};
    vector<int> heightsOfFrontView = {39, 25, 6, 7, 32, 20, 0, 35, 0, 16, 39, 26, 46, 12, 39, 47, 30, 43, 23, 16, 12, 40, 27, 28, 46, 26, 26, 32, 33, 38, 34, 41, 46, 15, 26, 1, 18, 14, 37, 10};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {30, 20, 33, 20, 30, 32, 18, 21, 24, 1, 20, 42, 35, 25, 44, 49, 18, 28, 23, 24};
    vector<int> heightsOfFrontView = {48, 12, 29, 31, 21, 41, 11, 3, 10, 47, 29, 32, 8, 1, 17, 39, 45, 10, 29, 32, 43, 18, 30};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {21, 36, 11, 30, 48, 33, 0, 23, 40, 21, 29, 16, 30, 3, 27, 7};
    vector<int> heightsOfFrontView = {36, 9, 38, 12, 2, 19, 40, 29, 30, 44, 42, 2, 12, 0, 4, 0, 18, 29, 35, 11, 0, 4, 27, 38, 24, 24, 46};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {29, 36, 25, 30, 0, 38, 6, 29, 35, 18, 47, 48, 5, 28, 42, 8, 34};
    vector<int> heightsOfFrontView = {29, 40, 10, 20, 29, 42};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {27, 49, 23, 39, 28, 7, 42, 8, 14, 33, 17, 5, 41, 35, 22, 35, 23, 43, 30, 26, 22, 2, 11, 31, 31, 33, 39, 5, 7, 24, 40, 17, 24, 5};
    vector<int> heightsOfFrontView = {36, 23};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {50, 13, 44, 4, 41, 50, 45, 38, 47, 30, 23, 47, 9, 45, 50, 20, 7, 14, 9, 19, 0, 1, 49, 2, 34, 1, 48, 16};
    vector<int> heightsOfFrontView = {6, 21, 35, 34, 10, 35, 21};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {147, 190, 608, 500, 869, 309, 289, 181, 438, 180, 881, 584, 524, 377, 39, 514, 952, 488, 812, 201, 599, 897, 785, 213, 460, 919, 496, 642, 364, 291, 179, 79, 62, 577, 91, 761, 160, 550, 544, 387, 150, 33, 648, 606, 55};
    vector<int> heightsOfFrontView = {650, 425, 870, 225, 149, 897, 468, 66, 308, 887, 28, 336, 894, 118, 81, 620, 108, 526, 657, 257, 407, 839, 575, 825, 225, 848, 788, 646, 604, 362, 548, 309, 138};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {568, 362, 675, 177, 582, 762, 998, 527, 638, 344, 215, 822, 227, 730};
    vector<int> heightsOfFrontView = {434, 276, 751, 129, 773, 836, 945, 35, 355, 863, 946, 107, 801, 277, 702, 396, 752, 139, 110, 634, 959, 430, 602, 632, 535, 908, 713, 361, 453, 19, 750, 567, 882, 271, 411, 414, 64, 937, 502, 336, 943, 47, 513, 361, 548, 830, 628};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {177, 412, 189, 668, 785, 855, 875, 552, 141, 334};
    vector<int> heightsOfFrontView = {281, 556, 421, 362, 246};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {213, 845, 933, 985, 440, 830, 951, 46, 981, 927, 741, 650, 519, 985, 319, 42, 66, 201, 755, 519, 298, 419, 104, 787, 459, 611, 836, 801, 703, 471};
    vector<int> heightsOfFrontView = {39, 820, 188, 347, 486, 905, 597, 297, 430, 398, 221, 354, 756};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {612, 981, 936, 239, 339, 520, 714, 25, 529, 536, 866, 343, 637, 848, 522, 521, 898, 358, 321, 123, 324, 894, 954, 868, 309, 699, 846, 773, 119, 919, 668, 858, 736, 877, 15, 897, 322, 904, 837, 317, 222, 327, 729, 880, 946, 936, 553};
    vector<int> heightsOfFrontView = {470, 187, 767, 590, 432, 294, 231, 54, 250, 184, 222, 923, 169, 102, 414, 555, 147, 441, 855};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> heightsOfLeftView = {522, 272, 91, 424, 468, 374, 995, 898, 606, 190, 575, 833, 756, 199, 88, 842, 629, 864};
    vector<int> heightsOfFrontView = {38, 67, 548, 656, 129, 676, 718, 67, 431, 489, 271, 340, 560, 45, 536, 556, 93, 683, 751, 19, 305};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {145, 878, 496, 88, 440, 116, 882, 147, 472, 64, 962, 377, 895, 186, 562, 774, 996};
    vector<int> heightsOfFrontView = {518, 351, 335, 428, 69, 55, 16, 922, 636, 164, 430, 197, 709, 643, 486, 990, 172, 188, 813, 20, 459, 26, 531, 960, 322, 996, 572, 95, 930, 703, 665, 420, 991, 203, 344, 347, 382, 489, 275, 978, 880, 815, 67, 673, 3, 682, 720, 30, 702, 42};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 255610117;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> heightsOfLeftView = {401, 4, 770, 289, 892, 839, 103, 516, 981, 251, 569, 877, 994, 578, 405, 80, 38, 717, 647, 932, 44, 704, 787, 206, 567, 222, 513, 174, 208, 724, 761, 592, 937, 61, 854, 279, 730, 273, 633, 34, 999, 73, 880, 136, 68};
    vector<int> heightsOfFrontView = {488, 11, 166, 40, 713, 267, 561, 6, 70, 526, 495, 209, 256, 22, 466, 583, 727, 952, 543, 7, 915, 486, 575, 993, 117, 845, 957, 992, 702, 243};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {789, 709, 745, 695, 154, 850, 666, 521, 634, 1000};
    vector<int> heightsOfFrontView = {695, 712, 281, 568, 817, 305, 16, 801, 262, 727, 311, 580, 351, 405, 388, 473, 167, 837, 996, 659, 108, 456, 592, 729, 755, 99, 972, 668, 552, 543, 894, 525, 663, 919, 827};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {7823, 3998, 1574, 3633, 655, 478, 6394, 3796, 5518, 3343, 3214, 4083, 164, 1038, 4809, 4597, 512, 777, 7981, 3049};
    vector<int> heightsOfFrontView = {2959, 7135, 2276, 4160, 5147, 7286, 7347, 3099, 3347, 7837, 152, 906, 3448, 6570, 4396, 830, 981, 1428, 1620, 415, 4846, 5918, 465, 5791, 7350, 1728, 2134, 7493, 2471, 685, 3744, 6073, 754, 5981, 1603, 7981, 3842};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 950026002;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> heightsOfLeftView = {546, 299, 1189, 1761, 1035, 450, 689, 435, 1499, 449, 32, 755, 382, 1790, 325, 1801, 1007, 1984, 132, 1266, 1027, 1905, 1763, 772, 1204, 1482, 1141};
    vector<int> heightsOfFrontView = {876, 325, 459, 455, 1741, 885, 1984, 162, 95, 1808, 725, 1363, 1976, 91, 680, 1341, 939, 1605, 1922, 1346, 243};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 961505902;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> heightsOfLeftView = {55, 131, 128, 92, 111, 165, 140, 115, 109, 0, 156, 69, 1, 88, 141, 71, 51, 54, 202, 154, 185, 202, 80, 10, 183, 107, 100, 168, 53, 34, 72, 105, 130, 165};
    vector<int> heightsOfFrontView = {104, 88, 194, 171, 49, 124, 16, 47, 153, 91, 63, 43, 132, 112, 195, 71, 155, 89, 22, 81, 193, 179, 202};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 770306935;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> heightsOfLeftView = {4719, 1349, 5656, 5699, 2332};
    vector<int> heightsOfFrontView = {4998, 3320, 4199, 4285, 3918, 2129, 1959, 3478, 1876, 1839, 4063, 822, 261, 5090, 338, 100, 103, 5699, 1992, 4993, 3232, 2059, 1470, 5502};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 471128639;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> heightsOfLeftView = {1902, 67, 108, 4356, 3616, 1661, 1362, 880, 3175, 5199, 2351, 4657, 4121, 1238, 4421, 5276, 2362, 4812};
    vector<int> heightsOfFrontView = {3651, 2767, 3382, 2514, 1029, 1127, 5276, 2253, 2649, 984, 4252, 818, 3847, 3920, 4575, 5179};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 628916289;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> heightsOfLeftView = {882, 1343, 574, 1016, 1216, 567, 861, 355, 1000, 123, 145, 530, 1481, 115, 964, 1419, 988, 898, 979, 979, 607, 375, 644, 678, 1432, 350, 1535, 1153, 26, 436, 1403, 1427, 152, 409, 116, 99, 874, 1440, 855, 1457, 814, 370};
    vector<int> heightsOfFrontView = {798, 1317, 488, 245, 368, 1378, 609, 631, 160, 1223, 924, 979, 749, 1434, 346, 1082, 851, 894, 1535, 344, 216, 493, 1097, 27, 944, 642, 1071, 409, 870, 1017, 392, 1202, 933, 196};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 433801141;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> heightsOfLeftView = {2933, 3699, 4400, 6847, 4555, 6840, 2650, 4115, 2439, 4203, 1755, 5829, 7045, 6937, 3693, 5596, 1751, 3623, 1545, 7097};
    vector<int> heightsOfFrontView = {6219, 804, 6833, 2049, 4344};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {2635, 1394, 8173, 539, 3145, 3407, 6950, 4647, 7831, 1769, 3766, 2106, 55, 2554, 5737, 2382, 3789, 7881, 5352, 4896, 105, 5068, 4206, 4722, 2257, 8607, 286, 5335, 2757, 3070, 7384, 6112, 2260, 5835, 3151, 806};
    vector<int> heightsOfFrontView = {5809, 5041, 8607, 5022, 5666, 7397, 5470, 3929, 1029, 2593, 672, 5654, 3728, 3982, 756, 1506, 2271, 2006, 5828, 2348, 7348, 1039, 4764, 3133, 1937, 392, 632, 1054, 6916, 8124, 8399, 1652, 6349, 5691, 6349, 4813, 3498, 8426, 5412, 910, 4988, 2017, 6027, 4898, 3056, 4280, 7836, 2497, 5445};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 988950973;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> heightsOfLeftView = {4226, 659, 1378, 2933, 4237, 788, 2819, 2749, 2123, 595, 431, 14, 3058, 3179, 1462, 1192, 3397, 1167};
    vector<int> heightsOfFrontView = {3273, 200, 3054, 321, 1800, 4237, 3032, 3495, 3231, 3195, 794, 992, 3505, 1190, 561};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 792302356;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> heightsOfLeftView = {867};
    vector<int> heightsOfFrontView = {1291, 3651, 1817, 3617, 3842, 3171, 3962, 894, 3220};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
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
    vector<int> heightsOfLeftView = {3804, 2105, 43, 3327, 1446, 2425, 1880, 2426, 2411, 722, 1088, 1428, 984, 2818, 3258, 1003, 2307, 3137, 3467, 2807, 544, 1121, 1524, 789, 2435, 3640, 1128, 2479, 428, 2187};
    vector<int> heightsOfFrontView = {3804, 35, 2861, 139, 833, 125, 3271};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 746979549;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> heightsOfLeftView = {3790, 586, 308, 1168, 2014, 3552, 3056, 2622, 1129, 3607, 3752, 2148, 3512, 3206, 2139, 1882, 3420, 152, 3254, 3559, 680, 2057, 1604, 2048, 289, 528, 1847, 1768, 155, 599, 3729, 1715, 3600, 2756, 3329, 405, 2848, 2445, 1589, 2287, 1853, 593, 1526};
    vector<int> heightsOfFrontView = {3790, 2626, 1529, 1935, 2530, 2056, 3702, 2353, 2466, 2891, 430, 2004, 1963, 2633, 2774, 1619, 536, 2877, 1217, 3462, 1520, 962, 3262, 1510, 2187, 3596, 902, 2266, 2115, 1966, 2238, 79, 1585, 1179};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 694924076;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> heightsOfLeftView = {6229, 4423, 985, 3045, 2151, 4201, 1255, 5336, 527, 6115, 209, 26, 4504, 2358, 5716, 3521, 2631, 112, 3691, 795, 4766, 6022, 3877, 2703, 4708, 4555, 826, 1115, 892, 4783};
    vector<int> heightsOfFrontView = {6229, 2924, 1580, 5208, 118};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 421135830;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> heightsOfLeftView = {3803, 677, 3774, 726, 2668, 2549, 3122, 1261, 3104, 720, 3707, 185};
    vector<int> heightsOfFrontView = {3803, 3265, 2426, 2618, 331, 3075, 995, 3320, 2720, 3399, 3800, 1905, 2022, 1371, 1121, 1711, 2164, 2888, 2429, 2349, 891, 2018, 3511, 1653, 1119, 569, 1070, 1036, 2590, 159, 2623, 3617, 3078, 2920, 449, 3017, 2122, 1753, 1635, 2191, 308, 3344, 1893, 3704};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 189550455;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> heightsOfLeftView = {4939, 2005, 4803, 678, 2977, 2518, 2092, 3768, 2395, 1695, 3843, 2686, 3249, 3239, 4490, 3442, 1589, 2166, 1765, 1811, 1991, 4194, 2227, 4804, 2113, 3150, 1865, 2351, 4446, 1539, 1218, 3357, 1593, 639, 947, 789};
    vector<int> heightsOfFrontView = {4939, 2570, 1154, 1780, 2196, 2376};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 864674446;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> heightsOfLeftView = {329, 48, 148, 186, 252, 47, 69, 159, 44, 54, 245, 297, 62, 228, 24, 109, 57, 84, 329, 70};
    vector<int> heightsOfFrontView = {329, 59, 306, 102, 108, 226, 6, 313, 126, 39, 138, 200};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 861282335;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> heightsOfLeftView = {3080, 1259, 1004, 2126, 1182, 852, 241, 1263, 2568, 1415, 826, 174, 2339, 212, 2904, 2442, 47, 1671, 1042, 510, 1480, 1270, 20, 2025, 1537, 14, 1369, 3051, 1142, 1689, 1661, 633, 1034, 1139};
    vector<int> heightsOfFrontView = {3080, 2990, 322, 1668, 494, 2659, 2826, 1788, 860, 1200, 192, 669, 2043, 2198, 2717, 1439, 590, 336, 1733, 2015, 1485, 3006, 792, 2567, 35, 1085, 2660, 2174, 995, 600, 379, 187, 1802, 1090, 2726, 813, 408, 2021, 193, 424};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 683422289;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> heightsOfLeftView = {5184, 4773, 4125, 843, 4284, 790, 1437, 4027, 3438, 2935, 890, 4209, 1587, 3866, 3758, 2885, 1696, 405};
    vector<int> heightsOfFrontView = {5184, 4513, 1506, 2617, 2802, 2432, 546, 3857, 4820, 3415, 830, 3465, 2679, 4785, 337, 2527, 3757, 789, 2760, 2079, 4565, 3741, 4698, 933, 123, 4812, 3227, 3912, 1726, 5110, 2360, 2215, 4374, 3924, 4911, 2420, 3100, 1212, 3689};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 227845342;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> heightsOfLeftView = {8757, 1384, 8196, 5447, 7804, 5231, 1786, 326, 996, 8363, 2912, 5140, 166, 3296, 708, 5412, 6810, 3920, 5112, 928, 4489, 2169, 1597, 4830, 5012, 2105, 5861, 1504, 8200, 2400, 2738, 4848, 1477, 5548, 1109, 848, 7475, 4903, 4865, 4027, 4017, 3736, 6620};
    vector<int> heightsOfFrontView = {8757, 3253, 5597, 2952, 7473, 1667, 8216, 3661, 3642, 1035};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 461384134;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> heightsOfLeftView = {1995, 991, 753, 119, 1363, 1394, 1364, 631, 878, 881, 637, 1566, 1684, 1093, 1607, 464, 1616, 1040, 448, 303, 1470, 909, 1410, 1591, 777, 1751, 1756, 849, 273, 931, 1631};
    vector<int> heightsOfFrontView = {1995, 1597, 749, 1731, 1840, 1686, 869, 1896, 19, 1984, 1258, 467, 1473, 907, 589, 486, 679, 115, 1080, 439, 1053, 432, 432, 1292, 1159, 1610, 1566, 35, 1607, 1823, 535, 193, 1225, 651, 213, 781, 231, 1697, 546, 1955, 905, 1416, 1432, 1829, 480};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 630670801;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> heightsOfLeftView = {1077, 345, 1052, 1098, 1076, 1218, 605, 353, 1097, 1184, 781, 1219, 1066, 918, 1253, 1049, 556, 1248, 274, 429, 348, 292, 854, 624, 845, 249};
    vector<int> heightsOfFrontView = {743, 860, 470, 724, 682, 1236, 1091, 1155, 26, 622, 420, 690, 787, 369, 1166, 1250, 1194, 164, 147, 1122, 1018, 1136, 500, 652, 811, 542, 1219, 804, 643, 183, 1125, 519, 1253, 823, 1230, 944, 760, 626, 172, 508, 316, 848, 341};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 283145735;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> heightsOfLeftView = {5432, 3402, 4760, 2750, 5165, 2517, 6801, 1443, 4773, 1763, 2576, 933, 4888, 7677, 562, 694, 3937, 6214, 636, 685, 1457, 5814, 6373, 2013, 5928, 4181, 4400, 2335, 6496, 1164, 7656, 1090, 1220, 7970, 4976, 1675, 4545, 7102, 2017, 1974, 4177, 4001, 1575, 8023, 1485, 3243, 510, 5897, 6807};
    vector<int> heightsOfFrontView = {2697, 3722, 3670, 5898, 4524, 12, 7393, 3059, 1784, 755, 1840, 2317, 487, 5366, 6522, 1718, 5897, 7374, 371, 6449, 5546, 1043, 7012, 7444, 2107, 872, 6361, 8023, 904, 3629, 5560, 1235, 6323, 4985, 4251, 3757, 5447, 2616, 6829};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 516281222;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> heightsOfLeftView = {4465, 3063, 632, 1040, 4451, 1585, 1876, 66, 1958, 3886, 4424, 457, 4771, 1235, 4957, 1380, 2132, 2591, 2771, 4895, 473, 2986, 2423, 3960, 4714, 3968, 3670, 1279, 1160, 2525, 1714, 4786, 4128, 1473, 5283, 2383, 2065};
    vector<int> heightsOfFrontView = {122, 2686, 1703, 833, 2266, 3261, 4906, 4389, 4351, 3855, 59, 1951, 781, 3408, 5194, 1319, 471, 3573, 3536, 4798, 754, 5283, 3333, 2068, 1417, 2307, 4221, 5110, 4305, 3663, 144, 1130, 4821, 2160, 3659, 438, 4301};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 716218583;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> heightsOfLeftView = {2738, 1335, 1700, 1185, 1817, 1709, 2271, 273, 2416, 2828, 252, 2951, 2714, 410, 2310, 2331, 2832, 2551, 2766, 449, 1439, 1402, 3058, 3241, 915, 2296, 337, 2523, 2539, 2282, 129, 344, 704};
    vector<int> heightsOfFrontView = {2546, 1792, 2934, 1823, 611, 2182, 155, 3070, 3241, 2582, 1997, 1028, 2031, 2685, 2523, 2884, 3189, 1010, 2760, 3229, 1361, 3232};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 588101500;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> heightsOfLeftView = {4500, 4272, 4259, 1796, 977, 2725, 719, 894, 3521, 2850, 1913, 4656, 2423, 666, 863, 11, 2158, 2189, 3968};
    vector<int> heightsOfFrontView = {2973, 4656};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 548105774;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> heightsOfLeftView = {4902, 7871, 9217, 9611, 7859, 5335, 9757, 2944, 7026, 5856, 5726, 8201, 371, 5810, 9092, 4806, 3052, 2122, 8028, 9224, 6194, 4180, 9358, 3843, 223, 5241, 2040, 7346, 8021, 2420, 9708, 3927, 1950, 4914, 4748, 6146, 5142, 4818, 7031, 2950, 2179, 8590};
    vector<int> heightsOfFrontView = {6981, 859, 7908, 2259, 5393, 5686, 5686, 8556, 9757, 5950, 7980, 5715, 629, 3248, 3366, 1330, 627, 8671, 5044, 4332, 1430, 5752, 4939};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 329236792;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> heightsOfLeftView = {794, 4532, 2018, 7503, 6329, 9718, 4197, 4757, 4037, 4849, 5116, 3358, 6038, 1948, 9481, 616};
    vector<int> heightsOfFrontView = {8754, 7955, 9071, 2145, 9718, 1213, 5987};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 405853772;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> heightsOfLeftView = {53, 316, 328, 786, 50, 300, 167, 608, 117, 471, 102, 497, 83, 34, 210, 369, 691, 651, 284, 75, 364, 91, 118, 517, 797, 783, 622, 119, 546};
    vector<int> heightsOfFrontView = {696, 709, 264, 441, 655, 785, 548, 708, 373, 272, 72, 318, 408, 580, 113, 64, 709, 326, 632, 696, 389, 148, 494, 640, 394, 129, 797, 643, 418, 481, 340, 569, 577, 119, 532, 620, 687, 480, 472, 380, 769, 314, 273, 651};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 493627509;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> heightsOfLeftView = {290, 420, 60, 458, 503, 471, 756, 565, 560, 367, 571, 394, 187, 674, 99, 630, 494, 0, 509, 399, 504, 669, 612, 19, 806, 570, 846, 594, 428, 275, 769, 695, 345, 673, 440, 735, 408, 510, 95, 266, 822};
    vector<int> heightsOfFrontView = {188, 846, 694, 743, 32, 181, 700, 310, 585, 837, 210, 258, 7, 376, 730, 29, 446, 26, 735, 605, 768, 543, 403, 573, 543, 761, 76, 77, 6, 689, 372, 377};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 6987805;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> heightsOfLeftView = {2569, 3099, 2892, 84, 3062, 1, 3369};
    vector<int> heightsOfFrontView = {1435, 2490, 2462, 830, 3190, 2422, 215, 1733, 1142, 3369, 1522, 149, 2837, 1479};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 764104368;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> heightsOfLeftView = {34, 75, 80, 265, 17, 191, 25, 101, 155, 222, 151, 63, 151, 216, 62, 80, 94, 150, 256, 112, 206, 130, 17, 210, 175, 227, 72, 94, 103, 46, 55, 118, 87, 259, 233, 105, 194, 109, 259, 136, 31, 120, 178, 124, 96, 93, 147, 57, 111};
    vector<int> heightsOfFrontView = {176, 221, 81, 261, 137, 155, 211, 8, 168, 8, 265, 139, 225, 19, 38, 222, 40, 72, 74, 204, 107, 265, 192, 195, 76, 243, 114, 112, 254, 229, 133, 70, 174, 247, 134, 119, 152, 199, 76, 188, 26, 229, 80, 41, 68, 203};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 740852658;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> heightsOfLeftView = {4967, 1234, 4372, 1643, 4945, 2798, 4303, 5768, 4663, 170, 5912, 2772, 1303, 5838, 1301, 4425, 1548, 2278, 3283, 4695, 3026, 5067, 737, 4720, 970, 2353, 948, 3445, 1854, 372, 2235, 5667, 1266, 3670, 5224, 2419, 1528, 3245, 2349, 417, 3647, 4168};
    vector<int> heightsOfFrontView = {4294, 4299, 1797, 4465, 2495, 41, 5298, 2675, 78, 1332, 4777, 5588, 5164, 893, 304, 2507, 5802, 5669, 1922, 1080, 3631, 5912, 4851, 5740, 5623, 4463, 1823, 952, 4624, 5795, 2341, 5781, 2604, 1185, 4021, 1951, 5296, 1460, 2902, 526, 2507, 5810, 2880, 3502};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 467316419;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> heightsOfLeftView = {792, 455, 5151, 6976, 2366, 1524, 515, 1815, 530, 556, 3573, 4257, 4912, 503, 1764, 5219, 561, 1604, 430, 7161, 5378, 5483, 2814, 6170, 4019, 7619, 7012, 4464, 247, 2910, 6174, 4429, 7345, 3400, 3606, 488, 4518, 3880, 1839, 4492, 5721, 3145, 2815, 5756};
    vector<int> heightsOfFrontView = {668, 2110, 7507, 3871, 2625, 90, 2028, 6195, 7619, 6056, 4266, 4823, 1928, 160, 910, 6266, 3170, 3343, 3008, 5930, 4295, 5676, 126, 5824, 884, 1451, 3376, 1904, 1479, 5747, 1471, 7527, 1947, 6425, 2628, 5410, 3073, 2412, 2894, 5658, 4465, 2844, 4796, 1823, 122, 3960, 2806, 3091, 4939, 1509};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 661018860;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> heightsOfLeftView = {142, 179, 2055, 959, 417, 797, 1740, 1268, 890, 1962, 74, 712, 1087, 878, 790, 1172, 1722, 1431, 1530, 1664, 803, 1195, 1871, 1435, 1356, 1186, 1676, 1330, 431, 1671, 1447, 1800, 240, 262, 1637, 1593, 587, 1030, 1551, 1114, 453, 428, 1100, 1714, 633, 820, 1019, 136, 693, 1127};
    vector<int> heightsOfFrontView = {1687, 352, 675, 118, 44, 1273, 268, 1647, 20, 1418, 1250, 1115, 1643, 1610, 542, 1624, 380, 817, 140, 905, 544, 2055, 1071, 1009, 531, 1009, 2003, 253, 207, 461, 1210, 1663, 1327, 1435, 293, 319, 1436, 1095, 767, 1892, 491, 899, 303, 48, 659, 1701, 1859, 1194};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 861073396;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> heightsOfLeftView = {5117, 636, 622, 417, 5292, 53, 680, 5164, 610, 1185, 2217, 244, 3789, 2079, 655, 3652, 752, 790, 2631, 1153, 180, 4180, 1410, 2294, 1499, 812, 1224, 619, 1577, 2233, 541, 1701, 4672, 5181, 2770, 1109, 290, 3611, 4459, 4029, 4924, 480, 2115};
    vector<int> heightsOfFrontView = {36, 271, 4260, 2890, 4401, 3553, 1056, 5010, 154, 3000, 3193, 423, 4873, 492, 1360, 1468, 5262, 3934, 227, 4351, 3369, 1596, 4823, 2041, 3993, 3361, 5292, 3986, 744, 227, 1760, 3382, 1038, 1151, 1832, 1550, 529, 2853, 1294, 1944, 4995, 5276, 1674, 473, 1776, 3800, 3865, 4681};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 755411123;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> heightsOfLeftView = {5853, 4441, 7189, 2428, 7459, 966, 5232, 2775, 4142, 4108, 2441, 5698, 5098, 5630, 3189, 7066, 3676, 518, 997, 3715, 3289, 634, 1253, 6148, 1517, 6567, 7508, 7577, 7438, 4737, 1207, 3553, 6286, 2809, 3747, 7148, 5403, 287, 1910, 2128, 3299, 1803, 4242, 5149};
    vector<int> heightsOfFrontView = {6484, 6151, 7577, 3652, 6319, 6515, 5156, 3005, 1447, 6308, 3407, 4487, 5782, 6242, 978, 2337, 5525, 6598, 771, 2619, 447, 4497, 3200, 1869, 4651, 3542, 3842, 4278, 2245, 2599, 989, 5049, 1846, 3767, 5078, 3122, 4173, 3588, 1639, 5338, 4035, 3807, 7479, 432, 690, 2125, 652, 3515, 7574};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 84827158;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> heightsOfLeftView = {1894, 5169, 3706, 3023, 1019, 106, 4799, 6016, 6773, 1562, 5276, 123, 1232, 7114, 5163, 3219, 6308, 312, 4710, 972, 2647, 5312, 3301, 5846, 132, 7158, 6670, 70, 5173, 5300, 6033, 6005, 2195, 770, 2369, 5095, 4225, 2002, 5792, 2916, 315, 66, 3594};
    vector<int> heightsOfFrontView = {538, 3816, 7028, 4361, 1378, 3832, 5419, 148, 4943, 1132, 1375, 3016, 5049, 3962, 989, 3058, 3336, 4185, 547, 807, 5765, 4275, 6920, 3713, 6000, 6763, 6891, 1023, 1830, 158, 555, 1969, 3317, 5629, 7158, 3711, 4303, 80, 3066, 6311, 3548, 272, 5191, 723};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 5624372;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> heightsOfLeftView = {381, 1136, 661, 1604, 1313, 534, 1367, 1365, 1334, 908, 1422, 1641, 146, 1706, 1621, 311, 1780, 1579, 220, 410, 858, 1136, 1697, 200, 628, 5, 40, 71, 1161, 1381, 969, 1312, 1006, 1299, 635, 1638, 930, 928, 900, 175, 1636, 197};
    vector<int> heightsOfFrontView = {868, 1434, 155, 1003, 636, 255, 55, 682, 1487, 472, 94, 1361, 1370, 913, 900, 1384, 1618, 1633, 1372, 755, 1524, 470, 1058, 226, 836, 916, 1244, 1642, 373, 1586, 135, 1780, 312, 835, 1, 161, 951, 1322, 1582, 1157, 429, 325, 574, 181, 448, 1704, 683};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 117719210;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> heightsOfLeftView = {309, 2267, 8336, 8174, 2578, 5565, 470, 4246, 4488, 327, 6883, 1441, 8277, 6430, 7898, 1736, 5016, 4208, 3553, 1804, 5738, 4810, 6066, 7246, 2208, 2600, 6537, 4421, 230, 2362, 3028, 8364, 2658, 23, 6289, 2781, 1777, 7584, 5141, 1938, 2789};
    vector<int> heightsOfFrontView = {165, 1838, 4245, 5630, 3120, 8364, 4336, 3787, 961, 5263, 2036, 2292, 893, 994, 5782, 3581, 1762, 3266, 975, 4565, 4345, 7821, 8328, 2742, 6608, 1560, 3244, 4978, 5611, 4683, 2777, 6682, 6360, 6298, 3292, 3351, 1249, 7019, 7619, 617, 7511, 1401, 4406, 4743, 1814, 5652, 4644, 7183, 2637, 3714};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 951097839;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> heightsOfLeftView = {1592, 3840, 6060, 3145, 6296, 4480, 859, 6146, 3315, 3759, 6331, 9444, 3294, 2414, 3680, 8147, 9169, 5877, 1372, 3510, 4458, 7394, 1519, 1756, 6798, 6318, 552, 5187, 236, 1062, 6315, 3796, 1665, 7275, 9122, 4438, 8338, 8602, 6314, 5363, 9232, 161, 5401, 6923, 5137, 5186, 2955, 8223, 441};
    vector<int> heightsOfFrontView = {5213, 7013, 6489, 8128, 6904, 6712, 489, 4611, 901, 6657, 5133, 1386, 3205, 8997, 1791, 808, 4150, 6119, 8953, 9068, 3110, 7048, 9444, 6497, 8082, 3821, 1879, 3748, 6098, 4879, 1073, 6951, 8751, 532, 801, 5061, 2137, 517, 4585, 2452, 6552, 6342, 4525, 8698, 5614, 2829, 7356, 2834, 2150};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 959484623;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> heightsOfLeftView = {3730, 232, 1540, 2449, 1666, 4442, 4015, 3158, 605, 2733, 3184, 2351, 1472, 2499, 4426, 2220, 234, 2719, 2365, 4514, 1544, 550, 601, 2925, 3985, 1461, 2913, 784, 634, 4794, 3505, 3349, 1492, 847, 1253, 3649, 2780, 83, 1629, 3110, 1030, 3769, 4709, 963, 4567, 4018, 54, 4191, 3793};
    vector<int> heightsOfFrontView = {1743, 303, 1896, 3716, 664, 58, 1189, 3903, 204, 1755, 1567, 498, 2712, 2667, 4169, 4280, 3759, 1649, 477, 1351, 887, 273, 2518, 3665, 66, 2452, 1223, 718, 2640, 4789, 430, 2148, 2935, 273, 3463, 2015, 4794, 2113, 1743, 4507, 3177, 2384, 1264, 4138, 1170, 3313, 738, 1184, 1550, 1071};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 588007833;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> heightsOfLeftView = {4484, 3630, 4389, 2741, 3627, 3928, 56, 3925, 1159, 781, 4825, 4016, 3074, 4386, 3439, 4320, 3865, 1971, 4642, 3742, 3319, 2056, 1557, 3875, 4255, 2201, 664, 2218, 4640, 1655, 4666, 802, 2179, 2355, 2899, 4029, 4016, 2972, 1815, 704, 2796, 3445, 3660};
    vector<int> heightsOfFrontView = {455, 2135, 3364, 2694, 3878, 714, 1772, 115, 482, 3549, 3733, 416, 1232, 90, 2257, 544, 3758, 1468, 191, 2748, 2311, 2354, 401, 2481, 1078, 139, 163, 2937, 3427, 3713, 952, 3931, 1795, 1109, 1514, 4825, 3311, 3261, 115, 348, 1152, 1562, 1996, 1224, 2497, 4077, 2113, 2891, 1292};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 708693727;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> heightsOfLeftView = {2781, 3550, 4092, 3446, 847, 4377, 674, 160, 1885, 4427, 1827, 59, 2842, 4372, 4231, 2543, 1208, 1944, 1831, 1681, 4847, 4062, 4965, 3774, 4228, 1377, 3697, 1853, 4266, 3251, 4793, 2818, 3525, 839, 1709, 4531, 3280, 432, 4231, 2569, 351, 1676, 913, 4491, 4058, 1008, 2727};
    vector<int> heightsOfFrontView = {228, 4965, 4515, 1566, 292, 4757, 3265, 570, 1912, 4582, 2889, 554, 3029, 1585, 669, 1580, 1678, 2199, 1192, 1580, 3229, 963, 242, 4052, 1260, 4096, 4094, 560, 3193, 1826, 2969, 3210, 103, 4737, 284, 1051, 2405, 18, 2325, 581, 1048};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 292662529;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> heightsOfLeftView = {2543, 100, 3833, 2885, 638, 1837, 1769, 644, 2833, 1460, 1610, 2092, 1210, 1613, 2245, 2939, 2019, 1316, 3349, 257, 3566, 541, 3291, 3422, 3404, 2611, 823, 98, 2069, 2504, 1621, 1159, 1935, 2445, 2879, 1431, 3325, 1462, 3722, 2512, 2939, 3889, 2300, 2642, 3024, 1692};
    vector<int> heightsOfFrontView = {26, 2283, 1038, 993, 886, 396, 1797, 1749, 2835, 2059, 2194, 928, 254, 1796, 448, 3561, 732, 2925, 400, 688, 1910, 3199, 3391, 1120, 1181, 3889, 1351, 1445, 3279, 2934, 55, 3095, 3232, 1627, 2797, 3672, 1579, 2312, 3461, 2515};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 670083803;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> heightsOfLeftView = {8522, 8259, 6996, 1334, 4386, 120, 167, 6172, 587, 3424, 8668, 8533, 3235, 6976, 4632, 4596, 6348, 8247, 1242, 1336, 6085, 1148, 1499, 505, 3067, 8043, 7833, 4809, 7066, 2917, 4220, 4481, 3276, 1832, 1980, 5522, 5514, 2409, 1629, 5230, 7894, 5099};
    vector<int> heightsOfFrontView = {1856, 3210, 461, 2864, 1020, 2169, 7708, 6608, 7687, 2215, 98, 1844, 8668, 7210, 563, 7867, 1861, 5989, 8582, 6891, 3317, 2317, 5069, 6503, 819, 509, 2038, 5600, 6831, 3084, 6659, 3407, 723, 5553, 6324, 417, 3910, 5510, 7397, 3309, 3300, 7251, 1440, 2061, 2859, 6095, 4392, 63};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 56324005;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> heightsOfLeftView = {6524, 1702, 4840, 8973, 6947, 5926, 2808, 3603, 6299, 388, 7283, 463, 5925, 2295, 212, 2776, 7467, 8360, 8925, 1959, 8863, 9080, 4570, 6770, 534, 6171, 2637, 5423, 502, 7441, 4578, 6663, 634, 8778, 3714, 6166, 3726, 3353, 3137, 5295, 7055, 5564, 2772, 9723, 6880, 5504};
    vector<int> heightsOfFrontView = {3554, 1591, 5733, 2174, 1326, 9723, 2975, 8709, 529, 9571, 5193, 8402, 5373, 3890, 7445, 9484, 3150, 8585, 4236, 9383, 2200, 4250, 7846, 7291, 5842, 7594, 1150, 7653, 9358, 9305, 1608, 667, 801, 3970, 8418, 994, 8726, 6686, 8774, 6510, 3855, 2666, 9169};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 927809674;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> heightsOfLeftView = {1818, 488, 3141, 1198, 834, 1570, 2374, 2761, 2924, 137, 2708, 1043, 1349, 2350, 3672, 2798, 720, 3695, 505, 3094, 218, 1408, 2085, 594, 1014, 3499, 521, 27, 353, 3898, 591, 2773, 1676, 1761, 2539, 858, 1448, 1327, 2081, 2941, 2033, 2454, 383, 2847, 1147, 1712, 1393, 2933, 1089, 1239};
    vector<int> heightsOfFrontView = {1287, 1792, 2639, 621, 2780, 2808, 3004, 144, 3898, 3017, 848, 1874, 2724, 543, 53, 3898, 2315, 1363, 3857, 661, 2466, 2621, 3029, 2373, 855, 3525, 1076, 756, 173, 2470, 3342, 2129, 1316, 3631, 1536, 1202, 1791, 1910, 1397, 2756, 3305, 1704, 1800, 1480, 859, 3847, 1809, 732, 3607, 3255};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 58918795;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> heightsOfLeftView = {56, 118, 82, 90, 100, 118, 69, 43, 80, 20, 76, 65, 105, 38, 60, 13, 77, 42, 30, 106, 64, 59, 35, 115, 5, 23, 47, 86, 73, 107, 8, 32, 58, 17, 11, 68, 5, 4, 33, 90, 55, 110, 9, 37, 81};
    vector<int> heightsOfFrontView = {93, 50, 18, 53, 69, 30, 2, 89, 4, 104, 68, 40, 37, 69, 44, 106, 28, 15, 85, 25, 108, 52, 118, 102, 68, 99, 88, 69, 117, 63, 88, 82, 19, 38, 13, 13, 93, 46, 115, 104, 24};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 315655334;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> heightsOfLeftView = {1338, 2197, 1136, 1757, 2465, 537, 2669, 2045, 1554, 2276, 1381, 993, 494, 796, 1504, 594, 1346, 2846, 1694, 1004, 653, 331, 2098, 2557, 906, 2135, 1040, 2619, 544, 2181, 389, 2805, 2307, 764, 2587, 1078, 929, 591, 1261, 2853, 1444, 1646, 2884, 79, 143, 1753, 2229};
    vector<int> heightsOfFrontView = {1814, 2305, 297, 2560, 1275, 148, 2370, 1355, 961, 2884, 330, 2863, 615, 1177, 2776, 173, 1457, 674, 2150, 2712, 1105, 106, 2342, 2134, 308, 2711, 2796, 1594, 467, 1581, 1987, 2686, 1654, 2859, 665, 377, 29, 2436, 2554, 1717, 293, 1887, 16, 116, 1644, 1370, 826, 239};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 453393691;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> heightsOfLeftView = {4443, 5992, 5131, 814, 377, 1847, 544, 1768, 2228, 3198, 6485, 2335, 2142, 2416, 6179, 2290, 756, 6597, 5978, 614, 4677, 5865, 5411, 4455, 6768, 4843, 2030, 6050, 2523, 3296, 533, 3778, 6645, 1843, 5003, 2682, 708, 2310, 833, 5374, 1914, 1532};
    vector<int> heightsOfFrontView = {1531, 600, 2696, 2594, 5524, 1459, 5393, 1033, 5279, 205, 4951, 1933, 6768, 1787, 1504, 3670, 5422, 3609, 2068, 562, 3725, 3489, 6339, 1373, 6536, 3646, 6282, 1142, 3271, 2963, 5409, 748, 2332, 3383, 1166, 5769, 4060, 1380, 1374, 6096, 1124, 6302, 727, 1668, 4510, 3757, 2813, 3107, 6643};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 790017490;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> heightsOfLeftView = {423, 128, 85, 639, 449, 288, 55, 585, 108, 735, 126, 138, 310, 154, 196, 194, 626, 49, 138, 242, 555, 189, 668, 558, 560, 702, 293, 481, 747, 350, 477, 477, 302, 252, 450, 233, 46, 232, 458, 452, 740, 106};
    vector<int> heightsOfFrontView = {512, 366, 377, 641, 694, 90, 42, 315, 38, 107, 283, 161, 438, 744, 57, 100, 662, 581, 468, 641, 728, 377, 44, 9, 732, 358, 133, 65, 74, 484, 249, 346, 310, 288, 481, 281, 547, 747, 557, 370, 484, 626, 332, 700, 584, 418, 328, 623};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 865177594;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> heightsOfLeftView = {44, 457, 315, 555, 103, 320, 204, 310, 554, 215, 136, 578, 571, 178, 644, 582, 380, 655, 359, 412, 476, 529, 341, 485, 119, 156, 379, 421, 6, 217, 578, 587, 114, 545, 217, 45, 172, 427, 428, 553, 203, 25, 189, 33, 428, 247, 223, 75, 476, 264};
    vector<int> heightsOfFrontView = {619, 155, 568, 521, 398, 472, 593, 621, 128, 360, 501, 310, 388, 572, 386, 465, 54, 127, 176, 94, 592, 435, 555, 374, 632, 318, 332, 68, 354, 655, 365, 97, 42, 494, 294, 298, 46, 579, 434, 274, 367};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 197434650;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> heightsOfLeftView = {1386, 1110, 2511, 4475, 2949, 6244, 806, 312, 1355, 2097, 2999, 1475, 4094, 1526, 6152, 2161, 3208, 4703, 1454, 384, 4407, 5713, 644, 2933, 1280, 5636, 6070, 380, 121, 6740, 1378, 3633, 5045, 2362, 1106, 5414, 6065, 4168, 4190, 5292, 4148, 3734, 3731, 2607, 446, 1409};
    vector<int> heightsOfFrontView = {5782, 5349, 601, 4558, 1962, 4128, 5451, 2579, 2750, 6158, 6605, 5553, 1316, 274, 985, 6740, 942, 6424, 5278, 6607, 3501, 5781, 5248, 5804, 2039, 2061, 5456, 3257, 4519, 2036, 1502, 3160, 2742, 6583, 4510, 3633, 645, 4168, 508, 2503, 2038, 5100, 2360, 203, 95, 5683};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 673352748;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> heightsOfLeftView = {5825, 4296, 2433, 2847, 5352, 4052, 5383, 3372, 630, 5300, 1755, 3240, 2151, 2778, 3752, 3129, 3403, 6698, 1029, 805, 6386, 95, 3440, 5567, 2493, 6553, 1841, 982, 5342, 1247, 6304, 4142, 2049, 4192, 4514, 5057, 6594, 3328, 6606, 5391, 6120, 3119, 2731};
    vector<int> heightsOfFrontView = {6299, 2370, 3065, 2724, 6698, 1191, 4803, 2874, 2698, 4778, 4371, 4021, 1523, 3786, 3997, 1899, 1144, 629, 3158, 1821, 5668, 92, 4162, 6618, 6350, 1019, 4710, 1378, 2822, 832, 164, 5004, 175, 693, 3880, 4431, 4070, 829, 4450, 5335, 3581, 5989, 5295, 5168};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 821197740;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> heightsOfLeftView = {1622, 2809, 1694, 654, 1948, 640, 1179, 2479, 1449, 721, 2136, 694, 354, 1297, 2630, 2593, 2766, 2620, 578, 825, 2057, 233, 216, 2794, 1381, 1622, 2036, 2318, 477, 2474, 2595, 223, 1265, 1393, 2586, 555, 1577, 145, 1812, 91, 867};
    vector<int> heightsOfFrontView = {2719, 561, 222, 2116, 2004, 593, 2763, 2291, 606, 215, 942, 786, 731, 78, 1605, 1969, 1935, 382, 407, 350, 1820, 2804, 1002, 1275, 1063, 2297, 1316, 2090, 1079, 626, 1420, 1525, 1866, 2264, 2034, 592, 1067, 2782, 1992, 2567, 1263, 1841, 301, 1227, 2809, 2262, 1449, 1538, 323};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 235389348;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> heightsOfLeftView = {5622, 810, 679, 2625, 2665, 5037, 3229, 1546, 5312, 3560, 3327, 874, 5349, 1270, 607, 2760, 2482, 5693, 463, 1981, 5459, 1752, 2955, 4230, 4556, 2281, 3913, 2476, 1910, 5743, 470, 1048, 4732, 2784, 3690, 4086, 3884, 4173, 1867, 262};
    vector<int> heightsOfFrontView = {206, 5183, 3870, 255, 2625, 648, 1322, 4856, 2904, 4967, 4568, 4912, 1668, 1536, 3288, 4641, 3396, 3724, 3267, 5421, 973, 5350, 5279, 4932, 2391, 3792, 4866, 4831, 5325, 2859, 5743, 197, 4019, 1768, 2780, 1997, 4950, 3612, 2418, 3550, 4660, 1172, 2300, 699, 5115, 4079, 4974, 636};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 532015362;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> heightsOfLeftView = {3922, 1175, 115, 1441, 2951, 2266, 946, 2104, 2229, 1787, 803, 3275, 727, 3645, 3165, 3831, 2584, 4053, 2729, 3420, 310, 1743, 2560, 1021, 1925, 2899, 118, 4146, 674, 719, 3910, 2386, 359, 1503, 2765, 1291, 3214, 80, 327, 2401, 1476, 3957, 59};
    vector<int> heightsOfFrontView = {672, 3984, 1535, 309, 1147, 386, 3493, 1463, 258, 1933, 3843, 1493, 3475, 131, 2722, 2115, 985, 2802, 2007, 2342, 2556, 1703, 1225, 1830, 3682, 2439, 364, 3862, 2047, 1066, 838, 462, 692, 737, 1952, 1017, 3134, 1755, 1303, 1457, 71, 2144, 1569, 581, 4146, 3131, 244, 1346};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 921128602;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> heightsOfLeftView = {2560, 1833, 1084, 1497, 803, 1656, 2621, 1464, 1281, 1133, 1796, 45, 1585, 3129, 1534, 3084, 2655, 1713, 1708, 268, 1314, 2822, 302, 2013, 2365, 2242, 2186, 2317, 644, 1432, 1765, 2591, 2725, 367, 3210, 2889, 2811, 1812, 464, 2209, 3075, 1303, 3109, 670, 682, 1545, 43};
    vector<int> heightsOfFrontView = {2756, 466, 1799, 2247, 2333, 753, 2299, 1489, 1825, 695, 1080, 901, 295, 2498, 2742, 1315, 2933, 1767, 693, 1849, 1757, 1558, 3210, 456, 718, 2240, 2795, 607, 38, 2342, 211, 2755, 1661, 2066, 2715, 1694, 2823, 1073, 2977, 2315, 1533, 146};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 962060475;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> heightsOfLeftView = {1350, 2193, 616, 2188, 282, 85, 1864, 2569, 1257, 1118, 1384, 1570, 1801, 2131, 136, 3181, 1588, 1161, 2186, 1958, 549, 506, 2273, 177, 519, 2781, 109, 3011, 1928, 69, 1845, 2193, 2706, 1626, 49, 3118, 332, 440, 2175, 2242, 2100, 2254, 2093, 2299, 3133, 647, 1837};
    vector<int> heightsOfFrontView = {2596, 994, 3181, 966, 811, 2831, 2447, 1233, 1586, 2114, 1338, 1999, 587, 1137, 2945, 469, 3171, 2567, 803, 682, 2840, 1803, 151, 2815, 1523, 1880, 1717, 803, 1328, 2531, 1349, 584, 366, 1393, 2419, 811, 1743, 1939, 2244, 3005, 2891, 52, 1750, 484};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 939883315;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> heightsOfLeftView = {638, 6635, 6952, 4652, 6820, 3820, 2178, 6132, 5679, 728, 5619, 942, 5139, 4675, 1160, 36, 5765, 176, 2075, 5744, 5986, 206, 6905, 5004, 7802, 3302, 1846, 172, 3081, 5326, 6726, 7123, 1043, 6120, 3074, 4846, 3175, 773, 5873, 2849, 5752, 4440, 1415};
    vector<int> heightsOfFrontView = {2676, 2789, 775, 3824, 5223, 3691, 4130, 2194, 1978, 3704, 4584, 408, 2322, 3993, 1585, 4648, 2199, 3761, 6434, 2637, 418, 2687, 6509, 7173, 5328, 5576, 7802, 5663, 1500, 2009, 6342, 7099, 964, 988, 4805, 312, 678, 567, 2374, 6935, 394, 2297};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 492397149;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> heightsOfLeftView = {3595, 3249, 4596, 4993, 1280, 1649, 3905, 1035, 3777, 3324, 7367, 4929, 8213, 2926, 8093, 5124, 7157, 8401, 7321, 4861, 2262, 8428, 639, 1796, 147, 3649, 5511, 8269, 4010, 2404, 3044, 1522, 2083, 5871, 4303, 7950, 7980, 3009, 8066, 7961, 4882, 5635, 2090};
    vector<int> heightsOfFrontView = {5345, 7174, 6322, 5847, 592, 8428, 5420, 766, 4773, 5057, 8129, 5285, 1517, 7397, 4952, 2944, 3776, 4062, 6401, 6213, 7484, 5697, 6623, 2736, 6144, 2582, 6625, 4969, 1183, 8198, 1057, 8253, 3500, 3488, 7702, 2056, 6154, 74, 5965, 60, 7882, 2023, 8353, 7292, 2731, 8169};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 744925913;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> heightsOfLeftView = {2562, 2557, 872, 1691, 198, 1313, 384, 385, 445, 930, 2658, 575, 2214, 2490, 2292, 887, 397, 1518, 938, 2180, 1651, 446, 3223, 646, 1135, 2961, 3242, 2749, 1638, 371, 2547, 1930, 2981, 3000, 1947, 2931, 2304, 266, 2992, 3042, 285, 1237, 2271};
    vector<int> heightsOfFrontView = {48, 2453, 54, 1616, 2442, 177, 2258, 3117, 3190, 860, 374, 175, 3242, 672, 247, 1369, 2781, 35, 2151, 714, 866, 886, 784, 2277, 458, 740, 4, 2117, 511, 223, 35, 3116, 2880, 341, 1176, 3014, 164, 1321, 1563, 3088, 1669, 971, 322, 600, 2024, 2185, 2150, 1984, 2547, 563};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 111523001;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> heightsOfLeftView = {361, 5619, 6460, 2046, 6247, 1560, 3439, 4490, 4608, 324, 2785, 7227, 5941, 3620, 4195, 2672, 5749, 1972, 3037, 1641, 5862, 1643, 4417, 1634, 4568, 2842, 6054, 2989, 4069, 4658, 4092, 2673, 2592, 3498, 906, 4771, 2975, 4673, 2682, 3197, 3007, 6234, 6877, 2934, 4412, 835, 2443, 5937};
    vector<int> heightsOfFrontView = {7117, 6037, 2796, 534, 2205, 948, 3959, 6197, 7227, 4874, 450, 4632, 5226, 3472, 3365, 4992, 832, 5684, 5617, 2515, 3962, 1547, 2410, 7103, 2140, 6609, 5996, 2984, 1305, 2881, 3710, 4656, 638, 4343, 6797, 3046, 6628, 2108, 4908, 2872, 3150};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 124999061;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> heightsOfLeftView = {1009, 3196, 2662, 3234, 2813, 1284, 2043, 1032, 2405, 1945, 2298, 4446, 1057, 2512, 1845, 783, 3730, 3925, 3020, 1733, 4500, 4666, 1787, 3439, 1392, 3075, 1200, 604, 3061, 1013, 4224, 2921, 4117, 3806, 1492, 740, 3003, 1311, 2043, 3981, 2011, 1164, 2085, 4415};
    vector<int> heightsOfFrontView = {3769, 1869, 2487, 190, 3947, 3584, 2538, 276, 4267, 1915, 1270, 4474, 3725, 1865, 316, 1695, 3092, 1161, 3139, 586, 1570, 2467, 3553, 4648, 3128, 1359, 2440, 2008, 1107, 1874, 130, 2307, 2359, 3756, 3874, 2352, 2698, 3517, 321, 3302, 1448, 4666, 4441, 3809, 3744, 4333};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 17111908;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> heightsOfLeftView = {3709, 285, 3663, 1355, 2328, 1190, 4757, 2657, 1772, 207, 5238, 2651, 1228, 4604, 5298, 4259, 2148, 3385, 1380, 390, 1022, 1020, 2983, 2268, 3204, 2346, 2138, 3566, 1886, 3780, 1288, 1741, 3313, 1713, 3606, 2694, 3842, 4376, 1886, 4287, 2756, 3989};
    vector<int> heightsOfFrontView = {3152, 3422, 4155, 395, 2379, 1780, 1219, 2040, 4779, 2896, 4374, 4854, 89, 2617, 4650, 1335, 4314, 3965, 4285, 943, 4397, 4914, 4696, 4779, 5298, 4333, 2519, 3939, 4575, 825, 4229, 3656, 5148, 4778, 1844, 1772, 4464, 3452, 3430, 2704, 2829, 1698, 3327, 683, 2725, 1871, 1620, 86, 1754};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 663947840;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> heightsOfLeftView = {2640, 4526, 2803, 895, 430, 3466, 2212, 1727, 3080, 1532, 1429, 1823, 4701, 1661, 2808, 1005, 1221, 988, 3466, 719, 2155, 2272, 3259, 2833, 271, 1479, 363, 3755, 1618, 690, 1255, 2190, 397, 4690, 2449, 1972, 1145, 2895, 2398, 1539, 80, 3673, 1818, 1049, 1847, 2337, 1699, 881, 1921, 4684};
    vector<int> heightsOfFrontView = {962, 829, 4020, 3720, 1313, 145, 538, 617, 3846, 2347, 4701, 2385, 3080, 589, 1557, 3025, 2006, 1011, 4100, 4158, 1140, 1737, 1346, 43, 1034, 1019, 1425, 2912, 3334, 725, 3159, 2003, 3363, 380, 1601, 907, 3419, 422, 1409, 3407, 1556};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 412688860;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> heightsOfLeftView = {244, 588, 224, 446, 1314, 516, 731, 497, 956, 1154, 440, 1360, 812, 213, 1022, 91, 441, 1124, 805, 1167, 769, 435, 347, 691, 1181, 1282, 162, 1167, 1093, 973, 416, 276, 742, 503, 978, 238, 236, 1348, 709, 669};
    vector<int> heightsOfFrontView = {341, 1014, 1000, 916, 588, 1237, 1162, 665, 930, 967, 727, 1357, 263, 745, 335, 527, 239, 290, 1251, 21, 513, 594, 328, 452, 1211, 990, 1158, 419, 235, 1360, 628, 273, 222, 1335, 483, 902, 240, 1117, 1155, 82, 727};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 963360028;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> heightsOfLeftView = {1869, 3312, 2033, 936, 2913, 67, 1425, 2700, 1522, 2401, 3349, 940, 2834, 3619, 1921, 3500, 582, 649, 2422, 2732, 3678, 270, 3713, 3766, 2860, 560, 2350, 2363, 121, 2880, 1965, 717, 147, 337, 909, 2849, 3249, 3453, 527, 1757, 2785, 3212, 1652, 385};
    vector<int> heightsOfFrontView = {1988, 933, 3563, 3125, 2810, 3282, 1616, 875, 560, 3131, 2041, 1670, 1509, 706, 1208, 131, 3185, 558, 373, 1102, 3145, 3181, 1606, 3582, 2835, 949, 3669, 1485, 2205, 1486, 561, 27, 3234, 1127, 34, 2450, 2780, 85, 3766, 293, 3114, 535, 1783};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 244879203;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> heightsOfLeftView = {22, 5584, 1315, 2761, 5675, 679, 273, 3282, 3118, 3660, 2776, 95, 5128, 2107, 799, 1088, 923, 223, 2730, 1438, 5174, 954, 1111, 429, 2399, 5127, 3703, 1138, 3682, 21, 5990, 1916, 5640, 545, 490, 1472, 4864, 3191, 1427, 5879, 4819, 5880, 2113, 3841, 3552, 2260, 3808, 3362, 34, 5387};
    vector<int> heightsOfFrontView = {3152, 3877, 80, 4085, 5486, 2042, 1311, 3861, 3164, 5123, 2811, 4225, 4127, 117, 3869, 1106, 1201, 3340, 2476, 2504, 3532, 2491, 5232, 5922, 2611, 4129, 962, 2133, 2225, 3400, 5331, 2820, 5202, 4282, 996, 5728, 5990, 3875, 1762, 372, 321, 3208, 1113, 2725, 1627};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 781401029;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> heightsOfLeftView = {3853, 3787, 8359, 7567, 5712, 8469, 5482, 9011, 8856, 5204, 3244, 7568, 4882, 1386, 7748, 35, 8001, 8071, 6962, 8493, 6644, 329, 870, 463, 4952, 7231, 1088, 3467, 152, 2458, 698, 3390, 8318, 6595, 5704, 6782, 1753, 14, 4607, 2851, 4204, 3454, 1972, 2614, 8561, 5407};
    vector<int> heightsOfFrontView = {5777, 6656, 1649, 336, 8459, 8764, 2254, 7543, 7065, 2526, 4117, 1276, 3746, 1968, 7151, 1624, 5210, 6091, 6143, 2620, 7760, 3078, 2708, 6518, 4861, 825, 2155, 3233, 3696, 8882, 901, 2486, 8538, 7012, 4438, 3160, 5213, 4124, 5931, 5139, 7347, 9011, 3182, 3615, 6081};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 720232297;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> heightsOfLeftView = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> heightsOfFrontView = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> heightsOfLeftView = {5, 2, 4, 52, 24, 524};
    vector<int> heightsOfFrontView = {0, 4, 20, 24, 500, 504, 520, 524};
    AxonometricProjection* pObj = new AxonometricProjection();
    clock_t start = clock();
    int result = pObj->howManyWays(heightsOfLeftView, heightsOfFrontView);
    clock_t end = clock();
    delete pObj;
    int expected = 97065655;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=7433858&rd=14549&pm=11608
********************************************************************************
#include <vector>  
#include <list>  
#include <map>  
#include <set>  
#include <deque>  
#include <vector>  
#include <list>  
#include <map>  
#include <set>  
#include <deque>  
#include <queue>  
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
#include <cctype>  
#include <string>  
#include <cstring>  
#include <ctime>  
 
using namespace std; 
 
#define mo 1000000009 
#define _int64 long long 
 
int c[60][60]; 
 
class AxonometricProjection 
{ 
public: 
_int64 po(int x,int y) 
{ 
  int i,m; 
  int a[100]; 
  _int64 ans; 
  m=0; 
  while (y>0) 
  { 
    a[m]=y%2; 
    y/=2; 
    m++; 
  } 
  ans=1; 
  for (i=m-1;i>=0;i--) 
  { 
    ans=ans*ans%mo; 
    if (a[i]==1) ans=ans*x%mo; 
  } 
  return ans; 
} 
 
int howManyWays(vector <int> l, vector <int> f) 
{ 
  int i,j,k,o,p,remain1,remain2,cnt1,cnt2,all,tmp1,tmp2; 
  _int64 tmp,tt; 
  _int64 ans; 
  vector<pair<int,int> > a; 
  for (i=0;i<60;i++) 
  { 
    c[i][0]=1;c[i][i]=1; 
    for (j=1;j<i;j++) 
    { 
      c[i][j]=c[i-1][j]+c[i-1][j-1]; 
      if (c[i][j]>=mo) c[i][j]-=mo; 
    } 
  } 
  a.clear(); 
  for (i=0;i<l.size();i++) 
    a.push_back(make_pair(l[i],0)); 
  for (i=0;i<f.size();i++) 
    a.push_back(make_pair(f[i],1)); 
  sort(a.begin(),a.end()); 
  remain1=l.size(); 
  remain2=f.size(); 
  ans=1; 
  for (i=0;i<a.size();i++) 
    if ((i==0)||(a[i].first!=a[i-1].first)) 
    { 
      cnt1=0;cnt2=0; 
      for (j=i;j<a.size();j++) 
      { 
        if (a[j].first!=a[i].first) break; 
        if (a[j].second==0) cnt1++; 
        else cnt2++; 
      } 
      if (a[i].first>0) 
      { 
        tt=0; 
        all=cnt1*remain2+cnt2*remain1-cnt1*cnt2; 
        for (o=0;o<=cnt1;o++) 
          for (p=0;p<=cnt2;p++) 
          { 
            tmp1=o*remain2+p*remain1-o*p; 
            tmp2=all-tmp1; 
            tmp=po(a[i].first,tmp1)*po(a[i].first+1,tmp2)%mo; 
            tmp=tmp*c[cnt1][o]%mo; 
            tmp=tmp*c[cnt2][p]%mo; 
            if ((o+p)%2==0) tt+=tmp; 
            else tt-=tmp; 
            tt=(tt%mo+mo)%mo; 
          } 
        ans*=tt; 
        ans%=mo; 
      } 
      remain1-=cnt1; 
      remain2-=cnt2; 
    } 
  return ans; 
} 
};

********************************************************************************
*******************************************************************************/