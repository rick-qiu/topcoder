/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11462
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

class TheAlmostLuckyNumbersDivTwo {
public:
    int find(int a, int b);
};

int TheAlmostLuckyNumbersDivTwo::find(int a, int b) {
    int ret;
    return ret;
}


int test0() {
    int a = 4;
    int b = 7;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
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
    int a = 8;
    int b = 19;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
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
    int a = 28;
    int b = 33;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
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
    int a = 1234;
    int b = 4321;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int a = 64;
    int b = 86;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int a = 62;
    int b = 76;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int a = 97;
    int b = 100;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
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
    int a = 1;
    int b = 34;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int a = 2;
    int b = 37;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int a = 7;
    int b = 57;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int a = 3;
    int b = 45;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int a = 8;
    int b = 46;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int a = 8;
    int b = 51;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int a = 9;
    int b = 16;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int a = 6;
    int b = 19;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int a = 723696;
    int b = 846400;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 648;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int a = 38986;
    int b = 512000;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1376;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int a = 393417;
    int b = 934199;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1440;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int a = 104052;
    int b = 209742;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int a = 727064;
    int b = 819465;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 632;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int a = 765462;
    int b = 973116;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int a = 497597;
    int b = 834500;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 740;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int a = 222065;
    int b = 426983;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int a = 529199;
    int b = 810446;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 736;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int a = 339257;
    int b = 803318;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1440;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int a = 852396;
    int b = 915259;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int a = 721276;
    int b = 991052;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 704;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int a = 596914;
    int b = 799098;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 704;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int a = 119631;
    int b = 963105;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1552;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int a = 98837;
    int b = 162888;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int a = 914403;
    int b = 940653;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
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
    int a = 926889;
    int b = 992513;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int a = 924988;
    int b = 929723;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
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
    int a = 951164;
    int b = 962240;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int a = 986059;
    int b = 998616;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int a = 999430;
    int b = 999498;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int a = 918812;
    int b = 960842;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int a = 957387;
    int b = 985213;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int a = 961842;
    int b = 994691;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int a = 918212;
    int b = 978671;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int a = 1;
    int b = 1000000;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2631;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int a = 444444;
    int b = 777777;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1222;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int a = 696;
    int b = 28765;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 340;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int a = 986;
    int b = 647568;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1732;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int a = 417;
    int b = 893802;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2541;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int a = 52;
    int b = 44295;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 474;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int a = 474747;
    int b = 747474;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 520;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int a = 4;
    int b = 4;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
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
    int a = 1;
    int b = 9;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int a = 44;
    int b = 44;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int a = 440;
    int b = 460;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
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

int test51() {
    int a = 40;
    int b = 49;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int a = 5;
    int b = 6;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int a = 1;
    int b = 100000;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1063;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int a = 11;
    int b = 20;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
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
    int a = 47;
    int b = 47;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int a = 1;
    int b = 1000;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int a = 43;
    int b = 57;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int a = 77;
    int b = 77;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int a = 4747;
    int b = 4747;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int a = 777;
    int b = 777;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int a = 42;
    int b = 42;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int a = 44;
    int b = 45;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int a = 46;
    int b = 47;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int a = 441;
    int b = 441;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int a = 775;
    int b = 775;
    TheAlmostLuckyNumbersDivTwo* pObj = new TheAlmostLuckyNumbersDivTwo();
    clock_t start = clock();
    int result = pObj->find(a, b);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22626886&rd=14439&pm=11462
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
#include <cstring>
#include <complex>
#include <climits>
#include <queue>
#include <ctime>
#include <ext/numeric>
#include <ext/hash_map>
#include <ext/hash_set>
 
using namespace std;
using namespace __gnu_cxx;
 
#define PB push_back
#define ALL(x) (x).begin(),(x).end()
#define rep(i,x,n) for(int i = (x) ; i < (n) ; ++i)
#define repit(it,x,n) for(__typeof(x) it = (x) ; it!=(n) ;++it)
 
int f(int x)
{
  int r=0;
  while(x){
    if(x%10!=7&&x%10!=4)
      r++;
    x/=10;    
  }
  return r;
}
 
class TheAlmostLuckyNumbersDivTwo {
public:
  int find(int a, int b) {
    int res=0;
    rep(i,a,b+1)
    {
      if(f(i)<=1)
        res++;
    }
    return res;
  }
};
 
 
 
 
 
 
 
//Powered by KawigiEdit 2.1.7 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/