/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5963
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

class FactorialGCD {
public:
    int factGCD(int a, int b);
};

int FactorialGCD::factGCD(int a, int b) {
    int ret;
    return ret;
}


int test0() {
    int a = 5;
    int b = 20;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int a = 7;
    int b = 5040;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 5040;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int a = 0;
    int b = 2425;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int a = 667024;
    int b = 1;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
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
    int a = 4;
    int b = 40;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int a = 385791261;
    int b = 96343446;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 96343446;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int a = 1;
    int b = 1;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int a = 0;
    int b = 1;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int a = 0;
    int b = 2;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int a = 2097711064;
    int b = 2147483646;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483646;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int a = 1023941542;
    int b = 2147443641;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147443641;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int a = 2147483646;
    int b = 2147483647;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int a = 2147483647;
    int b = 2147483647;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483647;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int a = 0;
    int b = 2147483647;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int a = 2;
    int b = 2147483646;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int a = 29;
    int b = 1073741824;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 33554432;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int a = 30;
    int b = 1073741824;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 67108864;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int a = 31;
    int b = 1073741824;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 67108864;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int a = 32;
    int b = 1073741824;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1073741824;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int a = 33;
    int b = 1073741824;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1073741824;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int a = 37;
    int b = 1073741824;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1073741824;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int a = 999999999;
    int b = 1073741824;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1073741824;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int a = 2;
    int b = 2147483578;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int a = 0;
    int b = 2147483578;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int a = 1073741788;
    int b = 2147483578;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int a = 1073741789;
    int b = 2147483578;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483578;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int a = 1073741790;
    int b = 2147483578;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483578;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int a = 2073741789;
    int b = 2147483578;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483578;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int a = 2;
    int b = 2147483643;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int a = 3;
    int b = 2147483643;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int a = 6;
    int b = 2147483643;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int a = 715827880;
    int b = 2147483643;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int a = 715827881;
    int b = 2147483643;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483643;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int a = 1158278867;
    int b = 2147483643;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483643;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int a = 715827820;
    int b = 2147483463;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int a = 715827821;
    int b = 2147483463;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483463;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int a = 17;
    int b = 2147483463;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int a = 1599120045;
    int b = 1599120121;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1599120121;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int a = 39990;
    int b = 1599120121;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 39989;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int a = 39989;
    int b = 1599120121;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 39989;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int a = 39988;
    int b = 1599120121;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int a = 79977;
    int b = 1599120121;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 39989;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int a = 79978;
    int b = 1599120121;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1599120121;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int a = 79979;
    int b = 1599120121;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1599120121;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int a = 39978;
    int b = 1598720231;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int a = 39979;
    int b = 1598720231;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 39979;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int a = 39988;
    int b = 1598720231;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 39979;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int a = 39989;
    int b = 1598720231;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1598720231;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int a = 100000;
    int b = 1598720231;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1598720231;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int a = 10;
    int b = 479001600;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3628800;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int a = 11;
    int b = 479001600;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 39916800;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int a = 12;
    int b = 479001600;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 479001600;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int a = 13;
    int b = 479001600;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 479001600;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int a = 77;
    int b = 479001600;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 479001600;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int a = 2;
    int b = 223092870;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int a = 3;
    int b = 223092870;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int a = 4;
    int b = 223092870;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int a = 5;
    int b = 223092870;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int a = 10;
    int b = 223092870;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int a = 22;
    int b = 223092870;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 9699690;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int a = 23;
    int b = 223092870;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 223092870;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int a = 24;
    int b = 223092870;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 223092870;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int a = 223082870;
    int b = 223092870;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 223092870;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int a = 1367309;
    int b = 409896946;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 206;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int a = 9270;
    int b = 1112192814;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 17958;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int a = 28816;
    int b = 834003385;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2945;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int a = 1602946251;
    int b = 1756164196;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1756164196;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int a = 412402369;
    int b = 766144549;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 766144549;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int a = 1277916637;
    int b = 1424271235;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1424271235;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int a = 37869;
    int b = 343162006;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1826;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int a = 261617;
    int b = 1173411407;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1687;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int a = 134882;
    int b = 734835850;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2450;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int a = 5820691;
    int b = 739469855;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int a = 849672;
    int b = 287883921;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int a = 67640378;
    int b = 711370130;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int a = 779595530;
    int b = 717226577;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 717226577;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int a = 511837552;
    int b = 2009683795;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2009683795;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int a = 39268;
    int b = 631653570;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 12330;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int a = 10141;
    int b = 2020659627;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 68901;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int a = 11348421;
    int b = 1848214524;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int a = 9508;
    int b = 10694961;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 333;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int a = 1876075859;
    int b = 1710011182;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1710011182;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int a = 465961;
    int b = 444432695;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 245;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int a = 2145;
    int b = 852254625;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 274125;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int a = 136523;
    int b = 667072425;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1425;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int a = 10295;
    int b = 648661050;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 13950;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int a = 29851743;
    int b = 822897489;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int a = 912989102;
    int b = 821367352;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 821367352;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int a = 155799738;
    int b = 1164367549;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1164367549;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int a = 14174;
    int b = 412921215;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 22995;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int a = 42005580;
    int b = 1767621623;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int a = 1818206932;
    int b = 696456218;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 696456218;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int a = 2674;
    int b = 429771106;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 129958;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int a = 121745;
    int b = 584675662;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1394;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int a = 4530610;
    int b = 572618429;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int a = 80865;
    int b = 2099229344;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 7456;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int a = 2936;
    int b = 206274487;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int a = 2722;
    int b = 1526721118;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int a = 57687;
    int b = 1326706560;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 17280;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int a = 85838;
    int b = 842071422;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2586;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int a = 186767;
    int b = 1235052527;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 3499;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int a = 3235;
    int b = 49867927;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 15311;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int a = 255738;
    int b = 1023941542;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1118;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int a = 339471874;
    int b = 202602857;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 202602857;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int a = 930600;
    int b = 1525633650;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1350;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int a = 49710;
    int b = 600069565;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2605;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int a = 11739903;
    int b = 126343446;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int a = 1735596738;
    int b = 243342829;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 243342829;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int a = 355913033;
    int b = 1702403026;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int a = 3205;
    int b = 284962264;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int a = 1427516445;
    int b = 182005171;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 182005171;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int a = 470;
    int b = 1911885669;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 603;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int a = 1595;
    int b = 2070709893;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 223209;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int a = 95883;
    int b = 1994106265;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 14935;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int a = 11181945;
    int b = 852484138;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int a = 500259;
    int b = 689230118;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1142;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int a = 2250;
    int b = 1126879965;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 151605;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int a = 142292077;
    int b = 1229405945;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int a = 11032588;
    int b = 1070801962;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int a = 180419;
    int b = 1150030841;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 6137;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int a = 94240230;
    int b = 1749232153;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int a = 1592513725;
    int b = 898667024;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 898667024;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int a = 39889;
    int b = 17516151;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 17516151;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int a = 2147483641;
    int b = 2147483641;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483641;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int a = 19;
    int b = 300000000;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 96000;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int a = 2147483646;
    int b = 2147483647;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int a = 2097711064;
    int b = 2147483646;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483646;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int a = 2147483647;
    int b = 2147483646;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483646;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int a = 2;
    int b = 2;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int a = 2147483647;
    int b = 2147483647;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483647;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int a = 45;
    int b = 433465634;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int a = 2147483645;
    int b = 2147483647;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int a = 2147483625;
    int b = 85899345;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 85899345;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int a = 2436;
    int b = 2147483647;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int a = 987234323;
    int b = 2147483646;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483646;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int a = 2000000010;
    int b = 2000000011;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int a = 2147483646;
    int b = 21474836;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 21474836;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int a = 1000000000;
    int b = 2038074743;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int a = 40009;
    int b = 1600720081;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 40009;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int a = 100000006;
    int b = 100000007;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int a = 2097711064;
    int b = 2147483647;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int a = 2147483646;
    int b = 22222;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 22222;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int a = 2147483646;
    int b = 1;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int a = 2147483641;
    int b = 2147483643;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483643;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int a = 2147483647;
    int b = 2099999999;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2099999999;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int a = 234534;
    int b = 33556226;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 33556226;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int a = 0;
    int b = 2;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int a = 1000099993;
    int b = 1000099993;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1000099993;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int a = 2147483646;
    int b = 2147483646;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483646;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int a = 9992;
    int b = 999010081;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 9991;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int a = 17;
    int b = 2147489;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int a = 2;
    int b = 40;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int a = 123456789;
    int b = 1147483647;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1147483647;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int a = 14;
    int b = 17;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int a = 7;
    int b = 21;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int a = 2124483647;
    int b = 2147483647;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int a = 99999971;
    int b = 99999989;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int a = 21556233;
    int b = 1555;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1555;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int a = 2097711064;
    int b = 2147483645;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147483645;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int a = 5;
    int b = 125;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int a = 2097711071;
    int b = 2097711071;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2097711071;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int a = 1000099993;
    int b = 1000099999;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int a = 2097711070;
    int b = 2097711071;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int a = 2346;
    int b = 2147483647;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int a = 2111111064;
    int b = 2147181146;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2147181146;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int a = 3;
    int b = 32;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int a = 2097711064;
    int b = 5;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int a = 1073741820;
    int b = 2147483647;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int a = 100000001;
    int b = 100000037;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int a = 1073741717;
    int b = 1073741717;
    FactorialGCD* pObj = new FactorialGCD();
    clock_t start = clock();
    int result = pObj->factGCD(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1073741717;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test100() == 0 ? ++passed : ++failed;
    test101() == 0 ? ++passed : ++failed;
    test102() == 0 ? ++passed : ++failed;
    test103() == 0 ? ++passed : ++failed;
    test104() == 0 ? ++passed : ++failed;
    test105() == 0 ? ++passed : ++failed;
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20280511&rd=8080&pm=5963
********************************************************************************
class FactorialGCD 
{  
public:  
  int factGCD(int a, int b)  
  {  
    long long i, j, k, b0 = b, d = 1; 
    for ( i = 2; i * i <= b0; ++i ) 
      for ( j = i; !(b % i); j += i ) 
      { 
        k = j; 
        while ( !(b % i + k % i) ) 
        { 
          b /= i;         
          k /= i; 
          d = j <= a ? d * i : d; 
        }       
      } 
      return b <= a ? d * b : d; 
  }  
};  
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/