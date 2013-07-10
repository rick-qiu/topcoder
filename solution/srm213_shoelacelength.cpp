/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2848
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

class ShoelaceLength {
public:
    double calculate(int startWidth, int endWidth, int spread, int numPairs);
};

double ShoelaceLength::calculate(int startWidth, int endWidth, int spread, int numPairs) {
    double ret;
    return ret;
}


int test0() {
    int startWidth = 2;
    int endWidth = 2;
    int spread = 1;
    int numPairs = 2;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 6.47213595499958;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int startWidth = 10;
    int endWidth = 1;
    int spread = 1;
    int numPairs = 10;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 111.1786186482248;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int startWidth = 1;
    int endWidth = 10;
    int spread = 1;
    int numPairs = 10;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 102.17861864822481;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int startWidth = 1;
    int endWidth = 1;
    int spread = 1;
    int numPairs = 2;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8284271247461903;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int startWidth = 1;
    int endWidth = 99;
    int spread = 19;
    int numPairs = 2;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 107.97663296253066;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int startWidth = 2;
    int endWidth = 98;
    int spread = 25;
    int numPairs = 4;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 346.86770343916925;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int startWidth = 3;
    int endWidth = 97;
    int spread = 29;
    int numPairs = 6;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 600.7501476283504;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int startWidth = 4;
    int endWidth = 96;
    int spread = 31;
    int numPairs = 9;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 978.2049477141356;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int startWidth = 5;
    int endWidth = 95;
    int spread = 32;
    int numPairs = 10;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 1109.727068795039;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int startWidth = 6;
    int endWidth = 94;
    int spread = 33;
    int numPairs = 13;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 1490.9970789116976;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int startWidth = 7;
    int endWidth = 93;
    int spread = 35;
    int numPairs = 18;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 2148.5801399226502;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int startWidth = 8;
    int endWidth = 92;
    int spread = 39;
    int numPairs = 23;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 2885.718652644393;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int startWidth = 9;
    int endWidth = 91;
    int spread = 50;
    int numPairs = 30;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 4232.975184119522;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int startWidth = 10;
    int endWidth = 90;
    int spread = 55;
    int numPairs = 32;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 4746.163504230501;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int startWidth = 11;
    int endWidth = 89;
    int spread = 62;
    int numPairs = 35;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 5562.216792596627;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int startWidth = 12;
    int endWidth = 88;
    int spread = 73;
    int numPairs = 37;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 6517.759007894257;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int startWidth = 13;
    int endWidth = 87;
    int spread = 84;
    int numPairs = 43;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 8369.861553307757;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int startWidth = 15;
    int endWidth = 85;
    int spread = 95;
    int numPairs = 47;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 10028.668418159381;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int startWidth = 19;
    int endWidth = 81;
    int spread = 99;
    int numPairs = 49;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 10776.746614246898;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int startWidth = 25;
    int endWidth = 75;
    int spread = 2;
    int numPairs = 50;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 4929.303537043948;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int startWidth = 29;
    int endWidth = 71;
    int spread = 3;
    int numPairs = 48;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 4738.006277672702;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int startWidth = 31;
    int endWidth = 69;
    int spread = 4;
    int numPairs = 46;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 4546.128377706249;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int startWidth = 32;
    int endWidth = 68;
    int spread = 5;
    int numPairs = 44;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 4354.437390419365;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int startWidth = 33;
    int endWidth = 67;
    int spread = 6;
    int numPairs = 41;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 4062.8616465306095;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int startWidth = 35;
    int endWidth = 65;
    int spread = 7;
    int numPairs = 40;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 3974.20863404904;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int startWidth = 39;
    int endWidth = 61;
    int spread = 8;
    int numPairs = 37;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 3685.5242417004815;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int startWidth = 50;
    int endWidth = 50;
    int spread = 9;
    int numPairs = 32;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 3199.8196773783734;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int startWidth = 55;
    int endWidth = 45;
    int spread = 10;
    int numPairs = 27;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 2706.6542341425043;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int startWidth = 62;
    int endWidth = 38;
    int spread = 11;
    int numPairs = 20;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 2008.283050442426;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int startWidth = 73;
    int endWidth = 27;
    int spread = 12;
    int numPairs = 18;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 1824.8393831065948;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int startWidth = 84;
    int endWidth = 16;
    int spread = 13;
    int numPairs = 15;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 1539.2198034842877;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int startWidth = 95;
    int endWidth = 5;
    int spread = 15;
    int numPairs = 13;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 1368.815085140135;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int startWidth = 99;
    int endWidth = 1;
    int spread = 20;
    int numPairs = 7;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 763.8651799756235;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int startWidth = 10;
    int endWidth = 1;
    int spread = 1;
    int numPairs = 10;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 111.1786186482248;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int startWidth = 1;
    int endWidth = 10;
    int spread = 1;
    int numPairs = 10;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 102.17861864822481;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int startWidth = 1;
    int endWidth = 99;
    int spread = 19;
    int numPairs = 2;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 107.97663296253066;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int startWidth = 2;
    int endWidth = 2;
    int spread = 1;
    int numPairs = 2;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 6.47213595499958;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int startWidth = 97;
    int endWidth = 13;
    int spread = 3;
    int numPairs = 10;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 1088.913580216457;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int startWidth = 1;
    int endWidth = 90;
    int spread = 1;
    int numPairs = 40;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 3551.882378583914;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int startWidth = 15;
    int endWidth = 30;
    int spread = 5;
    int numPairs = 6;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 245.68293688965883;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int startWidth = 10;
    int endWidth = 5;
    int spread = 2;
    int numPairs = 4;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 56.62213195631012;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int startWidth = 1;
    int endWidth = 10;
    int spread = 5;
    int numPairs = 2;
    ShoelaceLength* pObj = new ShoelaceLength();
    clock_t start = clock();
    double result = pObj->calculate(startWidth, endWidth, spread, numPairs);
    clock_t end = clock();
    delete pObj;
    double expected = 15.866068747318506;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8361901&rd=5859&pm=2848
********************************************************************************
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
 
#include<numeric>
#include<map>
#include<set>
#include<stdio.h>
#include<string.h>
using namespace std;
typedef vector<int>veci;
#define ABS(x) ((x)>0?(x):-(x))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define DIST(x,y) ABS((x)-(y))
int gcd(int x,int y){if(y==0)return x;else return(gcd(y,x%y));}
#define DPP 0.000000001
vector<string>sToken(string s,string c)
{
  vector<string>ans;
  if(c.length()==0)
  {
    ans.push_back(s);
    return ans;
  }
  bool found=0;
  int i,j,len=0,start=-1;
  s+=c;
  for(i=0;i<s.length();i++)
  {
    found=0;
    for(j=0;j<c.length();j++)
      if(s[i]==c[j])found=1;
    if(found)
    {
      if(len)
      {
        ans.push_back(s.substr(start+1,i-start-1));
        len=0;
      }
      start=i;
    }
    else len++;
  }
  return ans;
}
long int nPr(int n,int r)
{
  long int ans=1;
  if(r>n)return 0;
  for(int i=n-r+1;i<=n;i++)
    ans*=i;
  return ans;
}
long int nCr(int n,int r)
{
  long int ans=1;
  if(r>n)return 0;
  for(int i=1;i<=r;i++)
  {
    ans*=(n-i+1)/i;
  }
  return ans;
}
bool isPrime(int x)
{
  if(x<2)return 0;
  int i;
  if(x%2==0)return 0;
  for(i=3;i<=(int)sqrt(double(x));i+=2)
  {
    if(x%i==0)return 0;
  }
  return 1;
}
long long fact(int x)
{
  long long ans=1;
  for(int i=1;i<=x;i++)
    ans*=i;
  return ans;
}
class ShoelaceLength
{
public:
  double calculate(int sw, int ew, int sp, int np)
  {
    double ans=0,tw,twp=ew;
    int i;
    ans+=sw;
    for(i=1;i<np;i++)
    {
      tw=(double)(sw*i+ew*(np-i-1))/(np-1);
      ans+=2*sqrt(sp*sp+(tw/2+twp/2)*(tw/2+twp/2));
      twp=tw;
    }
    return ans;
    
  }
};

********************************************************************************
*******************************************************************************/