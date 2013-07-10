/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4651
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

class SpreadsheetColumn {
public:
    string getLabel(int column);
};

string SpreadsheetColumn::getLabel(int column) {
    string ret;
    return ret;
}


int test0() {
    int column = 1;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int column = 2;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int column = 27;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AA";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int column = 111;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "DG";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int column = 702;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZ";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int column = 3;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int column = 4;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int column = 5;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int column = 6;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "F";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int column = 7;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "G";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int column = 8;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int column = 9;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "I";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int column = 10;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "J";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int column = 11;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "K";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int column = 12;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int column = 13;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int column = 14;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "N";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int column = 15;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "O";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int column = 16;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "P";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int column = 17;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "Q";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int column = 18;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int column = 19;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "S";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int column = 20;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "T";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int column = 21;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "U";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int column = 22;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "V";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int column = 23;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "W";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int column = 24;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "X";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int column = 25;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "Y";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int column = 26;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int column = 27;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AA";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int column = 28;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int column = 29;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AC";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int column = 30;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AD";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int column = 31;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AE";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int column = 41;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AO";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int column = 42;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AP";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int column = 43;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AQ";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int column = 44;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AR";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int column = 47;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AU";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int column = 48;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AV";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int column = 49;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AW";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int column = 50;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AX";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int column = 51;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AY";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int column = 52;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AZ";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int column = 53;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int column = 54;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "BB";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int column = 55;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "BC";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int column = 56;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "BD";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int column = 63;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "BK";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int column = 73;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "BU";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int column = 83;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "CE";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int column = 93;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "CO";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int column = 103;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "CY";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int column = 203;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "GU";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int column = 303;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "KQ";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int column = 403;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "OM";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int column = 503;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "SI";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int column = 697;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "ZU";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int column = 698;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "ZV";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int column = 699;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "ZW";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int column = 700;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "ZX";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int column = 701;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "ZY";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int column = 53;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int column = 702;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZ";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int column = 26;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int column = 111;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "DG";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int column = 3;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int column = 676;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "YZ";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int column = 52;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AZ";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int column = 78;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "BZ";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int column = 24;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "X";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int column = 25;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "Y";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int column = 2;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int column = 700;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "ZX";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int column = 5;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int column = 12;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int column = 53;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int column = 702;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZ";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int column = 26;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int column = 111;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "DG";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int column = 3;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int column = 676;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "YZ";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int column = 52;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "AZ";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int column = 78;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "BZ";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int column = 24;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "X";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int column = 25;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "Y";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int column = 2;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int column = 700;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "ZX";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int column = 5;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int column = 12;
    SpreadsheetColumn* pObj = new SpreadsheetColumn();
    clock_t start = clock();
    string result = pObj->getLabel(column);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=15715432&rd=7995&pm=4651
********************************************************************************
#include<vector>
#include<string>
#include<iostream>
using namespace std;
class SpreadsheetColumn
{
 public:
        string getLabel(int column)
        {
         char b[3];
         if(column<=26)
          {
           b[0] = (char)(column+64);
           b[1] = '\0';
          }
         else
           {
            int m,n;
            m = column % 26;
            if(m==0)
             m=26;
            column-= m;
            n = column/26;
            b[0] =(char)(n+64);
            b[1] =(char)(m+64);
            b[2] ='\0';
           }
          return (string)b;
         }
};

********************************************************************************
*******************************************************************************/