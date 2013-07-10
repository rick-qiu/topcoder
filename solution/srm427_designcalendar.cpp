/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10155
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

class DesignCalendar {
public:
    int shortestPeriod(int dayLength, int yearLength);
};

int DesignCalendar::shortestPeriod(int dayLength, int yearLength) {
    int ret;
    return ret;
}


int test0() {
    int dayLength = 4;
    int yearLength = 1461;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int dayLength = 86400;
    int yearLength = 31558150;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1728;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int dayLength = 98;
    int yearLength = 100;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int dayLength = 1000;
    int yearLength = 50000100;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int dayLength = 5673;
    int yearLength = 28565335;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 5673;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int dayLength = 5555;
    int yearLength = 846555;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1111;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int dayLength = 1;
    int yearLength = 1;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
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
    int dayLength = 10;
    int yearLength = 100;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int dayLength = 10000000;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int dayLength = 999999999;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int dayLength = 500000001;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 500000001;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int dayLength = 500000003;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 500000003;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int dayLength = 82;
    int yearLength = 15204;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int dayLength = 13082;
    int yearLength = 31861;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int dayLength = 403799319;
    int yearLength = 509735122;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 403799319;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int dayLength = 135489006;
    int yearLength = 351810238;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 67744503;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int dayLength = 39178655;
    int yearLength = 337430093;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 39178655;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int dayLength = 1110459;
    int yearLength = 3823580;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1110459;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int dayLength = 677953537;
    int yearLength = 733498447;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 677953537;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int dayLength = 475102229;
    int yearLength = 567113209;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 475102229;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int dayLength = 146771956;
    int yearLength = 537844882;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 73385978;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int dayLength = 137846540;
    int yearLength = 713943589;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 137846540;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int dayLength = 159296339;
    int yearLength = 271777533;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 159296339;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int dayLength = 133447241;
    int yearLength = 270554780;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 133447241;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int dayLength = 203717349;
    int yearLength = 229767078;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 67905783;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int dayLength = 175254045;
    int yearLength = 623156945;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 35050809;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int dayLength = 81508907;
    int yearLength = 315757783;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 81508907;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int dayLength = 14822170;
    int yearLength = 58529122;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 7411085;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int dayLength = 349731837;
    int yearLength = 550845702;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 38859093;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int dayLength = 62048314;
    int yearLength = 143678497;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 62048314;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int dayLength = 57870343;
    int yearLength = 104217818;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 57870343;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int dayLength = 273493092;
    int yearLength = 998092297;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 273493092;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int dayLength = 629149;
    int yearLength = 216683818;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 629149;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int dayLength = 44247326;
    int yearLength = 57323853;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 44247326;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int dayLength = 149798163;
    int yearLength = 278890753;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 149798163;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int dayLength = 123733566;
    int yearLength = 129676107;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 3749502;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int dayLength = 18835015;
    int yearLength = 23388563;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 400745;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int dayLength = 18238173;
    int yearLength = 501964947;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 6079391;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int dayLength = 634333141;
    int yearLength = 871247433;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 634333141;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int dayLength = 163227620;
    int yearLength = 601223908;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 40806905;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int dayLength = 87096831;
    int yearLength = 466136762;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 87096831;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int dayLength = 23704993;
    int yearLength = 32218928;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 23704993;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int dayLength = 171036604;
    int yearLength = 363119789;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 171036604;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int dayLength = 125411702;
    int yearLength = 360268690;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 62705851;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int dayLength = 14338178;
    int yearLength = 462655516;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 7169089;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int dayLength = 39599910;
    int yearLength = 48518492;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 19799955;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int dayLength = 15574365;
    int yearLength = 115410731;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 15574365;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int dayLength = 751016177;
    int yearLength = 803999503;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 751016177;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int dayLength = 44469464;
    int yearLength = 45529651;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 44469464;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int dayLength = 356251142;
    int yearLength = 636214872;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 178125571;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int dayLength = 201565838;
    int yearLength = 207950781;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 201565838;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int dayLength = 26870741;
    int yearLength = 471339543;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 26870741;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int dayLength = 4367239;
    int yearLength = 496206463;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 4367239;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int dayLength = 139952609;
    int yearLength = 700270685;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 139952609;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int dayLength = 41332253;
    int yearLength = 647048032;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 41332253;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int dayLength = 340063063;
    int yearLength = 545561704;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 340063063;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int dayLength = 115375820;
    int yearLength = 847906168;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 28843955;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int dayLength = 6490633;
    int yearLength = 246420647;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 6490633;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int dayLength = 228796752;
    int yearLength = 426078735;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1622672;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int dayLength = 130012489;
    int yearLength = 693817532;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 130012489;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int dayLength = 474449252;
    int yearLength = 503597725;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 474449252;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int dayLength = 153493214;
    int yearLength = 515635060;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 76746607;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int dayLength = 111758095;
    int yearLength = 880946888;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 111758095;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int dayLength = 103068480;
    int yearLength = 274916560;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1288356;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int dayLength = 36901786;
    int yearLength = 513050110;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 18450893;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int dayLength = 6544111;
    int yearLength = 92024119;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 6544111;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int dayLength = 200016;
    int yearLength = 3851356;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 50004;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int dayLength = 60488587;
    int yearLength = 944110755;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 60488587;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int dayLength = 299088;
    int yearLength = 58184703;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 33232;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int dayLength = 26304256;
    int yearLength = 351887942;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 13152128;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int dayLength = 6925531;
    int yearLength = 339292005;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 6925531;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int dayLength = 3251535;
    int yearLength = 127489168;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 3251535;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int dayLength = 2079018;
    int yearLength = 464392819;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2079018;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int dayLength = 20840778;
    int yearLength = 211310177;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 20840778;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int dayLength = 1;
    int yearLength = 5;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int dayLength = 982451653;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 982451653;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int dayLength = 416136506;
    int yearLength = 633781683;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 416136506;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int dayLength = 999999997;
    int yearLength = 999999999;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 999999997;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int dayLength = 10000001;
    int yearLength = 99999999;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 909091;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int dayLength = 3021375;
    int yearLength = 3021377;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 3021375;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int dayLength = 4;
    int yearLength = 8;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int dayLength = 10;
    int yearLength = 20;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int dayLength = 90000011;
    int yearLength = 900000013;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 90000011;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int dayLength = 600000001;
    int yearLength = 700000001;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 600000001;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int dayLength = 531807762;
    int yearLength = 778010983;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 531807762;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int dayLength = 99999997;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 99999997;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int dayLength = 10;
    int yearLength = 10;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int dayLength = 549876685;
    int yearLength = 846555154;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 549876685;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int dayLength = 423432;
    int yearLength = 834241298;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 211716;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int dayLength = 999917171;
    int yearLength = 999971717;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 999917171;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int dayLength = 500000000;
    int yearLength = 999999999;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int dayLength = 999999929;
    int yearLength = 999999937;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 999999929;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int dayLength = 999999997;
    int yearLength = 999999998;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 999999997;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int dayLength = 33;
    int yearLength = 99;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int dayLength = 2;
    int yearLength = 4;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int dayLength = 10;
    int yearLength = 1000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int dayLength = 1;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int dayLength = 5;
    int yearLength = 10;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int dayLength = 982451653;
    int yearLength = 982451654;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 982451653;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int dayLength = 2;
    int yearLength = 5;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int dayLength = 3;
    int yearLength = 9;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int dayLength = 1;
    int yearLength = 2;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int dayLength = 999999997;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 999999997;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int dayLength = 99999998;
    int yearLength = 99999999;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 99999998;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int dayLength = 4;
    int yearLength = 256;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int dayLength = 999999001;
    int yearLength = 999999059;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 999999001;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int dayLength = 900000001;
    int yearLength = 999999999;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 900000001;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int dayLength = 1000000000;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int dayLength = 4234329;
    int yearLength = 834241298;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 384939;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int dayLength = 999991;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 999991;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int dayLength = 100000000;
    int yearLength = 199999999;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 100000000;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int dayLength = 2;
    int yearLength = 6;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int dayLength = 999999677;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 999999677;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int dayLength = 4;
    int yearLength = 4;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int dayLength = 999999998;
    int yearLength = 999999999;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int dayLength = 3;
    int yearLength = 3;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int dayLength = 1;
    int yearLength = 100;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int dayLength = 715827883;
    int yearLength = 999999937;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 715827883;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int dayLength = 925234243;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 925234243;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int dayLength = 999999929;
    int yearLength = 999999930;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 999999929;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int dayLength = 100;
    int yearLength = 100;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int dayLength = 999999929;
    int yearLength = 999999932;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 999999929;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int dayLength = 999999883;
    int yearLength = 999999937;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 999999883;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int dayLength = 2;
    int yearLength = 2;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int dayLength = 123456789;
    int yearLength = 999999999;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 13717421;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int dayLength = 999999986;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 499999993;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int dayLength = 1000;
    int yearLength = 100000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int dayLength = 100;
    int yearLength = 200;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int dayLength = 209161009;
    int yearLength = 209231866;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 209161009;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int dayLength = 800100001;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 800100001;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int dayLength = 1000;
    int yearLength = 1000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int dayLength = 4;
    int yearLength = 1460;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int dayLength = 4;
    int yearLength = 7;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int dayLength = 10000000;
    int yearLength = 19999999;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 10000000;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int dayLength = 50;
    int yearLength = 100;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int dayLength = 1061;
    int yearLength = 1061;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int dayLength = 3215231;
    int yearLength = 302137743;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 3215231;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int dayLength = 961274177;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 961274177;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int dayLength = 823456787;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 823456787;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int dayLength = 5;
    int yearLength = 5;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int dayLength = 499999999;
    int yearLength = 500000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 499999999;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int dayLength = 737312243;
    int yearLength = 1000000000;
    DesignCalendar* pObj = new DesignCalendar();
    clock_t start = clock();
    int result = pObj->shortestPeriod(dayLength, yearLength);
    clock_t end = clock();
    delete pObj;
    int expected = 737312243;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22662189&rd=13518&pm=10155
********************************************************************************
#define _CRT_SECURE_NO_DEPRECATE 
 
#include <stdio.h> 
#include <memory.h> 
#include <iostream> 
#include <sstream> 
#include <assert.h> 
#include <algorithm> 
#include <functional> 
#include <vector> 
#include <string> 
#include <map> 
#include <set> 
 
#define fo(a,b,c) for( a = ( b ); a < ( c ); ++ a ) 
#define fr(a,b) fo( a, 0, ( b ) ) 
#define fi(a) fr( i, ( a ) ) 
#define fj(a) fr( j, ( a ) ) 
#define fk(a) fr( k, ( a ) ) 
#define mp make_pair 
#define pb push_back 
#define all(v) (v).begin( ), (v).end( ) 
 
using namespace std; 
 
 
class DesignCalendar  
{ 
public: 
  int gcd( int a, int b ) 
  { 
    return (b) ? gcd( b, a % b ) : a; 
  } 
  int shortestPeriod(int a, int b)  
  { 
    return a / gcd( a, b ); 
  } 
   
  
}; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/