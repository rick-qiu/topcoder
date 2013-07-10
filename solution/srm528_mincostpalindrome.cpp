/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11727
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

class MinCostPalindrome {
public:
    int getMinimum(string s, int oCost, int xCost);
};

int MinCostPalindrome::getMinimum(string s, int oCost, int xCost) {
    int ret;
    return ret;
}


int test0() {
    string s = "oxo?xox?";
    int oCost = 3;
    int xCost = 5;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string s = "x??x";
    int oCost = 9;
    int xCost = 4;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string s = "ooooxxxx";
    int oCost = 12;
    int xCost = 34;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "oxoxooxxxxooxoxo";
    int oCost = 7;
    int xCost = 4;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string s = "?o";
    int oCost = 6;
    int xCost = 2;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string s = "????????????????????";
    int oCost = 50;
    int xCost = 49;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 980;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string s = "o??oxxo?xoox?ox??x??";
    int oCost = 3;
    int xCost = 10;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string s = "??";
    int oCost = 1;
    int xCost = 50;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string s = "o?";
    int oCost = 1;
    int xCost = 50;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "?o";
    int oCost = 1;
    int xCost = 50;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string s = "x?";
    int oCost = 1;
    int xCost = 50;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string s = "?x";
    int oCost = 1;
    int xCost = 50;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string s = "xx";
    int oCost = 1;
    int xCost = 50;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string s = "oo";
    int oCost = 1;
    int xCost = 50;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string s = "xo";
    int oCost = 1;
    int xCost = 50;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string s = "ox";
    int oCost = 1;
    int xCost = 50;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "??";
    int oCost = 50;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string s = "o?";
    int oCost = 50;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string s = "?o";
    int oCost = 50;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string s = "x?";
    int oCost = 50;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "?x";
    int oCost = 50;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "xx";
    int oCost = 50;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string s = "oo";
    int oCost = 50;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string s = "xo";
    int oCost = 50;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string s = "ox";
    int oCost = 50;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "????????????????????";
    int oCost = 50;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string s = "??????????????????";
    int oCost = 1;
    int xCost = 50;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string s = "??";
    int oCost = 6;
    int xCost = 6;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "?oo?";
    int oCost = 36;
    int xCost = 40;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string s = "???xo??x";
    int oCost = 21;
    int xCost = 4;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string s = "??o?x??o????";
    int oCost = 3;
    int xCost = 36;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "x???????????o???";
    int oCost = 6;
    int xCost = 33;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string s = "???????????????????o";
    int oCost = 3;
    int xCost = 12;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string s = "??????????o?";
    int oCost = 34;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string s = "?o??o??????o??";
    int oCost = 23;
    int xCost = 18;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 213;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string s = "???oo??????o???o";
    int oCost = 15;
    int xCost = 26;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string s = "x????xxx????";
    int oCost = 48;
    int xCost = 34;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 272;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string s = "??x??x??????x?";
    int oCost = 16;
    int xCost = 42;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 254;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string s = "?xxx?x??x???????";
    int oCost = 50;
    int xCost = 6;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string s = "??x?????????x??????x";
    int oCost = 13;
    int xCost = 15;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 227;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string s = "?????????????x?????o";
    int oCost = 8;
    int xCost = 48;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 184;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string s = "?????????x??????????";
    int oCost = 10;
    int xCost = 32;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 212;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string s = "?o?ox??xx?o?xxxxo???";
    int oCost = 13;
    int xCost = 43;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 207;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string s = "oo?o??xoo?xxxxooxxxo";
    int oCost = 25;
    int xCost = 11;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "???xx?ox???x?x?ooxox";
    int oCost = 6;
    int xCost = 2;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "oxoooooxoxoooxoxoxox";
    int oCost = 19;
    int xCost = 33;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "xoxxxooxoxooxxxxxoxx";
    int oCost = 1;
    int xCost = 9;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "oxxoxxoooxxoxoxoxxxo";
    int oCost = 49;
    int xCost = 7;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "????oo??????";
    int oCost = 27;
    int xCost = 43;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string s = "ox???????????xxo";
    int oCost = 14;
    int xCost = 31;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string s = "x??ooo?oo?oo??ooo?xx";
    int oCost = 42;
    int xCost = 49;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 301;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string s = "?xxx????oxo?";
    int oCost = 31;
    int xCost = 49;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "???x???xo???x???";
    int oCost = 44;
    int xCost = 16;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "??x????ox??o?????xo?";
    int oCost = 23;
    int xCost = 20;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "?????o?xxxxx";
    int oCost = 23;
    int xCost = 44;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 243;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string s = "x???x???xxo?xox?";
    int oCost = 4;
    int xCost = 37;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 230;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string s = "o??x?o?oox???x?x?xo?";
    int oCost = 11;
    int xCost = 7;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string s = "xxooxxxxooxx";
    int oCost = 13;
    int xCost = 2;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string s = "oooxxxooooxxxooo";
    int oCost = 48;
    int xCost = 24;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string s = "ooxxxxxooooooxxxxxoo";
    int oCost = 34;
    int xCost = 18;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string s = "xxoxoxooxooooooooooo";
    int oCost = 25;
    int xCost = 5;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "?????????xo??????o??";
    int oCost = 47;
    int xCost = 46;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string s = "ox?x??o??xo?????????";
    int oCost = 12;
    int xCost = 10;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "o???xo?oo??x???o????";
    int oCost = 35;
    int xCost = 41;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string s = "????????????????????";
    int oCost = 50;
    int xCost = 50;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string s = "ox";
    int oCost = 1;
    int xCost = 2;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "xox?";
    int oCost = 3;
    int xCost = 3;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "oo";
    int oCost = 1;
    int xCost = 2;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string s = "xo";
    int oCost = 1;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string s = "o??xxx";
    int oCost = 5;
    int xCost = 5;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "x?xxox";
    int oCost = 5;
    int xCost = 4;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string s = "??";
    int oCost = 49;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string s = "xox?";
    int oCost = 1;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "ooooox";
    int oCost = 1;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "x?xx";
    int oCost = 20;
    int xCost = 30;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string s = "????????";
    int oCost = 2;
    int xCost = 20;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string s = "oxxo";
    int oCost = 2;
    int xCost = 3;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string s = "oo";
    int oCost = 10;
    int xCost = 20;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string s = "??xo??";
    int oCost = 11;
    int xCost = 10;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "????????";
    int oCost = 1;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string s = "oxox";
    int oCost = 2;
    int xCost = 3;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "x??o";
    int oCost = 2;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "ox";
    int oCost = 1;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "ooxx";
    int oCost = 1;
    int xCost = 2;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "??";
    int oCost = 5;
    int xCost = 4;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string s = "?xo?";
    int oCost = 10;
    int xCost = 10;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "?oxx";
    int oCost = 1;
    int xCost = 2;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "oo";
    int oCost = 1;
    int xCost = 1;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string s = "?oxo";
    int oCost = 3;
    int xCost = 3;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "xoxx";
    int oCost = 3;
    int xCost = 3;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "xooo";
    int oCost = 5;
    int xCost = 7;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "xxxxooo?";
    int oCost = 1;
    int xCost = 2;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "oxooo?";
    int oCost = 2;
    int xCost = 3;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
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
    string s = "????????";
    int oCost = 10;
    int xCost = 5;
    MinCostPalindrome* pObj = new MinCostPalindrome();
    clock_t start = clock();
    int result = pObj->getMinimum(s, oCost, xCost);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22883893&rd=14553&pm=11727
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
#include <sstream> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
#include <cstring> 
using namespace std; 
class MinCostPalindrome { 
 public: 
 int getMinimum(string s, int o, int x) 
{ 
    int ret=0; 
    bool fl=0; 
    for(int i=0,j=s.size()-1;i<j;i++,j--) 
    { 
        if(s[i]=='x'&&s[j]=='?') ret+=x; 
        else if(s[i]=='?'&&s[j]=='x') ret+=x; 
        else if(s[i]=='o'&&s[j]=='?') ret+=o; 
        else if(s[i]=='?'&&s[j]=='o') ret+=o; 
        else if(s[i]=='?'&&s[j]=='?') 
        { 
            int mn=min(x,o); 
            ret+=2*mn; 
        } 
        else if(s[i]==s[j]) ; 
        else {fl=1; break;} 
    } 
    if(fl) return -1; 
    return ret; 
 //$CARETPOSITION$ 
 } 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/