/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6715
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

class BusSeating {
public:
    double getArrangement(string leftRow, string rightRow);
};

double BusSeating::getArrangement(string leftRow, string rightRow) {
    double ret;
    return ret;
}


int test0() {
    string leftRow = "----------";
    string rightRow = "----------";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string leftRow = "XXX-X-XX-X";
    string rightRow = "-XXXX---XX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string leftRow = "----------";
    string rightRow = "-XXXX---XX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string leftRow = "-X-X-X-X-X";
    string rightRow = "X-X-X-X-X-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.47213595499958;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string leftRow = "XXXXXXXXXX";
    string rightRow = "-XX-XX-X--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string leftRow = "XXX-X-XX-X";
    string rightRow = "XXX-X-XX-X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.82842712474619;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string leftRow = "X--X------";
    string rightRow = "X-XXX---XX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string leftRow = "XXXXXXXXX-";
    string rightRow = "--XXXXXXXX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 18.465755708528206;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string leftRow = "-X---X---X";
    string rightRow = "X--XXX---X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string leftRow = "XX--------";
    string rightRow = "XX-XX-XXXX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string leftRow = "X-XX-X--X-";
    string rightRow = "X-XX--XX--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string leftRow = "XXXXX---XX";
    string rightRow = "X-X-XXX-X-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string leftRow = "-X---X----";
    string rightRow = "-XXXX-XX--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string leftRow = "-XXX--XX--";
    string rightRow = "-XX-X-XX-X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string leftRow = "X-X-X-X-XX";
    string rightRow = "-XXX-X-X--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string leftRow = "--XXX-X-XX";
    string rightRow = "--XXX-X---";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string leftRow = "XXX--XX-X-";
    string rightRow = "XX---XX---";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string leftRow = "X-XXX-X---";
    string rightRow = "-XXX-X-X-X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string leftRow = "XX--XXX-XX";
    string rightRow = "X-X-X--X--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string leftRow = "X-X-XXX-XX";
    string rightRow = "X-----X---";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string leftRow = "XX-XX-XXX-";
    string rightRow = "X--X---X-X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string leftRow = "XX-XXXX-XX";
    string rightRow = "X-XXXXXXX-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 13.56062329783655;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string leftRow = "---XX-XXXX";
    string rightRow = "X--X--XX--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string leftRow = "XX-X-X-XX-";
    string rightRow = "X--XXXX-X-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string leftRow = "X-XXXXX---";
    string rightRow = "--X-XXXX-X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string leftRow = "XXX---XX--";
    string rightRow = "XX---XX---";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string leftRow = "---XXX----";
    string rightRow = "XXX-XX-X--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string leftRow = "XXXXXXXX-X";
    string rightRow = "X--XXX-XX-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 8.06449510224598;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string leftRow = "XX--XXX--X";
    string rightRow = "-------X--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string leftRow = "XX-XXX-X-X";
    string rightRow = "-X--X-X---";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string leftRow = "X--X----X-";
    string rightRow = "--X-X-XX-X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string leftRow = "X--X-XXXXX";
    string rightRow = "X--X--X-XX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string leftRow = "-XXX-X-X--";
    string rightRow = "XX-XX-X-X-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string leftRow = "-XX--X--XX";
    string rightRow = "XXX--XX---";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string leftRow = "-XX-X---X-";
    string rightRow = "-XXXXX-XXX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string leftRow = "X---XXX-XX";
    string rightRow = "--X----X-X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string leftRow = "XXX--XXXXX";
    string rightRow = "X-XXX-XXXX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.06449510224598;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string leftRow = "-XXXXXX--X";
    string rightRow = "XX--X-XX--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string leftRow = "---XX---XX";
    string rightRow = "X---X--X--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string leftRow = "-X--XX-X-X";
    string rightRow = "X-X-----X-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string leftRow = "X--XXXXX-X";
    string rightRow = "XXXXX-X-XX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 7.841619252963779;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string leftRow = "XX--X-XX--";
    string rightRow = "XX-X-XX--X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string leftRow = "X-X-X-X--X";
    string rightRow = "-XX-X-XX--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string leftRow = "-XXXXX--XX";
    string rightRow = "XXX-X---X-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string leftRow = "XXX-X-XXXX";
    string rightRow = "XXXX-XXXXX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.47213595499958;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string leftRow = "-X-XXXXX--";
    string rightRow = "XXX-X-X-XX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.06449510224598;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string leftRow = "X-X--XX--X";
    string rightRow = "X--XXX-X--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string leftRow = "XXXXXXXXXX";
    string rightRow = "XXX-X-X-X-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string leftRow = "XX-X--X-X-";
    string rightRow = "X-X-X-XX-X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string leftRow = "-X-XXXX-XX";
    string rightRow = "-X-X--XXX-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string leftRow = "X--X--X-XX";
    string rightRow = "XX-X-X-X-X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string leftRow = "X---XX---X";
    string rightRow = "-XXX--X---";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string leftRow = "XXX--XX-XX";
    string rightRow = "XX--XXXX-X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string leftRow = "X-X-XX--X-";
    string rightRow = "--XX-XX-X-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string leftRow = "XXXXX-X--X";
    string rightRow = "XXXXXX--XX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string leftRow = "----X-X--X";
    string rightRow = "X---XXX-XX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string leftRow = "-XXXXXXXX-";
    string rightRow = "-XXXXXXXX-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 20.219544457292887;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string leftRow = "--X-X-XX--";
    string rightRow = "X--XX--X--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string leftRow = "-X--X-XXX-";
    string rightRow = "X-X--XXXX-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string leftRow = "-X-XXXX-XX";
    string rightRow = "XXXXXXXXX-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 14.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string leftRow = "XX-X--X--X";
    string rightRow = "-X-X-X-XXX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string leftRow = "-X--XX--X-";
    string rightRow = "-X--X-X--X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string leftRow = "-X--X-X-X-";
    string rightRow = "XXXX-X-X-X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string leftRow = "--XXX-X--X";
    string rightRow = "X-X-XX--X-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string leftRow = "-XXX-XXXXX";
    string rightRow = "--XXX-X---";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string leftRow = "-XXX-X--X-";
    string rightRow = "-XX-XXX--X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string leftRow = "-X-XX--X--";
    string rightRow = "X-XXXXXXXX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string leftRow = "X-X-XX-X--";
    string rightRow = "XX-XXXXXXX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string leftRow = "XX-X-X-X--";
    string rightRow = "XXX-XXXXXX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string leftRow = "XXX-XX-X--";
    string rightRow = "XX-X-XXXXX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string leftRow = "X-X-X-X-X-";
    string rightRow = "-X-X-X-X-X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.47213595499958;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string leftRow = "XXX-X-XX-X";
    string rightRow = "XXX-X-XX-X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.82842712474619;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string leftRow = "XXXXXXXXXX";
    string rightRow = "-XX-XX-X--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string leftRow = "----------";
    string rightRow = "----------";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string leftRow = "XXXXXXXXX-";
    string rightRow = "--XXXXXXXX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 18.465755708528206;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string leftRow = "---XXXXXXX";
    string rightRow = "XXXXXXXXXX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string leftRow = "------XXXX";
    string rightRow = "----------";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string leftRow = "-XXXXXXXX-";
    string rightRow = "-XXXXXXXXX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 20.219544457292887;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string leftRow = "XXXXXXXXXX";
    string rightRow = "---XXX---X";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string leftRow = "XXXXXXXXXX";
    string rightRow = "---XXXXXXX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string leftRow = "-XXXXXXXX-";
    string rightRow = "XXXXX-XXXX";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 18.857300762134084;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string leftRow = "XXXXX-XXXX";
    string rightRow = "-XXXXXXXX-";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 18.857300762134084;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string leftRow = "XXXXXXXXX-";
    string rightRow = "--XXXXXX--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string leftRow = "XXXXXXXXX-";
    string rightRow = "XXXXXXXX--";
    BusSeating* pObj = new BusSeating();
    clock_t start = clock();
    double result = pObj->getArrangement(leftRow, rightRow);
    clock_t end = clock();
    delete pObj;
    double expected = 5.23606797749979;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21239671&rd=9999&pm=6715
********************************************************************************
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <vector>
 
using namespace std;
 
#define REP(i, n) for (int i = 0; i < int(n); ++i)
typedef complex<double> V2;
typedef vector<V2> VV2;
 
struct BusSeating {
    // MAIN
    double getArrangement(string leftRow, string rightRow) {
        VV2 p;
        REP (i, 10) if (leftRow[i]  == '-') p.push_back(V2(i, 0));
        REP (i, 10) if (rightRow[i] == '-') p.push_back(V2(i, 2));
        const int N = p.size();
        double result = 1e9;
        REP (i, N) REP (j, i) REP (k, j)
            result = min(result, abs(p[i] - p[j]) + abs(p[j] - p[k]) + abs(p[k] - p[i]));
        return result;
    }
 
};
 
 
// Powered by FileEdit
// Powered by Wihhy
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/