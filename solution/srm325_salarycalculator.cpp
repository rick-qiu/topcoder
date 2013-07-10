/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6822
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

class SalaryCalculator {
public:
    double calcHours(int P1, int P2, int salary);
};

double SalaryCalculator::calcHours(int P1, int P2, int salary) {
    double ret;
    return ret;
}


int test0() {
    int P1 = 10;
    int P2 = 15;
    int salary = 1000;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int P1 = 10;
    int P2 = 15;
    int salary = 3000;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 266.6666666666667;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int P1 = 100;
    int P2 = 1;
    int salary = 1000000;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 980200.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int P1 = 17;
    int P2 = 23;
    int salary = 973546;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 42380.260869565216;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int P1 = 1;
    int P2 = 1;
    int salary = 1;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
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
    int P1 = 100;
    int P2 = 100;
    int salary = 1;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int P1 = 1;
    int P2 = 1;
    int salary = 1000000;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 1000000.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int P1 = 100;
    int P2 = 100;
    int salary = 1000000;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 10000.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int P1 = 66;
    int P2 = 91;
    int salary = 127390;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 1454.8351648351647;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int P1 = 20;
    int P2 = 79;
    int salary = 994690;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 12740.379746835442;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int P1 = 19;
    int P2 = 6;
    int salary = 373405;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 61800.833333333336;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int P1 = 99;
    int P2 = 27;
    int salary = 620696;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 22455.40740740741;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int P1 = 77;
    int P2 = 31;
    int salary = 540150;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 17127.41935483871;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int P1 = 82;
    int P2 = 8;
    int salary = 12140;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 148.0487804878049;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int P1 = 50;
    int P2 = 4;
    int salary = 336360;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 81790.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int P1 = 84;
    int P2 = 73;
    int salary = 109660;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 1472.054794520548;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int P1 = 10;
    int P2 = 27;
    int salary = 475076;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 17721.333333333332;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int P1 = 96;
    int P2 = 33;
    int salary = 624452;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 18540.969696969696;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int P1 = 17;
    int P2 = 70;
    int salary = 925729;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 13376.128571428571;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int P1 = 18;
    int P2 = 25;
    int salary = 176165;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 7102.6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int P1 = 20;
    int P2 = 7;
    int salary = 818309;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 116529.85714285714;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int P1 = 37;
    int P2 = 23;
    int salary = 775216;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 33583.30434782609;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int P1 = 44;
    int P2 = 93;
    int salary = 147324;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 1689.505376344086;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int P1 = 60;
    int P2 = 15;
    int salary = 486303;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 31820.2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int P1 = 97;
    int P2 = 14;
    int salary = 116803;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 7157.357142857143;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int P1 = 39;
    int P2 = 54;
    int salary = 610647;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 11363.833333333334;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int P1 = 69;
    int P2 = 85;
    int salary = 595834;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 7047.458823529411;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int P1 = 61;
    int P2 = 68;
    int salary = 951304;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 14010.35294117647;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int P1 = 70;
    int P2 = 83;
    int salary = 493959;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 5982.638554216867;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int P1 = 16;
    int P2 = 24;
    int salary = 46990;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 2024.5833333333333;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int P1 = 47;
    int P2 = 61;
    int salary = 263887;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 4371.918032786885;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int P1 = 59;
    int P2 = 70;
    int salary = 655040;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 9389.142857142857;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int P1 = 88;
    int P2 = 3;
    int salary = 734077;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 239025.66666666666;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int P1 = 46;
    int P2 = 79;
    int salary = 993949;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 12665.177215189873;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int P1 = 75;
    int P2 = 13;
    int salary = 34749;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 1719.1538461538462;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int P1 = 83;
    int P2 = 94;
    int salary = 460468;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 4922.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int P1 = 7;
    int P2 = 8;
    int salary = 350351;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 43818.875;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int P1 = 66;
    int P2 = 82;
    int salary = 300859;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 3708.0365853658536;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int P1 = 50;
    int P2 = 34;
    int salary = 38278;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 1031.7058823529412;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int P1 = 37;
    int P2 = 85;
    int salary = 522836;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 6263.952941176471;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int P1 = 73;
    int P2 = 96;
    int salary = 726040;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 7610.833333333333;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int P1 = 68;
    int P2 = 66;
    int salary = 303293;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 4589.287878787879;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int P1 = 47;
    int P2 = 17;
    int salary = 949645;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 55508.529411764706;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int P1 = 87;
    int P2 = 57;
    int salary = 594798;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 10329.78947368421;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int P1 = 21;
    int P2 = 89;
    int salary = 471441;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 5449.898876404494;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int P1 = 91;
    int P2 = 49;
    int salary = 638651;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 12862.265306122448;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int P1 = 16;
    int P2 = 5;
    int salary = 105604;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 20680.8;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int P1 = 76;
    int P2 = 72;
    int salary = 94881;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 1306.6805555555557;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int P1 = 19;
    int P2 = 63;
    int salary = 878519;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 14084.42857142857;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int P1 = 27;
    int P2 = 93;
    int salary = 142122;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 1670.1290322580646;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int P1 = 89;
    int P2 = 3;
    int salary = 584414;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 189071.33333333334;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int P1 = 9;
    int P2 = 36;
    int salary = 537674;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 15085.388888888889;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int P1 = 96;
    int P2 = 75;
    int salary = 611890;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 8102.533333333334;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int P1 = 41;
    int P2 = 44;
    int salary = 315713;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 7188.931818181818;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int P1 = 31;
    int P2 = 5;
    int salary = 192429;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 37445.8;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int P1 = 43;
    int P2 = 27;
    int salary = 160408;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 5822.518518518518;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int P1 = 47;
    int P2 = 33;
    int salary = 754493;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 22778.575757575756;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int P1 = 15;
    int P2 = 23;
    int salary = 3000;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int P1 = 82;
    int P2 = 72;
    int salary = 4763;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 58.08536585365854;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int P1 = 18;
    int P2 = 86;
    int salary = 2307;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 128.16666666666666;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int P1 = 89;
    int P2 = 41;
    int salary = 19375;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 238.41463414634146;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int P1 = 35;
    int P2 = 11;
    int salary = 11373;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 597.5454545454545;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int P1 = 60;
    int P2 = 87;
    int salary = 16723;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 254.28735632183907;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int P1 = 18;
    int P2 = 73;
    int salary = 16119;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 371.4931506849315;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int P1 = 14;
    int P2 = 15;
    int salary = 8161;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 557.4;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int P1 = 13;
    int P2 = 82;
    int salary = 6396;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 246.29268292682926;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int P1 = 60;
    int P2 = 22;
    int salary = 4748;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 79.13333333333334;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int P1 = 4;
    int P2 = 45;
    int salary = 4522;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 282.7111111111111;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int P1 = 44;
    int P2 = 23;
    int salary = 18688;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 629.9130434782609;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int P1 = 51;
    int P2 = 28;
    int salary = 9724;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 190.66666666666666;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int P1 = 11;
    int P2 = 5;
    int salary = 3099;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 379.8;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int P1 = 25;
    int P2 = 80;
    int salary = 18300;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 366.25;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int P1 = 62;
    int P2 = 9;
    int salary = 13061;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 273.44444444444446;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int P1 = 15;
    int P2 = 24;
    int salary = 8994;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 449.75;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int P1 = 58;
    int P2 = 89;
    int salary = 1166;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 20.103448275862068;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int P1 = 92;
    int P2 = 82;
    int salary = 18327;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 199.20652173913044;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int P1 = 76;
    int P2 = 10;
    int salary = 14185;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 186.64473684210526;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int P1 = 71;
    int P2 = 20;
    int salary = 12579;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 177.16901408450704;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int P1 = 3;
    int P2 = 21;
    int salary = 1;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int P1 = 3;
    int P2 = 2;
    int salary = 100;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 33.333333333333336;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int P1 = 1;
    int P2 = 5;
    int salary = 200;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int P1 = 2;
    int P2 = 11;
    int salary = 401;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0909090909091;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int P1 = 10;
    int P2 = 20;
    int salary = 2000;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int P1 = 13;
    int P2 = 13;
    int salary = 200;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 15.384615384615385;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int P1 = 5;
    int P2 = 5;
    int salary = 4000;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 800.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int P1 = 15;
    int P2 = 20;
    int salary = 160;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 10.666666666666666;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int P1 = 2;
    int P2 = 1;
    int salary = 3;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int P1 = 10;
    int P2 = 15;
    int salary = 3000;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 266.6666666666667;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int P1 = 10;
    int P2 = 15;
    int salary = 2001;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 200.06666666666666;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int P1 = 5;
    int P2 = 10;
    int salary = 1200;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 220.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int P1 = 2;
    int P2 = 8;
    int salary = 401;
    SalaryCalculator* pObj = new SalaryCalculator();
    clock_t start = clock();
    double result = pObj->calcHours(P1, P2, salary);
    clock_t end = clock();
    delete pObj;
    double expected = 200.125;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15580072&rd=10005&pm=6822
********************************************************************************
#include <algorithm> 
#include <cctype> 
#include <cmath> 
#include <cstdlib> 
#include <cstring> 
#include <functional> 
#include <iostream> 
#include <iomanip> 
#include <limits> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <utility> 
#include <vector>
 
using namespace std ;
 
#define vi vector <int>
#define vs vector <string>
#define s(a) (int)(a).size()
#define forr(i,n) for(int i=0 ;i<s(n) ;i++)
#define For(i,n) for(int i=0;i<=n ;i++)
#define Forr(i,a,b) for(int i=a;i<=b;i++)
#define ford(i,n) for(int i=s(n)-1;i>=0;i--)
#define Ford(i,n) for(int i=n;i>=0;i--)
#define ALL(t) t.begin(),t.end()
#define np(a) next_permutation(ALL(a))
#define pb(a,b) a.push_back(b)
 
class SalaryCalculator{public: double calcHours(int p1, int p2, int sal){
if(sal<=p1*200)return (double)sal/p1;
return 200+(double)(sal-200*p1)/p2;
}};

********************************************************************************
*******************************************************************************/