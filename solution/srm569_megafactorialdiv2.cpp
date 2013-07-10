/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12400
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

class MegaFactorialDiv2 {
public:
    int countDivisors(int N, int K);
};

int MegaFactorialDiv2::countDivisors(int N, int K) {
    int ret;
    return ret;
}


int test0() {
    int N = 3;
    int K = 1;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 3;
    int K = 2;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 4;
    int K = 2;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 6;
    int K = 3;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1392;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 100;
    int K = 2;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 321266186;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 1000;
    int K = 100;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 563680238;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 1000;
    int K = 99;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 120360682;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 999;
    int K = 100;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 229950717;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 1000;
    int K = 1;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 791569763;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 123;
    int K = 5;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 711693974;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 16;
    int K = 8;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 665824235;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 1;
    int K = 100;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 2;
    int K = 100;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 6;
    int K = 100;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 504967422;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 77;
    int K = 11;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 61095262;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 776;
    int K = 100;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 507387576;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 34;
    int K = 69;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 867486552;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 333;
    int K = 92;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 904299389;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 600;
    int K = 50;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 606324195;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 716;
    int K = 2;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 357035145;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 26;
    int K = 96;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 901034209;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 12;
    int K = 51;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 958733909;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 559;
    int K = 83;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 541310848;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 874;
    int K = 10;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 510549782;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 991;
    int K = 60;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 204007016;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 300;
    int K = 5;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 253539462;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 256;
    int K = 2;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 872280411;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 256;
    int K = 88;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 812667610;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 121;
    int K = 37;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 760361028;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 137;
    int K = 42;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 530106839;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 991;
    int K = 64;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 370517844;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 803;
    int K = 36;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 32916280;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 601;
    int K = 92;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 993771158;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 601;
    int K = 93;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 497645458;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 99;
    int K = 86;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 897269756;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 25;
    int K = 65;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 543318752;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 625;
    int K = 84;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 183947240;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 237;
    int K = 85;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 653821265;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 2;
    int K = 2;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 1;
    int K = 5;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 1;
    int K = 1;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 997;
    int K = 3;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 583304361;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 983;
    int K = 43;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 860959367;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 100;
    int K = 100;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 799296769;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 1000;
    int K = 95;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 206248228;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 999;
    int K = 99;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 435472594;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 555;
    int K = 79;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 217580815;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 999;
    int K = 3;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 831168277;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 1000;
    int K = 10;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 999691632;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 10;
    int K = 5;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 954492407;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 10;
    int K = 1;
    MegaFactorialDiv2* pObj = new MegaFactorialDiv2();
    clock_t start = clock();
    int result = pObj->countDivisors(N, K);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23116946&rd=15489&pm=12400
********************************************************************************
#include <map> 
using namespace std; 
 
const int MOD = 1000000009; 
int c[2048][2048]; 
 
int ptable[2048]; 
int ps[2048]; 
int total; 
struct MegaFactorialDiv2 
{ 
 
    int countDivisors(int N, int K) 
    { 
    for(int i = 2; i < 2048; i++) 
        if(!ptable[i]) 
        { 
            ps[total++] = i; 
            for(int j = i * i; j < 2048; j += i) 
                ptable[j] = 1; 
        } 
     
     
        for(int i = 0; i < 2048; i++) 
        { 
            c[i][0] = c[i][i] = 1; 
            for(int j = 1; j < i; j++) 
                c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % MOD; 
        } 
 
        map<int, int> alc; 
        int ans = 1; 
        for(int i = 2; i <= N; i++) 
        { 
            int fac = c[N - i + K - 1][K - 1]; 
            for(int n = i, j = 0; j < total; j++) 
                while(n % ps[j] == 0) 
                { 
                    n /= ps[j]; 
                    (alc[ps[j]] += fac) %= MOD; 
                } 
        } 
        for(map<int, int>::iterator it = alc.begin(); it != alc.end(); it++) 
            ans = ans * (long long int)(it->second + 1) % MOD; 
        return ans; 
    } 
};

********************************************************************************
*******************************************************************************/