/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12030
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

class SpacetskE {
public:
    int countsets(int L, int H, int K);
};

int SpacetskE::countsets(int L, int H, int K) {
    int ret;
    return ret;
}


int test0() {
    int L = 1;
    int H = 1;
    int K = 2;
    SpacetskE* pObj = new SpacetskE();
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
    SpacetskE* pObj = new SpacetskE();
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
    SpacetskE* pObj = new SpacetskE();
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
    SpacetskE* pObj = new SpacetskE();
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
    int L = 5;
    int H = 5;
    int K = 3;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 202;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int L = 10;
    int H = 8;
    int K = 6;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1502;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int L = 200;
    int H = 200;
    int K = 100;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 517966361;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int L = 200;
    int H = 200;
    int K = 200;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 40805;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int L = 1;
    int H = 200;
    int K = 200;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 402;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int L = 200;
    int H = 1;
    int K = 200;
    SpacetskE* pObj = new SpacetskE();
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
    int L = 1;
    int H = 1;
    int K = 200;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
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
    int L = 200;
    int H = 200;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 40401;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int L = 1;
    int H = 200;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 402;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int L = 200;
    int H = 1;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 402;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int L = 1;
    int H = 1;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int L = 200;
    int H = 200;
    int K = 114;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 203920813;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int L = 200;
    int H = 200;
    int K = 173;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 138294213;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int L = 200;
    int H = 200;
    int K = 174;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 343589215;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int L = 200;
    int H = 200;
    int K = 148;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 824534898;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int L = 200;
    int H = 200;
    int K = 2;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30011900;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int L = 200;
    int H = 200;
    int K = 130;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 130039306;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int L = 200;
    int H = 200;
    int K = 139;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 337785121;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int L = 200;
    int H = 200;
    int K = 184;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 267368674;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int L = 200;
    int H = 200;
    int K = 102;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 564238831;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int L = 200;
    int H = 200;
    int K = 160;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 569965212;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int L = 67;
    int H = 90;
    int K = 177;
    SpacetskE* pObj = new SpacetskE();
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
    int L = 162;
    int H = 124;
    int K = 119;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 909800140;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int L = 193;
    int H = 66;
    int K = 82;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int L = 30;
    int H = 28;
    int K = 131;
    SpacetskE* pObj = new SpacetskE();
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
    int L = 70;
    int H = 52;
    int K = 18;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 296314116;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int L = 178;
    int H = 94;
    int K = 71;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 810454039;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int L = 12;
    int H = 76;
    int K = 190;
    SpacetskE* pObj = new SpacetskE();
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
    int L = 13;
    int H = 100;
    int K = 190;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int L = 10;
    int H = 119;
    int K = 73;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 562046293;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int L = 151;
    int H = 129;
    int K = 77;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 588420568;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int L = 143;
    int H = 158;
    int K = 38;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 348751250;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int L = 141;
    int H = 98;
    int K = 4;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 180668731;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int L = 138;
    int H = 99;
    int K = 19;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 866933792;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int L = 121;
    int H = 129;
    int K = 44;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 277897384;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int L = 89;
    int H = 54;
    int K = 2;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1272918;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int L = 161;
    int H = 194;
    int K = 20;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 663266971;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int L = 4;
    int H = 157;
    int K = 33;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 479801757;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int L = 149;
    int H = 9;
    int K = 36;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int L = 95;
    int H = 71;
    int K = 15;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 533591205;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int L = 89;
    int H = 185;
    int K = 43;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 788690037;
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
    int K = 2;
    SpacetskE* pObj = new SpacetskE();
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
    int H = 1;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
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
    int H = 2;
    int K = 2;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
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
    int H = 3;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
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
    int H = 4;
    int K = 4;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int L = 1;
    int H = 5;
    int K = 4;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
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
    int H = 1;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
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
    int H = 2;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
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
    int H = 3;
    int K = 3;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
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
    int H = 4;
    int K = 4;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int L = 2;
    int H = 5;
    int K = 4;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
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
    int H = 1;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
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
    int H = 2;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
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
    int H = 3;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
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
    int H = 4;
    int K = 2;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int L = 3;
    int H = 5;
    int K = 5;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
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
    int H = 1;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
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
    int H = 2;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
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
    int H = 3;
    int K = 2;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
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
    int H = 4;
    int K = 3;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int L = 4;
    int H = 5;
    int K = 4;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
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
    int H = 1;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
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
    int H = 2;
    int K = 2;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
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
    int H = 3;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
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
    int H = 4;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int L = 5;
    int H = 5;
    int K = 1;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int L = 190;
    int H = 199;
    int K = 2;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 26855972;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int L = 200;
    int H = 190;
    int K = 3;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 511074661;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int L = 195;
    int H = 191;
    int K = 4;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 284265981;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int L = 191;
    int H = 196;
    int K = 5;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 710048046;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int L = 197;
    int H = 198;
    int K = 6;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 786327441;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int L = 193;
    int H = 200;
    int K = 7;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 99090937;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int L = 199;
    int H = 193;
    int K = 8;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 898059212;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int L = 197;
    int H = 193;
    int K = 9;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 657211695;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int L = 192;
    int H = 192;
    int K = 10;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 467235665;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int L = 194;
    int H = 193;
    int K = 11;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 999735483;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int L = 191;
    int H = 198;
    int K = 12;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 566307093;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int L = 197;
    int H = 193;
    int K = 13;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 48717751;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int L = 200;
    int H = 190;
    int K = 14;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 765435022;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int L = 190;
    int H = 194;
    int K = 15;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 425124561;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int L = 193;
    int H = 195;
    int K = 16;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 296845581;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int L = 191;
    int H = 199;
    int K = 17;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 791684200;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int L = 193;
    int H = 191;
    int K = 18;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 330491041;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int L = 199;
    int H = 199;
    int K = 19;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 513667931;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int L = 200;
    int H = 194;
    int K = 20;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 692800612;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int L = 200;
    int H = 200;
    int K = 3;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 565193480;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int L = 199;
    int H = 199;
    int K = 51;
    SpacetskE* pObj = new SpacetskE();
    clock_t start = clock();
    int result = pObj->countsets(L, H, K);
    clock_t end = clock();
    delete pObj;
    int expected = 742317626;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22833667&rd=14737&pm=12030
********************************************************************************
#include <algorithm>
#include <cmath>
#include <deque>
#include <functional>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <queue>
using namespace std;
 
typedef long long LL;
const int MAXN=1000;
const LL MOD=(LL)1e9+7LL;
 
int bino[MAXN][MAXN];
 
void init(){ fill(bino[0],bino[0]+MAXN*MAXN,-1); bino[0][0]=bino[1][0]=bino[1][1]=1; }
 
int nch(int n,int k){
    if(n<k) return 0;
    int &re=bino[n][k];
    if(re==-1)
        if(!k || !(n-k)) re=1;
        else re=(int)(((LL)nch(n-1,k)+(LL)nch(n-1,k-1))%MOD);
    return re;
}
 
struct SpacetskE {
    int countsets(int L,int H,int K) {
        init();
        int so=0;
        if(K==1) return (L+1)*(H+1);
        for(int x=0; x<=L; x++){
            for(int l=0; l<=L; l++)
                for(int h=1; h<=H; h++)
                    if(x-l==0){
                        so=(so+nch(H+1,K))%MOD;   
                        break;
                    }else if(__gcd(abs(x-l),h)==1){
                        int cx=x,ch=0,cnt=0;
                        while(cx>=0 && cx<=L && ch<=H){
                            cnt++;
                            cx+=(l-x);
                            ch+=h;
                        }
                        so=(so+nch(cnt,K))%MOD;   
                    }
        }
        return so;
    };
};
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/