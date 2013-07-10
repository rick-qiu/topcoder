/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11433
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

class TheTicketsDivTwo {
public:
    double find(int n, int m, int k);
};

double TheTicketsDivTwo::find(int n, int m, int k) {
    double ret;
    return ret;
}


int test0() {
    int n = 2;
    int m = 1;
    int k = 1;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
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
    int m = 1;
    int k = 2;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5833333333333334;
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
    int m = 7;
    int k = 4;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 4;
    int m = 2;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25264033564814814;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 9;
    int m = 1;
    int k = 4;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 5;
    int m = 5;
    int k = 6;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12152777777777778;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 1;
    int m = 1;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 10;
    int m = 1;
    int k = 6;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 7;
    int m = 2;
    int k = 6;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1388888888888889;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 6;
    int m = 3;
    int k = 9;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1586210776748971;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 4;
    int m = 1;
    int k = 2;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
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
    int m = 1;
    int k = 7;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.20187114197530864;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 8;
    int m = 2;
    int k = 7;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1388888888888889;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 2;
    int m = 1;
    int k = 9;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.443359375;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 2;
    int m = 2;
    int k = 3;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.625;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 9;
    int m = 9;
    int k = 9;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0388883530521262;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 8;
    int m = 6;
    int k = 9;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07633887745770462;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 7;
    int m = 1;
    int k = 4;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 3;
    int m = 2;
    int k = 9;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3168402777777778;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 9;
    int m = 7;
    int k = 6;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.33489797668038407;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 6;
    int m = 1;
    int k = 9;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22116126543209877;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 3;
    int m = 2;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3184678819444444;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 5;
    int m = 1;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.24895109953703703;
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
    int m = 1;
    int k = 8;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.19514639060356653;
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
    int m = 1;
    int k = 9;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22116126543209877;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 1;
    int m = 1;
    int k = 9;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 3;
    int m = 3;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3439670138888889;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 7;
    int m = 7;
    int k = 8;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06210348079561043;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 2;
    int m = 2;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5550130208333334;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 2;
    int m = 1;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4449869791666667;
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
    int m = 1;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18611084319272977;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 5;
    int m = 5;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16149450231481483;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 1;
    int m = 1;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
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
    int n = 10;
    int m = 1;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2635700164005741;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 7;
    int m = 2;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.17257962534293553;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 6;
    int m = 3;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1668997556584362;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 4;
    int m = 1;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.28313078703703703;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 6;
    int m = 1;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.23161008230452676;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 8;
    int m = 2;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16096313085848193;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 2;
    int m = 1;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4449869791666667;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 3;
    int m = 1;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3375651041666667;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 2;
    int m = 2;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5550130208333334;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 3;
    int m = 3;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3439670138888889;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 2;
    int m = 1;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4449869791666667;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 10;
    int m = 10;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03234345429749022;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 1;
    int m = 1;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 4;
    int m = 1;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.28313078703703703;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 10;
    int m = 3;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13124527669816594;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 10;
    int m = 7;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05621324556724076;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 9;
    int m = 8;
    int k = 7;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2790816472336534;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 10;
    int m = 4;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10265243166692069;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 6;
    int m = 5;
    int k = 4;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.48225308641975306;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 5;
    int m = 4;
    int k = 3;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5787037037037037;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 3;
    int m = 3;
    int k = 4;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3472222222222222;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 10;
    int m = 6;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06797188563735203;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 10;
    int m = 8;
    int k = 9;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04651360787227557;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 10;
    int m = 5;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08285624015648022;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 5;
    int m = 2;
    int k = 3;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1388888888888889;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 9;
    int m = 2;
    int k = 9;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18540249676116446;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 4;
    int m = 2;
    int k = 8;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25752314814814814;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 2;
    int m = 2;
    int k = 1;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8333333333333334;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 5;
    int m = 1;
    int k = 9;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25636574074074076;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 7;
    int m = 4;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.140918370627572;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 5;
    int m = 2;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22075135030864199;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 9;
    int m = 7;
    int k = 10;
    TheTicketsDivTwo* pObj = new TheTicketsDivTwo();
    clock_t start = clock();
    double result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.059531464334705075;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22892820&rd=14514&pm=11433
********************************************************************************
#include <cstdio> 
#include <cstring> 
#include <cstdlib> 
#include <algorithm> 
#include <vector> 
#include <string> 
using namespace std; 
 
double f[20][20][20]; 
 
class TheTicketsDivTwo 
{ 
  public : 
    double find(int n, int m, int k); 
}; 
double TheTicketsDivTwo::find(int n, int m, int lim) 
{ 
  int i, j, k; 
  double ans; 
  memset(f, 0, sizeof(f)); 
  ans = 0; 
  f[0][n][m] = 1; 
  for (k = 0; k < lim; k++) { 
    ans += f[k][1][1]; 
    for (i = 2; i <= n; i++) 
      for (j = 1; j <= i; j++) { 
        if (j == 1) ans += f[k][i][j]/6; 
        if (j == 1) f[k+1][i][i] += f[k][i][j]/2; else f[k+1][i][j-1] += f[k][i][j]/2; 
        if (j > 1) f[k+1][i-1][j-1] += f[k][i][j]/3; 
      } 
  } 
  for (i = 1; i <= n; i++) ans += f[lim][i][1]; 
  return ans; 
}

********************************************************************************
*******************************************************************************/