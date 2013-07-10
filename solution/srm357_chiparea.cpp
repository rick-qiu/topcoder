/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4593
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

class ChipArea {
public:
    double maxArea(int skip, int n);
};

double ChipArea::maxArea(int skip, int n) {
    double ret;
    return ret;
}


int test0() {
    int skip = 0;
    int n = 3;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6058657896932963;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int skip = 3;
    int n = 3;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6885306552897291;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int skip = 7995;
    int n = 25000;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002543062783060902;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int skip = 1;
    int n = 3;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6885306552897291;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int skip = 0;
    int n = 1000;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012695160182229447;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int skip = 10000;
    int n = 5000;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0035310390901411746;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int skip = 7000;
    int n = 4999;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003949749379897588;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int skip = 0;
    int n = 4889;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0036962718898736653;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int skip = 10000;
    int n = 2500;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006200603687543239;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int skip = 3456;
    int n = 1250;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012627514885098957;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int skip = 5000;
    int n = 8000;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003253670188028391;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int skip = 10276;
    int n = 23265;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0026075742156626428;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int skip = 15390;
    int n = 3160;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0050773611279361;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int skip = 1914;
    int n = 18565;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0025909794103504084;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int skip = 14732;
    int n = 23682;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0025860367295155633;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int skip = 9289;
    int n = 20459;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002578640912020997;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int skip = 11730;
    int n = 12126;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0027905961037583563;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int skip = 10078;
    int n = 18451;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0026075742156626428;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int skip = 7528;
    int n = 10201;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0028970645275776937;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int skip = 3569;
    int n = 24157;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0025662659106435487;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int skip = 5770;
    int n = 14794;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0026825160813567536;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int skip = 8294;
    int n = 25000;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0026075742156626428;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int skip = 12675;
    int n = 25000;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0025465494212229657;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int skip = 2456;
    int n = 25000;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0025582730996991624;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int skip = 1848;
    int n = 25000;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0025320834094712456;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int skip = 3316;
    int n = 25000;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0025582730996991624;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int skip = 4906;
    int n = 25000;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0025320834094712456;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int skip = 2672;
    int n = 25000;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0025582730996991624;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int skip = 19097;
    int n = 25000;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002557061792719473;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int skip = 0;
    int n = 25000;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002542557902248764;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int skip = 20000;
    int n = 25000;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002558396164934467;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int skip = 13857;
    int n = 2;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7384546376067971;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int skip = 13605;
    int n = 2;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7512068644436205;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int skip = 8753;
    int n = 2;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6709526267474818;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int skip = 19907;
    int n = 2;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5502585484813174;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int skip = 306;
    int n = 2;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.580150369772959;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int skip = 3876;
    int n = 3;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8634346761321042;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int skip = 327;
    int n = 3;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7699892129802773;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int skip = 15819;
    int n = 3;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5017787764614248;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int skip = 11168;
    int n = 4;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6209058718117819;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int skip = 3762;
    int n = 4;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6278570920791131;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int skip = 0;
    int n = 3000;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0053171745173182395;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int skip = 2657;
    int n = 2;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4487007515408176;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int skip = 12321;
    int n = 2;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.615729203993725;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int skip = 15952;
    int n = 2;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8629558001353441;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int skip = 2215;
    int n = 3;
    ChipArea* pObj = new ChipArea();
    clock_t start = clock();
    double result = pObj->maxArea(skip, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8157487800137614;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10766&pm=4593
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
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
#include <stack> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
typedef long long int64; 
typedef unsigned long long uint64; 
#define two(X) (1<<(X)) 
#define twoL(X) (((int64)(1))<<(X)) 
#define contain(S,X) (((S)&two(X))!=0) 
#define containL(S,X) (((S)&twoL(X))!=0) 
const double pi=acos(-1.0); 
const double eps=1e-11; 
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;} 
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;} 
template<class T> inline T sqr(T x){return x*x;} 
typedef pair<int,int> ipair; 
 
const int size=323537; 
const int maxn=25000+5; 
 
class ChipArea 
{ 
public: 
  int n; 
  int X[maxn],Y[maxn],L[maxn]; 
  int64 result; 
  void init(int skip,int n) 
  { 
    int R=1; 
    for(int j = 0; j < skip; j++) R = 111 * R % 323537; 
    for(int pt = 0; pt < n; pt++) 
    { 
      R = 111*R%323537;X[pt+1]=R; 
      R = 111*R%323537;Y[pt+1]=R; 
    } 
  } 
  void solve1() 
  { 
    ipair AP[maxn]; 
    for (int i=1;i<=n;i++) AP[i]=make_pair(X[i],Y[i]); 
    sort(AP+1,AP+n+1); 
    for (int i=1;i<=n;i++) X[i]=AP[i].first,Y[i]=AP[i].second; 
    for (int i=1;i<=n;i++) 
    { 
      int L=0,R=size,X0=X[i],Y0=Y[i]; 
      for (int k=i+1;k<=n;k++) 
      { 
        checkmax(result,(int64)(R-L)*(int64)(X[k]-X0)); 
        if (Y[k]<Y0) checkmax(L,Y[k]); 
        if (Y[k]>Y0) checkmin(R,Y[k]); 
        if ((int64)(R-L)*(int64)(size-X0)<=result) break; 
      } 
      checkmax(result,(int64)(R-L)*(int64)(size-X0)); 
    } 
  } 
  void solve2() 
  { 
    int Qsize=2; 
    L[1]=0; 
    L[2]=size; 
    for (int i=1;i<=n;i++) 
    { 
      int X0=X[i],Y0=Y[i]; 
      for (int k=1;k<=Qsize;k++) 
        if (Y0==L[k]) 
          break; 
        else if (Y0<L[k+1]) 
        { 
          checkmax(result,(int64)(L[k+1]-L[k])*(int64)(X0)); 
          Qsize++; 
          for (int v=Qsize;v>k;v--) L[v]=L[v-1]; 
          L[k+1]=Y0; 
          break; 
        } 
    } 
    for (int k=1;k<Qsize;k++) 
      checkmax(result,(int64)(L[k+1]-L[k])*(int64)(size)); 
  } 
  double maxArea(int skip, int _n) 
  { 
    n=_n; 
    init(skip,n); 
    result=0; 
    solve1(); 
    solve2(); 
    return (double)(result)/(double)(size)/(double)(size); 
  } 
};

********************************************************************************
*******************************************************************************/