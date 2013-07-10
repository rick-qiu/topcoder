/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6135
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

class RandomizedQuickSort {
public:
    double getExpectedTime(int listSize, int S, int a, int b);
};

double RandomizedQuickSort::getExpectedTime(int listSize, int S, int a, int b) {
    double ret;
    return ret;
}


int test0() {
    int listSize = 1;
    int S = 1;
    int a = 1;
    int b = 1;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int listSize = 2;
    int S = 1;
    int a = 1;
    int b = 1;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int listSize = 3;
    int S = 1;
    int a = 1;
    int b = 1;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 5.666666666666667;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int listSize = 3;
    int S = 1;
    int a = 1;
    int b = 10;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 17.666666666666668;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int listSize = 10;
    int S = 5;
    int a = 3;
    int b = 2;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 112.37380952380951;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int listSize = 1000;
    int S = 10;
    int a = 100;
    int b = 100;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1544961.8218377363;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int listSize = 1000;
    int S = 1;
    int a = 100;
    int b = 100;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1198591.266282178;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int listSize = 1000;
    int S = 10;
    int a = 13;
    int b = 83;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 609586.7035055718;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int listSize = 1000;
    int S = 1;
    int a = 72;
    int b = 11;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 842632.0450565031;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int listSize = 1000;
    int S = 1;
    int a = 1;
    int b = 1;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 11985.912662821782;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int listSize = 410;
    int S = 10;
    int a = 11;
    int b = 70;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 203194.56847447122;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int listSize = 661;
    int S = 10;
    int a = 87;
    int b = 61;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 740942.9800275661;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int listSize = 67;
    int S = 6;
    int a = 67;
    int b = 80;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 40173.4648502979;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int listSize = 302;
    int S = 5;
    int a = 18;
    int b = 84;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 110930.48458569139;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int listSize = 180;
    int S = 7;
    int a = 100;
    int b = 56;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 160367.61228241297;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int listSize = 195;
    int S = 2;
    int a = 71;
    int b = 63;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 122372.1598739174;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int listSize = 340;
    int S = 9;
    int a = 41;
    int b = 56;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 205242.37189523477;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int listSize = 385;
    int S = 3;
    int a = 91;
    int b = 77;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 361419.6691451162;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int listSize = 161;
    int S = 1;
    int a = 64;
    int b = 42;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 85301.47579140632;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int listSize = 928;
    int S = 8;
    int a = 53;
    int b = 51;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 695675.9299817674;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int listSize = 772;
    int S = 10;
    int a = 5;
    int b = 4;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 53148.21451465036;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int listSize = 90;
    int S = 2;
    int a = 41;
    int b = 58;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 28767.141838455627;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int listSize = 860;
    int S = 2;
    int a = 96;
    int b = 20;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 924084.7761291185;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int listSize = 519;
    int S = 8;
    int a = 18;
    int b = 71;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 247941.5277828018;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int listSize = 962;
    int S = 1;
    int a = 2;
    int b = 29;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 31579.88013730659;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int listSize = 691;
    int S = 8;
    int a = 10;
    int b = 27;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 148216.41138458758;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int listSize = 59;
    int S = 10;
    int a = 68;
    int b = 20;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 23333.54343548704;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int listSize = 948;
    int S = 5;
    int a = 60;
    int b = 6;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 606856.9776529927;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int listSize = 193;
    int S = 9;
    int a = 11;
    int b = 43;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 57052.656395326085;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int listSize = 748;
    int S = 9;
    int a = 24;
    int b = 82;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 483150.8713310129;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int listSize = 630;
    int S = 4;
    int a = 4;
    int b = 10;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 37402.85028067389;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int listSize = 69;
    int S = 1;
    int a = 56;
    int b = 22;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 25392.106846549155;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int listSize = 177;
    int S = 8;
    int a = 82;
    int b = 65;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 146905.65370797354;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int listSize = 119;
    int S = 7;
    int a = 86;
    int b = 41;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 79669.53668906933;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int listSize = 932;
    int S = 8;
    int a = 91;
    int b = 94;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1227547.3171402165;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int listSize = 438;
    int S = 6;
    int a = 9;
    int b = 31;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 78374.86198646009;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int listSize = 400;
    int S = 3;
    int a = 80;
    int b = 9;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 299568.6223192181;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int listSize = 278;
    int S = 4;
    int a = 40;
    int b = 62;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 126004.07671602313;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int listSize = 176;
    int S = 2;
    int a = 56;
    int b = 46;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 84607.66290902313;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int listSize = 826;
    int S = 2;
    int a = 47;
    int b = 99;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 492902.1166012149;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int listSize = 453;
    int S = 4;
    int a = 5;
    int b = 68;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 82541.0518955589;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int listSize = 155;
    int S = 2;
    int a = 8;
    int b = 4;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 10005.162346715644;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int listSize = 171;
    int S = 6;
    int a = 88;
    int b = 46;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 128265.36871039502;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int listSize = 516;
    int S = 1;
    int a = 98;
    int b = 97;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 539642.7333896474;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int listSize = 219;
    int S = 6;
    int a = 92;
    int b = 61;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 190659.80635187472;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int listSize = 188;
    int S = 7;
    int a = 53;
    int b = 57;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 109693.50159325961;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int listSize = 354;
    int S = 1;
    int a = 50;
    int b = 52;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 176037.98082288858;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int listSize = 442;
    int S = 9;
    int a = 7;
    int b = 10;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 48149.56570468858;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int listSize = 447;
    int S = 10;
    int a = 98;
    int b = 44;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 466016.41089826386;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int listSize = 267;
    int S = 7;
    int a = 39;
    int b = 3;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 81137.3314650507;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int listSize = 10;
    int S = 5;
    int a = 3;
    int b = 2;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 112.37380952380951;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int listSize = 1000;
    int S = 1;
    int a = 3;
    int b = 2;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 35624.07132179874;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int listSize = 3;
    int S = 3;
    int a = 3;
    int b = 3;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 27.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int listSize = 1000;
    int S = 1;
    int a = 100;
    int b = 100;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1198591.266282178;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int listSize = 1000;
    int S = 1;
    int a = 1;
    int b = 1;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 11985.912662821782;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int listSize = 1000;
    int S = 1;
    int a = 1;
    int b = 10;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 14988.912662821793;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int listSize = 1000;
    int S = 1;
    int a = 99;
    int b = 98;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1186271.6869526901;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int listSize = 100;
    int S = 5;
    int a = 3;
    int b = 2;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 2326.755537594372;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int listSize = 1000;
    int S = 1;
    int a = 77;
    int b = 99;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 930255.9417039441;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int listSize = 1000;
    int S = 2;
    int a = 3;
    int b = 3;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 36458.23798846539;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int listSize = 1000;
    int S = 10;
    int a = 10;
    int b = 99;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 674182.0155171057;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int listSize = 1000;
    int S = 5;
    int a = 3;
    int b = 2;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 36782.37132179871;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int listSize = 1000;
    int S = 1;
    int a = 20;
    int b = 20;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 239718.25325643588;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int listSize = 1000;
    int S = 10;
    int a = 100;
    int b = 100;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1544961.8218377363;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int listSize = 1000;
    int S = 10;
    int a = 97;
    int b = 99;
    RandomizedQuickSort* pObj = new RandomizedQuickSort();
    clock_t start = clock();
    double result = pObj->getExpectedTime(listSize, S, a, b);
    clock_t end = clock();
    delete pObj;
    double expected = 1510291.300515936;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20334210&rd=9818&pm=6135
********************************************************************************
class RandomizedQuickSort
{
public:
  double getExpectedTime(int listSize, int S, int a, int b)
  {
    double calc_t[1001];
    int i,j,k;
 
    for (i=0;i<=S;i++) calc_t[i]=b*i*i;
    for (j=S+1;j<=listSize;j++)
    {
      double total_time=a*j*j;
      for (k=0;k<j;k++)
        total_time = total_time + calc_t[k] + calc_t[j-k-1];
      calc_t[j]=total_time/j;
    }
    return calc_t[listSize];
  }
};

********************************************************************************
*******************************************************************************/