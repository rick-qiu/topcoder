/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6685
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

class SimplifiedDarts {
public:
    double tryToWin(int W, int N, int P1, int P2);
};

double SimplifiedDarts::tryToWin(int W, int N, int P1, int P2) {
    double ret;
    return ret;
}


int test0() {
    int W = 5;
    int N = 2;
    int P1 = 50;
    int P2 = 25;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 12.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int W = 6;
    int N = 3;
    int P1 = 90;
    int P2 = 20;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 73.30000000000001;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int W = 30;
    int N = 384;
    int P1 = 3;
    int P2 = 1;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 18.344490479047746;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int W = 999;
    int N = 333;
    int P1 = 0;
    int P2 = 100;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int W = 1000;
    int N = 333;
    int P1 = 0;
    int P2 = 100;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
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
    int W = 532;
    int N = 479;
    int P1 = 72;
    int P2 = 7;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 99.99999999999952;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int W = 803;
    int N = 771;
    int P1 = 26;
    int P2 = 75;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int W = 341;
    int N = 332;
    int P1 = 1;
    int P2 = 62;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int W = 978;
    int N = 915;
    int P1 = 62;
    int P2 = 22;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 99.99999447808712;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int W = 694;
    int N = 122;
    int P1 = 23;
    int P2 = 1;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int W = 246;
    int N = 3;
    int P1 = 19;
    int P2 = 51;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int W = 632;
    int N = 567;
    int P1 = 83;
    int P2 = 17;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int W = 826;
    int N = 80;
    int P1 = 62;
    int P2 = 24;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int W = 505;
    int N = 774;
    int P1 = 21;
    int P2 = 8;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.235029605705033E-12;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int W = 307;
    int N = 851;
    int P1 = 42;
    int P2 = 82;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int W = 29;
    int N = 979;
    int P1 = 63;
    int P2 = 60;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int W = 492;
    int N = 731;
    int P1 = 18;
    int P2 = 45;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int W = 294;
    int N = 17;
    int P1 = 12;
    int P2 = 86;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int W = 530;
    int N = 724;
    int P1 = 84;
    int P2 = 2;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int W = 291;
    int N = 254;
    int P1 = 71;
    int P2 = 55;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 99.9999980074316;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int W = 208;
    int N = 456;
    int P1 = 1;
    int P2 = 60;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int W = 782;
    int N = 236;
    int P1 = 60;
    int P2 = 24;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
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
    int W = 818;
    int N = 547;
    int P1 = 6;
    int P2 = 25;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 5.963226361492138E-34;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int W = 738;
    int N = 288;
    int P1 = 63;
    int P2 = 51;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 8.23578546675441E-33;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int W = 197;
    int N = 275;
    int P1 = 77;
    int P2 = 23;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int W = 845;
    int N = 958;
    int P1 = 9;
    int P2 = 27;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9180599012723905;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int W = 57;
    int N = 163;
    int P1 = 14;
    int P2 = 24;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 99.99772493742063;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int W = 410;
    int N = 730;
    int P1 = 26;
    int P2 = 3;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 10.806578868329625;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int W = 762;
    int N = 673;
    int P1 = 5;
    int P2 = 30;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010472478621256177;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int W = 485;
    int N = 687;
    int P1 = 30;
    int P2 = 8;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14399494904573085;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int W = 453;
    int N = 584;
    int P1 = 24;
    int P2 = 29;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 95.84876025867963;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int W = 839;
    int N = 599;
    int P1 = 62;
    int P2 = 18;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0021433240735887612;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int W = 723;
    int N = 394;
    int P1 = 1;
    int P2 = 61;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 49.492091127129875;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int W = 428;
    int N = 440;
    int P1 = 18;
    int P2 = 42;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 99.99826765735607;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int W = 659;
    int N = 337;
    int P1 = 60;
    int P2 = 70;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 97.31657990578955;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int W = 204;
    int N = 282;
    int P1 = 31;
    int P2 = 26;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 78.40843687510235;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int W = 474;
    int N = 377;
    int P1 = 29;
    int P2 = 48;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 99.23335949272146;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int W = 62;
    int N = 26;
    int P1 = 31;
    int P2 = 75;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 33.714411458790885;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int W = 838;
    int N = 436;
    int P1 = 93;
    int P2 = 22;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.47220630429819865;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int W = 251;
    int N = 512;
    int P1 = 21;
    int P2 = 3;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7434051431279816;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int W = 228;
    int N = 182;
    int P1 = 65;
    int P2 = 16;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 77.42320991618868;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int W = 359;
    int N = 227;
    int P1 = 55;
    int P2 = 64;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 99.97734105092933;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int W = 83;
    int N = 797;
    int P1 = 6;
    int P2 = 2;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 82.97157145157963;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int W = 810;
    int N = 467;
    int P1 = 24;
    int P2 = 66;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 99.99021295368615;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int W = 454;
    int N = 350;
    int P1 = 47;
    int P2 = 45;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 74.3116072263093;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int W = 842;
    int N = 434;
    int P1 = 68;
    int P2 = 61;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 6.092580947939844;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int W = 952;
    int N = 888;
    int P1 = 48;
    int P2 = 27;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.050900483523618464;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int W = 835;
    int N = 444;
    int P1 = 54;
    int P2 = 60;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 12.030085470170029;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int W = 780;
    int N = 464;
    int P1 = 67;
    int P2 = 64;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 99.9826678126776;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int W = 713;
    int N = 796;
    int P1 = 41;
    int P2 = 14;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5709819597507901;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int W = 830;
    int N = 310;
    int P1 = 96;
    int P2 = 86;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 5.043058938335629;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int W = 711;
    int N = 439;
    int P1 = 81;
    int P2 = 63;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 99.99570215526509;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int W = 817;
    int N = 363;
    int P1 = 33;
    int P2 = 70;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6303222276235743;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int W = 473;
    int N = 313;
    int P1 = 51;
    int P2 = 48;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 20.748064663188952;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int W = 167;
    int N = 125;
    int P1 = 51;
    int P2 = 23;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.026493002744617068;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int W = 107;
    int N = 147;
    int P1 = 24;
    int P2 = 20;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 11.158850702419116;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int W = 408;
    int N = 491;
    int P1 = 36;
    int P2 = 18;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.649990007686892;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int W = 643;
    int N = 917;
    int P1 = 29;
    int P2 = 22;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 16.384821787152344;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int W = 523;
    int N = 691;
    int P1 = 11;
    int P2 = 28;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 94.7236522554947;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int W = 385;
    int N = 424;
    int P1 = 51;
    int P2 = 0;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 98.94685274798275;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int W = 604;
    int N = 351;
    int P1 = 16;
    int P2 = 57;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 43.972050199458536;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int W = 49;
    int N = 79;
    int P1 = 41;
    int P2 = 13;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 96.74635044609903;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int W = 183;
    int N = 144;
    int P1 = 8;
    int P2 = 45;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 76.3843752871948;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int W = 233;
    int N = 82;
    int P1 = 64;
    int P2 = 83;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09248042950304801;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int W = 217;
    int N = 129;
    int P1 = 81;
    int P2 = 47;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 25.79414635080777;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int W = 1000;
    int N = 653;
    int P1 = 53;
    int P2 = 89;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int W = 191;
    int N = 131;
    int P1 = 35;
    int P2 = 48;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 45.63977244862386;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int W = 1000;
    int N = 407;
    int P1 = 31;
    int P2 = 99;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int W = 237;
    int N = 327;
    int P1 = 8;
    int P2 = 27;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 88.963246472822;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int W = 505;
    int N = 390;
    int P1 = 61;
    int P2 = 15;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 6.6497277648268085;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int W = 268;
    int N = 443;
    int P1 = 28;
    int P2 = 3;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 15.841662536644327;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int W = 860;
    int N = 522;
    int P1 = 48;
    int P2 = 54;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 34.28525732079538;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int W = 754;
    int N = 456;
    int P1 = 37;
    int P2 = 56;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 64.27179603173326;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int W = 501;
    int N = 516;
    int P1 = 34;
    int P2 = 31;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 26.56090640028942;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int W = 241;
    int N = 239;
    int P1 = 10;
    int P2 = 33;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 40.84383916005378;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int W = 1000;
    int N = 570;
    int P1 = 31;
    int P2 = 63;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 98.63669433956981;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int W = 296;
    int N = 102;
    int P1 = 10;
    int P2 = 87;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.047709075792224345;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int W = 810;
    int N = 510;
    int P1 = 31;
    int P2 = 52;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 35.176476623747675;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int W = 1000;
    int N = 595;
    int P1 = 69;
    int P2 = 59;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 93.13187049539495;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int W = 336;
    int N = 241;
    int P1 = 76;
    int P2 = 19;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 98.96621703634301;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int W = 1;
    int N = 1;
    int P1 = 100;
    int P2 = 100;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int W = 1000;
    int N = 1000;
    int P1 = 50;
    int P2 = 25;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 51.47945169449058;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int W = 1;
    int N = 5;
    int P1 = 50;
    int P2 = 50;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 96.875;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int W = 30;
    int N = 384;
    int P1 = 3;
    int P2 = 1;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 18.344490479047746;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int W = 1000;
    int N = 824;
    int P1 = 32;
    int P2 = 28;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 7.985531368406269E-13;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int W = 53;
    int N = 55;
    int P1 = 3;
    int P2 = 2;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.73920017493805E-15;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int W = 274;
    int N = 403;
    int P1 = 11;
    int P2 = 65;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int W = 564;
    int N = 876;
    int P1 = 42;
    int P2 = 91;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int W = 1000;
    int N = 500;
    int P1 = 40;
    int P2 = 30;
    SimplifiedDarts* pObj = new SimplifiedDarts();
    clock_t start = clock();
    double result = pObj->tryToWin(W, N, P1, P2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.409646828907625E-62;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=15151715&rd=9998&pm=6685
********************************************************************************
#include <cstdio> 
#include <cmath> 
#include <cstring> 
#include <cstdlib> 
#include <cctype> 
#include <algorithm> 
#include <map> 
#include <string> 
#include <vector> 
#include <iostream> 
#include <sstream> 
#include <set> 
#include <queue> 
#include <ext/hash_map> 
using __gnu_cxx::hash_map; 
#include <list> 
#include <stack> 
 
using namespace std; 
 
 
#define max(a,b) ((a)>(b)?(a):(b)) 
#define db double 
#define ch char 
#define re return 
#define ed end() 
#define red rend() 
#define mm(a,b) memset(a,b,sizeof(a)) 
#define ss substr 
 
 
 
db P1,P2; 
db dp[1005][1005]; 
ch ok[1005][1005]; 
 
class SimplifiedDarts 
{ 
  public: 
 
  db rec(int p,int t) 
  { 
    if(t<=0) re 1.; if(!p) re 0.;     
    if(ok[p][t]) re dp[p][t]; ok[p][t]=1;     
    re dp[p][t]=max(P1*rec(p-1,t-2)+(1.-P1)*rec(p-1,t),P2*rec(p-1,t-3)+(1.-P2)*rec(p-1,t)); 
  } 
 
  double tryToWin(int W, int N, int p1, int p2) 
  { 
    P1=.01*p1; P2=.01*p2; mm(ok,0);     
    return 100.*rec(N,W); 
  } 
 
};

********************************************************************************
*******************************************************************************/