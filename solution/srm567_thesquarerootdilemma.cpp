/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12377
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

class TheSquareRootDilemma {
public:
    int countPairs(int N, int M);
};

int TheSquareRootDilemma::countPairs(int N, int M) {
    int ret;
    return ret;
}


int test0() {
    int N = 2;
    int M = 2;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 10;
    int M = 1;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
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
    int N = 3;
    int M = 8;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 100;
    int M = 100;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 310;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 77777;
    int M = 77777;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 543345;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 77777;
    int M = 72277;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 519638;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 1;
    int M = 1;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
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
    int N = 24;
    int M = 1;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 25;
    int M = 1;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 77777;
    int M = 1;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 278;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 24;
    int M = 16236;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1506;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 8824;
    int M = 56236;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 130313;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 68824;
    int M = 56232;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 421216;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 77777;
    int M = 24512;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 278870;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 25891;
    int M = 5356;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 65001;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 2929;
    int M = 59599;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 69953;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 1000;
    int M = 1000;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 4344;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 10000;
    int M = 10000;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 57296;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 10000;
    int M = 66869;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 153175;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 58858;
    int M = 281;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 15860;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 22;
    int M = 505;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 242;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 50005;
    int M = 77777;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 418501;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 50005;
    int M = 7777;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 113985;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 50005;
    int M = 7;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1008;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 1314;
    int M = 1211;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 5594;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 5925;
    int M = 11;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 521;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 1113;
    int M = 59999;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 38664;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 60000;
    int M = 10000;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 144913;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 70000;
    int M = 66969;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 471387;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 59414;
    int M = 67002;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 429403;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 75000;
    int M = 77000;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 528692;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 75000;
    int M = 49993;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 410419;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 49945;
    int M = 74935;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 410071;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 77200;
    int M = 77711;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 540417;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 77200;
    int M = 51515;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 423769;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 51295;
    int M = 76123;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 419928;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 12375;
    int M = 748;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 13542;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 23895;
    int M = 7895;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 78035;
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
    int M = 77777;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 475;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 77777;
    int M = 3;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 636;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 50000;
    int M = 6;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 924;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 50001;
    int M = 12700;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 152516;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 77577;
    int M = 77577;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 541493;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 76765;
    int M = 77777;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 538968;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 77777;
    int M = 44444;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 390889;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 77776;
    int M = 77776;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 543344;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 77771;
    int M = 77771;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 543323;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 7777;
    int M = 7777;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 43513;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 77777;
    int M = 70000;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 509807;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 76513;
    int M = 74797;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 526033;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 77773;
    int M = 77775;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 543331;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 33333;
    int M = 77777;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 331955;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 65536;
    int M = 65536;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 451096;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 70000;
    int M = 70000;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 484684;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 77767;
    int M = 77767;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 543313;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 77763;
    int M = 77764;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 543308;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 50000;
    int M = 50000;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 336016;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 77657;
    int M = 77777;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 542785;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 77555;
    int M = 65666;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 489869;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 999;
    int M = 666;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 3313;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 77776;
    int M = 77777;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 543344;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 77267;
    int M = 75557;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 531659;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 77777;
    int M = 77775;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 543340;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 77777;
    int M = 77776;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 543344;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 101;
    int M = 201;
    TheSquareRootDilemma* pObj = new TheSquareRootDilemma();
    clock_t start = clock();
    int result = pObj->countPairs(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 440;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22907549&rd=15487&pm=12377
********************************************************************************
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
 
class TheSquareRootDilemma {
public:
  int countPairs(int, int);
};
 
int nleft[101000];
int nright[101000];
 
int TheSquareRootDilemma::countPairs(int N, int M) {
  for (int i = 0; i < 101000; i++)
    nleft[i] = nright[i] = 0;
  
  for (int i = 1; i <= N; i++)
  {
    int temp = i;
    for (int j = 2; j * j <= i; j++)
      while (temp % (j * j) == 0)
        temp /= j * j;
    nleft[temp]++;
  }
  for (int i = 1; i <= M; i++)
  {
    int temp = i;
    for (int j = 2; j * j <= i; j++)
      while (temp % (j * j) == 0)
        temp /= j * j;
    nright[temp]++;
  }
  
  int ans = 0;
  for (int i = 1; i <= 100000; i++)
    ans += nleft[i] * nright[i];
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/