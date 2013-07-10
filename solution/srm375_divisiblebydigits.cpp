/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8318
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

class DivisibleByDigits {
public:
    long getContinuation(int n);
};

long DivisibleByDigits::getContinuation(int n) {
    long ret;
    return ret;
}


int test0() {
    int n = 13;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 132;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 648;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 648;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 566;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 56610;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 308;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 30816;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 191;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1917;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 1000000000;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 64348557;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 64348557000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 987654321;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 987654321360;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 123456789;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1234567890360;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 1;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 2;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 9;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 10;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 12;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 14;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 140;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 17;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 175;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 74;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7420;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 98;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9864;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 108;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1080;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 345;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 34500;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 397;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 39753;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 491;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 49104;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 777;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 777;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 1078;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 107800;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 1245;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 124500;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 1279;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1279026;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 1583;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1583040;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 1759;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1759275;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 1765;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1765050;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 7185;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7185080;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 7298;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7298424;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 23497;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 23497236;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 47259;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 472590720;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 5789;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 57891960;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 7589;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 75892320;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 19758;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 197580600;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 28759;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 287592480;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 44957;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 449570520;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 200508709;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2005087092120;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 314159265;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 31415926500;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 314167958;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3141679582440;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 314169578;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3141695781000;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 464597508;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 4645975080600;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 464597517;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 4645975170060;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 504604188;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 5046041880;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 604070913;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 6040709136;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 704060432;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 70406043204;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 774378549;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 774378549000;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 812341512;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 8123415120;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 825473880;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 825473880;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 833330001;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 8333300016;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 833333759;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 8333337592440;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 844444597;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 8444445972480;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 931394757;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9313947570060;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 934330293;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 93433029300;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 999252999;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9992529990;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 999585999;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 999585999000;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 999909999;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 999909999;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 999999991;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999918;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 999999992;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 99999999216;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 999999997;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 99999999729;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 999999999;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 83;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 8304;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 346258971;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3462589710720;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 907678453;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9076784532480;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 56789;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 567892080;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 147;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 14700;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 950030021;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 95003002170;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 782343;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 782343072;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 999999750;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 999999750015;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 310;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3102;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 234567890;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2345678901720;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 21;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 210;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 19;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 198;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 6214;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 62148;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 27;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2702;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 999000587;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9990005870880;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 9010;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 90108;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 77996611;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 7799661198;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 19783465;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 197834651280;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 25;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 250;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 987577770;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9875777700600;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 334;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3348;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 927316845;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 927316845000;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 58;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 5800;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 46;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 468;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 925483158;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 92548315800;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 752752752;
    DivisibleByDigits* pObj = new DivisibleByDigits();
    clock_t start = clock();
    long result = pObj->getContinuation(n);
    clock_t end = clock();
    delete pObj;
    long expected = 75275275250;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20286298&rd=10794&pm=8318
********************************************************************************
#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
 
struct DivisibleByDigits {
  long long getContinuation(int n) {
    bool check[10];
    memset(check, 0, sizeof(check));
    for (int t = n; t != 0; t /= 10)
      check[t % 10] = true;
 
    long long prefix = n;
    for (int len = 0; ; len++) {
      long long ten = 1;
      for (int i = 0; i < len; i++)
        ten *= 10;
 
      for (long long suffix = 0; suffix < ten; suffix++) {
        long long x = prefix * ten + suffix;
        for (int d = 1; d <= 9; d++) {
          if (check[d] && (x % d) != 0) goto skip;
        }
        return x;
skip:;
      }
    }
    return -1;    
  }
};

********************************************************************************
*******************************************************************************/