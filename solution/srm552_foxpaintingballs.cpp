/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12146
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

class FoxPaintingBalls {
public:
    long theMax(long R, long G, long B, int N);
};

long FoxPaintingBalls::theMax(long R, long G, long B, int N) {
    long ret;
    return ret;
}


int test0() {
    long R = 2;
    long G = 2;
    long B = 2;
    int N = 3;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long R = 1;
    long G = 2;
    long B = 3;
    int N = 3;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long R = 8;
    long G = 6;
    long B = 6;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long R = 7;
    long G = 6;
    long B = 7;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long R = 100;
    long G = 100;
    long B = 100;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long R = 1;
    long G = 0;
    long B = 0;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long R = 0;
    long G = 1;
    long B = 0;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long R = 0;
    long G = 0;
    long B = 0;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
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
    long R = 1;
    long G = 1;
    long B = 1;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long R = 1;
    long G = 1;
    long B = 1;
    int N = 2;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
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
    long R = 0;
    long G = 1;
    long B = 2;
    int N = 2;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
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
    long R = 1;
    long G = 0;
    long B = 1;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long R = 2;
    long G = 2;
    long B = 2;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long R = 2;
    long G = 2;
    long B = 2;
    int N = 2;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long R = 3;
    long G = 3;
    long B = 3;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long R = 3;
    long G = 3;
    long B = 3;
    int N = 2;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long R = 3;
    long G = 3;
    long B = 3;
    int N = 3;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long R = 4;
    long G = 3;
    long B = 3;
    int N = 2;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long R = 4;
    long G = 4;
    long B = 3;
    int N = 2;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long R = 1000000000000000000;
    long G = 0;
    long B = 0;
    int N = 2;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long R = 0;
    long G = 1000000000000000000;
    long B = 0;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000000000;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long R = 1000000000000000000;
    long G = 1000000000000000000;
    long B = 3;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long R = 5;
    long G = 5;
    long B = 5;
    int N = 5;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long R = 6;
    long G = 6;
    long B = 6;
    int N = 6;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long R = 7;
    long G = 7;
    long B = 7;
    int N = 6;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long R = 9;
    long G = 9;
    long B = 9;
    int N = 7;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long R = 10;
    long G = 9;
    long B = 9;
    int N = 7;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long R = 20;
    long G = 18;
    long B = 18;
    int N = 7;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long R = 19;
    long G = 19;
    long B = 18;
    int N = 7;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long R = 30;
    long G = 27;
    long B = 27;
    int N = 7;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long R = 28;
    long G = 29;
    long B = 27;
    int N = 7;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long R = 28;
    long G = 28;
    long B = 28;
    int N = 7;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long R = 1000000000000000000;
    long G = 1000000000000000000;
    long B = 1000000000000000000;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3000000000000000000;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long R = 1000000000000000000;
    long G = 1000000000000000000;
    long B = 1000000000000000000;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 300000000000000000;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long R = 949185738472857384;
    long G = 819402738175983874;
    long B = 905384829619493856;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 267397330626833511;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long R = 434532807763425372;
    long G = 912245252707409536;
    long B = 721365743254593093;
    int N = 31414801;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2641;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long R = 678784925379051339;
    long G = 10400178261775338;
    long B = 596597756820352946;
    int N = 219585852;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long R = 410337216597617089;
    long G = 386302845330165482;
    long B = 418056928079112265;
    int N = 706013973;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long R = 972188503299304012;
    long G = 409126227317276821;
    long B = 995258269701504023;
    int N = 49615093;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 997;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long R = 599621438406050095;
    long G = 698609304892017589;
    long B = 787796959604382653;
    int N = 690733962;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long R = 141432426644410478;
    long G = 523068564992268257;
    long B = 3968030436189050;
    int N = 515162458;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long R = 254628413341806822;
    long G = 566715091027788844;
    long B = 879582218386129339;
    int N = 675919335;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long R = 507439108017966407;
    long G = 215717761963116220;
    long B = 945999661289213983;
    int N = 366606129;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long R = 199071957438966662;
    long G = 39288696435238117;
    long B = 284416158721260667;
    int N = 18754549;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 670;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long R = 983736091909044788;
    long G = 702333263235925397;
    long B = 7736674995425306;
    int N = 132651710;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long R = 569236532697503079;
    long G = 359905201510005491;
    long B = 368202917314669897;
    int N = 729169499;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long R = 10467327035807453;
    long G = 880124072793239679;
    long B = 990334133647510853;
    int N = 522284156;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long R = 869468770771426074;
    long G = 654142812520614050;
    long B = 316191939090744226;
    int N = 271490006;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long R = 581857340557919457;
    long G = 126509045080352385;
    long B = 552851871392234657;
    int N = 326592752;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long R = 647366618592656593;
    long G = 256087226025013360;
    long B = 640836616989961093;
    int N = 543804583;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long R = 766158796809697016;
    long G = 366549826517977430;
    long B = 739434029035185553;
    int N = 502785481;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long R = 171859595078689544;
    long G = 94382729514372910;
    long B = 873631019476369348;
    int N = 559594700;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long R = 850357130417442178;
    long G = 54925571384856154;
    long B = 925783176400092567;
    int N = 180057968;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long R = 415939394452830858;
    long G = 825021880708597642;
    long B = 439171514174899099;
    int N = 472920443;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long R = 20761386065312160;
    long G = 350806678810220275;
    long B = 235110673638246110;
    int N = 534340919;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
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
    long R = 300247799199144451;
    long G = 298066591896670306;
    long B = 906025349749616686;
    int N = 17;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 5844442978366084;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long R = 721673323105071141;
    long G = 203949908126125056;
    long B = 377546143339611000;
    int N = 2;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 203949908126125056;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long R = 424089261602786391;
    long G = 228127905195220341;
    long B = 867852640395653859;
    int N = 20;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3258970074217433;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long R = 597666940660802864;
    long G = 353285014788433562;
    long B = 796366346613886003;
    int N = 20;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 5046928782691908;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long R = 875395507329539035;
    long G = 361768382604152564;
    long B = 732770400499242701;
    int N = 24;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3617683826041525;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long R = 469629003818947099;
    long G = 466014803897807155;
    long B = 8740647170953527;
    int N = 15;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 218516179273838;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long R = 714394451425081416;
    long G = 934383015997870113;
    long B = 437765390693388432;
    int N = 16;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 9728119793186409;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long R = 868134492197118126;
    long G = 838282259575541163;
    long B = 693354686219975066;
    int N = 17;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 13595189925881864;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long R = 741245874030733510;
    long G = 364572418091271939;
    long B = 120695531315088765;
    int N = 28;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 894040972704361;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long R = 978517292632498505;
    long G = 288013197731675107;
    long B = 867413781183444535;
    int N = 8;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 24001099810972925;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long R = 21149663609246215;
    long G = 768508198421360005;
    long B = 417798430934155076;
    int N = 7;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2349962623249579;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long R = 394281996341375734;
    long G = 911909099833936580;
    long B = 87140857515851980;
    int N = 13;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2904695250528399;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long R = 960944295171171344;
    long G = 687623549733004805;
    long B = 513199817045212536;
    int N = 24;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 5131998170452125;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long R = 595165730234648309;
    long G = 57201505479204008;
    long B = 112537623951448996;
    int N = 20;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 817164363988628;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long R = 525482445223521345;
    long G = 623000890791532501;
    long B = 601360662936882125;
    int N = 11;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 23885565691978242;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long R = 414003689480975178;
    long G = 444893071864914782;
    long B = 911216048589144303;
    int N = 18;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 7263222622473248;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long R = 388214781534238435;
    long G = 296926208814985411;
    long B = 759202342234524695;
    int N = 17;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 5822082525784027;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long R = 745787960733907063;
    long G = 751612625711023250;
    long B = 873841571278977575;
    int N = 20;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 10654113724770100;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long R = 242760377566309954;
    long G = 528576742527990434;
    long B = 170285625210596976;
    int N = 18;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2987467108957841;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long R = 573220895197092962;
    long G = 342556405012238046;
    long B = 57017734782977031;
    int N = 14;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1629078136656486;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long R = 866371492869738380;
    long G = 866371492869738437;
    long B = 866371492869738418;
    int N = 478076429;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long R = 90640277124104481;
    long G = 90640277124104500;
    long B = 90640277124104553;
    int N = 194606200;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long R = 921015884493001641;
    long G = 921015884493001653;
    long B = 921015884493001661;
    int N = 606524717;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long R = 426095736033883130;
    long G = 426095736033883165;
    long B = 426095736033883077;
    int N = 390495974;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long R = 841146992876139473;
    long G = 841146992876139407;
    long B = 841146992876139291;
    int N = 912691565;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long R = 568627451507658226;
    long G = 568627451507658085;
    long B = 568627451507658064;
    int N = 862083986;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long R = 383098163497752052;
    long G = 383098163497752107;
    long B = 383098163497752123;
    int N = 649123799;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long R = 469397376150686270;
    long G = 469397376150686319;
    long B = 469397376150686191;
    int N = 977494083;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long R = 338594055324770179;
    long G = 338594055324770216;
    long B = 338594055324770203;
    int N = 464735843;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long R = 770226248969126024;
    long G = 770226248969126067;
    long B = 770226248969125965;
    int N = 127140587;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 285;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long R = 48932907154432024;
    long G = 48932907154432174;
    long B = 48932907154432072;
    int N = 523579054;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
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
    long R = 953756049150593126;
    long G = 953756049150593155;
    long B = 953756049150593254;
    int N = 945836614;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long R = 921567783946494978;
    long G = 921567783946495044;
    long B = 921567783946494938;
    int N = 67103100;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1227;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long R = 938603508209546223;
    long G = 938603508209546327;
    long B = 938603508209546190;
    int N = 246728026;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 92;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long R = 180563567070190582;
    long G = 180563567070190700;
    long B = 180563567070190663;
    int N = 78419658;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 176;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long R = 765178045830717532;
    long G = 765178045830717546;
    long B = 765178045830717479;
    int N = 704612361;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long R = 590733514181997590;
    long G = 590733514181997558;
    long B = 590733514181997593;
    int N = 695340729;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long R = 540849015002207908;
    long G = 540849015002207889;
    long B = 540849015002207770;
    int N = 733793060;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long R = 448232396775595482;
    long G = 448232396775595511;
    long B = 448232396775595525;
    int N = 908506983;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long R = 750925177042368293;
    long G = 750925177042368234;
    long B = 750925177042368167;
    int N = 403311295;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 27;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long R = 440104302960949798;
    long G = 440104302960949652;
    long B = 440104302960949818;
    int N = 935144910;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long R = 128219221160872551;
    long G = 128219221160872532;
    long B = 128219221160872513;
    int N = 249402199;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long R = 926803537328012521;
    long G = 926803537328012590;
    long B = 926803537328012509;
    int N = 886385758;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long R = 638355527147559025;
    long G = 638355527147559108;
    long B = 638355527147558983;
    int N = 402165992;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 23;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long R = 671505422387382102;
    long G = 671505422387381991;
    long B = 671505422387382010;
    int N = 414785576;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 23;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long R = 19330428391852493;
    long G = 48815737582834113;
    long B = 11451481019198930;
    int N = 3456;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 5750952686;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long R = 1;
    long G = 1;
    long B = 1;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long R = 19330428391852493;
    long G = 48815737582834113;
    long B = 11451481019198930;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long R = 1000000000000000000;
    long G = 500000000000000000;
    long B = 250000000000000000;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 83333333333333333;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long R = 1000000000000000000;
    long G = 1000000000;
    long B = 1000000000000000000;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long R = 19330428391852493;
    long G = 48815737582834113;
    long B = 11451481019198930;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3817160339732976;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long R = 19330428391852493;
    long G = 48815737582834113;
    long B = 11451481019198930;
    int N = 345600;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 575260;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long R = 458775;
    long G = 4874487;
    long B = 4588754;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
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
    long R = 543556563565654567;
    long G = 23423454565656;
    long B = 23463453472345;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long R = 19330428391852493;
    long G = 48815737582834113;
    long B = 11451481019198930;
    int N = 3457;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 5747627475;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long R = 1000000000000000;
    long G = 1000000000000000;
    long B = 1000000000000000;
    int N = 2342352;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1093;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long R = 1000000000000000000;
    long G = 1000000000000000000;
    long B = 1;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000000000001;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long R = 100000;
    long G = 404040;
    long B = 202020;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long R = 1000000000000;
    long G = 1000000000000;
    long B = 1000000000000;
    int N = 5000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long R = 1000000000000000000;
    long G = 1000000000000000000;
    long B = 1000000000000000000;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long R = 500;
    long G = 500;
    long B = 500;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1500;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long R = 1000000000000000000;
    long G = 1000000000000000000;
    long B = 1000000000000000000;
    int N = 1000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 5999994;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long R = 1000000000000000;
    long G = 1000000000000000;
    long B = 1000000000000000;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3000000000000000;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long R = 100;
    long G = 0;
    long B = 0;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long R = 999999999999999999;
    long G = 999999999999999999;
    long B = 999999999999999997;
    int N = 999878477;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    long R = 3265873456834;
    long G = 6354857389734;
    long B = 345345847583;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    long R = 1247612373918741;
    long G = 273593827409184;
    long B = 2385789472398;
    int N = 20394;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 34415;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    long R = 1000000000000000000;
    long G = 10000000000000000;
    long B = 100000000000000000;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    long R = 1000000000000000000;
    long G = 90000000000000000;
    long B = 800000000000000;
    int N = 1000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 4799;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    long R = 10;
    long G = 0;
    long B = 0;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    long R = 4324324234234234;
    long G = 4324234324234324;
    long B = 42324324424324344;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    long R = 19330428391852493;
    long G = 48815737582834113;
    long B = 11451481019198930;
    int N = 100000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    long R = 1000000000000000000;
    long G = 1000000000000000000;
    long B = 1000000000000000000;
    int N = 100000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 599;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    long R = 1000000000;
    long G = 1000000000;
    long B = 1000000000;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    long R = 1000000000000000000;
    long G = 1000000000000000000;
    long B = 1000000000000000000;
    int N = 100000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 599994000;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    long R = 9;
    long G = 9;
    long B = 12;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    long R = 100000000;
    long G = 100000000;
    long B = 100000000;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    long R = 2;
    long G = 4;
    long B = 4;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
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
    long R = 10;
    long G = 10;
    long B = 10;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    long R = 1000000000000000;
    long G = 1000000000000023;
    long B = 1000000000000015;
    int N = 10000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 59;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    long R = 4564121;
    long G = 1111111;
    long B = 47711;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 15903;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    long R = 100;
    long G = 100;
    long B = 1;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    long R = 12;
    long G = 12;
    long B = 12;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    long R = 50000000500000003;
    long G = 50000000500000003;
    long B = 50000000500000003;
    int N = 100000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    long R = 100;
    long G = 10000000000;
    long B = 10000000000;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 33;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    long R = 100000000000000;
    long G = 100000000000000;
    long B = 100000000000000;
    int N = 1000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 599;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    long R = 100;
    long G = 100;
    long B = 1;
    int N = 7;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    long R = 100000000000;
    long G = 100000000000;
    long B = 200000000000;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 33333333333;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    long R = 400;
    long G = 30;
    long B = 30;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    long R = 1000000000000000000;
    long G = 1;
    long B = 1;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000000002;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    long R = 1000;
    long G = 1000;
    long B = 1000;
    int N = 999999999;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    long R = 1000000000000000;
    long G = 1000000000000000;
    long B = 1000000000000000;
    int N = 1000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 5999;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    long R = 0;
    long G = 100;
    long B = 200;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 300;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    long R = 19330428391852493;
    long G = 48815737582834113;
    long B = 11451481019198999;
    int N = 345634;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 575146;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    long R = 30;
    long G = 30;
    long B = 40;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    long R = 100000000000000;
    long G = 100000000000000;
    long B = 100000000000000;
    int N = 7;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 10714285714285;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    long R = 7;
    long G = 6;
    long B = 6;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    long R = 100000000000000;
    long G = 100000000000000;
    long B = 100000000000000;
    int N = 100000002;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    long R = 1000000000000000;
    long G = 1000000000000000;
    long B = 1000000000000000;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 300000000000000;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    long R = 900000000000000041;
    long G = 800000000000018467;
    long B = 700000000000006334;
    int N = 650019169;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    long R = 19330428391852493;
    long G = 48815737585554113;
    long B = 11451481019198999;
    int N = 345634232;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
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
    long R = 1000000000000000;
    long G = 1000000000000000;
    long B = 999999999999999;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 299999999999999;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    long R = 1;
    long G = 2;
    long B = 1000000000;
    int N = 2;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    long R = 100000000000006700;
    long G = 111000000000000000;
    long B = 100000000990000000;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    long R = 1000000000000000;
    long G = 1000000000000000;
    long B = 1000000000000000;
    int N = 100000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 599994;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    long R = 100;
    long G = 102;
    long B = 140;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 33;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    long R = 100;
    long G = 100;
    long B = 1432;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 33;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    long R = 19330428391852493;
    long G = 48815737585554113;
    long B = 11451481019198999;
    int N = 345634231;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    long R = 350000000000000000;
    long G = 320000000000000000;
    long B = 330000000000000000;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000000000000;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    long R = 1000000000000000000;
    long G = 1000000000000000000;
    long B = 1000000000000000000;
    int N = 999999998;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    long R = 0;
    long G = 1;
    long B = 1;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    long R = 19000;
    long G = 18000;
    long B = 18000;
    int N = 10;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1000;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    long R = 100;
    long G = 100;
    long B = 0;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    long R = 8;
    long G = 1;
    long B = 11;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    long R = 999999999;
    long G = 888888888;
    long B = 777777777;
    int N = 999999999;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    long R = 100000000000000000;
    long G = 100000000000000000;
    long B = 100000000000000000;
    int N = 1000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 599999;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    long R = 100000000000000000;
    long G = 100000000000000000;
    long B = 100000000000000000;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 30000000000000000;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    long R = 1000000000000000000;
    long G = 999999999999999999;
    long B = 999999999999999998;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    long R = 3;
    long G = 10;
    long B = 10;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    long R = 3;
    long G = 3;
    long B = 4;
    int N = 7;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    long R = 1000000000000000000;
    long G = 1000000000000000000;
    long B = 1000000000000000000;
    int N = 10000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 59999;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    long R = 1000000000000000000;
    long G = 1000000000000000000;
    long B = 1000000000000000000;
    int N = 900000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    long R = 2345;
    long G = 334563635;
    long B = 434534;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    long R = 19330428391852493;
    long G = 48815737582834113;
    long B = 11451481019198930;
    int N = 345666;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 575040;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    long R = 100;
    long G = 1;
    long B = 1;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    long R = 9999999999999999;
    long G = 10000000000000000;
    long B = 10000000000000000;
    int N = 100;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 5940594059405;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    long R = 1000000000000000000;
    long G = 500000000000000000;
    long B = 700000000000000002;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2200000000000000002;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    long R = 0;
    long G = 100;
    long B = 100;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    long R = 1000;
    long G = 0;
    long B = 0;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1000;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    long R = 0;
    long G = 100000000000000000;
    long B = 100000000000000000;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 200000000000000000;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    long R = 999999999999999999;
    long G = 999999999999999999;
    long B = 999999999999999999;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 299999999999999999;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    long R = 123;
    long G = 456;
    long B = 789;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 41;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    long R = 2;
    long G = 3;
    long B = 4;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    long R = 11;
    long G = 10;
    long B = 9;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    long R = 856674609788912520;
    long G = 791809296233191086;
    long B = 711066335916901716;
    int N = 11380;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 32941144942;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    long R = 1000000000000000000;
    long G = 1000000000000000000;
    long B = 1000000000000000000;
    int N = 7;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 107142857142857142;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    long R = 1000000000000000;
    long G = 1000000000000000;
    long B = 1000000000000000;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    long R = 1000000000000000000;
    long G = 1000000000000000000;
    long B = 1000000000000000000;
    int N = 999999;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 6000006;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    long R = 32;
    long G = 32;
    long B = 36;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    long R = 16683300000000000;
    long G = 166833000000;
    long B = 166833;
    int N = 1000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    long R = 1000000000000000;
    long G = 1000000000000000;
    long B = 1000000000000000;
    int N = 7;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 107142857142857;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    long R = 400;
    long G = 300;
    long B = 300;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    long R = 324234;
    long G = 2333;
    long B = 5666232552;
    int N = 12534523;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    long R = 10000000000000;
    long G = 1000000000000;
    long B = 10000000000000;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 21000000000000;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    long R = 0;
    long G = 0;
    long B = 2;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    long R = 29;
    long G = 28;
    long B = 27;
    int N = 7;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    long R = 100;
    long G = 100000000;
    long B = 100000000;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 33;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    long R = 567;
    long G = 1246;
    long B = 2871;
    int N = 64;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    long R = 100000000000000000;
    long G = 100000000000000000;
    long B = 100000000000000000;
    int N = 6395098;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 14670;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    long R = 2;
    long G = 2;
    long B = 0;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    long R = 5;
    long G = 100;
    long B = 10000000000000;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    long R = 1;
    long G = 1;
    long B = 1001;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    long R = 1000000000000000000;
    long G = 999999999999999999;
    long B = 999999999999999998;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 299999999999999999;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    long R = 100000000000000000;
    long G = 100000000000000000;
    long B = 100000000000000000;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 300000000000000000;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    long R = 100000000000000;
    long G = 100000000000000;
    long B = 100000000000000;
    int N = 1;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 300000000000000;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    long R = 1000000000231213;
    long G = 10000000002311345;
    long B = 10000000002312139;
    int N = 999999997;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    long R = 22;
    long G = 22;
    long B = 19;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    long R = 1000000000000000000;
    long G = 1000000000000000000;
    long B = 1000000000000000000;
    int N = 1000001;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 5999982;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    long R = 93;
    long G = 1;
    long B = 1;
    int N = 13;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    long R = 822981258385599122;
    long G = 28316248989464292;
    long B = 779547115376367011;
    int N = 57307;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 51732569;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    long R = 9;
    long G = 9;
    long B = 11;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    long R = 10001;
    long G = 10010;
    long B = 10005;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3001;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    long R = 1000000000000000000;
    long G = 1000000000000000000;
    long B = 999999999999999999;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 299999999999999999;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    long R = 100000000000;
    long G = 100000000000;
    long B = 100000000000;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    long R = 66630362332990648;
    long G = 79343508172661713;
    long B = 73842408503145400;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 21981627900879776;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    long R = 1000000000;
    long G = 1000000000;
    long B = 10000000;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 3333333;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    long R = 18;
    long G = 19;
    long B = 19;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    long R = 33;
    long G = 33;
    long B = 33;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    long R = 1;
    long G = 100;
    long B = 199;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    long R = 1000000000000;
    long G = 1000000000000;
    long B = 1000000000000;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 300000000000;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    long R = 3;
    long G = 3;
    long B = 3;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    long R = 100000000000000000;
    long G = 1000000;
    long B = 1000000;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 333333;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    long R = 6;
    long G = 6;
    long B = 6;
    int N = 4;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    long R = 2;
    long G = 2;
    long B = 2;
    int N = 1000000000;
    FoxPaintingBalls* pObj = new FoxPaintingBalls();
    clock_t start = clock();
    long result = pObj->theMax(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22697421&rd=15174&pm=12146
********************************************************************************
#include<vector> 
#include<cmath> 
#include<map> 
#include<cstdlib> 
#include<iostream> 
#include<sstream> 
#include<string> 
#include<algorithm> 
#include<cstring> 
#include<cstdio> 
#include<set> 
#include<stack> 
#include<bitset> 
#include<functional> 
#include<cstdlib> 
#include<ctime> 
#include<queue> 
#include<deque> 
#include<complex> 
using namespace std; 
#define pb push_back 
#define pf push_front 
typedef long long lint; 
typedef complex<double> P; 
#define mp make_pair 
#define fi first 
#define se second 
typedef pair<int,int> pint; 
#define All(s) s.begin(),s.end() 
#define rAll(s) s.rbegin(),s.rend() 
#define REP(i,a,b) for(i=a;i<b;i++) 
#define rep(i,n) REP(i,0,n) 
class FoxPaintingBalls{ 
  public: 
  long long FoxPaintingBalls::theMax(long long r,long long g,long long b,int N){ 
    lint n=N;n=n*(n+1)/2; 
    if(n==1) return r+g+b; 
    if(n%3==0) return min(r/(n/3),min(g/(n/3),b/(n/3))); 
    return min((r+g+b)/n,min(r/(n/3),min(g/(n/3),b/(n/3)))); 
  } 
};

********************************************************************************
*******************************************************************************/