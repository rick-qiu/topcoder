/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11537
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

class AdjacentSwaps {
public:
    int theCount(vector<int> p);
};

int AdjacentSwaps::theCount(vector<int> p) {
    int ret;
    return ret;
}


int test0() {
    vector<int> p = {1, 2, 0};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {0, 1};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {2, 0, 3, 1};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {1, 0, 3, 2};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {1, 3, 0, 5, 2, 7, 4, 8, 10, 6, 12, 9, 14, 11, 16, 13, 18, 15, 19, 17};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 716743312;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> p = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 0};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> p = {49, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> p = {25, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 24};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 603457371;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> p = {1, 3, 0, 5, 2, 7, 4, 9, 6, 11, 8, 13, 10, 15, 12, 17, 14, 19, 16, 21, 18, 23, 20, 25, 22, 27, 24, 29, 26, 31, 28, 33, 30, 35, 32, 37, 34, 39, 36, 41, 38, 43, 40, 45, 42, 47, 44, 49, 46, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 752033767;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> p = {2, 0, 4, 1, 7, 3, 5, 8, 10, 6, 12, 9, 14, 11, 18, 13, 15, 16, 19, 20, 21, 23, 17, 24, 26, 22, 28, 25, 30, 27, 32, 29, 35, 31, 33, 38, 34, 36, 42, 37, 39, 40, 45, 41, 43, 46, 48, 44, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 441399938;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> p = {2, 0, 5, 1, 3, 7, 4, 10, 6, 8, 12, 9, 13, 15, 11, 16, 17, 19, 14, 20, 22, 18, 24, 21, 27, 23, 25, 28, 30, 26, 32, 29, 35, 31, 33, 36, 37, 39, 34, 43, 38, 40, 41, 45, 42, 46, 48, 44, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 147827764;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> p = {1, 3, 0, 7, 2, 4, 5, 8, 11, 6, 9, 12, 13, 15, 10, 17, 14, 19, 16, 20, 22, 18, 24, 21, 26, 23, 30, 25, 27, 28, 32, 29, 33, 37, 31, 34, 35, 39, 36, 40, 42, 38, 44, 41, 46, 43, 48, 45, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 214963602;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> p = {1, 4, 0, 2, 6, 3, 10, 5, 7, 8, 13, 9, 11, 14, 15, 16, 18, 12, 21, 17, 19, 23, 20, 24, 25, 27, 22, 29, 26, 31, 28, 34, 30, 32, 36, 33, 38, 35, 40, 37, 43, 39, 41, 46, 42, 44, 47, 49, 45, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 823011398;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> p = {1, 4, 0, 2, 7, 3, 5, 8, 10, 6, 11, 12, 15, 9, 13, 16, 17, 19, 14, 21, 18, 22, 24, 20, 26, 23, 27, 28, 30, 25, 32, 29, 34, 31, 37, 33, 35, 40, 36, 38, 41, 43, 39, 44, 46, 42, 47, 49, 45, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 484244627;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> p = {1, 2, 5, 0, 3, 6, 7, 10, 4, 8, 11, 14, 9, 12, 15, 17, 13, 18, 20, 16, 22, 19, 23, 26, 21, 24, 27, 28, 29, 32, 25, 30, 34, 31, 33};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 356272846;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> p = {1, 2, 3, 6, 0, 4, 7, 9, 5, 11, 8, 12, 14, 10, 15, 17, 13, 18, 20, 16, 21, 19};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 358651819;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> p = {1, 2, 3, 5, 0, 6, 8, 4, 11, 7, 9, 10};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 28755;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> p = {1, 3, 0, 4, 2};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> p = {2, 0, 4, 1, 6, 3, 7, 9, 5, 11, 8, 13, 10, 12};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 14253227;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> p = {13, 6, 27, 7, 44, 9, 43, 11, 34, 25, 10, 17, 37, 45, 41, 22, 18, 26, 49, 0, 19, 20, 8, 40, 36, 3, 29, 33, 2, 31, 35, 16, 39, 15, 47, 38, 42, 46, 14, 12, 30, 23, 21, 28, 48, 24, 5, 32, 4, 1};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {40, 39, 27, 33, 41, 26, 19, 34, 13, 17, 9, 42, 45, 16, 36, 29, 18, 32, 6, 47, 43, 1, 15, 37, 22, 0, 10, 44, 4, 7, 48, 21, 12, 2, 14, 49, 3, 46, 28, 20, 5, 11, 30, 23, 8, 35, 24, 38, 25, 31};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {25, 10, 32, 29, 21, 19, 35, 2, 48, 38, 18, 22, 43, 34, 44, 37, 39, 40, 24, 33, 36, 16, 3, 20, 12, 6, 30, 26, 27, 45, 46, 7, 8, 17, 14, 4, 15, 13, 49, 23, 28, 1, 11, 5, 0, 31, 42, 9, 41, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {37, 38, 20, 2, 31, 0, 7, 6, 24, 17, 15, 48, 33, 25, 42, 35, 18, 28, 10, 1, 27, 47, 21, 14, 46, 12, 26, 39, 36, 32, 29, 45, 16, 43, 11, 9, 49, 19, 41, 30, 23, 34, 44, 5, 40, 13, 4, 22, 3, 8};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {2, 34, 23, 28, 32, 25, 12, 40, 33, 10, 35, 39, 20, 19, 0, 48, 43, 7, 38, 16, 1, 3, 18, 11, 5, 36, 49, 44, 31, 22, 6, 13, 37, 15, 29, 21, 9, 45, 4, 42, 14, 41, 8, 46, 26, 24, 47, 30, 27, 17};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {1, 3, 0, 5, 2, 7, 4, 9, 6, 11, 8, 15, 10, 12, 13, 16, 20, 14, 17, 18, 23, 19, 21, 25, 22, 26, 27, 28, 31, 24, 29, 33, 30, 32, 37, 34, 35, 40, 36, 38, 41, 42, 46, 39, 43, 44, 45, 48, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {2, 0, 3, 5, 1, 6, 8, 4, 11, 7, 9, 13, 10, 12, 15, 18, 14, 16, 20, 17, 21, 24, 19, 22, 25, 26, 29, 23, 27, 32, 28, 30, 34, 31, 36, 33, 37, 38, 35, 40, 41, 42, 43, 45, 39, 47, 44, 49, 46, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {1, 2, 5, 0, 3, 7, 4, 10, 6, 8, 13, 9, 11, 15, 12, 14, 19, 16, 17, 21, 18, 23, 20, 24, 26, 22, 25, 30, 27, 28, 33, 29, 31, 35, 32, 38, 34, 36, 40, 37, 42, 39, 44, 41, 47, 43, 45, 49, 46, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {1, 4, 0, 2, 6, 3, 8, 5, 10, 7, 11, 13, 9, 15, 12, 17, 14, 19, 16, 21, 18, 23, 20, 26, 22, 24, 27, 28, 31, 25, 29, 30, 35, 32, 34, 38, 33, 36, 40, 37, 42, 39, 43, 45, 41, 46, 49, 44, 47, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {1, 3, 0, 5, 2, 9, 4, 6, 7, 10, 12, 8, 14, 11, 18, 13, 16, 15, 20, 17, 21, 23, 19, 27, 22, 24, 25, 29, 26, 31, 28, 33, 30, 37, 32, 34, 35, 40, 36, 38, 43, 39, 41, 45, 42, 44, 47, 48, 49, 46};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {1, 3, 0, 4, 6, 2, 5, 9, 7, 11, 8, 13, 10, 14, 15, 17, 12, 20, 16, 18, 19, 23, 21, 24, 25, 28, 22, 26, 29, 31, 27, 34, 30, 32, 36, 33, 37, 40, 35, 38, 44, 39, 41, 42, 45, 46, 47, 49, 43, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {2, 0, 4, 1, 6, 3, 5, 8, 9, 10, 7, 14, 11, 12, 17, 13, 15, 21, 16, 18, 19, 23, 20, 24, 25, 27, 22, 29, 26, 31, 28, 33, 30, 34, 35, 36, 40, 32, 37, 38, 43, 39, 41, 44, 47, 42, 45, 49, 46, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {1, 2, 3, 5, 0, 7, 8, 4, 10, 6, 12, 9, 17, 11, 13, 14, 15, 20, 16, 18, 21, 24, 19, 22, 25, 28, 23, 26, 34, 27, 29, 30, 31, 32, 36, 33, 35, 38, 41, 37, 39, 44, 40, 42, 46, 43, 48, 45, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {1, 3, 0, 4, 2, 6, 8, 10, 5, 7, 13, 9, 11, 16, 12, 14, 20, 15, 17, 18, 23, 19, 21, 25, 22, 27, 24, 30, 26, 28, 31, 34, 29, 32, 35, 36, 39, 33, 37, 40, 42, 38, 45, 41, 43, 46, 48, 44, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {2, 0, 4, 1, 6, 3, 5, 9, 7, 11, 8, 13, 10, 14, 17, 12, 15, 21, 16, 18, 19, 22, 24, 20, 26, 23, 30, 25, 27, 28, 32, 29, 33, 34, 35, 31, 38, 36, 40, 37, 43, 39, 41, 44, 46, 42, 47, 49, 45, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {1, 11, 4, 2, 0, 8, 6, 5, 7, 10, 3, 9, 12};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {27, 20, 13, 32, 21, 26, 15, 7, 29, 17, 28, 10, 23, 31, 4, 6, 34, 22, 0, 12, 35, 9, 8, 11, 5, 24, 30, 14, 16, 1, 3, 36, 18, 19, 25, 33, 2};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {30, 28, 21, 5, 19, 22, 16, 15, 14, 4, 7, 36, 41, 42, 17, 13, 33, 23, 2, 45, 39, 31, 25, 40, 38, 20, 1, 12, 32, 6, 44, 9, 10, 11, 43, 8, 26, 0, 24, 18, 27, 29, 35, 47, 46, 37, 34, 3};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {2, 0, 3, 1, 5, 6, 4};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {15, 3, 24, 1, 32, 11, 47, 21, 16, 37, 40, 42, 35, 23, 39, 45, 41, 30, 18, 29, 28, 22, 9, 19, 26, 14, 20, 12, 43, 4, 25, 5, 44, 6, 48, 33, 17, 0, 8, 38, 27, 31, 2, 13, 7, 10, 34, 36, 46};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {2, 0, 5, 1, 3, 6, 8, 4, 10, 7, 9, 12, 14, 11, 16, 13, 18, 15, 17, 21, 19, 20};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {3, 0, 1, 5, 2, 4};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> p = {2, 0, 3, 5, 1, 6, 4, 8, 11, 7, 9, 13, 10, 14, 17, 12, 15, 16, 20, 18, 22, 19, 24, 21, 25, 26, 29, 23, 27, 30, 31, 32, 35, 28, 33, 34};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {2, 0, 4, 1, 6, 3, 7, 9, 5, 13, 8, 11, 10, 15, 12, 17, 14, 19, 16, 20, 23, 18, 21, 24, 26, 22, 27, 28, 25, 30, 31, 33, 29, 34, 32};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {1, 3, 0, 6, 2, 4, 7, 9, 5, 11, 8, 12, 10, 15, 13, 17, 14, 19, 16, 20, 22, 18, 24, 23, 26, 21, 27, 29, 25, 31, 28, 37, 30, 32, 33, 34, 35, 40, 36, 38, 43, 39, 41, 44, 45, 42};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {2, 0, 6, 1, 4, 3, 9, 5, 7, 13, 8, 10, 11, 15, 12, 14, 18, 16, 19, 17};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {2, 0, 4, 1, 6, 5, 7, 9, 3, 10, 11, 8, 15, 12, 13, 17, 14, 18, 19, 16};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {1, 2, 4, 0, 9, 3, 5, 6, 7, 11, 8, 12, 13, 14, 10, 16, 18, 15, 19, 21, 17, 22, 24, 20, 26, 23, 28, 25, 30, 27, 29};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {2, 0, 4, 1, 6, 3, 5, 7, 10, 8, 13, 9, 11, 15, 12, 18, 14, 16, 20, 17, 22, 19, 23, 24, 26, 21, 28, 25, 30, 27, 31, 29};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {2, 0, 4, 1, 5, 7, 3, 9, 6, 10, 11, 14, 8, 12, 16, 13, 17, 19, 15, 21, 18, 23, 20, 24, 27, 22, 25, 26, 30, 28, 29};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {1, 3, 0, 5, 2, 6, 7, 9, 4, 11, 8, 13, 10, 15, 12, 17, 14, 19, 16, 21, 18, 23, 20, 25, 22, 26, 28, 24, 31, 27, 29, 33, 30, 35, 32, 37, 34, 39, 36, 41, 38, 43, 40, 45, 42, 47, 44, 49, 46, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 913578633;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> p = {2, 0, 4, 1, 6, 3, 8, 5, 10, 7, 11, 12, 14, 9, 16, 13, 18, 15, 20, 17, 22, 19, 24, 21, 26, 23, 28, 25, 30, 27, 33, 29, 31, 35, 32, 37, 34, 39, 36, 41, 38, 43, 40, 45, 42, 47, 44, 49, 46, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 892361139;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> p = {2, 0, 4, 1, 6, 3, 8, 5, 10, 7, 12, 9, 15, 11, 13, 17, 14, 19, 16, 21, 18, 23, 20, 25, 22, 27, 24, 29, 26, 31, 28, 33, 30, 36, 32, 34, 38, 35, 40, 37, 42, 39, 44, 41, 46, 43, 48, 45, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 844914677;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> p = {1, 3, 0, 5, 2, 7, 4, 9, 6, 11, 8, 13, 10, 15, 12, 17, 14, 19, 16, 21, 18, 23, 20, 25, 22, 27, 24, 29, 26, 31, 28, 33, 30, 35, 32, 37, 34, 39, 36, 41, 38, 43, 40, 45, 42, 48, 44, 46, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 224476724;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> p = {2, 0, 4, 1, 6, 3, 8, 5, 10, 7, 12, 9, 14, 11, 16, 13, 18, 15, 20, 17, 22, 19, 24, 21, 26, 23, 28, 25, 30, 27, 32, 29, 34, 31, 36, 33, 38, 35, 40, 37, 42, 39, 44, 41, 46, 43, 48, 45, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 752033767;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> p = {49, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> p = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 49, 0, 44, 45, 46, 47, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 1712304;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> p = {1, 2, 3, 4, 38, 0, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 37};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 225407879;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> p = {17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 41, 16, 39, 42, 43, 44, 45, 46, 47, 48, 49, 40};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 149362102;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> p = {7, 0, 1, 2, 3, 4, 5, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 34, 6, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 35, 36, 37, 38, 49, 33, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 700807595;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> p = {3, 0, 1, 5, 2, 7, 4, 9, 6, 12, 8, 10, 13, 16, 11, 14, 18, 15, 21, 17, 19, 23, 20, 26, 22, 24, 27, 29, 25, 31, 28, 32, 34, 30, 36, 33, 38, 35, 40, 37, 42, 39, 43, 45, 41, 48, 44, 46, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 316948678;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> p = {1, 2, 3, 11, 0, 4, 5, 6, 7, 8, 9, 12, 21, 10, 13, 14, 15, 16, 17, 18, 19, 22, 23, 24, 25, 26, 27, 28, 36, 20, 29, 30, 31, 32, 33, 34, 41, 35, 37, 38, 39, 48, 40, 42, 43, 44, 45, 46, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 915507424;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> p = {2, 0, 5, 1, 3, 7, 4, 10, 6, 8, 14, 9, 11, 12, 17, 13, 15, 18, 20, 16, 22, 19, 24, 21, 26, 23, 28, 25, 30, 27, 31, 33, 29, 34, 37, 32, 35, 39, 36, 40, 41, 45, 38, 42, 43, 47, 44, 48, 49, 46};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 870443491;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> p = {1, 2, 3, 5, 0, 7, 4, 8, 9, 10, 11, 12, 15, 6, 13, 16, 18, 14, 19, 21, 17, 22, 24, 20, 25, 28, 23, 26, 29, 31, 27, 33, 30, 36, 32, 34, 40, 35, 37, 38, 42, 39, 43, 44, 49, 41, 45, 46, 47, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 217330693;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> p = {1, 5, 0, 2, 3, 6, 7, 8, 9, 11, 4, 12, 14, 10, 20, 13, 15, 16, 17, 18, 21, 22, 27, 19, 23, 24, 25, 28, 29, 32, 26, 30, 34, 31, 35, 36, 37, 38, 39, 40, 41, 42, 43, 46, 33, 44, 47, 49, 45, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 32191283;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> p = {1, 4, 0, 2, 6, 3, 8, 5, 9, 11, 7, 13, 10, 15, 12, 17, 14, 19, 16, 21, 18, 24, 20, 22, 26, 23, 28, 25, 30, 27, 32, 29, 35, 31, 33, 37, 34, 38, 40, 36, 41, 43, 39, 45, 42, 47, 44, 49, 46, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 626640117;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> p = {21, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 22, 23, 24, 29, 20, 25, 26, 27, 37, 28, 30, 31, 32, 33, 34, 35, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 36};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 913707956;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> p = {4, 0, 1, 2, 5, 6, 12, 3, 7, 8, 9, 10, 13, 14, 15, 16, 17, 18, 19, 20, 25, 11, 21, 22, 23, 26, 28, 24, 29, 30, 31, 32, 33, 34, 35, 36, 48, 27, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 950674766;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> p = {1, 3, 0, 5, 2, 7, 4, 8, 10, 6, 11, 12, 14, 9, 16, 13, 17, 18, 20, 15, 22, 19, 24, 21, 26, 23, 29, 25, 27, 31, 28, 33, 30, 35, 32, 36, 38, 34, 40, 37, 42, 39, 44, 41, 46, 43, 48, 45, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 969365121;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> p = {2, 0, 4, 1, 7, 3, 5, 8, 9, 11, 6, 13, 10, 15, 12, 17, 14, 19, 16, 21, 18, 23, 20, 26, 22, 24, 28, 25, 30, 27, 32, 29, 34, 31, 35, 39, 33, 36, 37, 40, 42, 38, 44, 41, 45, 48, 43, 46, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 592218195;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> p = {4, 0, 1, 2, 6, 3, 8, 5, 11, 7, 9, 14, 10, 12, 15, 17, 13, 18, 20, 16, 23, 19, 21, 25, 22, 26, 28, 24, 31, 27, 29, 32, 33, 35, 30, 37, 34, 40, 36, 38, 41, 42, 45, 39, 43, 44};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 78053512;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> p = {2, 0, 4, 1, 6, 3, 8, 5, 10, 7, 12, 9, 14, 11, 16, 13, 18, 15, 20, 17, 22, 19, 24, 21, 26, 23, 28, 25, 30, 27, 32, 29, 34, 31, 33};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 595888523;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> p = {1, 10, 0, 2, 3, 4, 5, 6, 7, 8, 13, 9, 11, 14, 18, 12, 15, 16, 19, 20, 21, 17};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 627488663;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> p = {2, 0, 4, 1, 6, 3, 8, 5, 7};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 1385;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> p = {2, 0, 3, 4, 6, 1, 8, 5, 11, 7, 9, 12, 14, 10, 16, 13, 18, 15, 20, 17, 22, 19, 24, 21, 27, 23, 25, 29, 26, 31, 28, 33, 30, 36, 32, 34, 38, 35, 41, 37, 39, 42, 40};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 796431253;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> p = {3, 0, 1, 4, 6, 2, 7, 9, 5, 10, 12, 8, 15, 11, 13, 16, 17, 21, 14, 18, 19, 22, 25, 20, 23, 27, 24, 31, 26, 28, 29, 34, 30, 32, 36, 33, 40, 35, 37, 38, 43, 39, 41, 44, 47, 42, 45, 49, 46, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 125485734;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> p = {1, 3, 0, 5, 2, 7, 4, 8, 10, 6, 12, 9, 14, 11, 16, 13, 18, 15, 19, 17};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 716743312;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> p = {1, 3, 0, 5, 2, 7, 4, 9, 6, 11, 8, 13, 10, 15, 12, 17, 14, 19, 16, 21, 18, 23, 20, 25, 22, 27, 24, 29, 26, 31, 28, 33, 30, 35, 32, 37, 34, 39, 36, 41, 38, 43, 40, 45, 42, 47, 44, 49, 46, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 752033767;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> p = {2, 0, 3, 6, 1, 4, 7, 10, 5, 8, 13, 9, 11, 15, 12, 17, 14, 18, 19, 22, 16, 20, 23, 26, 21, 24, 28, 25, 29, 31, 27, 33, 30, 34, 36, 32, 37, 41, 35, 38, 39, 42, 44, 40, 46, 43, 48, 45, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 977737667;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> p = {2, 0, 3, 4, 5, 8, 1, 6, 13, 7, 9, 10, 11, 15, 12, 17, 14, 19, 16, 21, 18, 23, 20, 27, 22, 24, 25, 28, 30, 26, 32, 29, 33, 35, 31, 37, 34, 39, 36, 41, 38, 43, 40, 45, 42, 46, 47, 48, 49, 44};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 113125603;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> p = {1, 3, 0, 5, 2, 7, 4, 8, 10, 6, 12, 9, 14, 11, 16, 13, 24, 47, 25, 26, 45, 32, 46, 31, 18, 43, 44, 15, 19, 37, 17, 20, 21, 22, 23, 27, 28, 41, 42, 29, 30, 33, 35, 36, 34, 49, 38, 40, 39, 48};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
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
    vector<int> p = {2, 0, 4, 1, 6, 3, 8, 5, 9, 11, 7, 13, 10, 15, 12, 16, 18, 14, 20, 17, 24, 19, 21, 22, 25, 28, 23, 26, 29, 30, 32, 27, 33, 34, 36, 31, 39, 35, 37, 40, 42, 38, 44, 41, 45, 48, 43, 46, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 728792389;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> p = {2, 0, 4, 1, 6, 3, 8, 5, 10, 7, 12, 9, 14, 11, 16, 13, 18, 15, 20, 17, 22, 19, 24, 21, 26, 23, 28, 25, 30, 27, 32, 29, 34, 31, 36, 33, 38, 35, 40, 37, 42, 39, 44, 41, 46, 43, 48, 45, 49, 47};
    AdjacentSwaps* pObj = new AdjacentSwaps();
    clock_t start = clock();
    int result = pObj->theCount(p);
    clock_t end = clock();
    delete pObj;
    int expected = 752033767;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14542&pm=11537
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
 
class AdjacentSwaps {
public:
  int theCount(vector <int>);
};
 
const int md = (int)(1e9+7);
int f[55][55], d[55][55];
 
int AdjacentSwaps::theCount(vector <int> p) {
  int n = p.size(), i, j, k, q, ok, ft;
  int b[55], c[55];
  memset(d,0,sizeof(d));
  for (i=0;i<=50;i++) d[i][0] = 1;
  for (i=1;i<=50;i++)
    for (j=1;j<=i;j++) d[i][j] = (d[i-1][j]+d[i-1][j-1]) % md;
  for (i=n-1;i>=0;i--)
    for (j=i;j<n;j++)
      if (i == j) f[i][j] = 1; else {
        f[i][j] = 0;
        for (k=i;k<=j;k++) b[k] = p[k];
        sort(b+i,b+j+1);
        for (k=i;k<j;k++) {
          for (q=0;q<n;q++) c[q] = 0;
          for (q=i;q<k;q++) c[b[q]] = 1;
          c[b[k+1]] = 1;
          ok = 1;
          for (q=i;q<=k;q++)
            if (!c[p[q]]) { ok = 0; break; }
          if (ok) {
            ft = (long long)f[i][k]*f[k+1][j] % md;
            ft = (long long)ft*d[j-i-1][k-i] % md;
            f[i][j] = (f[i][j]+ft) % md;
          }
        }
      }
  return f[0][n-1];
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/