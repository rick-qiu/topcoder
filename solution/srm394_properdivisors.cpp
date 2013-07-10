/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8547
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

class ProperDivisors {
public:
    int analyzeInterval(int a, int b, int n);
};

int ProperDivisors::analyzeInterval(int a, int b, int n) {
    int ret;
    return ret;
}


int test0() {
    int a = 32;
    int b = 1;
    int n = 3;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int a = 1;
    int b = 12;
    int n = 2;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
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
    int a = 1000000;
    int b = 10000000;
    int n = 10;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 146066338;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int a = 1000000;
    int b = 10000000;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 145707011;
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
    int b = 1;
    int n = 10;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int a = 1000000;
    int b = 10000000;
    int n = 2;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 139630317;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int a = 256;
    int b = 1;
    int n = 8;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int a = 76;
    int b = 241;
    int n = 7;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1051;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int a = 25;
    int b = 481;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2171;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int a = 77;
    int b = 237;
    int n = 2;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 897;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int a = 80;
    int b = 528;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2559;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int a = 95;
    int b = 801;
    int n = 4;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4121;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int a = 33;
    int b = 460;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2077;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int a = 68;
    int b = 188;
    int n = 3;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 757;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int a = 18;
    int b = 46;
    int n = 2;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int a = 2;
    int b = 655;
    int n = 4;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3000;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int a = 13;
    int b = 930;
    int n = 2;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4147;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int a = 18;
    int b = 23;
    int n = 7;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int a = 33;
    int b = 645;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3095;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int a = 56;
    int b = 34;
    int n = 9;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int a = 32;
    int b = 697;
    int n = 8;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3414;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int a = 60;
    int b = 40;
    int n = 3;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int a = 23;
    int b = 227;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 883;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int a = 4;
    int b = 492;
    int n = 6;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2166;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int a = 8;
    int b = 706;
    int n = 10;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3378;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int a = 95;
    int b = 744;
    int n = 10;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3839;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int a = 16;
    int b = 217;
    int n = 3;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 785;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int a = 33;
    int b = 669;
    int n = 9;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3258;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int a = 2063;
    int b = 31790;
    int n = 6;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 278126;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int a = 136;
    int b = 33591;
    int n = 10;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 288948;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int a = 9715;
    int b = 57300;
    int n = 4;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 545073;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int a = 2123;
    int b = 89026;
    int n = 2;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 803335;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int a = 3772;
    int b = 17425;
    int n = 2;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 136822;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int a = 4565;
    int b = 79739;
    int n = 10;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 770484;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int a = 4854;
    int b = 37177;
    int n = 8;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 337520;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int a = 6293;
    int b = 33607;
    int n = 2;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 284179;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int a = 2612;
    int b = 79478;
    int n = 3;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 745659;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int a = 7376;
    int b = 29801;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 269443;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int a = 8342;
    int b = 97317;
    int n = 6;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 965666;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int a = 8452;
    int b = 90781;
    int n = 8;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 897383;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int a = 2915;
    int b = 49955;
    int n = 6;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 458682;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int a = 6631;
    int b = 44593;
    int n = 10;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 414791;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int a = 7520;
    int b = 20703;
    int n = 3;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 179741;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int a = 5453;
    int b = 44995;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 414695;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int a = 4715;
    int b = 73754;
    int n = 10;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 708291;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int a = 6409;
    int b = 36882;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 336559;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int a = 7303;
    int b = 87584;
    int n = 10;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 860793;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int a = 9534;
    int b = 54527;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 519000;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int a = 282499;
    int b = 2413;
    int n = 10;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 28239;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int a = 570551;
    int b = 5440141;
    int n = 7;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 76173349;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int a = 818936;
    int b = 1919226;
    int n = 4;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 25736733;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int a = 542079;
    int b = 3570232;
    int n = 7;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 48852298;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int a = 43959;
    int b = 9287861;
    int n = 2;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 126168618;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int a = 896415;
    int b = 7577294;
    int n = 3;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 107374885;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int a = 618745;
    int b = 4921657;
    int n = 2;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 65522750;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int a = 297360;
    int b = 954291;
    int n = 3;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 11871712;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int a = 698735;
    int b = 9276167;
    int n = 10;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 134219467;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int a = 438626;
    int b = 2729469;
    int n = 7;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 36663471;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int a = 506878;
    int b = 2729424;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 36715498;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int a = 566290;
    int b = 898966;
    int n = 7;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 11634824;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int a = 227177;
    int b = 7901290;
    int n = 8;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 111914619;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int a = 352823;
    int b = 4804748;
    int n = 2;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 63244619;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int a = 406067;
    int b = 449339;
    int n = 4;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5573981;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int a = 60173;
    int b = 8645346;
    int n = 9;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 122474390;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int a = 549084;
    int b = 9278832;
    int n = 7;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 133777741;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int a = 429413;
    int b = 806914;
    int n = 8;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 10280643;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int a = 100368;
    int b = 9604230;
    int n = 4;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 136456858;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int a = 944525;
    int b = 9999760;
    int n = 7;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 145854621;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int a = 904376;
    int b = 9999520;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 145466065;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int a = 959824;
    int b = 9999764;
    int n = 2;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 139529868;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int a = 909621;
    int b = 9999473;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 145478423;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int a = 973806;
    int b = 9999200;
    int n = 4;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 145177767;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int a = 980468;
    int b = 9999541;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 145653011;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int a = 904433;
    int b = 9999813;
    int n = 3;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 143819454;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int a = 928883;
    int b = 9999955;
    int n = 2;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 139456772;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int a = 912999;
    int b = 9999346;
    int n = 4;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 145030855;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int a = 921788;
    int b = 9999071;
    int n = 2;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 139426278;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int a = 1;
    int b = 10000000;
    int n = 2;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 136280624;
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
    int b = 10000000;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 142356103;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int a = 1;
    int b = 10000000;
    int n = 8;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 142684598;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int a = 537695;
    int b = 5376956;
    int n = 5;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 75009840;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int a = 100000;
    int b = 10000000;
    int n = 10;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 143276440;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int a = 97;
    int b = 9999999;
    int n = 3;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 140706252;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int a = 1;
    int b = 10000000;
    int n = 7;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 142641878;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int a = 1;
    int b = 10000000;
    int n = 10;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 142715423;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int a = 999999;
    int b = 9999990;
    int n = 9;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 146056082;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int a = 99999;
    int b = 999999;
    int n = 7;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 12296705;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int a = 787878;
    int b = 10000000;
    int n = 3;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 143524980;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int a = 2;
    int b = 10000000;
    int n = 6;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 142551958;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int a = 1000000;
    int b = 9999999;
    int n = 9;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 146056106;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int a = 999951;
    int b = 9188771;
    int n = 9;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 133621562;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int a = 934234;
    int b = 9123756;
    int n = 9;
    ProperDivisors* pObj = new ProperDivisors();
    clock_t start = clock();
    int result = pObj->analyzeInterval(a, b, n);
    clock_t end = clock();
    delete pObj;
    int expected = 132473466;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22658932&rd=11128&pm=8547
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <map> 
#include <set> 
#include <cstdio> 
#include <algorithm> 
#include <cmath> 
 
using namespace std; 
 
//#define GI ({int t;scanf("%d",&t);t;}) 
#define dbg(x) cout << #x << " -> " << x << "\t" << flush; 
#define dbge(x) cout << #x << " -> " << x << "\t" << endl; 
#define LET(x,a) typeof(a) x(a) 
#define FOR(i,a,b) for(LET(i,a);i<(b);++i) 
#define REP(i,n) FOR(i,0,n) 
#define EACH(i,v) FOR(i,(v).begin(),(v).end()) 
#define cs c_str() 
#define pb push_back 
#define sz size() 
#define INF (int)1e9+1 
 
typedef vector<int> VI; 
typedef vector<VI> VVI; 
typedef vector<string> VS; 
typedef long long LL; 
typedef long double LD; 
 
class ProperDivisors { 
  public: 
  int fn1(int a,int b,int x){ 
    int c=0; 
    if(a<=x && b>=x) c=1; 
    a=((a-1)/x+1)*x; 
    b=(b/x)*x; 
    return (b-a)/x+1; 
  } 
  int fn(int a,int b,int x){ 
    int c=0; 
    if(a<=x && b>=x) c=1; 
    a=((a-1)/x+1)*x; 
    b=(b/x)*x; 
    return (b-a)/x+1-c; 
  } 
  int analyzeInterval(int a, int b, int n){ 
    int x=int( pow(LD((a+b)*1.0),LD(1/(long double)(n))) + 0.0001); LL ret=0; 
    //cout<<x<<" "; 
    FOR(i,2,a+b+1){ 
      ret+= LL(fn(a,a+b,i)); 
      //cout<<fn(a,a+b,i)<< " "; 
    } 
    //cout<<ret<< " "; 
    FOR(i,2,x+1){ 
      ret-= fn1(a,a+b, int(pow(LD(i),LD(n))+0.0001)); 
    } 
    return int(ret); 
  } 
 
 
};

********************************************************************************
*******************************************************************************/