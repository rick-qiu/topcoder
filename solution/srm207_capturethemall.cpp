/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2915
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

class CaptureThemAll {
public:
    int fastKnight(string knight, string rook, string queen);
};

int CaptureThemAll::fastKnight(string knight, string rook, string queen) {
    int ret;
    return ret;
}


int test0() {
    string knight = "a1";
    string rook = "b3";
    string queen = "c5";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
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
    string knight = "b1";
    string rook = "c3";
    string queen = "a3";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string knight = "a1";
    string rook = "a2";
    string queen = "b2";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string knight = "a1";
    string rook = "h8";
    string queen = "b2";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string knight = "a1";
    string rook = "h8";
    string queen = "b1";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string knight = "a1";
    string rook = "a8";
    string queen = "h8";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string knight = "a5";
    string rook = "b7";
    string queen = "e4";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
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
    string knight = "c8";
    string rook = "g6";
    string queen = "b7";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string knight = "f5";
    string rook = "c1";
    string queen = "a3";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string knight = "b2";
    string rook = "h4";
    string queen = "a1";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string knight = "b6";
    string rook = "d3";
    string queen = "a5";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
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
    string knight = "g7";
    string rook = "e3";
    string queen = "h6";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
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
    string knight = "h8";
    string rook = "e2";
    string queen = "d2";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
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
    string knight = "g2";
    string rook = "g7";
    string queen = "h8";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
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
    string knight = "e4";
    string rook = "c3";
    string queen = "g1";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string knight = "d1";
    string rook = "f1";
    string queen = "a8";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string knight = "c3";
    string rook = "e6";
    string queen = "g6";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string knight = "d2";
    string rook = "f4";
    string queen = "d8";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string knight = "f1";
    string rook = "e4";
    string queen = "f5";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string knight = "e3";
    string rook = "b2";
    string queen = "d7";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string knight = "e8";
    string rook = "g3";
    string queen = "b6";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string knight = "d1";
    string rook = "f5";
    string queen = "b8";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string knight = "b8";
    string rook = "f3";
    string queen = "d1";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string knight = "h6";
    string rook = "b8";
    string queen = "g5";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string knight = "b2";
    string rook = "g4";
    string queen = "b5";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string knight = "f4";
    string rook = "c5";
    string queen = "f7";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string knight = "f4";
    string rook = "a3";
    string queen = "g1";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string knight = "e6";
    string rook = "d1";
    string queen = "h8";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
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
    string knight = "e3";
    string rook = "d3";
    string queen = "g3";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string knight = "d3";
    string rook = "h3";
    string queen = "f5";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string knight = "b7";
    string rook = "g4";
    string queen = "e8";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string knight = "a8";
    string rook = "e1";
    string queen = "e2";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string knight = "g6";
    string rook = "f2";
    string queen = "g1";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string knight = "a6";
    string rook = "c8";
    string queen = "c3";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string knight = "b6";
    string rook = "g6";
    string queen = "e6";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string knight = "c2";
    string rook = "a1";
    string queen = "g7";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string knight = "b1";
    string rook = "e1";
    string queen = "a4";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string knight = "g6";
    string rook = "e1";
    string queen = "d2";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string knight = "f3";
    string rook = "d2";
    string queen = "e5";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string knight = "f2";
    string rook = "e8";
    string queen = "f8";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string knight = "b3";
    string rook = "b8";
    string queen = "d8";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string knight = "a6";
    string rook = "a4";
    string queen = "h1";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string knight = "h3";
    string rook = "b7";
    string queen = "d2";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string knight = "f5";
    string rook = "d4";
    string queen = "e6";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string knight = "g7";
    string rook = "e6";
    string queen = "e4";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string knight = "b6";
    string rook = "e8";
    string queen = "b2";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
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
    string knight = "e6";
    string rook = "e3";
    string queen = "d1";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string knight = "f5";
    string rook = "e6";
    string queen = "g2";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string knight = "h8";
    string rook = "e2";
    string queen = "d2";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string knight = "a1";
    string rook = "h1";
    string queen = "a8";
    CaptureThemAll* pObj = new CaptureThemAll();
    clock_t start = clock();
    int result = pObj->fastKnight(knight, rook, queen);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9959437&rd=5853&pm=2915
********************************************************************************
#include <iostream>
#include <vector>
#include <sstream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <algorithm>
 
using namespace std;
 
int dis[8][8][8][8];
 
class CaptureThemAll   
{
  public:
  int fastKnight(string knight, string rook, string queen)  
  {
    int i,j,u,v,s,t;
    int inf=10000000;
    for (i=0;i<8;i++)
      for (j=0;j<8;j++)
        for (u=0;u<8;u++)
          for (v=0;v<8;v++)
          {
            dis[i][j][u][v]=inf;
            if (i==u&&j==v) dis[i][j][u][v]=0;
            if(abs(i-u)==1&&abs(j-v)==2)   dis[i][j][u][v]=1;
            if(abs(i-u)==2&&abs(j-v)==1)   dis[i][j][u][v]=1;            
          }
    
    for (s=0;s<8;s++)
      for (t=0;t<8;t++)
    for (i=0;i<8;i++)
      for (j=0;j<8;j++)
        for (u=0;u<8;u++)
          for (v=0;v<8;v++)
          {
            if (dis[i][j][s][t]+dis[s][t][u][v]<dis[i][j][u][v])
              dis[i][j][u][v]=dis[i][j][s][t]+dis[s][t][u][v];
          }
    int kr,kc;
    int qr,qc;
    int rr,rc;
    kr=knight[0]-'a';kc=knight[1]-'1';
    qr=queen[0]-'a';qc=queen[1]-'1';
    rr=rook[0]-'a';rc=rook[1]-'1';
    int res1,res2;
    res1=dis[kr][kc][qr][qc]+dis[qr][qc][rr][rc];
    res2=dis[kr][kc][rr][rc]+dis[rr][rc][qr][qc];
    if (res1<res2) return res1;
    else return res2;
    
 
        
 
 
    
 
 
  }
 
};

********************************************************************************
*******************************************************************************/