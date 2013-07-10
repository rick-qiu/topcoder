/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7295
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

class ThreeBuses {
public:
    double getProbability(vector<int> wait, vector<int> travel, int timeLeft);
};

double ThreeBuses::getProbability(vector<int> wait, vector<int> travel, int timeLeft) {
    double ret;
    return ret;
}


int test0() {
    vector<int> wait = {0, 0, 0};
    vector<int> travel = {10, 15, 10};
    int timeLeft = 47;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
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
    vector<int> wait = {0, 0, 0};
    vector<int> travel = {10, 15, 10};
    int timeLeft = 35;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> wait = {1, 100, 1};
    vector<int> travel = {10, 10, 10};
    int timeLeft = 52;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> wait = {100, 100, 70};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 47;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.020281904761904737;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 1;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
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
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 2;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 3;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
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
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 4;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 5.952380952380952E-4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 5;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004761904761904762;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 6;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.016071428571428573;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 7;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03809523809523809;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 8;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07380952380952381;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 9;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12380952380952379;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 10;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1880952380952381;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 11;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2660714285714286;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 12;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3547619047619048;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 13;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.45059523809523816;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 14;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.549404761904762;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 15;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6452380952380954;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 16;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7339285714285715;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 17;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8119047619047619;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 18;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8761904761904763;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 19;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9261904761904761;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 20;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9619047619047618;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 21;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9839285714285712;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 22;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.995238095238095;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 23;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9994047619047619;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 24;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> wait = {4, 10, 7};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 25;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> wait = {97000, 73000, 84700};
    vector<int> travel = {31200, 72500, 4700};
    int timeLeft = 108400;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> wait = {97000, 73000, 84700};
    vector<int> travel = {31200, 72500, 4700};
    int timeLeft = 363100;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
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
    vector<int> wait = {97000, 73000, 84700};
    vector<int> travel = {31200, 72500, 4700};
    int timeLeft = 110000;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 1.138231742537708E-6;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> wait = {97000, 73000, 84700};
    vector<int> travel = {31200, 72500, 4700};
    int timeLeft = 108500;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7788860901800697E-10;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> wait = {97000, 73000, 84700};
    vector<int> travel = {31200, 72500, 4700};
    int timeLeft = 363000;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999997221184;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> wait = {97000, 73000, 84700};
    vector<int> travel = {31200, 72500, 4700};
    int timeLeft = 182000;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11079086486748652;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> wait = {97000, 73000, 84700};
    vector<int> travel = {31200, 72500, 4700};
    int timeLeft = 194000;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.17374176928710658;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> wait = {97000, 73000, 84700};
    vector<int> travel = {31200, 72500, 4700};
    int timeLeft = 210000;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2835726246037114;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> wait = {97000, 73000, 84700};
    vector<int> travel = {31200, 72500, 4700};
    int timeLeft = 240000;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5372445474231571;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> wait = {97000, 73000, 84700};
    vector<int> travel = {31200, 72500, 4700};
    int timeLeft = 268000;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7643041560848166;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> wait = {97000, 73000, 84700};
    vector<int> travel = {31200, 72500, 4700};
    int timeLeft = 278300;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8310000530201489;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> wait = {97000, 73000, 84700};
    vector<int> travel = {31200, 72500, 4700};
    int timeLeft = 278400;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8315873286341242;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> wait = {97000, 73000, 84700};
    vector<int> travel = {31200, 72500, 4700};
    int timeLeft = 278500;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8321733873738844;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> wait = {97000, 73000, 84700};
    vector<int> travel = {31200, 72500, 4700};
    int timeLeft = 310000;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9583941587027168;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> wait = {97000, 73000, 84700};
    vector<int> travel = {31200, 72500, 4700};
    int timeLeft = 108555;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0348224439069298E-9;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> wait = {0, 0, 0};
    vector<int> travel = {3, 4, 5};
    int timeLeft = 11;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> wait = {1300, 0, 0};
    vector<int> travel = {2, 2, 2};
    int timeLeft = 576000;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
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
    vector<int> wait = {0, 1470, 0};
    vector<int> travel = {20000, 2, 2};
    int timeLeft = 47;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> wait = {0, 0, 1470};
    vector<int> travel = {2, 2, 2};
    int timeLeft = 47;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.027891156462585033;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> wait = {0, 0, 14700};
    vector<int> travel = {20000, 20000, 20000};
    int timeLeft = 74699;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999319727891156;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> wait = {1, 1, 1};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 4;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> wait = {2, 2, 2};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 5;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666669;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> wait = {4321, 0, 3173};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 3;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
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
    vector<int> wait = {4321, 0, 3173};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 7;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 5.834929976828763E-7;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> wait = {4321, 0, 3173};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 2900;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.306064286486893;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> wait = {4321, 0, 3173};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 3176;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3671603795417727;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> wait = {4321, 3173, 0};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 3420;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4236287896320296;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> wait = {43210, 31730, 0};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 43212;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6328164776672066;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> wait = {43210, 31730, 0};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 51500;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7995795462510464;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> wait = {0, 43210, 31730};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 74000;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9996757058970647;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> wait = {100000, 100000, 100000};
    vector<int> travel = {100000, 100000, 100000};
    int timeLeft = 300000;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> wait = {89405, 59302, 77361};
    vector<int> travel = {56684, 87363, 21865};
    int timeLeft = 211599;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.038750155606863484;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> wait = {72753, 34929, 17514};
    vector<int> travel = {89822, 66339, 37000};
    int timeLeft = 278926;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8101835174696417;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> wait = {61685, 58761, 90541};
    vector<int> travel = {24176, 76041, 89533};
    int timeLeft = 80845;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> wait = {46011, 92612, 31856};
    vector<int> travel = {14687, 73451, 29343};
    int timeLeft = 53508;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> wait = {20352, 81660, 95211};
    vector<int> travel = {37568, 68773, 74917};
    int timeLeft = 189893;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 6.781600141343863E-4;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> wait = {58482, 24593, 96845};
    vector<int> travel = {59046, 59522, 16704};
    int timeLeft = 181685;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10720369834524436;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> wait = {28206, 79169, 47842};
    vector<int> travel = {17702, 40276, 40728};
    int timeLeft = 136611;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08354008553831994;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> wait = {44128, 58072, 1558};
    vector<int> travel = {17950, 78496, 58879};
    int timeLeft = 181446;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1253451454565586;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> wait = {79758, 16033, 47566};
    vector<int> travel = {27921, 38, 70588};
    int timeLeft = 75569;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> wait = {94277, 47850, 15363};
    vector<int> travel = {55104, 254, 14554};
    int timeLeft = 11603;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
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
    vector<int> wait = {59775, 31257, 93174};
    vector<int> travel = {15793, 12772, 68827};
    int timeLeft = 217980;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7859939081949852;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> wait = {78513, 37366, 28649};
    vector<int> travel = {50452, 95438, 30206};
    int timeLeft = 316844;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9998928982662924;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> wait = {76279, 16897, 28849};
    vector<int> travel = {58382, 32929, 76414};
    int timeLeft = 263751;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9246077149484246;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> wait = {32967, 74813, 79603};
    vector<int> travel = {55055, 50474, 94965};
    int timeLeft = 34168;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
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
    vector<int> wait = {50728, 37330, 54464};
    vector<int> travel = {12848, 68587, 75449};
    int timeLeft = 205980;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.188604746510523;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> wait = {9170, 46621, 15412};
    vector<int> travel = {15494, 83987, 44060};
    int timeLeft = 2867;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
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
    vector<int> wait = {81770, 2078, 36692};
    vector<int> travel = {85860, 18974, 91007};
    int timeLeft = 260854;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.558004158004158;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> wait = {51902, 69766, 86167};
    vector<int> travel = {12680, 46925, 93581};
    int timeLeft = 198611;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05006851005720723;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> wait = {97398, 18704, 8049};
    vector<int> travel = {75937, 56033, 62513};
    int timeLeft = 292407;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8680603183574588;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> wait = {152, 75399, 858};
    vector<int> travel = {27984, 78056, 29360};
    int timeLeft = 158405;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2984124457884057;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> wait = {365, 46018, 878};
    vector<int> travel = {30671, 32862, 85957};
    int timeLeft = 124207;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
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
    vector<int> wait = {132, 78789, 541};
    vector<int> travel = {86885, 92271, 67799};
    int timeLeft = 78593;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> wait = {473, 80450, 558};
    vector<int> travel = {47753, 6213, 18347};
    int timeLeft = 52038;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> wait = {244, 61590, 330};
    vector<int> travel = {68195, 39335, 93173};
    int timeLeft = 121734;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> wait = {184, 24878, 745};
    vector<int> travel = {64484, 70895, 49948};
    int timeLeft = 198154;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49692499397057643;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> wait = {278, 38250, 761};
    vector<int> travel = {80038, 44851, 6985};
    int timeLeft = 30691;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> wait = {451, 2596, 855};
    vector<int> travel = {90288, 83045, 85253};
    int timeLeft = 39221;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> wait = {217, 47850, 629};
    vector<int> travel = {55104, 254, 14554};
    int timeLeft = 84319;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2922466039707419;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> wait = {417, 16897, 533};
    vector<int> travel = {58382, 32929, 76414};
    int timeLeft = 176529;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4929277386518317;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> wait = {98765, 87654, 76543};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 200000;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9372135273032745;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> wait = {500, 10000, 7000};
    vector<int> travel = {10, 10, 10};
    int timeLeft = 100;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6333333333333301E-6;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> wait = {100000, 100000, 100000};
    vector<int> travel = {59999, 65432, 39999};
    int timeLeft = 379877;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.895635095766732;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> wait = {99999, 99999, 99999};
    vector<int> travel = {99999, 99999, 99999};
    int timeLeft = 99999;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
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
    vector<int> wait = {2, 100, 1};
    vector<int> travel = {9, 10, 8};
    int timeLeft = 50;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.215;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> wait = {0, 0, 2};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 4;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> wait = {0, 200, 0};
    vector<int> travel = {1, 1, 1};
    int timeLeft = 100;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.485;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> wait = {345, 265, 456};
    vector<int> travel = {100, 100, 100};
    int timeLeft = 756;
    ThreeBuses* pObj = new ThreeBuses();
    clock_t start = clock();
    double result = pObj->getProbability(wait, travel, timeLeft);
    clock_t end = clock();
    delete pObj;
    double expected = 0.34574130042999895;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=10657&pm=7295
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <fstream> 
#include <iostream> 
#include <iterator> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <utility> 
#include <valarray> 
#include <vector> 
 
using namespace std; 
 
//Macroses 
#define all(v) (v).begin(), (v).end() 
 
//Types 
typedef long long ll; 
typedef pair <int, int> pii; 
typedef vector <int> vi; 
typedef vector <bool> vb; 
typedef vector <pii> vp; 
typedef vector <double> vd; 
typedef queue <pii> qp; 
 
//Constants 
const int INF = 1000000000; 
const double EPS = 1e-10; 
const double PI = 3.1415926535897932384626433832795; 
 
//Global 
int n; 
 
//Functions 
 
//Main class 
class ThreeBuses 
{ 
public: 
  double getProbability(vector <int> w, vector <int> travel, int tr) 
    { 
    double res; 
    double t = tr; 
    t -= travel[0] + travel[1] + travel[2]; 
    if (t < -EPS) 
      return 0; 
    if (w[0] == 0 && w[1] == 0 && w[2] == 0) 
      return 1; 
    if (w[0] + w[1] + w[2] < t - EPS) 
      return 1; 
    sort(all(w)); 
    if (w[1] == 0) 
      return double(t) / w[2]; 
    if (w[0] == 0) 
    { 
      if (t <= w[1]) 
        return t * t / w[1] / w[2] / 2; 
      else if (t <= w[2]) 
        return (2 * w[1] * t - w[1] * w[1]) / w[1] / w[2] / 2; 
      else 
        return (2 * w[1] * t + 2 * w[2] * t - w[1] * w[1] - w[2] * w[2] - t * t) / w[1] / w[2] / 2; 
    } 
    if (t <= w[0]) 
      return t * t * t / 6 / w[0] / w[1] / w[2]; 
    if (t <= w[1]) 
      return t * t * t / 6 / w[0] / w[1] / w[2] - (t - w[0]) * (t - w[0]) * (t - w[0]) / 6 / w[0] / w[1] / w[2]; 
    if (t <= w[2] && t <= w[0] + w[1]) 
      return t * t * t / 6 / w[0] / w[1] / w[2] - (t - w[0]) * (t - w[0]) * (t - w[0]) / 6 / w[0] / w[1] / w[2] - (t - w[1]) * (t - w[1]) * (t - w[1]) / 6 / w[0] / w[1] / w[2]; 
    if (t <= w[0] + w[1]) 
      return t * t * t / 6 / w[0] / w[1] / w[2] - (t - w[0]) * (t - w[0]) * (t - w[0]) / 6 / w[0] / w[1] / w[2] - (t - w[1]) * (t - w[1]) * (t - w[1]) / 6 / w[0] / w[1] / w[2] - (t - w[2]) * (t - w[2]) * (t - w[2]) / 6 / w[0] / w[1] / w[2]; 
    if (t <= w[2]) 
      return t * t * t / 6 / w[0] / w[1] / w[2] - (t - w[0]) * (t - w[0]) * (t - w[0]) / 6 / w[0] / w[1] / w[2] - (t - w[1]) * (t - w[1]) * (t - w[1]) / 6 / w[0] / w[1] / w[2] + (t - w[0] - w[1]) * (t - w[0] - w[1]) * (t - w[0] - w[1]) / 6 / w[0] / w[1] / w[2]; 
    t = w[0] + w[1] + w[2] - t; 
    if (t <= w[0]) 
      return 1 - (t * t * t / 6 / w[0] / w[1] / w[2]); 
    if (t <= w[1]) 
      return 1 - (t * t * t / 6 / w[0] / w[1] / w[2] - (t - w[0]) * (t - w[0]) * (t - w[0]) / 6 / w[0] / w[1] / w[2]); 
    if (t <= w[2] && t <= w[0] + w[1]) 
      return 1 - (t * t * t / 6 / w[0] / w[1] / w[2] - (t - w[0]) * (t - w[0]) * (t - w[0]) / 6 / w[0] / w[1] / w[2] - (t - w[1]) * (t - w[1]) * (t - w[1]) / 6 / w[0] / w[1] / w[2]); 
    if (t <= w[0] + w[1]) 
      return 1 - (t * t * t / 6 / w[0] / w[1] / w[2] - (t - w[0]) * (t - w[0]) * (t - w[0]) / 6 / w[0] / w[1] / w[2] - (t - w[1]) * (t - w[1]) * (t - w[1]) / 6 / w[0] / w[1] / w[2] - (t - w[2]) * (t - w[2]) * (t - w[2]) / 6 / w[0] / w[1] / w[2]); 
    if (t <= w[2]) 
      return 1 - (t * t * t / 6 / w[0] / w[1] / w[2] - (t - w[0]) * (t - w[0]) * (t - w[0]) / 6 / w[0] / w[1] / w[2] - (t - w[1]) * (t - w[1]) * (t - w[1]) / 6 / w[0] / w[1] / w[2] + (t - w[0] - w[1]) * (t - w[0] - w[1]) * (t - w[0] - w[1]) / 6 / w[0] / w[1] / w[2]); 
    return -1; 
    } 
     
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/