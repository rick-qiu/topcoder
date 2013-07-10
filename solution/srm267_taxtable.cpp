/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4511
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

class TaxTable {
public:
    int income(int taxAmount);
};

int TaxTable::income(int taxAmount) {
    int ret;
    return ret;
}


int test0() {
    int taxAmount = 47025;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 200000;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int taxAmount = 1000;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int taxAmount = 47026;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 200003;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int taxAmount = 19001;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 102104;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int taxAmount = 19000;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 102100;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int taxAmount = 22787;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 117248;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int taxAmount = 22788;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 117252;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int taxAmount = 29967;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 142891;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int taxAmount = 29965;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 142884;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int taxAmount = 6525;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int taxAmount = 10043;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int taxAmount = 18475;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int taxAmount = 18474;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int taxAmount = 22787;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 117248;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int taxAmount = 22788;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 117252;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int taxAmount = 999923;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 2929371;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int taxAmount = 787878;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 2323529;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int taxAmount = 0;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int taxAmount = 666666;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 1977209;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int taxAmount = 889184;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 2612974;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int taxAmount = 836759;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 2463189;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int taxAmount = 334339;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 1027703;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int taxAmount = 398104;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 1209889;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int taxAmount = 637396;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 1893580;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int taxAmount = 951176;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 2790094;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int taxAmount = 46143;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 197327;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int taxAmount = 284070;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 884077;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int taxAmount = 948256;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 2781751;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int taxAmount = 147452;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 493740;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int taxAmount = 900744;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 2646003;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int taxAmount = 972184;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 2850117;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int taxAmount = 902279;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 2650389;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int taxAmount = 953199;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 2795874;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int taxAmount = 941035;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 2761120;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int taxAmount = 43;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int taxAmount = 19826;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 105404;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int taxAmount = 39999;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 178709;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int taxAmount = 29600;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 141580;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int taxAmount = 4757;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int taxAmount = 4782;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int taxAmount = 86295;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 319000;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int taxAmount = 86304;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 319027;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int taxAmount = 86324;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 319088;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int taxAmount = 86294;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 318997;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int taxAmount = 22792;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 117266;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int taxAmount = 22789;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 117255;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int taxAmount = 22788;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 117252;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int taxAmount = 22785;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 117240;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int taxAmount = 22786;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 117244;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int taxAmount = 22792;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 117266;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int taxAmount = 44444;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 192179;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int taxAmount = 18500;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 100100;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int taxAmount = 40000;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 178712;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int taxAmount = 99999;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 358160;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int taxAmount = 22790;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 117259;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int taxAmount = 100002;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 358169;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int taxAmount = 1000000;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 2929591;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int taxAmount = 10;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int taxAmount = 32002;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 150159;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int taxAmount = 32000;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 150152;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int taxAmount = 18474;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int taxAmount = 1000;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int taxAmount = 86330;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 319106;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int taxAmount = 47025;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 200000;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int taxAmount = 18475;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int taxAmount = 39980;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 178652;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int taxAmount = 47026;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 200003;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int taxAmount = 319100;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 984163;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int taxAmount = 23558;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 120002;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int taxAmount = 22788;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 117252;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int taxAmount = 18480;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 100020;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int taxAmount = 634643;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 1885714;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int taxAmount = 23000;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 118009;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int taxAmount = 86648;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 320014;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int taxAmount = 47047;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 200067;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int taxAmount = 22787;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 117248;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int taxAmount = 47044;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 200058;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int taxAmount = 329000;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 1012449;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int taxAmount = 96327;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 347669;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int taxAmount = 420000;
    TaxTable* pObj = new TaxTable();
    clock_t start = clock();
    int result = pObj->income(taxAmount);
    clock_t end = clock();
    delete pObj;
    int expected = 1272449;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=16067637&rd=8000&pm=4511
********************************************************************************
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;
class TaxTable
{
public:
int income (int taxMount)
{
     double total;
     total=taxMount+6525;
     total/=.25;
     if (total>=100000 && total<117250) return (int)(total+.5);
     total=taxMount+10042.5;
     total/=.28;
     if (total>=117250 && total<178650) return (int)(total+.5);
     total=taxMount+18975;
     total/=.33;
     if (total>=178650 && total<319100) return (int)(total+.5);
     total=taxMount+25357;
     total/=.35;
     if (total>=319100) return (int)(total+.5);
     return -1;
     }
     };

********************************************************************************
*******************************************************************************/