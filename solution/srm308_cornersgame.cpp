/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6475
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

class CornersGame {
public:
    int countMoves(vector<string> board);
};

int CornersGame::countMoves(vector<string> board) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"......", "......", "......", "......", "......", "......"};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {".....s", "..s.r.", "r.....", ".srs..", "..r...", "......"};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"......", "......", "....ss", "....ss", "...r..", "...r.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
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
    vector<string> board = {"...s.r", "..r.s.", "rr.s..", "..s.rr", "s.rr..", ".s.s.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"......", "...rr.", "rrr...", "....rr", ".rrr..", "......"};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"..s.s.", "...rrs", "rrr.s.", ".s..rr", "srrr..", ".s.s.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"......", "...rr.", "rrs...", "..s.rr", ".r.s..", "...r.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"...ss.", "..s.s.", "r.....", "..rrrr", "s.....", "..rs.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"......", "...r..", "sr....", "..r.ss", "...r..", "s..r.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"......", "..rr..", ".s.ssr", ".r.rrr", "r..r..", "rr.s.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"...rs.", "..r...", "r.r...", "r..rr.", "......", "..s..."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"...rr.", "..r.sr", "..s..s", ".rsrs.", ".rss..", "......"};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"...rrr", "...s..", ".r....", "r.s.s.", "..rr..", "s.sr.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {"..s...", "...s.r", "sr.r.r", "s.s.sr", "...s..", "..s..."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"......", "...rr.", ".s.r..", "rsr.r.", "rr....", "..rs.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"..r...", "......", ".r..r.", "..rsr.", "rr....", "r....."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"..s.rr", "..s.r.", "...rsr", "...ss.", "r.....", "r.r..."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"....s.", "..r.sr", "...r.r", "....sr", ".r....", "s....."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"..s.ss", "...ss.", "r.r.rr", "...r.s", "s.....", "......"};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"..ss..", "..rsr.", "rrr..r", ".r..r.", "r.r...", ".rrs.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
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
    vector<string> board = {"..r.sr", "...r..", "s..r..", "sr.s..", "..r...", ".s...."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"...s..", "...s..", ".rs.r.", "....s.", "rs.s..", "..s..."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"...r.r", "....r.", "s.s.r.", "ss.rs.", "......", "rrsr.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"......", "..rr.r", "s.ss..", "rrr...", "rrr...", "..sr.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"...srs", "..ssss", "..s.s.", "..srs.", ".r.s..", "srsr.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"..s...", "...r..", "...rr.", "....s.", "..r...", "r..s.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
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
    vector<string> board = {"..r.rr", "..s...", "...s.s", "r....r", "..r...", "s.s..."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
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
    vector<string> board = {"...srr", "..rr.s", "s..ss.", "ss.srs", ".s.r..", "srsr.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {".....r", "....s.", "....r.", ".rrs.r", ".rss..", "ss...."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
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
    vector<string> board = {"...r..", "...r.r", "r...rr", "r..s.s", "s.ss..", "r....."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"...ssr", "..r...", ".s.rs.", "r.rsrs", "r.s...", "rrrs.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"..srs.", "..r.sr", "..rrsr", "..sss.", "s.....", "..rs.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"...ss.", "..rr.s", ".srr.r", "rr....", "..sr..", "......"};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"....r.", ".....s", ".r..rs", ".ss...", "......", "..s..."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"....rr", "..r...", "..s.rr", ".sss.s", ".r....", "rsr..."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"..r.s.", "..ss..", "s.....", "..rs..", "..ss..", ".s.s.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"...rss", "..rrs.", ".rr.rs", "s..ss.", "s.rs..", ".s.r.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"....rs", "..srr.", ".r.r..", "ss..s.", "rrr...", "ss.r.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"....r.", "..ss.r", ".r.sr.", "sr....", "s.sr..", "rs.s.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"...r..", "..r.rs", "ssss.s", "rr....", "srsr..", ".rrs.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
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
    vector<string> board = {"..ssr.", "..s..s", ".srr..", "srr.rs", ".r....", "rss..."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"..s.r.", "...r..", "rs.s..", "r.srrs", ".s.r..", ".sss.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"..rr..", "..s...", "r.s...", "r.....", "rrsr..", "r..s.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"......", "......", ".s...r", "r.r.s.", "s.rs..", ".s.r.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {".....s", "..s.ss", ".rr...", "..sr..", "s.....", "s.rs.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"..rsr.", "..s..s", "sr...s", ".....r", "......", "......"};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"..rr.r", "...sss", ".s..rs", ".srrr.", "...s..", ".r...."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"..ss..", "..s.s.", "rr.s.s", "..ssrr", ".s.r..", "s.s..."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {"..sr..", "...s.s", "rrr.s.", "ss..rr", ".s.r..", "..s..."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"......", "......", "......", "......", "......", "......"};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"..ssss", "..ssss", "s...ss", "sss.ss", "sss...", "ssss.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
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
    vector<string> board = {"......", "..rrr.", "rr....", "...rrr", ".rrr..", "......"};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"..r...", "..rsrs", "sr..r.", ".r.rrs", "srsr..", "...r.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {".....s", "..s.r.", "r....r", ".srs..", "..r...", "......"};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {"..r...", "..r...", ".r..s.", "s...rs", "..ss..", "..ss.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {"..r.s.", "....r.", "rrrrrs", "......", "......", "...s.."};
    CornersGame* pObj = new CornersGame();
    clock_t start = clock();
    int result = pObj->countMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8394868&rd=9988&pm=6475
********************************************************************************
#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <ctime>
 
using namespace std;
 
typedef vector<string> vs;
 
template<class T> int size(const T& c) { return (int)c.size(); }
 
#define For(i, a, b) for (int i = int(a); i <= int(b); ++i)
#define Ford(i, a, b) for (int i = int(a); i >= int(b); --i)
#define Rep(i, n) for (int i = 0; i < int(n); ++i)
#define Repd(i, n) for (int i = int(n)-1; i >= 0; --i)
#define Fill(a, c) memset(&a, c, sizeof(a))
 
const int n = 36*36*36*36;
vs board;
int dist[n];
queue<int> que;
 
void relax(int state, int newd) {
    if (dist[state] == -1) {
        dist[state] = newd;
        que.push(state);
    }
}
 
int getState(const vs& board) {
    int k = 0;
    int res = 0;
    Rep(i, 6) Rep(j, 6) {
        if (board[i][j] == 'x')
            res = res*36+k;
        ++k;
    }
    return res;
}
 
const int di[] = {-1, 1, 0, 0}, dj[] = {0, 0, -1, 1};
 
void work(int state) {
    vs field;
    field = board;
    int t = state;
    Rep(k, 4) {
        int i = t%36/6;
        int j = t%36%6;
        field[i][j] = 'x';
        t /= 36;
    }
    Rep(i, 6) Rep(j, 6) 
        if (field[i][j] == 'x') 
            Rep(d, 4) {
                int i2 = i+di[d], j2 = j+dj[d];
                if (i2 < 0 || i2 >= 6 || j2 < 0 || j2 >= 6)
                    continue;
                if (field[i2][j2] == '.') {
                    swap(field[i][j], field[i2][j2]);
                    relax(getState(field), dist[state]+1);
                    swap(field[i][j], field[i2][j2]);
                } else if (field[i2][j2] == 'x' || field[i2][j2] == 's') {
                    int i3 = i2+di[d], j3 = j2+dj[d];
                    if (0 <= i3 && i3 < 6 && 0 <= j3 && j3 < 6 && field[i3][j3] == '.') {
                        swap(field[i][j], field[i3][j3]);
                        relax(getState(field), dist[state]+1);
                        swap(field[i][j], field[i3][j3]);
                    }
                }
            }
}
 
struct CornersGame {
 
    int countMoves(vs board) {
        ::board = board;
        Fill(dist, -1);
        relax(35+36*(34+36*(29+36*28)), 0);
        while (!que.empty()) {
            int state = que.front();
            que.pop();
            work(state);
        }
        return dist[7+36*(6+36*(1+36*0))];
    }
};

********************************************************************************
*******************************************************************************/