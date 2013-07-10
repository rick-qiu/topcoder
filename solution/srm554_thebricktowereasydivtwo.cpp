/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12160
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

class TheBrickTowerEasyDivTwo {
public:
    int find(int redCount, int redHeight, int blueCount, int blueHeight);
};

int TheBrickTowerEasyDivTwo::find(int redCount, int redHeight, int blueCount, int blueHeight) {
    int ret;
    return ret;
}


int test0() {
    int redCount = 1;
    int redHeight = 2;
    int blueCount = 3;
    int blueHeight = 4;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
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
    int redCount = 4;
    int redHeight = 4;
    int blueCount = 4;
    int blueHeight = 7;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int redCount = 7;
    int redHeight = 7;
    int blueCount = 4;
    int blueHeight = 4;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int redCount = 47;
    int redHeight = 47;
    int blueCount = 47;
    int blueHeight = 47;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int redCount = 1;
    int redHeight = 1;
    int blueCount = 1;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int redCount = 1;
    int redHeight = 41;
    int blueCount = 1;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
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
    int redCount = 1;
    int redHeight = 4;
    int blueCount = 2;
    int blueHeight = 4;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
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
    int redCount = 1;
    int redHeight = 1;
    int blueCount = 2;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int redCount = 1;
    int redHeight = 3;
    int blueCount = 3;
    int blueHeight = 3;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int redCount = 1;
    int redHeight = 38;
    int blueCount = 3;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int redCount = 2;
    int redHeight = 34;
    int blueCount = 1;
    int blueHeight = 34;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int redCount = 2;
    int redHeight = 14;
    int blueCount = 1;
    int blueHeight = 4;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int redCount = 2;
    int redHeight = 4;
    int blueCount = 2;
    int blueHeight = 4;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int redCount = 2;
    int redHeight = 33;
    int blueCount = 2;
    int blueHeight = 46;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int redCount = 2;
    int redHeight = 26;
    int blueCount = 3;
    int blueHeight = 26;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int redCount = 2;
    int redHeight = 40;
    int blueCount = 3;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int redCount = 3;
    int redHeight = 8;
    int blueCount = 1;
    int blueHeight = 8;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int redCount = 3;
    int redHeight = 43;
    int blueCount = 1;
    int blueHeight = 46;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int redCount = 3;
    int redHeight = 47;
    int blueCount = 2;
    int blueHeight = 47;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int redCount = 3;
    int redHeight = 3;
    int blueCount = 2;
    int blueHeight = 41;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int redCount = 3;
    int redHeight = 35;
    int blueCount = 3;
    int blueHeight = 35;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int redCount = 3;
    int redHeight = 47;
    int blueCount = 3;
    int blueHeight = 11;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
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
    int redCount = 47;
    int redHeight = 24;
    int blueCount = 47;
    int blueHeight = 8;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 141;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int redCount = 1;
    int redHeight = 13;
    int blueCount = 1;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int redCount = 8;
    int redHeight = 46;
    int blueCount = 9;
    int blueHeight = 6;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int redCount = 47;
    int redHeight = 38;
    int blueCount = 47;
    int blueHeight = 38;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int redCount = 45;
    int redHeight = 10;
    int blueCount = 45;
    int blueHeight = 4;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int redCount = 34;
    int redHeight = 5;
    int blueCount = 33;
    int blueHeight = 5;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int redCount = 31;
    int redHeight = 45;
    int blueCount = 30;
    int blueHeight = 45;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int redCount = 34;
    int redHeight = 21;
    int blueCount = 33;
    int blueHeight = 47;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int redCount = 10;
    int redHeight = 47;
    int blueCount = 47;
    int blueHeight = 47;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int redCount = 2;
    int redHeight = 47;
    int blueCount = 2;
    int blueHeight = 47;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int redCount = 1;
    int redHeight = 1;
    int blueCount = 2;
    int blueHeight = 47;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int redCount = 1;
    int redHeight = 47;
    int blueCount = 46;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int redCount = 32;
    int redHeight = 4;
    int blueCount = 31;
    int blueHeight = 4;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int redCount = 47;
    int redHeight = 45;
    int blueCount = 40;
    int blueHeight = 3;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int redCount = 3;
    int redHeight = 46;
    int blueCount = 4;
    int blueHeight = 46;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
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
    int redCount = 18;
    int redHeight = 16;
    int blueCount = 47;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int redCount = 47;
    int redHeight = 46;
    int blueCount = 31;
    int blueHeight = 46;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int redCount = 22;
    int redHeight = 47;
    int blueCount = 21;
    int blueHeight = 47;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int redCount = 35;
    int redHeight = 46;
    int blueCount = 1;
    int blueHeight = 46;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int redCount = 2;
    int redHeight = 1;
    int blueCount = 3;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int redCount = 42;
    int redHeight = 47;
    int blueCount = 19;
    int blueHeight = 47;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int redCount = 14;
    int redHeight = 2;
    int blueCount = 2;
    int blueHeight = 2;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int redCount = 37;
    int redHeight = 1;
    int blueCount = 4;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int redCount = 39;
    int redHeight = 2;
    int blueCount = 2;
    int blueHeight = 2;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int redCount = 5;
    int redHeight = 10;
    int blueCount = 6;
    int blueHeight = 9;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int redCount = 20;
    int redHeight = 1;
    int blueCount = 20;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int redCount = 47;
    int redHeight = 47;
    int blueCount = 46;
    int blueHeight = 46;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int redCount = 46;
    int redHeight = 44;
    int blueCount = 26;
    int blueHeight = 47;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int redCount = 1;
    int redHeight = 2;
    int blueCount = 1;
    int blueHeight = 2;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int redCount = 1;
    int redHeight = 3;
    int blueCount = 2;
    int blueHeight = 4;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int redCount = 40;
    int redHeight = 2;
    int blueCount = 2;
    int blueHeight = 2;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int redCount = 4;
    int redHeight = 5;
    int blueCount = 2;
    int blueHeight = 5;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int redCount = 1;
    int redHeight = 4;
    int blueCount = 3;
    int blueHeight = 4;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int redCount = 3;
    int redHeight = 4;
    int blueCount = 4;
    int blueHeight = 4;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int redCount = 2;
    int redHeight = 2;
    int blueCount = 1;
    int blueHeight = 2;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int redCount = 7;
    int redHeight = 1;
    int blueCount = 2;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int redCount = 10;
    int redHeight = 10;
    int blueCount = 9;
    int blueHeight = 10;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int redCount = 2;
    int redHeight = 1;
    int blueCount = 6;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int redCount = 10;
    int redHeight = 10;
    int blueCount = 1;
    int blueHeight = 10;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int redCount = 1;
    int redHeight = 5;
    int blueCount = 10;
    int blueHeight = 5;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int redCount = 3;
    int redHeight = 5;
    int blueCount = 5;
    int blueHeight = 5;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int redCount = 1;
    int redHeight = 1;
    int blueCount = 10;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int redCount = 3;
    int redHeight = 1;
    int blueCount = 2;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int redCount = 1;
    int redHeight = 2;
    int blueCount = 2;
    int blueHeight = 2;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int redCount = 5;
    int redHeight = 4;
    int blueCount = 3;
    int blueHeight = 4;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int redCount = 1;
    int redHeight = 47;
    int blueCount = 47;
    int blueHeight = 47;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int redCount = 2;
    int redHeight = 3;
    int blueCount = 4;
    int blueHeight = 3;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int redCount = 42;
    int redHeight = 43;
    int blueCount = 47;
    int blueHeight = 43;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int redCount = 2;
    int redHeight = 3;
    int blueCount = 4;
    int blueHeight = 4;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int redCount = 47;
    int redHeight = 1;
    int blueCount = 1;
    int blueHeight = 1;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int redCount = 2;
    int redHeight = 5;
    int blueCount = 40;
    int blueHeight = 5;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
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
    int redCount = 2;
    int redHeight = 2;
    int blueCount = 3;
    int blueHeight = 2;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int redCount = 1;
    int redHeight = 1;
    int blueCount = 1;
    int blueHeight = 3;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int redCount = 3;
    int redHeight = 10;
    int blueCount = 4;
    int blueHeight = 10;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
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
    int redCount = 4;
    int redHeight = 47;
    int blueCount = 8;
    int blueHeight = 47;
    TheBrickTowerEasyDivTwo* pObj = new TheBrickTowerEasyDivTwo();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21684580&rd=15176&pm=12160
********************************************************************************
#include <algorithm>
#include <numeric>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cassert>
#include <cmath>
#include <complex>
#include <stack>
#include <limits>
#include "time.h"
using namespace std;
#define SZ(x) (int)x.size()
#define FOR(i,x,y) for(int i=(int)(x);i<=(int)(y);++i)
#define REP(i,n) FOR(i,0,n-1)
#define FORD(i,x,y) for(int i=(int)(x);i>=(int)(y);--i)
#define ALL(a) (a).begin(),(a).end()
#define FORE(i,t) for(i=t.begin();i!=t.end();++i)
typedef vector<int> VI;
typedef vector<string> VS;
#define prt if(1)printf
 
struct TheBrickTowerEasyDivTwo {
  int find(int rc, int rh, int bc, int bh) { REP(i,1)prt("%s","");
    set< int > h;
    FOR(r,0,rc) {
      FOR(b,0,bc) {
        if (r==0 && b==0)
          continue;
        if (abs(r-b) > 1)
          continue;
        int tot = rh*r + bh*b;
        h.insert(tot);
      }
    }    
    return SZ(h);
  }
};
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/