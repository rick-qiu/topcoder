/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1969
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

class BadClock {
public:
    double nextAgreement(string trueTime, string skewTime, int hourlyGain);
};

double BadClock::nextAgreement(string trueTime, string skewTime, int hourlyGain) {
    double ret;
    return ret;
}


int test0() {
    string trueTime = "07:07:07";
    string skewTime = "07:07:07";
    int hourlyGain = 1776;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string trueTime = "11:59:58";
    string skewTime = "12:03:28";
    int hourlyGain = -3;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 70.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string trueTime = "12:03:28";
    string skewTime = "11:59:58";
    int hourlyGain = 3;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 70.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string trueTime = "03:03:02";
    string skewTime = "03:01:47";
    int hourlyGain = 5;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 15.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string trueTime = "03:03:02";
    string skewTime = "03:01:47";
    int hourlyGain = -5;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 8625.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string trueTime = "07:08:09";
    string skewTime = "09:08:07";
    int hourlyGain = -321;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 22.42367601246106;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string trueTime = "11:59:59";
    string skewTime = "12:00:00";
    int hourlyGain = 3600;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 11.999722222222223;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string trueTime = "11:59:59";
    string skewTime = "12:00:00";
    int hourlyGain = 1;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 43199.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string trueTime = "12:00:00";
    string skewTime = "11:59:59";
    int hourlyGain = -1800;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 23.999444444444446;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string trueTime = "12:00:00";
    string skewTime = "11:59:59";
    int hourlyGain = -1;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 43199.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string trueTime = "03:03:48";
    string skewTime = "09:30:25";
    int hourlyGain = 2337;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 8.559264013692768;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string trueTime = "03:19:53";
    string skewTime = "03:02:36";
    int hourlyGain = 1148;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9033101045296167;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string trueTime = "09:32:36";
    string skewTime = "07:43:29";
    int hourlyGain = 1268;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 5.163249211356467;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string trueTime = "08:26:33";
    string skewTime = "12:21:10";
    int hourlyGain = 1253;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 23.24261771747805;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string trueTime = "08:06:10";
    string skewTime = "01:50:05";
    int hourlyGain = -1394;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 14.802725968436155;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string trueTime = "12:12:13";
    string skewTime = "02:24:59";
    int hourlyGain = 1756;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 20.06492027334852;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string trueTime = "12:37:35";
    string skewTime = "07:07:35";
    int hourlyGain = -935;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 25.02673796791444;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string trueTime = "08:13:20";
    string skewTime = "03:16:20";
    int hourlyGain = 2437;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 7.312269183422241;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string trueTime = "02:19:21";
    string skewTime = "04:37:59";
    int hourlyGain = -1213;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 6.857378400659522;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string trueTime = "02:14:14";
    string skewTime = "03:19:15";
    int hourlyGain = 833;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 47.17767106842737;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string trueTime = "11:41:13";
    string skewTime = "02:13:53";
    int hourlyGain = -847;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 10.814639905548997;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string trueTime = "05:05:33";
    string skewTime = "01:34:23";
    int hourlyGain = 1883;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 6.728624535315985;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string trueTime = "08:33:09";
    string skewTime = "01:38:19";
    int hourlyGain = 2590;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 9.61003861003861;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string trueTime = "01:03:15";
    string skewTime = "12:03:09";
    int hourlyGain = -1204;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 32.88538205980066;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string trueTime = "09:28:30";
    string skewTime = "05:12:49";
    int hourlyGain = 2314;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 6.629645635263612;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string trueTime = "08:09:26";
    string skewTime = "08:02:26";
    int hourlyGain = -687;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 62.2707423580786;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string trueTime = "10:31:51";
    string skewTime = "07:46:55";
    int hourlyGain = 758;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 13.055408970976254;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string trueTime = "04:06:48";
    string skewTime = "03:43:32";
    int hourlyGain = -626;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 66.77955271565496;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string trueTime = "11:03:13";
    string skewTime = "11:52:32";
    int hourlyGain = 2938;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 13.696732471068755;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string trueTime = "05:12:08";
    string skewTime = "10:02:47";
    int hourlyGain = 778;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 33.11182519280206;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string trueTime = "06:47:01";
    string skewTime = "12:44:23";
    int hourlyGain = 598;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 36.38461538461539;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string trueTime = "06:07:41";
    string skewTime = "11:35:41";
    int hourlyGain = -809;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 24.326328800988875;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string trueTime = "02:19:20";
    string skewTime = "12:02:21";
    int hourlyGain = -1595;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 21.93166144200627;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string trueTime = "01:20:50";
    string skewTime = "02:30:50";
    int hourlyGain = 2033;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 19.183472700442696;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string trueTime = "06:31:44";
    string skewTime = "03:21:48";
    int hourlyGain = 566;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 20.13427561837456;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string trueTime = "10:12:36";
    string skewTime = "02:22:26";
    int hourlyGain = 2720;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 10.371323529411764;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string trueTime = "03:19:54";
    string skewTime = "06:36:45";
    int hourlyGain = -243;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 48.60493827160494;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string trueTime = "04:38:33";
    string skewTime = "03:58:06";
    int hourlyGain = 1948;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 1.245893223819302;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string trueTime = "06:23:13";
    string skewTime = "07:09:08";
    int hourlyGain = 294;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 137.56802721088437;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string trueTime = "09:29:37";
    string skewTime = "07:31:34";
    int hourlyGain = 2821;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 2.510811768876285;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string trueTime = "07:13:08";
    string skewTime = "05:34:25";
    int hourlyGain = -30;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 1242.5666666666666;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string trueTime = "12:23:43";
    string skewTime = "12:41:31";
    int hourlyGain = 513;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 82.12865497076024;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string trueTime = "10:53:16";
    string skewTime = "02:34:07";
    int hourlyGain = 688;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 43.530523255813954;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string trueTime = "02:58:27";
    string skewTime = "07:39:07";
    int hourlyGain = 1091;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 24.161319890009167;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string trueTime = "06:30:06";
    string skewTime = "07:11:10";
    int hourlyGain = 1440;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 28.288888888888888;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string trueTime = "10:01:11";
    string skewTime = "07:55:33";
    int hourlyGain = -1445;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 24.679584775086504;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string trueTime = "06:45:33";
    string skewTime = "04:59:39";
    int hourlyGain = -1684;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 21.880047505938244;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string trueTime = "08:38:09";
    string skewTime = "01:16:04";
    int hourlyGain = 2267;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 11.700485222761358;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string trueTime = "06:47:39";
    string skewTime = "07:14:00";
    int hourlyGain = -478;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 3.307531380753138;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string trueTime = "08:50:39";
    string skewTime = "07:46:03";
    int hourlyGain = 1402;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7646219686162623;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string trueTime = "08:59:12";
    string skewTime = "10:10:06";
    int hourlyGain = 3340;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 11.660479041916167;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string trueTime = "09:45:50";
    string skewTime = "01:18:19";
    int hourlyGain = 671;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 45.38152011922504;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string trueTime = "12:17:03";
    string skewTime = "08:41:13";
    int hourlyGain = 1363;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 9.501100513573;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string trueTime = "02:54:06";
    string skewTime = "01:09:13";
    int hourlyGain = 2736;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3000730994152048;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string trueTime = "11:32:05";
    string skewTime = "03:04:14";
    int hourlyGain = 3568;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 8.540078475336323;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string trueTime = "03:55:13";
    string skewTime = "10:20:27";
    int hourlyGain = 3382;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 5.9390892962743935;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string trueTime = "07:49:08";
    string skewTime = "07:29:41";
    int hourlyGain = 3471;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3362143474503025;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string trueTime = "07:08:53";
    string skewTime = "06:37:56";
    int hourlyGain = 2462;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7542648253452477;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string trueTime = "02:13:31";
    string skewTime = "03:09:54";
    int hourlyGain = 2599;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 15.320123124278568;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string trueTime = "01:31:08";
    string skewTime = "11:33:39";
    int hourlyGain = 2776;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 2.539265129682997;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string trueTime = "01:37:21";
    string skewTime = "01:00:49";
    int hourlyGain = 1313;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6694592536176696;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string trueTime = "09:07:52";
    string skewTime = "12:17:00";
    int hourlyGain = 1576;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 20.210659898477157;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string trueTime = "05:24:05";
    string skewTime = "07:56:20";
    int hourlyGain = 2830;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 12.037102473498233;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string trueTime = "10:58:21";
    string skewTime = "09:46:49";
    int hourlyGain = 1364;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1466275659824046;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string trueTime = "06:28:42";
    string skewTime = "09:12:25";
    int hourlyGain = -1700;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 5.778235294117647;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string trueTime = "12:32:25";
    string skewTime = "12:21:32";
    int hourlyGain = 1271;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5137686860739575;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string trueTime = "09:29:55";
    string skewTime = "09:57:26";
    int hourlyGain = 3186;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 13.041117388575016;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string trueTime = "05:13:37";
    string skewTime = "08:23:58";
    int hourlyGain = 230;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 138.1695652173913;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string trueTime = "05:41:30";
    string skewTime = "11:40:51";
    int hourlyGain = 2705;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 7.999630314232902;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string trueTime = "01:28:54";
    string skewTime = "01:47:13";
    int hourlyGain = -1030;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0669902912621358;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string trueTime = "02:48:53";
    string skewTime = "04:14:55";
    int hourlyGain = 273;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 139.33333333333334;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string trueTime = "01:54:33";
    string skewTime = "03:49:31";
    int hourlyGain = -161;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 42.84472049689441;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string trueTime = "11:39:59";
    string skewTime = "06:44:20";
    int hourlyGain = -760;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 33.501315789473686;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string trueTime = "03:51:05";
    string skewTime = "07:18:32";
    int hourlyGain = 1506;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 20.4203187250996;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string trueTime = "10:42:30";
    string skewTime = "07:40:38";
    int hourlyGain = 145;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 75.2551724137931;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string trueTime = "08:04:01";
    string skewTime = "11:25:21";
    int hourlyGain = 685;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 45.43065693430657;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string trueTime = "04:39:48";
    string skewTime = "10:03:14";
    int hourlyGain = 2745;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 8.668123861566485;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string trueTime = "07:44:37";
    string skewTime = "02:36:26";
    int hourlyGain = 3321;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 5.567901234567901;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string trueTime = "01:45:45";
    string skewTime = "11:17:38";
    int hourlyGain = -585;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 58.654700854700856;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string trueTime = "09:30:27";
    string skewTime = "03:54:36";
    int hourlyGain = 2328;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 8.655927835051546;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string trueTime = "07:47:34";
    string skewTime = "05:13:01";
    int hourlyGain = 3054;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 3.036345776031434;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string trueTime = "01:16:03";
    string skewTime = "06:16:31";
    int hourlyGain = 640;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 39.33125;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string trueTime = "03:30:18";
    string skewTime = "04:44:34";
    int hourlyGain = 2553;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 15.17587152369761;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string trueTime = "02:34:34";
    string skewTime = "02:17:25";
    int hourlyGain = -57;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 739.8421052631579;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string trueTime = "01:55:48";
    string skewTime = "11:05:51";
    int hourlyGain = -1500;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 22.002;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string trueTime = "03:47:18";
    string skewTime = "07:42:24";
    int hourlyGain = -1770;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 7.969491525423729;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string trueTime = "11:10:46";
    string skewTime = "06:30:15";
    int hourlyGain = 3158;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 5.329639012032932;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string trueTime = "04:40:01";
    string skewTime = "02:14:50";
    int hourlyGain = -1195;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 28.861087866108786;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string trueTime = "07:07:08";
    string skewTime = "10:08:20";
    int hourlyGain = 2668;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 12.116941529235381;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string trueTime = "05:38:32";
    string skewTime = "03:07:31";
    int hourlyGain = -1409;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 24.229240596167493;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string trueTime = "01:09:31";
    string skewTime = "05:37:53";
    int hourlyGain = -1349;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 11.936249073387694;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string trueTime = "10:57:32";
    string skewTime = "01:42:35";
    int hourlyGain = 1454;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 22.900275103163686;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string trueTime = "09:49:14";
    string skewTime = "07:23:34";
    int hourlyGain = -887;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 38.8500563697858;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string trueTime = "03:30:11";
    string skewTime = "03:44:36";
    int hourlyGain = -1097;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7885141294439381;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string trueTime = "11:43:37";
    string skewTime = "02:35:23";
    int hourlyGain = -1543;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 6.679196370706416;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string trueTime = "09:02:33";
    string skewTime = "03:09:46";
    int hourlyGain = -1514;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 14.552840158520475;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string trueTime = "04:53:25";
    string skewTime = "12:15:18";
    int hourlyGain = 943;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 17.695652173913043;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string trueTime = "07:26:29";
    string skewTime = "12:29:13";
    int hourlyGain = -222;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 81.81981981981981;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string trueTime = "10:28:13";
    string skewTime = "12:19:28";
    int hourlyGain = 2182;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 16.73923006416132;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string trueTime = "11:37:47";
    string skewTime = "06:30:41";
    int hourlyGain = -740;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 33.47837837837838;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string trueTime = "07:08:09";
    string skewTime = "09:08:07";
    int hourlyGain = -321;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 22.42367601246106;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string trueTime = "03:03:02";
    string skewTime = "03:01:47";
    int hourlyGain = -5;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 8625.0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string trueTime = "07:07:07";
    string skewTime = "07:07:07";
    int hourlyGain = 1776;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string trueTime = "03:03:02";
    string skewTime = "03:01:47";
    int hourlyGain = -10;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 4312.5;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string trueTime = "11:59:58";
    string skewTime = "12:03:28";
    int hourlyGain = 3;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 14330.0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string trueTime = "03:03:03";
    string skewTime = "03:03:02";
    int hourlyGain = -1;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 43199.0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string trueTime = "11:00:00";
    string skewTime = "11:00:01";
    int hourlyGain = 3600;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 11.999722222222223;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string trueTime = "07:07:07";
    string skewTime = "01:01:01";
    int hourlyGain = -1;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 21234.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string trueTime = "03:03:02";
    string skewTime = "03:01:47";
    int hourlyGain = -37;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 1165.5405405405406;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string trueTime = "01:01:01";
    string skewTime = "03:03:03";
    int hourlyGain = 1;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 35878.0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string trueTime = "07:08:09";
    string skewTime = "09:08:07";
    int hourlyGain = 2;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 18001.0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string trueTime = "01:00:00";
    string skewTime = "01:00:01";
    int hourlyGain = 1;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 43199.0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string trueTime = "12:00:00";
    string skewTime = "12:00:00";
    int hourlyGain = 4;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string trueTime = "01:01:01";
    string skewTime = "01:01:02";
    int hourlyGain = 1;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 43199.0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string trueTime = "05:00:00";
    string skewTime = "06:00:00";
    int hourlyGain = 1;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 39600.0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string trueTime = "03:01:47";
    string skewTime = "03:03:02";
    int hourlyGain = 5;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 8625.0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string trueTime = "10:00:01";
    string skewTime = "10:00:02";
    int hourlyGain = 1;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 43199.0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string trueTime = "08:00:00";
    string skewTime = "10:00:00";
    int hourlyGain = 10;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 3600.0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string trueTime = "07:07:07";
    string skewTime = "07:07:07";
    int hourlyGain = -2;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string trueTime = "03:03:02";
    string skewTime = "03:04:47";
    int hourlyGain = 3;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 14365.0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string trueTime = "03:03:02";
    string skewTime = "03:01:47";
    int hourlyGain = -13;
    BadClock* pObj = new BadClock();
    clock_t start = clock();
    double result = pObj->nextAgreement(trueTime, skewTime, hourlyGain);
    clock_t end = clock();
    delete pObj;
    double expected = 3317.3076923076924;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4665&pm=1969
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
#define foreach(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++) 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
vector<string> tokenize(string s, string ch) { 
  vector<string> ret; 
  for( int p = 0, p2; p < s.size(); p = p2+1 ) { 
    p2 = s.find_first_of(ch, p); 
    if( p2 == -1 ) p2 = s.size(); 
    if( p2-p > 0 ) ret.push_back( s.substr(p, p2-p) ); 
  } 
  return ret; 
} 
 
vector<int> tokint(string s, string ch) { 
  vector<int> ret; 
  vector<string> p = tokenize(s, ch); 
  for( int i = 0; i < p.size(); i++ ) 
    ret.push_back( atoi(p[i].c_str()) ); 
  return ret; 
} 
 
class BadClock { 
public: 
double nextAgreement(string trueTime, string skewTime, int hourlyGain) { 
  int i, j, k, x, y, z, n; 
  double ret; 
 
  VI t = tokint(trueTime, ":"); 
  x = t[0]*3600 + t[1]*60 + t[2]; 
  t = tokint(skewTime, ":"); 
  y = t[0]*3600 + t[1]*60 + t[2]; 
  y = x-y; 
  if( hourlyGain < 0 ) {y = -y; hourlyGain = -hourlyGain;} 
  while( y < 0 ) y += 60*12*60; 
  while( y >= 12*60*60 ) y -= 12*60*60; 
  return y/(double)hourlyGain; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/