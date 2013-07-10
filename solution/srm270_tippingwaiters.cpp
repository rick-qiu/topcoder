/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4745
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

class TippingWaiters {
public:
    int possiblePayments(int bill, int cash);
};

int TippingWaiters::possiblePayments(int bill, int cash) {
    int ret;
    return ret;
}


int test0() {
    int bill = 4;
    int cash = 100;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int bill = 23;
    int cash = 100;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int bill = 23;
    int cash = 24;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
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
    int bill = 220;
    int cash = 239;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int bill = 1234567;
    int cash = 12345678;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 14440;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int bill = 1880000000;
    int cash = 1980000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 210527;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int bill = 1;
    int cash = 2000000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int bill = 2000000000;
    int cash = 2000000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int bill = 1000000000;
    int cash = 2000000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 11695907;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int bill = 1800000000;
    int cash = 2000000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 21052632;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int bill = 21345;
    int cash = 21532156;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int bill = 1;
    int cash = 1;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int bill = 1;
    int cash = 2;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int bill = 1;
    int cash = 5;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int bill = 5;
    int cash = 5;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int bill = 5;
    int cash = 10;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int bill = 10000;
    int cash = 100000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int bill = 10000;
    int cash = 11000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int bill = 123456789;
    int cash = 234567890;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 1443940;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int bill = 123456789;
    int cash = 133456789;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 700455;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int bill = 17100;
    int cash = 19000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int bill = 17100;
    int cash = 18000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int bill = 171000000;
    int cash = 181000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 200001;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int bill = 171000000;
    int cash = 190000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 2000001;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int bill = 171000000;
    int cash = 189999999;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int bill = 171000000;
    int cash = 180000001;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int bill = 171000000;
    int cash = 179999999;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
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
    int bill = 1880000000;
    int cash = 1980000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 210527;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int bill = 2000000;
    int cash = 2000000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 23392;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int bill = 1;
    int cash = 2000000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int bill = 1234567;
    int cash = 12345678;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 14440;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int bill = 23;
    int cash = 100;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int bill = 190;
    int cash = 200;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int bill = 1900000000;
    int cash = 2000000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int bill = 1500000000;
    int cash = 2000000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 17543860;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int bill = 188084;
    int cash = 1980605100;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 2200;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int bill = 18800000;
    int cash = 1980000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 219883;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int bill = 199999999;
    int cash = 199999999;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int bill = 18;
    int cash = 1980605100;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int bill = 1750000000;
    int cash = 2000000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 20467836;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int bill = 1900;
    int cash = 1000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int bill = 100;
    int cash = 2000000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int bill = 1645665466;
    int cash = 1999999999;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 19247549;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int bill = 19;
    int cash = 164;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int bill = 3243642;
    int cash = 2000000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 37938;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int bill = 1000000000;
    int cash = 2000000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 11695907;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int bill = 5;
    int cash = 200000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int bill = 100;
    int cash = 200;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int bill = 23;
    int cash = 2000000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int bill = 855;
    int cash = 1980000000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int bill = 950;
    int cash = 20000;
    TippingWaiters* pObj = new TippingWaiters();
    clock_t start = clock();
    int result = pObj->possiblePayments(bill, cash);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11904660&rd=8067&pm=4745
********************************************************************************
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
#include <stdio.h> 
typedef long long ent; 
 
class TippingWaiters { 
public: 
  int possiblePayments(int bill, int cash) { 
    long long x = ((ent)bill * 20 + 18) / 19, y = ((ent)bill * 10) / 9; 
    x = (x + 4) / 5 * 5; 
    if (y > cash) y = cash; 
    y = y - y % 5;   
    if (x > cash || x > y) return 0; 
    return (y - x) / 5 + 1; 
  } 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/