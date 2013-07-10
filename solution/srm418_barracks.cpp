/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8211
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

class Barracks {
public:
    int attack(int myUnits, int barHp, int unitsPerRound);
};

int Barracks::attack(int myUnits, int barHp, int unitsPerRound) {
    int ret;
    return ret;
}


int test0() {
    int myUnits = 10;
    int barHp = 11;
    int unitsPerRound = 15;
    Barracks* pObj = new Barracks();
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
    int myUnits = 1;
    int barHp = 2;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
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
    int myUnits = 1;
    int barHp = 1;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 25;
    int barHp = 200;
    int unitsPerRound = 10;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int myUnits = 400;
    int barHp = 400;
    int unitsPerRound = 400;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int myUnits = 399;
    int barHp = 400;
    int unitsPerRound = 400;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 125;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 126;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 187;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 188;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 208;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 209;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 218;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 219;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 225;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 226;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 227;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 228;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 229;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 230;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 231;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 232;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 233;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 234;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 235;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 236;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 237;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 238;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 239;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 240;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 241;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 242;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 243;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 244;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 245;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 246;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 247;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 248;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 249;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int myUnits = 250;
    int barHp = 500;
    int unitsPerRound = 250;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int myUnits = 499;
    int barHp = 500;
    int unitsPerRound = 498;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 30;
    int barHp = 500;
    int unitsPerRound = 15;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int myUnits = 30;
    int barHp = 496;
    int unitsPerRound = 15;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int myUnits = 30;
    int barHp = 495;
    int unitsPerRound = 15;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int myUnits = 31;
    int barHp = 495;
    int unitsPerRound = 15;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int myUnits = 1;
    int barHp = 500;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 200;
    int barHp = 450;
    int unitsPerRound = 200;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 2;
    int barHp = 500;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int myUnits = 3;
    int barHp = 500;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 498;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int myUnits = 499;
    int barHp = 500;
    int unitsPerRound = 499;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int myUnits = 1;
    int barHp = 1;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int myUnits = 1;
    int barHp = 1;
    int unitsPerRound = 3;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int myUnits = 1;
    int barHp = 2;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 1;
    int barHp = 2;
    int unitsPerRound = 3;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int myUnits = 1;
    int barHp = 3;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 1;
    int barHp = 3;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int myUnits = 1;
    int barHp = 3;
    int unitsPerRound = 3;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 2;
    int barHp = 1;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int myUnits = 2;
    int barHp = 1;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 2;
    int barHp = 1;
    int unitsPerRound = 3;
    Barracks* pObj = new Barracks();
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
    int myUnits = 2;
    int barHp = 2;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
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
    int myUnits = 2;
    int barHp = 2;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
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
    int myUnits = 2;
    int barHp = 2;
    int unitsPerRound = 3;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int myUnits = 2;
    int barHp = 3;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 2;
    int barHp = 3;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int myUnits = 2;
    int barHp = 3;
    int unitsPerRound = 3;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int myUnits = 3;
    int barHp = 1;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int myUnits = 3;
    int barHp = 1;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
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
    int myUnits = 3;
    int barHp = 1;
    int unitsPerRound = 3;
    Barracks* pObj = new Barracks();
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
    int myUnits = 3;
    int barHp = 2;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int myUnits = 3;
    int barHp = 2;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
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
    int myUnits = 3;
    int barHp = 2;
    int unitsPerRound = 3;
    Barracks* pObj = new Barracks();
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
    int myUnits = 3;
    int barHp = 3;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
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
    int barHp = 3;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
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
    int barHp = 3;
    int unitsPerRound = 3;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int myUnits = 212;
    int barHp = 237;
    int unitsPerRound = 173;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int myUnits = 396;
    int barHp = 125;
    int unitsPerRound = 358;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int myUnits = 365;
    int barHp = 435;
    int unitsPerRound = 368;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int myUnits = 88;
    int barHp = 251;
    int unitsPerRound = 44;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 13;
    int barHp = 240;
    int unitsPerRound = 369;
    Barracks* pObj = new Barracks();
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
    int myUnits = 71;
    int barHp = 296;
    int unitsPerRound = 40;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int myUnits = 403;
    int barHp = 98;
    int unitsPerRound = 102;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int myUnits = 153;
    int barHp = 493;
    int unitsPerRound = 318;
    Barracks* pObj = new Barracks();
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
    int myUnits = 281;
    int barHp = 302;
    int unitsPerRound = 257;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int myUnits = 366;
    int barHp = 442;
    int unitsPerRound = 287;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int myUnits = 120;
    int barHp = 445;
    int unitsPerRound = 190;
    Barracks* pObj = new Barracks();
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
    int myUnits = 7;
    int barHp = 151;
    int unitsPerRound = 7;
    Barracks* pObj = new Barracks();
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
    int myUnits = 6;
    int barHp = 109;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int myUnits = 11;
    int barHp = 8;
    int unitsPerRound = 9;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 6;
    int barHp = 93;
    int unitsPerRound = 10;
    Barracks* pObj = new Barracks();
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
    int myUnits = 13;
    int barHp = 288;
    int unitsPerRound = 6;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int myUnits = 9;
    int barHp = 427;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int myUnits = 14;
    int barHp = 282;
    int unitsPerRound = 6;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int myUnits = 7;
    int barHp = 230;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int myUnits = 12;
    int barHp = 173;
    int unitsPerRound = 10;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int myUnits = 12;
    int barHp = 32;
    int unitsPerRound = 5;
    Barracks* pObj = new Barracks();
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
    int myUnits = 14;
    int barHp = 189;
    int unitsPerRound = 9;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
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
    int barHp = 432;
    int unitsPerRound = 3;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int myUnits = 11;
    int barHp = 411;
    int unitsPerRound = 5;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int myUnits = 15;
    int barHp = 500;
    int unitsPerRound = 10;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int myUnits = 12;
    int barHp = 486;
    int unitsPerRound = 10;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 236;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int myUnits = 10;
    int barHp = 476;
    int unitsPerRound = 8;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 233;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int myUnits = 14;
    int barHp = 453;
    int unitsPerRound = 3;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int myUnits = 13;
    int barHp = 105;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int myUnits = 7;
    int barHp = 435;
    int unitsPerRound = 5;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 215;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int myUnits = 8;
    int barHp = 381;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int myUnits = 8;
    int barHp = 271;
    int unitsPerRound = 9;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 10;
    int barHp = 425;
    int unitsPerRound = 9;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 412;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int myUnits = 10;
    int barHp = 409;
    int unitsPerRound = 9;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 396;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int myUnits = 9;
    int barHp = 288;
    int unitsPerRound = 4;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int myUnits = 6;
    int barHp = 380;
    int unitsPerRound = 5;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 373;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int myUnits = 13;
    int barHp = 319;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int myUnits = 8;
    int barHp = 101;
    int unitsPerRound = 8;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 12;
    int barHp = 44;
    int unitsPerRound = 6;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int myUnits = 8;
    int barHp = 278;
    int unitsPerRound = 5;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int myUnits = 10;
    int barHp = 331;
    int unitsPerRound = 8;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int myUnits = 13;
    int barHp = 121;
    int unitsPerRound = 10;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int myUnits = 7;
    int barHp = 300;
    int unitsPerRound = 3;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int myUnits = 8;
    int barHp = 178;
    int unitsPerRound = 7;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int myUnits = 7;
    int barHp = 264;
    int unitsPerRound = 3;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int myUnits = 6;
    int barHp = 148;
    int unitsPerRound = 8;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 14;
    int barHp = 471;
    int unitsPerRound = 9;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int myUnits = 7;
    int barHp = 10;
    int unitsPerRound = 8;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int myUnits = 10;
    int barHp = 195;
    int unitsPerRound = 10;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int myUnits = 10;
    int barHp = 311;
    int unitsPerRound = 7;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int myUnits = 12;
    int barHp = 178;
    int unitsPerRound = 9;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int myUnits = 12;
    int barHp = 179;
    int unitsPerRound = 6;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int myUnits = 13;
    int barHp = 151;
    int unitsPerRound = 3;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int myUnits = 11;
    int barHp = 229;
    int unitsPerRound = 4;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int myUnits = 6;
    int barHp = 471;
    int unitsPerRound = 8;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int myUnits = 13;
    int barHp = 81;
    int unitsPerRound = 10;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int myUnits = 15;
    int barHp = 339;
    int unitsPerRound = 10;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int myUnits = 14;
    int barHp = 276;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
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
    int barHp = 198;
    int unitsPerRound = 4;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int myUnits = 4;
    int barHp = 6;
    int unitsPerRound = 7;
    Barracks* pObj = new Barracks();
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
    int myUnits = 8;
    int barHp = 10;
    int unitsPerRound = 6;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int myUnits = 4;
    int barHp = 5;
    int unitsPerRound = 5;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int myUnits = 5;
    int barHp = 8;
    int unitsPerRound = 5;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int myUnits = 6;
    int barHp = 8;
    int unitsPerRound = 4;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int myUnits = 6;
    int barHp = 8;
    int unitsPerRound = 6;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int myUnits = 100;
    int barHp = 160;
    int unitsPerRound = 101;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int myUnits = 300;
    int barHp = 301;
    int unitsPerRound = 484;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int myUnits = 300;
    int barHp = 301;
    int unitsPerRound = 485;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int myUnits = 3;
    int barHp = 500;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 498;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int myUnits = 3;
    int barHp = 499;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 497;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 2500;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 2499;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 961;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int myUnits = 3000;
    int barHp = 5000;
    int unitsPerRound = 3001;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int myUnits = 3000;
    int barHp = 5000;
    int unitsPerRound = 3000;
    Barracks* pObj = new Barracks();
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
    int myUnits = 3000;
    int barHp = 5000;
    int unitsPerRound = 2999;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 153;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int myUnits = 3000;
    int barHp = 5000;
    int unitsPerRound = 2998;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int myUnits = 5000;
    int barHp = 5000;
    int unitsPerRound = 5000;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 5000;
    int barHp = 4999;
    int unitsPerRound = 5000;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 5000;
    int barHp = 4999;
    int unitsPerRound = 4999;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
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
    int myUnits = 4999;
    int barHp = 5000;
    int unitsPerRound = 5000;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int myUnits = 3819;
    int barHp = 5000;
    int unitsPerRound = 5000;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int myUnits = 3820;
    int barHp = 5000;
    int unitsPerRound = 5000;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int myUnits = 5000;
    int barHp = 100;
    int unitsPerRound = 5000;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int myUnits = 449;
    int barHp = 4844;
    int unitsPerRound = 448;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4123;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int myUnits = 78;
    int barHp = 4934;
    int unitsPerRound = 77;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4812;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int myUnits = 1956;
    int barHp = 4418;
    int unitsPerRound = 1955;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1259;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int myUnits = 755;
    int barHp = 3976;
    int unitsPerRound = 753;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1383;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int myUnits = 366;
    int barHp = 3561;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int myUnits = 250;
    int barHp = 2669;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int myUnits = 202;
    int barHp = 4990;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int myUnits = 149;
    int barHp = 2600;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int myUnits = 1661;
    int barHp = 4327;
    int unitsPerRound = 1107;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int myUnits = 1092;
    int barHp = 2892;
    int unitsPerRound = 950;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int myUnits = 1570;
    int barHp = 3499;
    int unitsPerRound = 1245;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int myUnits = 1082;
    int barHp = 4733;
    int unitsPerRound = 883;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int myUnits = 1047;
    int barHp = 3580;
    int unitsPerRound = 1024;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int myUnits = 1148;
    int barHp = 2275;
    int unitsPerRound = 716;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int myUnits = 744;
    int barHp = 1408;
    int unitsPerRound = 533;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int myUnits = 1368;
    int barHp = 4927;
    int unitsPerRound = 1140;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int myUnits = 716;
    int barHp = 4108;
    int unitsPerRound = 447;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int myUnits = 1276;
    int barHp = 4785;
    int unitsPerRound = 1115;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int myUnits = 915;
    int barHp = 4799;
    int unitsPerRound = 811;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int myUnits = 749;
    int barHp = 1895;
    int unitsPerRound = 577;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int myUnits = 1284;
    int barHp = 2603;
    int unitsPerRound = 1152;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int myUnits = 1956;
    int barHp = 4679;
    int unitsPerRound = 1648;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int myUnits = 2335;
    int barHp = 4365;
    int unitsPerRound = 2035;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int myUnits = 2318;
    int barHp = 4674;
    int unitsPerRound = 2304;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int myUnits = 2162;
    int barHp = 4917;
    int unitsPerRound = 1878;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int myUnits = 2575;
    int barHp = 4876;
    int unitsPerRound = 1861;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int myUnits = 2021;
    int barHp = 3976;
    int unitsPerRound = 1294;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int myUnits = 804;
    int barHp = 3198;
    int unitsPerRound = 692;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 1250;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 1251;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 1875;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 1876;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 2083;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 2084;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 2187;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 2188;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 2250;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 2251;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 2300;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 2301;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 2333;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 2334;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 2495;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 197;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    int myUnits = 1;
    int barHp = 5000;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    int myUnits = 2;
    int barHp = 5000;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4999;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    int myUnits = 3;
    int barHp = 5000;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    int myUnits = 747;
    int barHp = 4150;
    int unitsPerRound = 30;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    int myUnits = 697;
    int barHp = 4753;
    int unitsPerRound = 19;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    int myUnits = 747;
    int barHp = 4328;
    int unitsPerRound = 26;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    int myUnits = 1000;
    int barHp = 5000;
    int unitsPerRound = 999;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3388;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    int myUnits = 2000;
    int barHp = 4000;
    int unitsPerRound = 1800;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    int myUnits = 100;
    int barHp = 5000;
    int unitsPerRound = 97;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1617;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    int myUnits = 2500;
    int barHp = 5000;
    int unitsPerRound = 2420;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    int myUnits = 342;
    int barHp = 3242;
    int unitsPerRound = 324;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 153;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    int myUnits = 3000;
    int barHp = 4000;
    int unitsPerRound = 2000;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    int myUnits = 1600;
    int barHp = 5000;
    int unitsPerRound = 1599;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2417;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    int myUnits = 50;
    int barHp = 5000;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    int myUnits = 499;
    int barHp = 1233;
    int unitsPerRound = 128;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    int myUnits = 6;
    int barHp = 16;
    int unitsPerRound = 5;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    int myUnits = 3911;
    int barHp = 4357;
    int unitsPerRound = 2281;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    int myUnits = 500;
    int barHp = 5000;
    int unitsPerRound = 333;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    int myUnits = 900;
    int barHp = 5000;
    int unitsPerRound = 300;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    int myUnits = 100;
    int barHp = 5000;
    int unitsPerRound = 99;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 4843;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    int myUnits = 1000;
    int barHp = 5000;
    int unitsPerRound = 990;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 343;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    int myUnits = 2000;
    int barHp = 4000;
    int unitsPerRound = 1999;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 770;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    int myUnits = 2;
    int barHp = 5000;
    int unitsPerRound = 2;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    int myUnits = 101;
    int barHp = 200;
    int unitsPerRound = 100;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    int myUnits = 8;
    int barHp = 12;
    int unitsPerRound = 7;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    int myUnits = 2000;
    int barHp = 5000;
    int unitsPerRound = 1999;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1770;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    int myUnits = 5000;
    int barHp = 5000;
    int unitsPerRound = 100;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    int myUnits = 10;
    int barHp = 22;
    int unitsPerRound = 9;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    int myUnits = 100;
    int barHp = 199;
    int unitsPerRound = 99;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    int myUnits = 100;
    int barHp = 5000;
    int unitsPerRound = 1;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    int myUnits = 2400;
    int barHp = 4801;
    int unitsPerRound = 2399;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 924;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    int myUnits = 8;
    int barHp = 100;
    int unitsPerRound = 7;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    int myUnits = 3000;
    int barHp = 5000;
    int unitsPerRound = 100;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    int myUnits = 24;
    int barHp = 34;
    int unitsPerRound = 23;
    Barracks* pObj = new Barracks();
    clock_t start = clock();
    int result = pObj->attack(myUnits, barHp, unitsPerRound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11919691&rd=13509&pm=8211
********************************************************************************
#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
 
#line 20
#define FORE(i, a, b)   for(int i = int(a); i <= int(b); ++i)
#define REPE(i, n)      FORE(i, 0, n)
 
#line 174
struct Barracks {
    int attack(int myUnits, int barHp, int unitsPerRound);
};
 
#line 317
const int inf = 999999999;
int U, B, R;
 
int calc(int T)
{
    int b = B, mu = U, ou = 0, rounds = 0;
 
#line 326
    while (b >= T)
    {
        if (ou >= mu) return inf;
        b -= mu - ou;
        ou = 0;
        if (b > 0) ou += R;
        ++rounds;
    }
 
 
    while (b > 0)
    {
        if (mu <= 0) return inf;
        if (b >= mu)
        {
            b -= mu;
        }
        else
        {
            ou -= mu - b;
            b = 0;
        }
        mu -= ou;
        if (b > 0) ou += R;
        ++rounds;
    }
 
 
    while (ou > 0)
    {
        if (mu <= 0) return inf;
        ou -= mu;
        if (ou > 0) mu -= ou;
        ++rounds;
    }
 
    return rounds;
}
 
int Barracks::attack(int myUnits, int barHp, int unitsPerRound)
{
    U = myUnits;
    B = barHp;
    R = unitsPerRound;
 
    int res = inf;
    REPE(t, barHp) res = min(res, calc(t));
    return res == inf ? -1 : res;
}

********************************************************************************
*******************************************************************************/