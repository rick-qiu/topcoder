/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6800
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

class BattleshipChecker {
public:
    string checkBoard(vector<string> board);
};

string BattleshipChecker::checkBoard(vector<string> board) {
    string ret;
    return ret;
}


int test0() {
    vector<string> board = {"......X...", ".XXX..X...", "......X...", "X.X...X...", "X.........", "...XX.X...", "......X...", ".XX...X...", "..........", ".X.X..X..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 5 POINTS";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"X.X.X.X...", "......X...", ".XX...X...", "......X...", "......X..X", "...X..X...", "...X..X...", "......X...", "..XX..X...", "......X..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {".....XX...", ".XX.......", "..........", ".X....XXX.", ".X........", ".....X....", "..X..X....", ".....X....", "...X......", "X.....XXXX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {".....XX..X", ".XX......X", "..........", ".X....XXX.", ".X........", ".....X..X.", "..X..X....", ".....X....", "...X......", "X.....XXXX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {".....XX..X", ".XX......X", "..........", "......XXX.", "..........", ".....X..X.", "..X..X....", ".....X....", "...X......", "X.....XXXX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 3 POINTS";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"X.......X.", "...XXXX...", ".X......X.", "....XX....", ".........X", ".........X", ".....XXX..", ".........X", "..X......X", "..X......X"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 0 POINTS";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"X.......X.", "...XXXX...", ".X......X.", "....XX....", "...X.....X", "...X.....X", ".....XXX..", ".........X", ".........X", ".........X"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"..........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"X........X", "..........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", "X........X"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {".XXXXXXXX.", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXX.XXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", ".XXXXXXXX."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"....XXX..X", "XXXXX.XXXX", "XXXXXXXXXX", "XX.XX.XXXX", "XX.XXXX...", "XX.XX.XXXX", "XXXXXXXXXX", "XXXXX.XXXX", "XXXXXXXXXX", "X..XXX..XX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"XXXX...XXX", "..........", "....XXX...", ".XX.......", ".....X....", ".......XX.", "..X.......", "....XX....", ".......X..", ".....X...."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 1 POINTS";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {"XXXX...XXX", "..........", "....XXX...", ".XX.......", ".....X....", ".......XX.", "...X......", "....XX....", ".......X..", ".....X...."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"XXXX...XXX", "..........", "....XXX...", ".XX.......", ".....X....", ".......XX.", "..........", "...XXX....", ".......X..", ".....X...."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"XXXX...XXX", "..........", "....XXX...", ".XX.......", ".....X....", ".XX....XX.", "..........", "...XXX....", ".X.....X..", ".....X...."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"XXXX......", "..........", ".......X..", ".XX.......", ".....X....", ".XX....XX.", "..........", "...XXX....", ".......X..", ".....X...."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"...X.X.X.X", "...X.X....", "...X...X.X", "...X.X....", ".....X....", "...X......", "...X.X....", "...X.X....", "..........", "...XXX...."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 6 POINTS";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"..XXXX....", "..........", "......X..X", "......X...", "..XX......", "......XXX.", "...XX.....", ".........X", ".X...X...X", "....X....X"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"..XXXX....", "..........", "......X..X", "......X.X.", "..XX......", "......XXX.", "...XX.....", ".........X", ".X...X...X", ".........X"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"..XXXX....", "..........", "......X..X", "......X...", "..XX......", "......XXX.", "...XX.....", ".........X", ".X...X...X", "..X......X"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"..........", "..X...X...", "..........", ".X.XXXX.X.", "........X.", ".X.XXX....", "........X.", ".XXX.XX.X.", "..........", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 7 POINTS";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"XXXX..X..X", "..........", "X........X", ".........X", "X........X", "X.........", "..........", "X........X", ".........X", "XXX..XX..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 5 POINTS";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"XXXX..X..X", "..........", "X........X", ".........X", "X........X", "X.........", ".X........", "X........X", ".........X", "XXX..XX..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"XXXX..X...", ".....X....", "X........X", ".........X", "X........X", "X.........", "..........", "X........X", ".........X", "XXX..XX..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"XXXX..X..X", "..........", ".........X", ".........X", "X........X", "X.........", "........X.", "X........X", ".........X", "XXX..XX..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"X....XX...", "...X......", "........X.", ".X..X.....", ".X..X...XX", ".X..X.....", "....X...XX", "..........", ".X......XX", "...XXX...."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"X.....X...", "...X......", "........X.", ".X..X.....", ".X..X...XX", ".X..X.....", "....X...XX", "..........", ".X......XX", "...XXX...."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"X.........", "...X......", "........X.", ".X..X.....", ".X..X..X..", ".X..X..X..", "....X...XX", "..........", ".X......XX", "...XXX...."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"X.........", "...X......", "........XX", ".X..X.....", ".X..X..X..", ".X..X..X..", ".........X", "..........", ".X......XX", "..XXXX...."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"X.........", "...X......", "........XX", ".X..X.....", ".X..X..X..", ".X..X..X..", ".........X", "..........", "X.......XX", "..XXXX...."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 2 POINTS";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"X.........", ".X........", "........XX", ".X..X.....", ".X..X..X..", ".X..X..X..", ".........X", "..........", "X.......XX", "..XXXX...."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"X.........", "..........", "........XX", ".X..X.....", ".X..X..X..", ".X..X..X..", ".........X", "X.........", "X.......X.", "..XXXX...X"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {".........X", ".X......X.", ".X....X...", "......X...", ".XXX..X...", "......X...", ".X......X.", "....XX..X.", "..X.......", ".......XXX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"....X....X", ".X......X.", ".X....X...", "......X...", ".XXX..X...", "......X...", ".X......X.", "....XX....", "..X.......", ".......XXX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"....X....X", ".X........", ".X....X...", "......X...", ".XXX..X...", "......X...", "........X.", "....XX..X.", "..........", "X......XXX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"....X....X", ".X........", ".X....X...", "......X...", ".XXX..X...", "......X...", "........X.", ".X..XX..X.", "..........", "X......XXX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 1 POINTS";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"...X......", "X..X......", "...X......", "X..X......", ".....XXX..", "X.........", "....X.....", "X...X.....", "..........", ".XXX.XX.XX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 1 POINTS";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"...X......", "X..X......", "...X......", "X..X......", "...XXX....", "X.........", "....X.....", "X...X.....", "..........", ".XXX.XX.XX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"...X......", "X..X......", "...X......", "X..X......", "....XXX...", "X.........", "....X.....", "X...X.....", "..........", ".XXX.XX.XX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"...X......", "X..X......", "...X......", "X..XXX....", "..........", "X.........", "....X.....", "X...X.....", "..........", ".XXX.XX.XX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"XXXXXXXXXX", "..........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", "XXXXXXXXXX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"XXXXXXXXXX", "X........X", "X........X", "X........X", "X........X", "X........X", "X........X", "X........X", "X........X", "XXXXXXXXXX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"..........", "..........", "...XXXXXX.", "...X....X.", "...X....X.", "...X....X.", "...X....X.", "...XXXXXX.", "..........", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {"XXXX.X....", "..........", "XXX.XX....", "..........", "XXX.XX....", "..........", "X.XX.X....", "..........", "..........", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"XXXX.X.X..", "..........", "XXX..XX...", "..........", "XXX..XX...", "..........", "XX.X.X....", "..........", "..........", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 9 POINTS";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"X..XX...X.", "........X.", "..XX....X.", "..........", "...XXXX...", "........X.", ".X........", "......X..X", "XXX...X...", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 3 POINTS";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"X.......X.", "........X.", "..XX....X.", "..........", "...XXXX...", "........X.", ".X........", "......X..X", "XXX...X...", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {"X..XX...X.", "........X.", "..XX....X.", "..........", "...XXXX...", "........X.", ".X........", "......X..X", "XXX...X...", "........XX"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"...XX...X.", "........X.", "..XX....X.", "..........", "...XXXX...", "........X.", ".X........", "......X..X", "XXX...X...", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"X..XX...X.", "........X.", "..XX....X.", "..........", "...XXXX...", "........X.", ".X........", "......X..X", "XXX...X...", "....X....."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {"X..XX...X.", "........X.", "..XX....X.", "..........", "...XXXX...", "........X.", ".X........", "......X..X", "......X...", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"X..XX...X.", "........X.", "X.XX....X.", "X.........", "X..XXXX...", "........X.", ".X........", "......X..X", "XXX...X...", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {"X..XX...X.", "........X.", "..XX....X.", "..........", "..........", "........X.", ".X........", "......X..X", "XXX...X...", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {"X..XX...X.", "........X.", "X.XX....X.", "X.........", "X..XXXX...", "X.......X.", "..X.......", "......X..X", "XXX...X...", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {"X..XX...X.", "........X.", "..XX....X.", "..........", "..XX.XX...", "........X.", ".X........", "......X..X", "XXX...X...", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {"X........X", "...XXX....", "X........X", ".........X", "X..XXXX...", "..........", "..XXX.....", "........X.", "........X.", ".....XX..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 3 POINTS";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {"X........X", "...XXX....", "X........X", ".........X", "X..XXXX...", "..........", "..XX.X....", "........X.", "........X.", ".....XX..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"X........X", "...XXX....", "X........X", ".........X", "X..XXXX...", "..........", "..XXX...X.", "..........", "........X.", ".....XX..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {"X........X", "...XXX....", "X........X", ".........X", "X..XXXX...", "..........", "..XXX.....", ".......X..", "........X.", ".....XX..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {"...XXXX...", "........X.", "..X.XX....", "..X....X..", "....XX....", "..X.......", "....XXX...", "..........", "...XXX.X..", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 5 POINTS";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {"...XXXX...", "........X.", "..X.XX....", "..X.......", "....XX....", "..X.......", "....XXX...", "..........", "...XXX.X..", "........X."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> board = {"...XXXX...", ".......X..", "..X.XX....", "..X....X..", "....XX....", "..X.......", "....XXX...", "..........", "...XXX.X..", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {"...XXX....", ".X......X.", ".X..X.....", ".X..X...XX", "....X.....", "....X.....", "..........", "..XX..XX..", ".........X", "....X.X..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 2 POINTS";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> board = {"...XXX....", ".X......X.", ".X..X.....", ".X..X...XX", "....X.....", "X...X.....", "X.........", "X.XX..XX..", "X........X", "X...X.X..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {"...XXX....", ".X......X.", ".X..X.....", ".X..X...XX", "....X.....", "....X.....", "....X.....", ".XX...XX..", "..........", "....X.X..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {"...XXX....", ".X......X.", ".X..X.....", ".X..X...XX", "....X.....", "....X.....", "....X.....", ".XX...XX..", "..........", ".X..X.X..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {"...XXX....", ".X......X.", ".X........", ".X..X...XX", "....X.....", "....X.....", "....X.....", ".XX...XX..", "..........", "X...X.X..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 1 POINTS";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> board = {"X..X..X..X", "..........", "XX..XX..XX", "..........", "XX..XX....", "X...X.....", "..........", "XX........", "XX........", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {"......X..X", ".XXX..X..X", "......X..X", "X.X...X..X", "X........X", "...XX.X...", "......X...", ".XX...X...", "..........", ".X.X..X..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {"X..XXXX.X.", "..........", ".X......X.", "....XX....", ".........X", ".........X", ".....XXX..", ".........X", "..X......X", "..X......X"};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 1 POINTS";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {"X.X.X.X.XX", "..........", "XX.XX..XXX", "..........", "XXXX...XXX", "..........", ".....XXXXX", "..........", "..........", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> board = {"XXXX......", "..........", "X.X.X.X.XX", "..........", "XX.XXX.XXX", "..........", "........XX", "..........", "..........", ".........."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEPTED, 6 POINTS";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> board = {"..........", ".XXX..X...", "......X...", "X.X...X...", "X.........", "..XXX.X...", "......X...", ".XX...X...", "..........", ".X.X..X..."};
    BattleshipChecker* pObj = new BattleshipChecker();
    clock_t start = clock();
    string result = pObj->checkBoard(board);
    clock_t end = clock();
    delete pObj;
    string expected = "REJECTED";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15101078&rd=10002&pm=6800
********************************************************************************
#include <vector>
#include <sstream>
#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <deque>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
class BattleshipChecker
{ 
public:
string checkBoard(vector <string> b)
  {
    int c[10];
    for(int i=0;i<5;i++) c[i]=0;
    int cnt=0;
    string no="REJECTED";
    for(int i=0;i<9;i++)
      for(int j=0;j<9;j++)
  if(b[i][j]=='X' && (b[i+1][j+1]=='X')) return no;
    for(int i=0;i<9;i++)
      for(int j=1;j<10;j++)
  if(b[i][j]=='X' && (b[i+1][j-1]=='X')) return no;
    for(int i=0;i<10;i++)
      {
  for(int j=0;j<10;j++)
    {
      if(b[i][j]=='X')
        cnt++;
      else if(cnt>0)
        {
    if(cnt>4) return no;
    c[cnt]++;
    cnt=0;
        }
    }
  if(cnt>0)
    {
      if(cnt>4) return no;
      c[cnt]++;
      cnt=0;
    }
      }
    for(int j=0;j<10;j++)
      {
  for(int i=0;i<10;i++)
    {
      if(b[i][j]=='X')
        cnt++;
      else if(cnt>0)
        {
    if(cnt>4) return no;
    c[cnt]++;
    cnt=0;
        }
    }
  if(cnt>0)
    {
      if(cnt>4) return no;
      c[cnt]++;
      cnt=0;
    }
      }
    //cout<<1<<endl;
    //if(c[1]%2) return no;
    if(c[1]!=24) return no;
    for(int i=2;i<=4;i++)
      if(c[i]!=(5-i)) return no;
    stringstream a;
    a<<"ACCEPTED, ";
    int p=0;
    for(int i=0;i<10;i++)
      {
  bool ok=true,ok2=true;
  for(int j=0;j<10;j++)
    {
      if(b[i][j]=='X') ok=false;
      if(b[j][i]=='X') ok2=false;
    }
  if(ok) p++;
  if(ok2) p++;
      }
    a<<p<<" POINTS";
    return a.str();
  }
  
 
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/