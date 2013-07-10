/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4845
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

class AmountApproximation {
public:
    int approximate(int D, int p1, int p2);
};

int AmountApproximation::approximate(int D, int p1, int p2) {
    int ret;
    return ret;
}


int test0() {
    int D = 17;
    int p1 = 7;
    int p2 = 9;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int D = 17;
    int p1 = 7;
    int p2 = 13;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int D = 21;
    int p1 = 7;
    int p2 = 13;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int D = 37;
    int p1 = 9;
    int p2 = 17;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int D = 287341;
    int p1 = 2345;
    int p2 = 7253;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 287398;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int D = 1000000000;
    int p1 = 1;
    int p2 = 1;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int D = 1000000000;
    int p1 = 1000000000;
    int p2 = 1;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int D = 1000000000;
    int p1 = 1;
    int p2 = 1000000000;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int D = 1000000000;
    int p1 = 1000000000;
    int p2 = 1000000000;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int D = 1000000000;
    int p1 = 999999999;
    int p2 = 999999999;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999998;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int D = 1;
    int p1 = 1000000000;
    int p2 = 999999999;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int D = 3;
    int p1 = 1000000000;
    int p2 = 1000000000;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int D = 3;
    int p1 = 999999997;
    int p2 = 1000000000;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999997;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int D = 999999913;
    int p1 = 1;
    int p2 = 992999913;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999913;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int D = 999999913;
    int p1 = 3;
    int p2 = 992999913;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999915;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int D = 999999913;
    int p1 = 992999913;
    int p2 = 1;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999913;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int D = 999999913;
    int p1 = 992999913;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999915;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int D = 536343;
    int p1 = 288;
    int p2 = 1;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 536343;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int D = 26964;
    int p1 = 111209082;
    int p2 = 1291960;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1291960;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int D = 810;
    int p1 = 1;
    int p2 = 20533140;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 810;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int D = 2920;
    int p1 = 123773;
    int p2 = 48048593;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 123773;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int D = 2167;
    int p1 = 302350;
    int p2 = 63751;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 63751;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int D = 951546;
    int p1 = 104795;
    int p2 = 6423;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 951947;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int D = 53635841;
    int p1 = 185343;
    int p2 = 157;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 53635841;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int D = 701317;
    int p1 = 592510;
    int p2 = 17742;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 709680;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int D = 1;
    int p1 = 1;
    int p2 = 1754;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int D = 208029086;
    int p1 = 1197;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 208029087;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int D = 3827059;
    int p1 = 3849166;
    int p2 = 30735;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 3841875;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int D = 386;
    int p1 = 810183478;
    int p2 = 42401940;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 42401940;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int D = 2699;
    int p1 = 4960290;
    int p2 = 28;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 2716;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int D = 1;
    int p1 = 318551;
    int p2 = 10;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int D = 15206;
    int p1 = 1072763;
    int p2 = 552914;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 552914;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int D = 875938;
    int p1 = 1806952;
    int p2 = 817;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 876641;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int D = 414989;
    int p1 = 3290136;
    int p2 = 885;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 415065;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int D = 313;
    int p1 = 2013799;
    int p2 = 38505;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 38505;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int D = 444393;
    int p1 = 79690;
    int p2 = 1010;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 444400;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int D = 566501015;
    int p1 = 300551970;
    int p2 = 2122343;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 566665581;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int D = 6;
    int p1 = 53;
    int p2 = 3559949;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int D = 53079295;
    int p1 = 635;
    int p2 = 252;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 53079295;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int D = 8;
    int p1 = 2;
    int p2 = 14;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int D = 164;
    int p1 = 37;
    int p2 = 1097119;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 185;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int D = 2658007;
    int p1 = 267491;
    int p2 = 3047;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 2658096;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int D = 31550;
    int p1 = 4;
    int p2 = 12659;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 31550;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int D = 28220;
    int p1 = 41272155;
    int p2 = 470945368;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 41272155;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int D = 842418187;
    int p1 = 37;
    int p2 = 438923;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 842418187;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int D = 9;
    int p1 = 137;
    int p2 = 519185;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int D = 900;
    int p1 = 17159;
    int p2 = 90;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int D = 29;
    int p1 = 15;
    int p2 = 16;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int D = 3913;
    int p1 = 3581;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 3914;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int D = 3897537;
    int p1 = 1625;
    int p2 = 257;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 3897537;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int D = 189290897;
    int p1 = 146170;
    int p2 = 176519597;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 189382557;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int D = 17432;
    int p1 = 1005;
    int p2 = 5235;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 17505;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int D = 8779251;
    int p1 = 22617;
    int p2 = 2570;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 8779255;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int D = 495230;
    int p1 = 14921;
    int p2 = 27708;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 496627;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int D = 223;
    int p1 = 85;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int D = 93;
    int p1 = 93;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int D = 1281;
    int p1 = 155;
    int p2 = 853;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1318;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int D = 64169488;
    int p1 = 11055;
    int p2 = 791792;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 64169570;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int D = 136;
    int p1 = 57;
    int p2 = 4;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int D = 120;
    int p1 = 6;
    int p2 = 92;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int D = 17451;
    int p1 = 57;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 17451;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int D = 2260;
    int p1 = 1395;
    int p2 = 1907;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 2790;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int D = 1023;
    int p1 = 45;
    int p2 = 1;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int D = 131827436;
    int p1 = 6;
    int p2 = 8;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 131827436;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int D = 31242;
    int p1 = 2;
    int p2 = 9605;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 31242;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int D = 152;
    int p1 = 14;
    int p2 = 2;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 152;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int D = 1;
    int p1 = 1;
    int p2 = 1;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int D = 17262688;
    int p1 = 3305956;
    int p2 = 4;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 17262688;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int D = 122;
    int p1 = 11;
    int p2 = 115;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int D = 137699588;
    int p1 = 1902247;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 137699588;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int D = 4819808;
    int p1 = 69684;
    int p2 = 3203483;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 4875899;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int D = 35;
    int p1 = 24;
    int p2 = 27;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int D = 1;
    int p1 = 1;
    int p2 = 1;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int D = 6079;
    int p1 = 2;
    int p2 = 4591;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 6079;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int D = 7;
    int p1 = 5;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int D = 7486775;
    int p1 = 4;
    int p2 = 42;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 7486776;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int D = 9;
    int p1 = 1;
    int p2 = 6;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int D = 1928;
    int p1 = 1131;
    int p2 = 1765;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 2262;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int D = 376402824;
    int p1 = 243997730;
    int p2 = 39372804;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 393728040;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int D = 109681;
    int p1 = 87002;
    int p2 = 16877;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 118139;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int D = 1359;
    int p1 = 796;
    int p2 = 1206;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1592;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int D = 1153;
    int p1 = 866;
    int p2 = 923;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1732;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int D = 2296;
    int p1 = 2009;
    int p2 = 709;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 2718;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int D = 102608;
    int p1 = 14107;
    int p2 = 13578;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 108624;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int D = 30;
    int p1 = 5;
    int p2 = 6;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int D = 3154;
    int p1 = 1615;
    int p2 = 3127;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 3230;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int D = 53917296;
    int p1 = 1660012;
    int p2 = 28216367;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 54776559;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int D = 1;
    int p1 = 1;
    int p2 = 1;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int D = 1;
    int p1 = 2;
    int p2 = 2;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int D = 1;
    int p1 = 2;
    int p2 = 1;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
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
    int D = 1;
    int p1 = 1;
    int p2 = 2;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
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
    int D = 1000000000;
    int p1 = 2;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int D = 1000000000;
    int p1 = 2;
    int p2 = 4;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int D = 999999999;
    int p1 = 2;
    int p2 = 4;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int D = 999999999;
    int p1 = 2;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int D = 999999999;
    int p1 = 2;
    int p2 = 2;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int D = 1000000000;
    int p1 = 2;
    int p2 = 2;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int D = 999999998;
    int p1 = 2;
    int p2 = 4;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int D = 999999999;
    int p1 = 4;
    int p2 = 6;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int D = 287341;
    int p1 = 2345;
    int p2 = 7253;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 287398;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int D = 999999991;
    int p1 = 2;
    int p2 = 2;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999992;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int D = 21;
    int p1 = 7;
    int p2 = 13;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int D = 666000000;
    int p1 = 800000000;
    int p2 = 7;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 666000006;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int D = 999999937;
    int p1 = 3;
    int p2 = 5;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999937;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int D = 1000000000;
    int p1 = 3;
    int p2 = 7;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int D = 999900007;
    int p1 = 3;
    int p2 = 17;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999900007;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int D = 1000000000;
    int p1 = 1;
    int p2 = 1;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int D = 1000000000;
    int p1 = 3;
    int p2 = 5;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int D = 1000000000;
    int p1 = 1;
    int p2 = 2;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int D = 1000000000;
    int p1 = 3;
    int p2 = 9;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000002;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int D = 287341;
    int p1 = 332345;
    int p2 = 237253;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 332345;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int D = 999999999;
    int p1 = 2;
    int p2 = 4;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int D = 999999999;
    int p1 = 2;
    int p2 = 2;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int D = 999999999;
    int p1 = 6;
    int p2 = 7;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int D = 1000000000;
    int p1 = 3;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000002;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int D = 1000000000;
    int p1 = 4;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int D = 990000012;
    int p1 = 883212354;
    int p2 = 999999943;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999943;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int D = 100000000;
    int p1 = 5;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 100000000;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int D = 1000000000;
    int p1 = 6;
    int p2 = 9;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000002;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int D = 100;
    int p1 = 1;
    int p2 = 101;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int D = 1000000000;
    int p1 = 7;
    int p2 = 11;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int D = 999999997;
    int p1 = 3;
    int p2 = 5;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999997;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int D = 1000000000;
    int p1 = 10;
    int p2 = 30;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int D = 1000000000;
    int p1 = 7;
    int p2 = 13;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int D = 1000000000;
    int p1 = 11;
    int p2 = 7;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int D = 1000000000;
    int p1 = 399;
    int p2 = 799;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int D = 999999997;
    int p1 = 37;
    int p2 = 29;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999997;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int D = 100000007;
    int p1 = 2;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 100000007;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int D = 999999937;
    int p1 = 99991;
    int p2 = 899981;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000009991;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int D = 11;
    int p1 = 5;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int D = 8;
    int p1 = 3;
    int p2 = 7;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int D = 33;
    int p1 = 2;
    int p2 = 17;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int D = 999999937;
    int p1 = 2;
    int p2 = 5;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999937;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int D = 999999999;
    int p1 = 4;
    int p2 = 2;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int D = 999999995;
    int p1 = 2;
    int p2 = 3;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999995;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int D = 1000000000;
    int p1 = 7;
    int p2 = 7;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000001;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int D = 1000000000;
    int p1 = 999999999;
    int p2 = 1000000000;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int D = 36;
    int p1 = 7;
    int p2 = 5;
    AmountApproximation* pObj = new AmountApproximation();
    clock_t start = clock();
    int result = pObj->approximate(D, p1, p2);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=16119001&rd=8071&pm=4845
********************************************************************************
#include <iostream> 
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
class AmountApproximation { 
public: 
  int approximate (int D, int p1, int p2)  
  { 
    if (D % p1 == 0 || D % p2 == 0) 
      return D; 
 
    int d1 = 1 + D / p1; 
    int d2 = 0; 
    int minsum = d1*p1; 
 
    while (d1 >= 0) { 
      int sum = d1 * p1 + d2 * p2; 
//      cout << d1 << "*" << p1 << " + " << d2 << "*" << p2 << " = " << sum << endl; 
 
      if (sum == D) { 
        return D; 
      }   
      else if (sum < D) { 
        d2++; 
      }   
      else { // sum > D 
        if (sum < minsum) { 
          minsum = sum; 
        } 
        d1--;   
      } 
    } 
//    cout << d1 << "*" << p1 << " + " << d2 << "*" << p2 << " = " << minsum << endl; 
    return minsum; 
  } 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/