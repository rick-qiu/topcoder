/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1706
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

class CaseysArt {
public:
    double howManyWays(int length, int width);
};

double CaseysArt::howManyWays(int length, int width) {
    double ret;
    return ret;
}


int test0() {
    int length = 3;
    int width = 4;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int length = 4;
    int width = 3;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int length = 2;
    int width = 2;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int length = 5;
    int width = 9;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 384.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int length = 1;
    int width = 1;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
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
    int length = 1;
    int width = 2;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int length = 1;
    int width = 3;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int length = 1;
    int width = 12;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int length = 2;
    int width = 3;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int length = 2;
    int width = 4;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
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
    int length = 2;
    int width = 9;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int length = 2;
    int width = 12;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 16.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int length = 3;
    int width = 2;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int length = 3;
    int width = 12;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 64.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int length = 4;
    int width = 12;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 468.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int length = 5;
    int width = 8;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int length = 6;
    int width = 2;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int length = 6;
    int width = 6;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 162.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int length = 6;
    int width = 11;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 39088.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int length = 7;
    int width = 4;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int length = 7;
    int width = 15;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 1.15363072E8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int length = 8;
    int width = 1;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
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
    int length = 8;
    int width = 3;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 16.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int length = 8;
    int width = 9;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 204184.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int length = 8;
    int width = 12;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9986082E7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int length = 9;
    int width = 2;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int length = 9;
    int width = 3;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int length = 9;
    int width = 9;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 1193600.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int length = 9;
    int width = 11;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 6.3112256E7;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int length = 10;
    int width = 9;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 9567192.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int length = 10;
    int width = 11;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int length = 10;
    int width = 12;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 7.75880967E9;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int length = 11;
    int width = 9;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 6.3112256E7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int length = 11;
    int width = 11;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int length = 11;
    int width = 12;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 1.24693887784E11;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int length = 12;
    int width = 6;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 118586.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int length = 12;
    int width = 12;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 2.033502499954E12;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int length = 13;
    int width = 2;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int length = 13;
    int width = 6;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 361712.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int length = 13;
    int width = 9;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 3.245128576E9;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int length = 13;
    int width = 12;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3128240650256E13;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int length = 14;
    int width = 3;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 128.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int length = 14;
    int width = 5;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int length = 14;
    int width = 6;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 1103946.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int length = 14;
    int width = 9;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3378489272E10;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int length = 14;
    int width = 11;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int length = 14;
    int width = 12;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 5.38556346650082E14;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int length = 15;
    int width = 11;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 2.33712926959296E14;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int length = 15;
    int width = 12;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 8.7786436827666E15;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int length = 15;
    int width = 13;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 3.281779116794919E17;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int length = 15;
    int width = 15;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 4.583240929968676E20;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int length = 16;
    int width = 15;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7126367065533525E22;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int length = 17;
    int width = 13;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int length = 17;
    int width = 15;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 6.401450746057415E23;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int length = 18;
    int width = 6;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0153017E8;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int length = 18;
    int width = 9;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 5.9141914295736E13;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int length = 18;
    int width = 12;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 3.79195817400869E19;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int length = 18;
    int width = 13;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 3.252838833028188E21;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int length = 18;
    int width = 14;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7869302738761328E23;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int length = 18;
    int width = 15;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 2.393036288950159E25;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int length = 18;
    int width = 15;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 2.393036288950159E25;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int length = 3;
    int width = 4;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int length = 5;
    int width = 9;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 384.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int length = 15;
    int width = 15;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 4.583240929968676E20;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int length = 6;
    int width = 8;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 1514.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int length = 12;
    int width = 12;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 2.033502499954E12;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int length = 4;
    int width = 6;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 18.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int length = 9;
    int width = 9;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 1193600.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int length = 13;
    int width = 15;
    CaseysArt* pObj = new CaseysArt();
    clock_t start = clock();
    double result = pObj->howManyWays(length, width);
    clock_t end = clock();
    delete pObj;
    double expected = 3.281779116794919E17;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=5855&pm=1706
********************************************************************************
#line 2 "CaseysArt.cpp" 
 
// Warning: no successful challenges against me yet. 
 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <ctype.h> 
#include <math.h> 
#include <iostream> 
#include <set> 
#include <sstream> 
 
using namespace std; 
typedef long long ll; typedef long double ld; 
typedef vector<int> vi; typedef vector<string> vs; 
 
#define LS < 
#define FOR(k,start,end) for(typeof(start) k=(start); k LS (end); ++k) 
#define Size(x) (int(x.size())) 
#define LET(k,val) typeof(val) k = (val) 
 
#define CLC(act,val) (*({act; static typeof(val) CLCR; CLCR = (val); &CLCR;})) 
  
#define FIRST(k,a,b,cond) CLC(LET(k, a); for(; k LS (b); k++) if(cond) break, k) 
#define EXISTS(k,a,b,cond) (FIRST(k,a,b,cond) LS (b)) 
#define FORALL(k,a,b,cond) (!EXISTS(k,a,b,!(cond))) 
  
#define FOLD0(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(; k LS (b); k++) {act;}, R##k) 
#define SUMTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k += (x)) 
#define PRODTO(k,a,b,init,x) FOLD0(k,a,b,init,R##k *= (x)) 
#define MAXTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k >?= (x)) 
#define MINTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k <?= (x)) 
#define SUM(k,a,b,x) SUMTO(k,a,b,(typeof(x)) (0), x) 
#define PROD(k,a,b,x) PRODTO(k,a,b,(typeof(x)) (1), x) 
  
#define FOLD1(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(k++; k LS (b); k++) act, R##k) 
#define MAX(k,a,b,x) FOLD1(k,a,b,x, R##k >?= (x)) 
#define MIN(k,a,b,x) FOLD1(k,a,b,x, R##k <?= (x)) 
  
#define INF 2000000000 
int tcize(int n) {return n<INF ? n : -1;} 
 
 
ld hmw[32768]; 
ld hmw2[32768]; 
 
#define HAS(set,val) (set & (1<<val)) 
 
int wide, lft; 
 
void fit(int pos, int done) { 
  while(HAS(lft,pos)) pos++; 
  if(pos == wide) { 
    hmw2[done] += hmw[lft]; 
//  printf("%d fits %d (%Lf)\n", lft, done, hmw[lft]); 
    return; 
    } 
  int prv = pos-1; 
  int nxt = pos+1; 
  int sprv = 1 << prv; 
  int spos = 1 << pos; 
  int snxt = 1 << nxt; 
  if(pos && !(done&sprv)) fit(nxt, done | sprv | spos); 
  if(pos<wide-1) { 
    if(!(done&spos)) fit(nxt, done | spos | snxt); 
    if((!(done&spos)) && !(lft&snxt)) fit(nxt+1, done | spos); 
    if(!(lft&snxt)) fit(nxt+1, done | snxt); 
    } 
  } 
 
class CaseysArt { 
  public: 
  double howManyWays(int length, int width) { 
    // !FDI 
    wide = width; 
     
    int z = 1 << width; 
     
    if(width == 1 || length == 1) return 0; 
    FOR(k, 0, z) hmw[k] = 0; hmw[0] = 1; 
 
    FOR(h, 0, length) { 
      FOR(l,0,z) hmw2[l] = 0; 
      FOR(k, 0, z) { 
        lft = k; 
        fit(0, 0); 
        } 
      FOR(l,0,z) hmw[l] = hmw2[l]; 
      } 
 
    return hmw[0]; 
    } 
   
  
  }; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/