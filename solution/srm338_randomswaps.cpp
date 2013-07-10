/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7289
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

class RandomSwaps {
public:
    double getProbability(int arrayLength, int swapCount, int a, int b);
};

double RandomSwaps::getProbability(int arrayLength, int swapCount, int a, int b) {
    double ret;
    return ret;
}


int test0() {
    int arrayLength = 5;
    int swapCount = 1;
    int a = 0;
    int b = 0;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int arrayLength = 5;
    int swapCount = 1;
    int a = 0;
    int b = 3;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int arrayLength = 5;
    int swapCount = 2;
    int a = 0;
    int b = 0;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int arrayLength = 100;
    int swapCount = 500;
    int a = 3;
    int b = 3;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.010036635745123007;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int arrayLength = 2;
    int swapCount = 1;
    int a = 0;
    int b = 0;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
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
    int arrayLength = 2;
    int swapCount = 1;
    int a = 0;
    int b = 1;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int arrayLength = 2;
    int swapCount = 1;
    int a = 1;
    int b = 0;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int arrayLength = 2;
    int swapCount = 1;
    int a = 1;
    int b = 1;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
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
    int arrayLength = 1000;
    int swapCount = 100000;
    int a = 1;
    int b = 3;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int arrayLength = 1000;
    int swapCount = 10000;
    int a = 47;
    int b = 997;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 9.999999980198375E-4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int arrayLength = 996;
    int swapCount = 8976;
    int a = 23;
    int b = 23;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.001004030387635356;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int arrayLength = 979;
    int swapCount = 9432;
    int a = 11;
    int b = 11;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010214545726463526;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int arrayLength = 1000;
    int swapCount = 10000;
    int a = 134;
    int b = 134;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010000019781824516;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int arrayLength = 2;
    int swapCount = 100000;
    int a = 0;
    int b = 0;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
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
    int arrayLength = 2;
    int swapCount = 100000;
    int a = 0;
    int b = 1;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int arrayLength = 2;
    int swapCount = 98765;
    int a = 0;
    int b = 1;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
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
    int arrayLength = 3;
    int swapCount = 333;
    int a = 2;
    int b = 2;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
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
    int arrayLength = 3;
    int swapCount = 1;
    int a = 1;
    int b = 2;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int arrayLength = 3;
    int swapCount = 1;
    int a = 2;
    int b = 2;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int arrayLength = 3;
    int swapCount = 2;
    int a = 1;
    int b = 2;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int arrayLength = 3;
    int swapCount = 2;
    int a = 2;
    int b = 2;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int arrayLength = 3;
    int swapCount = 3;
    int a = 1;
    int b = 2;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int arrayLength = 3;
    int swapCount = 3;
    int a = 2;
    int b = 2;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int arrayLength = 3;
    int swapCount = 4;
    int a = 0;
    int b = 1;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int arrayLength = 3;
    int swapCount = 4;
    int a = 1;
    int b = 1;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int arrayLength = 3;
    int swapCount = 5;
    int a = 0;
    int b = 2;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int arrayLength = 3;
    int swapCount = 5;
    int a = 0;
    int b = 0;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int arrayLength = 1000;
    int swapCount = 47;
    int a = 47;
    int b = 47;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9102011623170692;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int arrayLength = 1000;
    int swapCount = 213;
    int a = 24;
    int b = 254;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 3.474410834317587E-4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int arrayLength = 1000;
    int swapCount = 999;
    int a = 999;
    int b = 999;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13592918707313337;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int arrayLength = 1000;
    int swapCount = 4700;
    int a = 0;
    int b = 999;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 9.999188199335141E-4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int arrayLength = 976;
    int swapCount = 7547;
    int a = 362;
    int b = 557;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010245899732474594;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int arrayLength = 764;
    int swapCount = 5366;
    int a = 424;
    int b = 424;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0013096640581993224;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int arrayLength = 13;
    int swapCount = 98765;
    int a = 1;
    int b = 1;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07692307692307693;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int arrayLength = 987;
    int swapCount = 7654;
    int a = 23;
    int b = 534;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010131710455277341;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int arrayLength = 746;
    int swapCount = 3522;
    int a = 533;
    int b = 234;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.001340378947277188;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int arrayLength = 436;
    int swapCount = 3256;
    int a = 333;
    int b = 424;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002293577283284885;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int arrayLength = 1000;
    int swapCount = 1;
    int a = 34;
    int b = 34;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.998;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int arrayLength = 1000;
    int swapCount = 1;
    int a = 44;
    int b = 676;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2.002002002002002E-6;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int arrayLength = 1000;
    int swapCount = 9;
    int a = 21;
    int b = 45;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7874401585442643E-5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int arrayLength = 976;
    int swapCount = 32;
    int a = 23;
    int b = 656;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 6.515999944043824E-5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int arrayLength = 997;
    int swapCount = 9800;
    int a = 46;
    int b = 355;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010030090242864138;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int arrayLength = 986;
    int swapCount = 9765;
    int a = 53;
    int b = 53;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010142011810771873;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int arrayLength = 943;
    int swapCount = 9965;
    int a = 535;
    int b = 542;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010604453863906687;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int arrayLength = 857;
    int swapCount = 47433;
    int a = 465;
    int b = 532;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0011668611435239206;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int arrayLength = 1000;
    int swapCount = 100000;
    int a = 1;
    int b = 2;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int arrayLength = 1000;
    int swapCount = 100000;
    int a = 0;
    int b = 0;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int arrayLength = 1000;
    int swapCount = 100000;
    int a = 3;
    int b = 4;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int arrayLength = 1000;
    int swapCount = 100000;
    int a = 12;
    int b = 13;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int arrayLength = 1000;
    int swapCount = 100000;
    int a = 2;
    int b = 3;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int arrayLength = 1000;
    int swapCount = 100000;
    int a = 3;
    int b = 9;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int arrayLength = 1000;
    int swapCount = 100000;
    int a = 0;
    int b = 997;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int arrayLength = 1000;
    int swapCount = 100000;
    int a = 0;
    int b = 1;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int arrayLength = 2;
    int swapCount = 100000;
    int a = 0;
    int b = 1;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int arrayLength = 1000;
    int swapCount = 100000;
    int a = 2;
    int b = 2;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int arrayLength = 1000;
    int swapCount = 100000;
    int a = 500;
    int b = 500;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int arrayLength = 100;
    int swapCount = 100000;
    int a = 1;
    int b = 2;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int arrayLength = 1000;
    int swapCount = 65535;
    int a = 23;
    int b = 45;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int arrayLength = 1000;
    int swapCount = 100000;
    int a = 100;
    int b = 100;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int arrayLength = 1000;
    int swapCount = 100000;
    int a = 200;
    int b = 500;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int arrayLength = 999;
    int swapCount = 99999;
    int a = 42;
    int b = 666;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.001001001001001001;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int arrayLength = 999;
    int swapCount = 99999;
    int a = 9;
    int b = 99;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.001001001001001001;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int arrayLength = 2;
    int swapCount = 1;
    int a = 0;
    int b = 1;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int arrayLength = 1000;
    int swapCount = 2000;
    int a = 1;
    int b = 5;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 9.818306173489915E-4;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int arrayLength = 1000;
    int swapCount = 100000;
    int a = 5;
    int b = 6;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int arrayLength = 1000;
    int swapCount = 100000;
    int a = 1;
    int b = 998;
    RandomSwaps* pObj = new RandomSwaps();
    clock_t start = clock();
    double result = pObj->getProbability(arrayLength, swapCount, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=10662&pm=7289
********************************************************************************
// after all, I think you should not try to challenge me 
 
#include <algorithm> 
using namespace std; 
 
typedef long double ld; 
 
#define LS < 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
#line 3 "RandomSwaps.cc" 
 
class RandomSwaps { 
  public: 
  double getProbability(int arrayLength, int swapCount, int a, int b) { 
    // !FDI 
    ld prob; 
    if(a == b) prob = 1; 
    else prob = 0; 
    ld N = arrayLength; 
    FOR(k,0,swapCount) 
      prob = ((N-2)/N) * prob + (2/N) * (1-prob) * (1/(N-1));  
    return prob; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/