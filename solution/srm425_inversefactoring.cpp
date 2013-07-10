/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10118
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

class InverseFactoring {
public:
    int getTheNumber(vector<int> factors);
};

int InverseFactoring::getTheNumber(vector<int> factors) {
    int ret;
    return ret;
}


int test0() {
    vector<int> factors = {2};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> factors = {2, 3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> factors = {4, 2};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> factors = {3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> factors = {2, 5};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> factors = {2, 3, 4, 6};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> factors = {7, 2};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> factors = {5, 3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> factors = {2, 8, 4};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> factors = {3, 6, 9, 2};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> factors = {2, 4, 10, 5};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> factors = {7, 3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> factors = {11, 2};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> factors = {3, 4, 2, 12, 6, 8};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> factors = {5};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> factors = {2, 13};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> factors = {9, 3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> factors = {4, 2, 7, 14};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> factors = {15, 6, 10, 5, 3, 2};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> factors = {4, 2, 8, 16};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> factors = {3, 11};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> factors = {17, 2};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> factors = {5, 7};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> factors = {4, 9, 3, 2, 6, 12, 18};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> factors = {2, 19};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> factors = {13, 3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> factors = {4, 2, 8, 10, 20, 5};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> factors = {7, 3, 21, 14, 2, 6};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> factors = {4, 22, 2, 11};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> factors = {15, 5, 3, 9};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> factors = {2, 23};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> factors = {16, 12, 6, 4, 24, 2, 3, 8};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> factors = {7};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> factors = {10, 25, 2, 5};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> factors = {20000, 2, 160, 80, 10, 4, 1600, 100, 64, 625, 1000, 5000, 800, 25, 200000, 10000, 25000, 125000, 8000, 5, 62500, 40000, 16, 32, 125, 250, 1250, 50000, 320, 200, 250000, 2000, 3125, 15625, 6250, 8, 500, 500000, 31250, 50, 12500, 20, 40, 100000, 4000, 2500, 400};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> factors = {62, 16129, 32258, 3937, 7874, 127, 31, 2, 254, 499999};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 999998;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> factors = {757, 1321};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 999997;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> factors = {83333, 6, 499998, 12, 5988, 1497, 166666, 998, 249999, 668, 3, 4, 2, 1002, 2004, 2994, 1996, 333332, 167, 499, 334, 501};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 999996;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> factors = {5, 199999};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 999995;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> factors = {43478, 2, 499997, 46, 23, 21739};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 999994;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> factors = {3, 333331};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 999993;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> factors = {5102, 249998, 35714, 196, 17857, 98, 2, 142856, 124999, 499996, 14, 20408, 49, 8, 10204, 71428, 2551, 28, 7, 4, 56, 392};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 999992;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> factors = {59, 997, 16949, 1003, 58823, 17};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 999991;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> factors = {8130, 30, 369, 542, 11111, 123, 22222, 6, 246, 3690, 9, 15, 66666, 199998, 1230, 1355, 1626, 738, 3, 24390, 10, 82, 2710, 271, 90, 615, 813, 2, 12195, 333330, 5, 18, 2439, 1845, 111110, 166665, 499995, 4065, 4878, 45, 205, 410, 99999, 41, 55555, 33333};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 999990;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> factors = {4691, 2, 9382, 342443, 73, 146};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 684886;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> factors = {3209, 29};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 93061;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> factors = {8436, 2109, 1356, 8588, 19, 452, 4294, 114, 4, 37, 50172, 57, 228, 703, 12, 238317, 2812, 38, 111, 4181, 444, 16724, 3, 76, 25086, 74, 158878, 12882, 6, 2147, 4218, 226, 79439, 476634, 317756, 12543, 8362, 222, 1406, 113, 25764, 6441, 339, 148, 2, 678};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 953268;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> factors = {878, 97, 42583, 2, 194, 439};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 85166;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> factors = {51167, 8079, 3, 19, 57, 2693};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 153501;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> factors = {2617, 4, 2, 5234};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 10468;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> factors = {15668, 168, 109676, 21, 23502, 82257, 219352, 7834, 56, 42, 12, 54838, 8, 47004, 164514, 24, 94008, 3, 6, 31336, 3917, 7, 11751, 2, 28, 27419, 14, 4, 329028, 84};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 658056;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> factors = {955, 107342, 53671, 2, 268355, 1910, 382, 5, 1405, 281, 562, 191, 10, 2810};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 536710;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> factors = {3, 25097};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 75291;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> factors = {67, 6805, 335, 91187, 1361, 5};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 455935;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> factors = {7, 1103, 7721, 3309, 3, 21};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 23163;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> factors = {3, 244424, 2, 122212, 91659, 30553, 8, 4, 24, 61106, 6, 12, 366636, 183318};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 733272;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> factors = {7, 78701, 11243, 5, 56215, 35};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 393505;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> factors = {2689, 149};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 400661;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> factors = {1627, 139};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 226153;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> factors = {179, 2929, 101, 18079, 29, 5191};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 524291;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> factors = {4339, 2};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 8678;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> factors = {13, 11831};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 153803;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> factors = {73, 6841};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 499393;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> factors = {5419, 157};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 850783;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> factors = {21010, 3190, 60929, 22, 290, 145, 382, 10505, 27695, 29, 2101, 319, 1910, 5, 58, 4202, 55, 638, 1595, 11078, 11, 121858, 10, 955, 5539, 55390, 191, 304645, 110, 2};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 609290;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> factors = {144745, 4, 28949, 20, 2, 57898, 5, 115796, 10, 289490};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 578980;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> factors = {14, 26456, 2, 28, 13228, 3307, 7, 23149, 8, 6614, 46298, 56, 4, 92596};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 185192;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> factors = {82307, 7};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 576149;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> factors = {1283, 233, 2566, 2, 466, 298939};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 597878;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> factors = {9329, 491, 779, 20131, 19, 41};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 382489;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> factors = {65451, 3, 21817, 196353, 9, 27};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 589059;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> factors = {2, 118757};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 237514;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> factors = {168619, 11, 76645, 15329, 55, 5};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 843095;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> factors = {673, 619};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 416587;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> factors = {213, 3, 1497, 71, 35429, 499};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 106287;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> factors = {3049, 131};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 399419;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> factors = {117991, 3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 353973;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> factors = {153554, 10, 2, 383885, 5, 76777};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 767770;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> factors = {724, 125252, 62626, 1448, 181, 692, 16, 2896, 1384, 31313, 4, 250504, 346, 2768, 2, 173, 8, 362};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 501008;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> factors = {2, 2986, 1493, 137, 204541, 274};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 409082;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> factors = {3, 303091};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 909273;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> factors = {17, 50261};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 854437;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> factors = {10, 98785, 8590, 15, 2, 19757, 230, 138, 12885, 6, 46, 69, 25770, 197570, 1718, 2577, 5, 345, 296355, 5154, 859, 118542, 23, 4295, 39514, 30, 3, 115, 59271, 690};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 592710;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> factors = {2, 227862, 37977, 18, 12659, 36, 50636, 4, 113931, 75954, 3, 9, 6, 12, 25318, 151908};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 455724;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> factors = {2, 246769};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 493538;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> factors = {18, 492642, 3, 6, 18246, 12, 162, 6082, 12164, 81, 36492, 9, 328428, 36, 82107, 3041, 4, 54, 109476, 9123, 54738, 324, 246321, 27369, 27, 2, 164214, 108};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 985284;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> factors = {61949, 5};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 309745;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> factors = {2, 1228, 4, 706, 108371, 307, 216742, 1412, 614, 353};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 433484;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> factors = {7, 58013};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 406091;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> factors = {2578, 129, 3, 110854, 86, 166281, 258, 2, 7734, 55427, 6, 3867, 1289, 43};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 332562;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> factors = {8647, 113};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 977111;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> factors = {8813, 13, 91, 637, 114569, 7, 61691, 16367, 1259, 49};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 801983;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> factors = {68, 4, 1462, 473, 44, 172, 17, 748, 11, 43, 16082, 2924, 34, 731, 374, 946, 86, 2, 1892, 187, 8041, 22};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 32164;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> factors = {27, 1755, 14937, 117, 9, 44811, 224055, 15, 383, 45, 65, 51705, 195, 17235, 351, 5, 585, 135, 3, 74685, 24895, 134433, 13, 1149, 4979, 5745, 10341, 3447, 39, 1915};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 672165;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> factors = {91073, 2, 122, 1493, 61, 2986};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 182146;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> factors = {233, 2959, 62677, 2563, 269, 11};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 689447;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> factors = {3, 94351};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 283053;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> factors = {3841, 41, 943, 167, 23, 6847};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 157481;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> factors = {44821, 337, 77, 2359, 25949, 70433, 19, 133, 7, 11, 6403, 1463, 209, 3707};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 493031;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> factors = {35, 5431, 105, 27155, 81465, 5, 21, 38017, 7, 15, 190085, 3, 114051, 16293};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 570255;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> factors = {264282, 17, 51, 88094, 3, 44047, 23319, 5182, 396423, 9, 34, 102, 46638, 7773, 153, 2, 2591, 18, 15546, 306, 6, 132141};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 792846;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> factors = {160499, 3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 481497;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> factors = {61433, 13355, 5, 2671, 23, 115};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 307165;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> factors = {409, 1049};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 429041;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> factors = {67, 3419, 263, 13, 17621, 871};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 229073;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> factors = {322963, 2};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 645926;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> factors = {2, 176207, 4, 352414};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 704828;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> factors = {221, 17, 61319, 13, 46891, 3607};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 797147;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> factors = {641, 1079, 13, 83, 8333, 53203};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 691639;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> factors = {339, 277302, 6, 92434, 818, 1356, 226, 4908, 113, 2, 4, 452, 678, 1227, 2454, 3, 46217, 184868, 409, 1636, 138651, 12};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 554604;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> factors = {5, 126031};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 630155;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> factors = {39, 9763, 25, 325, 65, 75, 975, 3755, 751, 195, 18775, 13, 29289, 11265, 56325, 5, 244075, 3, 2253, 15, 48815, 146445};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 732225;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> factors = {1131, 1073, 117, 13949, 3219, 37, 13, 39, 3, 29, 9657, 3393, 261, 41847, 111, 333, 377, 87, 481, 4329, 1443, 9};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 125541;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> factors = {137, 563};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 77131;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> factors = {8138, 377, 118001, 2, 58, 626, 313, 13, 4069, 754, 26, 18154, 29, 9077};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 236002;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> factors = {6, 606, 18, 9, 303, 74, 2, 202, 909, 37, 666, 3, 111, 101, 3737, 222, 11211, 7474, 333, 1818, 33633, 22422};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 67266;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> factors = {79, 237, 103, 8137, 3, 309};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 24411;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> factors = {275907, 91969, 3, 9};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 827721;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> factors = {2, 14, 59434, 29717, 7, 208019};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 416038;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> factors = {691, 1117};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 771847;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> factors = {2, 11, 6, 3, 4006, 66, 6009, 44066, 2003, 12018, 22033, 33, 66099, 22};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 132198;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> factors = {3, 363, 175934, 33, 2, 727, 121, 7997, 726, 242, 87967, 47982, 263901, 4362, 22, 23991, 66, 2181, 11, 1454, 6, 15994};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 527802;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> factors = {2, 236422, 6, 3, 118211, 354633};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 709266;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> factors = {33751, 7};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 236257;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> factors = {15, 54617, 273085, 5, 3, 163851};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 819255;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> factors = {90, 414, 4035, 15, 61870, 69, 92805, 138, 3, 24210, 23, 2421, 2070, 30935, 5, 6, 30, 18561, 230, 46, 6187, 4842, 538, 12105, 207, 1614, 1035, 345, 37122, 115, 10, 185610, 269, 12374, 9, 55683, 807, 8070, 45, 2690, 1345, 18, 2, 278415, 690, 111366};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 556830;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> factors = {6, 323738, 485607, 2, 161869, 3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 971214;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> factors = {13669, 71};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 970499;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> factors = {1907, 476, 2, 13349, 68, 453866, 119, 26698, 3814, 226933, 53396, 32419, 238, 64838, 7628, 129676, 14, 7, 28, 17, 4, 34};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 907732;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> factors = {13187, 43};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 567041;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> factors = {43, 129, 4327, 3, 12981, 186061};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 558183;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> factors = {3915, 435, 27, 135, 9, 5, 81, 145, 783, 87, 405, 2349, 45, 29, 1305, 15, 3, 261};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 11745;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> factors = {340111, 2};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 680222;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> factors = {3, 161573};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 484719;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> factors = {173649, 74421, 9, 7, 63, 21, 57883, 8269, 3, 24807};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 520947;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> factors = {326, 5216, 20864, 41728, 2, 652, 10432, 1304, 128, 2608, 64, 163, 4, 16, 8, 32, 512, 256};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 83456;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> factors = {2, 63467};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 126934;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> factors = {52, 409916, 4, 204958, 104, 102479, 15766, 8, 2, 31532, 63064, 13, 26, 7883};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 819832;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> factors = {310358, 58, 29, 155179, 116, 10702, 5351, 2, 4, 21404};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 620716;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> factors = {3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> factors = {3, 9};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> factors = {11};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> factors = {3, 7};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> factors = {7};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> factors = {3, 4, 2, 12, 6, 8};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> factors = {3, 5};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> factors = {5};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> factors = {7, 49};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 343;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> factors = {5, 3, 15, 9};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> factors = {997};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 994009;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> factors = {2, 3, 4, 6};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> factors = {5, 25, 125, 625, 3125, 15625, 78125};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 390625;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> factors = {3, 5, 9, 15};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> factors = {7, 3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> factors = {27, 9, 3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> factors = {5, 3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> factors = {3, 9, 27};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> factors = {2};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> factors = {121, 11, 3, 33};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 363;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> factors = {43, 7};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 301;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> factors = {9, 3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> factors = {2, 500000, 4, 250000, 5, 200000, 8, 125000, 10, 100000, 16, 62500, 20, 50000, 25, 40000, 32, 31250, 40, 25000, 50, 20000, 64, 15625, 80, 12500, 100, 10000, 125, 8000, 160, 6250, 200, 5000, 250, 4000, 320, 3125, 400, 2500, 500, 2000, 625, 1600, 800, 1250, 1000};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> factors = {17};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 289;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> factors = {3, 11};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> factors = {11, 13};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> factors = {4, 2, 8};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> factors = {2, 499979};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 999958;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> factors = {81, 27, 9, 3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 243;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> factors = {2, 4, 5, 8, 10, 16, 20, 25, 32, 40, 50, 64, 80, 100, 125, 160, 200, 250, 320, 400, 500, 625, 800, 1000, 1250, 1600, 2000, 2500, 3125, 4000, 5000, 6250, 8000, 10000, 12500, 15625, 20000, 25000, 31250, 40000, 50000, 62500, 100000, 125000, 200000, 250000, 500000};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> factors = {27, 3, 9};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> factors = {4, 2};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> factors = {2, 3};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> factors = {13, 23};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 299;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> factors = {2, 4};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> factors = {2, 3, 4, 6, 9, 12, 18};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> factors = {5, 25};
    InverseFactoring* pObj = new InverseFactoring();
    clock_t start = clock();
    int result = pObj->getTheNumber(factors);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22690044&rd=13516&pm=10118
********************************************************************************
#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include <string.h> 
#include <math.h> 
#include <algorithm> 
#include <functional> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <map> 
#include <queue> 
#include <set> 
#include <sstream> 
using namespace std; 
 
typedef vector<int> vi ; 
typedef vector< vi > vii ; 
typedef vector<string> vs ; 
typedef vector<double> vd ; 
 
#define min(a,b) a<b?a:b 
#define max(a,b) a>b?a:b 
#define fo(i,n) for(i=0;i<(n);++i) 
#define clr(a,b) memset(a,b,sizeof(a)) 
#define all(a) a.begin(),a.end() 
#define sorta( n ) sort( all( n ) ) 
 
class InverseFactoring { 
public: 
int getTheNumber(vector <int> f) 
{ 
    sorta( f ); 
    return f[0] * f[f.size() - 1]; 
} 
 
 
 
 
 
 
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/