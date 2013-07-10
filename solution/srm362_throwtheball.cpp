/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8077
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

class ThrowTheBall {
public:
    int timesThrown(int N, int M, int L);
};

int ThrowTheBall::timesThrown(int N, int M, int L) {
    int ret;
    return ret;
}


int test0() {
    int N = 5;
    int M = 3;
    int L = 2;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 4;
    int M = 1;
    int L = 3;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 10;
    int M = 3;
    int L = 5;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 15;
    int M = 4;
    int L = 9;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 50;
    int M = 50;
    int L = 49;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 2450;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 50;
    int M = 50;
    int L = 1;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 2450;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 11;
    int M = 50;
    int L = 7;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 539;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 48;
    int M = 2;
    int L = 36;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 14;
    int M = 1;
    int L = 1;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 19;
    int M = 23;
    int L = 17;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 418;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 22;
    int M = 22;
    int L = 21;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 462;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 3;
    int M = 50;
    int L = 1;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 147;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 3;
    int M = 50;
    int L = 2;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 147;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 4;
    int M = 50;
    int L = 3;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 196;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 19;
    int M = 49;
    int L = 5;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 912;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 46;
    int M = 5;
    int L = 31;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 184;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 27;
    int M = 15;
    int L = 9;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 34;
    int M = 21;
    int L = 8;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 340;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 34;
    int M = 32;
    int L = 6;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 527;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 11;
    int M = 50;
    int L = 10;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 539;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 50;
    int M = 50;
    int L = 25;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 21;
    int M = 13;
    int L = 5;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 30;
    int M = 43;
    int L = 7;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1260;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 48;
    int M = 22;
    int L = 17;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1008;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 21;
    int M = 16;
    int L = 17;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 315;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 21;
    int M = 28;
    int L = 7;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 23;
    int M = 17;
    int L = 3;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 368;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 19;
    int M = 46;
    int L = 1;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 855;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 34;
    int M = 7;
    int L = 21;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 204;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 16;
    int M = 42;
    int L = 10;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 328;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 31;
    int M = 17;
    int L = 7;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 496;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 20;
    int M = 44;
    int L = 4;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 215;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 12;
    int M = 31;
    int L = 9;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 31;
    int M = 7;
    int L = 28;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 186;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 11;
    int M = 1;
    int L = 10;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 21;
    int M = 44;
    int L = 17;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 903;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 4;
    int M = 23;
    int L = 2;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 38;
    int M = 27;
    int L = 15;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 988;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 6;
    int M = 39;
    int L = 1;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 228;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 48;
    int M = 47;
    int L = 17;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 2208;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 18;
    int M = 18;
    int L = 10;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 153;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 29;
    int M = 48;
    int L = 21;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1363;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 15;
    int M = 40;
    int L = 2;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 585;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 41;
    int M = 32;
    int L = 23;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1271;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 26;
    int M = 7;
    int L = 9;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 34;
    int M = 4;
    int L = 1;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 9;
    int M = 14;
    int L = 7;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 21;
    int M = 23;
    int L = 17;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 462;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 32;
    int M = 9;
    int L = 18;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 10;
    int M = 9;
    int L = 4;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 16;
    int M = 7;
    int L = 13;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 9;
    int M = 41;
    int L = 6;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 14;
    int M = 27;
    int L = 3;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 364;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 9;
    int M = 26;
    int L = 2;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 225;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 15;
    int M = 14;
    int L = 13;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 18;
    int M = 17;
    int L = 14;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 42;
    int M = 5;
    int L = 20;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 25;
    int M = 44;
    int L = 2;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1075;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 36;
    int M = 29;
    int L = 5;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1008;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 43;
    int M = 21;
    int L = 5;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 860;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 15;
    int M = 14;
    int L = 8;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 42;
    int M = 26;
    int L = 40;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 525;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 4;
    int M = 13;
    int L = 3;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 29;
    int M = 12;
    int L = 17;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 319;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 32;
    int M = 46;
    int L = 31;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1440;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 30;
    int M = 29;
    int L = 25;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 27;
    int M = 38;
    int L = 18;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 43;
    int M = 45;
    int L = 1;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1892;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 48;
    int M = 36;
    int L = 30;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 280;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 30;
    int M = 25;
    int L = 4;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 44;
    int M = 6;
    int L = 8;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 11;
    int M = 14;
    int L = 5;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 33;
    int M = 5;
    int L = 6;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 22;
    int M = 31;
    int L = 21;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 660;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 46;
    int M = 48;
    int L = 12;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1081;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 5;
    int M = 25;
    int L = 2;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 4;
    int M = 33;
    int L = 1;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 25;
    int M = 18;
    int L = 21;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 425;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 26;
    int M = 16;
    int L = 19;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 390;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 8;
    int M = 8;
    int L = 4;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 50;
    int M = 50;
    int L = 47;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 2450;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 50;
    int M = 6;
    int L = 2;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 3;
    int M = 1;
    int L = 1;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 5;
    int M = 10;
    int L = 1;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 6;
    int M = 6;
    int L = 5;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 42;
    int M = 20;
    int L = 41;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 798;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 5;
    int M = 48;
    int L = 2;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 235;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 7;
    int M = 2;
    int L = 3;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 4;
    int M = 2;
    int L = 2;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 49;
    int M = 49;
    int L = 7;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 336;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 50;
    int M = 4;
    int L = 9;
    ThrowTheBall* pObj = new ThrowTheBall();
    clock_t start = clock();
    int result = pObj->timesThrown(N, M, L);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22666352&rd=10775&pm=8077
********************************************************************************
#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
 
class ThrowTheBall 
{ 
public: 
  int timesThrown(int N, int M, int L){ 
    int res , num[51],i,k; 
    for (i=0;i<51;i++) 
    num[i]=0 ; 
    num[0]=1 ; 
    k=0 ; 
    while(num[k]!=M){ 
      if (num[k]%2){ 
        k=((k-L)%N+N)%N;   
        num[k]++ ; 
      } 
      else{ 
        k=(k+L)%N ; 
        num[k]++;   
      }   
    } 
    res=-1; 
    for (i=0;i<N;i++) 
    res+=num[i]; 
 
    return res ; 
  };   
};

********************************************************************************
*******************************************************************************/