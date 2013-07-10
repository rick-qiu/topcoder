/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11329
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

class RotatedClock {
public:
    string getEarliest(int hourHand, int minuteHand);
};

string RotatedClock::getEarliest(int hourHand, int minuteHand) {
    string ret;
    return ret;
}


int test0() {
    int hourHand = 70;
    int minuteHand = 300;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "08:20";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int hourHand = 90;
    int minuteHand = 120;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "11:00";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int hourHand = 240;
    int minuteHand = 36;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int hourHand = 19;
    int minuteHand = 19;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int hourHand = 1;
    int minuteHand = 12;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:02";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int hourHand = 0;
    int minuteHand = 0;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int hourHand = 30;
    int minuteHand = 30;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int hourHand = 330;
    int minuteHand = 330;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int hourHand = 1;
    int minuteHand = 12;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:02";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int hourHand = 31;
    int minuteHand = 42;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:02";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int hourHand = 331;
    int minuteHand = 342;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:02";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int hourHand = 29;
    int minuteHand = 348;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:58";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int hourHand = 59;
    int minuteHand = 18;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:58";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int hourHand = 359;
    int minuteHand = 318;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:58";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int hourHand = 30;
    int minuteHand = 0;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "01:00";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int hourHand = 60;
    int minuteHand = 30;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "01:00";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int hourHand = 0;
    int minuteHand = 330;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "01:00";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int hourHand = 31;
    int minuteHand = 12;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "01:02";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int hourHand = 61;
    int minuteHand = 42;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "01:02";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int hourHand = 1;
    int minuteHand = 342;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "01:02";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int hourHand = 59;
    int minuteHand = 348;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "01:58";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int hourHand = 89;
    int minuteHand = 18;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "01:58";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int hourHand = 29;
    int minuteHand = 318;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "01:58";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int hourHand = 330;
    int minuteHand = 0;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "11:00";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int hourHand = 0;
    int minuteHand = 30;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "11:00";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int hourHand = 300;
    int minuteHand = 330;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "11:00";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int hourHand = 331;
    int minuteHand = 12;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "11:02";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int hourHand = 1;
    int minuteHand = 42;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "11:02";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int hourHand = 301;
    int minuteHand = 342;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "11:02";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int hourHand = 359;
    int minuteHand = 348;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "11:58";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int hourHand = 29;
    int minuteHand = 18;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "11:58";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int hourHand = 329;
    int minuteHand = 318;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "11:58";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int hourHand = 247;
    int minuteHand = 60;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int hourHand = 36;
    int minuteHand = 276;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int hourHand = 356;
    int minuteHand = 6;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int hourHand = 120;
    int minuteHand = 6;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int hourHand = 227;
    int minuteHand = 270;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int hourHand = 341;
    int minuteHand = 306;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int hourHand = 74;
    int minuteHand = 114;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int hourHand = 329;
    int minuteHand = 114;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int hourHand = 174;
    int minuteHand = 132;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int hourHand = 337;
    int minuteHand = 18;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int hourHand = 96;
    int minuteHand = 102;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "02:12";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int hourHand = 257;
    int minuteHand = 155;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int hourHand = 63;
    int minuteHand = 180;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int hourHand = 111;
    int minuteHand = 42;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "10:42";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int hourHand = 144;
    int minuteHand = 20;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int hourHand = 85;
    int minuteHand = 270;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "03:50";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int hourHand = 8;
    int minuteHand = 332;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int hourHand = 138;
    int minuteHand = 42;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int hourHand = 129;
    int minuteHand = 48;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "06:18";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int hourHand = 168;
    int minuteHand = 224;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int hourHand = 292;
    int minuteHand = 138;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int hourHand = 155;
    int minuteHand = 137;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int hourHand = 134;
    int minuteHand = 48;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "08:28";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int hourHand = 154;
    int minuteHand = 198;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:08";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int hourHand = 30;
    int minuteHand = 96;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int hourHand = 192;
    int minuteHand = 48;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int hourHand = 296;
    int minuteHand = 102;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "04:52";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int hourHand = 350;
    int minuteHand = 300;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "09:40";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int hourHand = 64;
    int minuteHand = 186;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int hourHand = 271;
    int minuteHand = 342;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "10:02";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int hourHand = 180;
    int minuteHand = 60;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "04:00";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int hourHand = 355;
    int minuteHand = 0;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "09:50";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int hourHand = 245;
    int minuteHand = 150;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "05:10";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int hourHand = 244;
    int minuteHand = 138;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "05:08";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int hourHand = 37;
    int minuteHand = 84;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "01:14";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int hourHand = 130;
    int minuteHand = 30;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "07:20";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int hourHand = 21;
    int minuteHand = 342;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "09:42";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int hourHand = 287;
    int minuteHand = 45;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int hourHand = 33;
    int minuteHand = 48;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int hourHand = 233;
    int minuteHand = 210;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int hourHand = 269;
    int minuteHand = 348;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "08:58";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int hourHand = 51;
    int minuteHand = 258;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int hourHand = 102;
    int minuteHand = 114;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "04:24";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int hourHand = 86;
    int minuteHand = 222;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "05:52";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int hourHand = 348;
    int minuteHand = 186;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:36";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int hourHand = 257;
    int minuteHand = 54;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "01:34";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int hourHand = 2;
    int minuteHand = 324;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "02:04";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int hourHand = 319;
    int minuteHand = 176;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int hourHand = 128;
    int minuteHand = 216;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:16";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int hourHand = 266;
    int minuteHand = 342;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "07:52";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int hourHand = 69;
    int minuteHand = 73;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int hourHand = 232;
    int minuteHand = 24;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "03:44";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int hourHand = 271;
    int minuteHand = 192;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "03:02";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int hourHand = 150;
    int minuteHand = 150;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int hourHand = 36;
    int minuteHand = 36;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int hourHand = 1;
    int minuteHand = 181;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int hourHand = 340;
    int minuteHand = 120;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "11:20";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int hourHand = 1;
    int minuteHand = 11;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int hourHand = 20;
    int minuteHand = 0;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "08:40";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int hourHand = 58;
    int minuteHand = 6;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:56";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int hourHand = 47;
    int minuteHand = 17;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int hourHand = 230;
    int minuteHand = 241;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int hourHand = 148;
    int minuteHand = 96;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:56";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int hourHand = 115;
    int minuteHand = 115;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int hourHand = 1;
    int minuteHand = 1;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int hourHand = 79;
    int minuteHand = 336;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int hourHand = 10;
    int minuteHand = 10;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int hourHand = 330;
    int minuteHand = 30;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "10:00";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int hourHand = 0;
    int minuteHand = 1;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int hourHand = 10;
    int minuteHand = 30;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "03:20";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int hourHand = 180;
    int minuteHand = 0;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "06:00";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int hourHand = 2;
    int minuteHand = 13;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int hourHand = 0;
    int minuteHand = 55;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int hourHand = 354;
    int minuteHand = 288;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "11:48";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int hourHand = 6;
    int minuteHand = 72;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:12";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int hourHand = 140;
    int minuteHand = 0;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "00:40";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int hourHand = 180;
    int minuteHand = 150;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "01:00";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int hourHand = 3;
    int minuteHand = 6;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "01:06";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int hourHand = 315;
    int minuteHand = 90;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "01:30";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int hourHand = 105;
    int minuteHand = 28;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int hourHand = 1;
    int minuteHand = 10;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int hourHand = 33;
    int minuteHand = 43;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int hourHand = 0;
    int minuteHand = 60;
    RotatedClock* pObj = new RotatedClock();
    clock_t start = clock();
    string result = pObj->getEarliest(hourHand, minuteHand);
    clock_t end = clock();
    delete pObj;
    string expected = "10:00";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22680210&rd=14540&pm=11329
********************************************************************************
#include <cstdlib> 
#include <cctype> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <fstream> 
#include <numeric> 
#include <iomanip> 
#include <bitset> 
#include <list> 
#include <functional> 
#include <utility> 
#include <ctime> 
using namespace std; 
#define PB push_back 
#define MP make_pair 
#define REP(i,n) for(i=0;i<(n);++i) 
#define FOR(i,l,h) for(i=(l);i<=(h);++i) 
#define FORD(i,h,l) for(i=(h);i>=(l);--i) 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef vector<double> VD; 
typedef long long LL; 
typedef pair<int,int> PII; 
class RotatedClock{ 
public: 
  string getEarliest(int hh, int mh){ 
    int H, M; 
    char str[10]; 
    str[2] = ':'; str[5] = 0; 
    for (int m = 0;m < 60;m += 2) { 
      for (int h = 0;h < 24;h++) { 
        H = h * 30 + m / 2; 
        M = m * 6; 
        for (int rotate = 0;rotate < 360;rotate += 30) { 
          if ((H + rotate) % 360 == hh && (M + rotate) % 360 == mh) { 
            str[0] = '0' + (h / 10); 
            str[1] = '0' + (h % 10); 
            str[3] = '0' + (m / 10); 
            str[4] = '0' + (m % 10); 
            return string(str); 
          } 
        } 
      } 
    } 
    return ""; 
  } 
   
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/