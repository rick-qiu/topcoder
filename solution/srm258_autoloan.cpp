/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3970
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

class AutoLoan {
public:
    double interestRate(double price, double monthlyPayment, int loanTerm);
};

double AutoLoan::interestRate(double price, double monthlyPayment, int loanTerm) {
    double ret;
    return ret;
}


int test0() {
    double price = 6800.0;
    double monthlyPayment = 100.0;
    int loanTerm = 68;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3322616182218813E-13;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    double price = 2000.0;
    double monthlyPayment = 510.0;
    int loanTerm = 4;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 9.56205462458368;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    double price = 15000.0;
    double monthlyPayment = 364.0;
    int loanTerm = 48;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 7.687856394581649;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    double price = 10000.0;
    double monthlyPayment = 385.0;
    int loanTerm = 30;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 11.473054204549669;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    double price = 200.0;
    double monthlyPayment = 15.0;
    int loanTerm = 600;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 89.99999999999982;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    double price = 1000000.0;
    double monthlyPayment = 1667.0;
    int loanTerm = 600;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 7.986158248041164E-4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    double price = 724556.0;
    double monthlyPayment = 50505.0;
    int loanTerm = 575;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 83.64570854426711;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    double price = 332696.0;
    double monthlyPayment = 10951.0;
    int loanTerm = 136;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 38.98851536883803;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    double price = 23002.0;
    double monthlyPayment = 4709.0;
    int loanTerm = 6;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 74.54805516148613;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    double price = 492214.0;
    double monthlyPayment = 2049.0;
    int loanTerm = 471;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9204806010895594;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    double price = 740192.0;
    double monthlyPayment = 7185.0;
    int loanTerm = 588;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 11.607783057395558;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    double price = 570542.0;
    double monthlyPayment = 24374.0;
    int loanTerm = 65;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 47.05796362542851;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    double price = 407050.0;
    double monthlyPayment = 35078.0;
    int loanTerm = 17;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 55.397079816319696;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    double price = 140192.0;
    double monthlyPayment = 1491.0;
    int loanTerm = 454;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 12.653412761497272;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    double price = 219252.0;
    double monthlyPayment = 8934.0;
    int loanTerm = 337;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 48.897089628821746;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    double price = 506973.0;
    double monthlyPayment = 11900.0;
    int loanTerm = 50;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 7.7628540286105885;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    double price = 281335.0;
    double monthlyPayment = 16982.0;
    int loanTerm = 54;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 68.87780115037442;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    double price = 286417.0;
    double monthlyPayment = 9239.0;
    int loanTerm = 145;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 38.30192971448798;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    double price = 140642.0;
    double monthlyPayment = 1293.0;
    int loanTerm = 561;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 10.965203755132924;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    double price = 389951.0;
    double monthlyPayment = 12413.0;
    int loanTerm = 163;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 37.9601927752288;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    double price = 973110.0;
    double monthlyPayment = 337873.0;
    int loanTerm = 3;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 24.80783488352443;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    double price = 230977.0;
    double monthlyPayment = 67123.0;
    int loanTerm = 4;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 75.65099005216278;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    double price = 61703.0;
    double monthlyPayment = 16197.0;
    int loanTerm = 4;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 23.76581938256987;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    double price = 44755.0;
    double monthlyPayment = 8959.0;
    int loanTerm = 5;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3574309895975514;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    double price = 297007.0;
    double monthlyPayment = 56775.0;
    int loanTerm = 6;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 48.76330124289328;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    double price = 584755.0;
    double monthlyPayment = 1613.0;
    int loanTerm = 475;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4303822503235695;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    double price = 5628.0;
    double monthlyPayment = 2197.0;
    int loanTerm = 3;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 100.00000000000003;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    double price = 6800.0;
    double monthlyPayment = 100.0;
    int loanTerm = 68;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3322616182218813E-13;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    double price = 15000.0;
    double monthlyPayment = 364.0;
    int loanTerm = 48;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 7.687856394581649;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    double price = 2000.0;
    double monthlyPayment = 510.0;
    int loanTerm = 4;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 9.56205462458368;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    double price = 60000.0;
    double monthlyPayment = 4999.0;
    int loanTerm = 600;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 99.9799999999999;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    double price = 100001.0;
    double monthlyPayment = 989.0;
    int loanTerm = 599;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 11.834664337677792;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    double price = 1000.0;
    double monthlyPayment = 500.0;
    int loanTerm = 2;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3322616182218813E-13;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    double price = 12.0;
    double monthlyPayment = 1.0;
    int loanTerm = 500;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 99.99999999999977;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    double price = 1000000.0;
    double monthlyPayment = 2500.0;
    int loanTerm = 600;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7463073077668143;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    double price = 1.0;
    double monthlyPayment = 0.142857142857143;
    int loanTerm = 7;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9968010105369827E-13;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    double price = 1000000.0;
    double monthlyPayment = 79865.0;
    int loanTerm = 599;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 95.83799999999995;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    double price = 999999.0;
    double monthlyPayment = 3000.0;
    int loanTerm = 599;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6299652255705737;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    double price = 15000.0;
    double monthlyPayment = 364.0;
    int loanTerm = 600;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 29.11998354222205;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    double price = 9.999999991;
    double monthlyPayment = 2.5;
    int loanTerm = 4;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 4.320001689699897E-7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    double price = 200.0;
    double monthlyPayment = 100.0;
    int loanTerm = 2;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3322616182218813E-13;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    double price = 1000.0;
    double monthlyPayment = 40.0;
    int loanTerm = 34;
    AutoLoan* pObj = new AutoLoan();
    clock_t start = clock();
    double result = pObj->interestRate(price, monthlyPayment, loanTerm);
    clock_t end = clock();
    delete pObj;
    double expected = 22.418392731637795;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=7993&pm=3970
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <queue>
using namespace std;
 
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ii;
#define rev(A) reverse((A).begin(), (A).end())
#define s(A) sort((A).begin(), (A).end())
 
//----------------------------
 
class AutoLoan {
  public:
  double interestRate(double price, double monthlyPayment, int loanTerm) {
    double lo = 1e-16, hi = 1000, m;
    while (hi / lo > 1+1e-14) {
      m = (hi+lo)/2;
      double P = price;
      bool over = 0;
      for (int i = 0; i < loanTerm; i++) {
        P *= 1+m;
        P -= monthlyPayment;
        if (P < 0) {over = 1; break;}
      }
      if (over) lo = m;
      else hi = m;
    }
    return m*100*12;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/