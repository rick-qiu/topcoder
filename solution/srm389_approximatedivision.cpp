/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6125
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

class ApproximateDivision {
public:
    double quotient(int a, int b, int terms);
};

double ApproximateDivision::quotient(int a, int b, int terms) {
    double ret;
    return ret;
}


int test0() {
    int a = 2;
    int b = 5;
    int terms = 2;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.34375;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int a = 7;
    int b = 8;
    int terms = 5;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.875;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int a = 1;
    int b = 3;
    int terms = 10;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.33333301544189453;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int a = 1;
    int b = 10000;
    int terms = 2;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 8.481740951538086E-5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int a = 1;
    int b = 7;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14285714285714285;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int a = 0;
    int b = 4;
    int terms = 3;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int a = 713;
    int b = 1301;
    int terms = 15;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5480398217951847;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int a = 1;
    int b = 10000;
    int terms = 1;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 6.103515625E-5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int a = 1;
    int b = 10000;
    int terms = 2;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 8.481740951538086E-5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int a = 1;
    int b = 10000;
    int terms = 3;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 9.408412734046578E-5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int a = 1;
    int b = 10000;
    int terms = 11;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 9.99968565805973E-5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int a = 10000;
    int b = 10000;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999934918318;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int a = 1;
    int b = 10000;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 9.999999934918317E-5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int a = 1000;
    int b = 1000;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int a = 798;
    int b = 799;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.998748435544362;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int a = 1;
    int b = 1;
    int terms = 3;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int a = 1;
    int b = 8193;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 1.220552970403139E-4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int a = 8000;
    int b = 8193;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9764423763225112;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int a = 1;
    int b = 1;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
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
    int a = 4535;
    int b = 6161;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.736081804901235;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int a = 9999;
    int b = 10000;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9998999934924826;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int a = 20;
    int b = 997;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.020060180541624874;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int a = 8193;
    int b = 8193;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999990486512919;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int a = 5;
    int b = 99;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.050505050505044086;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int a = 1;
    int b = 1;
    int terms = 10;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int a = 2;
    int b = 999;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0020020020020020016;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int a = 783;
    int b = 999;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7837837837837837;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int a = 50;
    int b = 10000;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0049999999674591586;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int a = 1;
    int b = 1;
    int terms = 1;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int a = 4200;
    int b = 8400;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4999997149101312;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int a = 1;
    int b = 8194;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2204040163186624E-4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int a = 1000;
    int b = 10000;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09999999934918317;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int a = 3;
    int b = 4;
    int terms = 2;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.75;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int a = 5;
    int b = 10000;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999967459158E-4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int a = 80;
    int b = 4100;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.019512176873762718;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int a = 100;
    int b = 8190;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01221001221001221;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int a = 4579;
    int b = 6789;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.674473412873766;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int a = 100;
    int b = 128;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.78125;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int a = 1;
    int b = 9999;
    int terms = 4;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 9.770321513903613E-5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int a = 1;
    int b = 1;
    int terms = 5;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int a = 123;
    int b = 10000;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01229999991994953;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int a = 54;
    int b = 8193;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006590986040176951;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int a = 1;
    int b = 9000;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1111109783128265E-4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int a = 25;
    int b = 25;
    int terms = 1;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.78125;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int a = 3500;
    int b = 7689;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4551957341656913;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int a = 1;
    int b = 8;
    int terms = 1;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.125;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int a = 1;
    int b = 1;
    int terms = 7;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
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
    int a = 5000;
    int b = 10000;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4999999967459159;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int a = 7;
    int b = 2048;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00341796875;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int a = 2;
    int b = 9;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22222220755497427;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int a = 15;
    int b = 16;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9375;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int a = 9998;
    int b = 9999;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9998999834710648;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int a = 1;
    int b = 1;
    int terms = 2;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int a = 1;
    int b = 2;
    int terms = 15;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int a = 2;
    int b = 3;
    int terms = 5;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.666015625;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int a = 5;
    int b = 7;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7142857142857142;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int a = 10;
    int b = 16;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.625;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int a = 4000;
    int b = 8100;
    int terms = 19;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4938271604938271;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int a = 10;
    int b = 9999;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010001000034717592;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int a = 777;
    int b = 778;
    int terms = 7;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9986685331499519;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int a = 4;
    int b = 9;
    int terms = 6;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4413278102874756;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int a = 7;
    int b = 22;
    int terms = 2;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.287109375;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int a = 333;
    int b = 512;
    int terms = 1;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.650390625;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int a = 333;
    int b = 512;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.650390625;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int a = 14;
    int b = 28;
    int terms = 5;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4999847412109375;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int a = 3;
    int b = 12;
    int terms = 9;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2499990463256836;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int a = 1;
    int b = 24;
    int terms = 19;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.041666666666515084;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int a = 17;
    int b = 17;
    int terms = 3;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.897003173828125;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int a = 19;
    int b = 19;
    int terms = 11;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.999950257556668;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int a = 50;
    int b = 50;
    int terms = 1;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.78125;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int a = 513;
    int b = 513;
    int terms = 2;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7509756088256836;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int a = 513;
    int b = 513;
    int terms = 15;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999703643707892;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int a = 513;
    int b = 513;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.999999082895404;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int a = 11;
    int b = 9998;
    int terms = 4;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010748269598298554;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int a = 9;
    int b = 10;
    int terms = 8;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8996480405330658;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int a = 5983;
    int b = 7439;
    int terms = 13;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8042747681139668;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int a = 1823;
    int b = 9837;
    int terms = 18;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1853207153579327;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int a = 0;
    int b = 8473;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int a = 1;
    int b = 30;
    int terms = 2;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.033203125;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int a = 2;
    int b = 31;
    int terms = 1;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0625;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int a = 28;
    int b = 29;
    int terms = 3;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9647216796875;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int a = 23;
    int b = 29;
    int terms = 4;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7930421829223633;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int a = 5001;
    int b = 10000;
    int terms = 1;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.30523681640625;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int a = 5001;
    int b = 10000;
    int terms = 2;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4241718649864197;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int a = 5001;
    int b = 10000;
    int terms = 15;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000996376310812;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int a = 5001;
    int b = 10000;
    int terms = 20;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000999967452651;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int a = 63;
    int b = 65;
    int terms = 1;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4921875;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int a = 63;
    int b = 65;
    int terms = 2;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.73443603515625;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int a = 63;
    int b = 65;
    int terms = 9;
    ApproximateDivision* pObj = new ApproximateDivision();
    clock_t start = clock();
    double result = pObj->quotient(a, b, terms);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9675879022119923;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15511417&rd=11123&pm=6125
********************************************************************************
#include <map>  
#include <set>  
#include <cmath> 
#include <vector>  
#include <string>  
#include <sstream> 
#include <iostream> 
#include <algorithm>  
using namespace std;  
#define FOR(i,a,b) for(int i=(a); i<(b); ++i)  
#define FORE(it,x) for(typeof(x.begin()) it=x.begin(); it!=x.end(); ++it)  
#define SET(x, v) memset(x, v, sizeof (x))  
#define sz size()  
#define cs c_str()  
#define pb push_back  
#define mp make_pair 
  
typedef long long i64;  
 
class      ApproximateDivision         { public:  
 
  double quotient(int a, int b, int terms) { 
    double ret = 0.0; 
    i64 t = 1; 
    for(;t<b;t<<=1); 
    printf("%d %d %lld\n",a,b,t); 
    // 1/b ->  
    i64 c = t - b; 
    double T= t, C = 1; 
    while(terms--) { 
      ret += C / T; 
      C*= (double)c; 
      T*= (double)t; 
    } 
    ret*= (double) a; 
    return ret; 
  } 
 
};

********************************************************************************
*******************************************************************************/