/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10095
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

class CrazyBot {
public:
    double getProbability(int n, int east, int west, int south, int north);
};

double CrazyBot::getProbability(int n, int east, int west, int south, int north) {
    double ret;
    return ret;
}


int test0() {
    int n = 1;
    int east = 25;
    int west = 25;
    int south = 25;
    int north = 25;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
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
    int n = 2;
    int east = 25;
    int west = 25;
    int south = 25;
    int north = 25;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.75;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 7;
    int east = 50;
    int west = 0;
    int south = 0;
    int north = 50;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
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
    int n = 14;
    int east = 50;
    int west = 50;
    int south = 0;
    int north = 0;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 1.220703125E-4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 14;
    int east = 25;
    int west = 25;
    int south = 25;
    int north = 25;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.008845493197441101;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 7;
    int east = 4;
    int west = 75;
    int south = 13;
    int north = 8;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6757631663232042;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 11;
    int east = 37;
    int west = 23;
    int south = 15;
    int north = 25;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0428254853475433;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 1;
    int east = 23;
    int west = 35;
    int south = 39;
    int north = 3;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 2;
    int east = 89;
    int west = 1;
    int south = 10;
    int north = 0;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9822;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 7;
    int east = 50;
    int west = 2;
    int south = 26;
    int north = 22;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.454360187891202;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 13;
    int east = 100;
    int west = 0;
    int south = 0;
    int north = 0;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
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
    int n = 6;
    int east = 54;
    int west = 3;
    int south = 9;
    int north = 34;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6494356190800041;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 11;
    int east = 63;
    int west = 12;
    int south = 16;
    int north = 9;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.19706951917799853;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 6;
    int east = 21;
    int west = 29;
    int south = 34;
    int north = 16;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2401067696180005;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 6;
    int east = 0;
    int west = 46;
    int south = 16;
    int north = 38;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5705340927999994;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 6;
    int east = 0;
    int west = 62;
    int south = 29;
    int north = 9;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7884079895619984;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 1;
    int east = 10;
    int west = 36;
    int south = 35;
    int north = 19;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 13;
    int east = 11;
    int west = 50;
    int south = 18;
    int north = 21;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09395670096829466;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 1;
    int east = 6;
    int west = 33;
    int south = 15;
    int north = 46;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 2;
    int east = 12;
    int west = 11;
    int south = 21;
    int north = 56;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7384000000000002;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 4;
    int east = 15;
    int west = 26;
    int south = 46;
    int north = 13;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5199380800000001;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 14;
    int east = 100;
    int west = 0;
    int south = 0;
    int north = 0;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 14;
    int east = 36;
    int west = 30;
    int south = 21;
    int north = 13;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.008999903530642655;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 7;
    int east = 41;
    int west = 21;
    int south = 1;
    int north = 37;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.35289473865212256;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 6;
    int east = 25;
    int west = 64;
    int south = 9;
    int north = 2;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.20384536274;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 5;
    int east = 0;
    int west = 77;
    int south = 4;
    int north = 19;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9448662255999989;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 8;
    int east = 10;
    int west = 22;
    int south = 35;
    int north = 33;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08918977597712467;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 4;
    int east = 8;
    int west = 5;
    int south = 72;
    int north = 15;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5403199999999999;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 3;
    int east = 25;
    int west = 19;
    int south = 20;
    int north = 36;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5832200000000002;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 10;
    int east = 4;
    int west = 43;
    int south = 16;
    int north = 37;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2577111504854486;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 9;
    int east = 4;
    int west = 58;
    int south = 8;
    int north = 30;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5079240227065852;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 11;
    int east = 27;
    int west = 4;
    int south = 31;
    int north = 38;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05748275503085238;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 14;
    int east = 100;
    int west = 0;
    int south = 0;
    int north = 0;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
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
    int n = 6;
    int east = 2;
    int west = 4;
    int south = 41;
    int north = 53;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06725567844200002;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 13;
    int east = 21;
    int west = 31;
    int south = 31;
    int north = 17;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.024470155173989958;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 3;
    int east = 22;
    int west = 5;
    int south = 26;
    int north = 47;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5593760000000003;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 6;
    int east = 0;
    int west = 13;
    int south = 50;
    int north = 37;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12533415249999993;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 3;
    int east = 4;
    int west = 19;
    int south = 49;
    int north = 28;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.528192;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 13;
    int east = 58;
    int west = 37;
    int south = 0;
    int north = 5;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003400084892285699;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 10;
    int east = 67;
    int west = 5;
    int south = 17;
    int north = 11;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.44260382597029324;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 6;
    int east = 28;
    int west = 26;
    int south = 9;
    int north = 37;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2951868933220003;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 3;
    int east = 9;
    int west = 33;
    int south = 36;
    int north = 22;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6228100000000001;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 4;
    int east = 61;
    int west = 15;
    int south = 24;
    int north = 0;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6068244999999998;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 12;
    int east = 100;
    int west = 0;
    int south = 0;
    int north = 0;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
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
    int n = 13;
    int east = 23;
    int west = 62;
    int south = 0;
    int north = 15;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.047035025335926316;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 5;
    int east = 26;
    int west = 8;
    int south = 5;
    int north = 61;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6861699321999993;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 1;
    int east = 10;
    int west = 1;
    int south = 41;
    int north = 48;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 14;
    int east = 34;
    int west = 4;
    int south = 29;
    int north = 33;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04681301459156854;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 1;
    int east = 56;
    int west = 1;
    int south = 21;
    int north = 22;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
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
    int n = 10;
    int east = 16;
    int west = 19;
    int south = 51;
    int north = 14;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14021992625106874;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 1;
    int east = 83;
    int west = 14;
    int south = 2;
    int north = 1;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
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
    int n = 2;
    int east = 20;
    int west = 33;
    int south = 28;
    int north = 19;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7616000000000002;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 13;
    int east = 1;
    int west = 3;
    int south = 48;
    int north = 48;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 7.225725260960254E-4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 2;
    int east = 9;
    int west = 28;
    int south = 39;
    int north = 24;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7624000000000001;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 8;
    int east = 100;
    int west = 0;
    int south = 0;
    int north = 0;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
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
    int n = 14;
    int east = 37;
    int west = 41;
    int south = 10;
    int north = 12;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0037585703186666587;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 8;
    int east = 25;
    int west = 25;
    int south = 25;
    int north = 25;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09027099609375;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 13;
    int east = 17;
    int west = 21;
    int south = 29;
    int north = 33;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012345865520426241;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 14;
    int east = 1;
    int west = 33;
    int south = 27;
    int north = 39;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06020597941544461;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 13;
    int east = 34;
    int west = 27;
    int south = 21;
    int north = 18;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.013347502999658369;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 12;
    int east = 21;
    int west = 29;
    int south = 33;
    int north = 17;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.035003062789088504;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 14;
    int east = 24;
    int west = 26;
    int south = 25;
    int north = 25;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00894758399699008;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 14;
    int east = 15;
    int west = 29;
    int south = 11;
    int north = 45;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07310142245213239;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 14;
    int east = 1;
    int west = 50;
    int south = 49;
    int north = 0;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9042036545846861;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 14;
    int east = 83;
    int west = 15;
    int south = 1;
    int north = 1;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10348592504116648;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 14;
    int east = 35;
    int west = 15;
    int south = 37;
    int north = 13;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05066297972477722;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 13;
    int east = 21;
    int west = 14;
    int south = 30;
    int north = 35;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012741423828043255;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 14;
    int east = 24;
    int west = 26;
    int south = 26;
    int north = 24;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009050148087856178;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 14;
    int east = 36;
    int west = 14;
    int south = 39;
    int north = 11;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07132241978952752;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 14;
    int east = 24;
    int west = 23;
    int south = 22;
    int north = 31;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.010881498898316704;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 14;
    int east = 23;
    int west = 27;
    int south = 25;
    int north = 25;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009256729591737187;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 14;
    int east = 1;
    int west = 2;
    int south = 3;
    int north = 94;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6506631549535102;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 13;
    int east = 25;
    int west = 25;
    int south = 25;
    int north = 25;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.013135373592376709;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 13;
    int east = 33;
    int west = 42;
    int south = 16;
    int north = 9;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009587275568806024;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 14;
    int east = 10;
    int west = 23;
    int south = 27;
    int north = 40;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014926355429481371;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 13;
    int east = 12;
    int west = 1;
    int south = 50;
    int north = 37;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006518487218398356;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 14;
    int east = 11;
    int west = 63;
    int south = 1;
    int north = 25;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22529858193679217;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 14;
    int east = 15;
    int west = 20;
    int south = 35;
    int north = 30;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.008023689596037983;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 14;
    int east = 12;
    int west = 27;
    int south = 30;
    int north = 31;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014371198979525563;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 14;
    int east = 97;
    int west = 1;
    int south = 1;
    int north = 1;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8668361312058556;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 14;
    int east = 12;
    int west = 63;
    int south = 1;
    int north = 24;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.195292532586908;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 14;
    int east = 1;
    int west = 49;
    int south = 25;
    int north = 25;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18693152905571658;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 14;
    int east = 26;
    int west = 21;
    int south = 18;
    int north = 35;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.018033342774776768;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 14;
    int east = 1;
    int west = 1;
    int south = 1;
    int north = 97;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8668361312013636;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 14;
    int east = 44;
    int west = 7;
    int south = 23;
    int north = 26;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07951614141334706;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 13;
    int east = 8;
    int west = 18;
    int south = 62;
    int north = 12;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14687508919248357;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 14;
    int east = 10;
    int west = 20;
    int south = 30;
    int north = 40;
    CrazyBot* pObj = new CrazyBot();
    clock_t start = clock();
    double result = pObj->getProbability(n, east, west, south, north);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009919275575684559;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=13516&pm=10095
********************************************************************************
#include<ctime> 
#include<cstdlib> 
#include<iostream> 
#include<algorithm> 
#include<sstream> 
#include<string> 
#include<vector> 
#include<cmath> 
using namespace std; 
 
#define FOR(i,a,b) for(int i = (a); i < (b); ++i) 
#define REP(i,n) FOR(i,0,n) 
#define FORE(it,x) for(typeof(x.begin()) it=x.begin();it!=x.end();++it) 
#define pb push_back 
#define all(x) (x).begin(),(x).end() 
#define CLEAR(x,with) memset(x,with,sizeof(x)) 
#define sz size() 
typedef long long ll; 
 
struct CrazyBot  
{ 
  bool seen[100][100]; 
  double e, w, s, n; 
  double go(int y, int x, int steps) 
  { 
    if(seen[y][x]) return 0.0; 
    if(steps == 0) return 1.0; 
    seen[y][x] = true; 
    double ret = 0.0; 
    ret += s * go(y-1, x, steps-1); 
    ret += n * go(y+1, x, steps-1); 
    ret += e * go(y, x-1, steps-1); 
    ret += w * go(y, x+1, steps-1); 
    seen[y][x] = false; 
    return ret; 
  } 
  double getProbability(int n, int east, int west, int south, int north)  
  {     
    CLEAR(seen,0); 
    e = east / 100.0; 
    w = west / 100.0; 
    this->n = north / 100.0; 
    s = south / 100.0; 
    return go(50, 50, n); 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/