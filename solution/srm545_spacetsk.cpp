/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11937
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

class Spacetsk {
public:
    int countsets(int L, int H, int K);
};

int Spacetsk::countsets(int L, int H, int K) {
    int ret;
    return ret;
}


int test0() {
    int L = 1;
    int H = 1;
    int K = 2;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
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
    int L = 1;
    int H = 1;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int L = 2;
    int H = 2;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int L = 2;
    int H = 2;
    int K = 2;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int L = 10;
    int H = 8;
    int K = 6;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1502;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int L = 2000;
    int H = 2000;
    int K = 1000;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 151877339;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int L = 2000;
    int H = 2000;
    int K = 2000;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4008005;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int L = 1;
    int H = 2000;
    int K = 2000;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4002;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int L = 2000;
    int H = 1;
    int K = 2000;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int L = 1;
    int H = 1;
    int K = 2000;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
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
    int L = 2000;
    int H = 2000;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4004001;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int L = 1;
    int H = 2000;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4002;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int L = 2000;
    int H = 1;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4002;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int L = 5;
    int H = 5;
    int K = 3;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 202;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int L = 2000;
    int H = 2000;
    int K = 314;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 697236322;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int L = 2000;
    int H = 2000;
    int K = 373;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 524773139;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int L = 2000;
    int H = 2000;
    int K = 374;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 90861865;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int L = 2000;
    int H = 2000;
    int K = 348;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 133105885;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int L = 2000;
    int H = 2000;
    int K = 1602;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 547379130;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int L = 2000;
    int H = 2000;
    int K = 530;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 468926091;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int L = 2000;
    int H = 2000;
    int K = 139;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 226608514;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int L = 2000;
    int H = 2000;
    int K = 784;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 834860813;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int L = 2000;
    int H = 2000;
    int K = 1702;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 539949376;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int L = 2000;
    int H = 2000;
    int K = 1560;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 471514789;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int L = 1867;
    int H = 1090;
    int K = 1377;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int L = 962;
    int H = 724;
    int K = 1919;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int L = 1393;
    int H = 466;
    int K = 1482;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int L = 1830;
    int H = 1428;
    int K = 1131;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 233464949;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int L = 1870;
    int H = 652;
    int K = 1418;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int L = 1378;
    int H = 1494;
    int K = 271;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 509157650;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int L = 1212;
    int H = 876;
    int K = 1990;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int L = 1413;
    int H = 1100;
    int K = 1790;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int L = 1410;
    int H = 1319;
    int K = 473;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 759489792;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int L = 751;
    int H = 1729;
    int K = 1477;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 587260833;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int L = 743;
    int H = 758;
    int K = 38;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 175069635;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int L = 1741;
    int H = 1698;
    int K = 54;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 359322791;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int L = 1538;
    int H = 699;
    int K = 19;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 110941280;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int L = 121;
    int H = 129;
    int K = 44;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 277897384;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int L = 1289;
    int H = 854;
    int K = 52;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 393053037;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int L = 561;
    int H = 394;
    int K = 20;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 786097180;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int L = 4;
    int H = 557;
    int K = 83;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 37451909;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int L = 1949;
    int H = 1609;
    int K = 86;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 891710326;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int L = 895;
    int H = 271;
    int K = 15;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 643898239;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int L = 89;
    int H = 1985;
    int K = 43;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 364811797;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int L = 1;
    int H = 1;
    int K = 2;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int L = 1;
    int H = 1;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int L = 1;
    int H = 2;
    int K = 2;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int L = 1;
    int H = 3;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int L = 1;
    int H = 4;
    int K = 4;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int L = 1;
    int H = 5;
    int K = 4;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int L = 2;
    int H = 1;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int L = 2;
    int H = 2;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
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
    int L = 2;
    int H = 3;
    int K = 3;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int L = 2;
    int H = 4;
    int K = 4;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int L = 2;
    int H = 5;
    int K = 4;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int L = 3;
    int H = 1;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int L = 3;
    int H = 2;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int L = 3;
    int H = 3;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int L = 3;
    int H = 4;
    int K = 2;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int L = 3;
    int H = 5;
    int K = 5;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int L = 4;
    int H = 1;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
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
    int L = 4;
    int H = 2;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int L = 4;
    int H = 3;
    int K = 2;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int L = 4;
    int H = 4;
    int K = 3;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int L = 4;
    int H = 5;
    int K = 4;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int L = 5;
    int H = 1;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
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
    int L = 5;
    int H = 2;
    int K = 2;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int L = 5;
    int H = 3;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int L = 5;
    int H = 4;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int L = 5;
    int H = 5;
    int K = 1;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int L = 1998;
    int H = 2000;
    int K = 2;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 746070084;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int L = 1990;
    int H = 1991;
    int K = 3;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 896157189;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int L = 2000;
    int H = 1998;
    int K = 4;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 264942267;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int L = 1999;
    int H = 1997;
    int K = 5;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 306008222;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int L = 1990;
    int H = 1994;
    int K = 6;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 309815717;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int L = 1995;
    int H = 1999;
    int K = 7;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 664934527;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int L = 1991;
    int H = 1999;
    int K = 8;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 740213095;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int L = 1998;
    int H = 1993;
    int K = 9;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 81009664;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int L = 1996;
    int H = 1998;
    int K = 10;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30757729;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int L = 1991;
    int H = 1990;
    int K = 11;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14560881;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int L = 1995;
    int H = 1995;
    int K = 12;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 586486438;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int L = 2000;
    int H = 1991;
    int K = 13;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10635526;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int L = 1997;
    int H = 1999;
    int K = 14;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 224456032;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int L = 1990;
    int H = 1998;
    int K = 15;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 107528861;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int L = 1992;
    int H = 1991;
    int K = 16;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 404514335;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int L = 1992;
    int H = 1992;
    int K = 17;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 135572620;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int L = 1999;
    int H = 1996;
    int K = 18;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 682532160;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int L = 1997;
    int H = 1999;
    int K = 19;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 588574456;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int L = 2000;
    int H = 1992;
    int K = 20;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 676778405;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int L = 2000;
    int H = 2000;
    int K = 7;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 362865718;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int L = 2000;
    int H = 2000;
    int K = 15;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 273697280;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int L = 2000;
    int H = 2000;
    int K = 3;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 703376456;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int L = 2000;
    int H = 2000;
    int K = 17;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 304227118;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int L = 2000;
    int H = 2000;
    int K = 100;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 371115391;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int L = 1231;
    int H = 1456;
    int K = 54;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 884788862;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int L = 2000;
    int H = 2000;
    int K = 10;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 770655607;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int L = 2000;
    int H = 2000;
    int K = 5;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 515716267;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int L = 2000;
    int H = 2000;
    int K = 2;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 827908596;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int L = 2000;
    int H = 2000;
    int K = 32;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 987308232;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int L = 2000;
    int H = 2000;
    int K = 13;
    Spacetsk* pObj = new Spacetsk();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 846997;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=14737&pm=11937
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
typedef long long int64; 
template<class T> inline T gcd(T a,T b) 
  {if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);} 
 
const int maxsize=2000+5; 
const int MOD=1000000007; 
 
inline int ADD(int a,int b) 
{ 
  int c=a+b; 
  if (c>=MOD) c-=MOD; 
  return c; 
} 
inline int MUL(int a,int b) 
{ 
  return (int)((int64)a*b%MOD); 
} 
inline void ADDTO(int &a,int b) 
{ 
  a+=b; 
  if (a>=MOD) a-=MOD; 
} 
 
class Spacetsk 
{ 
public: 
  int c[maxsize][maxsize]; 
  int g[maxsize]; 
  int countsets(int L, int H, int K) 
  { 
    memset(c,0,sizeof(c)); 
    for (int i=0;i<maxsize;i++) for (int j=0;j<=i;j++) 
      c[i][j]=(j==0)?1:ADD(c[i-1][j-1],c[i-1][j]); 
    if (K==1) return MUL(L+1,H+1); 
    int R=c[H+1][K]; 
    R=MUL(R,L+1); 
    for (int dx=1;dx<=L;dx++)  
    { 
      g[0]=0; 
      for (int p=1;p<=L;p++) 
        g[p]=ADD(g[p-1],c[p/dx+1][K]); 
      for (int dy=1;dy<=H;dy++) 
        if (gcd(dx,dy)==1) 
        { 
          int d=H/dy; 
          int w=min(dx*d,L); 
          int s=g[w]; 
          if (w<L) 
            ADDTO(s,MUL(c[d+1][K],L-w)); 
          ADDTO(R,s); 
          ADDTO(R,s); 
        } 
    } 
    return R; 
  } 
};

********************************************************************************
*******************************************************************************/