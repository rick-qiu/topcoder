/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11342
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

class MafiaGame {
public:
    double probabilityToLose(int N, vector<int> decisions);
};

double MafiaGame::probabilityToLose(int N, vector<int> decisions) {
    double ret;
    return ret;
}


int test0() {
    int N = 3;
    vector<int> decisions = {1, 1, 1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 20;
    vector<int> decisions = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 500;
    vector<int> decisions = {1, 2, 1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 5;
    vector<int> decisions = {1, 2, 3};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 20;
    vector<int> decisions = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 18, 19, 0};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 23;
    vector<int> decisions = {17, 10, 3, 14, 22, 5, 11, 10, 22, 3, 14, 5, 11, 17};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14285714285714285;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 3;
    vector<int> decisions = {2, 1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 4;
    vector<int> decisions = {0, 1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 5;
    vector<int> decisions = {4, 3, 3};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 6;
    vector<int> decisions = {4, 2, 5};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 7;
    vector<int> decisions = {5, 6, 6, 0};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 8;
    vector<int> decisions = {3, 3, 6, 3};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 8;
    vector<int> decisions = {4, 7, 4, 6, 1, 4, 6};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 2;
    vector<int> decisions = {1, 1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 9;
    vector<int> decisions = {0, 2, 0, 6, 4, 8, 1, 7};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 10;
    vector<int> decisions = {4, 3, 1, 2, 3};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 10;
    vector<int> decisions = {3, 4, 1, 1, 3, 8, 7, 4};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 11;
    vector<int> decisions = {3};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 21;
    vector<int> decisions = {18, 3};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 31;
    vector<int> decisions = {25, 12};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 41;
    vector<int> decisions = {24, 18, 40};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 51;
    vector<int> decisions = {25, 26, 5};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 61;
    vector<int> decisions = {12, 44, 33, 12};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 71;
    vector<int> decisions = {67, 23, 70, 40};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 71;
    vector<int> decisions = {20, 57, 55, 17, 14, 25, 3};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 81;
    vector<int> decisions = {12, 65, 27, 68, 27};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 81;
    vector<int> decisions = {28, 45, 14, 25, 5, 80, 64, 15};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 91;
    vector<int> decisions = {43, 56, 39, 77, 62};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 91;
    vector<int> decisions = {11, 80, 88, 70, 10, 84, 89, 83};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 41;
    vector<int> decisions = {31, 8, 37, 10, 21, 0, 19, 4, 28, 7, 38, 7, 4, 34, 13, 30, 1, 6, 18, 22, 10, 3, 39, 35, 13, 39, 3, 2, 8, 35, 26, 27, 29, 15, 8, 21, 0, 28, 37, 10};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 42;
    vector<int> decisions = {35, 5, 37, 14, 29, 24, 38, 40, 38, 10, 33, 20, 18, 41, 30, 17, 22, 17, 30, 41, 2, 15, 1, 9, 32, 32, 1, 8, 8, 16, 18, 39, 6, 15, 12, 40, 7, 30, 11, 25};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 43;
    vector<int> decisions = {16, 31, 20, 4, 24, 37, 30, 15, 9, 37, 5, 13, 34, 38, 23, 11, 33, 5, 15, 36, 3, 3, 7, 37, 8, 31, 32, 0, 39, 15, 25, 22, 13, 17, 40, 24, 36, 39, 31, 0};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 44;
    vector<int> decisions = {12, 32, 38, 18, 32, 40, 14, 13, 9, 30, 25, 9, 12, 38, 14, 16, 10, 23, 18, 1, 38, 31, 15, 8, 16, 27, 10, 38, 28, 35, 0, 30, 6, 2, 43, 9, 37, 34, 40, 8};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 44;
    vector<int> decisions = {13, 10, 26, 39, 33, 23, 37, 8, 40, 13, 15, 20, 4, 2, 15, 29, 41, 36, 25, 21, 31, 11, 30, 25, 26, 33, 28, 10, 17, 41, 20, 0, 33, 42, 25, 29, 0, 1, 36, 4, 41, 39, 2};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 45;
    vector<int> decisions = {34, 16, 17, 40, 15, 28, 18, 29, 3, 34, 31, 37, 19, 4, 22, 21, 34, 13, 20, 12, 31, 26, 40, 8, 37, 35, 39, 24, 1, 41, 16, 26, 23, 38, 10, 0, 28, 12, 8, 32};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 45;
    vector<int> decisions = {20, 38, 36, 16, 28, 21, 37, 31, 4, 21, 17, 19, 1, 0, 20, 13, 26, 29, 14, 12, 24, 18, 44, 9, 35, 20, 39, 1, 33, 19, 32, 8, 23, 22, 5, 3, 11, 32, 25, 17, 4, 44, 39};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 46;
    vector<int> decisions = {32, 22, 38, 11, 11, 10, 35, 7, 20, 35, 17, 24, 15, 0, 34, 1, 20, 16, 3, 37, 18, 5, 29, 3, 25, 38, 29, 26, 43, 13, 45, 16, 25, 39, 1, 13, 28, 4, 18, 6};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 46;
    vector<int> decisions = {0, 34, 5, 34, 11, 16, 10, 6, 5, 13, 23, 0, 36, 21, 17, 38, 2, 32, 27, 4, 5, 9, 34, 28, 26, 36, 29, 18, 32, 7, 23, 0, 6, 36, 5, 14, 40, 9, 10, 40, 40, 19, 16};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 47;
    vector<int> decisions = {11, 35, 6, 11, 10, 20, 33, 33, 25, 2, 9, 14, 45, 40, 12, 36, 15, 43, 38, 40, 16, 29, 15, 24, 7, 43, 1, 42, 35, 45, 32, 1, 22, 12, 33, 19, 26, 3, 41, 39};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 47;
    vector<int> decisions = {25, 14, 2, 5, 30, 3, 11, 21, 41, 17, 0, 46, 35, 9, 25, 20, 0, 0, 23, 40, 21, 38, 32, 10, 35, 14, 8, 31, 9, 21, 30, 41, 7, 44, 34, 4, 20, 9, 22, 23, 9, 17, 45};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 47;
    vector<int> decisions = {28, 4, 19, 9, 9, 6, 40, 33, 18, 3, 7, 7, 27, 37, 23, 24, 30, 18, 24, 6, 26, 2, 18, 10, 21, 42, 12, 30, 27, 5, 25, 34, 19, 2, 22, 39, 18, 26, 9, 6, 22, 13, 14, 5, 19, 25};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 48;
    vector<int> decisions = {37, 15, 3, 17, 5, 14, 42, 14, 37, 7, 42, 22, 7, 45, 1, 14, 5, 38, 36, 25, 0, 25, 2, 36, 41, 12, 13, 33, 31, 39, 38, 38, 11, 13, 24, 38, 24, 11, 24, 1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 48;
    vector<int> decisions = {8, 1, 11, 8, 2, 34, 9, 4, 32, 23, 17, 23, 24, 40, 29, 34, 9, 45, 22, 25, 9, 18, 27, 4, 12, 26, 47, 23, 8, 21, 16, 37, 39, 37, 15, 16, 12, 45, 29, 36, 25, 43, 35};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 48;
    vector<int> decisions = {21, 17, 40, 21, 38, 9, 29, 7, 43, 5, 40, 0, 33, 16, 15, 30, 28, 43, 4, 43, 18, 42, 10, 47, 39, 12, 23, 5, 7, 42, 11, 34, 43, 33, 0, 20, 6, 35, 33, 7, 32, 42, 16, 30, 5, 31};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 49;
    vector<int> decisions = {20, 9, 5, 28, 26, 11, 26, 31, 28, 30, 1, 34, 47, 4, 9, 5, 23, 42, 20, 16, 19, 23, 18, 19, 28, 45, 38, 46, 1, 13, 21, 6, 48, 3, 20, 11, 2, 17, 48, 36};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 49;
    vector<int> decisions = {19, 1, 28, 28, 32, 14, 30, 3, 44, 16, 3, 2, 26, 20, 23, 20, 14, 4, 43, 15, 14, 34, 4, 11, 5, 17, 42, 13, 19, 28, 7, 3, 33, 44, 31, 4, 2, 3, 19, 29, 27, 15, 21};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 49;
    vector<int> decisions = {44, 10, 43, 43, 29, 4, 20, 33, 9, 39, 13, 9, 30, 18, 39, 28, 21, 32, 45, 33, 42, 4, 7, 27, 15, 41, 46, 20, 20, 7, 3, 13, 36, 35, 42, 16, 24, 37, 24, 17, 0, 32, 43, 4, 2, 5};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 50;
    vector<int> decisions = {25, 11, 37, 36, 40, 0, 12, 34, 43, 3, 16, 2, 8, 12, 33, 4, 3, 34, 3, 6, 48, 24, 17, 13, 9, 28, 0, 30, 18, 8, 0, 5, 11, 14, 3, 26, 43, 9, 2, 11};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 50;
    vector<int> decisions = {39, 48, 32, 3, 24, 20, 2, 23, 31, 19, 28, 9, 8, 19, 21, 3, 45, 31, 4, 42, 35, 13, 48, 39, 22, 38, 37, 10, 11, 34, 8, 11, 9, 43, 15, 19, 37, 19, 8, 0, 21, 14, 17};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 50;
    vector<int> decisions = {15, 5, 15, 30, 39, 12, 38, 32, 4, 35, 10, 34, 24, 30, 15, 1, 41, 15, 29, 10, 48, 23, 38, 27, 32, 6, 39, 13, 8, 41, 40, 23, 13, 28, 34, 28, 0, 21, 35, 24, 21, 33, 17, 3, 45, 18};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 50;
    vector<int> decisions = {25, 26, 29, 0, 48, 9, 43, 36, 30, 16, 49, 17, 28, 29, 14, 21, 5, 26, 16, 16, 26, 16, 37, 31, 14, 40, 36, 21, 12, 21, 14, 9, 15, 2, 23, 24, 41, 45, 12, 23, 31, 6, 18, 18, 2, 7, 7, 31, 12};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 213;
    vector<int> decisions = {131};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 213;
    vector<int> decisions = {101, 101};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 213;
    vector<int> decisions = {45, 65, 65};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 213;
    vector<int> decisions = {87, 87, 137, 87};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 213;
    vector<int> decisions = {88, 88, 70, 70, 70};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 213;
    vector<int> decisions = {24, 191, 24, 191, 134, 61};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 213;
    vector<int> decisions = {64, 186, 36, 36, 157, 149, 64};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 213;
    vector<int> decisions = {29, 29, 18, 208, 66, 208, 173, 66};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 213;
    vector<int> decisions = {175, 98, 175, 212, 82, 168, 165, 175, 80};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 213;
    vector<int> decisions = {71, 184, 10, 191, 71, 164, 27, 71, 164, 86};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 213;
    vector<int> decisions = {123, 40, 197, 45, 124, 36, 36, 197, 203, 124, 150};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 213;
    vector<int> decisions = {92, 46, 87, 207, 154, 27, 46, 117, 208, 96, 71, 92};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 213;
    vector<int> decisions = {42, 30, 101, 113, 41, 179, 113, 76, 69, 30, 18, 159, 36};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 213;
    vector<int> decisions = {23, 63, 18, 18, 149, 28, 23, 95, 15, 62, 56, 15, 209, 209};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 213;
    vector<int> decisions = {34, 76, 95, 177, 101, 65, 120, 191, 18, 34, 93, 168, 191, 108, 95};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 213;
    vector<int> decisions = {29, 69, 40, 107, 161, 91, 128, 91, 118, 168, 44, 168, 4, 42, 128, 204};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 213;
    vector<int> decisions = {211, 27, 178, 72, 36, 142, 184, 191, 1, 62, 36, 51, 153, 86, 147, 21, 140};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 213;
    vector<int> decisions = {51, 197, 202, 163, 49, 30, 42, 148, 8, 22, 8, 67, 67, 176, 82, 43, 169, 93};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 213;
    vector<int> decisions = {57, 146, 164, 139, 52, 96, 132, 61, 195, 113, 143, 57, 96, 59, 143, 104, 124, 11, 193};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 213;
    vector<int> decisions = {27, 195, 61, 99, 63, 180, 47, 66, 41, 193, 31, 174, 193, 27, 61, 128, 96, 41, 174, 169};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 213;
    vector<int> decisions = {147, 136, 198, 96, 154, 37, 128, 195, 55, 140, 94, 198, 171, 37, 176, 69, 114, 153, 178, 69, 188};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 213;
    vector<int> decisions = {186, 99, 199, 98, 68, 99, 170, 74, 75, 186, 18, 29, 26, 185, 120, 140, 101, 98, 18, 68, 192, 19};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 213;
    vector<int> decisions = {138, 143, 47, 185, 152, 53, 44, 184, 10, 152, 82, 97, 184, 176, 134, 191, 82, 13, 124, 13, 62, 134, 185};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 213;
    vector<int> decisions = {20, 13, 120, 51, 193, 4, 195, 80, 70, 162, 41, 207, 207, 13, 128, 22, 41, 4, 211, 150, 132, 160, 211, 56};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 213;
    vector<int> decisions = {7, 149, 76, 43, 7, 160, 76, 64, 118, 179, 3, 166, 134, 118, 133, 98, 95, 142, 138, 107, 128, 45, 91, 134, 128};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 497;
    vector<int> decisions = {39};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 497;
    vector<int> decisions = {295, 485, 35, 342, 295, 342, 115, 473};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 497;
    vector<int> decisions = {199, 444, 199, 154, 391, 41, 345, 46, 51, 414, 55, 428, 97, 345, 428};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 497;
    vector<int> decisions = {13, 343, 27, 256, 125, 125, 293, 438, 494, 13, 50, 4, 160, 4, 488, 44, 448, 25, 160, 186, 118, 27};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 491;
    vector<int> decisions = {111};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 491;
    vector<int> decisions = {193, 57, 57, 128};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 491;
    vector<int> decisions = {238, 238, 313, 300, 129, 238, 189};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 491;
    vector<int> decisions = {174, 92, 391, 243, 448, 224, 448, 391, 174, 391};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 491;
    vector<int> decisions = {30, 51, 251, 44, 28, 356, 425, 330, 425, 425, 117, 51, 286};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 491;
    vector<int> decisions = {17, 87, 280, 245, 44, 280, 396, 160, 17, 160, 35, 68, 35, 340, 87, 340};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 491;
    vector<int> decisions = {465, 100, 390, 210, 307, 227, 470, 30, 355, 227, 465, 71, 47, 307, 65, 108, 363, 30, 281};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 491;
    vector<int> decisions = {196, 478, 50, 50, 79, 245, 145, 358, 408, 145, 349, 258, 327, 275, 472, 408, 245, 318, 419, 327, 196, 228};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 491;
    vector<int> decisions = {293, 449, 287, 224, 134, 419, 261, 449, 31, 287, 115, 437, 39, 270, 87, 115, 164, 178, 50, 261, 474, 87, 331, 39, 331};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14285714285714285;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 500;
    vector<int> decisions = {394};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 500;
    vector<int> decisions = {43, 355, 236, 188, 280, 24, 245, 236, 43};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 500;
    vector<int> decisions = {113, 309, 374, 341, 312, 447, 447, 164, 17, 164, 17, 37, 416, 184, 238, 121, 292};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 500;
    vector<int> decisions = {124, 56, 8, 99, 21, 421, 167, 368, 355, 248, 163, 8, 71, 88, 270, 234, 56, 495, 46, 234, 137, 38, 158, 158, 21};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 348;
    vector<int> decisions = {66, 327, 230, 263, 180, 180, 245, 263, 178, 263};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 309;
    vector<int> decisions = {62, 241, 199, 94, 291, 212, 64, 17, 75, 138, 158, 138, 201, 254, 62, 27, 48, 262, 158, 28, 76, 262, 28, 10};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 187;
    vector<int> decisions = {144, 160, 38, 139, 136, 22, 101, 46, 38, 15, 137, 69, 169, 179, 87, 153, 101};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 178;
    vector<int> decisions = {42, 76, 31, 145, 7, 76, 42, 6, 7, 58, 6};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 313;
    vector<int> decisions = {278, 120, 179, 74, 138, 177, 269, 217, 178, 200, 179, 177, 23, 307, 227, 256, 227, 125, 225};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 306;
    vector<int> decisions = {142, 24};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 294;
    vector<int> decisions = {261, 261, 27, 232, 168, 269, 59};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 448;
    vector<int> decisions = {203, 193, 258, 77, 38, 189, 11, 45, 321, 232, 321, 444, 418, 242, 199, 31, 149, 203, 262, 258, 199, 444, 220, 56, 242};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 342;
    vector<int> decisions = {214, 58, 76, 52, 244, 160, 199, 293, 244, 238, 28, 52, 277, 287, 89, 172, 129};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 291;
    vector<int> decisions = {135, 244, 56, 56, 259, 241, 79, 184, 154, 150, 273, 196, 2, 12, 246, 241, 184, 150, 77, 189, 157, 196};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 22;
    vector<int> decisions = {1, 2, 3, 1, 2, 3};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 367;
    vector<int> decisions = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 3;
    vector<int> decisions = {1, 1, 1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 500;
    vector<int> decisions = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 10;
    vector<int> decisions = {1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 500;
    vector<int> decisions = {499};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 120;
    vector<int> decisions = {1, 3, 5, 6, 9};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 500;
    vector<int> decisions = {1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10, 13, 14, 15, 17, 17, 17, 17, 17, 18, 22, 24, 24, 25, 105, 150, 150, 150, 150, 150, 493, 493, 493, 493, 493};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 500;
    vector<int> decisions = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 9, 10, 10, 10, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 13, 14, 14, 14, 14};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 5;
    vector<int> decisions = {0, 1, 0, 1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 11;
    vector<int> decisions = {0, 0, 1, 1, 2, 2, 3, 3};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 10;
    vector<int> decisions = {9, 9, 8};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 500;
    vector<int> decisions = {1, 1, 1, 222, 222, 222, 499, 499, 499};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 23;
    vector<int> decisions = {17, 10, 3, 14, 22, 5, 11, 10, 22, 3, 14, 5, 11, 17};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14285714285714285;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 497;
    vector<int> decisions = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 2;
    vector<int> decisions = {1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 10;
    vector<int> decisions = {0, 1, 2, 0, 1, 2};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 2;
    vector<int> decisions = {0, 1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int N = 5;
    vector<int> decisions = {0, 0, 1, 1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int N = 500;
    vector<int> decisions = {20, 30, 5, 4, 4, 4, 4, 31, 23, 22, 2, 2, 2, 2, 43};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int N = 20;
    vector<int> decisions = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 18, 19, 0};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int N = 5;
    vector<int> decisions = {1, 1, 2, 2, 3};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int N = 2;
    vector<int> decisions = {0, 0};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int N = 500;
    vector<int> decisions = {1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int N = 21;
    vector<int> decisions = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int N = 10;
    vector<int> decisions = {1, 1, 2, 2, 3, 3};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int N = 500;
    vector<int> decisions = {0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 11, 11, 11, 12, 12, 12, 13, 13, 13, 14, 14, 14, 15, 15, 15};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int N = 10;
    vector<int> decisions = {1, 2, 2};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int N = 7;
    vector<int> decisions = {1, 1, 2, 2, 3};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int N = 50;
    vector<int> decisions = {1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int N = 16;
    vector<int> decisions = {10, 15, 0, 13, 10, 9, 4, 11, 0, 6, 1, 13, 2, 5, 8, 12};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int N = 500;
    vector<int> decisions = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 55, 234, 432, 333, 444, 56, 64};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int N = 10;
    vector<int> decisions = {0, 1, 2, 0, 1, 2, 3, 4};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int N = 480;
    vector<int> decisions = {1, 1, 1, 2, 2, 2, 3, 3, 3};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int N = 293;
    vector<int> decisions = {102, 262, 241, 218, 51, 251, 208, 150, 89, 4, 26, 106, 43, 48, 289, 130, 34, 1, 2, 110, 155, 167, 176, 177};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int N = 4;
    vector<int> decisions = {0, 0, 1, 1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int N = 30;
    vector<int> decisions = {0, 1, 0, 2};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int N = 17;
    vector<int> decisions = {0, 0, 1, 1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int N = 9;
    vector<int> decisions = {1, 1, 1, 2, 2, 2, 0};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int N = 7;
    vector<int> decisions = {1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int N = 78;
    vector<int> decisions = {45};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int N = 9;
    vector<int> decisions = {3, 3, 3, 2, 2, 2, 1, 1, 1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int N = 500;
    vector<int> decisions = {1, 1, 384, 348, 394, 281, 483, 283, 438, 28, 283};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int N = 5;
    vector<int> decisions = {0, 0, 1, 2, 1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int N = 5;
    vector<int> decisions = {1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int N = 7;
    vector<int> decisions = {3, 3, 3, 1, 1, 1, 2};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int N = 19;
    vector<int> decisions = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int N = 4;
    vector<int> decisions = {0, 0};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int N = 100;
    vector<int> decisions = {1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int N = 20;
    vector<int> decisions = {1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int N = 2;
    vector<int> decisions = {0};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int N = 6;
    vector<int> decisions = {0, 0, 1, 1, 2};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int N = 500;
    vector<int> decisions = {0, 0, 1, 2, 3, 1};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int N = 21;
    vector<int> decisions = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7};
    MafiaGame* pObj = new MafiaGame();
    clock_t start = clock();
    double result = pObj->probabilityToLose(N, decisions);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22694621&rd=14429&pm=11342
********************************************************************************
#include <algorithm>
#include <iostream>
#include <sstream>
#include <numeric>
#include <string>
#include <utility>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstdarg>
#include <cstring>
using namespace std;
 
#define FOR(i, n) for (int i = 0; i < (int)(n); ++i)
#define FOREACH(i, n) for (typeof(n.begin()) i = n.begin(); i != n.end(); ++i)
#define MEMSET(p, c) memset(p, c, sizeof(p))
typedef pair<int, int> PII;
#ifndef WATASHI_PC
#define errf(fmt, ...) do { } while (false)
#endif
 
struct MafiaGame {
  double probabilityToLose(int N, vector <int> decisions);
};
 
bool gao(int n, int m) {
  if (m == 1) {
    return true;
  } else {
    return n % m != 0 && gao(n, n % m);
  }
}
 
double MafiaGame::probabilityToLose(int n, vector <int> d) {
  vector<int> c(n, 0);
  FOREACH (i, d) {
    ++c[*i];
  }
  map<int, int> m;
  for (int i = 0; i < n; ++i) {
    ++m[c[i]];
  }
  int t = m.rbegin()->first;
  printf("%d %d\n", m.rbegin()->first, m.rbegin()->second);
  if (t <= 1) {
    return 0.0;
  } else if (!gao(n, m.rbegin()->second)) {
    return 0.0;
  } else {
    return 1.0 / m.rbegin()->second;
  }
}
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/