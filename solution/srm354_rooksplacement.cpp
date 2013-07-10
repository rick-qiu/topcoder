/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7658
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

class RooksPlacement {
public:
    int countPlacements(int N, int M, int K);
};

int RooksPlacement::countPlacements(int N, int M, int K) {
    int ret;
    return ret;
}


int test0() {
    int N = 4;
    int M = 5;
    int K = 2;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 2;
    int M = 3;
    int K = 3;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
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
    int N = 6;
    int M = 7;
    int K = 20;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 50;
    int M = 25;
    int K = 50;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 879507;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 9;
    int M = 6;
    int K = 10;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 340200;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 41;
    int M = 42;
    int K = 23;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 333990;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 46;
    int M = 10;
    int K = 49;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 40;
    int M = 1;
    int K = 7;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 29;
    int M = 26;
    int K = 47;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
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
    int N = 3;
    int M = 46;
    int K = 25;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 9;
    int M = 38;
    int K = 64;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 5;
    int M = 5;
    int K = 49;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 43;
    int M = 23;
    int K = 90;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 18;
    int M = 29;
    int K = 86;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
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
    int N = 35;
    int M = 18;
    int K = 33;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 695540;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 35;
    int M = 5;
    int K = 81;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 4;
    int M = 9;
    int K = 24;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 22;
    int M = 18;
    int K = 34;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 49;
    int M = 10;
    int K = 90;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 38;
    int M = 6;
    int K = 68;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 7;
    int M = 6;
    int K = 70;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 20;
    int M = 7;
    int K = 12;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 318588;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 16;
    int M = 50;
    int K = 22;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 627500;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 10;
    int M = 45;
    int K = 27;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 36;
    int M = 9;
    int K = 88;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 39;
    int M = 34;
    int K = 7;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 62134;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 40;
    int M = 11;
    int K = 9;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 129324;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 29;
    int M = 33;
    int K = 90;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 41;
    int M = 17;
    int K = 51;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 18;
    int M = 18;
    int K = 77;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 35;
    int M = 28;
    int K = 94;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 11;
    int M = 2;
    int K = 5;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 23;
    int M = 37;
    int K = 39;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 288688;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 23;
    int M = 35;
    int K = 61;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
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
    int M = 27;
    int K = 7;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 814007;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 48;
    int M = 46;
    int K = 22;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 888906;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 1;
    int M = 9;
    int K = 76;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 13;
    int M = 29;
    int K = 69;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 9;
    int M = 14;
    int K = 44;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 15;
    int M = 8;
    int K = 79;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 46;
    int M = 5;
    int K = 7;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 359199;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 17;
    int M = 32;
    int K = 27;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 328707;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 46;
    int M = 12;
    int K = 32;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 43;
    int M = 34;
    int K = 52;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 29;
    int M = 50;
    int K = 89;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 18;
    int M = 23;
    int K = 15;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 186506;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 3;
    int M = 47;
    int K = 5;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 54372;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 28;
    int M = 33;
    int K = 5;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 93658;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 20;
    int M = 37;
    int K = 43;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 32;
    int M = 8;
    int K = 46;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 21;
    int M = 3;
    int K = 49;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 12;
    int M = 50;
    int K = 35;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 42;
    int M = 14;
    int K = 48;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 49;
    int M = 49;
    int K = 73;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 8;
    int M = 28;
    int K = 77;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 37;
    int M = 4;
    int K = 31;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
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
    int N = 30;
    int M = 21;
    int K = 61;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 24;
    int M = 22;
    int K = 87;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 11;
    int M = 27;
    int K = 97;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 25;
    int M = 42;
    int K = 8;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 207641;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 30;
    int M = 49;
    int K = 7;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 979531;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 13;
    int M = 1;
    int K = 22;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 2;
    int M = 43;
    int K = 99;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 13;
    int M = 23;
    int K = 5;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7661;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 46;
    int M = 48;
    int K = 48;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 43567;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 50;
    int M = 46;
    int K = 73;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 50;
    int M = 47;
    int K = 46;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 678182;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 45;
    int M = 47;
    int K = 56;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 685248;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 47;
    int M = 47;
    int K = 19;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 583709;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 49;
    int M = 48;
    int K = 43;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 263494;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 50;
    int M = 45;
    int K = 37;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 65849;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 48;
    int M = 46;
    int K = 40;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 271023;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 45;
    int M = 46;
    int K = 99;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 46;
    int M = 48;
    int K = 81;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 45;
    int M = 50;
    int K = 8;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 152867;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 47;
    int M = 50;
    int K = 80;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 49;
    int M = 50;
    int K = 59;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 83629;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 48;
    int M = 50;
    int K = 12;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 929972;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 47;
    int M = 45;
    int K = 92;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 49;
    int M = 48;
    int K = 28;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 346171;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 47;
    int M = 48;
    int K = 85;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 46;
    int M = 48;
    int K = 24;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50429;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 47;
    int M = 46;
    int K = 42;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 245464;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 46;
    int M = 50;
    int K = 51;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 882903;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 50;
    int M = 50;
    int K = 99;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 50;
    int M = 50;
    int K = 100;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 50;
    int M = 50;
    int K = 50;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 344212;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 50;
    int M = 50;
    int K = 70;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 1;
    int M = 1;
    int K = 2;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 1;
    int M = 1;
    int K = 1;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
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
    int N = 1;
    int M = 2;
    int K = 2;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
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
    int N = 2;
    int M = 1;
    int K = 2;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 2;
    int M = 1;
    int K = 1;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 50;
    int M = 1;
    int K = 25;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 50;
    int M = 2;
    int K = 51;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 1;
    int M = 1;
    int K = 100;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
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
    int N = 50;
    int M = 50;
    int K = 1;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 50;
    int M = 50;
    int K = 2;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 123747;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 50;
    int M = 50;
    int K = 3;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 77407;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 50;
    int M = 50;
    int K = 66;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12772;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 50;
    int M = 50;
    int K = 67;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 1;
    int M = 50;
    int K = 1;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 50;
    int M = 1;
    int K = 2;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 1;
    int M = 50;
    int K = 3;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 50;
    int M = 2;
    int K = 1;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 2;
    int M = 50;
    int K = 2;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4950;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 50;
    int M = 2;
    int K = 3;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 117600;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 2;
    int M = 50;
    int K = 4;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 381799;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 50;
    int M = 2;
    int K = 5;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 50;
    int M = 50;
    int K = 63;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 404095;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 41;
    int M = 49;
    int K = 47;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 878278;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 49;
    int M = 49;
    int K = 59;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 636557;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 50;
    int M = 50;
    int K = 30;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 894552;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 50;
    int M = 50;
    int K = 60;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 613528;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 50;
    int M = 50;
    int K = 65;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 872659;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 50;
    int M = 49;
    int K = 40;
    RooksPlacement* pObj = new RooksPlacement();
    clock_t start = clock();
    int result = pObj->countPlacements(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14410;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10711&pm=7658
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
typedef long long int64;
typedef unsigned long long uint64;
#define two(X) (1<<(X))
#define twoL(X) (((int64)(1))<<(X))
#define contain(S,X) (((S)&two(X))!=0)
#define containL(S,X) (((S)&twoL(X))!=0)
const double pi=acos(-1.0);
const double eps=1e-11;
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;}
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;}
template<class T> inline T sqr(T x){return x*x;}
typedef pair<int,int> ipair;
 
const int MODE=1000001;
 
int f[52][52][52][102];
 
class RooksPlacement
{
public:
  int add(int a,int b)
  {
    return (a+b)%MODE;
  }
  int mul(int a,int b)
  {
    int64 _a=a,_b=b;
    int64 t=_a*_b;
    return (int)(t%MODE);
  }
  int solve(int n,int v1,int v2,int k)
  {
    if (k==0) return 1;
    if (n==0) return 0;
    int &ret=f[n][v1][v2][k];
    if (ret!=-1) return ret;
    ret=solve(n-1,v1,v2,k);
    //1
    if (v1>=1 && k>=1)
      ret=add(ret,mul(solve(n-1,v1-1,v2+1,k-1),v1));
    if (v2>=1 && k>=1)
      ret=add(ret,mul(solve(n-1,v1,v2-1,k-1),v2));
    //2
    if (v1>=2 && k>=2)
      ret=add(ret,mul(solve(n-1,v1-2,v2,k-2),v1*(v1-1)/2));
    return ret;
  }
  int countPlacements(int N, int M, int K)
  {
    memset(f,255,sizeof(f));
    int ret=solve(N,M,0,K);
    return ret;
  }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/