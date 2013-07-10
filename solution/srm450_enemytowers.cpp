/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10070
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

class EnemyTowers {
public:
    int attack(int myUnits, int hpT, int attackT, int numWodT, int numStoT);
};

int EnemyTowers::attack(int myUnits, int hpT, int attackT, int numWodT, int numStoT) {
    int ret;
    return ret;
}


int test0() {
    int myUnits = 7;
    int hpT = 2;
    int attackT = 1;
    int numWodT = 2;
    int numStoT = 3;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 120;
    int hpT = 10;
    int attackT = 40000;
    int numWodT = 6;
    int numStoT = 6;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 119;
    int hpT = 10;
    int attackT = 40000;
    int numWodT = 6;
    int numStoT = 6;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 200;
    int hpT = 50;
    int attackT = 3;
    int numWodT = 10;
    int numStoT = 5;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int myUnits = 1000000000;
    int hpT = 40000;
    int attackT = 5681;
    int numWodT = 40000;
    int numStoT = 40000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int myUnits = 1000000000;
    int hpT = 40000;
    int attackT = 5682;
    int numWodT = 40000;
    int numStoT = 40000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 1000000000;
    int hpT = 40000;
    int attackT = 40000;
    int numWodT = 40000;
    int numStoT = 40000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int myUnits = 1000000000;
    int hpT = 16405;
    int attackT = 40000;
    int numWodT = 40000;
    int numStoT = 40000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int myUnits = 1000000000;
    int hpT = 16406;
    int attackT = 40000;
    int numWodT = 40000;
    int numStoT = 40000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int myUnits = 1000000000;
    int hpT = 40000;
    int attackT = 40000;
    int numWodT = 40000;
    int numStoT = 450;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 1000000000;
    int hpT = 40000;
    int attackT = 40000;
    int numWodT = 449;
    int numStoT = 40000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int myUnits = 1000000000;
    int hpT = 40000;
    int attackT = 40000;
    int numWodT = 20226;
    int numStoT = 20224;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 1000000000;
    int hpT = 40000;
    int attackT = 40000;
    int numWodT = 20223;
    int numStoT = 20226;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int myUnits = 15960245;
    int hpT = 40000;
    int attackT = 1;
    int numWodT = 40000;
    int numStoT = 40000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int myUnits = 15960246;
    int hpT = 40000;
    int attackT = 1;
    int numWodT = 40000;
    int numStoT = 40000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1648;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int myUnits = 2000000;
    int hpT = 10000;
    int attackT = 3;
    int numWodT = 10000;
    int numStoT = 10000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int myUnits = 79999;
    int hpT = 1;
    int attackT = 40000;
    int numWodT = 40000;
    int numStoT = 40000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int myUnits = 80000;
    int hpT = 1;
    int attackT = 40000;
    int numWodT = 40000;
    int numStoT = 40000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int myUnits = 1;
    int hpT = 1;
    int attackT = 1;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int myUnits = 2;
    int hpT = 1;
    int attackT = 1;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int myUnits = 566;
    int hpT = 40000;
    int attackT = 1;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 265;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int myUnits = 565;
    int hpT = 40000;
    int attackT = 1;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int myUnits = 251082761;
    int hpT = 6321;
    int attackT = 39957;
    int numWodT = 7307;
    int numStoT = 37932;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int myUnits = 251082762;
    int hpT = 6321;
    int attackT = 39957;
    int numWodT = 7307;
    int numStoT = 37932;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int myUnits = 723344864;
    int hpT = 31765;
    int attackT = 21532;
    int numWodT = 38298;
    int numStoT = 2997;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int myUnits = 723344865;
    int hpT = 31765;
    int attackT = 21532;
    int numWodT = 38298;
    int numStoT = 2997;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int myUnits = 671716922;
    int hpT = 23944;
    int attackT = 26905;
    int numWodT = 39218;
    int numStoT = 4760;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int myUnits = 671716923;
    int hpT = 23944;
    int attackT = 26905;
    int numWodT = 39218;
    int numStoT = 4760;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int myUnits = 115935662;
    int hpT = 3363;
    int attackT = 19624;
    int numWodT = 29267;
    int numStoT = 10347;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int myUnits = 115935663;
    int hpT = 3363;
    int attackT = 19624;
    int numWodT = 29267;
    int numStoT = 10347;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int myUnits = 633551945;
    int hpT = 38483;
    int attackT = 21394;
    int numWodT = 3744;
    int numStoT = 28051;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int myUnits = 633551946;
    int hpT = 38483;
    int attackT = 21394;
    int numWodT = 3744;
    int numStoT = 28051;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int myUnits = 196215157;
    int hpT = 17449;
    int attackT = 13330;
    int numWodT = 5428;
    int numStoT = 14234;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int myUnits = 196215158;
    int hpT = 17449;
    int attackT = 13330;
    int numWodT = 5428;
    int numStoT = 14234;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int myUnits = 802412978;
    int hpT = 33056;
    int attackT = 20327;
    int numWodT = 22310;
    int numStoT = 23076;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 802412979;
    int hpT = 33056;
    int attackT = 20327;
    int numWodT = 22310;
    int numStoT = 23076;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int myUnits = 801950219;
    int hpT = 29442;
    int attackT = 18748;
    int numWodT = 14607;
    int numStoT = 35762;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int myUnits = 801950220;
    int hpT = 29442;
    int attackT = 18748;
    int numWodT = 14607;
    int numStoT = 35762;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int myUnits = 423357568;
    int hpT = 18704;
    int attackT = 18265;
    int numWodT = 30045;
    int numStoT = 6820;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 423357569;
    int hpT = 18704;
    int attackT = 18265;
    int numWodT = 30045;
    int numStoT = 6820;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int myUnits = 716286293;
    int hpT = 39797;
    int attackT = 24694;
    int numWodT = 9816;
    int numStoT = 23740;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int myUnits = 716286294;
    int hpT = 39797;
    int attackT = 24694;
    int numWodT = 9816;
    int numStoT = 23740;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int myUnits = 9918873;
    int hpT = 12094;
    int attackT = 4;
    int numWodT = 8494;
    int numStoT = 37014;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int myUnits = 9918874;
    int hpT = 12094;
    int attackT = 4;
    int numWodT = 8494;
    int numStoT = 37014;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 534;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int myUnits = 8851541;
    int hpT = 18779;
    int attackT = 10;
    int numWodT = 16183;
    int numStoT = 4479;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 8851542;
    int hpT = 18779;
    int attackT = 10;
    int numWodT = 16183;
    int numStoT = 4479;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 372;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int myUnits = 10331734;
    int hpT = 20454;
    int attackT = 6;
    int numWodT = 10006;
    int numStoT = 19739;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 10331735;
    int hpT = 20454;
    int attackT = 6;
    int numWodT = 10006;
    int numStoT = 19739;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 526;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int myUnits = 33998805;
    int hpT = 33147;
    int attackT = 8;
    int numWodT = 27098;
    int numStoT = 39439;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 33998806;
    int hpT = 33147;
    int attackT = 8;
    int numWodT = 27098;
    int numStoT = 39439;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 592;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int myUnits = 19536493;
    int hpT = 38655;
    int attackT = 4;
    int numWodT = 19391;
    int numStoT = 30545;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 19536494;
    int hpT = 38655;
    int attackT = 4;
    int numWodT = 19391;
    int numStoT = 30545;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 834;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int myUnits = 23066289;
    int hpT = 36448;
    int attackT = 5;
    int numWodT = 31608;
    int numStoT = 22741;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 23066290;
    int hpT = 36448;
    int attackT = 5;
    int numWodT = 31608;
    int numStoT = 22741;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 732;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int myUnits = 18936461;
    int hpT = 29745;
    int attackT = 7;
    int numWodT = 17533;
    int numStoT = 24285;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int myUnits = 18936462;
    int hpT = 29745;
    int attackT = 7;
    int numWodT = 17533;
    int numStoT = 24285;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 645;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int myUnits = 4134259;
    int hpT = 11755;
    int attackT = 1;
    int numWodT = 18106;
    int numStoT = 20201;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int myUnits = 4134260;
    int hpT = 11755;
    int attackT = 1;
    int numWodT = 18106;
    int numStoT = 20201;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 894;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int myUnits = 10703057;
    int hpT = 28847;
    int attackT = 9;
    int numWodT = 17214;
    int numStoT = 3977;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int myUnits = 10703058;
    int hpT = 28847;
    int attackT = 9;
    int numWodT = 17214;
    int numStoT = 3977;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 425;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int myUnits = 3678282;
    int hpT = 1901;
    int attackT = 8;
    int numWodT = 8455;
    int numStoT = 22354;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 3678283;
    int hpT = 1901;
    int attackT = 8;
    int numWodT = 8455;
    int numStoT = 22354;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int myUnits = 13053345;
    int hpT = 34937;
    int attackT = 1;
    int numWodT = 35774;
    int numStoT = 34248;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 2036;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int myUnits = 14911911;
    int hpT = 38094;
    int attackT = 1;
    int numWodT = 37999;
    int numStoT = 38598;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 2150;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int myUnits = 14970055;
    int hpT = 38854;
    int attackT = 1;
    int numWodT = 39791;
    int numStoT = 36347;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 2064;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int myUnits = 13243161;
    int hpT = 39967;
    int attackT = 1;
    int numWodT = 31153;
    int numStoT = 35255;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 2223;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int myUnits = 15357711;
    int hpT = 39918;
    int attackT = 1;
    int numWodT = 38674;
    int numStoT = 38385;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 2230;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int myUnits = 402;
    int hpT = 55;
    int attackT = 1;
    int numWodT = 4;
    int numStoT = 53;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int myUnits = 403;
    int hpT = 55;
    int attackT = 1;
    int numWodT = 4;
    int numStoT = 53;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int myUnits = 693;
    int hpT = 55;
    int attackT = 1;
    int numWodT = 4;
    int numStoT = 53;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int myUnits = 352;
    int hpT = 66;
    int attackT = 1;
    int numWodT = 37;
    int numStoT = 8;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int myUnits = 353;
    int hpT = 66;
    int attackT = 1;
    int numWodT = 37;
    int numStoT = 8;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int myUnits = 495;
    int hpT = 66;
    int attackT = 1;
    int numWodT = 37;
    int numStoT = 8;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int myUnits = 781;
    int hpT = 79;
    int attackT = 1;
    int numWodT = 28;
    int numStoT = 64;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int myUnits = 782;
    int hpT = 79;
    int attackT = 1;
    int numWodT = 28;
    int numStoT = 64;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int myUnits = 1307;
    int hpT = 79;
    int attackT = 1;
    int numWodT = 28;
    int numStoT = 64;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int myUnits = 1089;
    int hpT = 39;
    int attackT = 1;
    int numWodT = 97;
    int numStoT = 91;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int myUnits = 1090;
    int hpT = 39;
    int attackT = 1;
    int numWodT = 97;
    int numStoT = 91;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int myUnits = 1952;
    int hpT = 39;
    int attackT = 1;
    int numWodT = 97;
    int numStoT = 91;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int myUnits = 490;
    int hpT = 64;
    int attackT = 1;
    int numWodT = 7;
    int numStoT = 57;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int myUnits = 491;
    int hpT = 64;
    int attackT = 1;
    int numWodT = 7;
    int numStoT = 57;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int myUnits = 836;
    int hpT = 64;
    int attackT = 1;
    int numWodT = 7;
    int numStoT = 57;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int myUnits = 404;
    int hpT = 64;
    int attackT = 1;
    int numWodT = 52;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int myUnits = 405;
    int hpT = 64;
    int attackT = 1;
    int numWodT = 52;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int myUnits = 468;
    int hpT = 64;
    int attackT = 1;
    int numWodT = 52;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int myUnits = 703;
    int hpT = 26;
    int attackT = 1;
    int numWodT = 89;
    int numStoT = 62;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 704;
    int hpT = 26;
    int attackT = 1;
    int numWodT = 89;
    int numStoT = 62;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int myUnits = 1234;
    int hpT = 26;
    int attackT = 1;
    int numWodT = 89;
    int numStoT = 62;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int myUnits = 438;
    int hpT = 27;
    int attackT = 1;
    int numWodT = 85;
    int numStoT = 7;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int myUnits = 439;
    int hpT = 27;
    int attackT = 1;
    int numWodT = 85;
    int numStoT = 7;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int myUnits = 464;
    int hpT = 27;
    int attackT = 1;
    int numWodT = 85;
    int numStoT = 7;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int myUnits = 808;
    int hpT = 88;
    int attackT = 1;
    int numWodT = 11;
    int numStoT = 79;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 809;
    int hpT = 88;
    int attackT = 1;
    int numWodT = 11;
    int numStoT = 79;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int myUnits = 1580;
    int hpT = 88;
    int attackT = 1;
    int numWodT = 11;
    int numStoT = 79;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int myUnits = 739;
    int hpT = 47;
    int attackT = 1;
    int numWodT = 38;
    int numStoT = 77;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 740;
    int hpT = 47;
    int attackT = 1;
    int numWodT = 38;
    int numStoT = 77;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int myUnits = 1057;
    int hpT = 47;
    int attackT = 1;
    int numWodT = 38;
    int numStoT = 77;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
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
    int hpT = 2;
    int attackT = 2;
    int numWodT = 2;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int myUnits = 1;
    int hpT = 2;
    int attackT = 2;
    int numWodT = 2;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
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
    int hpT = 1;
    int attackT = 2;
    int numWodT = 2;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int myUnits = 1;
    int hpT = 1;
    int attackT = 2;
    int numWodT = 2;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int attackT = 1;
    int numWodT = 2;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int myUnits = 1;
    int hpT = 2;
    int attackT = 1;
    int numWodT = 2;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 2;
    int hpT = 1;
    int attackT = 1;
    int numWodT = 2;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int myUnits = 1;
    int hpT = 1;
    int attackT = 1;
    int numWodT = 2;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 2;
    int hpT = 2;
    int attackT = 2;
    int numWodT = 1;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 1;
    int hpT = 2;
    int attackT = 2;
    int numWodT = 1;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 2;
    int hpT = 1;
    int attackT = 2;
    int numWodT = 1;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int myUnits = 1;
    int hpT = 1;
    int attackT = 2;
    int numWodT = 1;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int myUnits = 2;
    int hpT = 2;
    int attackT = 1;
    int numWodT = 1;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 1;
    int hpT = 2;
    int attackT = 1;
    int numWodT = 1;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int myUnits = 2;
    int hpT = 1;
    int attackT = 1;
    int numWodT = 1;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 1;
    int hpT = 1;
    int attackT = 1;
    int numWodT = 1;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 2;
    int hpT = 2;
    int attackT = 2;
    int numWodT = 2;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int myUnits = 1;
    int hpT = 2;
    int attackT = 2;
    int numWodT = 2;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int myUnits = 2;
    int hpT = 1;
    int attackT = 2;
    int numWodT = 2;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int myUnits = 1;
    int hpT = 1;
    int attackT = 2;
    int numWodT = 2;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int myUnits = 2;
    int hpT = 2;
    int attackT = 1;
    int numWodT = 2;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int myUnits = 1;
    int hpT = 2;
    int attackT = 1;
    int numWodT = 2;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int myUnits = 2;
    int hpT = 1;
    int attackT = 1;
    int numWodT = 2;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int myUnits = 1;
    int hpT = 1;
    int attackT = 1;
    int numWodT = 2;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int myUnits = 2;
    int hpT = 2;
    int attackT = 2;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int myUnits = 1;
    int hpT = 2;
    int attackT = 2;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int myUnits = 2;
    int hpT = 1;
    int attackT = 2;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int myUnits = 1;
    int hpT = 1;
    int attackT = 2;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int myUnits = 2;
    int hpT = 2;
    int attackT = 1;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int myUnits = 1;
    int hpT = 2;
    int attackT = 1;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int myUnits = 2;
    int hpT = 1;
    int attackT = 1;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int myUnits = 1;
    int hpT = 1;
    int attackT = 1;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int myUnits = 14877;
    int hpT = 551;
    int attackT = 86;
    int numWodT = 18;
    int numStoT = 9;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int myUnits = 43;
    int hpT = 8;
    int attackT = 3;
    int numWodT = 3;
    int numStoT = 6;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int myUnits = 13;
    int hpT = 3;
    int attackT = 13;
    int numWodT = 2;
    int numStoT = 3;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int myUnits = 4553;
    int hpT = 55;
    int attackT = 9;
    int numWodT = 92;
    int numStoT = 157;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int myUnits = 7850;
    int hpT = 206;
    int attackT = 3857;
    int numWodT = 30;
    int numStoT = 9;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int myUnits = 531144140;
    int hpT = 60;
    int attackT = 49;
    int numWodT = 85;
    int numStoT = 597;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int myUnits = 722639;
    int hpT = 898;
    int attackT = 26980;
    int numWodT = 196;
    int numStoT = 658;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int myUnits = 1000000000;
    int hpT = 40000;
    int attackT = 100;
    int numWodT = 1;
    int numStoT = 40000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int myUnits = 97030319;
    int hpT = 39222;
    int attackT = 37805;
    int numWodT = 4;
    int numStoT = 3738;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int myUnits = 1000000000;
    int hpT = 40000;
    int attackT = 1;
    int numWodT = 40000;
    int numStoT = 40000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int myUnits = 999999999;
    int hpT = 39999;
    int attackT = 39999;
    int numWodT = 39999;
    int numStoT = 39999;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int myUnits = 1000000000;
    int hpT = 400;
    int attackT = 2;
    int numWodT = 456;
    int numStoT = 65;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 500000000;
    int hpT = 10000;
    int attackT = 10000;
    int numWodT = 10000;
    int numStoT = 10000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int myUnits = 100000;
    int hpT = 10;
    int attackT = 10;
    int numWodT = 10;
    int numStoT = 10;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 1000000000;
    int hpT = 1;
    int attackT = 1;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int myUnits = 1000000000;
    int hpT = 111;
    int attackT = 111;
    int numWodT = 222;
    int numStoT = 222;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int myUnits = 345243216;
    int hpT = 35000;
    int attackT = 7;
    int numWodT = 12555;
    int numStoT = 36987;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int myUnits = 1000000000;
    int hpT = 9997;
    int attackT = 39999;
    int numWodT = 39999;
    int numStoT = 39999;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 1000000000;
    int hpT = 1;
    int attackT = 1;
    int numWodT = 40000;
    int numStoT = 40000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int myUnits = 1000000000;
    int hpT = 43;
    int attackT = 4;
    int numWodT = 664;
    int numStoT = 345;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int myUnits = 1000;
    int hpT = 4000;
    int attackT = 1;
    int numWodT = 3;
    int numStoT = 7;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int myUnits = 200;
    int hpT = 1;
    int attackT = 1;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
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
    int myUnits = 1000000000;
    int hpT = 40000;
    int attackT = 1000;
    int numWodT = 9999;
    int numStoT = 9192;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int myUnits = 1000000000;
    int hpT = 1000;
    int attackT = 500;
    int numWodT = 5000;
    int numStoT = 5000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int myUnits = 5;
    int hpT = 3;
    int attackT = 2;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int myUnits = 1000000000;
    int hpT = 10;
    int attackT = 1;
    int numWodT = 100;
    int numStoT = 100;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int myUnits = 12;
    int hpT = 3;
    int attackT = 2;
    int numWodT = 1;
    int numStoT = 5;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int myUnits = 70000;
    int hpT = 1;
    int attackT = 1;
    int numWodT = 40000;
    int numStoT = 40000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int myUnits = 1000000000;
    int hpT = 40000;
    int attackT = 40000;
    int numWodT = 40000;
    int numStoT = 39999;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int myUnits = 599990990;
    int hpT = 100;
    int attackT = 40000;
    int numWodT = 40000;
    int numStoT = 4000;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int myUnits = 7;
    int hpT = 3;
    int attackT = 2;
    int numWodT = 1;
    int numStoT = 2;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int myUnits = 12;
    int hpT = 3;
    int attackT = 2;
    int numWodT = 3;
    int numStoT = 3;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int myUnits = 4;
    int hpT = 4;
    int attackT = 1;
    int numWodT = 1;
    int numStoT = 1;
    EnemyTowers* pObj = new EnemyTowers();
    clock_t start = clock();
    int result = pObj->attack(myUnits, hpT, attackT, numWodT, numStoT);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22778246&rd=13904&pm=10070
********************************************************************************
#include <stdio.h> 
#include <stdlib.h> 
#include <vector> 
#include <set> 
#include <string> 
#include <iostream> 
#include <cmath> 
 
using namespace std; 
 
 
class EnemyTowers 
{ 
  private: 
    int attack_single(int myUnits, int hpT, int attackT, int numTower) { 
      int total_hpT = hpT*numTower; 
      int turns = 1; 
      for( ;; ) { 
        total_hpT -= myUnits; 
        if( total_hpT <= 0 ) return turns; 
        numTower = ( total_hpT - 1 )/hpT + 1; 
        myUnits -= attackT*numTower; 
        if( myUnits <= 0 ) return -1; 
        turns++; 
      } 
    } 
   
    public: 
    int attack(int myUnits, int hpT, int attackT, int numWodT, int numStoT) { 
    int min_turns = attack_single( myUnits, hpT, attackT, numWodT + numStoT ); 
    if( min_turns < 1 ) return min_turns; 
    int numWodS, numStoS; 
    int best_turns = 1000000000; 
    int numWodS_min = 0; 
    int numWodS_max = myUnits; 
    for(;;) { 
      //cout << numWodS_min << " " << numWodS_max << endl; 
      if( numWodS_min > numWodS_max ) break; 
      numWodS = ( numWodS_max - numWodS_min )/2 + numWodS_min; 
      numStoS = myUnits - numWodS; 
      int wt = attack_single( numWodS, hpT, attackT, numWodT ); 
      if( wt < 1 ) { 
        numWodS_min = numWodS + 1; 
        continue; 
      } 
      int st = attack_single( numStoS, hpT, attackT, numStoT ); 
      if( st < 1 ) { 
        numWodS_max = numWodS - 1; 
        continue; 
      } 
      //cout << "Soldiers: " << numWodS << " " << numStoS << ", turns=" << wt << " " << st << endl; 
      int turns = max(wt,st); 
      if( best_turns > turns ) best_turns = turns; 
      if( wt == st ) return best_turns; 
      if( wt < st ) { 
        numWodS_max = numWodS - 1; 
      } else { 
        numWodS_min = numWodS + 1; 
      } 
    } 
    if( best_turns == 1000000000 ) return -1; 
    return best_turns; 
    } 
};

********************************************************************************
*******************************************************************************/