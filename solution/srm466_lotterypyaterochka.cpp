/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10863
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

class LotteryPyaterochka {
public:
    double chanceToWin(int N);
};

double LotteryPyaterochka::chanceToWin(int N) {
    double ret;
    return ret;
}


int test0() {
    int N = 1;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
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
    int N = 2;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 3;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5004995004995004;
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
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13161551092585574;
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
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 4.7998099843704644E-4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 99;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 4.897261613130418E-4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 57;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0014771963055972357;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 70;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 9.79512362113221E-4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 4;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2905056759545923;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 5;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18831168831168824;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 7;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09705451095394169;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 8;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07447933763723237;
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
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05893879234775434;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 10;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04779210481602446;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 11;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.039528728762913;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 12;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03323475257401247;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 13;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.028331255823323506;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 14;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.024437218696103304;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 15;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02129362625214449;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 16;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0187194550952046;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 17;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.016585117084676294;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 18;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014795877828954968;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 19;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.013281189283099104;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 20;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.011987644167320163;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 21;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01087421266837838;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 22;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009908954314662415;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 23;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00906670527071086;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 24;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00832742394264724;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 25;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007674989188542127;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 26;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007096314995509283;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 27;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006580689867749947;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 28;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006119278042572383;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 29;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0057047387733632875;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 30;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005330932792549046;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 31;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004992693867686179;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 32;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004685649464225554;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 33;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0044060788129125054;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 34;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004150799725544582;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 35;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003917077692678836;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 36;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003702552388144598;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 37;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0035051778730478284;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 38;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0033231736570587546;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 39;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0031549844212801314;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 40;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002999246694153426;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 41;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0028547611418308044;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 42;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002720469417499033;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 43;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0025954347322278584;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 44;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0024788254790646673;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 45;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0023699013741218964;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 46;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0022680016820733223;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 47;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0021725351753470743;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 48;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002082971541314377;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 49;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0019988340036656686;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 50;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0019196929657938045;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 51;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.001845160517557543;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 52;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.001774885673967205;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 53;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0017085502364297962;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 54;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0016458651852358154;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 55;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0015865675267664305;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 56;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0015304175310796172;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 58;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0014267036589595454;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 59;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0013787562160567951;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 60;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0013331857510439364;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 61;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0012898377099990143;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 62;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0012485698989641828;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 63;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0012092513165447788;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 64;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0011717611131459912;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 65;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0011359876613876154;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 66;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0011018277243285389;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 67;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010691857099140811;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 68;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010379730015809387;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 69;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010081073562572295;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 71;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 9.521169493801175E-4;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 72;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 9.258549483834685E-4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 73;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 9.006646896542007E-4;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 74;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 8.764886416005803E-4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 75;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 8.532730817626101E-4;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 76;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 8.309677981382295E-4;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 77;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 8.095258174782204E-4;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 78;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 7.889031578023434E-4;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 79;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 7.69058602700162E-4;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 80;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 7.499534952523081E-4;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 81;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 7.315515496468652E-4;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 82;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 7.138186787755071E-4;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 83;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 6.967228362788474E-4;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 84;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 6.802338716734346E-4;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 85;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 6.643233973367226E-4;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 86;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 6.489646662536306E-4;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 87;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 6.341324595410416E-4;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 88;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 6.198029828665948E-4;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 89;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 6.059537709669546E-4;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 90;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 5.925635995497606E-4;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 91;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 5.796124039338543E-4;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 92;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 5.670812038451472E-4;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 93;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 5.549520338415766E-4;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 94;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 5.432078788907151E-4;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 95;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 5.318326146684995E-4;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 96;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 5.208109521877798E-4;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 97;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 5.10128386401491E-4;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 98;
    LotteryPyaterochka* pObj = new LotteryPyaterochka();
    clock_t start = clock();
    double result = pObj->chanceToWin(N);
    clock_t end = clock();
    delete pObj;
    double expected = 4.997711484577105E-4;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=14150&pm=10863
********************************************************************************
// unfortunately I have no ideas for a good line here
 
#include <algorithm>
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
#define of
#line 3 "LotteryPyaterochka.cpp"
 
class LotteryPyaterochka {
  public:
  double chanceToWin(int N) {
    // !FDI
    // exactly 3
    ll u = N;
    ll U = 5*N;
    
    ld s = 0;
    
    // all 5
    s += N;
    // 4 of 5
    s += N * 5 * (U-5);
    // 3 of 5
    s += N * 5 * (U-5) * (U-6);
    
    s *= 120;
    s /= U * (U-1) * (U-2) * (U-3) * (U-4);
    
    return s;
    }
  };
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/