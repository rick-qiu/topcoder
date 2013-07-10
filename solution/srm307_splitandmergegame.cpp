/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6449
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

class SplitAndMergeGame {
public:
    int minMoves(vector<int> startState, vector<int> finishState);
};

int SplitAndMergeGame::minMoves(vector<int> startState, vector<int> finishState) {
    int ret;
    return ret;
}


int test0() {
    vector<int> startState = {1, 2};
    vector<int> finishState = {3};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {4, 2};
    vector<int> finishState = {2, 2, 2};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {1, 2, 3, 4, 5, 6};
    vector<int> finishState = {7, 7, 7};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> startState = {3, 4};
    vector<int> finishState = {1, 6};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {3, 1, 4, 20, 24, 16, 20};
    vector<int> finishState = {5, 15, 21, 14, 16, 12, 2, 3};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {22};
    vector<int> finishState = {22};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {26};
    vector<int> finishState = {7, 19};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {35};
    vector<int> finishState = {14, 11, 10};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {21};
    vector<int> finishState = {14, 1, 4, 2};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> startState = {5};
    vector<int> finishState = {1, 1, 1, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> startState = {14};
    vector<int> finishState = {2, 4, 2, 2, 3, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> startState = {18};
    vector<int> finishState = {3, 5, 2, 5, 1, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> startState = {14};
    vector<int> finishState = {2, 1, 2, 4, 1, 1, 1, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> startState = {18};
    vector<int> finishState = {6, 1, 3, 2, 1, 1, 1, 1, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> startState = {29, 10};
    vector<int> finishState = {31, 8};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> startState = {4, 39};
    vector<int> finishState = {36, 1, 6};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> startState = {30, 31};
    vector<int> finishState = {7, 9, 26, 19};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> startState = {39, 31};
    vector<int> finishState = {23, 19, 5, 15, 8};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> startState = {4, 14};
    vector<int> finishState = {5, 1, 4, 5, 2, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> startState = {13, 15};
    vector<int> finishState = {21, 2, 1, 1, 1, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> startState = {23, 6, 1, 1, 3, 2, 5, 4};
    vector<int> finishState = {39, 6};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {3, 21};
    vector<int> finishState = {4, 8, 2, 5, 1, 1, 1, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> startState = {12, 22};
    vector<int> finishState = {19, 6, 1, 2, 1, 1, 1, 1, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> startState = {6, 3, 32};
    vector<int> finishState = {38, 3};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> startState = {29, 7, 14};
    vector<int> finishState = {28, 10, 12};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> startState = {16, 39, 21};
    vector<int> finishState = {36, 13, 18, 9};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {25, 39, 1};
    vector<int> finishState = {5, 37, 14, 6, 3};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {29, 14, 36};
    vector<int> finishState = {13, 30, 18, 6, 5, 7};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {38, 23, 16};
    vector<int> finishState = {23, 15, 35, 1, 1, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> startState = {25, 6, 23};
    vector<int> finishState = {29, 12, 1, 4, 3, 1, 2, 2};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> startState = {29, 29, 18};
    vector<int> finishState = {37, 3, 6, 6, 4, 16, 2, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> startState = {38, 30, 30};
    vector<int> finishState = {9, 31, 12, 3, 28, 7, 5, 1, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> startState = {14, 35, 5, 12};
    vector<int> finishState = {38, 28};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> startState = {37, 39, 19, 3};
    vector<int> finishState = {31, 42, 25};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {6, 39, 39, 15};
    vector<int> finishState = {38, 40, 18, 3};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> startState = {11, 38, 30, 3};
    vector<int> finishState = {2, 14, 32, 26, 8};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {20, 7, 2, 14};
    vector<int> finishState = {3, 27, 5, 6, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> startState = {25, 22, 37, 22};
    vector<int> finishState = {21, 11, 22, 14, 13, 23, 2};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> startState = {11, 13, 5, 28};
    vector<int> finishState = {11, 18, 3, 13, 6, 3, 2, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> startState = {20, 14, 24, 40};
    vector<int> finishState = {4, 25, 23, 5, 3, 28, 5, 1, 4};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> startState = {24, 29, 19, 8};
    vector<int> finishState = {29, 13, 29, 3, 1, 1, 1, 1, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> startState = {28, 23, 25, 6, 10};
    vector<int> finishState = {23, 27, 42};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {32, 38, 28, 6, 4};
    vector<int> finishState = {45, 21, 35, 7};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> startState = {19, 30, 36, 20, 33};
    vector<int> finishState = {39, 36, 36, 25, 2};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> startState = {28, 30, 7, 32, 19};
    vector<int> finishState = {16, 18, 21, 22, 28, 11};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> startState = {32, 6, 10, 39, 12};
    vector<int> finishState = {3, 25, 17, 5, 34, 4, 11};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> startState = {1, 14, 22, 11, 6};
    vector<int> finishState = {11, 10, 9, 4, 2, 14, 2, 2};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> startState = {28, 6, 29, 17, 35};
    vector<int> finishState = {9, 25, 15, 30, 11, 21, 2, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> startState = {32, 21, 32, 25, 29};
    vector<int> finishState = {38, 33, 12, 6, 5, 30, 5, 4, 5, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> startState = {18, 6, 7, 40, 23, 11};
    vector<int> finishState = {41, 28, 32, 4};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> startState = {5, 38, 14, 6, 12, 9};
    vector<int> finishState = {19, 2, 14, 33, 16};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> startState = {14, 38, 26, 17, 6, 26};
    vector<int> finishState = {11, 28, 4, 42, 27, 15};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> startState = {18, 14, 21, 25, 39, 14};
    vector<int> finishState = {11, 26, 20, 10, 20, 26, 18};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> startState = {27, 22, 1, 37, 25, 22};
    vector<int> finishState = {39, 7, 5, 7, 9, 16, 39, 12};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> startState = {40, 5, 38, 2, 20, 28};
    vector<int> finishState = {34, 13, 16, 39, 26, 2, 1, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> startState = {9, 13, 9, 13, 6, 37};
    vector<int> finishState = {25, 37, 10, 8, 1, 2, 1, 1, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> startState = {4, 14, 17, 26, 10, 23, 30};
    vector<int> finishState = {41, 36, 47};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> startState = {39, 6, 4, 3, 25, 37, 31};
    vector<int> finishState = {32, 22, 23, 46, 22};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> startState = {3, 21, 40, 11, 18, 25, 30};
    vector<int> finishState = {22, 37, 21, 30, 21, 17};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> startState = {12, 22, 19, 23, 4, 1, 20};
    vector<int> finishState = {6, 19, 22, 22, 14, 5, 13};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {17, 37, 14, 31, 37, 29, 27};
    vector<int> finishState = {39, 39, 33, 10, 9, 35, 10, 17};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> startState = {3, 29, 22, 36, 27, 27, 38};
    vector<int> finishState = {17, 7, 34, 25, 6, 25, 13, 41, 14};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> startState = {12, 37, 1, 8, 20, 3, 28};
    vector<int> finishState = {38, 24, 39, 1, 1, 2, 1, 1, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> startState = {25, 6, 23, 29, 12, 8, 14, 28};
    vector<int> finishState = {39, 34, 23, 22, 27};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> startState = {20, 14, 24, 40, 4, 25, 23, 5};
    vector<int> finishState = {28, 14, 14, 30, 37, 32};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> startState = {24, 29, 19, 8, 29, 13, 29, 9};
    vector<int> finishState = {4, 20, 37, 36, 30, 21, 12};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> startState = {33, 29, 39, 19, 23, 29, 12, 25};
    vector<int> finishState = {32, 28, 37, 28, 13, 26, 32, 13};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> startState = {20, 21, 6, 25, 12, 27, 30, 40};
    vector<int> finishState = {27, 25, 7, 22, 40, 37, 3, 19, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> startState = {3, 25, 28, 16, 30, 35, 11, 20};
    vector<int> finishState = {23, 23, 27, 29, 39, 2, 17, 1, 4, 3};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> startState = {32, 6, 10, 39, 12, 2, 24, 16, 4};
    vector<int> finishState = {40, 43, 35, 27};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> startState = {1, 14, 22, 11, 6, 11, 14, 1, 24};
    vector<int> finishState = {34, 37, 20, 8, 5};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> startState = {28, 6, 29, 17, 35, 9, 25, 15, 30};
    vector<int> finishState = {45, 12, 20, 35, 40, 42};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> startState = {32, 21, 32, 25, 29, 37, 32, 11, 5};
    vector<int> finishState = {17, 42, 25, 35, 21, 37, 47};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> startState = {1, 21, 4, 36, 14, 13, 14, 35, 33};
    vector<int> finishState = {26, 36, 19, 19, 16, 18, 17, 20};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> startState = {25, 26, 26, 28, 32, 21, 35, 15, 19};
    vector<int> finishState = {22, 20, 22, 16, 12, 47, 48, 14, 26};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> startState = {11, 17, 33, 34, 21, 19, 13, 22, 25};
    vector<int> finishState = {19, 23, 9, 36, 15, 6, 39, 17, 4, 27};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> startState = {28, 13, 12, 2, 4, 11, 33, 2, 30, 19};
    vector<int> finishState = {37, 43, 37, 18, 19};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> startState = {14, 5, 19, 16, 33, 17, 11, 16, 36, 26};
    vector<int> finishState = {27, 25, 43, 40, 33, 25};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> startState = {7, 9, 12, 11, 4, 33, 14, 12, 11, 22};
    vector<int> finishState = {24, 35, 5, 19, 31, 15, 2, 4};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> startState = {16, 10, 32, 23, 30, 10, 4, 36, 31, 30};
    vector<int> finishState = {25, 29, 30, 23, 13, 24, 41, 29, 8};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> startState = {2, 2, 39, 37, 19, 8, 15, 11, 36, 37};
    vector<int> finishState = {35, 30, 16, 33, 10, 21, 10, 14, 20, 17};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> startState = {4, 15, 40, 32, 13, 15, 50, 46, 18, 11};
    vector<int> finishState = {27, 33, 19, 23, 12, 39, 34, 35, 20, 2};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {31, 4, 19, 24, 31, 29, 24, 33, 2, 17};
    vector<int> finishState = {23, 23, 18, 43, 34, 47, 4, 5, 6, 11};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> startState = {8, 2, 35, 11, 47, 32, 41, 12, 4, 28};
    vector<int> finishState = {7, 41, 15, 29, 45, 19, 37, 10, 3, 14};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> startState = {2, 39, 22, 4, 49, 4, 10, 33, 2, 28};
    vector<int> finishState = {13, 28, 6, 10, 20, 15, 7, 28, 27, 39};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> startState = {8, 31, 13, 4, 17, 35, 9, 46, 7, 15};
    vector<int> finishState = {48, 9, 44, 15, 14, 24, 21, 8, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> startState = {5, 29, 37, 14, 33, 7, 34, 46, 42, 32};
    vector<int> finishState = {12, 20, 46, 37, 29, 49, 34, 39, 5, 8};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> startState = {21, 25, 31, 42, 34, 31, 33, 37, 40, 33};
    vector<int> finishState = {49, 28, 38, 45, 28, 47, 36, 8, 12, 36};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> startState = {45, 37, 38, 14, 26, 8, 1, 11, 49, 7};
    vector<int> finishState = {37, 4, 50, 7, 38, 40, 41, 9, 2, 8};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {13, 9, 31, 45, 33, 9, 18, 31, 44, 46};
    vector<int> finishState = {39, 39, 48, 37, 35, 8, 41, 17, 5, 10};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> startState = {1};
    vector<int> finishState = {2};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> startState = {1};
    vector<int> finishState = {1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> startState = {2};
    vector<int> finishState = {2, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> startState = {2, 2};
    vector<int> finishState = {1, 2};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> startState = {1, 2, 3};
    vector<int> finishState = {3, 1, 1};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> startState = {19, 23, 9, 36, 15, 6, 39, 17, 4, 27};
    vector<int> finishState = {27, 4, 17, 39, 6, 15, 36, 9, 23, 19};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {23, 23, 27, 29, 39, 2, 17, 1, 4, 3};
    vector<int> finishState = {23, 40, 27, 29, 39, 2, 1, 4, 3};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {23, 23, 27, 29, 39, 2, 17, 1, 4, 3};
    vector<int> finishState = {23, 23, 27, 29, 39, 2, 17, 1, 4, 3};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> startState = {23, 23, 27, 29, 39, 2, 17, 1, 4, 3};
    vector<int> finishState = {23, 23, 27, 29, 39, 3, 17, 1, 4, 3};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> startState = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<int> finishState = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {42, 8, 18, 10, 11, 10, 49, 25, 39, 27};
    vector<int> finishState = {18, 11, 31, 42, 12, 32, 26, 1, 19, 47};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> startState = {1, 2, 3, 4, 6, 20, 24, 25, 25, 26};
    vector<int> finishState = {5, 10, 21, 24, 26, 50};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> startState = {15, 17};
    vector<int> finishState = {3, 4, 10, 15};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
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
    vector<int> startState = {50, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> finishState = {49, 49, 49, 49, 49, 49, 49, 49, 9, 9};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> startState = {1, 4, 5, 49};
    vector<int> finishState = {3, 48, 6, 2};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> startState = {42, 35, 20, 29, 13, 6, 32, 12, 46, 28};
    vector<int> finishState = {18, 1, 25, 9, 15, 46, 28, 42, 43, 36};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> startState = {50, 3, 7, 48, 50};
    vector<int> finishState = {30, 20, 12, 46, 50};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> startState = {5, 11, 12, 13, 1, 1, 1, 11};
    vector<int> finishState = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> startState = {1, 4, 2, 5, 1, 2, 48, 2, 8, 10};
    vector<int> finishState = {30, 2, 10, 10, 10, 10, 11};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> startState = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> finishState = {21, 22, 23, 24, 25, 6, 7, 8, 9, 10};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> startState = {50, 50, 50};
    vector<int> finishState = {15, 15, 15, 16, 14, 13, 17, 15, 10, 20};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> startState = {1, 2, 3, 4, 5, 16, 17, 18, 19, 20};
    vector<int> finishState = {6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> startState = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> finishState = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> startState = {2, 2, 2, 4, 4, 50, 50, 8, 12, 2};
    vector<int> finishState = {8, 1, 9, 26, 15, 11, 8, 6, 2, 50};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> startState = {25, 25, 22, 31, 24, 19, 22, 19, 13, 23};
    vector<int> finishState = {23, 25, 23, 27, 28, 20, 19, 18, 14, 26};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> startState = {1, 2, 3, 4, 5, 6};
    vector<int> finishState = {7, 7, 7};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> startState = {1, 12, 13, 4, 15, 6, 17, 8, 50, 50};
    vector<int> finishState = {2, 5, 5, 5, 11, 17, 49, 49, 30, 3};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> startState = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    vector<int> finishState = {6, 11, 16, 21, 26, 31, 36, 41, 46, 41};
    SplitAndMergeGame* pObj = new SplitAndMergeGame();
    clock_t start = clock();
    int result = pObj->minMoves(startState, finishState);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7442498&rd=9987&pm=6449
********************************************************************************
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <list>
#include <queue>
#include <deque>
#include <cctype>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include <numeric>
using namespace std;
 
#define MP(a,b) make_pair(a,b)
 
typedef vector <int > VI;
typedef vector<VI> VVI;
#define REP(i,n) for (int i=0; i<n; ++i)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define FOR(i,p,k) for (int i=p; i<=k; ++i)
#define PB push_back
#define ALL(x) x.begin(),x.end()
#define SIZE(x) (int)x.size()
 
map<VI,int> mapa[2];
VVI q[2];
VVI pom;
 
    class SplitAndMergeGame
        { 
        public: 
        int minMoves(vector <int> start, vector <int> end){ 
              sort(ALL(start));
              sort(ALL(end));
              if (accumulate(ALL(start),0)!=accumulate(ALL(end),0)) return -1;
              if (start==end) return 0;
              
              mapa[0][start]=0; mapa[1][end]=0;
              q[0].PB(start); q[1].PB(end);
              int res=0;
              while (1){
                res++;
                REP(co,2){
                  pom.clear(); swap(q[co],pom);
                  FOREACH(it,pom){
                    VI v=*it;
                    int n=SIZE(v);
                    REP(i,n) REP(j,i){
                      VI foo=v;
                      foo[j]+=foo[i];
                      swap(foo[i],foo.back());
                      foo.pop_back();
                      sort(ALL(foo));
                      if (mapa[1^co].count(foo)) return res+mapa[1^co][foo];
                      if (mapa[co].count(foo)==0){
                        mapa[co].insert(MP(foo,res)); q[co].PB(foo);
                      }
                    }
                  }         
                } 
              }
              return -1; 
            } 
        
 
         }; 
 
    
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/