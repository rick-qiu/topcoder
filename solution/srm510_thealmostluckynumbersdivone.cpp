/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11461
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

class TheAlmostLuckyNumbersDivOne {
public:
    long find(long a, long b);
};

long TheAlmostLuckyNumbersDivOne::find(long a, long b) {
    long ret;
    return ret;
}


int test0() {
    long a = 4;
    long b = 7;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long a = 8;
    long b = 19;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long a = 28;
    long b = 33;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long a = 12345678900;
    long b = 98765432100;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 91136;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long a = 64;
    long b = 86;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long a = 62;
    long b = 76;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long a = 97;
    long b = 100;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long a = 1;
    long b = 34;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long a = 2;
    long b = 37;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long a = 7;
    long b = 57;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long a = 3;
    long b = 45;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long a = 8;
    long b = 46;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long a = 8;
    long b = 51;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long a = 9;
    long b = 16;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long a = 6;
    long b = 19;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long a = 723696;
    long b = 846400;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 648;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long a = 38986;
    long b = 512000;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1376;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long a = 393417;
    long b = 934199;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1440;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long a = 104052;
    long b = 209742;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long a = 727064;
    long b = 819465;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 632;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long a = 765462;
    long b = 973116;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 360;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long a = 497597;
    long b = 834500;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 740;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long a = 222065;
    long b = 426983;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 104;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long a = 529199;
    long b = 810446;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 736;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long a = 339257;
    long b = 803318;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1440;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long a = 852396;
    long b = 915259;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long a = 721276;
    long b = 991052;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 704;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long a = 596914;
    long b = 799098;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 704;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long a = 119631;
    long b = 963105;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1552;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long a = 98837;
    long b = 162888;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long a = 914403;
    long b = 940653;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long a = 926889;
    long b = 992513;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long a = 924988;
    long b = 929723;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long a = 951164;
    long b = 962240;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long a = 986059;
    long b = 998616;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long a = 999430;
    long b = 999498;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long a = 918812;
    long b = 960842;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long a = 957387;
    long b = 985213;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long a = 961842;
    long b = 994691;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long a = 918212;
    long b = 978671;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long a = 1;
    long b = 1000000;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 2631;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long a = 444444;
    long b = 777777;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1222;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long a = 696;
    long b = 28765;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 340;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long a = 986;
    long b = 647568;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1732;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long a = 417;
    long b = 893802;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 2541;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long a = 52;
    long b = 44295;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 474;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long a = 474747;
    long b = 747474;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 520;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long a = 7099619347723696;
    long b = 8096791250547355;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1982464;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long a = 8116120065038986;
    long b = 8302882381790350;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long a = 5693912333393417;
    long b = 7751099423239359;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1548288;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long a = 5678191683104052;
    long b = 7760208074754348;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1556480;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long a = 6954493434727064;
    long b = 9163564499235981;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 2031616;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long a = 6046915454765462;
    long b = 9957734391816112;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 2097152;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long a = 8618093852497597;
    long b = 8854467931818360;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 16384;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long a = 4482389558222065;
    long b = 7195076591034935;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1114112;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long a = 4034525729529199;
    long b = 6504345205992516;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 2048000;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long a = 1310604297339257;
    long b = 9054236214554102;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 4194304;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long a = 7608741606852396;
    long b = 8659909043592269;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 999424;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long a = 3988356993721276;
    long b = 8950024662032777;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 4096000;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long a = 5572708823596914;
    long b = 8667403182616822;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 2064384;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long a = 347723696;
    long b = 7884923925641609;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 7832736;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long a = 65038986;
    long b = 9657168644199331;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 7902912;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long a = 333393417;
    long b = 7573419255247019;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 6857984;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long a = 683104052;
    long b = 4768214517788433;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 5292288;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long a = 434727064;
    long b = 5036960610367256;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 5784160;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long a = 1;
    long b = 9883257925643274;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 7929863;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long a = 2;
    long b = 9656914644199584;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 7913478;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long a = 7;
    long b = 9572215255248222;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 7913473;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long a = 3;
    long b = 9768164517788482;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 7921669;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long a = 8;
    long b = 9033728610370487;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 7897088;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long a = 1;
    long b = 10000000000000000;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 7929863;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long a = 444444444444444;
    long b = 7777777777777777;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 5963782;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long a = 4774747447442477;
    long b = 7747447740747444;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1733270;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long a = 4774747447448477;
    long b = 7747447747747444;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1736082;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long a = 1;
    long b = 987654321098765;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3702791;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long a = 14031984;
    long b = 9876543212902184;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 7923584;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long a = 1;
    long b = 1444444444444444;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 3702792;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long a = 1;
    long b = 5;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long a = 1;
    long b = 700044074791536;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 2736135;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long a = 10000000000000000;
    long b = 10000000000000000;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long a = 999;
    long b = 1000000000457;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 364408;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long a = 3092382930;
    long b = 8243948905;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 39424;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long a = 1;
    long b = 9999999999999999;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 7929863;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long a = 1;
    long b = 100000000;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 14599;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long a = 1;
    long b = 33;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long a = 274249780;
    long b = 3111800046048;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 357760;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long a = 444444444444444;
    long b = 474747747444747;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 577520;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long a = 1;
    long b = 1000;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 143;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long a = 1;
    long b = 1;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long a = 1;
    long b = 6757473;
    TheAlmostLuckyNumbersDivOne* pObj = new TheAlmostLuckyNumbersDivOne();
    clock_t start = clock();
    long result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    long expected = 4535;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22747741&rd=14439&pm=11461
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
 
class TheAlmostLuckyNumbersDivOne {
public:
  long long find(long long a, long long b) 
  {
    int digit[20];
    long long p[20];
 
    p[0]=1;
    for (int i=1;i<20;i++) p[i]=p[i-1]*10;
 
    long long res=0;
    for (int l=1;l<=16;l++)
    for (int d=0;d<l;d++)
    for (int i=0;i<(1<<(l-1));i++)
    {
      long long now=0;
      for (int j=0,_j;j<l-1;j++)
      {
        if (j<d) _j=j;
        else _j=j+1;
        if (i&(1<<j)) digit[_j]=4;
        else digit[_j]=7;
      }
      digit[d]=0;
      for (int j=l-1;j>=0;j--) now=now*10+digit[j];
      
      for (int k=d!=l-1?0:1;k<10;k++)
      if (k!=4 && k!=7)
      {
        now+=p[d]*k;
        res+=(now>=a && now<=b);
        now-=p[d]*k;
        
      }
    }
 
 
    for (int l=1;l<=16;l++)
    for (int i=0;i<(1<<l);i++)
    {
      long long now=0;
      for (int j=0;j<l;j++)
      if (i&(1<<j)) now=now*10+4;
      else now=now*10+7;
      res+=(now>=a &&now<=b);
    }
    return res;
        
      
      
  }
};
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/