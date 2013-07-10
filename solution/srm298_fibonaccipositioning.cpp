/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6160
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

class FibonacciPositioning {
public:
    double getFPosition(int n);
};

double FibonacciPositioning::getFPosition(int n) {
    double ret;
    return ret;
}


int test0() {
    int n = 1;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
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
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 3;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 5;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 4;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 6;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 5.333333333333333;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 21;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 22;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 8.076923076923077;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 23;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 8.153846153846153;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 100000000;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 39.94028487238683;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 99999999;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 39.94028484680364;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 99999998;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 39.94028482122046;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 90000009;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 39.68445321652186;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 10;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 100;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 11.2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 1000;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 16.021311475409835;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 10000;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 20.77373834011002;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 100000;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 25.538625776397517;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 1000000;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 30.32662490835795;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 10000000;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 35.13546384489119;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 34;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 55;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 144;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 233;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 377;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 14.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 610;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 15.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 987;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 16.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 63245986;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 39.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 39088169;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 38.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 24157817;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 37.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 14930352;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 36.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 9227465;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 35.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 5702887;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 34.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 3524578;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 33.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 3524579;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 33.00000045907169;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 3524577;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 32.9999992572064;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 63245987;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 39.00000002558319;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 63245985;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 38.99999995860553;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 31622993;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 37.5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 31622994;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 37.500000066977655;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 31622992;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 37.499999933022345;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 9;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 99;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 11.181818181818182;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 999;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 16.01967213114754;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 9999;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 20.773499162879695;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 99999;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 25.53860420979986;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 9999999;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 35.13546366954141;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 999999;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 30.32662296369905;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 11;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.6;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 111;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 11.4;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 1111;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 16.20327868852459;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 11111;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 21.024390243902438;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 111111;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 25.778252242926158;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 1111111;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 30.542697903074313;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 7;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 5.666666666666667;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 8;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 9;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 10;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.4;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 12;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.8;
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
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 14;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.125;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 15;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.25;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 16;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.375;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 17;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 18;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.625;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 19;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.75;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 20;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.875;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 53532;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 24.249991276127997;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 60696;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 24.499982552255993;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 67860;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 24.74997382838399;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 86617;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 25.25;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 98209;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 25.5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 109801;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 25.75;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 140149;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 26.249996667777406;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 158905;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 26.499993335554816;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 177661;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 26.749990003332222;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 226766;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 27.24999794057318;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 257114;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 27.499995881146358;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 287462;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 27.74999382171954;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 366915;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 28.249997454408454;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 416020;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 28.5;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 465124;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 28.749997454408454;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 593681;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 29.249997640106855;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 673134;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 29.499998426737903;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 752587;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 29.74999921336895;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 960597;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 30.249999513835277;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 1089154;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 30.49999902767055;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 1217711;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 30.74999854150583;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 1554279;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 31.25;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 1762289;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 31.5;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 1970299;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 31.75;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 2514876;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 32.2499998143016;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 2851443;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 32.4999996286032;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 3188010;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 32.7499994429048;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 4069155;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 33.24999988523208;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 4613732;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 33.49999977046415;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 5158309;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 33.74999965569623;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 6584031;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 34.24999985813905;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 7465176;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 34.5;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 8346320;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 34.74999985813905;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 10653186;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 35.24999986848766;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 12078908;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 35.49999991232511;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 13504630;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 35.749999956162554;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 17237218;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 36.24999997290697;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 19544084;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 36.49999994581394;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 21850950;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 36.7499999187209;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 27890405;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 37.25;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 31622993;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 37.5;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 35355581;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 37.75;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 45127623;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 38.249999989651386;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 51167077;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 38.499999979302764;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 57206531;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 38.74999996895415;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 100000000;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 39.94028487238683;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int n = 100;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 11.2;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 1;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int n = 2;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int n = 10000000;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 35.13546384489119;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int n = 21345341;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 36.695205996446475;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int n = 13;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int n = 2584;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 18.0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int n = 3;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int n = 4;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int n = 21;
    FibonacciPositioning* pObj = new FibonacciPositioning();
    clock_t start = clock();
    double result = pObj->getFPosition(n);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=9819&pm=6160
********************************************************************************
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
 
class FibonacciPositioning {
public:
  double getFPosition(int);
};
 
double FibonacciPositioning::getFPosition(int n) 
{
  int f0=0,f1=1,f2;
  for (int i=2;;i++)
  {
    f2=f0+f1;
    if (f2==n)
      return double(i);
    if (f2>n)
      return i-1.0+double(n-f1)/double(f2-f1);
    f0=f1;
    f1=f2;
  }
  return 0;
}

********************************************************************************
*******************************************************************************/