/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9945
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

class Towers {
public:
    int attack(int myUnits, int hpT, int attackT, int numT);
};

int Towers::attack(int myUnits, int hpT, int attackT, int numT) {
    int ret;
    return ret;
}


int test0() {
    int myUnits = 13;
    int hpT = 2;
    int attackT = 3;
    int numT = 8;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int myUnits = 10;
    int hpT = 6;
    int attackT = 8;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int myUnits = 10;
    int hpT = 6;
    int attackT = 9;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int myUnits = 1;
    int hpT = 1;
    int attackT = 1;
    int numT = 1;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
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
    int myUnits = 10000;
    int hpT = 10;
    int attackT = 2;
    int numT = 2789;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int myUnits = 1000000;
    int hpT = 10000;
    int attackT = 10000;
    int numT = 10000;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int myUnits = 10000;
    int hpT = 2;
    int attackT = 1;
    int numT = 9999;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int myUnits = 1000000;
    int hpT = 10000;
    int attackT = 111;
    int numT = 999;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int myUnits = 1000000;
    int hpT = 10000;
    int attackT = 1;
    int numT = 10000;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 301;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int myUnits = 1000000;
    int hpT = 1271;
    int attackT = 1271;
    int numT = 1271;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int myUnits = 10001;
    int hpT = 10000;
    int attackT = 1;
    int numT = 100;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 493;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int myUnits = 140;
    int hpT = 10000;
    int attackT = 1;
    int numT = 1;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int myUnits = 141;
    int hpT = 10000;
    int attackT = 1;
    int numT = 1;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int myUnits = 547;
    int hpT = 10000;
    int attackT = 1;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int myUnits = 546;
    int hpT = 10000;
    int attackT = 1;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int myUnits = 1733;
    int hpT = 547;
    int attackT = 1;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int myUnits = 2;
    int hpT = 1;
    int attackT = 1;
    int numT = 1;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int myUnits = 2;
    int hpT = 1;
    int attackT = 1;
    int numT = 3;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int myUnits = 6181;
    int hpT = 1;
    int attackT = 1;
    int numT = 10000;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int myUnits = 6180;
    int hpT = 1;
    int attackT = 1;
    int numT = 10000;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int myUnits = 6200;
    int hpT = 1;
    int attackT = 1;
    int numT = 10000;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int myUnits = 500001;
    int hpT = 2;
    int attackT = 1;
    int numT = 5000;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
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
    int myUnits = 3661;
    int hpT = 1;
    int attackT = 2;
    int numT = 5000;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int myUnits = 632709;
    int hpT = 8018;
    int attackT = 1;
    int numT = 7097;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 336;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int myUnits = 661962;
    int hpT = 7039;
    int attackT = 1;
    int numT = 7926;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 307;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int myUnits = 263221;
    int hpT = 7878;
    int attackT = 1;
    int numT = 2978;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 326;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int myUnits = 853699;
    int hpT = 8090;
    int attackT = 1;
    int numT = 9543;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 451;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int myUnits = 573713;
    int hpT = 8659;
    int attackT = 1;
    int numT = 6189;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 336;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int myUnits = 882173;
    int hpT = 9380;
    int attackT = 1;
    int numT = 9133;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 326;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int myUnits = 339724;
    int hpT = 9906;
    int attackT = 1;
    int numT = 3423;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 343;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int myUnits = 863490;
    int hpT = 9316;
    int attackT = 1;
    int numT = 8981;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 356;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int myUnits = 404662;
    int hpT = 8186;
    int attackT = 1;
    int numT = 4488;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 314;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int myUnits = 896257;
    int hpT = 8420;
    int attackT = 1;
    int numT = 9797;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 310;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int myUnits = 582915;
    int hpT = 5727;
    int attackT = 32;
    int numT = 1413;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int myUnits = 395954;
    int hpT = 157;
    int attackT = 3242;
    int numT = 2638;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int myUnits = 441796;
    int hpT = 1372;
    int attackT = 2370;
    int numT = 454;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int myUnits = 651367;
    int hpT = 5807;
    int attackT = 4010;
    int numT = 202;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int myUnits = 708288;
    int hpT = 93;
    int attackT = 5424;
    int numT = 7744;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int myUnits = 986052;
    int hpT = 918;
    int attackT = 348;
    int numT = 2362;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int myUnits = 313551;
    int hpT = 189;
    int attackT = 7303;
    int numT = 1700;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int myUnits = 312910;
    int hpT = 754;
    int attackT = 6009;
    int numT = 461;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int myUnits = 194927;
    int hpT = 397;
    int attackT = 7279;
    int numT = 516;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int myUnits = 33210;
    int hpT = 246;
    int attackT = 9980;
    int numT = 138;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int myUnits = 471282;
    int hpT = 2742;
    int attackT = 1043;
    int numT = 377;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int myUnits = 412113;
    int hpT = 782;
    int attackT = 2732;
    int numT = 649;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int myUnits = 15749;
    int hpT = 18;
    int attackT = 6472;
    int numT = 877;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int myUnits = 320828;
    int hpT = 2090;
    int attackT = 4618;
    int numT = 205;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int myUnits = 813199;
    int hpT = 1900;
    int attackT = 5808;
    int numT = 539;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int myUnits = 923549;
    int hpT = 150;
    int attackT = 4716;
    int numT = 6346;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int myUnits = 105293;
    int hpT = 1526;
    int attackT = 8551;
    int numT = 79;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int myUnits = 299879;
    int hpT = 504;
    int attackT = 8434;
    int numT = 628;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int myUnits = 229925;
    int hpT = 1250;
    int attackT = 5029;
    int numT = 221;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int myUnits = 263400;
    int hpT = 3618;
    int attackT = 1673;
    int numT = 149;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int myUnits = 500551;
    int hpT = 1139;
    int attackT = 100;
    int numT = 1718;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int myUnits = 519634;
    int hpT = 9717;
    int attackT = 98;
    int numT = 548;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int myUnits = 684597;
    int hpT = 4044;
    int attackT = 7;
    int numT = 3682;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int myUnits = 334999;
    int hpT = 9423;
    int attackT = 231;
    int numT = 245;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int myUnits = 960860;
    int hpT = 9966;
    int attackT = 183;
    int numT = 759;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int myUnits = 236718;
    int hpT = 6895;
    int attackT = 1;
    int numT = 2851;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 244;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int myUnits = 346910;
    int hpT = 9979;
    int attackT = 2;
    int numT = 2470;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 268;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int myUnits = 376391;
    int hpT = 2548;
    int attackT = 9;
    int numT = 2496;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int myUnits = 760428;
    int hpT = 7346;
    int attackT = 76;
    int numT = 1059;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int myUnits = 432552;
    int hpT = 5134;
    int attackT = 35;
    int numT = 1058;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int myUnits = 550847;
    int hpT = 687;
    int attackT = 21;
    int numT = 5004;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int myUnits = 952800;
    int hpT = 6639;
    int attackT = 6;
    int numT = 4844;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int myUnits = 904770;
    int hpT = 2807;
    int attackT = 12;
    int numT = 5093;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int myUnits = 850997;
    int hpT = 4832;
    int attackT = 54;
    int numT = 1429;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int myUnits = 154315;
    int hpT = 674;
    int attackT = 1;
    int numT = 5896;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int myUnits = 272141;
    int hpT = 4269;
    int attackT = 33;
    int numT = 756;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int myUnits = 821589;
    int hpT = 5414;
    int attackT = 210;
    int numT = 848;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int myUnits = 855366;
    int hpT = 3384;
    int attackT = 5;
    int numT = 5286;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int myUnits = 386321;
    int hpT = 9011;
    int attackT = 1;
    int numT = 2614;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int myUnits = 506179;
    int hpT = 2060;
    int attackT = 75;
    int numT = 1401;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int myUnits = 95561;
    int hpT = 9586;
    int attackT = 1;
    int numT = 976;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 297;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int myUnits = 118901;
    int hpT = 4026;
    int attackT = 1;
    int numT = 1766;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int myUnits = 446778;
    int hpT = 706;
    int attackT = 4;
    int numT = 8728;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int myUnits = 768248;
    int hpT = 2322;
    int attackT = 2;
    int numT = 7876;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int myUnits = 871905;
    int hpT = 2414;
    int attackT = 160;
    int numT = 1582;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int myUnits = 663952;
    int hpT = 1315;
    int attackT = 34;
    int numT = 3402;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int myUnits = 531054;
    int hpT = 1219;
    int attackT = 4;
    int numT = 7819;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int myUnits = 890578;
    int hpT = 8811;
    int attackT = 712;
    int numT = 409;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int myUnits = 135163;
    int hpT = 6164;
    int attackT = 8;
    int numT = 619;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int myUnits = 930726;
    int hpT = 3364;
    int attackT = 27;
    int numT = 3229;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int myUnits = 995064;
    int hpT = 10000;
    int attackT = 1;
    int numT = 10000;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 794;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int myUnits = 926842;
    int hpT = 9075;
    int attackT = 1;
    int numT = 9780;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 899;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int myUnits = 926841;
    int hpT = 9075;
    int attackT = 1;
    int numT = 9780;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int myUnits = 903429;
    int hpT = 8486;
    int attackT = 1;
    int numT = 9860;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 920;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int myUnits = 903428;
    int hpT = 8486;
    int attackT = 1;
    int numT = 9860;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int myUnits = 1000000;
    int hpT = 3;
    int attackT = 10000;
    int numT = 10000;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int myUnits = 1;
    int hpT = 1;
    int attackT = 1;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int myUnits = 1;
    int hpT = 1;
    int attackT = 2;
    int numT = 1;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int myUnits = 1;
    int hpT = 1;
    int attackT = 2;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int myUnits = 1;
    int hpT = 2;
    int attackT = 1;
    int numT = 1;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int myUnits = 1;
    int hpT = 2;
    int attackT = 1;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int myUnits = 1;
    int hpT = 2;
    int attackT = 2;
    int numT = 1;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int myUnits = 1;
    int hpT = 2;
    int attackT = 2;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int myUnits = 2;
    int hpT = 1;
    int attackT = 1;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
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
    int myUnits = 2;
    int hpT = 1;
    int attackT = 2;
    int numT = 1;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int myUnits = 2;
    int hpT = 1;
    int attackT = 2;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int myUnits = 2;
    int hpT = 2;
    int attackT = 1;
    int numT = 1;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int myUnits = 2;
    int hpT = 2;
    int attackT = 1;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int myUnits = 2;
    int hpT = 2;
    int attackT = 2;
    int numT = 1;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int myUnits = 2;
    int hpT = 2;
    int attackT = 2;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int myUnits = 8;
    int hpT = 8;
    int attackT = 1;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int myUnits = 2;
    int hpT = 3;
    int attackT = 1;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int myUnits = 1;
    int hpT = 10;
    int attackT = 10;
    int numT = 10;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int myUnits = 2;
    int hpT = 3;
    int attackT = 2;
    int numT = 1;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int myUnits = 11;
    int hpT = 7;
    int attackT = 8;
    int numT = 2;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int myUnits = 99;
    int hpT = 100;
    int attackT = 1;
    int numT = 1;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
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
    int myUnits = 10;
    int hpT = 2;
    int attackT = 2;
    int numT = 10;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int myUnits = 9;
    int hpT = 5;
    int attackT = 1;
    int numT = 4;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int myUnits = 5;
    int hpT = 10;
    int attackT = 5;
    int numT = 1;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int myUnits = 2;
    int hpT = 1;
    int attackT = 2;
    int numT = 3;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int myUnits = 100;
    int hpT = 101;
    int attackT = 10;
    int numT = 3;
    Towers* pObj = new Towers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numT);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22736467&rd=13509&pm=9945
********************************************************************************
#include<vector>
#include<list>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<sstream>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
using namespace std;
#define f(i,a,b)for(int i=a;i<b;i++)
#define rep(i,n)f(i,0,n)
 
class Towers {
 public:
  int attack(int, int, int, int);
};
 
int Towers::attack(int myn, int hpT, int attackT, int numT){
 
  int ct=0;
  int cur=hpT;
  while(1){
    cur-=myn;
    while(cur<=0){
      cur=hpT+cur;
      numT--;
    }
    ct++;
    if(numT<=0) return ct;
    myn-=attackT*numT;
    if(myn<=0) return -1;
  }
 
}
    
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/