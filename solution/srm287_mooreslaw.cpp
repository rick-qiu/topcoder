/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5973
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

class MooresLaw {
public:
    double shortestComputationTime(int years);
};

double MooresLaw::shortestComputationTime(int years) {
    double ret;
    return ret;
}


int test0() {
    int years = 14;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 6.2044816339207705;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int years = 3;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 2.870893001916099;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int years = 47;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 8.82533252835082;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int years = 123;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 10.907221008843223;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int years = 1;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int years = 2;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int years = 4;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4934492508343644;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int years = 5;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 3.976341393165408;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int years = 15;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 6.3537851442471425;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int years = 23;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 7.278792184919884;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int years = 37;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 8.307629299277789;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int years = 59;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 9.317413824877127;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int years = 145;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 11.263312885856767;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int years = 172;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 11.63284638288751;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int years = 578;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 14.255837774585384;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int years = 792;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 14.937484180953778;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int years = 2341;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 17.282813079502382;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int years = 7985;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 19.938064289282256;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int years = 22145;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 22.145489315993384;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int years = 19728;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 21.895384877438623;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int years = 74470;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 24.77000685648385;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int years = 135498;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 26.065317298034948;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int years = 603785;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 29.29896233651874;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int years = 2547800;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 32.414680152491634;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int years = 5000000;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 33.87369424715167;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int years = 12345678;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 35.82970335003532;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int years = 87654321;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 40.0714320647176;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int years = 123456789;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 40.812595650125076;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int years = 456789012;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 43.643878310398875;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int years = 912121212;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 45.14042472529701;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int years = 992134572;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 45.322390118570624;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int years = 999912360;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 45.33928886681244;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int years = 999990989;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 45.339459031538375;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int years = 999999947;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 45.3394784171195;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int years = 999999997;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 45.339478525321624;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int years = 999999998;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 45.33947852748567;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int years = 999999999;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 45.33947852964971;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int years = 1000000000;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 45.339478531813754;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int years = 1000000000;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 45.339478531813754;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int years = 1;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int years = 999999999;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 45.33947852964971;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int years = 2;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int years = 999999997;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 45.339478525321624;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int years = 14;
    MooresLaw* pObj = new MooresLaw();
    clock_t start = clock();
    double result = pObj->shortestComputationTime(years);
    clock_t end = clock();
    delete pObj;
    double expected = 6.2044816339207705;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=2058177&rd=9808&pm=5973
********************************************************************************
#include <vector> 
#include <string> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <cmath> 
 
using namespace std; 
 
class MooresLaw  {  
    public:  
 
    double y; 
 
    double getTime(double x) { 
      double a = exp(log(2.0) / 1.5); 
      double mult = 1.0; 
      if (fabs(x) > 1e-10) mult = exp(log(a) * x); 
      return (x + y / mult); 
    } 
 
    double shortestComputationTime(int years) {  
    y = 1.0 * years; 
    double l, r, m1, m2; 
    l = 0.0; 
    r = 1e9; 
    while (fabs(r - l) > 1e-10) { 
      m1 = l + (r - l) / 3; 
      m2 = r - (r - l) / 3; 
      double tA = getTime(l); 
      double tM1 = getTime(m1); 
      double tM2 = getTime(m2); 
      //double tB = getTime(r); 
      if (tM1 < tA && tM2 < tM1) l = m1; else r = m2; 
    } 
    return getTime(l); 
      }  
 
     
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/