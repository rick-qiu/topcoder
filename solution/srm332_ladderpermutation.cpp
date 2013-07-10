/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6175
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

class LadderPermutation {
public:
    vector<int> createLadder(int n, int m, int k);
};

vector<int> LadderPermutation::createLadder(int n, int m, int k) {
    vector<int> ret;
    return ret;
}


int test0() {
    int n = 4;
    int m = 2;
    int k = 2;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 4, 3};
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
    int m = 2;
    int k = 2;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 2;
    int m = 1;
    int k = 1;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 6;
    int m = 3;
    int k = 2;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 4, 3, 6, 5};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 6;
    int m = 2;
    int k = 3;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 1, 6, 5, 4};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 7;
    int m = 4;
    int k = 4;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 7, 6, 5, 4};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 6;
    int m = 4;
    int k = 2;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 3, 6, 5};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 6;
    int m = 4;
    int k = 3;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 6, 5, 4};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 6;
    int m = 3;
    int k = 3;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 6, 5, 4};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 6;
    int m = 4;
    int k = 3;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 6, 5, 4};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 6;
    int m = 4;
    int k = 4;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 7;
    int m = 3;
    int k = 3;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 3, 2, 7, 6, 5};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 9;
    int m = 3;
    int k = 3;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 1, 6, 5, 4, 9, 8, 7};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 9;
    int m = 4;
    int k = 2;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 9;
    int m = 4;
    int k = 3;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 6, 5, 4, 9, 8, 7};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 9;
    int m = 4;
    int k = 4;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 5, 4, 3, 9, 8, 7, 6};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 9;
    int m = 5;
    int k = 5;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 9, 8, 7, 6, 5};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 9;
    int m = 4;
    int k = 5;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 3, 9, 8, 7, 6, 5};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 9;
    int m = 5;
    int k = 4;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5, 4, 9, 8, 7, 6};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 9;
    int m = 5;
    int k = 5;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 9, 8, 7, 6, 5};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 9;
    int m = 5;
    int k = 6;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 9;
    int m = 6;
    int k = 5;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 6;
    int m = 1;
    int k = 5;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 6;
    int m = 1;
    int k = 6;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 6;
    int m = 2;
    int k = 5;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 6, 5, 4, 3, 2};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 6;
    int m = 6;
    int k = 1;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 6;
    int m = 5;
    int k = 1;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 6;
    int m = 5;
    int k = 2;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 6, 5};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 1;
    int m = 1;
    int k = 1;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 2;
    int m = 2;
    int k = 2;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 50;
    int m = 8;
    int k = 8;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 10, 9, 8, 7, 6, 5, 4, 3, 18, 17, 16, 15, 14, 13, 12, 11, 26, 25, 24, 23, 22, 21, 20, 19, 34, 33, 32, 31, 30, 29, 28, 27, 42, 41, 40, 39, 38, 37, 36, 35, 50, 49, 48, 47, 46, 45, 44, 43};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 50;
    int m = 8;
    int k = 7;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 8, 7, 6, 5, 4, 3, 2, 15, 14, 13, 12, 11, 10, 9, 22, 21, 20, 19, 18, 17, 16, 29, 28, 27, 26, 25, 24, 23, 36, 35, 34, 33, 32, 31, 30, 43, 42, 41, 40, 39, 38, 37, 50, 49, 48, 47, 46, 45, 44};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 50;
    int m = 7;
    int k = 8;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 10, 9, 8, 7, 6, 5, 4, 3, 18, 17, 16, 15, 14, 13, 12, 11, 26, 25, 24, 23, 22, 21, 20, 19, 34, 33, 32, 31, 30, 29, 28, 27, 42, 41, 40, 39, 38, 37, 36, 35, 50, 49, 48, 47, 46, 45, 44, 43};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 50;
    int m = 1;
    int k = 50;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 50;
    int m = 50;
    int k = 1;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 1;
    int m = 1;
    int k = 1;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 11;
    int m = 4;
    int k = 8;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 11, 10, 9, 8, 7, 6, 5, 4};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 16;
    int m = 3;
    int k = 6;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1, 10, 9, 8, 7, 6, 5, 16, 15, 14, 13, 12, 11};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 22;
    int m = 2;
    int k = 11;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 4;
    int m = 4;
    int k = 1;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 15;
    int m = 14;
    int k = 6;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 39;
    int m = 13;
    int k = 28;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 43;
    int m = 31;
    int k = 14;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 9;
    int m = 3;
    int k = 5;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 3, 2, 9, 8, 7, 6, 5};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 13;
    int m = 11;
    int k = 4;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 25;
    int m = 4;
    int k = 22;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 15;
    int m = 12;
    int k = 15;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 25;
    int m = 23;
    int k = 21;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 2;
    int m = 1;
    int k = 1;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 26;
    int m = 1;
    int k = 16;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 1;
    int m = 1;
    int k = 1;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 39;
    int m = 28;
    int k = 22;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 11;
    int m = 8;
    int k = 7;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 48;
    int m = 31;
    int k = 48;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 13;
    int m = 9;
    int k = 4;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 9, 8, 13, 12, 11, 10};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 5;
    int m = 4;
    int k = 3;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 45;
    int m = 23;
    int k = 26;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 48;
    int m = 33;
    int k = 17;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 1;
    int m = 1;
    int k = 1;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 39;
    int m = 30;
    int k = 8;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 31, 30, 29, 39, 38, 37, 36, 35, 34, 33, 32};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 8;
    int m = 8;
    int k = 7;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 30;
    int m = 26;
    int k = 21;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 15;
    int m = 2;
    int k = 10;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 15;
    int m = 14;
    int k = 3;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 14;
    int m = 8;
    int k = 14;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 9;
    int m = 2;
    int k = 3;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 9;
    int m = 6;
    int k = 5;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 15;
    int m = 3;
    int k = 10;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 4, 3, 2, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 37;
    int m = 28;
    int k = 3;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 24, 28, 27, 26, 31, 30, 29, 34, 33, 32, 37, 36, 35};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 4;
    int m = 1;
    int k = 1;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 40;
    int m = 33;
    int k = 16;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 31;
    int m = 14;
    int k = 23;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 25;
    int m = 9;
    int k = 21;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 41;
    int m = 6;
    int k = 4;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 4;
    int m = 1;
    int k = 1;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 6;
    int m = 3;
    int k = 3;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 6, 5, 4};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 50;
    int m = 20;
    int k = 5;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 15, 14, 13, 20, 19, 18, 17, 16, 25, 24, 23, 22, 21, 30, 29, 28, 27, 26, 35, 34, 33, 32, 31, 40, 39, 38, 37, 36, 45, 44, 43, 42, 41, 50, 49, 48, 47, 46};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 3;
    int m = 2;
    int k = 3;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 10;
    int m = 3;
    int k = 4;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 6, 5, 4, 3, 10, 9, 8, 7};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 6;
    int m = 4;
    int k = 4;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 2;
    int m = 2;
    int k = 2;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 50;
    int m = 13;
    int k = 13;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 10, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 10;
    int m = 10;
    int k = 10;
    LadderPermutation* pObj = new LadderPermutation();
    clock_t start = clock();
    vector<int> result = pObj->createLadder(n, m, k);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653739&rd=10012&pm=6175
********************************************************************************
#include <vector> 
#include <algorithm> 
 
using namespace std; 
 
int Count[50]; 
 
struct LadderPermutation { 
  vector <int> createLadder(int n, int m, int k) { 
    vector <int> ret; 
    int sum = 0; 
    for (int i = 0; i < m; i++) { 
      Count[i] = 1; 
    } 
    Count[m - 1] = k; 
     
    sum = (m - 1) + k; 
    if (sum > n || k * m < n) return ret; 
     
    printf("sum = %d\n", sum); 
    while (true) { 
      if (sum == n) break; else sum++; 
      for (int i = m - 1; i >= 0; i--) { 
        if (Count[i] != k) { 
          Count[i]++; 
          break; 
        } 
      } 
    } 
    int mm = 0; 
    for (int i = 0; i < m; i++) { 
      mm += Count[i]; 
      for (int j = 0; j < Count[i]; j++) { 
        ret.push_back(mm - j); 
      } 
    } 
    return ret; 
  } 
};

********************************************************************************
*******************************************************************************/