/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11910
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

class EllysXors {
public:
    long getXor(long L, long R);
};

long EllysXors::getXor(long L, long R) {
    long ret;
    return ret;
}


int test0() {
    long L = 3;
    long R = 10;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long L = 5;
    long R = 5;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long L = 13;
    long R = 42;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 39;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long L = 666;
    long R = 1337;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long L = 1234567;
    long R = 89101112;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 89998783;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long L = 19;
    long R = 113;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long L = 42;
    long R = 666;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 666;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long L = 42;
    long R = 1337;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long L = 123456;
    long R = 7891011;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long L = 1000001;
    long R = 10000001;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1000001;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long L = 12345678;
    long R = 910111213;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long L = 1000000000;
    long R = 1000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long L = 1;
    long R = 2000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long L = 1;
    long R = 1;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long L = 1;
    long R = 2;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long L = 1;
    long R = 3;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long L = 1;
    long R = 4;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long L = 2;
    long R = 3;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long L = 3;
    long R = 4;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long L = 2;
    long R = 4;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long L = 4;
    long R = 8;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long L = 2;
    long R = 536879812;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 536879813;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long L = 536879912;
    long R = 999999999;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long L = 2;
    long R = 999999999;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long L = 32;
    long R = 32768;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 32768;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long L = 31;
    long R = 32768;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 32799;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long L = 31;
    long R = 32769;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long L = 32;
    long R = 32767;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long L = 131071;
    long R = 536870911;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 131071;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long L = 131071;
    long R = 536870912;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 537001983;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long L = 131071;
    long R = 536870913;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 131070;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long L = 131072;
    long R = 536870911;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long L = 131072;
    long R = 536870912;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 536870912;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long L = 131072;
    long R = 536870913;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long L = 131073;
    long R = 536870911;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 131072;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long L = 131073;
    long R = 536870912;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 537001984;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long L = 131073;
    long R = 536870913;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 131073;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long L = 1048575;
    long R = 1048575;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1048575;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long L = 1048576;
    long R = 1048576;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long L = 1048577;
    long R = 1048577;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1048577;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long L = 32768;
    long R = 131072;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 131072;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long L = 1;
    long R = 4000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000000;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long L = 2;
    long R = 4000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000001;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long L = 3;
    long R = 4000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000003;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long L = 4;
    long R = 4000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000000;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long L = 1;
    long R = 3500000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3500000000;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long L = 2;
    long R = 3500000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3500000001;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long L = 3;
    long R = 3500000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3500000003;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long L = 4;
    long R = 3500000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3500000000;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long L = 1;
    long R = 3200000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3200000000;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long L = 2;
    long R = 3200000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3200000001;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long L = 3;
    long R = 3200000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3200000003;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long L = 4;
    long R = 3200000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3200000000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long L = 666666666;
    long R = 4000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000001;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long L = 424242;
    long R = 3333333333;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long L = 3450000000;
    long R = 3550000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3550000000;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long L = 3499999999;
    long R = 3500000001;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3499999998;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long L = 3199999999;
    long R = 3200000001;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3199999998;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long L = 1500000000;
    long R = 3200000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3200000000;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long L = 1424242424;
    long R = 3666666666;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3666666667;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long L = 130263043;
    long R = 1177443348;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1106113559;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long L = 2810981134;
    long R = 3499790709;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long L = 2527172019;
    long R = 3461657195;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 2527172019;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long L = 354992550;
    long R = 1606742078;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1606742078;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long L = 1472309589;
    long R = 2224059869;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1472309589;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long L = 867820671;
    long R = 3985937175;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 867820671;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long L = 1897956893;
    long R = 3035443472;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3318593292;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long L = 283975837;
    long R = 933770122;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 658838295;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long L = 3476788076;
    long R = 3989990996;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3989990996;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long L = 2595773870;
    long R = 3624559114;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3624559114;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long L = 2418495253;
    long R = 2699053630;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 818349355;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long L = 42960118;
    long R = 1195813117;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long L = 842199711;
    long R = 1659595305;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 842199710;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long L = 1332287090;
    long R = 1496579640;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1496579641;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long L = 818324723;
    long R = 2890422175;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 818324723;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long L = 687152474;
    long R = 1522117401;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long L = 566218496;
    long R = 1053716812;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1053716812;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long L = 449420940;
    long R = 1946669556;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1946669556;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long L = 1864309337;
    long R = 2771931311;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1864309336;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long L = 3094639439;
    long R = 3984867497;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3094639438;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long L = 314517004;
    long R = 2425746086;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 2425746087;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long L = 1470596795;
    long R = 1996872890;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 547510784;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long L = 218065286;
    long R = 2019768625;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long L = 1948518086;
    long R = 3594405127;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long L = 504951108;
    long R = 2187256312;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 2187256312;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long L = 2844596960;
    long R = 3124633025;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long L = 1146426417;
    long R = 3222714612;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 2219027652;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long L = 34113053;
    long R = 2366099053;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 34113053;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long L = 852398326;
    long R = 2876863866;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 2876863866;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long L = 16232468;
    long R = 3892549222;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3892549223;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long L = 1016421603;
    long R = 3857091265;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1016421602;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long L = 76576982;
    long R = 3185129678;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3185129678;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long L = 1501742132;
    long R = 3477813612;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3477813612;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long L = 730722278;
    long R = 2708003158;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 2708003158;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long L = 75611648;
    long R = 3307123408;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3307123408;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long L = 1275177872;
    long R = 1591680236;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1591680236;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long L = 3394542013;
    long R = 3526959612;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 409843776;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long L = 3214926694;
    long R = 3349611794;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3349611794;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long L = 2500973784;
    long R = 3499081632;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3499081632;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long L = 1017144259;
    long R = 3881433164;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3690568591;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long L = 13;
    long R = 3452523424;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3452523436;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long L = 123;
    long R = 4000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000123;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long L = 123;
    long R = 3999999996;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999879;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long L = 1;
    long R = 1000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long L = 40;
    long R = 4000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000000;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long L = 1;
    long R = 3009710000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3009710000;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long L = 3;
    long R = 3999999997;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long L = 1;
    long R = 3999999999;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long L = 1;
    long R = 3999999998;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999999;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long L = 8;
    long R = 3998899879;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long L = 4325;
    long R = 3906300000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3906304132;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long L = 1;
    long R = 2147483648;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 2147483648;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long L = 2;
    long R = 3000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3000000001;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long L = 1;
    long R = 3333333333;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long L = 2;
    long R = 3999999988;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999989;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long L = 268435456;
    long R = 400000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 400000000;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long L = 2147483647;
    long R = 2147483648;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4294967295;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long L = 4000000000;
    long R = 4000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000000;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long L = 1;
    long R = 3000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3000000000;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long L = 9;
    long R = 2147483647;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    long L = 17;
    long R = 3654879452;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3654879436;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    long L = 12325;
    long R = 3987654236;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3987666552;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    long L = 2;
    long R = 3999999999;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    long L = 2900000000;
    long R = 3989929292;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3989929292;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    long L = 2;
    long R = 3242432545;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    long L = 3221225470;
    long R = 3221225472;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3221225473;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    long L = 3999999987;
    long R = 3999999999;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999987;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    long L = 5;
    long R = 3999999997;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    long L = 199;
    long R = 3456789054;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3456789240;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    long L = 1234567890;
    long R = 2345678912;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 2345678913;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    long L = 3000000000;
    long R = 4000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000000;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    long L = 10000000;
    long R = 4000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000000;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    long L = 1;
    long R = 999999999;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    long L = 1;
    long R = 3348991222;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3348991223;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    long L = 1287226651;
    long R = 1779211297;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1287226650;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    long L = 3723;
    long R = 3999999999;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3723;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    long L = 3990000000;
    long R = 4000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000000;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    long L = 1253834751;
    long R = 1253900287;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1253834751;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    long L = 5;
    long R = 999999999;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    long L = 1073741234;
    long R = 3023435619;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    long L = 1;
    long R = 400000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 400000000;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    long L = 1234567891;
    long R = 2345678914;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3259382416;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    long L = 3999999999;
    long R = 3999999999;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999999;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    long L = 3376367013;
    long R = 3814610059;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3376367012;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    long L = 1234567;
    long R = 3912345678;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3911417544;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    long L = 3800000;
    long R = 4000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    long L = 2147483648;
    long R = 2147483648;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 2147483648;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    long L = 9;
    long R = 3999999998;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999991;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    long L = 1;
    long R = 11;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    long L = 2147483648;
    long R = 4000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000000;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    long L = 1999999999;
    long R = 3999999998;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 2573120512;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    long L = 1;
    long R = 1999999999;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    long L = 3999000999;
    long R = 3999000999;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3999000999;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    long L = 3123456789;
    long R = 3123456791;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3123456788;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    long L = 3900000000;
    long R = 3932753940;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 3932753940;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    long L = 4;
    long R = 300234003;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    long L = 2;
    long R = 2;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    long L = 3999999992;
    long R = 4000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000000;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    long L = 1531682046;
    long R = 2905690008;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 2905690009;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    long L = 3994584896;
    long R = 4000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000000;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    long L = 362124;
    long R = 455288;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 455288;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    long L = 4;
    long R = 5;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    long L = 2000000000;
    long R = 4000000000;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000000;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    long L = 19288744;
    long R = 1998894898;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1998894899;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    long L = 512;
    long R = 1024;
    EllysXors* pObj = new EllysXors();
    clock_t start = clock();
    long result = pObj->getXor(L, R);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22689214&rd=14735&pm=11910
********************************************************************************
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>
#include <climits>
#include <numeric>
using namespace std;
 
#define all(c) (c).begin(), (c).end()
#define iter(c) __typeof((c).begin())
#define cpresent(c, e) (find(all(c), (e)) != (c).end())
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define tr(c, i) for (iter(c) i = (c).begin(); i != (c).end(); ++i)
#define pb push_back
#define mp make_pair
 
struct EllysXors {
  long long getXor(long long L, long long R);
};
 
typedef long long ll;
 
ll cum_xor(ll n) {
  switch (n % 4) {
  case 0: return n;
  case 1: return 1;
  case 2: return n + 1;
  case 3: return 0;
  }
  assert(false);
}
 
 
long long EllysXors::getXor(long long L, long long R) {
  return cum_xor(R) ^ cum_xor(L - 1);
}
 
 
 
 
 
 
 
 
 
 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17pre2 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/