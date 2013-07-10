/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6159
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

class CyclesInPermutations {
public:
    int maxCycle(vector<int> board);
};

int CyclesInPermutations::maxCycle(vector<int> board) {
    int ret;
    return ret;
}


int test0() {
    vector<int> board = {3, 2, 4, 1, 6, 5};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
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
    vector<int> board = {1, 2, 3, 4, 5, 6};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> board = {5, 1, 2, 3, 4};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> board = {3, 2, 1};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> board = {1, 3, 2};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> board = {2, 1, 3};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> board = {5, 7, 14, 6, 16, 10, 8, 17, 11, 12, 18, 3, 4, 13, 2, 15, 9, 1, 20, 19};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> board = {1};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> board = {1, 2};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> board = {2, 1};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> board = {13, 28, 3, 12, 26, 48, 30, 32, 4, 47, 5, 25, 36, 22, 1, 16, 50, 39, 18, 31, 9, 35, 11, 43, 34, 42, 29, 45, 41, 10, 49, 14, 19, 24, 44, 15, 33, 37, 38, 46, 23, 2, 8, 7, 17, 40, 21, 6, 20, 27};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> board = {8, 4, 6, 5, 2, 7, 10, 9, 3, 1};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> board = {7, 23, 17, 1, 18, 15, 5, 21, 19, 16, 10, 22, 14, 13, 3, 9, 8, 12, 20, 4, 6, 11, 2};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> board = {23, 22, 17, 18, 3, 32, 9, 26, 27, 7, 28, 30, 34, 10, 11, 1, 19, 29, 20, 16, 4, 25, 13, 24, 6, 12, 2, 8, 35, 14, 21, 33, 5, 31, 15};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> board = {26, 33, 19, 1, 6, 21, 8, 29, 31, 18, 22, 2, 11, 7, 32, 5, 12, 25, 38, 23, 37, 16, 20, 34, 10, 15, 27, 14, 24, 4, 36, 9, 28, 30, 13, 3, 35, 17};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> board = {12, 14, 9, 10, 15, 4, 13, 1, 7, 6, 8, 17, 5, 3, 2, 11, 16};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> board = {3, 33, 34, 15, 14, 45, 50, 10, 1, 38, 36, 48, 12, 13, 26, 28, 47, 4, 37, 27, 30, 41, 42, 29, 35, 49, 20, 5, 18, 16, 21, 32, 2, 46, 17, 6, 31, 24, 25, 22, 9, 40, 44, 8, 19, 43, 7, 11, 23, 39};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> board = {7, 1, 13, 10, 9, 14, 17, 4, 8, 2, 11, 12, 6, 15, 16, 5, 19, 18, 3, 20, 21};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> board = {17, 4, 26, 7, 8, 5, 28, 13, 33, 15, 32, 27, 10, 23, 3, 9, 2, 6, 30, 12, 22, 36, 19, 25, 11, 35, 1, 34, 31, 37, 21, 29, 20, 16, 18, 24, 14};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> board = {27, 36, 9, 26, 28, 25, 14, 7, 19, 34, 23, 11, 35, 22, 31, 16, 2, 12, 30, 4, 32, 8, 33, 20, 21, 39, 18, 3, 37, 6, 5, 29, 1, 10, 38, 13, 17, 24, 15};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> board = {7, 43, 23, 42, 17, 27, 4, 11, 30, 1, 50, 18, 49, 10, 46, 12, 31, 19, 21, 9, 41, 33, 24, 39, 47, 40, 14, 15, 38, 5, 32, 22, 13, 20, 26, 6, 29, 3, 44, 45, 36, 8, 35, 34, 16, 37, 2, 25, 28, 48};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> board = {12, 25, 24, 3, 22, 14, 16, 15, 6, 11, 8, 17, 21, 1, 20, 18, 4, 23, 13, 26, 9, 2, 7, 10, 19, 5};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> board = {7, 1, 2, 3, 6, 4, 5};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> board = {3, 12, 15, 8, 14, 4, 6, 2, 7, 9, 1, 5, 10, 13, 11, 16};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> board = {12, 13, 17, 7, 6, 5, 9, 15, 10, 2, 18, 14, 16, 11, 1, 3, 8, 19, 4};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> board = {8, 36, 16, 19, 11, 2, 39, 23, 7, 24, 41, 12, 17, 42, 26, 29, 1, 28, 10, 38, 43, 46, 9, 21, 3, 6, 25, 35, 18, 22, 27, 33, 40, 20, 15, 32, 5, 14, 4, 13, 30, 45, 34, 44, 37, 31};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> board = {2, 3, 4, 1};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> board = {12, 14, 19, 24, 10, 4, 17, 2, 23, 28, 13, 26, 16, 22, 5, 6, 8, 21, 20, 9, 27, 1, 15, 18, 11, 25, 29, 7, 3};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> board = {4, 6, 7, 15, 1, 3, 2, 13, 14, 17, 18, 11, 8, 5, 12, 10, 19, 16, 9};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> board = {18, 36, 38, 7, 31, 6, 34, 5, 13, 48, 26, 46, 49, 27, 29, 42, 41, 24, 14, 43, 39, 3, 23, 25, 20, 28, 2, 4, 8, 37, 19, 17, 33, 35, 1, 30, 15, 9, 45, 22, 40, 21, 12, 47, 16, 11, 10, 32, 50, 44};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
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
    vector<int> board = {12, 9, 4, 5, 7, 6, 13, 3, 11, 10, 8, 1, 2};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> board = {7, 2, 27, 10, 21, 4, 3, 1, 18, 6, 23, 20, 13, 9, 17, 24, 14, 11, 19, 22, 16, 25, 28, 5, 8, 12, 15, 26};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> board = {9, 3, 8, 2, 1, 6, 5, 12, 7, 10, 11, 4, 13, 14, 15};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
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
    vector<int> board = {1, 13, 3, 9, 6, 20, 12, 8, 22, 15, 14, 7, 2, 11, 10, 16, 17, 4, 19, 5, 21, 18};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> board = {44, 34, 40, 42, 15, 10, 19, 2, 48, 46, 38, 36, 4, 3, 28, 16, 11, 18, 27, 22, 21, 29, 24, 6, 33, 47, 17, 25, 39, 30, 49, 43, 1, 26, 41, 13, 12, 32, 9, 23, 35, 37, 45, 31, 5, 14, 8, 20, 7};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> board = {6, 8, 9, 10, 1, 4, 7, 2, 3, 5};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> board = {10, 9, 3, 6, 5, 1, 4, 8, 2, 7};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> board = {24, 16, 23, 4, 19, 6, 18, 15, 30, 25, 11, 7, 28, 21, 33, 41, 34, 2, 40, 43, 8, 22, 5, 29, 31, 14, 39, 13, 36, 12, 49, 20, 46, 37, 35, 45, 47, 44, 48, 26, 9, 17, 42, 38, 1, 27, 32, 3, 10};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> board = {4, 7, 6, 1, 3, 2, 5};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
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
    vector<int> board = {36, 2, 21, 4, 44, 29, 15, 1, 6, 18, 11, 31, 17, 38, 7, 16, 13, 20, 19, 47, 12, 22, 35, 24, 33, 14, 43, 37, 3, 30, 45, 25, 41, 39, 23, 9, 28, 10, 5, 46, 32, 34, 27, 26, 42, 40, 48, 50, 49, 8};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> board = {1, 3, 2, 4, 5, 6, 7};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> board = {1, 11, 4, 5, 13, 6, 12, 8, 9, 10, 7, 2, 3};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> board = {1, 9, 19, 6, 7, 4, 18, 21, 5, 14, 23, 12, 13, 2, 15, 22, 17, 29, 10, 25, 26, 27, 11, 24, 20, 8, 16, 28, 3};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
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
    vector<int> board = {7, 2, 30, 4, 5, 6, 12, 15, 13, 10, 11, 1, 32, 18, 23, 9, 8, 14, 28, 19, 20, 29, 17, 27, 21, 16, 24, 26, 25, 3, 31, 22, 33, 34};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> board = {3, 15, 14, 4, 27, 6, 12, 17, 31, 8, 11, 32, 1, 24, 23, 16, 10, 18, 34, 39, 38, 21, 33, 7, 5, 20, 35, 30, 29, 2, 9, 13, 28, 19, 25, 26, 37, 22, 36};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> board = {35, 7, 3, 4, 5, 24, 38, 8, 46, 15, 28, 6, 41, 10, 14, 32, 13, 45, 27, 9, 18, 22, 48, 12, 26, 31, 19, 11, 40, 36, 25, 16, 1, 49, 33, 30, 43, 2, 39, 29, 17, 23, 37, 44, 21, 20, 47, 42, 34, 50};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> board = {19, 7, 43, 4, 5, 6, 2, 20, 11, 34, 9, 28, 1, 22, 14, 16, 42, 18, 13, 25, 21, 15, 26, 10, 8, 29, 38, 12, 23, 17, 31, 32, 35, 24, 36, 33, 37, 27, 39, 3, 41, 30, 40};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> board = {1, 13, 3, 22, 5, 7, 10, 9, 8, 6, 14, 11, 27, 12, 15, 16, 23, 20, 24, 18, 21, 4, 17, 25, 19, 26, 2, 28, 29};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
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
    vector<int> board = {28, 17, 8, 6, 23, 30, 7, 13, 27, 26, 9, 12, 3, 14, 15, 34, 2, 10, 21, 33, 19, 22, 35, 24, 20, 18, 11, 1, 29, 4, 31, 32, 25, 16, 5};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> board = {30, 20, 3, 16, 12, 6, 7, 8, 13, 1, 36, 5, 19, 40, 39, 4, 17, 22, 9, 2, 37, 18, 33, 32, 15, 26, 38, 21, 29, 10, 27, 24, 44, 42, 35, 11, 28, 31, 25, 41, 14, 34, 43, 23};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
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
    vector<int> board = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
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
    vector<int> board = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> board = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> board = {1, 2, 3, 4, 5};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> board = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
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
    vector<int> board = {13, 24, 15, 30, 23, 45, 16, 48, 42, 44, 9, 8, 17, 2, 29, 11, 1, 18, 40, 3, 49, 43, 10, 4, 46, 6, 38, 39, 41, 25, 14, 12, 21, 33, 32, 22, 7, 31, 50, 27, 5, 37, 19, 26, 20, 34, 35, 36, 47, 28};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> board = {5, 8, 11, 2, 10, 6, 1, 7, 12, 4, 3, 14, 13, 9};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> board = {9, 2, 3, 7, 10, 5, 6, 1, 8, 4, 11};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> board = {1, 7, 11, 12, 2, 5, 6, 8, 4, 10, 13, 3, 14, 9};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> board = {1, 3, 4, 8, 6, 5, 7, 2};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
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
    vector<int> board = {3, 12, 7, 13, 4, 38, 45, 20, 40, 14, 33, 34, 21, 26, 16, 5, 43, 50, 10, 25, 39, 2, 1, 23, 35, 8, 6, 22, 41, 32, 47, 31, 36, 49, 27, 29, 46, 42, 17, 48, 9, 24, 18, 44, 28, 11, 30, 19, 15, 37};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> board = {7, 27, 22, 6, 16, 1, 26, 19, 20, 8, 5, 24, 10, 12, 15, 18, 9, 23, 14, 13, 11, 17, 25, 21, 4, 3, 2};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> board = {6, 32, 19, 23, 34, 25, 21, 33, 14, 7, 9, 3, 2, 1, 30, 10, 4, 20, 18, 27, 12, 26, 5, 8, 15, 28, 11, 22, 13, 24, 31, 35, 17, 29, 16};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> board = {11, 2, 3, 8, 6, 10, 5, 7, 4, 1, 9};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> board = {19, 9, 10, 25, 4, 32, 30, 31, 22, 12, 8, 29, 14, 24, 17, 16, 35, 34, 28, 27, 18, 21, 6, 26, 33, 11, 23, 1, 7, 2, 20, 5, 15, 13, 3};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> board = {6, 32, 1, 47, 8, 11, 40, 27, 19, 28, 44, 45, 15, 10, 37, 18, 23, 12, 36, 13, 31, 29, 42, 7, 4, 34, 43, 21, 5, 17, 16, 41, 14, 24, 49, 39, 38, 33, 25, 20, 50, 48, 9, 30, 3, 22, 2, 46, 26, 35};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> board = {8, 5, 27, 25, 29, 18, 1, 24, 7, 16, 28, 4, 20, 6, 10, 19, 11, 21, 12, 22, 17, 26, 9, 3, 2, 23, 15, 13, 14};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> board = {3, 13, 12, 14, 11, 5, 8, 9, 15, 4, 10, 7, 1, 2, 6};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> board = {13, 11, 10, 16, 4, 2, 1, 6, 3, 14, 9, 17, 8, 5, 12, 15, 7};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> board = {16, 23, 31, 25, 14, 42, 29, 22, 32, 12, 36, 4, 26, 18, 28, 8, 27, 7, 39, 34, 38, 15, 17, 21, 13, 35, 5, 2, 20, 33, 9, 19, 1, 24, 40, 3, 41, 10, 6, 11, 43, 37, 30};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> board = {41, 12, 21, 5, 32, 48, 2, 17, 47, 19, 33, 25, 16, 26, 22, 40, 7, 9, 8, 10, 30, 35, 20, 23, 45, 42, 18, 49, 15, 44, 29, 46, 31, 4, 6, 50, 27, 13, 34, 3, 14, 43, 39, 28, 11, 38, 36, 37, 24, 1};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> board = {49, 44, 39, 13, 32, 48, 36, 38, 27, 43, 18, 33, 10, 24, 7, 1, 40, 16, 45, 12, 15, 17, 42, 8, 41, 20, 21, 19, 37, 4, 6, 25, 23, 29, 30, 14, 46, 5, 2, 31, 34, 28, 9, 50, 35, 22, 26, 3, 47, 11};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> board = {48, 50, 34, 2, 47, 33, 11, 12, 15, 13, 24, 19, 44, 10, 31, 42, 27, 20, 22, 1, 14, 49, 4, 21, 9, 3, 23, 36, 17, 37, 35, 45, 8, 39, 29, 5, 43, 26, 46, 32, 6, 41, 18, 40, 16, 25, 7, 38, 30, 28};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
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
    vector<int> board = {16, 49, 33, 3, 25, 22, 15, 24, 43, 27, 1, 13, 32, 34, 37, 38, 47, 48, 46, 40, 31, 10, 50, 20, 7, 14, 41, 35, 8, 11, 30, 17, 5, 21, 2, 29, 45, 44, 42, 26, 9, 4, 39, 19, 23, 12, 28, 6, 18, 36};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> board = {4, 43, 15, 29, 39, 19, 24, 10, 49, 2, 17, 18, 16, 36, 35, 25, 38, 9, 21, 8, 30, 13, 26, 28, 7, 40, 20, 5, 41, 27, 47, 42, 23, 37, 48, 44, 32, 34, 46, 11, 22, 3, 31, 50, 14, 33, 45, 6, 1, 12};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> board = {49, 10, 36, 44, 42, 1, 12, 35, 24, 22, 4, 32, 21, 47, 8, 14, 41, 28, 23, 38, 30, 27, 48, 50, 39, 46, 34, 37, 9, 6, 20, 45, 18, 15, 19, 25, 26, 31, 5, 3, 33, 2, 7, 16, 17, 29, 43, 11, 40, 13};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> board = {26, 31, 32, 14, 30, 34, 35, 6, 17, 42, 16, 43, 28, 13, 21, 41, 50, 2, 15, 4, 19, 10, 8, 27, 3, 20, 25, 33, 9, 49, 23, 46, 45, 48, 5, 18, 7, 36, 38, 22, 47, 12, 24, 29, 11, 37, 39, 40, 1, 44};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> board = {30, 42, 37, 44, 8, 28, 29, 46, 38, 14, 19, 49, 17, 50, 24, 5, 6, 32, 1, 48, 39, 36, 22, 27, 18, 45, 3, 26, 23, 41, 10, 7, 12, 20, 40, 31, 11, 34, 4, 47, 13, 16, 2, 15, 35, 43, 9, 33, 21, 25};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> board = {40, 31, 6, 41, 8, 5, 19, 12, 42, 29, 9, 50, 15, 38, 47, 1, 36, 46, 32, 44, 2, 35, 27, 48, 14, 11, 25, 13, 49, 37, 7, 3, 43, 30, 21, 34, 18, 4, 16, 17, 10, 22, 39, 20, 26, 24, 23, 28, 45, 33};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> board = {10, 32, 8, 41, 7, 33, 42, 35, 45, 9, 23, 15, 17, 25, 44, 34, 2, 31, 5, 3, 12, 18, 40, 38, 47, 36, 24, 13, 1, 20, 37, 46, 28, 22, 27, 21, 30, 49, 11, 50, 48, 14, 26, 16, 4, 6, 19, 39, 29, 43};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> board = {34, 23, 5, 36, 17, 3, 31, 40, 2, 8, 12, 18, 21, 24, 48, 10, 37, 38, 4, 22, 14, 41, 1, 26, 39, 20, 19, 32, 15, 11, 47, 6, 27, 28, 7, 9, 50, 30, 25, 44, 16, 13, 49, 46, 35, 33, 29, 43, 45, 42};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> board = {17, 8, 4, 3, 16, 13, 6, 10, 5, 7, 1, 14, 15, 12, 2, 9, 11};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> board = {1, 4, 2, 3, 6, 5};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> board = {16, 4, 7, 12, 1, 5, 2, 8, 11, 15, 10, 6, 17, 3, 13, 14, 9};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> board = {2, 20, 34, 10, 43, 9, 7, 25, 12, 1, 42, 29, 8, 30, 17, 11, 21, 16, 26, 31, 23, 22, 5, 37, 39, 24, 36, 3, 38, 14, 35, 27, 28, 18, 15, 13, 6, 32, 33, 4, 19, 41, 40};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> board = {1, 8, 4, 7, 6, 3, 2, 5};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> board = {1, 21, 3, 24, 19, 8, 27, 23, 9, 20, 25, 17, 4, 11, 22, 12, 13, 14, 26, 7, 28, 18, 15, 2, 5, 6, 29, 16, 10};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> board = {32, 35, 18, 39, 9, 37, 7, 25, 3, 21, 12, 26, 24, 14, 10, 34, 16, 20, 29, 33, 31, 1, 15, 36, 30, 19, 40, 38, 23, 8, 11, 22, 28, 13, 6, 17, 2, 27, 4, 41, 5};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> board = {4, 1, 2, 3};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> board = {14, 17, 8, 16, 5, 2, 33, 48, 28, 47, 7, 13, 3, 21, 29, 36, 38, 4, 15, 44, 41, 19, 30, 43, 45, 18, 24, 32, 42, 9, 6, 35, 27, 26, 10, 31, 40, 37, 39, 34, 1, 23, 20, 46, 11, 12, 22, 25};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> board = {5, 4, 20, 34, 9, 28, 6, 19, 26, 13, 24, 25, 11, 37, 3, 8, 39, 41, 40, 23, 30, 10, 15, 14, 31, 2, 36, 18, 35, 7, 33, 38, 17, 1, 21, 16, 29, 32, 12, 27, 22};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> board = {7, 24, 32, 19, 35, 29, 33, 22, 12, 25, 30, 26, 39, 27, 15, 8, 23, 13, 10, 11, 18, 14, 21, 4, 20, 5, 36, 6, 1, 28, 37, 38, 42, 9, 17, 2, 31, 34, 41, 16, 40, 3};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> board = {12, 15, 29, 20, 21, 38, 39, 37, 1, 32, 28, 34, 8, 13, 17, 23, 36, 16, 33, 35, 22, 11, 4, 6, 30, 3, 2, 19, 40, 14, 7, 9, 27, 26, 24, 10, 31, 18, 5, 25};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> board = {4, 3, 22, 1, 33, 18, 31, 2, 27, 35, 36, 14, 7, 15, 29, 24, 6, 37, 11, 40, 34, 46, 41, 26, 30, 43, 20, 42, 9, 19, 17, 12, 5, 47, 8, 39, 32, 44, 21, 45, 13, 25, 23, 10, 16, 38, 28};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> board = {16, 6, 17, 5, 41, 27, 13, 23, 42, 18, 26, 21, 33, 14, 29, 2, 28, 40, 31, 20, 25, 8, 1, 43, 44, 30, 36, 7, 10, 22, 38, 45, 39, 15, 9, 3, 35, 37, 11, 19, 32, 24, 12, 4, 34};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> board = {5, 7, 14, 6, 16, 10, 8, 17, 11, 12, 18, 3, 4, 13, 2, 15, 9, 1, 20, 19};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> board = {1};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> board = {1, 3, 2};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> board = {3, 2, 4, 1, 6, 5};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> board = {2, 3, 1};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> board = {1, 4, 3, 2, 9, 7, 8, 5, 6};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> board = {1, 3, 4, 2};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> board = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> board = {2, 1, 4, 3, 6, 5};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
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
    vector<int> board = {1, 2};
    CyclesInPermutations* pObj = new CyclesInPermutations();
    clock_t start = clock();
    int result = pObj->maxCycle(board);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22627776&rd=9993&pm=6159
********************************************************************************
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
 
using namespace std;
 
class CyclesInPermutations
{
public:
  int maxCycle(vector<int> board) {
    int maxCyc = 0;          
    vector<int> modBoard;
    modBoard.resize(board.size()+1);
 
    for (int k = 0; k < board.size(); k++) {
      modBoard[k+1] = board[k];
    }
 
    for (int i = 0; i < modBoard.size(); i++) {
      int j = modBoard[i];
      int steps = 1;
      while (j != i) {
        j = modBoard[j];
        steps++;  
      }
 
      maxCyc = max(maxCyc,steps);
    }
 
    return maxCyc;
  }
};

********************************************************************************
*******************************************************************************/