/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10073
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

class BarracksEasy {
public:
    int attack(int myUnits, int barHp, int unitsPerRound);
};

int BarracksEasy::attack(int myUnits, int barHp, int unitsPerRound) {
    int ret;
    return ret;
}


int test0() {
    int myUnits = 10;
    int barHp = 11;
    int unitsPerRound = 15;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 3;
    int barHp = 10;
    int unitsPerRound = 4;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 2;
    int barHp = 10;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int myUnits = 11;
    int barHp = 12;
    int unitsPerRound = 9;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int myUnits = 12;
    int barHp = 32;
    int unitsPerRound = 5;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int myUnits = 12;
    int barHp = 44;
    int unitsPerRound = 6;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int myUnits = 7;
    int barHp = 10;
    int unitsPerRound = 8;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int myUnits = 4;
    int barHp = 6;
    int unitsPerRound = 7;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int myUnits = 8;
    int barHp = 10;
    int unitsPerRound = 6;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int myUnits = 4;
    int barHp = 5;
    int unitsPerRound = 5;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int myUnits = 5;
    int barHp = 8;
    int unitsPerRound = 5;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int myUnits = 6;
    int barHp = 8;
    int unitsPerRound = 4;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int myUnits = 6;
    int barHp = 8;
    int unitsPerRound = 6;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int myUnits = 1;
    int barHp = 1;
    int unitsPerRound = 2;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 1;
    int barHp = 1;
    int unitsPerRound = 3;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int myUnits = 1;
    int barHp = 2;
    int unitsPerRound = 2;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 1;
    int barHp = 2;
    int unitsPerRound = 3;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 1;
    int barHp = 3;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 1;
    int barHp = 3;
    int unitsPerRound = 2;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 1;
    int barHp = 3;
    int unitsPerRound = 3;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 2;
    int barHp = 1;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int myUnits = 2;
    int barHp = 1;
    int unitsPerRound = 2;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 2;
    int barHp = 1;
    int unitsPerRound = 3;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int myUnits = 2;
    int barHp = 2;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 2;
    int barHp = 2;
    int unitsPerRound = 2;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int myUnits = 2;
    int barHp = 2;
    int unitsPerRound = 3;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 2;
    int barHp = 3;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int myUnits = 2;
    int barHp = 3;
    int unitsPerRound = 2;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int myUnits = 2;
    int barHp = 3;
    int unitsPerRound = 3;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 3;
    int barHp = 1;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int myUnits = 3;
    int barHp = 1;
    int unitsPerRound = 2;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int myUnits = 3;
    int barHp = 1;
    int unitsPerRound = 3;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 3;
    int barHp = 2;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 3;
    int barHp = 2;
    int unitsPerRound = 2;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 3;
    int barHp = 2;
    int unitsPerRound = 3;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int myUnits = 3;
    int barHp = 3;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int myUnits = 3;
    int barHp = 3;
    int unitsPerRound = 2;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int myUnits = 3;
    int barHp = 3;
    int unitsPerRound = 3;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int myUnits = 2;
    int barHp = 50;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int myUnits = 10;
    int barHp = 43;
    int unitsPerRound = 8;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int myUnits = 8;
    int barHp = 35;
    int unitsPerRound = 5;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int myUnits = 12;
    int barHp = 43;
    int unitsPerRound = 9;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int myUnits = 9;
    int barHp = 43;
    int unitsPerRound = 7;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int myUnits = 6;
    int barHp = 49;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int myUnits = 7;
    int barHp = 31;
    int unitsPerRound = 5;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int myUnits = 11;
    int barHp = 32;
    int unitsPerRound = 9;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int myUnits = 8;
    int barHp = 21;
    int unitsPerRound = 7;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int myUnits = 4;
    int barHp = 17;
    int unitsPerRound = 3;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int myUnits = 5;
    int barHp = 22;
    int unitsPerRound = 4;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int myUnits = 6;
    int barHp = 28;
    int unitsPerRound = 4;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int myUnits = 4;
    int barHp = 45;
    int unitsPerRound = 2;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int myUnits = 9;
    int barHp = 33;
    int unitsPerRound = 8;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int myUnits = 6;
    int barHp = 37;
    int unitsPerRound = 3;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int myUnits = 4;
    int barHp = 43;
    int unitsPerRound = 2;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int myUnits = 8;
    int barHp = 44;
    int unitsPerRound = 4;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int myUnits = 5;
    int barHp = 23;
    int unitsPerRound = 4;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int myUnits = 9;
    int barHp = 43;
    int unitsPerRound = 7;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int myUnits = 22;
    int barHp = 48;
    int unitsPerRound = 21;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int myUnits = 12;
    int barHp = 49;
    int unitsPerRound = 9;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int myUnits = 50;
    int barHp = 50;
    int unitsPerRound = 50;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 50;
    int barHp = 50;
    int unitsPerRound = 49;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 30;
    int barHp = 30;
    int unitsPerRound = 50;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 30;
    int barHp = 31;
    int unitsPerRound = 48;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int myUnits = 30;
    int barHp = 31;
    int unitsPerRound = 47;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int myUnits = 1;
    int barHp = 50;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int myUnits = 1;
    int barHp = 1;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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

int test66() {
    int myUnits = 1;
    int barHp = 2;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int myUnits = 50;
    int barHp = 1;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int myUnits = 1;
    int barHp = 1;
    int unitsPerRound = 50;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int myUnits = 1;
    int barHp = 50;
    int unitsPerRound = 50;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int myUnits = 50;
    int barHp = 1;
    int unitsPerRound = 50;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int myUnits = 50;
    int barHp = 50;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int myUnits = 1;
    int barHp = 31;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int myUnits = 3;
    int barHp = 4;
    int unitsPerRound = 42;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 3;
    int barHp = 4;
    int unitsPerRound = 6;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int myUnits = 2;
    int barHp = 3;
    int unitsPerRound = 36;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int myUnits = 5;
    int barHp = 37;
    int unitsPerRound = 5;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 12;
    int barHp = 13;
    int unitsPerRound = 50;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int myUnits = 19;
    int barHp = 23;
    int unitsPerRound = 28;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int myUnits = 8;
    int barHp = 37;
    int unitsPerRound = 8;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 5;
    int barHp = 6;
    int unitsPerRound = 19;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int myUnits = 22;
    int barHp = 35;
    int unitsPerRound = 23;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int myUnits = 18;
    int barHp = 36;
    int unitsPerRound = 18;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 21;
    int barHp = 22;
    int unitsPerRound = 40;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int myUnits = 11;
    int barHp = 12;
    int unitsPerRound = 23;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int myUnits = 6;
    int barHp = 7;
    int unitsPerRound = 45;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 23;
    int barHp = 36;
    int unitsPerRound = 25;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int myUnits = 11;
    int barHp = 24;
    int unitsPerRound = 11;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 9;
    int barHp = 36;
    int unitsPerRound = 9;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 2;
    int barHp = 12;
    int unitsPerRound = 2;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 10;
    int barHp = 26;
    int unitsPerRound = 10;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int myUnits = 8;
    int barHp = 9;
    int unitsPerRound = 18;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 9;
    int barHp = 11;
    int unitsPerRound = 12;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int myUnits = 34;
    int barHp = 47;
    int unitsPerRound = 42;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 34;
    int barHp = 48;
    int unitsPerRound = 41;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int myUnits = 32;
    int barHp = 43;
    int unitsPerRound = 40;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int myUnits = 12;
    int barHp = 17;
    int unitsPerRound = 14;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int myUnits = 14;
    int barHp = 16;
    int unitsPerRound = 20;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int myUnits = 19;
    int barHp = 21;
    int unitsPerRound = 28;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int myUnits = 32;
    int barHp = 42;
    int unitsPerRound = 41;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int myUnits = 23;
    int barHp = 31;
    int unitsPerRound = 29;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int myUnits = 30;
    int barHp = 40;
    int unitsPerRound = 38;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int myUnits = 13;
    int barHp = 16;
    int unitsPerRound = 18;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int myUnits = 34;
    int barHp = 44;
    int unitsPerRound = 45;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int myUnits = 15;
    int barHp = 23;
    int unitsPerRound = 16;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int myUnits = 14;
    int barHp = 16;
    int unitsPerRound = 20;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int myUnits = 31;
    int barHp = 42;
    int unitsPerRound = 39;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int myUnits = 34;
    int barHp = 39;
    int unitsPerRound = 50;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int myUnits = 27;
    int barHp = 32;
    int unitsPerRound = 38;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int myUnits = 30;
    int barHp = 46;
    int unitsPerRound = 32;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int myUnits = 32;
    int barHp = 38;
    int unitsPerRound = 45;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int myUnits = 22;
    int barHp = 31;
    int unitsPerRound = 26;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int myUnits = 48;
    int barHp = 49;
    int unitsPerRound = 48;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int myUnits = 45;
    int barHp = 49;
    int unitsPerRound = 45;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int myUnits = 45;
    int barHp = 49;
    int unitsPerRound = 50;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int myUnits = 49;
    int barHp = 50;
    int unitsPerRound = 47;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int myUnits = 46;
    int barHp = 47;
    int unitsPerRound = 48;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int myUnits = 45;
    int barHp = 47;
    int unitsPerRound = 45;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int myUnits = 47;
    int barHp = 48;
    int unitsPerRound = 45;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int myUnits = 45;
    int barHp = 50;
    int unitsPerRound = 46;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int myUnits = 45;
    int barHp = 48;
    int unitsPerRound = 46;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int myUnits = 48;
    int barHp = 50;
    int unitsPerRound = 48;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int myUnits = 47;
    int barHp = 49;
    int unitsPerRound = 49;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int myUnits = 45;
    int barHp = 50;
    int unitsPerRound = 50;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int myUnits = 47;
    int barHp = 50;
    int unitsPerRound = 48;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int myUnits = 49;
    int barHp = 50;
    int unitsPerRound = 48;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int myUnits = 46;
    int barHp = 48;
    int unitsPerRound = 49;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int myUnits = 45;
    int barHp = 48;
    int unitsPerRound = 49;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int myUnits = 47;
    int barHp = 48;
    int unitsPerRound = 45;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 47;
    int barHp = 50;
    int unitsPerRound = 49;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int myUnits = 46;
    int barHp = 49;
    int unitsPerRound = 49;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 47;
    int barHp = 49;
    int unitsPerRound = 48;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int myUnits = 50;
    int barHp = 27;
    int unitsPerRound = 48;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int myUnits = 10;
    int barHp = 50;
    int unitsPerRound = 10;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int myUnits = 3;
    int barHp = 40;
    int unitsPerRound = 3;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int myUnits = 23;
    int barHp = 43;
    int unitsPerRound = 12;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int myUnits = 50;
    int barHp = 21;
    int unitsPerRound = 11;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int myUnits = 2;
    int barHp = 50;
    int unitsPerRound = 2;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int myUnits = 20;
    int barHp = 40;
    int unitsPerRound = 11;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 10;
    int barHp = 50;
    int unitsPerRound = 2;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int myUnits = 3;
    int barHp = 20;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int myUnits = 20;
    int barHp = 41;
    int unitsPerRound = 21;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int myUnits = 3;
    int barHp = 30;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int myUnits = 6;
    int barHp = 50;
    int unitsPerRound = 6;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int myUnits = 20;
    int barHp = 50;
    int unitsPerRound = 18;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int myUnits = 30;
    int barHp = 50;
    int unitsPerRound = 29;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int myUnits = 3;
    int barHp = 4;
    int unitsPerRound = 3;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int myUnits = 10;
    int barHp = 50;
    int unitsPerRound = 5;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int myUnits = 5;
    int barHp = 11;
    int unitsPerRound = 5;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int myUnits = 10;
    int barHp = 11;
    int unitsPerRound = 11;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int myUnits = 19;
    int barHp = 50;
    int unitsPerRound = 14;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int myUnits = 10;
    int barHp = 50;
    int unitsPerRound = 9;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int myUnits = 19;
    int barHp = 50;
    int unitsPerRound = 15;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int myUnits = 1;
    int barHp = 10;
    int unitsPerRound = 1;
    BarracksEasy* pObj = new BarracksEasy();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22654093&rd=13509&pm=10073
********************************************************************************
#include <vector> 
#include <cstring> 
#include <algorithm> 
#include <iostream> 
using namespace std; 
 
int newB; 
int _f[60][150][60]; 
 
int f(int a,int b,int h) 
{ 
  if( _f[a][b][h] == (-1) ) 
  { 
    _f[a][b][h] = (1<<30); 
    if( (h==0) && (b==0) ) 
    { 
      _f[a][b][h] = 0; 
    }else 
    if( a==0 ) 
    { 
      _f[a][b][h] = (1<<30); 
    }else 
    { 
      int min = (1<<30),res = (1<<30),B,A,H; 
      for(int a_ = 0; a_<=a; a_++) 
      { 
        B = b - a_; 
        if( B < 0 ) B = 0; 
         
        H = h - (a-a_); 
        if( H < 0 ) H = 0; 
         
        A = a-B; 
        if( A < 0 ) A = 0; 
         
        if( H > 0 ) B +=newB; 
         
        res = 1+f(A,B,H); 
         
        if( res < min ) min = res; 
      } 
      _f[a][b][h] = min; 
    } 
  } 
  return _f[a][b][h]; 
} 
 
struct BarracksEasy 
{ 
  int attack(int myU, int Hp, int newU) 
  { 
    memset(_f,-1,sizeof(_f)); 
    newB = newU; 
    int res = f(myU,0,Hp); 
    if( res < (1<<30) ) 
    { 
      return res; 
    } 
    else 
    { 
      return -1; 
    } 
  }//method 
};//class

********************************************************************************
*******************************************************************************/