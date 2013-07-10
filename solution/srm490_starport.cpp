/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11227
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

class Starport {
public:
    double getExpectedTime(int N, int M);
};

double Starport::getExpectedTime(int N, int M) {
    double ret;
    return ret;
}


int test0() {
    int N = 4;
    int M = 2;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
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
    int N = 5;
    int M = 3;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
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
    int M = 1;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 12345;
    int M = 2345;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 6170.0;
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
    int M = 1000000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 1000000000;
    int M = 1;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 1000000000;
    int M = 1000000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 1000000000;
    int M = 999999999;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 999999999;
    int M = 1000000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999999E8;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 12;
    int M = 5;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 14;
    int M = 12;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 6;
    int M = 7;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 9;
    int M = 13;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 14;
    int M = 10;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
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
    int M = 14;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 11;
    int M = 1;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 9;
    int M = 10;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
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
    int M = 13;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 11;
    int M = 9;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 1;
    int M = 47;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 1;
    int M = 53;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 1;
    int M = 73;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 1;
    int M = 27;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 96;
    int M = 1;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 47.5;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 7046131;
    int M = 1;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3523065.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 8821408;
    int M = 1;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4410703.5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 1;
    int M = 3862670;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 1;
    int M = 7357215;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 1184139;
    int M = 1;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 592069.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 100000000;
    int M = 1000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.95E7;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 1;
    int M = 1;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 7;
    int M = 7;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 536870912;
    int M = 536870912;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 701408733;
    int M = 433494437;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.50704366E8;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 700776761;
    int M = 150563401;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5038838E8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 289801000;
    int M = 462555205;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.449004975E8;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 610548375;
    int M = 828728634;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.05274186E8;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 843858085;
    int M = 587573580;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.2192904E8;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 926721076;
    int M = 318260246;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.63360537E8;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 396643072;
    int M = 561141801;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.983215355E8;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 875126809;
    int M = 783703811;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.37563404E8;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 426219907;
    int M = 965110942;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.13109953E8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 349927638;
    int M = 580671298;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.74963818E8;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 886918310;
    int M = 641958573;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.434591545E8;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 253770905;
    int M = 631600262;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.26885452E8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 360396889;
    int M = 298547569;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.80198444E8;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 770993956;
    int M = 505252854;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.85496977E8;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 69946468;
    int M = 528890679;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.49732335E7;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 260001211;
    int M = 384396188;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.30000605E8;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 728057387;
    int M = 466304827;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.64028693E8;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 585210999;
    int M = 86736168;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.92605498E8;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 319828794;
    int M = 744254367;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.599143955E8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 688734193;
    int M = 436415944;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.44367096E8;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 146682056;
    int M = 684418574;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 7.3341027E7;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 650381000;
    int M = 45693000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2519E8;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 355279000;
    int M = 928984000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.77639E8;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 668342000;
    int M = 279221000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.341705E8;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 403710000;
    int M = 360056000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.01854E8;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 667949000;
    int M = 969780000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.33974E8;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 438041727;
    int M = 711722994;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.19018012E8;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 511292960;
    int M = 966272597;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.556455295E8;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 574755944;
    int M = 679156963;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.873770215E8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 508042250;
    int M = 985006952;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.54019224E8;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 271422879;
    int M = 834149295;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.35691479E8;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 194478570;
    int M = 491301045;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 9.72346275E7;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 873930195;
    int M = 953921205;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.36963545E8;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 195615;
    int M = 373469400;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 96255.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 450762165;
    int M = 177211665;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2537953E8;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 269063775;
    int M = 572493690;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.34530335E8;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 845619711;
    int M = 63577962;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.22809794E8;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 353871615;
    int M = 147598647;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.76935746E8;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 70467315;
    int M = 122463105;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.523335E7;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 868656627;
    int M = 827791230;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.34328252E8;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 899418435;
    int M = 996159288;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.49709156E8;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 665431613;
    int M = 17283938;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.28394822E8;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 303703482;
    int M = 751851303;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.499998905E8;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 30864175;
    int M = 713579726;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4814804E7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 641974840;
    int M = 990122734;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.19752853E8;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 724690829;
    int M = 240740565;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.61728131E8;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 545169920;
    int M = 894600640;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7186E8;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 142390130;
    int M = 144146365;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 7.11275175E7;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 542524311;
    int M = 745550757;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.70926019E8;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 654774512;
    int M = 520522184;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.26209604E8;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 816773670;
    int M = 142995060;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0833495E8;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 721123123;
    int M = 534535343;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.60561561E8;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 20996011;
    int M = 3;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0498005E7;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 3;
    int M = 5;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 997007078;
    int M = 997007079;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.985035385E8;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 1000000000;
    int M = 3;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 999999937;
    int M = 999999929;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999968E8;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 999999929;
    int M = 999999937;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999964E8;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 1000000000;
    int M = 999999929;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 100000009;
    int M = 100000007;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0000004E7;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 999999999;
    int M = 999999998;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999999E8;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 646119602;
    int M = 178503576;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.230598E8;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 999999998;
    int M = 999999999;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999985E8;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 999999993;
    int M = 999999997;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999996E8;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 999999997;
    int M = 1;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999998E8;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 9875475;
    int M = 9854753;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4937737.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 982451653;
    int M = 982451707;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.91225826E8;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 100000000;
    int M = 1210985;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999975E7;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 100000007;
    int M = 100000009;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0000003E7;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 100000007;
    int M = 1000000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0000003E7;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 6;
    int M = 8;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 856712345;
    int M = 6;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.28356172E8;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 99999989;
    int M = 13;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9999994E7;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 99999989;
    int M = 94418953;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9999994E7;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 1000000000;
    int M = 1000007;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 982451653;
    int M = 15485863;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.91225826E8;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 536870912;
    int M = 199999994;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.68435455E8;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 999617293;
    int M = 999617279;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99808646E8;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 37637323;
    int M = 524287;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8818661E7;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 999999997;
    int M = 1000000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999998E8;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 100000000;
    int M = 99999999;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999995E7;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 987989982;
    int M = 7345284;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.93994988E8;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 1000000000;
    int M = 999999997;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 866988874;
    int M = 100712442;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.33494436E8;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 999999893;
    int M = 999999937;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999946E8;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 999888733;
    int M = 1000000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99944366E8;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 999999999;
    int M = 889329422;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999999E8;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 100000000;
    int M = 1;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999995E7;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int N = 999999992;
    int M = 999999993;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999955E8;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int N = 999999998;
    int M = 999999996;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999998E8;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int N = 20996011;
    int M = 24036583;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0498005E7;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int N = 311;
    int M = 1000000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 155.0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int N = 100000001;
    int M = 3;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0E7;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int N = 1000000000;
    int M = 4456332;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999998E8;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int N = 999999997;
    int M = 999999991;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999998E8;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int N = 999999995;
    int M = 999999997;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999997E8;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int N = 999999937;
    int M = 800000011;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999968E8;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int N = 1;
    int M = 999999999;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int N = 433434;
    int M = 3232233;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 216715.5;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int N = 1000000000;
    int M = 999999991;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int N = 1000000000;
    int M = 2345;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999975E8;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int N = 100000000;
    int M = 999999999;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999995E7;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int N = 999000011;
    int M = 999000029;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99500005E8;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int N = 10000000;
    int M = 9999999;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4999999.5;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int N = 125467865;
    int M = 875556644;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 6.2733932E7;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int N = 65536;
    int M = 65536;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int N = 3;
    int M = 4;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int N = 100000000;
    int M = 9999999;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999995E7;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int N = 999999997;
    int M = 999999998;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999998E8;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int N = 99999999;
    int M = 123;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9999998E7;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int N = 999999999;
    int M = 777777778;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999999E8;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int N = 536870912;
    int M = 387420489;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.684354555E8;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int N = 1233432;
    int M = 3242345;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 616715.5;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int N = 3;
    int M = 7;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int N = 21474836;
    int M = 123123213;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.07374175E7;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int N = 900000009;
    int M = 12242;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.50000004E8;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int N = 1000000000;
    int M = 499999999;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int N = 999999999;
    int M = 999999997;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999999E8;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int N = 500000041;
    int M = 500000003;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5000002E8;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int N = 999999999;
    int M = 1;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999999E8;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int N = 999992999;
    int M = 992999999;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99996499E8;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int N = 999999996;
    int M = 999999997;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999975E8;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int N = 999999991;
    int M = 999999989;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999995E8;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int N = 999999999;
    int M = 99999999;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999995E8;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int N = 500000000;
    int M = 7;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.499999995E8;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int N = 1000000000;
    int M = 999999998;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999999E8;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int N = 2;
    int M = 4;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int N = 999999937;
    int M = 999999893;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999968E8;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int N = 999999151;
    int M = 1000000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999575E8;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int N = 10000007;
    int M = 100000007;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 5000003.0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int N = 19587619;
    int M = 19587671;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 9793809.0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int N = 999100211;
    int M = 999100213;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99550105E8;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int N = 200000000;
    int M = 300000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0E7;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int N = 10000000;
    int M = 10000001;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4999999.5;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int N = 12;
    int M = 8;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int N = 7;
    int M = 13;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int N = 999999997;
    int M = 887657890;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999998E8;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int N = 999999997;
    int M = 999999993;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999998E8;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int N = 999999999;
    int M = 979593913;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999999E8;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int N = 999999937;
    int M = 99999989;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999968E8;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int N = 1000000000;
    int M = 9;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int N = 500000000;
    int M = 1000000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int N = 987654321;
    int M = 1000000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9382716E8;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int N = 104729;
    int M = 104723;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 52364.0;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int N = 9999999;
    int M = 1000000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4999999.0;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int N = 99999999;
    int M = 99999998;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9999999E7;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int N = 99999999;
    int M = 1000000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9999999E7;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int N = 1000000000;
    int M = 999999971;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int N = 99999997;
    int M = 1000000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9999998E7;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int N = 999009019;
    int M = 999008537;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99504509E8;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int N = 536870911;
    int M = 536870913;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.68435455E8;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int N = 100613;
    int M = 100621;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 50306.0;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int N = 1000000000;
    int M = 99999999;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int N = 999999997;
    int M = 2;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999998E8;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int N = 1;
    int M = 999999997;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int N = 1000000000;
    int M = 999999937;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int N = 2345;
    int M = 1000000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1170.0;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int N = 99998888;
    int M = 7778888;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999944E7;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int N = 4;
    int M = 6;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int N = 100000000;
    int M = 99999990;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9999995E7;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int N = 999999999;
    int M = 2;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999999E8;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int N = 999999992;
    int M = 999999997;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999955E8;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int N = 99999999;
    int M = 99999991;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9999999E7;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int N = 4;
    int M = 4;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int N = 1000000000;
    int M = 2;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999999E8;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int N = 123456789;
    int M = 100000000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 6.1728394E7;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int N = 999999999;
    int M = 45235621;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999999E8;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int N = 1000000000;
    int M = 500000001;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    int N = 2;
    int M = 1000;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    int N = 12365656;
    int M = 234;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 6182827.0;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    int N = 1000000000;
    int M = 99;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    int N = 2;
    int M = 6;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    int N = 6;
    int M = 4;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    int N = 999008537;
    int M = 999009019;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99504268E8;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    int N = 199999997;
    int M = 199999991;
    Starport* pObj = new Starport();
    clock_t start = clock();
    double result = pObj->getExpectedTime(N, M);
    clock_t end = clock();
    delete pObj;
    double expected = 9.9999998E7;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22692969&rd=14243&pm=11227
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <deque> 
#include <queue> 
#include <set> 
#include <map> 
#include <algorithm> 
#include <functional> 
#include <utility> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
#define REP(i,n) for((i)=0;(i)<(int)(n);(i)++) 
 
class Starport{ 
  public: 
   
  int gcd(int x, int y){ 
    return x ? gcd(y%x,x) : y; 
  } 
 
  double getExpectedTime(int N, int M){ 
    int d = gcd(N,M); 
    return (N - d) / 2.0; 
  } 
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/