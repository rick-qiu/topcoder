/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6577
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

class PyramidOfCubes {
public:
    double surface(int K);
};

double PyramidOfCubes::surface(int K) {
    double ret;
    return ret;
}


int test0() {
    int K = 14;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 42.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int K = 21;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 58.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int K = 1;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int K = 2;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int K = 451234;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 47498.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int K = 3;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 14.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int K = 4;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 16.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int K = 5;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int K = 6;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 22.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int K = 7;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 26.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int K = 8;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 28.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int K = 9;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 30.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int K = 10;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 34.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int K = 11;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 36.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int K = 12;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 38.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int K = 13;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 38.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int K = 14;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 42.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int K = 15;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 46.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int K = 16;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 48.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int K = 17;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 52.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int K = 18;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 54.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int K = 19;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 56.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int K = 20;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 58.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int K = 22;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 58.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int K = 23;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 60.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int K = 24;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 60.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int K = 25;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 60.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int K = 26;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 64.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int K = 27;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 66.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int K = 28;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 68.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int K = 29;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 68.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int K = 30;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 72.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int K = 31;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 82.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int K = 32;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 82.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int K = 33;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 82.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int K = 54406261;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 1193556.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int K = 54406260;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 1193552.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int K = 54406259;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 1193552.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int K = 54406258;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 1193550.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int K = 54406262;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 1179506.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int K = 998441521;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 8308806.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int K = 998441520;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 8308802.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int K = 998441519;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 8308802.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int K = 998441518;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 8308800.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int K = 998441500;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 8308780.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int K = 998441522;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 8252782.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int K = 998441523;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 8252782.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int K = 1000000000;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 8293536.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int K = 123456789;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 2050182.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int K = 987654321;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 8227570.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int K = 12433215;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 441910.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int K = 53253322;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 1163598.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int K = 2143565;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 135884.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int K = 547654743;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 5538756.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int K = 135784784;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 2188118.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int K = 934673245;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 7921618.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int K = 954332132;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 8024148.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int K = 123453163;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 2050094.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int K = 123;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 186.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int K = 5433;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 2466.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int K = 4;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 16.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int K = 3;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 14.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int K = 10;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 34.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int K = 6;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 22.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int K = 5;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int K = 26;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 64.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int K = 15;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 46.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int K = 9;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 30.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int K = 998441521;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 8308806.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int K = 983475384;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 8202462.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int K = 17;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 52.0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int K = 1000000000;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 8293536.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int K = 25;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 60.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int K = 500000000;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 5204004.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int K = 913687900;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 7778014.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int K = 18;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 54.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int K = 7;
    PyramidOfCubes* pObj = new PyramidOfCubes();
    clock_t start = clock();
    double result = pObj->surface(K);
    clock_t end = clock();
    delete pObj;
    double expected = 26.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14864900&rd=9990&pm=6577
********************************************************************************
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <set>
#include <queue>
#include <ext/hash_map>
using __gnu_cxx::hash_map;
#include <list>
#include <stack>
 
using namespace std;
 
 
#ifndef _MSC_VER
#define __int64 long long
#endif
#define min(a,b) ((a)<(b)?(a):(b))
#define db double
#define lint __int64
#define fo(i,a,b) for(i=(a);i<=(b);i++)
#define rfo(i,a,b) for(i=(a);i>=(b);i--)
#define wh while
#define br break
#define re return
#define ed end()
#define red rend()
#define se second
#define ss substr
 
 
 
class PyramidOfCubes
{
  public:
 
  db go(int n,int k)
  {
    if(k<=n) 
      re 2.*k+2.;
    db res=2.*n;
    int p=(k+n-1)/n;
    res+=2.*p;
    re res;
  }
 
 
  double surface(int K)
  {
    lint n,t,k;
    double ret;
    int i;
 
    k=K;  
    t=n=0;
    wh(1)
    {
      if(t>=k) br;
      n++;
      t+=n*n;
    }
 
    ret=2.*min(1.*n*n,1.*K);
    rfo(i,n,1)
      if(K>=i*i)
      {
        K-=i*i;
        ret+=4.*i;
      }
      else br;
 
    if(K) ret+=go(i,K);
 
    return ret;
  }
 
};
 
 
//Powered By Sabur's AI

********************************************************************************
*******************************************************************************/