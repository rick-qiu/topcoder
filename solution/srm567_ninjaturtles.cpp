/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12376
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

class NinjaTurtles {
public:
    int countOpponents(int P, int K);
};

int NinjaTurtles::countOpponents(int P, int K) {
    int ret;
    return ret;
}


int test0() {
    int P = 5;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int P = 1;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int P = 13;
    int K = 6;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int P = 13;
    int K = 17;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int P = 122;
    int K = 21;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 258;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int P = 1000000;
    int K = 100;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int P = 1000000;
    int K = 99;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2750007;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int P = 1000000;
    int K = 98;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2747667;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int P = 999999;
    int K = 100;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2752299;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int P = 1000000;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 923079;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int P = 112;
    int K = 8;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int P = 113;
    int K = 8;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int P = 114;
    int K = 8;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 162;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int P = 1;
    int K = 100;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int P = 666;
    int K = 66;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1764;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int P = 1234;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int P = 12345;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11396;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int P = 8462;
    int K = 26;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18861;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int P = 983325;
    int K = 59;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2559538;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int P = 93135;
    int K = 100;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 256338;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int P = 69993;
    int K = 22;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 149022;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int P = 69994;
    int K = 22;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 149025;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int P = 69994;
    int K = 11;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 115491;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int P = 903;
    int K = 8;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1278;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int P = 903;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int P = 905;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 836;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int P = 20000;
    int K = 6;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24000;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int P = 20005;
    int K = 6;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24006;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int P = 555555;
    int K = 55;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1432296;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int P = 52951;
    int K = 92;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 144705;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int P = 52951;
    int K = 96;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 145245;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int P = 52952;
    int K = 96;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int P = 909090;
    int K = 90;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2479338;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int P = 909090;
    int K = 95;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2491263;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int P = 909090;
    int K = 100;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2502090;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int P = 44;
    int K = 11;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int P = 44;
    int K = 21;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int P = 4400;
    int K = 5;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4715;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int P = 3912;
    int K = 79;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10539;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int P = 100000;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 92308;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int P = 100000;
    int K = 5;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int P = 1000000;
    int K = 51;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2550000;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int P = 1000000;
    int K = 7;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1312500;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int P = 602408;
    int K = 7;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int P = 602408;
    int K = 9;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 903615;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int P = 293852;
    int K = 40;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int P = 293852;
    int K = 41;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 722877;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int P = 512000;
    int K = 32;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1198833;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int P = 709222;
    int K = 88;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1930260;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int P = 512512;
    int K = 64;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1347978;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int P = 80000;
    int K = 67;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int P = 82000;
    int K = 67;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 216876;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int P = 82222;
    int K = 83;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 222537;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int P = 400000;
    int K = 6;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 480000;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int P = 400000;
    int K = 5;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 428574;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int P = 400001;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 369232;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int P = 659554;
    int K = 100;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1815294;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int P = 878342;
    int K = 36;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2108022;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int P = 65281;
    int K = 59;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 169923;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int P = 2512;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int P = 4;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int P = 13;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int P = 1355;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int P = 2358;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2178;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int P = 999999;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 923076;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int P = 999997;
    int K = 41;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int P = 999997;
    int K = 42;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2470584;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int P = 605553;
    int K = 100;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1666665;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int P = 763000;
    int K = 100;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2100000;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int P = 726666;
    int K = 100;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int P = 10000;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int P = 999999;
    int K = 99;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2750004;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int P = 100;
    int K = 50;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 255;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int P = 1000000;
    int K = 25;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2205885;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int P = 2;
    int K = 8;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int P = 790000;
    int K = 70;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2100000;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int P = 1000000;
    int K = 21;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2100000;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int P = 1000000;
    int K = 50;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2542377;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int P = 399666;
    int K = 100;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1100000;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int P = 460000;
    int K = 30;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1061544;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int P = 999875;
    int K = 35;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2386068;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int P = 676666;
    int K = 100;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1862391;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int P = 1000000;
    int K = 14;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int P = 1000000;
    int K = 95;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2740386;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int P = 1000000;
    int K = 6;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1200000;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int P = 1000000;
    int K = 11;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1650000;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int P = 999920;
    int K = 100;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2752080;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int P = 696666;
    int K = 10;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1100000;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int P = 2;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int P = 1000000;
    int K = 23;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2156250;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int P = 1000000;
    int K = 15;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1875000;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int P = 1000000;
    int K = 40;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2448984;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int P = 437;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 404;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int P = 1000000;
    int K = 86;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int P = 833335;
    int K = 6;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1000002;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int P = 1000000;
    int K = 12;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1714287;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int P = 1000000;
    int K = 91;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2730000;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int P = 1000000;
    int K = 20;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2068968;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int P = 833355;
    int K = 6;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1000026;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int P = 119166;
    int K = 4;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 110000;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int P = 14;
    int K = 5;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int P = 686667;
    int K = 100;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1889910;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int P = 300000;
    int K = 100;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 825696;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int P = 999990;
    int K = 100;
    NinjaTurtles* pObj = new NinjaTurtles();
    clock_t start = clock();
    int result = pObj->countOpponents(P, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2752272;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23080041&rd=15487&pm=12376
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
 
class NinjaTurtles {
public:
  int countOpponents(int P, int K) {
    for(int i=0;i<=4000000;i++){
      if(floor(i/3)+3*(floor(i/K))==P)return i;
    }
    return -1;
  }
};
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/