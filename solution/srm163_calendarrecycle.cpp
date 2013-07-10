/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1847
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

class CalendarRecycle {
public:
    int useAgain(int year);
};

int CalendarRecycle::useAgain(int year) {
    int ret;
    return ret;
}


int test0() {
    int year = 2002;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2013;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int year = 2013;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2019;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int year = 2008;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2036;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int year = 9999;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 10010;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int year = 2525;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2531;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int year = 5442;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5453;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int year = 7243;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 7254;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int year = 2372;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2400;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int year = 2938;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2949;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int year = 5873;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5879;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int year = 2937;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2943;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int year = 9501;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9507;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int year = 3326;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3337;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int year = 9706;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9717;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int year = 2177;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2183;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int year = 7848;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 7876;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int year = 2959;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2970;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int year = 6576;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 6616;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int year = 9408;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9436;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int year = 6965;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 6971;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int year = 4094;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 4100;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int year = 7617;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 7623;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int year = 9288;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9328;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int year = 9378;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9389;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int year = 3584;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3612;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int year = 3834;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3845;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int year = 5139;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5150;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int year = 3305;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3311;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int year = 6941;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 6947;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int year = 7596;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 7624;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int year = 7435;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 7446;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int year = 3861;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3867;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int year = 6732;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 6760;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int year = 9352;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9380;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int year = 5332;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5360;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int year = 4675;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 4686;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int year = 6750;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 6761;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int year = 3276;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3316;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int year = 9770;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9781;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int year = 5709;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5715;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int year = 5663;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5674;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int year = 5375;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5386;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int year = 9626;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9637;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int year = 6108;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 6136;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int year = 3102;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3113;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int year = 3375;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3386;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int year = 8453;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 8459;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int year = 9852;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9880;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int year = 9286;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9297;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int year = 5279;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5290;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int year = 3288;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3328;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int year = 4561;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 4567;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int year = 5403;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5414;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int year = 6053;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 6059;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int year = 7574;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 7585;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int year = 9692;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9704;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int year = 6324;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 6352;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int year = 2155;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2166;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int year = 3646;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3657;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int year = 3764;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3792;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int year = 7987;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 7998;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int year = 5962;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5973;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int year = 5802;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5813;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int year = 8275;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 8286;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int year = 5089;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5095;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int year = 5170;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5181;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int year = 6273;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 6279;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int year = 5954;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5965;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int year = 3892;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3904;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int year = 8011;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 8022;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int year = 3576;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3604;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int year = 9766;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9777;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int year = 5495;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5501;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int year = 2537;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2543;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int year = 9657;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9663;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int year = 8449;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 8455;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int year = 3949;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3955;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int year = 4134;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 4145;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int year = 4407;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 4418;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int year = 2981;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2987;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int year = 3250;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3261;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int year = 8222;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 8233;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int year = 3482;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 3493;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int year = 9455;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9466;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int year = 6591;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 6603;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int year = 6963;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 6974;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int year = 6130;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 6141;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int year = 6533;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 6539;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int year = 9446;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9457;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int year = 7762;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 7773;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int year = 8597;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 8609;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int year = 4990;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5002;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int year = 4718;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 4729;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int year = 5260;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 5288;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int year = 4534;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 4545;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int year = 6528;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 6556;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int year = 8062;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 8073;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int year = 7667;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 7678;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int year = 8224;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 8252;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int year = 7266;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 7277;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int year = 2008;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2036;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int year = 9999;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 10010;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int year = 2300;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2306;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int year = 2100;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2106;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int year = 9996;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 10024;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int year = 2099;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2105;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int year = 2072;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2112;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int year = 2400;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 2428;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int year = 9900;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 9906;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int year = 9992;
    CalendarRecycle* pObj = new CalendarRecycle();
    clock_t start = clock();
    int result = pObj->useAgain(year);
    clock_t end = clock();
    delete pObj;
    int expected = 10020;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=265773&rd=4620&pm=1847
********************************************************************************
#include <string>
#include <vector>
class CalendarRecycle {
  public:
  int useAgain(int year) {
    int offset=0;
    int add1;
    if ((year % 4 == 0)  && (year % 100 != 0)) add1 = 2;
    else if ((year % 100 == 0 && year % 400 == 0)) add1 = 2;
    else add1 = 1;
    while (1)
    {      
      year++;
      int add;
      if ((year % 4 == 0)  && (year % 100 != 0)) add = 2;
      else if ((year % 100 == 0 && year % 400 == 0)) add = 2;
      else add = 1;
      
      offset += add;
      offset %= 7;
      if (offset == 0 && add == add1)
        return year;
    }        
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/