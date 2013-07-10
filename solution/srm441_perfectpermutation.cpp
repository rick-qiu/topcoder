/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10463
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

class PerfectPermutation {
public:
    int reorder(vector<int> P);
};

int PerfectPermutation::reorder(vector<int> P) {
    int ret;
    return ret;
}


int test0() {
    vector<int> P = {2, 0, 1};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> P = {2, 0, 1, 4, 3};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
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
    vector<int> P = {2, 3, 0, 1};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> P = {0, 5, 3, 2, 1, 4};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> P = {4, 2, 6, 0, 3, 5, 9, 7, 8, 1};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> P = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> P = {49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> P = {1, 0, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14, 17, 16, 19, 18, 21, 20, 23, 22, 25, 24, 27, 26, 29, 28, 31, 30, 33, 32, 35, 34, 37, 36, 39, 38, 41, 40, 43, 42, 45, 44, 47, 46, 49, 48};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> P = {0, 6, 7, 4, 8, 3, 1, 2, 5};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> P = {10, 7, 15, 6, 3, 16, 12, 9, 8, 0, 4, 2, 13, 14, 17, 5, 11, 1};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> P = {10, 7, 22, 14, 13, 16, 12, 6, 18, 23, 9, 15, 4, 5, 17, 3, 2, 1, 0, 11, 19, 8, 20, 21};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> P = {20, 24, 28, 4, 25, 8, 14, 2, 3, 21, 29, 5, 23, 17, 26, 7, 10, 1, 18, 22, 11, 6, 9, 19, 12, 27, 16, 15, 0, 30, 13};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> P = {23, 24, 32, 36, 43, 13, 16, 25, 27, 5, 4, 26, 8, 1, 10, 22, 42, 21, 14, 34, 0, 6, 20, 33, 41, 17, 7, 29, 2, 18, 28, 37, 35, 31, 11, 30, 3, 12, 38, 9, 39, 19, 40, 15};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> P = {9, 16, 17, 14, 21, 3, 15, 1, 5, 10, 11, 8, 6, 22, 7, 19, 12, 4, 0, 13, 20, 18, 2};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> P = {1, 17, 24, 19, 35, 10, 25, 21, 16, 15, 2, 13, 12, 5, 26, 20, 22, 36, 27, 3, 28, 31, 8, 18, 37, 7, 4, 30, 34, 33, 29, 0, 32, 11, 6, 9, 14, 23};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> P = {20, 26, 30, 0, 12, 21, 2, 5, 4, 14, 6, 3, 31, 18, 22, 25, 1, 23, 15, 24, 11, 8, 9, 10, 19, 7, 16, 29, 17, 27, 28, 13};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> P = {12, 39, 26, 30, 3, 18, 36, 15, 20, 17, 38, 24, 8, 43, 25, 23, 31, 6, 29, 10, 4, 27, 32, 34, 0, 45, 42, 28, 33, 41, 16, 9, 22, 7, 40, 11, 14, 13, 21, 19, 2, 35, 44, 1, 37, 5};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> P = {15, 23, 26, 24, 3, 0, 21, 2, 28, 12, 7, 16, 11, 25, 19, 13, 17, 22, 9, 14, 27, 8, 18, 4, 1, 5, 20, 10, 6};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> P = {33, 35, 3, 4, 0, 34, 25, 24, 12, 37, 32, 14, 26, 8, 31, 19, 21, 11, 29, 1, 15, 22, 18, 16, 10, 13, 9, 28, 7, 2, 30, 17, 36, 27, 23, 6, 20, 5};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> P = {10, 9, 3, 6, 12, 11, 13, 2, 5, 0, 4, 8, 1, 7};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> P = {8, 7, 0, 26, 30, 22, 9, 15, 23, 25, 6, 2, 17, 13, 21, 10, 18, 16, 14, 3, 29, 27, 1, 19, 24, 28, 4, 11, 5, 20, 12, 31};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> P = {34, 24, 1, 20, 35, 19, 40, 32, 36, 23, 13, 31, 6, 9, 27, 21, 33, 16, 17, 37, 7, 4, 10, 0, 2, 22, 30, 26, 15, 12, 5, 14, 3, 41, 11, 18, 29, 8, 38, 39, 25, 28};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> P = {6, 44, 34, 19, 26, 17, 7, 13, 27, 5, 10, 33, 22, 8, 37, 39, 3, 16, 32, 21, 14, 25, 42, 36, 2, 31, 38, 43, 12, 15, 28, 20, 18, 9, 11, 4, 40, 35, 1, 23, 24, 30, 41, 29, 0};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> P = {1, 32, 47, 38, 29, 22, 5, 24, 31, 9, 23, 11, 33, 16, 10, 34, 27, 44, 17, 45, 13, 3, 2, 15, 43, 12, 0, 14, 20, 19, 7, 40, 4, 8, 48, 30, 49, 37, 35, 42, 39, 28, 26, 36, 18, 21, 41, 25, 6, 46};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> P = {10, 16, 24, 13, 12, 9, 20, 6, 0, 8, 7, 18, 4, 2, 21, 11, 14, 22, 25, 3, 17, 15, 26, 19, 1, 5, 23};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> P = {4, 6, 8, 3, 2, 5, 1, 7, 0};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> P = {31, 7, 17, 18, 34, 6, 37, 10, 40, 8, 2, 42, 24, 29, 38, 22, 0, 41, 16, 9, 33, 23, 32, 13, 3, 14, 35, 43, 19, 1, 15, 11, 12, 25, 27, 39, 30, 26, 20, 21, 4, 36, 28, 5};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> P = {24, 25, 17, 1, 3, 22, 6, 20, 2, 11, 16, 27, 14, 7, 19, 12, 29, 10, 15, 0, 26, 23, 8, 21, 18, 9, 4, 28, 13, 5};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> P = {8, 10, 3, 1, 9, 11, 5, 13, 14, 4, 17, 18, 6, 15, 16, 2, 7, 0, 12};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> P = {10, 3, 4, 15, 7, 12, 9, 14, 2, 11, 5, 13, 0, 6, 1, 8};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> P = {45, 41, 1, 15, 37, 7, 31, 40, 32, 34, 36, 26, 20, 9, 25, 27, 17, 11, 33, 44, 30, 35, 8, 13, 23, 38, 28, 10, 39, 24, 16, 2, 42, 43, 0, 6, 12, 5, 21, 47, 48, 19, 22, 3, 46, 4, 29, 18, 14};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> P = {21, 25, 11, 5, 9, 2, 8, 1, 7, 18, 28, 13, 17, 23, 15, 4, 20, 6, 27, 12, 16, 29, 14, 0, 10, 24, 19, 22, 26, 3};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> P = {0, 9, 11, 3, 6, 19, 13, 15, 22, 4, 20, 7, 2, 12, 1, 8, 10, 16, 18, 14, 21, 23, 5, 17};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> P = {14, 3, 5, 7, 1, 9, 0, 11, 10, 13, 8, 4, 6, 12, 2};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> P = {20, 19, 34, 22, 39, 25, 5, 7, 18, 23, 4, 16, 1, 17, 13, 28, 29, 31, 42, 35, 38, 33, 24, 10, 2, 36, 6, 41, 3, 8, 21, 9, 37, 15, 26, 40, 11, 30, 12, 0, 14, 32, 27};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> P = {11, 3, 13, 12, 1, 8, 0, 5, 15, 6, 9, 14, 4, 2, 16, 7, 10};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> P = {21, 17, 9, 8, 29, 7, 19, 13, 30, 18, 2, 10, 25, 14, 22, 4, 3, 5, 15, 28, 16, 6, 26, 11, 23, 27, 24, 1, 20, 0, 12};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
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
    vector<int> P = {3, 6, 0, 7, 2, 1, 5, 4};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> P = {18, 30, 35, 1, 29, 3, 27, 7, 34, 10, 28, 26, 0, 2, 32, 13, 22, 6, 24, 37, 33, 21, 20, 9, 14, 4, 19, 15, 5, 31, 17, 38, 25, 8, 11, 23, 16, 36, 12};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> P = {0, 9, 15, 20, 11, 2, 12, 17, 19, 18, 3, 13, 21, 10, 5, 4, 14, 1, 8, 6, 7, 16};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> P = {7, 18, 10, 6, 1, 4, 13, 19, 9, 11, 15, 0, 3, 14, 17, 12, 16, 8, 5, 2};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> P = {10, 27, 22, 33, 37, 14, 39, 15, 4, 5, 0, 16, 21, 34, 26, 6, 2, 28, 48, 30, 47, 3, 32, 36, 43, 23, 38, 13, 8, 25, 9, 1, 42, 19, 35, 45, 12, 20, 18, 41, 29, 40, 17, 31, 44, 46, 7, 24, 11};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> P = {22, 2, 8, 18, 16, 15, 5, 20, 11, 0, 25, 21, 17, 13, 23, 7, 12, 14, 10, 3, 9, 1, 6, 4, 24, 19};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> P = {36, 1, 34, 32, 13, 16, 24, 10, 25, 27, 9, 17, 30, 3, 12, 15, 7, 31, 21, 28, 33, 5, 8, 6, 4, 22, 20, 14, 18, 38, 37, 11, 35, 0, 2, 29, 26, 19, 23};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> P = {4, 2, 5, 1, 0, 3};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> P = {8, 14, 0, 6, 4, 7, 17, 5, 11, 13, 10, 9, 12, 3, 2, 1, 15, 16};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> P = {13, 3, 5, 20, 0, 12, 14, 9, 8, 4, 1, 19, 11, 2, 10, 6, 16, 7, 18, 15, 17};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> P = {8, 3, 7, 0, 6, 9, 4, 1, 2, 5};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> P = {7, 3, 5, 9, 1, 0, 2, 8, 6, 13, 12, 11, 10, 15, 14, 16, 4};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> P = {11, 22, 7, 16, 13, 3, 4, 19, 5, 12, 14, 15, 17, 1, 8, 2, 6, 21, 0, 18, 9, 23, 10, 20};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
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
    vector<int> P = {3, 4, 2, 0, 1};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> P = {8, 6, 13, 4, 1, 14, 10, 0, 16, 5, 12, 7, 3, 9, 11, 15, 2};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> P = {5, 8, 15, 0, 14, 3, 13, 7, 1, 2, 9, 6, 10, 17, 19, 18, 4, 12, 11, 16};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> P = {5, 12, 16, 11, 14, 4, 9, 10, 3, 8, 2, 18, 7, 1, 6, 17, 13, 0, 15};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> P = {6, 5, 8, 2, 11, 10, 14, 13, 12, 7, 4, 1, 9, 3, 0};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> P = {3, 12, 2, 0, 4, 5, 9, 6, 10, 7, 11, 8, 1};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> P = {23, 18, 37, 26, 25, 16, 6, 11, 36, 35, 27, 43, 12, 15, 14, 13, 30, 24, 1, 21, 20, 19, 42, 0, 38, 4, 3, 47, 29, 48, 5, 2, 22, 33, 34, 9, 39, 31, 17, 8, 40, 45, 32, 7, 44, 46, 41, 10, 28, 49};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> P = {10, 13, 9, 3, 2, 5, 24, 14, 31, 4, 17, 12, 35, 16, 18, 15, 1, 0, 7, 36, 32, 25, 22, 34, 6, 28, 27, 26, 21, 33, 20, 38, 30, 29, 23, 11, 19, 37, 8};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> P = {7, 22, 15, 24, 38, 5, 13, 19, 8, 4, 32, 28, 17, 6, 14, 18, 41, 35, 2, 0, 30, 21, 36, 31, 3, 25, 26, 27, 11, 40, 20, 39, 33, 10, 34, 12, 1, 37, 9, 23, 29, 16};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> P = {17, 3, 2, 22, 20, 5, 16, 19, 8, 21, 10, 14, 9, 13, 11, 6, 15, 0, 18, 7, 4, 12, 1};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> P = {0};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
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
    vector<int> P = {0, 1};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> P = {1, 0};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
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
    vector<int> P = {0, 1, 2};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> P = {0, 2, 1};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> P = {1, 0, 2};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> P = {1, 2, 0};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
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
    vector<int> P = {2, 0, 1};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
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
    vector<int> P = {2, 1, 0};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> P = {0};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
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
    vector<int> P = {0};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
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
    vector<int> P = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> P = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> P = {49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 0, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> P = {28, 19, 27, 11, 4, 5, 1, 25, 3, 0, 23, 18, 15, 16, 22, 17, 12, 2, 6, 24, 7, 8, 10, 13, 14, 29, 9, 20, 21, 26};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> P = {2, 0, 1, 3, 4, 10, 9, 8, 7, 6, 5, 15, 14, 13, 12, 11};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> P = {12, 1, 9, 49, 0, 27, 36, 31, 29, 45, 18, 46, 32, 40, 23, 33, 26, 41, 48, 17, 8, 47, 22, 34, 30, 7, 6, 11, 5, 4, 2, 21, 42, 35, 10, 39, 25, 3, 43, 16, 38, 37, 14, 13, 24, 15, 28, 19, 20, 44};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> P = {1, 0, 3, 2, 5, 4, 7, 6, 9, 8};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> P = {1, 2, 0, 4, 5, 3};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> P = {2, 13, 3, 19, 9, 16, 49, 36, 24, 23, 22, 17, 15, 26, 5, 46, 7, 37, 25, 18, 28, 20, 10, 14, 11, 40, 35, 29, 12, 21, 44, 0, 47, 27, 45, 41, 33, 8, 4, 43, 38, 34, 6, 42, 48, 31, 32, 1, 30, 39};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> P = {2, 0, 1};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
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
    vector<int> P = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> P = {8, 31, 48, 22, 14, 42, 29, 23, 28, 27, 36, 34, 41, 21, 13, 39, 44, 10, 19, 38, 3, 25, 30, 1, 17, 24, 35, 40, 9, 32, 0, 26, 43, 33, 5, 49, 45, 7, 6, 20, 16, 47, 11, 46, 37, 18, 4, 12, 2, 15};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> P = {28, 13, 39, 30, 29, 32, 25, 26, 21, 16, 47, 37, 17, 15, 7, 18, 11, 46, 22, 38, 12, 19, 14, 49, 33, 41, 44, 36, 4, 27, 31, 23, 0, 45, 35, 5, 34, 43, 24, 3, 10, 8, 20, 9, 6, 48, 1, 2, 42, 40};
    PerfectPermutation* pObj = new PerfectPermutation();
    clock_t start = clock();
    int result = pObj->reorder(P);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22630508&rd=13749&pm=10463
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
int d[100];
vector<int> m;
int dfs(int t)
{
  d[t] = 1;
  if (d[m[t]]<0)
    dfs(m[t]);
}
 
 
class PerfectPermutation {
public:
  int reorder(vector <int> P) {
        m = P;
    memset(d, -1, sizeof d);
    int res = 0;
    REP(i, P.size())
      if (d[i] < 0){
        dfs(i);
        res++;
      }
    return res != 1? res : 0;
  }
};
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/