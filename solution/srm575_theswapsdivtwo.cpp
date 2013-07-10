/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12499
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

class TheSwapsDivTwo {
public:
    int find(vector<int> sequence);
};

int TheSwapsDivTwo::find(vector<int> sequence) {
    int ret;
    return ret;
}


int test0() {
    vector<int> sequence = {4, 7, 4};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {1, 47};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {9, 9, 9, 9};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> sequence = {22, 16, 36, 35, 14, 9, 33, 6, 28, 12, 18, 14, 47, 46, 29, 22, 14, 17, 4, 15, 28, 6, 39, 24, 47, 37};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 319;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> sequence = {7, 2, 21, 27, 5, 8, 14, 4, 42, 1, 12, 12, 24, 19, 31, 17, 19, 34, 13, 16, 30, 10, 20, 19, 30, 1, 47, 10, 19, 38, 30, 31, 33, 23, 46, 44, 8, 31, 26, 36, 1, 1, 12, 39, 9};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 968;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> sequence = {9, 40, 28, 28, 28, 36, 34, 14, 10, 38, 25, 25, 24, 24, 13, 15, 2, 33, 19, 12, 17, 21, 3, 25, 24, 5, 19, 11, 31, 16, 13, 37, 37, 29, 36, 21, 19, 11, 43, 8, 31, 47, 47, 20};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 928;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> sequence = {12, 23, 39, 16, 30, 46, 47, 29, 43, 12, 19, 27, 44, 1, 7, 47};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> sequence = {24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> sequence = {47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> sequence = {7, 13, 26, 15, 41, 6, 17, 33, 20, 16, 43, 46, 32, 40, 34, 27, 9, 8, 39, 4, 12, 11, 5, 38, 22, 29, 14, 24, 35, 45, 21, 2, 10, 31, 28, 44, 37, 3, 19, 25, 18, 30, 42, 36, 47, 1, 23};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1081;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> sequence = {6, 7, 6, 6, 5, 7, 7, 6, 7, 6, 6, 6, 6, 6, 5, 4, 7, 7, 5, 4, 4, 5, 6, 5, 7, 7, 4, 5, 5, 5, 4, 5, 5, 4, 4, 6, 4, 4, 5, 6, 4, 4, 6, 5, 5, 6, 5};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 817;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> sequence = {5, 6, 4, 5, 7, 4, 6, 4, 4, 6, 4, 7, 7, 5, 4, 4, 5, 4, 6, 6, 4, 4, 4, 6, 7, 5, 4, 6, 5, 5, 7, 7, 4, 5, 4, 4, 4, 6, 4, 6, 6, 7, 7, 4, 7, 7, 6};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 801;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> sequence = {5, 7, 6, 7, 4, 4, 6, 6, 7, 5, 7, 7, 4, 7, 7, 5, 5, 7, 4, 4, 5, 6, 4, 7, 5, 7, 6, 5, 4, 7, 7, 5, 5, 5, 5, 6, 6, 5, 4, 7, 6, 5, 6, 4, 4, 5, 7};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 819;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> sequence = {1, 2, 1, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 1, 1, 2, 1, 2, 2, 2, 1, 2, 2, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 2};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 551;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> sequence = {2, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 523;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> sequence = {2, 2, 1, 2, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1, 2, 2, 2, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 2, 1, 2, 1, 1, 1, 2, 2};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 533;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> sequence = {1, 1, 1, 1, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 553;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> sequence = {2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1, 2, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 523;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> sequence = {1, 1};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> sequence = {1, 2, 1, 3};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {3, 3, 4, 3};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {4, 4, 1};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> sequence = {1, 2, 1};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> sequence = {1, 4, 3, 1};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> sequence = {4, 4, 2, 3};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> sequence = {3, 1, 1, 3};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {2, 2, 1, 4};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> sequence = {2, 2, 3};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {6, 13, 26, 9, 39, 7, 31, 7, 28, 22, 43, 6, 5, 26, 44, 44, 40, 4, 5};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 167;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> sequence = {11, 5, 13, 47, 6, 4, 6, 20, 42, 18, 4, 31, 46, 6, 34, 33, 6, 6};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> sequence = {38, 9, 5, 35, 25};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> sequence = {32, 31, 46, 42, 38, 10, 30, 21, 7, 26, 18, 31, 46, 25, 22, 17, 5, 22, 36, 46, 32, 8, 7, 28, 29, 34, 20, 5};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 371;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> sequence = {35, 35, 6, 42, 45, 47, 33, 39, 28, 27, 33, 17, 35, 13, 29, 16, 39, 12, 11, 21, 42, 38, 39, 28, 6, 14, 38, 39, 46, 41, 35, 20, 32, 19, 37, 34, 22, 38, 39, 42, 43, 31, 25, 40};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 922;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> sequence = {42, 41, 13, 37, 30, 35, 14, 9, 17, 18, 14, 35, 18, 15, 9, 40, 34, 45, 46, 46, 12, 27, 20, 37, 38, 36, 21, 32, 21, 22, 32, 38, 15, 39, 41, 32, 40, 33, 41, 47};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 765;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> sequence = {44, 35, 45, 46, 23, 42, 17, 14, 34, 33, 11, 6, 21, 6, 16, 5, 9, 42, 34, 40, 23, 45, 37, 11, 41, 23, 11, 44, 31, 32, 32, 39, 42, 33, 44, 35, 31, 23, 13, 36, 40, 25, 34, 19, 13};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 965;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> sequence = {34, 44, 20, 45, 46, 23, 28, 47, 12, 26, 47, 29, 37, 15, 12, 28, 25, 17, 31, 10, 6, 7, 26, 11, 14};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 297;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> sequence = {34, 40, 47, 32, 18, 9, 27, 45, 8, 28, 16, 39, 23, 17, 39, 11, 10, 16, 20, 43, 24, 24, 35, 19, 46, 8, 45, 22, 15, 31, 10, 16, 40, 43, 34, 24, 40, 28, 37, 24, 26, 25, 41, 8, 44, 24, 39};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1055;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> sequence = {42, 23, 38, 38, 28, 13, 25, 6, 35, 7, 29, 28, 24, 18, 26, 40, 9, 45, 45, 12, 29, 23, 28, 4, 35, 19, 22, 41, 26, 10, 41, 14, 27, 44, 29, 4};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 618;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> sequence = {21, 20, 10, 23, 10, 47, 6, 26, 34, 31, 5, 33, 25, 22, 4, 32, 19, 32, 23, 10, 18, 44, 12, 15, 16, 45, 40, 40, 34, 26, 33, 9, 37, 19, 13, 35, 23, 19, 5, 42, 24, 17, 22, 39, 4, 33};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1017;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> sequence = {4, 8, 8, 13, 40, 42, 26, 17, 17, 11, 24, 11, 11, 9, 38, 46, 46, 29, 33, 17, 32, 5, 30, 33, 42, 22, 31, 6, 39, 18, 14, 8, 21, 9, 29, 5, 7, 30, 11, 43, 21, 31, 24, 14};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 924;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> sequence = {18, 39, 47, 13, 9, 9, 6, 23, 5, 12, 37, 45, 35, 18, 30, 9, 46, 19, 15, 5, 4, 33, 12, 4, 14, 30, 24, 42, 45, 41, 17, 25, 20, 41, 43, 20, 27, 45, 43, 17, 22, 32, 15};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 888;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> sequence = {42, 46, 38, 30, 41, 18, 9, 27, 29, 7, 11, 36, 17, 8, 19, 21, 30, 29, 19, 30, 24, 21, 44, 46, 23, 17, 36, 37, 46, 34, 47, 37};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 485;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> sequence = {45, 45, 14, 40, 44, 16, 46, 27, 22, 40, 7, 7, 5, 45, 6, 7, 25, 20, 27, 39, 40, 25, 27, 42, 37, 27, 27, 9};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 359;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> sequence = {46, 44, 14, 8, 27, 23, 10, 20, 34, 9, 30, 39, 4, 44, 35, 46, 30, 46};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> sequence = {12, 26, 17, 41, 13, 22, 23, 34, 41, 4, 38, 17, 18, 9};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> sequence = {22, 16, 36, 35, 14, 9, 33, 6, 28, 12, 18, 14, 47, 46, 29, 22, 14, 17, 4, 15, 28, 6, 39, 24, 47, 37};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 319;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> sequence = {1, 2, 3, 4, 5};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> sequence = {1, 2, 3};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {1, 2};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {16, 10, 16, 38, 1, 5, 46, 29, 27, 34, 16, 33, 10, 7, 3, 22, 20, 19, 39, 43, 25, 21, 20, 37, 20, 17, 7, 19, 17, 15, 26, 6, 3, 30, 1, 16, 24, 17, 23, 21, 20, 17, 16, 29, 6, 13, 19};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1050;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> sequence = {9, 9, 9, 9};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {2, 2};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {1, 2, 3, 5, 7};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {3, 4, 5};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> sequence = {45, 43, 12, 5, 5, 23};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> sequence = {2, 3, 4};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {1, 47, 2};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> sequence = {1, 47};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> sequence = {7, 4};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> sequence = {1, 2, 3, 4};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> sequence = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> sequence = {3, 2, 1};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> sequence = {1, 47, 20};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> sequence = {4, 5, 6};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> sequence = {2, 2, 4, 2};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> sequence = {1, 2, 3, 4, 6, 6, 6};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> sequence = {3, 33, 3};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> sequence = {1, 11, 1};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> sequence = {4, 7, 4};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> sequence = {3, 1, 2};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> sequence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1035;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> sequence = {3, 33, 1, 11};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {1, 1};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> sequence = {12, 13, 14};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> sequence = {7, 4, 4};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> sequence = {1, 1, 2, 2};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> sequence = {1, 47, 3};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> sequence = {2, 3, 2, 2, 2, 3};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> sequence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 780;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> sequence = {4, 5, 7};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
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
    vector<int> sequence = {4, 7, 4, 7};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> sequence = {4, 4};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> sequence = {12, 13, 14, 14, 12};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> sequence = {4, 9, 3};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> sequence = {4, 3, 2, 1};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> sequence = {1, 2, 2, 3};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> sequence = {3, 3};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> sequence = {9, 9};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> sequence = {22, 16, 36, 35, 14, 9, 33, 6, 28, 12, 18, 14, 47, 46, 29, 22, 14, 17, 4, 15, 28, 6, 39, 24, 47, 37, 10, 11, 12, 13, 20, 25, 35, 41, 15, 14, 32, 25, 35, 45, 36, 45, 21, 25, 18};
    TheSwapsDivTwo* pObj = new TheSwapsDivTwo();
    clock_t start = clock();
    int result = pObj->find(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 970;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22915954&rd=15495&pm=12499
********************************************************************************
#include <map> 
#include <set> 
#include <cmath> 
#include <ctime> 
#include <deque> 
#include <queue> 
#include <stack> 
#include <bitset> 
#include <cctype> 
#include <cstdio> 
#include <limits> 
#include <string> 
#include <vector> 
#include <cassert> 
#include <climits> 
#include <cstdlib> 
#include <cstring> 
#include <fstream> 
#include <iomanip> 
#include <numeric> 
#include <sstream> 
#include <utility> 
#include <iostream> 
#include <algorithm> 
#include <functional> 
 
#define stop exit(0) 
#define nc -1 
#define eps 1e-10 
#define inf 1000000000 
#define mod 1000000007 
#define mp make_pair 
 
#define fill(array,value) memset(array,value,sizeof(array)) 
#define f(i,beg,end) for(int i=beg; i<=end; i++) 
#define F(i,beg,end) for(int i=beg; i>=end; i--) 
#define Max(a,b) ( (a>b)?a:b ) 
#define Min(a,b) ( (a<b)?a:b ) 
#define pi 3.1415926535897932384626433832 
#define iread(var) scanf("%d",&var) 
#define dread(var) scanf("%f",&var) 
#define lread(var) scanf("%lld",&var) 
#define input(name) freopen(name,"r",stdin) 
#define output(name) freopen(name,"w",stdout) 
typedef unsigned long long ull; 
typedef unsigned int ui; 
typedef long double ld; 
typedef long long ll; 
 
using namespace std; 
 
set < vector <int> > s; 
 
class TheSwapsDivTwo { 
public: 
int find ( vector <int> v ) { 
     
    s.clear(); 
     
    int n = v.size(); 
     
     
    f(i,0,n-1) 
        f(j,0,n-1) 
            if (i!=j) 
            { 
                swap(v[i],v[j]); 
                s.insert(v); 
                swap(v[i],v[j]); 
            } 
    return s.size(); 
             
} 
}; 
 
 
 
 
// Powered by FileEdit
// Powered by moj 4.12 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/