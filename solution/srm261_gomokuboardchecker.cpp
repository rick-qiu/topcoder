/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4652
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

class GomokuBoardChecker {
public:
    string check(vector<string> board);
};

string GomokuBoardChecker::check(vector<string> board) {
    string ret;
    return ret;
}


int test0() {
    vector<string> board = {"O.X..", ".OX..", "X.O..", "X..O.", "....O"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"O.X..", ".OX..", "X.O..", "X..O.", "...XO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"OOOOO", "OOOOO", "OOOOO", "OOOOO", "OOOOX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"O...", "...X", "....", "...."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "IN PROGRESS";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"O.X.O.", ".OX.O.", "X.O.O.", "X..OO.", "..XXOX", "XXXXOO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"O.XX.O", ".OX..O", "X.O..O", "X..O.O", "..XXOO", "XXXX.O"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"XXXXO", "OOOOX", "XXXXO", "OOOOX", "XOXOX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "DRAW";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "IN PROGRESS";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"X"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "DRAW";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"O"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "DRAW";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"XXXXOOOOO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"XXXXXOOOO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "X WON";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"XXXXX.OOOOO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {"XOXOXOXOXOXOXOX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "DRAW";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"X", "X", "X", "O", "O", "O", "O", "O", "X"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"XXX", "OOO", "X.O"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "IN PROGRESS";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"XXXX.", "XXXX.", "OOOOO", "OOOOO", "..X.."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"OXXXO...O", ".O..OXXOX", "XXOXO.O..", "...OOOXXX", "...XO....", "...OOOXXX", "XXOXO.O..", ".O.XOX.OX", "OXX.O..XO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"OXXXO...O", ".O..OXXO.", "XXOXO.O..", "...OOOXXX", "...XO....", "...OOOXXX", "XXOXO.O..", ".O.XOX.OX", "OXX.O..XO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"O.XXO...O", ".O..OXXO.", "XXOXO.O..", "...OOOXXX", "...XO....", "...OOOXXX", "XXOXO.O..", ".O.XOX.OX", "OXX.O..XO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"OOOOO", "XXX..", "XXX..", ".....", "....."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"OOOO.OOOO", "XXXXXXXXX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "X WON";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"OOOO.OOOO.", "XXXXXXXXXX", "O........."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"XO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "DRAW";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"X.O"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "IN PROGRESS";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"XX."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {".OO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"OO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "DRAW";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "...............", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "IN PROGRESS";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "OOOOXXXXOOOOXXX", "XXXXOOOOXXXXOOO", "XXXX.........O.", "OOOOXXXXOOOOOXX", "XXXXOOOOXXXOOOO", "OOOOXXXXOOOOXXX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "..............."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "IN PROGRESS";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"XXXXX", "XXOO.", "XOXO.", "XOOX.", "XOOOX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"XXXXX", "XXOOO", "XOXOO", "XOOXO", "XOOOX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "X WON";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"XXXXX", "XXOO.", "XOXO.", "XOOX.", "XOOOX", ".....", "OOO.."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "X WON";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"XXXXX", "XXOOX", "XOXOX", "XOOXX", "XOOOX", ".....", "OOO..", "OOO.."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"OOOO.XXXX.OOOO.", "OOOO.XXXX.OOOO.", "OOOO.XXXX.OOOO.", "OOOO.XXXX.OOOO.", "...............", "XXXX.OOOO.XXXX.", "XXXX.OOOO.XXXX.", "XXXX.OOOO.XXXX.", "XXXX.OOOO.XXXX.", "...............", "XXXX.OOOO.XOXOX", "XXXX.OOOO.XOXOX", "XXXX.OOOO.OXOXO", "XXXX.OOOO.OXOXO", "..........XOXOX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "IN PROGRESS";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"OOOO.", "....O", "XXXXX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "X WON";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"XXXX.", "....X", "OOOOO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"O...", "...X", "....", "...."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "IN PROGRESS";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"O.X..", ".OX..", "X.O..", "X..O.", "....O"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"XXXXO", "OOOOX", "XXXXO", "OOOOX", "XOXOX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "DRAW";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"O.XX.O", ".OX..O", "X.O..O", "X..O.O", "..XXOO", "XXXX.O"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"O.X.O.", ".OX.O.", "X.O.O.", "X..OO.", "..XXOX", "XXXXOO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {"XXXXXX", "OOOOOO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"XXXXX", "OOO..", "OOO.."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"OOOOO", "XXXXX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"XXXXXX", "OOOO..", "......", "OOO...", "......"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {"XXXXX", "XOOOO", "XOOOO", "XO...", "X...."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "X WON";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"XOOOO", "XXOOO", "X.XOO", "X.OXO", "XXXXX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"XXXXOXXXXX", "OOOO..XX..", "OOOO......", "OOOO....OO", "XXXX......"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "X WON";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {"XXX..O", "X.X..O", "X.X..O", "XXX..O", "OOOOOO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {".X.O..", ".OX...", "O..X..", "O...X.", ".O...X"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "X WON";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {".....", ".....", ".....", ".....", "....."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "IN PROGRESS";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {"OOOXOOO.OO", "O..X.OO..X", "O..X....X.", "O..X...X..", "XXXXXXX...", "O..X.XO...", "O..X..O...", "O..X......"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {"XXXXX", "OOXOO", "XOOOO", "OOOOX", "XXXXX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {"OXXXXX", "OOOOXX", "XXXXOO", "OOOOOO", "XOXXXO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {"XXXXO", "...O.", "..O..", ".O...", "O...."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"XXXXXX", "OOOO.."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {"O.O.O", "XO.O.", ".X...", "..X..", "...X.", "XXX.X"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {"XXXXX", "OOO..", "OOO..", ".....", "....."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {"....X", "...X.", "..X..", ".X...", "X....", "OOOO."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "X WON";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> board = {"XX....", "....OO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "IN PROGRESS";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {"...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "OOOOOOOOOOOOOOO", "XXXXXXXXXXXXXXX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> board = {"X"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "DRAW";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {"OOOOOO", "OXXOXX", "XXXXOO", "OXOOXO", "XOXXXX", "......"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {"......", "XXXXX.", ".O.O.O", "O.O.O.", "......", "......"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {"XXXXXXXXXX", "OOOO.OOOO.", "OO........"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> board = {"O...", "...X", "....", "...."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "IN PROGRESS";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {"O.X..", ".OX..", "X.O..", "X..O.", "....O"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {"XXXXO", "OOOOX", "XXXXO", "OOOOX", "XOXOX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "DRAW";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {"O.XX.O", ".OX..O", "X.O..O", "X..O.O", "..XXOO", "XXXX.O"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> board = {"O.X.O.", ".OX.O.", "X.O.O.", "X..OO.", "..XXOX", "XXXXOO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> board = {"XXXXXX", "OOOOOO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> board = {"XXXXX", "OOO..", "OOO.."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> board = {"OOOOO", "XXXXX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> board = {"XXXXXX", "OOOO..", "......", "OOO...", "......"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> board = {"XXXXX", "XOOOO", "XOOOO", "XO...", "X...."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "X WON";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> board = {"XOOOO", "XXOOO", "X.XOO", "X.OXO", "XXXXX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> board = {"XXXXOXXXXX", "OOOO..XX..", "OOOO......", "OOOO....OO", "XXXX......"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "X WON";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> board = {"XXX..O", "X.X..O", "X.X..O", "XXX..O", "OOOOOO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> board = {".X.O..", ".OX...", "O..X..", "O...X.", ".O...X"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "X WON";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> board = {".....", ".....", ".....", ".....", "....."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "IN PROGRESS";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> board = {"OOOXOOO.OO", "O..X.OO..X", "O..X....X.", "O..X...X..", "XXXXXXX...", "O..X.XO...", "O..X..O...", "O..X......"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> board = {"XXXXX", "OOXOO", "XOOOO", "OOOOX", "XXXXX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> board = {"OXXXXX", "OOOOXX", "XXXXOO", "OOOOOO", "XOXXXO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> board = {"XXXXO", "...O.", "..O..", ".O...", "O...."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> board = {"XXXXXX", "OOOO.."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> board = {"O.O.O", "XO.O.", ".X...", "..X..", "...X.", "XXX.X"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> board = {"XXXXX", "OOO..", "OOO..", ".....", "....."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> board = {"....X", "...X.", "..X..", ".X...", "X....", "OOOO."};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "X WON";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> board = {"XX....", "....OO"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "IN PROGRESS";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> board = {"...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "OOOOOOOOOOOOOOO", "XXXXXXXXXXXXXXX"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> board = {"X"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "DRAW";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> board = {"OOOOOO", "OXXOXX", "XXXXOO", "OXOOXO", "XOXXXX", "......"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "O WON";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> board = {"......", "XXXXX.", ".O.O.O", "O.O.O.", "......", "......"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> board = {"XXXXXXXXXX", "OOOO.OOOO.", "OO........"};
    GomokuBoardChecker* pObj = new GomokuBoardChecker();
    clock_t start = clock();
    string result = pObj->check(board);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15718818&rd=7995&pm=4652
********************************************************************************
#include <string>
#include <vector>
using namespace std;
 
struct GomokuBoardChecker
{
  int count[15][15][4], R, C;
  char b[15][15];
 
  string check(vector <string> board)
  {
    const string no("INVALID");
    R = board.size();
    C = board[0].size();
    int i, j, k;
    for(i = 0; i < R; ++i)
      for(j = 0; j < C; ++j)
        b[i][j] = board[i][j];
    bool hasEmpty = false;
    int OCount = 0, XCount = 0;
    for(i = 0; i < R; ++i)
      for(j = 0; j < C; ++j)
        switch(b[i][j])
        {
        case 'O':
          ++OCount;
          break;
        case 'X':
          ++XCount;
          break;
        case '.':
          hasEmpty = true;
          break;
        default:
          return no;
        }
    if(OCount + 1 < XCount || XCount + 1 < OCount)
      return no;
    bool OWon, XWon;
    judge(OWon, XWon);
    if(XCount < OCount && XWon || OCount < XCount && OWon || XWon && OWon)
      return no;
    if(OWon)
    {
      for(k = 0; k < R * C; ++k)
        if(b[k / C][k % C] == 'O')
        {
          b[k / C][k % C] = '.';
          judge(OWon, XWon);
          b[k / C][k % C] = 'O';
          if(!OWon)
            break;
        }
      if(k == R * C)
        return no;
    }
    if(XWon)
    {
      for(k = 0; k < R * C; ++k)
        if(b[k / C][k % C] == 'X')
        {
          b[k / C][k % C] = '.';
          judge(OWon, XWon);
          b[k / C][k % C] = 'X';
          if(!XWon)
            break;
        }
      if(k == R * C)
        return no;
    }
    judge(OWon, XWon);
    if(OWon)
      return string("O WON");
    if(XWon)
      return string("X WON");
    if(hasEmpty)
      return string("IN PROGRESS");
    else
      return string("DRAW");
  }
 
  void judge(bool& OWon, bool& XWon)
  {
    int i, j, k;
    OWon = false;
    XWon = false;
    for(i = 0; i < R; ++i)
      for(j = 0; j < C; ++j)
      {
        for(k = 0; k < 4; ++k)
          count[i][j][k] = 0;
        if(b[i][j] != '.')
        {
          if(j > 0 && b[i][j - 1] == b[i][j])
            count[i][j][0] = count[i][j - 1][0];
          if(i > 0 && b[i - 1][j] == b[i][j])
            count[i][j][1] = count[i - 1][j][1];
          if(i > 0 && j > 0 && b[i - 1][j - 1] == b[i][j])
            count[i][j][2] = count[i - 1][j - 1][2];
          if(i > 0 && j < C - 1 && b[i - 1][j + 1] == b[i][j])
            count[i][j][3] = count[i - 1][j + 1][3];
        }
        for(k = 0; k < 4; ++k)
        {
          ++count[i][j][k];
          if(count[i][j][k] >= 5)
            break;
        }
        if(k < 4)
          if(b[i][j] == 'O')
            OWon = true;
          else
            XWon = true;
      }
  }
};

********************************************************************************
*******************************************************************************/