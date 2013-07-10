/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4465
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

class ConnectFour {
public:
    string judge(vector<string> board);
};

string ConnectFour::judge(vector<string> board) {
    string ret;
    return ret;
}


int test0() {
    vector<string> board = {".......", ".......", ".......", ".......", ".......", "......."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "first player moves";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {".......", ".......", ".......", "...X...", "...O...", "...X..."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "second player moves";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {".......", ".......", "X......", "OX.....", "XOXO...", "OXOX..."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "first player wins";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {".......", ".......", ".X.....", ".X.....", ".X..XX.", "XOOOOOO"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "second player wins";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"OOXOXOX", "XXXOXOO", "OXXOOXO", "XOOXXOO", "XXXOOXX", "XOOXXOO"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "draw game";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"...X...", ".......", ".......", ".......", "...X...", "...O..."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {".......", ".......", ".......", ".......", "OOOO...", "XXXX..."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"XXO.XOX", "OOX.OXX", "XXO.XXO", "OOXXOOO", "XXOOXOO", "OOXOOXX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"XX.XX.O", "OO.XOXX", "XX.OXXO", "OOOOOOX", "XXXOXOO", "OOOXOXX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "second player wins";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"XXX.OXX", "OOO.XXX", "XXX.OXO", "OOO.OOO", "XXX.OOO", "OOO.XXX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "first player moves";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"XXOXOX.", "OOXXXO.", "XXOOXX.", "OOXOOOX", "XXOOOXO", "OOXXXOO"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {".......", ".......", ".......", ".......", "...X...", "...O..."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {".......", ".......", "...X...", "...O...", "...O...", "...X..."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {".......", "...X...", "..OX...", "..OX...", "..OX...", "......."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"..O....", "...X...", "..O....", "...X...", "..OX...", "..OX..."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {".......", "..O....", "..O....", "..OX...", "..OX..X", "..OX..X"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"OXOXOXO", "XOXOXOX", "OXOXOXO", "XOXOXOX", "OXOXOXO", "XOXOXOX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"OXOOOXX", "XOXXXOX", "OXOOOXO", "XOXXXOX", "OXOOOXO", "XOXXXOX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {".......", "..X....", "..O....", "..OX...", "..OX...", "..OX..."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {".O.....", ".O.....", ".X.....", ".O.....", "OX.....", "XX....."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {".O.OXOX", ".O.XOXO", "XO.OOXX", "XXXXOOO", "XOOOXXX", "XOXXOXO"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"OOXOXOX", "O.....O", "O.....X", "X.....O", "X.....X", "XOXXOXO"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {".......", ".......", ".......", "..O....", "..X....", "XOXO..."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "first player moves";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"...O...", ".OXOXO.", "XOXOXOX", "XOXOXOX", "OXOXOXO", "XOXOXOX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "second player wins";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {".......", ".......", "O.....X", "OO...XO", "OOO.XOO", "XXXXXXX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "first player wins";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"XO.OXOX", "OX.XOXO", "OO.OOXX", "XXXXOOO", "XOOOXXX", "XOXXOXO"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "first player wins";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"XXOO.OO", "XOXOXOO", "XXXOOXX", "OOOXXXO", "XXXOOOX", "XOOXXOX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "second player moves";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"XXOOOOO", "XOXOXOO", "XXXOOXX", "OOOXXXO", "XXXOOOX", "XOOXXOX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "second player wins";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"XOOO.OO", "OXXO.OX", "XOXXOXO", "XXXOXOX", "XXOOXOO", "OXOXOXX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "second player wins";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {".......", ".......", "..O....", "..OX...", "..OX...", "..OX..X"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "second player wins";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {".......", ".......", ".......", ".......", ".XXX..O", "OXXXOOO"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "second player moves";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {".......", ".......", ".......", "......O", ".XXX..O", "OXXXOOO"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "first player moves";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {".......", "...X...", "...X...", "...O...", "..OO...", "..XX..."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "second player moves";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"OOOXOOO", "XXXOXXX", "OOOXOOO", "XXXOXXX", "OOOXOOO", "XXXOXXX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "draw game";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"XOOXOOO", "OXOXOXX", "XOXXXOO", "OOXOXXX", "XOXOXOO", "OXOXOXX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "draw game";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"OXOOOXO", "XOXXXOX", "OXOOOXO", "XOXXXOX", "OXOOOXO", "XOXXXOX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "draw game";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {".......", "...X...", "..XXX..", "XXOOOXX", "XXOOOXX", "OOOXOOO"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"X.X....", "O.X.X..", "O.X.X..", "X.O.O..", "X.O.O..", "X.O.O.."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "second player moves";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"XX.....", "XO.....", "OO.....", "OO.....", "OX.....", "XX....."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {".....XO", ".....XX", ".....OO", ".....OO", ".....OX", ".....XX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "first player moves";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {".......", ".......", "XXX....", "XXX....", "OOO....", "OOOX..."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"OOXOXOX", "XXXOXOO", "OXXOOXO", "XOOXXOO", "XXXOOXX", "XOOXXOO"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "draw game";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {".......", ".......", ".......", "..O....", "..X....", "..X...."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"O....X.", "XX...XO", "OO...OX", "OX...OX", "XOOX.XX", "OXOOOXX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {".......", ".......", "XXX....", "OOO....", "OOO....", "XXX...."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {".......", ".......", ".......", ".......", "X......", "O......"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {".......", "...X...", "..XX...", ".XXO...", "XOOO...", "OOOX..."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"OOOOOOO", "XXXOXXX", "OOXOXOO", "OXOXOXO", "XXOXOXX", "XXOXOXX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {".......", ".......", "...O...", "...O...", "...X...", "...X..."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"....O..", ".XX.O..", ".OX.O..", ".XXOX..", ".OXOO..", "XXXOOXO"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {".......", ".......", "O......", "O......", "X......", "X......"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {".......", ".......", ".......", ".......", "OOOX...", "XXXXO.."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"...OOX.", "..OXXO.", ".OOOOX.", "XOXXXO.", "XXOXOXX", "OXOOXXO"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "second player wins";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {".......", ".......", ".......", "O......", "X......", "X......"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {".......", ".......", ".......", ".......", "...X...", "...O..."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {".......", ".......", ".......", ".......", "OOO.OOO", "XXXXXXX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "first player wins";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {".......", ".......", "XX.....", "XXO.O..", "XXO.O..", "XXO.O.O"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {".......", ".......", "XXX.O..", "XOOXOX.", "XXOXOO.", "XOXOOO."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"....OOO", "....OOO", "....OOO", "....XXX", "....XXX", "....XXX"};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {".......", ".......", "...X...", "..XO...", "OXOO...", "XXXXOO."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {".......", "XO.....", "OXO....", "XOXO...", "XOXX...", "XOOOXX."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "invalid";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {".......", ".......", "OO.....", "OX.....", "XX.....", "XO....."};
    ConnectFour* pObj = new ConnectFour();
    clock_t start = clock();
    string result = pObj->judge(board);
    clock_t end = clock();
    delete pObj;
    string expected = "first player moves";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=7219&pm=4465
********************************************************************************
// another fine solution by misof
#include <algorithm>
 
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
 
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cassert>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
typedef vector<int> VI;
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
int memo[2000000];
char B[6][7];
 
int dr[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dc[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
 
int ok(int r, int c) { return r>=0 && r<=5 && c>=0 && c<=6; }
int won(char ch) {
  int res = 0;
  
  REP(r,6) REP(c,7) if (B[r][c]==ch) REP(d,8) {
    if (ok(r+3*dr[d],c+3*dc[d])) {
      int oka = 1;
      REP(s,4) if (B[r + s*dr[d] ][c + s*dc[d] ]!=ch) oka = 0;
      res |= oka;
    }
  }
  return res;
}
 
int encode(int a, int b, int c, int d, int e, int f, int g, int i) {
  int res = 0;
  res = res*7 + a;
  res = res*7 + b;
  res = res*7 + c;
  res = res*7 + d;
  res = res*7 + e;
  res = res*7 + f;
  res = res*7 + g;
  res = res*2 + i;
  return res;
}
 
int verify(int a, int b, int c, int d, int e, int f, int g, int moves) {
  int R = encode(a,b,c,d,e,f,g,moves);
  int &res = memo[R];
  if (res != -1) return res;
  res = 0;
 
  int H[7];
  H[0]=a; H[1]=b; H[2]=c; H[3]=d; H[4]=e; H[5]=f; H[6]=g;
  
  int empty = 1;
  REP(c,7) if (H[c]) empty = 0;
  if (empty) return res=1;
 
  char remove = (moves==0)?'O':'X';
  REP(c,7) if (H[c]) if (B[ 6-H[c] ][c]==remove) {
    H[c]--;
    res |= verify(H[0],H[1],H[2],H[3],H[4],H[5],H[6],1-moves);
    H[c]++;
  }
  return res;
}
 
class ConnectFour {
public:
  string judge(vector <string> board) {
    REP(i,2000000) memo[i]=-1;
    
    FOR(r,1,5) REP(c,7) if (board[r][c] == '.') if (board[r-1][c] != '.') 
      return "invalid";
    REP(r,6) REP(c,7) B[r][c] = board[r][c];
 
    VI hlbka(7,0);
    REP(c,7) {
      while (1) {
        if (hlbka[c]==6) break;
        if (board[ 5-hlbka[c] ][c] == '.') break; else hlbka[c]++;
      }
    }
 
    int empty = 1;
    REP(c,7) if (hlbka[c]) empty = 0;
    if (empty) return "first player moves";
 
    int countx = 0, counto = 0;
    REP(r,6) REP(c,7) if (B[r][c]=='X') countx++;
    REP(r,6) REP(c,7) if (B[r][c]=='O') counto++;
    if (countx != counto  &&  countx != counto+1) return "invalid";
    
    int tomove;
    if (countx == counto) tomove=0; else tomove=1;
    int whowon = 0;
    whowon += won('X');
    whowon += 2*won('O');
    if (whowon == 3) return "invalid";
    if (tomove==0 && whowon==1) return "invalid";
    if (tomove==1 && whowon==2) return "invalid";
    
    string res;
    char remove = (tomove==0)?'O':'X';
    int dobra = 0;
 
    REP(c,7) if (hlbka[c]) if (B[ 6-hlbka[c] ][c]==remove) {
      B[ 6-hlbka[c] ][c]='.';
      if (!won(remove)) {
        hlbka[c]--;
        dobra |= verify(hlbka[0],hlbka[1],hlbka[2],hlbka[3],hlbka[4],hlbka[5],hlbka[6],1-tomove);
        hlbka[c]++;
      }
      B[ 6-hlbka[c] ][c]=remove;
    }
 
    if (!dobra) return "invalid";
    if (whowon == 1) return "first player wins";
    if (whowon == 2) return "second player wins";
 
    int endgame = 1;
    REP(c,7) endgame &= (hlbka[c]==6);
    if (endgame) return "draw game";
    
    if (tomove == 0) return "first player moves";
    if (tomove == 1) return "second player moves"; 
    
    return "congrats, +50 points";
  }
 
 
};
// Unused code automatically removed, but the UCR still sucks
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/