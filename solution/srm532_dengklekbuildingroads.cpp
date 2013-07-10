/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11767
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

class DengklekBuildingRoads {
public:
    int numWays(int N, int M, int K);
};

int DengklekBuildingRoads::numWays(int N, int M, int K) {
    int ret;
    return ret;
}


int test0() {
    int N = 3;
    int M = 4;
    int K = 1;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
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
    int N = 4;
    int M = 3;
    int K = 3;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 2;
    int M = 1;
    int K = 1;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
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
    int N = 5;
    int M = 0;
    int K = 3;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 10;
    int M = 20;
    int K = 5;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 26964424;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 30;
    int M = 30;
    int K = 8;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 201860393;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 30;
    int M = 30;
    int K = 7;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 145979048;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 30;
    int M = 30;
    int K = 6;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 177956313;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 30;
    int M = 30;
    int K = 5;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 244633725;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 30;
    int M = 30;
    int K = 4;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 457088350;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 30;
    int M = 30;
    int K = 3;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 488218396;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 30;
    int M = 30;
    int K = 2;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 36571349;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 30;
    int M = 30;
    int K = 1;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 532655639;
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
    int M = 0;
    int K = 1;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 2;
    int M = 1;
    int K = 1;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 2;
    int M = 30;
    int K = 1;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
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
    int M = 30;
    int K = 3;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 41208;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 4;
    int M = 30;
    int K = 1;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 6;
    int M = 30;
    int K = 5;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 595145665;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 8;
    int M = 30;
    int K = 3;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 898450917;
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
    int M = 8;
    int K = 6;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 55041;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 16;
    int M = 28;
    int K = 1;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 40116600;
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
    int M = 2;
    int K = 2;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 30;
    int M = 2;
    int K = 1;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 10;
    int M = 2;
    int K = 5;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 25;
    int M = 13;
    int K = 7;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 309349042;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 30;
    int M = 15;
    int K = 4;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 543238700;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 27;
    int M = 27;
    int K = 6;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 69218107;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 3;
    int M = 19;
    int K = 6;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 1;
    int M = 30;
    int K = 8;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
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
    int N = 4;
    int M = 16;
    int K = 7;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2673;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 23;
    int M = 28;
    int K = 1;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 319959386;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 16;
    int M = 18;
    int K = 4;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 250757448;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 29;
    int M = 29;
    int K = 7;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 85065498;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 30;
    int M = 27;
    int K = 7;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 627690142;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 30;
    int M = 2;
    int K = 8;
    DengklekBuildingRoads* pObj = new DengklekBuildingRoads();
    clock_t start = clock();
    int result = pObj->numWays(N, M, K);
    clock_t end = clock();
    delete pObj;
    int expected = 204;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20036294&rd=14725&pm=11767
********************************************************************************
#include <sstream> 
#include <iostream>
#include <string.h>
#include <algorithm>
#include <stdlib.h> 
#include <stdio.h> 
#include <numeric>
#include <math.h>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;
 
const int mod = 1000000007;
 
int n , k;
int dp[32][32][1 << 9][10];
 
int go ( int x , int left , int mask , int put ) {
  if ( x == n ) {
    return !left;
  }
  
  int &ans = dp[x][left][mask][put];
  if ( ans != -1 ) return ans;
  
  int i;
  ans = 0;
  
  if ( !(mask & 1) ) {
    ans = (ans + go ( x + 1 , left , mask >> 1 , 1 )) % mod;
  }
  
  for (i = put; i <= k; i++) {
    if ( x + i >= n ) break;
    if ( !left ) break;
    
    ans = (ans + go ( x , left - 1 , mask ^ 1 ^ (1 << i) , i )) % mod;
  }
  
//   printf ( "%d %d %d       %d\n" , x , left , mask , ans );
  
  return ans;
}
 
int solve ( int N, int M, int K ) {
  n = N;
  k = K;
  
  memset ( dp , -1 , sizeof dp );
  return go ( 0 , M , 0 , 1 );
}
 
class DengklekBuildingRoads {
  public:
  int numWays(int N, int M, int K) {
    return solve ( N, M, K );
  }
};
 
 
 
// Powered by FileEdit
// Powered by moj 4.16 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/