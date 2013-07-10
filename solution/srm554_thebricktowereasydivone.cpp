/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12159
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

class TheBrickTowerEasyDivOne {
public:
    int find(int redCount, int redHeight, int blueCount, int blueHeight);
};

int TheBrickTowerEasyDivOne::find(int redCount, int redHeight, int blueCount, int blueHeight) {
    int ret;
    return ret;
}


int test0() {
    int redCount = 1;
    int redHeight = 2;
    int blueCount = 3;
    int blueHeight = 4;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    int redCount = 474747474;
    int redHeight = 474747474;
    int blueCount = 474747474;
    int blueHeight = 292633855;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 1424242422;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int redCount = 474747474;
    int redHeight = 474747474;
    int blueCount = 474747474;
    int blueHeight = 474747474;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 949494948;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int redCount = 474747474;
    int redHeight = 474747468;
    int blueCount = 474746558;
    int blueHeight = 474747468;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 949493117;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int redCount = 474627584;
    int redHeight = 474747437;
    int blueCount = 474321382;
    int blueHeight = 504;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 1422964147;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int redCount = 474747473;
    int redHeight = 474273670;
    int blueCount = 466712388;
    int blueHeight = 474273670;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 933424777;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int redCount = 5381;
    int redHeight = 474393051;
    int blueCount = 5382;
    int blueHeight = 474393051;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 10763;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int redCount = 33222208;
    int redHeight = 55274;
    int blueCount = 33222209;
    int blueHeight = 41280768;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 99666625;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int redCount = 47075863;
    int redHeight = 181543779;
    int blueCount = 47075864;
    int blueHeight = 993924;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 141227590;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int redCount = 470418661;
    int redHeight = 454;
    int blueCount = 399796762;
    int blueHeight = 454;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 799593525;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int redCount = 33241;
    int redHeight = 421687360;
    int blueCount = 74544080;
    int blueHeight = 473675028;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 99724;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int redCount = 474733002;
    int redHeight = 115658936;
    int blueCount = 474733001;
    int blueHeight = 115658936;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 949466003;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int redCount = 92287;
    int redHeight = 1;
    int blueCount = 92286;
    int blueHeight = 465155160;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 276859;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int redCount = 118256;
    int redHeight = 474747470;
    int blueCount = 118256;
    int blueHeight = 474747470;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 236512;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int redCount = 1;
    int redHeight = 474747472;
    int blueCount = 9943413;
    int blueHeight = 474747472;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    int redCount = 49344750;
    int redHeight = 288525;
    int blueCount = 49344749;
    int blueHeight = 62807079;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 148034248;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int redCount = 474631371;
    int redHeight = 1160014;
    int blueCount = 474631372;
    int blueHeight = 263540944;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 1423894114;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int redCount = 415038707;
    int redHeight = 1329630;
    int blueCount = 415038708;
    int blueHeight = 1329630;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 830077415;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int redCount = 920505;
    int redHeight = 1;
    int blueCount = 920504;
    int blueHeight = 1;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 1841009;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int redCount = 218113;
    int redHeight = 474076373;
    int blueCount = 195671916;
    int blueHeight = 474076373;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 436227;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int redCount = 474743982;
    int redHeight = 474721201;
    int blueCount = 474744825;
    int blueHeight = 474721201;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 949487965;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int redCount = 474742218;
    int redHeight = 5;
    int blueCount = 474747474;
    int blueHeight = 5;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 949484437;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int redCount = 474746972;
    int redHeight = 474551967;
    int blueCount = 474746971;
    int blueHeight = 474551967;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 949493943;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int redCount = 474747362;
    int redHeight = 5;
    int blueCount = 474747361;
    int blueHeight = 108358890;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 1424242084;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int redCount = 396305893;
    int redHeight = 1;
    int blueCount = 4263546;
    int blueHeight = 1;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 8527093;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int redCount = 402;
    int redHeight = 474746117;
    int blueCount = 402;
    int blueHeight = 474746117;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 804;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int redCount = 1268;
    int redHeight = 282291;
    int blueCount = 470776704;
    int blueHeight = 1;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3805;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int redCount = 458978111;
    int redHeight = 474747339;
    int blueCount = 458978112;
    int blueHeight = 61;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 1376934334;
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
    int redHeight = 3;
    int blueCount = 2;
    int blueHeight = 3;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
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
    int redCount = 1;
    int redHeight = 1;
    int blueCount = 1000;
    int blueHeight = 1;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int redCount = 444444444;
    int redHeight = 444444444;
    int blueCount = 444444444;
    int blueHeight = 444444444;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 888888888;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int redCount = 2;
    int redHeight = 1;
    int blueCount = 4;
    int blueHeight = 1;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int redCount = 5;
    int redHeight = 1;
    int blueCount = 6;
    int blueHeight = 1;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int redCount = 474747474;
    int redHeight = 474747474;
    int blueCount = 474747474;
    int blueHeight = 474747473;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 1424242422;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int redCount = 1;
    int redHeight = 4;
    int blueCount = 3;
    int blueHeight = 4;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int redCount = 1;
    int redHeight = 1;
    int blueCount = 100;
    int blueHeight = 1;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int redCount = 1000;
    int redHeight = 10;
    int blueCount = 10;
    int blueHeight = 10;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int redCount = 47;
    int redHeight = 47;
    int blueCount = 48;
    int blueHeight = 47;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int redCount = 5;
    int redHeight = 3;
    int blueCount = 8;
    int blueHeight = 3;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
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
    int redCount = 1;
    int redHeight = 5;
    int blueCount = 4;
    int blueHeight = 5;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int redCount = 1;
    int redHeight = 2;
    int blueCount = 3;
    int blueHeight = 2;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
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
    int redCount = 4;
    int redHeight = 10;
    int blueCount = 10;
    int blueHeight = 10;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int redCount = 474747474;
    int redHeight = 30;
    int blueCount = 474747474;
    int blueHeight = 50;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 1424242422;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int redCount = 9;
    int redHeight = 9;
    int blueCount = 1;
    int blueHeight = 9;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int redCount = 4;
    int redHeight = 4;
    int blueCount = 7;
    int blueHeight = 4;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int redCount = 5;
    int redHeight = 2;
    int blueCount = 1;
    int blueHeight = 2;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int redCount = 10;
    int redHeight = 1;
    int blueCount = 5;
    int blueHeight = 1;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int redCount = 17;
    int redHeight = 11;
    int blueCount = 13;
    int blueHeight = 11;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int redCount = 9;
    int redHeight = 5;
    int blueCount = 5;
    int blueHeight = 5;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int redCount = 10;
    int redHeight = 5;
    int blueCount = 8;
    int blueHeight = 5;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int redCount = 100;
    int redHeight = 1;
    int blueCount = 1;
    int blueHeight = 1;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int redCount = 84;
    int redHeight = 47;
    int blueCount = 92;
    int blueHeight = 47;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int redCount = 4;
    int redHeight = 5;
    int blueCount = 4;
    int blueHeight = 5;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int redCount = 1000;
    int redHeight = 6;
    int blueCount = 10;
    int blueHeight = 4;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int redCount = 10000;
    int redHeight = 10000;
    int blueCount = 10000;
    int blueHeight = 10000;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int redCount = 474747470;
    int redHeight = 474747439;
    int blueCount = 474747420;
    int blueHeight = 474747433;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 1424242261;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int redCount = 100;
    int redHeight = 10;
    int blueCount = 1;
    int blueHeight = 10;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int redCount = 9;
    int redHeight = 11;
    int blueCount = 13;
    int blueHeight = 11;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int redCount = 5;
    int redHeight = 1;
    int blueCount = 3;
    int blueHeight = 1;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int redCount = 1;
    int redHeight = 1;
    int blueCount = 5;
    int blueHeight = 1;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int redCount = 1;
    int redHeight = 1;
    int blueCount = 10;
    int blueHeight = 1;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int redCount = 474747474;
    int redHeight = 474747474;
    int blueCount = 474747472;
    int blueHeight = 474747474;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 949494945;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int redCount = 100;
    int redHeight = 100;
    int blueCount = 1;
    int blueHeight = 2;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
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
    int redCount = 1;
    int redHeight = 3;
    int blueCount = 10;
    int blueHeight = 3;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int redCount = 1;
    int redHeight = 100;
    int blueCount = 1000;
    int blueHeight = 100;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
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
    int redCount = 10;
    int redHeight = 5;
    int blueCount = 9;
    int blueHeight = 9;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int redCount = 3;
    int redHeight = 4;
    int blueCount = 4;
    int blueHeight = 4;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int redCount = 1;
    int redHeight = 1;
    int blueCount = 999;
    int blueHeight = 1;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
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
    int redCount = 3;
    int redHeight = 3;
    int blueCount = 10;
    int blueHeight = 3;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int redCount = 10000;
    int redHeight = 1;
    int blueCount = 2;
    int blueHeight = 1;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int redCount = 20;
    int redHeight = 7;
    int blueCount = 17;
    int blueHeight = 7;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int redCount = 474747474;
    int redHeight = 1;
    int blueCount = 474747474;
    int blueHeight = 2;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 1424242422;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int redCount = 470000000;
    int redHeight = 470000000;
    int blueCount = 470000000;
    int blueHeight = 470000000;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 940000000;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int redCount = 474747474;
    int redHeight = 474747474;
    int blueCount = 474747473;
    int blueHeight = 474747474;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 949494947;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int redCount = 4;
    int redHeight = 2;
    int blueCount = 3;
    int blueHeight = 2;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int redCount = 474747412;
    int redHeight = 414747412;
    int blueCount = 474741412;
    int blueHeight = 470747412;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 1424224237;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int redCount = 474747474;
    int redHeight = 474747473;
    int blueCount = 474747472;
    int blueHeight = 474747471;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 1424242417;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int redCount = 4;
    int redHeight = 4;
    int blueCount = 5;
    int blueHeight = 4;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int redCount = 5;
    int redHeight = 474747474;
    int blueCount = 2;
    int blueHeight = 474747474;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int redCount = 2;
    int redHeight = 2;
    int blueCount = 1;
    int blueHeight = 2;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int redCount = 5;
    int redHeight = 1;
    int blueCount = 1;
    int blueHeight = 1;
    TheBrickTowerEasyDivOne* pObj = new TheBrickTowerEasyDivOne();
    clock_t start = clock();
    int result = pObj->find(redCount, redHeight, blueCount, blueHeight);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22873146&rd=15176&pm=12159
********************************************************************************
#ifndef debuging 
#define FIN  ; 
#define FOUT ; 
#define OUT(x)  ; 
#define ERR(x)  ; 
#endif 
#include <cstdio> 
#include <iostream> 
#include <cstring> 
#include <algorithm> 
#include <cmath> 
#include <vector> 
using namespace std ; 
#define For(i , n) for(int i = 0 ; i < (n) ; ++i) 
#define SZ(x)  (int)((x).size()) 
typedef long long lint ; 
const int maxint = -1u>>2 ; 
const double eps = 1e-6 ; 
  
 
class TheBrickTowerEasyDivOne 
{ 
public: 
int find(int r1,int r2,int b1,int b2){ 
    int ans=min(r1,b1)*2; 
    if (r2!=b2) ans+=min(r1,b1); 
    if (r1!=b1) ans++; 
    return ans; 
} 
  
  
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/