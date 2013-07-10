/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2300
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

class DinkyFish {
public:
    int monthsUntilCrowded(int tankVolume, int maleNum, int femaleNum);
};

int DinkyFish::monthsUntilCrowded(int tankVolume, int maleNum, int femaleNum) {
    int ret;
    return ret;
}


int test0() {
    int tankVolume = 10;
    int maleNum = 4;
    int femaleNum = 6;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
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
    int tankVolume = 100;
    int maleNum = 4;
    int femaleNum = 6;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int tankVolume = 5;
    int maleNum = 6;
    int femaleNum = 4;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int tankVolume = 4;
    int maleNum = 6;
    int femaleNum = 4;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int tankVolume = 1000000;
    int maleNum = 3;
    int femaleNum = 2;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int tankVolume = 431131;
    int maleNum = 764;
    int femaleNum = 249;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int tankVolume = 948885;
    int maleNum = 971;
    int femaleNum = 526;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int tankVolume = 21506;
    int maleNum = 919;
    int femaleNum = 520;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int tankVolume = 118094;
    int maleNum = 183;
    int femaleNum = 503;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int tankVolume = 955277;
    int maleNum = 293;
    int femaleNum = 477;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int tankVolume = 678033;
    int maleNum = 457;
    int femaleNum = 171;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int tankVolume = 268744;
    int maleNum = 210;
    int femaleNum = 401;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int tankVolume = 327864;
    int maleNum = 227;
    int femaleNum = 914;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int tankVolume = 411244;
    int maleNum = 242;
    int femaleNum = 31;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int tankVolume = 307459;
    int maleNum = 388;
    int femaleNum = 247;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int tankVolume = 356731;
    int maleNum = 757;
    int femaleNum = 431;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int tankVolume = 291086;
    int maleNum = 218;
    int femaleNum = 728;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int tankVolume = 835213;
    int maleNum = 94;
    int femaleNum = 714;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int tankVolume = 781165;
    int maleNum = 380;
    int femaleNum = 66;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int tankVolume = 299824;
    int maleNum = 738;
    int femaleNum = 976;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int tankVolume = 700535;
    int maleNum = 808;
    int femaleNum = 936;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int tankVolume = 470158;
    int maleNum = 444;
    int femaleNum = 194;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int tankVolume = 524441;
    int maleNum = 559;
    int femaleNum = 757;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int tankVolume = 977161;
    int maleNum = 411;
    int femaleNum = 714;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int tankVolume = 204060;
    int maleNum = 262;
    int femaleNum = 4;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int tankVolume = 25898;
    int maleNum = 820;
    int femaleNum = 553;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int tankVolume = 426602;
    int maleNum = 95;
    int femaleNum = 795;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int tankVolume = 992799;
    int maleNum = 720;
    int femaleNum = 776;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int tankVolume = 669500;
    int maleNum = 391;
    int femaleNum = 502;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int tankVolume = 641454;
    int maleNum = 430;
    int femaleNum = 574;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int tankVolume = 273734;
    int maleNum = 987;
    int femaleNum = 461;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int tankVolume = 90626;
    int maleNum = 94;
    int femaleNum = 201;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int tankVolume = 812595;
    int maleNum = 404;
    int femaleNum = 143;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int tankVolume = 337808;
    int maleNum = 594;
    int femaleNum = 110;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int tankVolume = 536745;
    int maleNum = 399;
    int femaleNum = 480;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int tankVolume = 523748;
    int maleNum = 697;
    int femaleNum = 924;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int tankVolume = 513296;
    int maleNum = 760;
    int femaleNum = 824;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int tankVolume = 48230;
    int maleNum = 977;
    int femaleNum = 477;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int tankVolume = 173329;
    int maleNum = 871;
    int femaleNum = 141;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int tankVolume = 77533;
    int maleNum = 30;
    int femaleNum = 984;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int tankVolume = 141912;
    int maleNum = 710;
    int femaleNum = 247;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int tankVolume = 545276;
    int maleNum = 523;
    int femaleNum = 847;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int tankVolume = 308105;
    int maleNum = 598;
    int femaleNum = 452;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int tankVolume = 294032;
    int maleNum = 671;
    int femaleNum = 807;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int tankVolume = 557796;
    int maleNum = 607;
    int femaleNum = 680;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int tankVolume = 330247;
    int maleNum = 229;
    int femaleNum = 959;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int tankVolume = 135324;
    int maleNum = 653;
    int femaleNum = 333;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int tankVolume = 582323;
    int maleNum = 924;
    int femaleNum = 434;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int tankVolume = 749403;
    int maleNum = 353;
    int femaleNum = 173;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int tankVolume = 226239;
    int maleNum = 933;
    int femaleNum = 673;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int tankVolume = 459169;
    int maleNum = 526;
    int femaleNum = 443;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int tankVolume = 136628;
    int maleNum = 434;
    int femaleNum = 374;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int tankVolume = 35028;
    int maleNum = 722;
    int femaleNum = 924;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int tankVolume = 349905;
    int maleNum = 804;
    int femaleNum = 779;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int tankVolume = 477094;
    int maleNum = 448;
    int femaleNum = 742;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int tankVolume = 901631;
    int maleNum = 36;
    int femaleNum = 22;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int tankVolume = 540756;
    int maleNum = 482;
    int femaleNum = 300;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int tankVolume = 772601;
    int maleNum = 152;
    int femaleNum = 343;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int tankVolume = 629442;
    int maleNum = 285;
    int femaleNum = 997;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int tankVolume = 992741;
    int maleNum = 611;
    int femaleNum = 66;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int tankVolume = 28071;
    int maleNum = 31;
    int femaleNum = 530;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int tankVolume = 559030;
    int maleNum = 292;
    int femaleNum = 325;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int tankVolume = 434435;
    int maleNum = 742;
    int femaleNum = 309;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int tankVolume = 807007;
    int maleNum = 882;
    int femaleNum = 213;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int tankVolume = 896997;
    int maleNum = 930;
    int femaleNum = 343;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int tankVolume = 774047;
    int maleNum = 590;
    int femaleNum = 211;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int tankVolume = 243000;
    int maleNum = 775;
    int femaleNum = 786;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int tankVolume = 204537;
    int maleNum = 746;
    int femaleNum = 493;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int tankVolume = 920332;
    int maleNum = 399;
    int femaleNum = 294;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int tankVolume = 195867;
    int maleNum = 979;
    int femaleNum = 767;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int tankVolume = 569380;
    int maleNum = 190;
    int femaleNum = 944;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int tankVolume = 539794;
    int maleNum = 375;
    int femaleNum = 210;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int tankVolume = 676669;
    int maleNum = 379;
    int femaleNum = 189;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int tankVolume = 401270;
    int maleNum = 378;
    int femaleNum = 123;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int tankVolume = 825992;
    int maleNum = 655;
    int femaleNum = 781;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int tankVolume = 590151;
    int maleNum = 694;
    int femaleNum = 489;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int tankVolume = 881949;
    int maleNum = 895;
    int femaleNum = 306;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int tankVolume = 974360;
    int maleNum = 732;
    int femaleNum = 184;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int tankVolume = 530324;
    int maleNum = 676;
    int femaleNum = 182;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int tankVolume = 571512;
    int maleNum = 844;
    int femaleNum = 674;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int tankVolume = 561554;
    int maleNum = 417;
    int femaleNum = 494;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int tankVolume = 345175;
    int maleNum = 988;
    int femaleNum = 406;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int tankVolume = 546418;
    int maleNum = 119;
    int femaleNum = 348;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int tankVolume = 356267;
    int maleNum = 660;
    int femaleNum = 588;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int tankVolume = 308511;
    int maleNum = 554;
    int femaleNum = 291;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int tankVolume = 702387;
    int maleNum = 487;
    int femaleNum = 432;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int tankVolume = 34231;
    int maleNum = 89;
    int femaleNum = 922;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int tankVolume = 685142;
    int maleNum = 892;
    int femaleNum = 731;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int tankVolume = 312676;
    int maleNum = 194;
    int femaleNum = 246;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int tankVolume = 395882;
    int maleNum = 426;
    int femaleNum = 254;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int tankVolume = 738096;
    int maleNum = 460;
    int femaleNum = 460;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int tankVolume = 874816;
    int maleNum = 132;
    int femaleNum = 359;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int tankVolume = 576510;
    int maleNum = 761;
    int femaleNum = 817;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int tankVolume = 241065;
    int maleNum = 348;
    int femaleNum = 66;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int tankVolume = 452108;
    int maleNum = 100;
    int femaleNum = 207;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int tankVolume = 641295;
    int maleNum = 341;
    int femaleNum = 789;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int tankVolume = 324032;
    int maleNum = 511;
    int femaleNum = 160;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int tankVolume = 878187;
    int maleNum = 807;
    int femaleNum = 644;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int tankVolume = 65843;
    int maleNum = 68;
    int femaleNum = 400;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int tankVolume = 980453;
    int maleNum = 138;
    int femaleNum = 411;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int tankVolume = 30;
    int maleNum = 4;
    int femaleNum = 12;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int tankVolume = 40;
    int maleNum = 10;
    int femaleNum = 10;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int tankVolume = 1;
    int maleNum = 1;
    int femaleNum = 1;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int tankVolume = 1;
    int maleNum = 1;
    int femaleNum = 2;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int tankVolume = 1;
    int maleNum = 2;
    int femaleNum = 1;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int tankVolume = 10;
    int maleNum = 10;
    int femaleNum = 11;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int tankVolume = 100;
    int maleNum = 3;
    int femaleNum = 5;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int tankVolume = 431131;
    int maleNum = 764;
    int femaleNum = 249;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int tankVolume = 2;
    int maleNum = 1;
    int femaleNum = 1;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int tankVolume = 50;
    int maleNum = 50;
    int femaleNum = 50;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int tankVolume = 3;
    int maleNum = 1;
    int femaleNum = 3;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int tankVolume = 6;
    int maleNum = 6;
    int femaleNum = 7;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int tankVolume = 100;
    int maleNum = 40;
    int femaleNum = 60;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int tankVolume = 6;
    int maleNum = 6;
    int femaleNum = 6;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
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
    int tankVolume = 5;
    int maleNum = 6;
    int femaleNum = 4;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int tankVolume = 10;
    int maleNum = 6;
    int femaleNum = 4;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int tankVolume = 10;
    int maleNum = 9;
    int femaleNum = 100;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int tankVolume = 2;
    int maleNum = 2;
    int femaleNum = 3;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int tankVolume = 4;
    int maleNum = 4;
    int femaleNum = 5;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int tankVolume = 8;
    int maleNum = 12;
    int femaleNum = 1;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int tankVolume = 10;
    int maleNum = 2;
    int femaleNum = 8;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int tankVolume = 20;
    int maleNum = 1;
    int femaleNum = 20;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int tankVolume = 17;
    int maleNum = 4;
    int femaleNum = 6;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int tankVolume = 8;
    int maleNum = 9;
    int femaleNum = 8;
    DinkyFish* pObj = new DinkyFish();
    clock_t start = clock();
    int result = pObj->monthsUntilCrowded(tankVolume, maleNum, femaleNum);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7453403&rd=4720&pm=2300
********************************************************************************
struct DinkyFish{
   int monthsUntilCrowded( int tankVolume, int maleNum, int femaleNum ) {
      int month=0;
      while( maleNum+femaleNum <= tankVolume*2 ) {
  month++;
  int min = ( maleNum<femaleNum ? maleNum : femaleNum );
        maleNum+=min;
        femaleNum+=min;
      }
      return month;
   }
};

********************************************************************************
*******************************************************************************/