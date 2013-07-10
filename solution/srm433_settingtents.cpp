/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10191
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

class SettingTents {
public:
    int countSites(int N, int M);
};

int SettingTents::countSites(int N, int M) {
    int ret;
    return ret;
}


int test0() {
    int N = 2;
    int M = 2;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 1;
    int M = 6;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 6;
    int M = 8;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 527;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 100;
    int M = 100;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 38235298;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 98;
    int M = 99;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 35869694;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 1;
    int M = 1;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 26;
    int M = 1;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 100;
    int M = 1;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 1;
    int M = 100;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 1;
    int M = 56;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 2;
    int M = 27;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 262;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 66;
    int M = 2;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1286;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 3;
    int M = 3;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 9;
    int M = 3;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 3;
    int M = 88;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 4900;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 4;
    int M = 100;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 12716;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 25;
    int M = 25;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 111977;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 44;
    int M = 46;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1324538;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 50;
    int M = 50;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2068014;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 31;
    int M = 74;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1362536;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 31;
    int M = 75;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1393342;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 31;
    int M = 76;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1424388;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 31;
    int M = 77;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1455562;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 77;
    int M = 78;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 13083584;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 77;
    int M = 79;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 13433601;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 77;
    int M = 80;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 13790536;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 81;
    int M = 84;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 17003180;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 91;
    int M = 90;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 25121322;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 91;
    int M = 91;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 25714110;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 91;
    int M = 92;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 26312048;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 91;
    int M = 93;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 26912486;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 100;
    int M = 90;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 30481429;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 66;
    int M = 33;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1316270;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 11;
    int M = 97;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 138062;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 37;
    int M = 81;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2489211;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 99;
    int M = 100;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 37429856;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 100;
    int M = 99;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 37429856;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 61;
    int M = 17;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 209747;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 32;
    int M = 64;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1155462;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 64;
    int M = 88;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 10973510;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 81;
    int M = 27;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1107492;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 20;
    int M = 20;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 43850;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 21;
    int M = 29;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 101297;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 48;
    int M = 98;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 6621616;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 45;
    int M = 35;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 760000;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 40;
    int M = 31;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 458936;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 83;
    int M = 28;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1267800;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 45;
    int M = 69;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 3043939;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 26;
    int M = 64;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 683457;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 52;
    int M = 70;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 4399078;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 49;
    int M = 44;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1505592;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 73;
    int M = 26;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 848910;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 59;
    int M = 89;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 9247310;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 2;
    int M = 7;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 20;
    int M = 71;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 409116;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 31;
    int M = 70;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1241480;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 91;
    int M = 26;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1210502;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 71;
    int M = 78;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 10985040;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 3;
    int M = 18;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 350;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 68;
    int M = 30;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1089123;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 56;
    int M = 17;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 183052;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 5;
    int M = 65;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 9891;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 65;
    int M = 74;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 8137442;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 100;
    int M = 21;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 798880;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 71;
    int M = 79;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 11268888;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 18;
    int M = 44;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 143459;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 52;
    int M = 68;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 4163986;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 32;
    int M = 33;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 336720;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 19;
    int M = 15;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 20940;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 38;
    int M = 16;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 83288;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 86;
    int M = 75;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 15076350;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 22;
    int M = 2;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 186;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 82;
    int M = 79;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 15331400;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 99;
    int M = 89;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 29142341;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 97;
    int M = 99;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 35099673;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 100;
    int M = 98;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 36634311;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 99;
    int M = 99;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 36645046;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 98;
    int M = 67;
    SettingTents* pObj = new SettingTents();
    clock_t start = clock();
    int result = pObj->countSites(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 14932418;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7459080&rd=13695&pm=10191
********************************************************************************
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
 
typedef long long LL;
typedef vector <string> vs;
typedef vector <int> vi;
typedef vector <LL> vll;
typedef vector <double> vd;
typedef pair <int,int> pii;
 
 
class SettingTents {
public:
  int countSites(int, int);
};
 
vector <pii> lis[30000];
bool collinear(const pii& a, const pii& b)
{
  return (a.first*b.second == a.second*b.first);
}
 
int SettingTents::countSites(int n, int m) {
  
  int i, j;
  for (i=0; i<30000; i++) lis[i].clear();  
  for (i=-100; i<=100; i++) for (j=-100; j<=100; j++)
  {
    int d = i*i + j*j;
    lis[d].push_back( make_pair(i,j) );
  }
  
  int k;
  int miny, minx, maxy, maxx;
  int y1, y2, y3, x1, x2, x3;
  
  int dx, dy;
  int res = 0;
  for (i=1; i<=20000; i++)
  {
    for (j=0; j<lis[i].size(); j++) for (k=j+1; k<lis[i].size(); k++)
    {
      if (collinear(lis[i][j], lis[i][k])) continue;
      
      miny = minx = maxy = maxx = 0;
      
      y1 = lis[i][j].first; y2 = lis[i][k].first; y3 = y1+y2;
      x1 = lis[i][j].second; x2 = lis[i][k].second; x3 = x1+x2;
      miny <?= y1; miny <?= y2; miny <?= y3;
      maxy >?= y1; maxy >?= y2; maxy >?= y3;
      minx <?= x1; minx <?= x2; minx <?= x3;
      maxx >?= x1; maxx >?= x2; maxx >?= x3;
      
      dx = maxx-minx;
      dy = maxy-miny;
      if (dx > m) continue;
      if (dy > n) continue;
            
      res += (n-dy+1) * (m-dx+1);
    }
  }
  res /= 4;
  return res;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/