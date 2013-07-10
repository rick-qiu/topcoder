/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4749
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

class RollingBlock {
public:
    int minMoves(int rows, int cols, vector<int> start, vector<int> target);
};

int RollingBlock::minMoves(int rows, int cols, vector<int> start, vector<int> target) {
    int ret;
    return ret;
}


int test0() {
    int rows = 4;
    int cols = 5;
    vector<int> start = {3, 0};
    vector<int> target = {2, 4};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
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
    int rows = 5;
    int cols = 5;
    vector<int> start = {2, 2};
    vector<int> target = {4, 0};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int rows = 4;
    int cols = 4;
    vector<int> start = {3, 0};
    vector<int> target = {3, 3};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
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
    int rows = 4;
    int cols = 4;
    vector<int> start = {3, 0};
    vector<int> target = {0, 3};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int rows = 100;
    int cols = 100;
    vector<int> start = {4, 5};
    vector<int> target = {5, 97};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int rows = 1;
    int cols = 1;
    vector<int> start = {0, 0};
    vector<int> target = {0, 0};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
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
    int rows = 1;
    int cols = 2;
    vector<int> start = {0, 0};
    vector<int> target = {0, 1};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int rows = 100;
    int cols = 1;
    vector<int> start = {1, 0};
    vector<int> target = {97, 0};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int rows = 100;
    int cols = 1;
    vector<int> start = {2, 0};
    vector<int> target = {96, 0};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int rows = 1;
    int cols = 100;
    vector<int> start = {0, 2};
    vector<int> target = {0, 97};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int rows = 4;
    int cols = 100;
    vector<int> start = {0, 2};
    vector<int> target = {0, 97};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int rows = 100;
    int cols = 4;
    vector<int> start = {3, 1};
    vector<int> target = {92, 2};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int rows = 100;
    int cols = 4;
    vector<int> start = {3, 1};
    vector<int> target = {91, 2};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int rows = 100;
    int cols = 100;
    vector<int> start = {50, 50};
    vector<int> target = {50, 50};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
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
    int rows = 100;
    int cols = 100;
    vector<int> start = {0, 99};
    vector<int> target = {99, 0};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int rows = 96;
    int cols = 57;
    vector<int> start = {56, 51};
    vector<int> target = {6, 40};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int rows = 48;
    int cols = 99;
    vector<int> start = {47, 13};
    vector<int> target = {3, 81};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int rows = 50;
    int cols = 28;
    vector<int> start = {31, 3};
    vector<int> target = {14, 5};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int rows = 91;
    int cols = 9;
    vector<int> start = {42, 1};
    vector<int> target = {5, 5};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int rows = 97;
    int cols = 34;
    vector<int> start = {74, 20};
    vector<int> target = {71, 6};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
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
    int rows = 97;
    int cols = 51;
    vector<int> start = {64, 4};
    vector<int> target = {41, 49};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int rows = 38;
    int cols = 65;
    vector<int> start = {11, 44};
    vector<int> target = {1, 41};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int rows = 40;
    int cols = 46;
    vector<int> start = {2, 26};
    vector<int> target = {10, 30};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int rows = 65;
    int cols = 84;
    vector<int> start = {3, 44};
    vector<int> target = {45, 10};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int rows = 52;
    int cols = 14;
    vector<int> start = {4, 9};
    vector<int> target = {30, 5};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int rows = 50;
    int cols = 96;
    vector<int> start = {8, 87};
    vector<int> target = {2, 35};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int rows = 70;
    int cols = 78;
    vector<int> start = {13, 0};
    vector<int> target = {55, 21};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int rows = 81;
    int cols = 28;
    vector<int> start = {1, 16};
    vector<int> target = {4, 12};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
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
    int rows = 47;
    int cols = 90;
    vector<int> start = {37, 59};
    vector<int> target = {6, 61};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int rows = 79;
    int cols = 24;
    vector<int> start = {13, 9};
    vector<int> target = {59, 23};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int rows = 11;
    int cols = 54;
    vector<int> start = {6, 37};
    vector<int> target = {4, 29};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int rows = 32;
    int cols = 55;
    vector<int> start = {11, 31};
    vector<int> target = {13, 1};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int rows = 81;
    int cols = 41;
    vector<int> start = {32, 26};
    vector<int> target = {19, 4};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
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
    int rows = 45;
    int cols = 83;
    vector<int> start = {20, 69};
    vector<int> target = {25, 51};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int rows = 19;
    int cols = 11;
    vector<int> start = {2, 10};
    vector<int> target = {2, 8};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
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
    int rows = 25;
    int cols = 3;
    vector<int> start = {6, 2};
    vector<int> target = {15, 1};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int rows = 3;
    int cols = 88;
    vector<int> start = {1, 83};
    vector<int> target = {1, 56};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int rows = 81;
    int cols = 4;
    vector<int> start = {52, 2};
    vector<int> target = {78, 0};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int rows = 66;
    int cols = 48;
    vector<int> start = {13, 13};
    vector<int> target = {3, 1};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int rows = 23;
    int cols = 20;
    vector<int> start = {18, 7};
    vector<int> target = {1, 7};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int rows = 13;
    int cols = 13;
    vector<int> start = {11, 3};
    vector<int> target = {10, 1};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int rows = 65;
    int cols = 15;
    vector<int> start = {3, 1};
    vector<int> target = {25, 5};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int rows = 50;
    int cols = 65;
    vector<int> start = {27, 20};
    vector<int> target = {34, 39};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int rows = 46;
    int cols = 32;
    vector<int> start = {36, 5};
    vector<int> target = {36, 15};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
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
    int rows = 29;
    int cols = 54;
    vector<int> start = {21, 52};
    vector<int> target = {12, 33};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int rows = 69;
    int cols = 65;
    vector<int> start = {42, 45};
    vector<int> target = {31, 34};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int rows = 64;
    int cols = 31;
    vector<int> start = {2, 7};
    vector<int> target = {56, 24};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int rows = 30;
    int cols = 92;
    vector<int> start = {0, 60};
    vector<int> target = {8, 40};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int rows = 21;
    int cols = 71;
    vector<int> start = {14, 40};
    vector<int> target = {17, 4};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int rows = 75;
    int cols = 9;
    vector<int> start = {39, 3};
    vector<int> target = {3, 2};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int rows = 67;
    int cols = 54;
    vector<int> start = {19, 53};
    vector<int> target = {54, 40};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int rows = 15;
    int cols = 29;
    vector<int> start = {5, 26};
    vector<int> target = {12, 7};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int rows = 8;
    int cols = 33;
    vector<int> start = {7, 25};
    vector<int> target = {1, 30};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
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
    int rows = 22;
    int cols = 73;
    vector<int> start = {9, 16};
    vector<int> target = {9, 54};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int rows = 82;
    int cols = 44;
    vector<int> start = {76, 13};
    vector<int> target = {49, 40};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int rows = 20;
    int cols = 20;
    vector<int> start = {7, 9};
    vector<int> target = {7, 9};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
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
    int rows = 100;
    int cols = 100;
    vector<int> start = {4, 5};
    vector<int> target = {5, 97};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int rows = 4;
    int cols = 4;
    vector<int> start = {3, 0};
    vector<int> target = {0, 3};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int rows = 4;
    int cols = 5;
    vector<int> start = {3, 0};
    vector<int> target = {2, 4};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int rows = 100;
    int cols = 100;
    vector<int> start = {4, 5};
    vector<int> target = {99, 97};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int rows = 2;
    int cols = 2;
    vector<int> start = {0, 0};
    vector<int> target = {1, 1};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int rows = 80;
    int cols = 30;
    vector<int> start = {9, 5};
    vector<int> target = {7, 9};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int rows = 100;
    int cols = 100;
    vector<int> start = {0, 0};
    vector<int> target = {99, 99};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int rows = 8;
    int cols = 8;
    vector<int> start = {4, 4};
    vector<int> target = {7, 7};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int rows = 4;
    int cols = 4;
    vector<int> start = {0, 0};
    vector<int> target = {1, 1};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int rows = 11;
    int cols = 12;
    vector<int> start = {10, 10};
    vector<int> target = {3, 2};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int rows = 6;
    int cols = 4;
    vector<int> start = {1, 1};
    vector<int> target = {2, 2};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int rows = 5;
    int cols = 4;
    vector<int> start = {3, 0};
    vector<int> target = {0, 3};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int rows = 1;
    int cols = 50;
    vector<int> start = {0, 1};
    vector<int> target = {0, 43};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int rows = 56;
    int cols = 70;
    vector<int> start = {0, 67};
    vector<int> target = {14, 2};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int rows = 2;
    int cols = 99;
    vector<int> start = {0, 0};
    vector<int> target = {1, 1};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int rows = 6;
    int cols = 6;
    vector<int> start = {0, 0};
    vector<int> target = {1, 1};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int rows = 4;
    int cols = 4;
    vector<int> start = {0, 1};
    vector<int> target = {3, 2};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int rows = 100;
    int cols = 100;
    vector<int> start = {98, 99};
    vector<int> target = {99, 98};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int rows = 100;
    int cols = 100;
    vector<int> start = {3, 0};
    vector<int> target = {4, 1};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int rows = 7;
    int cols = 6;
    vector<int> start = {6, 1};
    vector<int> target = {0, 4};
    RollingBlock* pObj = new RollingBlock();
    clock_t start = clock();
    int result = pObj->minMoves(rows, cols, start, target);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15679227&rd=7994&pm=4749
********************************************************************************
#include <stdio.h>
#include <vector>
 
using namespace std;
 
class RollingBlock
{
public:
  void put( int xx, int yy, int mv, int& changed )
  {
    if( grid[xx][yy] == -1 || grid[xx][yy] > mv )
    {
      changed = 1;
      grid[xx][yy] = mv;
    }
  }
 
  int diff( int y1, int y2 )
  {
    if( y1 >= y2 )
      return y1-y2;
    return y2-y1;
  }
 
  int minMoves( int rows, int cols, vector<int> start, vector<int> target )
  {
    int i, j;
    for( i = 0; i < rows; i++ )
      for( j = 0; j < cols; j++ )
        grid[i][j] = -1;
    grid[start[0]][start[1]] = 0;
    for(;;)
    {
      int changed = 0;
      // x+4,y=any
      int x, y, yy;
      for( x = 0; x < rows; x++ )
        for( y = 0; y < cols; y++ )
          if( grid[x][y] >= 0 )
          {
            int mv = grid[x][y];
            //printf( "try (%d),(%d) = %d\n", x, y, mv );
            if( x+4 < rows )
            {
              for( int yy = 0; yy < cols; yy++ )
                put( x+4, yy, mv+2+diff(y,yy), changed );
            }
            if( y+4 < cols )
            {
              for( int xx = 0; xx < rows; xx++ )
                put( xx, y+4, mv+2+diff(x,xx), changed );
            }
            if( x-4 >= 0 )
            {
              for( int yy = 0; yy < cols; yy++ )
                put( x-4, yy, mv+2+diff(y,yy), changed );
            }
            if( y-4 >= 0 )
            {
              for( int xx = 0; xx < rows; xx++ )
                put( xx, y-4, mv+2+diff(x,xx), changed );
            }
            if( x+3 < rows || x-3 >= 0 )
            {
              for( int yy = 0; yy < cols; yy++ )
                put( x, yy, mv+2+diff(y,yy), changed );
            }
            if( y+3 < cols || y-3 >= 0 )
            {
              for( int xx = 0; xx < rows; xx++ )
                put( xx, y, mv+2+diff(x,xx), changed );
            }
          }
      if( !changed )
        break;
    }
    return grid[target[0]][target[1]];
  }
 
  int grid[100][100];
};

********************************************************************************
*******************************************************************************/