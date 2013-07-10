/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4848
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

class JumpyNum {
public:
    int howMany(int low, int high);
};

int JumpyNum::howMany(int low, int high) {
    int ret;
    return ret;
}


int test0() {
    int low = 1;
    int high = 10;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
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
    int low = 9;
    int high = 23;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int low = 2000000000;
    int high = 2000000000;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int low = 1;
    int high = 13;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
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
    int low = 22;
    int high = 99;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int low = 7922;
    int high = 7999;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int low = 8000;
    int high = 20934;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3766;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int low = 3;
    int high = 4;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int low = 1;
    int high = 2000000000;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 127322182;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int low = 1354100000;
    int high = 1354199999;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int low = 1033267184;
    int high = 1039084277;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int low = 368623901;
    int high = 745096298;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 29421953;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int low = 1619781555;
    int high = 1671374669;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 2998934;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int low = 330054207;
    int high = 389287129;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3978836;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int low = 1479021841;
    int high = 1574412682;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 6988993;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int low = 1073892123;
    int high = 1763500664;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 34920012;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int low = 241467314;
    int high = 484365900;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 18848044;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int low = 1592607457;
    int high = 1996091894;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 30384634;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int low = 1823158726;
    int high = 1857880428;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3525792;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int low = 1546048761;
    int high = 1887798220;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 24624641;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int low = 777302166;
    int high = 1498897233;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 30724592;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int low = 245652535;
    int high = 1544939342;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 75415095;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int low = 1303850182;
    int high = 1669604261;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 26467517;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int low = 1769203357;
    int high = 1978859279;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 16158437;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int low = 621165609;
    int high = 1401434096;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 34561474;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int low = 1354327837;
    int high = 1851729046;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 38708931;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int low = 721904111;
    int high = 1520685542;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 36759865;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int low = 467869903;
    int high = 1085150496;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 40218617;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int low = 792133895;
    int high = 901584580;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 7904617;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int low = 983015434;
    int high = 1306810923;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 654043;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int low = 1515585351;
    int high = 1837259401;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 23874620;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int low = 1003570298;
    int high = 1323340801;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 2104265;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int low = 1875376679;
    int high = 1969453691;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 7027822;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int low = 1114211617;
    int high = 1310371035;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 1121384;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int low = 1403905192;
    int high = 1879993713;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 35676698;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int low = 1076003968;
    int high = 1851093960;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 41296931;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int low = 1905291488;
    int high = 1964858599;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 6308065;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int low = 1697410152;
    int high = 1712122067;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 1178211;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int low = 1657126930;
    int high = 1956108164;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 22088557;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int low = 1536461910;
    int high = 1924074849;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 27379787;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int low = 2756;
    int high = 1361498984;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 79383250;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int low = 1193;
    int high = 191999890;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 16804464;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int low = 8918;
    int high = 1169349842;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 76084954;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int low = 9493;
    int high = 1509208000;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 91504183;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int low = 17400;
    int high = 827420065;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 63649081;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int low = 13259;
    int high = 1565443940;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 94597382;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int low = 9368;
    int high = 870993442;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 67988594;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int low = 17209;
    int high = 334943430;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 26953460;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int low = 3234;
    int high = 196123567;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 17378362;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int low = 9994;
    int high = 20795079;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 2552577;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int low = 20;
    int high = 205;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int low = 19;
    int high = 20;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int low = 1;
    int high = 2000000000;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 127322182;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int low = 11;
    int high = 2000000000;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 127322173;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int low = 34;
    int high = 425342523;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 34522091;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int low = 31;
    int high = 1900000053;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 119225983;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int low = 1;
    int high = 1234567;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 202174;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int low = 1000000000;
    int high = 2000000000;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 51233764;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int low = 1223;
    int high = 1999878453;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 127321646;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int low = 1456;
    int high = 13987456;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 1597294;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int low = 1029;
    int high = 923793743;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 70251287;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int low = 2;
    int high = 1999999999;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 127322181;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int low = 58;
    int high = 58;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int low = 99;
    int high = 9999999;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 1459616;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int low = 1;
    int high = 1974979797;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 127028615;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int low = 10;
    int high = 923793743;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 70251814;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int low = 13554267;
    int high = 293446455;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 22692631;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int low = 1423;
    int high = 1998931839;
    JumpyNum* pObj = new JumpyNum();
    clock_t start = clock();
    int result = pObj->howMany(low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 127321579;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=9821&pm=4848
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <functional> 
#include <iostream> 
#include <iterator> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <valarray> 
#include <vector> 
#include <utility> 
 
using namespace std; 
 
// Types 
typedef long double ld; 
typedef long long ll; 
typedef pair <int, int> pii; 
typedef vector <int> vi; 
typedef vector <pii> vp; 
typedef vector <ld> vd; 
typedef vector <string> vs; 
typedef vector <bool> vb; 
typedef queue <pii> qp; 
typedef map <string, int> msi; 
 
// Constants 
const int INF = 1000000000; 
const ld EPS = 1e-10L; 
const ld PI = 3.14159265358979L; 
 
class JumpyNum 
{ 
  int process(int low, int high, int cur, int lastD) 
  { 
    if (high / 10 < cur) 
      return 0; 
    int res = 0; 
    cur *= 10; 
    for (int i = 0; i < 10; ++ i) 
    { 
      if (abs(i - lastD) >= 2 && cur + i <= high) 
      { 
        if (cur + i >= low) 
          ++ res; 
        res += process(low, high, cur + i, i); 
      } 
    } 
    return res; 
  } 
public: 
  int howMany(int low, int high) 
  { 
    int res; 
    int n; 
    return process(low, high, 0, -1); 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/