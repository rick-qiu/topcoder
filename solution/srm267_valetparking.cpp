/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4679
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

class ValetParking {
public:
    int minMoves(int emptyRow, int emptyCol, int cusRow, int cusCol);
};

int ValetParking::minMoves(int emptyRow, int emptyCol, int cusRow, int cusCol) {
    int ret;
    return ret;
}


int test0() {
    int emptyRow = 50;
    int emptyCol = 22;
    int cusRow = 0;
    int cusCol = 0;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int emptyRow = 0;
    int emptyCol = 0;
    int cusRow = 1;
    int cusCol = 0;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
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
    int emptyRow = 0;
    int emptyCol = 0;
    int cusRow = 1;
    int cusCol = 1;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int emptyRow = 0;
    int emptyCol = 9;
    int cusRow = 13;
    int cusCol = 0;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int emptyRow = 99;
    int emptyCol = 98;
    int cusRow = 99;
    int cusCol = 96;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 590;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int emptyRow = 0;
    int emptyCol = 2;
    int cusRow = 0;
    int cusCol = 1;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int emptyRow = 50;
    int emptyCol = 0;
    int cusRow = 40;
    int cusCol = 0;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int emptyRow = 11;
    int emptyCol = 0;
    int cusRow = 99;
    int cusCol = 0;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 578;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int emptyRow = 0;
    int emptyCol = 0;
    int cusRow = 99;
    int cusCol = 99;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 789;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int emptyRow = 99;
    int emptyCol = 99;
    int cusRow = 3;
    int cusCol = 3;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int emptyRow = 5;
    int emptyCol = 2;
    int cusRow = 6;
    int cusCol = 6;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int emptyRow = 66;
    int emptyCol = 66;
    int cusRow = 70;
    int cusCol = 1;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 415;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int emptyRow = 40;
    int emptyCol = 7;
    int cusRow = 80;
    int cusCol = 15;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 458;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int emptyRow = 80;
    int emptyCol = 15;
    int cusRow = 40;
    int cusCol = 7;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int emptyRow = 0;
    int emptyCol = 50;
    int cusRow = 0;
    int cusCol = 40;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int emptyRow = 0;
    int emptyCol = 11;
    int cusRow = 0;
    int cusCol = 99;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 578;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int emptyRow = 2;
    int emptyCol = 5;
    int cusRow = 6;
    int cusCol = 6;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int emptyRow = 66;
    int emptyCol = 66;
    int cusRow = 1;
    int cusCol = 70;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 415;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int emptyRow = 7;
    int emptyCol = 40;
    int cusRow = 15;
    int cusCol = 80;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 458;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int emptyRow = 15;
    int emptyCol = 80;
    int cusRow = 7;
    int cusCol = 40;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int emptyRow = 0;
    int emptyCol = 99;
    int cusRow = 98;
    int cusCol = 0;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 682;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int emptyRow = 5;
    int emptyCol = 62;
    int cusRow = 27;
    int cusCol = 87;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 504;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int emptyRow = 28;
    int emptyCol = 32;
    int cusRow = 39;
    int cusCol = 44;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 277;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int emptyRow = 76;
    int emptyCol = 29;
    int cusRow = 6;
    int cusCol = 85;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 552;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int emptyRow = 49;
    int emptyCol = 42;
    int cusRow = 58;
    int cusCol = 74;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 464;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int emptyRow = 51;
    int emptyCol = 34;
    int cusRow = 41;
    int cusCol = 91;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 558;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int emptyRow = 13;
    int emptyCol = 63;
    int cusRow = 63;
    int cusCol = 22;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 423;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int emptyRow = 65;
    int emptyCol = 84;
    int cusRow = 57;
    int cusCol = 82;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 474;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int emptyRow = 12;
    int emptyCol = 95;
    int cusRow = 67;
    int cusCol = 57;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 480;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int emptyRow = 39;
    int emptyCol = 53;
    int cusRow = 27;
    int cusCol = 73;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 419;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int emptyRow = 98;
    int emptyCol = 66;
    int cusRow = 43;
    int cusCol = 22;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 333;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int emptyRow = 68;
    int emptyCol = 49;
    int cusRow = 85;
    int cusCol = 11;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 486;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int emptyRow = 55;
    int emptyCol = 51;
    int cusRow = 36;
    int cusCol = 52;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 311;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int emptyRow = 74;
    int emptyCol = 75;
    int cusRow = 82;
    int cusCol = 70;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 488;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int emptyRow = 80;
    int emptyCol = 2;
    int cusRow = 97;
    int cusCol = 9;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 513;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int emptyRow = 79;
    int emptyCol = 15;
    int cusRow = 22;
    int cusCol = 42;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 311;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int emptyRow = 9;
    int emptyCol = 6;
    int cusRow = 6;
    int cusCol = 6;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int emptyRow = 9;
    int emptyCol = 5;
    int cusRow = 6;
    int cusCol = 6;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int emptyRow = 5;
    int emptyCol = 9;
    int cusRow = 6;
    int cusCol = 6;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int emptyRow = 99;
    int emptyCol = 99;
    int cusRow = 99;
    int cusCol = 98;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 591;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int emptyRow = 99;
    int emptyCol = 99;
    int cusRow = 98;
    int cusCol = 99;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 591;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int emptyRow = 99;
    int emptyCol = 99;
    int cusRow = 98;
    int cusCol = 98;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 589;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int emptyRow = 99;
    int emptyCol = 99;
    int cusRow = 96;
    int cusCol = 90;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 579;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int emptyRow = 99;
    int emptyCol = 99;
    int cusRow = 99;
    int cusCol = 0;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 591;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int emptyRow = 98;
    int emptyCol = 98;
    int cusRow = 99;
    int cusCol = 99;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 593;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int emptyRow = 98;
    int emptyCol = 99;
    int cusRow = 99;
    int cusCol = 99;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 592;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int emptyRow = 0;
    int emptyCol = 0;
    int cusRow = 99;
    int cusCol = 99;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 789;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int emptyRow = 80;
    int emptyCol = 15;
    int cusRow = 40;
    int cusCol = 7;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int emptyRow = 99;
    int emptyCol = 96;
    int cusRow = 98;
    int cusCol = 96;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 586;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int emptyRow = 2;
    int emptyCol = 0;
    int cusRow = 1;
    int cusCol = 0;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int emptyRow = 10;
    int emptyCol = 0;
    int cusRow = 5;
    int cusCol = 0;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int emptyRow = 50;
    int emptyCol = 50;
    int cusRow = 99;
    int cusCol = 50;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 589;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int emptyRow = 5;
    int emptyCol = 0;
    int cusRow = 3;
    int cusCol = 0;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int emptyRow = 0;
    int emptyCol = 2;
    int cusRow = 0;
    int cusCol = 1;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
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
    int emptyRow = 10;
    int emptyCol = 0;
    int cusRow = 9;
    int cusCol = 0;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int emptyRow = 87;
    int emptyCol = 33;
    int cusRow = 66;
    int cusCol = 92;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 601;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int emptyRow = 20;
    int emptyCol = 99;
    int cusRow = 87;
    int cusCol = 99;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 646;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int emptyRow = 0;
    int emptyCol = 30;
    int cusRow = 0;
    int cusCol = 99;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 559;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int emptyRow = 50;
    int emptyCol = 99;
    int cusRow = 20;
    int cusCol = 99;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 542;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int emptyRow = 0;
    int emptyCol = 0;
    int cusRow = 0;
    int cusCol = 99;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 589;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int emptyRow = 2;
    int emptyCol = 0;
    int cusRow = 2;
    int cusCol = 1;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int emptyRow = 40;
    int emptyCol = 7;
    int cusRow = 70;
    int cusCol = 80;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 568;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int emptyRow = 15;
    int emptyCol = 80;
    int cusRow = 7;
    int cusCol = 40;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int emptyRow = 4;
    int emptyCol = 0;
    int cusRow = 3;
    int cusCol = 0;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int emptyRow = 99;
    int emptyCol = 99;
    int cusRow = 1;
    int cusCol = 1;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int emptyRow = 1;
    int emptyCol = 90;
    int cusRow = 1;
    int cusCol = 2;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int emptyRow = 7;
    int emptyCol = 40;
    int cusRow = 15;
    int cusCol = 80;
    ValetParking* pObj = new ValetParking();
    clock_t start = clock();
    int result = pObj->minMoves(emptyRow, emptyCol, cusRow, cusCol);
    clock_t end = clock();
    delete pObj;
    int expected = 458;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=307060&rd=8000&pm=4679
********************************************************************************
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
 
class ValetParking {
public:
  int minMoves(int, int, int, int);
};
 
int ValetParking::minMoves(int emptyRow, int emptyCol, int cusRow, int cusCol) {
  int sx = emptyRow, sy = emptyCol;
  int x = cusRow, y = cusCol;
  int cnt = 0;
  while(x || y) {
    int t1= 1000000, t2 = 1000000;
    if (x) {
      t1 = abs((x-1)-sx)+abs(y-sy);
      if (sx>x && sy  == y)
        t1 += 2;
    }
    if (y) {
      t2 = abs((y-1)-sy)+abs(x-sx);
      if (sy>y && sx == x)
        t2 += 2;
    }
    sx = x;
    sy = y;
    if (t1 < t2 || t1 == t2 && x > y) {
      cnt += t1;
      x--;
    }
    else {
      cnt += t2;
      y--;
    }
    cnt++;
  }
  return cnt;
}

********************************************************************************
*******************************************************************************/