/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7839
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

class EllipseCoverage {
public:
    int calculateCoverage(int x1, int y1, int x2, int y2, int d);
};

int EllipseCoverage::calculateCoverage(int x1, int y1, int x2, int y2, int d) {
    int ret;
    return ret;
}


int test0() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    int d = 4;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int x1 = -3;
    int y1 = 0;
    int x2 = 3;
    int y2 = 0;
    int d = 10;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int x1 = 10;
    int y1 = 12;
    int x2 = 8;
    int y2 = 14;
    int d = 50;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1941;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    int d = 200;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 31397;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int x1 = 13;
    int y1 = -23;
    int x2 = 49;
    int y2 = 91;
    int d = 200;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 25187;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int x1 = 7;
    int y1 = -9;
    int x2 = 2;
    int y2 = -4;
    int d = 20;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 296;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int x1 = 0;
    int y1 = 3;
    int x2 = -8;
    int y2 = 5;
    int d = 18;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 221;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int x1 = -3;
    int y1 = -10;
    int x2 = 5;
    int y2 = -2;
    int d = 18;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 193;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int x1 = 1;
    int y1 = 4;
    int x2 = 1;
    int y2 = 10;
    int d = 10;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int x1 = 6;
    int y1 = -5;
    int x2 = -2;
    int y2 = -7;
    int d = 18;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 221;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int x1 = 2;
    int y1 = 3;
    int x2 = -10;
    int y2 = -9;
    int d = 18;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int x1 = -2;
    int y1 = -3;
    int x2 = -6;
    int y2 = 9;
    int d = 20;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 237;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int x1 = -8;
    int y1 = 2;
    int x2 = -8;
    int y2 = -6;
    int d = 16;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 167;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int x1 = -9;
    int y1 = 8;
    int x2 = -1;
    int y2 = -4;
    int d = 16;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int x1 = -5;
    int y1 = -3;
    int x2 = 3;
    int y2 = -3;
    int d = 16;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 167;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int x1 = -75;
    int y1 = 37;
    int x2 = -43;
    int y2 = -93;
    int d = 134;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 597;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int x1 = -14;
    int y1 = 24;
    int x2 = 77;
    int y2 = -74;
    int d = 189;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 19822;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int x1 = 99;
    int y1 = 68;
    int x2 = 75;
    int y2 = -90;
    int d = 164;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4725;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int x1 = 83;
    int y1 = -15;
    int x2 = 41;
    int y2 = -82;
    int d = 181;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 23148;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int x1 = 53;
    int y1 = -76;
    int x2 = 90;
    int y2 = 16;
    int d = 147;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 12522;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int x1 = -84;
    int y1 = 84;
    int x2 = -76;
    int y2 = 72;
    int d = 16;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int x1 = -33;
    int y1 = 30;
    int x2 = 32;
    int y2 = 5;
    int d = 90;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4028;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int x1 = -57;
    int y1 = 97;
    int x2 = -60;
    int y2 = 32;
    int d = 68;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1058;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int x1 = -52;
    int y1 = 60;
    int x2 = -40;
    int y2 = 94;
    int d = 50;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1359;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int x1 = 62;
    int y1 = -25;
    int x2 = 90;
    int y2 = -89;
    int d = 92;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4319;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int x1 = 36;
    int y1 = 38;
    int x2 = 76;
    int y2 = -36;
    int d = 190;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 25427;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int x1 = 41;
    int y1 = -1;
    int x2 = -1;
    int y2 = 36;
    int d = 69;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2190;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int x1 = -100;
    int y1 = -24;
    int x2 = -65;
    int y2 = -64;
    int d = 163;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 19730;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int x1 = -95;
    int y1 = 30;
    int x2 = -20;
    int y2 = -27;
    int d = 143;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 12092;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int x1 = 41;
    int y1 = -3;
    int x2 = -58;
    int y2 = 93;
    int d = 168;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 12668;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int x1 = -45;
    int y1 = 98;
    int x2 = -12;
    int y2 = 49;
    int d = 74;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 2590;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int x1 = -11;
    int y1 = -30;
    int x2 = 27;
    int y2 = 26;
    int d = 135;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 12387;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int x1 = 55;
    int y1 = -88;
    int x2 = 54;
    int y2 = -54;
    int d = 148;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 16732;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int x1 = 80;
    int y1 = -45;
    int x2 = -4;
    int y2 = -71;
    int d = 103;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 4331;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int x1 = -42;
    int y1 = 58;
    int x2 = -45;
    int y2 = -93;
    int d = 167;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 9352;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int x1 = 100;
    int y1 = 99;
    int x2 = 100;
    int y2 = 100;
    int d = 200;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 31392;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int x1 = -100;
    int y1 = 0;
    int x2 = -99;
    int y2 = 0;
    int d = 200;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 31392;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int x1 = -100;
    int y1 = -100;
    int x2 = -100;
    int y2 = -100;
    int d = 200;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 31397;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int x1 = -100;
    int y1 = -100;
    int x2 = -100;
    int y2 = -99;
    int d = 200;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 31392;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int x1 = 100;
    int y1 = 100;
    int x2 = 100;
    int y2 = 100;
    int d = 200;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 31397;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int x1 = 100;
    int y1 = 100;
    int x2 = 100;
    int y2 = 100;
    int d = 10;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int x1 = -100;
    int y1 = 0;
    int x2 = -100;
    int y2 = 0;
    int d = 190;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 28333;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int x1 = 29;
    int y1 = 88;
    int x2 = -99;
    int y2 = 0;
    int d = 200;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 19775;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int x1 = -100;
    int y1 = -100;
    int x2 = -100;
    int y2 = 0;
    int d = 200;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 27195;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int x1 = 99;
    int y1 = 99;
    int x2 = 100;
    int y2 = 100;
    int d = 200;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 31428;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int x1 = -100;
    int y1 = -100;
    int x2 = -100;
    int y2 = -100;
    int d = 100;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 7825;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int x1 = -2;
    int y1 = -1;
    int x2 = -2;
    int y2 = -1;
    int d = 1;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int x1 = 50;
    int y1 = 60;
    int x2 = 51;
    int y2 = 61;
    int d = 10;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int x1 = 100;
    int y1 = 100;
    int x2 = 99;
    int y2 = 99;
    int d = 100;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 7860;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int x1 = -100;
    int y1 = -100;
    int x2 = -100;
    int y2 = -95;
    int d = 10;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int x1 = 50;
    int y1 = 50;
    int x2 = 50;
    int y2 = 50;
    int d = 50;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1941;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int x1 = -20;
    int y1 = -20;
    int x2 = 20;
    int y2 = 20;
    int d = 200;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 30099;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int x1 = -100;
    int y1 = -100;
    int x2 = -100;
    int y2 = -100;
    int d = 10;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int x1 = 13;
    int y1 = -23;
    int x2 = -49;
    int y2 = -91;
    int d = 200;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 27893;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int x1 = 1;
    int y1 = 0;
    int x2 = -1;
    int y2 = 0;
    int d = 200;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 31397;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int x1 = -100;
    int y1 = -100;
    int x2 = 1;
    int y2 = 1;
    int d = 200;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 21972;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int x1 = 100;
    int y1 = 100;
    int x2 = 100;
    int y2 = 99;
    int d = 10;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int x1 = -100;
    int y1 = 0;
    int x2 = -100;
    int y2 = 0;
    int d = 100;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 7825;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int x1 = 50;
    int y1 = 50;
    int x2 = 50;
    int y2 = 0;
    int d = 101;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 6955;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int x1 = -4;
    int y1 = -1;
    int x2 = 0;
    int y2 = 0;
    int d = 100;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 7848;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int x1 = 100;
    int y1 = 100;
    int x2 = 100;
    int y2 = 100;
    int d = 1;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int x1 = 99;
    int y1 = 99;
    int x2 = 99;
    int y2 = 99;
    int d = 3;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int x1 = 10;
    int y1 = 99;
    int x2 = 10;
    int y2 = -99;
    int d = 199;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 3081;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int x1 = -100;
    int y1 = 50;
    int x2 = -100;
    int y2 = 49;
    int d = 100;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 7856;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int x1 = 16;
    int y1 = 16;
    int x2 = 16;
    int y2 = 16;
    int d = 1;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int x1 = 100;
    int y1 = 100;
    int x2 = 100;
    int y2 = 100;
    int d = 20;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 305;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int x1 = -100;
    int y1 = -100;
    int x2 = -100;
    int y2 = -100;
    int d = 5;
    EllipseCoverage* pObj = new EllipseCoverage();
    clock_t start = clock();
    int result = pObj->calculateCoverage(x1, y1, x2, y2, d);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10256472&rd=10710&pm=7839
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <algorithm> 
#include <string> 
#include <vector> 
#include <cstdio> 
#include <cmath> 
using namespace std; 
 
double dist(double a, double b, double c, double d) { 
  return sqrt((a-c)*(a-c)+(b-d)*(b-d)); 
} 
 
class EllipseCoverage { 
  public: 
    int calculateCoverage(int x1, int y1, int x2, int y2, int d) { 
      int ret=0; 
      for(double i=-1000; i<1000; ++i) 
        for(double j=-1000; j<1000; ++j) 
          if(dist(i, j, x1, y1)+dist(i, j, x2, y2)+1e-10<d) 
            ++ret; 
      return ret; 
    } 
     
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/