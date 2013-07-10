/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8268
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

class DukeOnChessBoard {
public:
    string dukePath(int n, string initPosition);
};

string DukeOnChessBoard::dukePath(int n, string initPosition) {
    string ret;
    return ret;
}


int test0() {
    int n = 3;
    string initPosition = "b2";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "b2-c2-c3-b3-a3-a2-a1-b1-c1";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 4;
    string initPosition = "d4";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "d4-d3-d2-d1-c1-c2-c3...b3-b2-b1-a1-a2-a3-a4";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 3;
    string initPosition = "a2";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "a2-b2-c2-c3-b3-a3";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 4;
    string initPosition = "d3";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "d3-d4-c4-c3-c2-d2-d1...b2-b3-b4-a4-a3-a2-a1";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 5;
    string initPosition = "a4";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "a4-b4-c4-d4-e4-e5-d5-c5-b5-a5";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 8;
    string initPosition = "h7";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "h7-h8-g8-g7-g6-h6-h5...a7-a6-a5-a4-a3-a2-a1";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 8;
    string initPosition = "d5";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "d5-e5-f5-g5-h5-h6-h7...a5-a4-a3-a2-b2-b1-a1";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 2;
    string initPosition = "b1";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "b1-b2-a2-a1";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 8;
    string initPosition = "a8";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "a8-b8-c8-d8-e8-f8-g8...a1-a2-a3-a4-a5-a6-a7";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 2;
    string initPosition = "b2";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "b2-b1-a1-a2";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 2;
    string initPosition = "a1";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "a1-b1-b2-a2";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 3;
    string initPosition = "c2";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "c2-c3-b3-b2-b1-c1";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 3;
    string initPosition = "b3";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "b3-c3-c2-c1-b1-b2-a2-a3";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 3;
    string initPosition = "b1";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "b1-c1-c2-c3-b3-b2-a2-a3";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 8;
    string initPosition = "e8";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "e8-f8-g8-h8-h7-h6-h5...b4-b3-b2-b1-a1-a2-a3";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 6;
    string initPosition = "d6";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "d6-e6-f6-f5-f4-f3-f2...b1-a1-a2-a3-a4-a5-a6";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 8;
    string initPosition = "c6";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "c6-d6-e6-f6-g6-h6-h7...b2-b1-a1-a2-a3-a4-a5";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 6;
    string initPosition = "e3";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "e3-f3-f4-f5-f6-e6-e5...a6-a5-a4-a3-a2-a1-b1";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 8;
    string initPosition = "e4";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "e4-f4-g4-h4-h5-h6-h7...a5-a4-a3-a2-b2-b1-a1";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 6;
    string initPosition = "c2";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "c2-d2-e2-f2-f3-f4-f5...a2-b2-b1-c1-d1-e1-f1";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 4;
    string initPosition = "b1";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "b1-c1-d1-d2-d3-d4-c4...b2-b3-b4-a4-a3-a2-a1";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 4;
    string initPosition = "c1";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "c1-d1-d2-d3-d4-c4-c3...b3-b4-a4-a3-a2-a1-b1";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 8;
    string initPosition = "h1";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "h1-h2-h3-h4-h5-h6-h7...a7-a6-a5-a4-a3-a2-a1";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 8;
    string initPosition = "h2";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "h2-h3-h4-h5-h6-h7-h8...g6-g5-g4-g3-g2-g1-h1";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 7;
    string initPosition = "b3";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "b3-c3-d3-e3-f3-g3-g4...b6-b5-b4-a4-a5-a6-a7";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 7;
    string initPosition = "c2";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "c2-d2-e2-f2-g2-g3-g4...b2-b1-c1-d1-e1-f1-g1";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 7;
    string initPosition = "e4";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "e4-f4-g4-g5-g6-g7-f7...b6-b5-b4-b3-b2-b1-c1";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 7;
    string initPosition = "f1";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "f1-g1-g2-g3-g4-g5-g6...d6-d5-d4-d3-d2-d1-e1";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 7;
    string initPosition = "b7";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "b7-c7-d7-e7-f7-g7-g6...b2-b3-b4-b5-b6-a6-a7";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 5;
    string initPosition = "b4";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "b4-c4-d4-e4-e5-d5-c5...d2-c2-c1-b1-b2-a2-a1";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 5;
    string initPosition = "e4";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "e4-e5-d5-d4-d3-e3-e2...c5-b5-b4-b3-b2-b1-c1";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 5;
    string initPosition = "c1";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "c1-d1-e1-e2-e3-e4-e5...b2-b1-a1-a2-a3-a4-a5";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 5;
    string initPosition = "d1";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "d1-e1-e2-e3-e4-e5-d5...c5-b5-b4-b3-b2-b1-c1";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 3;
    string initPosition = "c3";
    DukeOnChessBoard* pObj = new DukeOnChessBoard();
    clock_t start = clock();
    string result = pObj->dukePath(n, initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "c3-c2-c1-b1-b2-b3-a3-a2-a1";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22682913&rd=10794&pm=8268
********************************************************************************
#include <algorithm> 
#include <cctype> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <deque> 
#include <iostream> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
template <class _T> inline string tostr(const _T& a) { ostringstream os(""); os << a; return os.str(); } 
 
#define TynKogep TOPCODER 
#define bublic public: 
#define clr(a,b); memset(a,b,sizeof(a)); 
#define pb push_back 
#define sz size() 
#define ld long double 
#define ll long long 
#define istr istringstream 
 
int a[10][10],N; 
string ans; 
 
void dfs(int x,int y) 
{ 
  string s="-"; 
  s+=x+'a'; 
  s+=y+'1'; 
  ans+=s; 
  a[x][y]=1; 
  if (x<N-1 && !a[x+1][y]) {dfs(x+1,y); return;} 
  if (y<N-1 && !a[x][y+1]) {dfs(x,y+1); return;} 
  if (y>0 && !a[x][y-1]) {dfs(x,y-1); return;} 
  if (x>0 && !a[x-1][y]) {dfs(x-1,y); return;} 
} 
 
class DukeOnChessBoard 
{ 
  bublic 
  string dukePath(int n, string initPosition) 
  { 
    clr(a,0); 
    ans=""; 
    N=n; 
    dfs(initPosition[0]-'a',initPosition[1]-'1'); 
    string s=""; 
    for(int i=1;i<ans.sz;i++) 
    s+=ans[i]; 
    if (s.sz<=40) return s; 
    ans=""; 
    for(int i=0;i<20;i++) 
    ans+=s[i]; 
    ans+="..."; 
    for(int i=s.sz-20;i<s.sz;i++) 
    ans+=s[i]; 
    return ans; 
  } 
};

********************************************************************************
*******************************************************************************/