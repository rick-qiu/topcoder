/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11135
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

class FractionInDifferentBases {
public:
    long getNumberOfGoodBases(long P, long Q, long A, long B);
};

long FractionInDifferentBases::getNumberOfGoodBases(long P, long Q, long A, long B) {
    long ret;
    return ret;
}


int test0() {
    long P = 1;
    long Q = 2;
    long A = 10;
    long B = 10;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long P = 1;
    long Q = 9;
    long A = 9;
    long B = 10;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long P = 5;
    long Q = 6;
    long A = 2;
    long B = 10;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long P = 2662;
    long Q = 540;
    long A = 2;
    long B = 662;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 639;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long P = 650720;
    long Q = 7032600;
    long A = 2012;
    long B = 2012540;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2010495;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long P = 1;
    long Q = 25;
    long A = 2;
    long B = 25;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long P = 362136128913;
    long Q = 9478364712;
    long A = 44728;
    long B = 7428164817412;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 7428164763281;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long P = 99999999999;
    long Q = 99999999977;
    long A = 2;
    long B = 1000000000000000000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999989999999;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long P = 99999999999;
    long Q = 99999999977;
    long A = 123456789;
    long B = 999999999769999999;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999636543212;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long P = 99999999999;
    long Q = 99999999977;
    long A = 123456789;
    long B = 999999999770000000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999636543212;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long P = 99999999999;
    long Q = 99999999977;
    long A = 123456789;
    long B = 999999999770000001;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999636543213;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long P = 99999999977;
    long Q = 99999999977;
    long A = 2;
    long B = 1000000000000000000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long P = 11;
    long Q = 958961203200;
    long A = 2;
    long B = 10000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 9999;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long P = 11;
    long Q = 958961203200;
    long A = 2;
    long B = 999999999999999999;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 999966699966699965;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long P = 3;
    long Q = 68719476736;
    long A = 111111111111111111;
    long B = 888888888888888888;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 388888888888888889;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long P = 847288609443;
    long Q = 549755813888;
    long A = 111111111111111111;
    long B = 888888888888888888;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 388888888888888889;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long P = 21;
    long Q = 2;
    long A = 111111111111111111;
    long B = 888888888888888888;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 388888888888888889;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long P = 99;
    long Q = 4;
    long A = 111111111111111111;
    long B = 888888888888888887;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 388888888888888889;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long P = 111;
    long Q = 256;
    long A = 111111111111111111;
    long B = 888888888888888889;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 388888888888888890;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long P = 49;
    long Q = 14;
    long A = 111111111111111110;
    long B = 888888888888888888;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 388888888888888889;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long P = 0;
    long Q = 1;
    long A = 2;
    long B = 1000000000000000000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long P = 0;
    long Q = 1;
    long A = 2;
    long B = 2;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long P = 0;
    long Q = 1;
    long A = 327164781268912469;
    long B = 839217712678612863;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long P = 0;
    long Q = 1000000000000;
    long A = 3;
    long B = 999999999999999997;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long P = 0;
    long Q = 1000000000000;
    long A = 540;
    long B = 540;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long P = 0;
    long Q = 999999999999;
    long A = 129378689678269898;
    long B = 919737816487154711;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long P = 6;
    long Q = 7;
    long A = 2;
    long B = 4;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long P = 45;
    long Q = 41;
    long A = 28;
    long B = 94;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 65;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long P = 59;
    long Q = 519;
    long A = 928;
    long B = 963;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long P = 5813;
    long Q = 2489;
    long A = 1526;
    long B = 6983;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 5456;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long P = 39874;
    long Q = 83293;
    long A = 56962;
    long B = 86419;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 29457;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long P = 261806;
    long Q = 53685;
    long A = 315327;
    long B = 624996;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 309653;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long P = 1129440;
    long Q = 2544683;
    long A = 8372502;
    long B = 31083654;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 22711144;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long P = 35695472;
    long Q = 21222021;
    long A = 7618641798;
    long B = 8774279486;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1155637634;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long P = 224373828;
    long Q = 776430048;
    long A = 228350397336;
    long B = 810524008713;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 582173575387;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long P = 3625075800;
    long Q = 4082244305;
    long A = 31025053940470;
    long B = 72265575444757;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 41240521453775;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long P = 5838070456;
    long Q = 7388262910;
    long A = 63262651904782;
    long B = 77924970676996;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 14662318768246;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long P = 7308395075;
    long Q = 6181293934;
    long A = 85013659966006;
    long B = 90585807765077;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 5572147798171;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long P = 97063184380;
    long Q = 85711963742;
    long A = 533241116222959;
    long B = 5831724689282439;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 5298483572935846;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long P = 22226482333;
    long Q = 50837177762;
    long A = 4238128539174614;
    long B = 7324343505785954;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 3086214966550633;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long P = 13676721976;
    long Q = 91863265235;
    long A = 7278347179606431;
    long B = 7838151833685873;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 559804654036786;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long P = 616413512692;
    long Q = 344284905720;
    long A = 315148875301650676;
    long B = 332737260009667982;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 17588384707812960;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long P = 229020880549;
    long Q = 719157259627;
    long A = 231971125802989573;
    long B = 250649081162131185;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 18677955359115641;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long P = 62668576016;
    long Q = 841939978131;
    long A = 713891923439452150;
    long B = 943429244996903962;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 229537321486295623;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long P = 717135519791;
    long Q = 8432101591;
    long A = 700042863490303157;
    long B = 873687154201095602;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 173644290690199206;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long P = 999958000441;
    long Q = 999966000289;
    long A = 100663296000000001;
    long B = 908800000000000001;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 808135895849557444;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long P = 999962000357;
    long Q = 999966000289;
    long A = 209203200000000001;
    long B = 826200000000000001;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 616996182992710877;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long P = 999966000289;
    long Q = 999966000289;
    long A = 180143985094819841;
    long B = 809240558043136001;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long P = 314159265358;
    long Q = 979323846264;
    long A = 338327950288419716;
    long B = 939937510582097494;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 601609560286306045;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long P = 111111111111;
    long Q = 1000000000000;
    long A = 99999999999999999;
    long B = 899999999999999999;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 720000000000000001;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long P = 333333333333;
    long Q = 1000000000000;
    long A = 99999999999999999;
    long B = 900000000000000000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 720000000000000001;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long P = 555555555555;
    long Q = 1000000000000;
    long A = 99999999999999999;
    long B = 900000000000000001;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 720000000000000002;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long P = 777777777777;
    long Q = 1000000000000;
    long A = 100000000000000000;
    long B = 899999999999999999;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 720000000000000000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long P = 999999999999;
    long Q = 1000000000000;
    long A = 100000000000000000;
    long B = 900000000000000000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 720000000000000000;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long P = 777777777777;
    long Q = 1000000000000;
    long A = 100000000000000000;
    long B = 900000000000000001;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 720000000000000001;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long P = 555555555555;
    long Q = 1000000000000;
    long A = 100000000000000001;
    long B = 899999999999999999;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 720000000000000000;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long P = 333333333333;
    long Q = 1000000000000;
    long A = 100000000000000001;
    long B = 900000000000000000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 720000000000000000;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long P = 111111111111;
    long Q = 1000000000000;
    long A = 100000000000000001;
    long B = 900000000000000001;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 720000000000000001;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long P = 973821738913;
    long Q = 100;
    long A = 9;
    long B = 999999999999999989;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 899999999999999983;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long P = 912749124767;
    long Q = 1000;
    long A = 9;
    long B = 999999999999999990;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 899999999999999983;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long P = 748129579201;
    long Q = 10000;
    long A = 9;
    long B = 999999999999999991;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 899999999999999984;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long P = 789032859239;
    long Q = 100000;
    long A = 10;
    long B = 999999999999999989;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 899999999999999982;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long P = 923805973283;
    long Q = 1000000;
    long A = 10;
    long B = 999999999999999990;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 899999999999999982;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long P = 589329848177;
    long Q = 10000000;
    long A = 10;
    long B = 999999999999999991;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 899999999999999983;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long P = 948489999389;
    long Q = 100000000;
    long A = 11;
    long B = 999999999999999989;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 899999999999999982;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long P = 567237748239;
    long Q = 1000000000;
    long A = 11;
    long B = 999999999999999990;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 899999999999999982;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long P = 772865832651;
    long Q = 10000000000;
    long A = 11;
    long B = 999999999999999991;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 899999999999999983;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long P = 549755813888;
    long Q = 549755813888;
    long A = 562949953421312;
    long B = 576460752303423488;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long P = 549755813888;
    long Q = 549755813888;
    long A = 9007199254740992;
    long B = 576460752303423488;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long P = 835884417024;
    long Q = 626913312768;
    long A = 839808;
    long B = 701982420492091392;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 467988280327501056;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long P = 940369969152;
    long Q = 660451885056;
    long A = 705277476864;
    long B = 592297667290202112;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 296148481006362624;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long P = 708588000000;
    long Q = 933120000000;
    long A = 6;
    long B = 531441000000000000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 478296899999999995;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long P = 656100000000;
    long Q = 956593800000;
    long A = 7290000000;
    long B = 816293376000000000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 544195579140000000;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long P = 723350250000;
    long Q = 933897762000;
    long A = 588000;
    long B = 544876111954566000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 467036667389124000;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long P = 551353635000;
    long Q = 945177660000;
    long A = 555660;
    long B = 851014335622500000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 709178613018286950;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long P = 738213861000;
    long Q = 994328874000;
    long A = 100;
    long B = 649694486271600000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 639850630418999902;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long P = 724791790800;
    long Q = 781258401000;
    long A = 76865250;
    long B = 799164488433465000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 784634224931934300;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long P = 644787643500;
    long Q = 706611262500;
    long A = 7362272736;
    long B = 782562915027653760;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 777820102164378715;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long P = 956553097500;
    long Q = 955338426900;
    long A = 79204079955000;
    long B = 622493227862906400;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 618061478162091600;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long P = 861997739460;
    long Q = 631503422550;
    long A = 501233692960;
    long B = 557385854878125000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 552076921704961259;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long P = 888550637520;
    long Q = 558955940400;
    long A = 944743800;
    long B = 730260693522360000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 730000350084718656;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long P = 572363011220;
    long Q = 607585350372;
    long A = 654182100;
    long B = 799543631608984080;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 787956042100384560;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long P = 946787353512;
    long Q = 935757172350;
    long A = 6428773300950;
    long B = 653359152745230750;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 651458947960416960;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long P = 907210530576;
    long Q = 556933737360;
    long A = 9604;
    long B = 523096721843295600;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 522992207013746878;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long P = 823861737006;
    long Q = 608941283874;
    long A = 62790;
    long B = 931057383468712500;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 876289302088140904;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long P = 816054253560;
    long Q = 866469685000;
    long A = 63881607625635800;
    long B = 558089922311441520;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 494007824497292209;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long P = 972497045520;
    long Q = 594710156040;
    long A = 72072;
    long B = 602950411333144875;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 582159017838828914;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long P = 84179;
    long Q = 102101;
    long A = 2;
    long B = 1000000000000000000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 999990205776632941;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long P = 3;
    long Q = 12312367;
    long A = 2;
    long B = 1000000000000000000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 999999918780848556;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long P = 1;
    long Q = 3;
    long A = 2;
    long B = 1000000000000000000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 666666666666666666;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long P = 103006704005;
    long Q = 103046704706;
    long A = 10000350600040006;
    long B = 100020007000500401;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 90019656399586815;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long P = 900700074773;
    long Q = 800700074773;
    long A = 2;
    long B = 999999999999;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999997;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long P = 1;
    long Q = 12;
    long A = 99999999999999;
    long B = 99999999999999999;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 83250000000000001;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long P = 1234567890;
    long Q = 81480755400;
    long A = 2;
    long B = 100000000000000000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 99999999926362980;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long P = 1;
    long Q = 25;
    long A = 5;
    long B = 25;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long P = 1000000000000;
    long Q = 99999999999;
    long A = 2;
    long B = 1000000000000000000;
    FractionInDifferentBases* pObj = new FractionInDifferentBases();
    clock_t start = clock();
    long result = pObj->getNumberOfGoodBases(P, Q, A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999969999999;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23021089&rd=14732&pm=11135
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
class FractionInDifferentBases {
public:
  long long getNumberOfGoodBases(long long, long long, long long, long long);
};
long long gcd(long long x,long long y)
{
  if(y==0)return x;
  return gcd(y,x%y);
}
long long FractionInDifferentBases::getNumberOfGoodBases(long long P, long long Q, long long A, long long B) {
  long long d=gcd(P,Q),i,now_=1;
  P/=d,Q/=d;
  if(P==0||Q==1)return 0;
  for(i=2;i*i<=Q;i++){
    if(Q%i==0){
      while(Q%i==0){
        Q/=i;
      }
      now_*=i;
    }
  }
  if(Q>1)now_*=Q;
  long long res=B/now_-(A-1)/now_;
  return B-A+1-res;
}

********************************************************************************
*******************************************************************************/