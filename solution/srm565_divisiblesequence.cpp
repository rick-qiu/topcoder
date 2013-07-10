/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12274
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

class DivisibleSequence {
public:
    int count(int N, int H);
};

int DivisibleSequence::count(int N, int H) {
    int ret;
    return ret;
}


int test0() {
    int N = 5;
    int H = 3;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 6;
    int H = 3;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 10;
    int H = 2;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 1;
    int H = 10000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 30;
    int H = 4;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 25883;
    int H = 100000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 991000009;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 647407371;
    int H = 1;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 110174988;
    int H = 1;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 4491883;
    int H = 1;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 1000000000;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 128;
    int H = 5;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 330;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 1024;
    int H = 6;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 3003;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 8192;
    int H = 9;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 203490;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 65536;
    int H = 10;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 2042975;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 524288;
    int H = 5;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 8855;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 4194304;
    int H = 3;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 276;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 33554432;
    int H = 5;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 23751;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 268435456;
    int H = 10;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 124403620;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 607227212;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 2916;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 570657782;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 999999280;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 31720467;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 616277956;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 999973765;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 392090393;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 999999280;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 947786970;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 999940960;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 889463010;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 6561;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 656296092;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 999988345;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 724618275;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 999973765;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 74424508;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 2916;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 223092870;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 612579520;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 892371480;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 384075472;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 528377850;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 392922434;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 618072047;
    int H = 241039583;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 241039583;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 417666895;
    int H = 31398275;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 664102966;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 913560619;
    int H = 607018036;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 607018036;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 575330186;
    int H = 810777402;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 677629703;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 645533998;
    int H = 833377033;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 881227641;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 358206437;
    int H = 268814082;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 268814082;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 508497218;
    int H = 186401907;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 620525619;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 736093901;
    int H = 617502990;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 617502990;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 280465279;
    int H = 469507421;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 469507421;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 871828149;
    int H = 829804015;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 112947952;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 847424561;
    int H = 28145410;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 28145410;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 861162853;
    int H = 898614095;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 898614095;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 388916998;
    int H = 598567553;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 279859801;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 891660971;
    int H = 260561351;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 260561351;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 993849463;
    int H = 812677863;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 812677863;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 262777433;
    int H = 770756043;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 770756043;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 779145303;
    int H = 153589475;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 618468091;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 939819766;
    int H = 183286708;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 27131111;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 536091299;
    int H = 58740986;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 58740986;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 766216357;
    int H = 596876469;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 596876469;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 205713660;
    int H = 645989977;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 738543667;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 592849636;
    int H = 139499967;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 69856908;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 934135810;
    int H = 442473862;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 975777879;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 523164325;
    int H = 581634158;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 327411676;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 924276981;
    int H = 101871547;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 343340284;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 218476551;
    int H = 480776573;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 65309330;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 87762983;
    int H = 413898968;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 833463261;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 607627509;
    int H = 309433553;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 58887685;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 879541585;
    int H = 838282600;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 344427726;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 461163917;
    int H = 371029704;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 11360256;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 134038397;
    int H = 297471730;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 297471730;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 907279181;
    int H = 220315684;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 876856448;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 389766571;
    int H = 698901314;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 698901314;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 199468152;
    int H = 900927383;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 880289570;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 921536961;
    int H = 212836495;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 863869231;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 109827511;
    int H = 528568733;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 990761171;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 860548627;
    int H = 750775782;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 258823754;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 811191662;
    int H = 620361885;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 271676500;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 850021656;
    int H = 664585135;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 937075534;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 6801226;
    int H = 99228110;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 725556147;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 875035561;
    int H = 226034598;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 629615730;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 959202841;
    int H = 572907596;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 586699411;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 803665801;
    int H = 866909724;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 834436871;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 56806369;
    int H = 871371041;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 565603683;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 49378729;
    int H = 379535140;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 788966230;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 536870912;
    int H = 99999963;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 916296978;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 536870912;
    int H = 999999975;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 999721753;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 536870912;
    int H = 999999980;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000008;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 536870912;
    int H = 999999981;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 536870912;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 995425200;
    int H = 999999976;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 301366032;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 931170240;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 607077575;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 999999998;
    int H = 999999998;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 999998678;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 123456789;
    int H = 987654321;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 464723823;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 100000000;
    int H = 100000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 136624515;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 268435456;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 12345678;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 999973765;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 999999978;
    int H = 999999987;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 234256;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 10000;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 15876;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 999999999;
    int H = 888888887;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 870111041;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 999999613;
    int H = 999999613;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 999999613;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 8;
    int H = 999999999;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 999999889;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 73513440;
    int H = 1000000000;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 375025393;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 999999999;
    int H = 999999999;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 21000;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 536870912;
    int H = 999999999;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 60;
    int H = 3;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 600000000;
    int H = 28;
    DivisibleSequence* pObj = new DivisibleSequence();
    clock_t start = clock();
    int result = pObj->count(N, H);
    clock_t end = clock();
    delete pObj;
    int expected = 625742509;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22902429&rd=15187&pm=12274
********************************************************************************
//program DivisibleSequence 
 
#include<iostream> 
#include<cstdio> 
#include<cstdlib> 
#include<cstring> 
#include<algorithm> 
 
using namespace std; 
 
const int Mod=1000000009; 
 
class DivisibleSequence 
{ 
public: 
  int Pow(int A,int B) 
    { 
      if(!B) 
        return 1; 
      int T=Pow((long long)A*A%Mod,B/2); 
      if(B&1) 
        T=(long long)T*A%Mod; 
      return T; 
    } 
  int Solve(int N,int H) 
    { 
      int Ans=1; 
      for(int i=1;i<=N;i++) 
        { 
          Ans=(long long)Ans*(N+H-i)%Mod; 
          Ans=(long long)Ans*Pow(i,Mod-2)%Mod; 
        } 
      return Ans; 
    } 
  int count(int N,int H) 
    { 
      static int X[100]; 
      int M=0; 
      for(int i=2;i*i<=N;i++) 
        if(!(N%i)) 
          { 
            while(!(N%i)) 
              { 
                X[M]++; 
                N/=i; 
              } 
            M++; 
          } 
      if(N>1) 
        X[M++]=1; 
      int Ans=1; 
      for(int i=0;i<M;i++) 
        Ans=(long long)Ans*Solve(X[i],H)%Mod; 
      return Ans; 
    } 
};

********************************************************************************
*******************************************************************************/