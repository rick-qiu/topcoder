/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10710
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

class MegaSum {
public:
    int calculate(long N);
};

int MegaSum::calculate(long N) {
    int ret;
    return ret;
}


int test0() {
    long N = 8;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long N = 12;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 282;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long N = 11;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long N = 6;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long N = 34539;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 437909839;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long N = 72092288;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 999999996;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long N = 382105;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long N = 4863616;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long N = 10000000000;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 832250385;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long N = 1234567891;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 270344636;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long N = 1000000007;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 912713920;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long N = 2735855555;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 989075999;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long N = 4444444444;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 465502423;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long N = 8087674693;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 235845444;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long N = 8087674692;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 63006008;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long N = 8087674691;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 175693749;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long N = 8087674593;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 746019129;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long N = 8087674693;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 235845444;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long N = 8087584762;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 788924965;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long N = 8087764624;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 789014897;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long N = 8087764625;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 491242426;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long N = 8087764623;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 367089643;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long N = 8087584761;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 174551930;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long N = 8087584763;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 367089643;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long N = 1010101010;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 369124411;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long N = 1001000101;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 284928151;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long N = 5555555555;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 530805245;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long N = 6666666666;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 796563719;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long N = 7777777777;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 492500188;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long N = 8888888888;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 151490215;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long N = 9999999999;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 496801141;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long N = 1111111111;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 1262560;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long N = 2222222222;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 977390827;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long N = 3333333333;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 175814602;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long N = 273;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 1922649;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long N = 576;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 30212;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long N = 141;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 21418;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long N = 722;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 1760412;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long N = 744444;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 105888587;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long N = 42453;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 649413023;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long N = 3942219498;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 678889441;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long N = 3689426;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 451875264;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long N = 510;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 7578914;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long N = 592440;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 829991811;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long N = 2906131;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 794073915;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long N = 62399858;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 669252772;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long N = 64431;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 498549078;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long N = 445;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 216208;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long N = 88039581;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 297793792;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long N = 30133266;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 32452298;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long N = 54483;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 307356662;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long N = 386218;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 877708854;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long N = 69528228;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 933980531;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long N = 7565792;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 39773876;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long N = 106916018;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 970172363;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long N = 7314758;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 617467728;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long N = 261544;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 214019076;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long N = 13908400;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 658569996;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long N = 5916858;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 92850932;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long N = 477723511;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 106296747;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long N = 4013683;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 566560197;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long N = 521;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 1203984;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long N = 66046624;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 719984711;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long N = 553;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 14447980;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long N = 247791949;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 446463053;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long N = 454;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 2238418;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long N = 104593;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 219521764;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long N = 90716740;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 75825489;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long N = 73354;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 329883206;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long N = 49788126;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 306169432;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long N = 6721;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 38628448;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long N = 546731;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 33543068;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long N = 22142;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 819156417;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long N = 388;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 1603966;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long N = 587144026;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 940392002;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long N = 7619;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 350661911;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long N = 46187198;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 437894642;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long N = 38039;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 50681021;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long N = 6153;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 399911467;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long N = 355671422;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 24706432;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long N = 7347499;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 851875391;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long N = 7323982153;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 346823628;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long N = 6801120;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 244136754;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long N = 5940036;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 74942820;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long N = 2906763;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 360648084;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long N = 718;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 3979794;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long N = 44257;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 350652408;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long N = 87361;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 260453379;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long N = 4237570;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 293952578;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long N = 6739;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 488717208;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long N = 564212976;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 810872914;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long N = 431938175;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 460809260;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long N = 995326;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 493707781;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long N = 44725900;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 46695630;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long N = 517254123;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 219392889;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long N = 923062;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 52990933;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long N = 32772937;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 719058259;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long N = 354162624;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 473052140;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long N = 962;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 93264;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long N = 849;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 2646432;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long N = 7225489;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 968174942;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long N = 6246298;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 172859769;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long N = 645727395;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 424155871;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long N = 9338010;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 846432594;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long N = 175263989;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 953047777;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long N = 92;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 67650;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long N = 432595234;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 28539356;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long N = 3717;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 17907583;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long N = 2521794;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 922708984;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long N = 9147;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 541482558;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long N = 76961285;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 809965922;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long N = 1666358;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 297713766;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long N = 115782;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 512667873;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long N = 348465247;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 21736682;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long N = 58030092;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 431326523;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long N = 56401417;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 66611556;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long N = 966126390;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 529256890;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long N = 362502;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 372697753;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long N = 369453;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 136222022;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long N = 7756990;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 969991708;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    long N = 715;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 6443416;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    long N = 268825421;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 413957835;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    long N = 52;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 2822;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    long N = 219924;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 743596489;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    long N = 1535984;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 536833416;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    long N = 522269473;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 404772876;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    long N = 9623;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 561288247;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    long N = 38259;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 794552915;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    long N = 577704;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 179922462;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    long N = 4692240;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 605233249;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    long N = 7355627;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 577108636;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    long N = 87322548;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 734621319;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    long N = 89;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 49632;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    long N = 59;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 12096;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    long N = 36555;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 870276210;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    long N = 40;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 3118;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    long N = 822;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 16235030;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    long N = 936116564;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 138647842;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    long N = 6702427;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 122802592;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    long N = 999999999;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 7293690;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    long N = 9999900002;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 832127558;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    long N = 9999900001;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 95642093;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    long N = 9999900000;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 501160889;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    long N = 9999800003;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 496801141;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    long N = 9999800002;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 832150385;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    long N = 9999800001;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 501133716;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    long N = 9999800000;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 503751137;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    long N = 9999700004;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 981139057;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    long N = 9999700003;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 237648762;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    long N = 9999700002;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 650072318;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    long N = 9999600006;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 503451141;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    long N = 9999600005;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 501133716;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    long N = 1;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    long N = 2;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    long N = 3;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    long N = 4;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    long N = 5;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    long N = 7;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 134;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    long N = 9;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    long N = 987654321;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 526013781;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    long N = 9999923457;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 567547471;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    long N = 5000000000;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 141947519;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    long N = 9234567899;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 967556476;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    long N = 9999900071;
    MegaSum* pObj = new MegaSum();
    clock_t start = clock();
    int result = pObj->calculate(N);
    clock_t end = clock();
    delete pObj;
    int expected = 815135573;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22663117&rd=13908&pm=10710
********************************************************************************
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
 
const long long MOD = 1000000007;
 
long long R, C;
 
inline pair <long long, long long> loc (long long N)
{
    long long s = (long long) sqrt (N - 0.5);
 
    if (s % 2 == 0)
    {
        if (N <= s * s + s)
            return make_pair (s, N - s * s - 1);
        else
            return make_pair ((s + 1) * (s + 1) - N, s);
    }
    else
    {
        if (N <= s * s + s)
            return make_pair (N - s * s - 1, s);
        else
            return make_pair (s, (s + 1) * (s + 1) - N);
    }
}
 
inline long long sum_to_n (long long n)
{
    if (n % 2 == 0)
        return ((n / 2) % MOD) * ((n + 1) % MOD) % MOD;
    else
        return (n % MOD) * ((n + 1) / 2 % MOD) % MOD;
}
 
inline long long sum2_to_n (long long n)
{
    long long a = n, b = n + 1, c = 2 * n + 1;
 
    if (a % 2 == 0)
        a /= 2;
    else
        b /= 2;
 
    if (a % 3 == 0)
        a /= 3;
    else if (b % 3 == 0)
        b /= 3;
    else if (c % 3 == 0)
        c /= 3;
 
    return (a % MOD) * (b % MOD) % MOD * (c % MOD) % MOD;
}
 
inline long long inc_sum (long long a, long long b, long long c, long long d, long long n)
{
    a %= MOD; b %= MOD; c %= MOD; d %= MOD;
    return ((a * b % MOD * n % MOD + (a * d + b * c) % MOD * sum_to_n (n - 1) % MOD + c * d % MOD * sum2_to_n (n - 1)) % MOD + MOD) % MOD;
}
 
inline long long col_sum (long long c, long long n)
{
    if (c % 2 == 0)
    {
        long long start = (c + 1) * (c + 1) - n + 1;
        pair <long long, long long> p = loc (start);
        return inc_sum (start, (R - p.first + 1) * (C - p.second + 1) % MOD, 1, C - p.second + 1, n);
    }
    else
    {
        long long start = c * c + 1;
        pair <long long, long long> p = loc (start);
        return inc_sum (start, (R - p.first + 1) * (C - p.second + 1) % MOD, 1, -(C - p.second + 1), n);
    }
}
 
inline long long row_sum (long long r, long long n)
{
    if (r % 2 == 0)
    {
        long long start = r * r + 1;
        pair <long long, long long> p = loc (start);
        return inc_sum (start, (R - p.first + 1) * (C - p.second + 1) % MOD, 1, -(R - p.first + 1), n);
    }
    else
    {
        long long start = (r + 1) * (r + 1) - n + 1;
        pair <long long, long long> p = loc (start);
        return inc_sum (start, (R - p.first + 1) * (C - p.second + 1) % MOD, 1, R - p.first + 1, n);
    }
}
 
struct MegaSum
{
    int calculate (long long N)
    {
        R = loc (N).first; C = loc (N).second;
        long long S = min (R, C), total = 0;
 
        for (long long i = 0; i <= S; i++)
            total = (total + row_sum (i, i) + col_sum (i, i + 1)) % MOD;
 
        if (R < C)
        {
            for (long long i = R + 1; i <= C; i++)
                total = (total + col_sum (i, R + 1)) % MOD;
        }
        else
        {
            for (long long i = C + 1; i <= R; i++)
                total = (total + row_sum (i, C + 1)) % MOD;
        }
 
        return (total % MOD + MOD) % MOD;
    }
};
 
 
 
// Powered by FileEdit
// Powered by moj 4.11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/