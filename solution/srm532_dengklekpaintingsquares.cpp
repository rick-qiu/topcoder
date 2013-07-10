/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11765
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

class DengklekPaintingSquares {
public:
    int numSolutions(int N, int M);
};

int DengklekPaintingSquares::numSolutions(int N, int M) {
    int ret;
    return ret;
}


int test0() {
    int N = 1;
    int M = 1;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
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
    int M = 2;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 1;
    int M = 3;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 47;
    int M = 7;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 944149920;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 1;
    int M = 2;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 1;
    int M = 4;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 1;
    int M = 5;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 1;
    int M = 6;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 1;
    int M = 7;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 1;
    int M = 8;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 3;
    int M = 5;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1067;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 4;
    int M = 2;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 6;
    int M = 7;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 142860055;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 7;
    int M = 6;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 142860055;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 10;
    int M = 6;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 852065842;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 10;
    int M = 7;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 133047026;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 12;
    int M = 4;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 217922751;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 12;
    int M = 6;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 551648439;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 12;
    int M = 7;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 509252402;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 15;
    int M = 4;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 867152507;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 16;
    int M = 8;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 559575281;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 17;
    int M = 4;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 504929571;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 20;
    int M = 3;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 133418092;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 21;
    int M = 6;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 154558076;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 23;
    int M = 8;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 238358301;
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
    int M = 1;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 196418;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 25;
    int M = 6;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 417472647;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 31;
    int M = 1;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 3524578;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 32;
    int M = 8;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 452099666;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 33;
    int M = 2;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 434804009;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 33;
    int M = 4;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 360549211;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 34;
    int M = 7;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 892665396;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 36;
    int M = 5;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 117112746;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 36;
    int M = 7;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 665050769;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 36;
    int M = 8;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 778391605;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 37;
    int M = 3;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 22962921;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 38;
    int M = 1;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 102334155;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 40;
    int M = 2;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 696374975;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 41;
    int M = 5;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 278606644;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 44;
    int M = 2;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 746383206;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 45;
    int M = 2;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 772345493;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 45;
    int M = 3;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 814257636;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 47;
    int M = 2;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 759037600;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 47;
    int M = 6;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 388356121;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 48;
    int M = 3;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 100797928;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 49;
    int M = 3;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 796812565;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 49;
    int M = 8;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 490790721;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 51;
    int M = 3;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 806147414;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 56;
    int M = 5;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 359935014;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 57;
    int M = 2;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 422144489;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 57;
    int M = 7;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 305868052;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 58;
    int M = 3;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 919543957;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 64;
    int M = 3;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 726998433;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 71;
    int M = 1;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 527403788;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 75;
    int M = 3;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 45508041;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 75;
    int M = 5;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 697209289;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 77;
    int M = 2;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 985695704;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 77;
    int M = 3;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 458872362;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 77;
    int M = 4;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 689857849;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 81;
    int M = 1;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 400391533;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 81;
    int M = 8;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 63610655;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 86;
    int M = 1;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 665487541;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 86;
    int M = 3;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 126082288;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 87;
    int M = 7;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 589627493;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 88;
    int M = 8;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 330398667;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 89;
    int M = 6;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 643421135;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 90;
    int M = 2;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 497304262;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 91;
    int M = 4;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 726399354;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 91;
    int M = 7;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 352147883;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 93;
    int M = 5;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 368736803;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 93;
    int M = 7;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 897180692;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 95;
    int M = 4;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 662160581;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 98;
    int M = 2;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 166674494;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 98;
    int M = 8;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 536977998;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 99;
    int M = 7;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 551738264;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 100;
    int M = 1;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 470199269;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 100;
    int M = 2;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 398139603;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 100;
    int M = 3;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 76803773;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 100;
    int M = 4;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 393669896;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 100;
    int M = 5;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 804089593;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 100;
    int M = 6;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 545306804;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 100;
    int M = 7;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 124439073;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 100;
    int M = 8;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 636302453;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 99;
    int M = 8;
    DengklekPaintingSquares* pObj = new DengklekPaintingSquares();
    clock_t start = clock();
    int result = pObj->numSolutions(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 857844889;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23001199&rd=14725&pm=11765
********************************************************************************
#include <cstdio> 
#include <cmath> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <algorithm> 
using namespace std; 
typedef long long ll; 
typedef pair<int, int> pii; 
const int INF = 1e9; 
const double EPS = 1e-9; 
int dp[101][1<<16]; 
const int MOD = 1e9 + 7; 
class DengklekPaintingSquares 
{ 
public: 
  int numSolutions(int N, int M) 
  { 
    memset(dp, 0, sizeof(dp)); 
    dp[0][0] = 1; 
    int x[8]; 
    int y[8]; 
    for (int i = 0; i < N; ++i) 
    { 
      for (int j = 0; j < (1<<(2*M)); ++j) 
      { 
        if (dp[i][j] == 0) continue; 
        int tmp = j; 
        int num = M; 
        for (int k = 0; k < M; ++k) 
        { 
          x[k] = tmp & 3; 
          tmp /= 4; 
          if (x[k] != 0) 
            --num; 
        } 
        for (int mask = 0; mask < (1 << num); ++mask) 
        { 
          int cur = 0; 
          for (int k = 0; k < M; ++k) 
          { 
            if (x[k] != 0) 
            { 
              if (x[k] == 2) 
                y[k] = 1; 
              else 
                y[k] = 0; 
            } 
            else 
            { 
              if (mask & (1<<cur)) 
                y[k] = 1; 
              else 
                y[k] = 0; 
              ++cur; 
            } 
          } 
          for (int k = 0; k < M; ++k) 
          { 
            if (y[k] == 1) 
            { 
              int cnt = 0; 
              if (k > 0 && y[k-1] != 0) ++cnt; 
              if (k < M-1 && y[k+1] != 0) ++cnt; 
              if (x[k] != 0) ++cnt; 
              if (cnt & 1) ++y[k]; 
            } 
          } 
          int nxtMask = 0; 
          for (int k = M - 1; k >= 0; --k) 
          { 
            nxtMask <<= 2; 
            nxtMask += y[k]; 
          } 
          dp[i+1][nxtMask] = (dp[i][j] + dp[i+1][nxtMask]) % MOD; 
        } 
      } 
    } 
    int ans = 0; 
    for (int j = 0; j < (1<<(2*M)); ++j) 
    { 
      if (dp[N][j] == 0) continue; 
      int tmp = j; 
      bool f = true; 
      for (int k = 0; k < M; ++k) 
      { 
        x[k] = tmp & 3; 
        tmp /= 4; 
        if (x[k] == 2) 
          f = false; 
      } 
      if (f) 
      { 
        ans = (ans + dp[N][j]) % MOD; 
      } 
    } 
    return ans; 
  } 
}; 
 
#ifdef _DEBUG 
int main() 
{ 
  freopen("test.txt", "r", stdin); 
  DengklekPaintingSquares X; 
  int n, m; 
  scanf("%d%d", &n, &m); 
  printf("%d", X.numSolutions(n, m)); 
  return 0; 
} 
#endif

********************************************************************************
*******************************************************************************/