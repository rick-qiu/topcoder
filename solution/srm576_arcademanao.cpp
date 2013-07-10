/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12504
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

class ArcadeManao {
public:
    int shortestLadder(vector<string> level, int coinRow, int coinColumn);
};

int ArcadeManao::shortestLadder(vector<string> level, int coinRow, int coinColumn) {
    int ret;
    return ret;
}


int test0() {
    vector<string> level = {"XXXX....", "...X.XXX", "XXX..X..", "......X.", "XXXXXXXX"};
    int coinRow = 2;
    int coinColumn = 4;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
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
    vector<string> level = {"XXXX", "...X", "XXXX"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
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
    vector<string> level = {"..X..", ".X.X.", "X...X", ".X.X.", "..X..", "XXXXX"};
    int coinRow = 1;
    int coinColumn = 3;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> level = {"X"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
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
    vector<string> level = {"XXXXXXXXXX", "...X......", "XXX.......", "X.....XXXX", "..XXXXX..X", ".........X", ".........X", "XXXXXXXXXX"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> level = {"XX.........XXXXXX", ".X.X..X.XXXXX..XX", "X..X.X..X.X.X..XX", ".X.XXXXX.........", ".X.XX.X.X.X.XX.XX", "X.X.XXXX.X.XX....", "XXX..XXX.XXX.X.X.", "XXX.XXXX..XX.X...", "....X.X...XX.XXXX", "X..X.X..XX...X...", "XXXXX.X....XX.XXX", "XXXXXX.XXX..XXXX.", "..X.X..X..X.X..X.", "...XXXXX..XX...X.", ".XXXXX..X.XXXXX..", "X..X..X..XX.XX..X", "XX.X.X...XXX..X..", "..XX....X.X..X.XX", "XXXX.....X.X.XX..", ".X.XXX...XX.XXXX.", "..XX.XXX....X.XXX", "XXXXXXXXXXXXXXXXX"};
    int coinRow = 17;
    int coinColumn = 4;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> level = {"XXX..XXXX.XX.X.X", "XX....XX.XXX...X", ".X.....XXXX..XXX", ".......X..X.X.XX", "..X...X..X..X...", "XXXX.XXX....X.X.", ".XXXXXXXX..X.XX.", "......XXX.....X.", "..XX.XXXX..XXXXX", "..XX...XX..X.X.X", "XX.X.X...XXXX.X.", "...XXX...X.X.X.X", "..X.X.X.X.X.....", "XXXX.XX..X...XXX", "XX.X.X..XXX..XXX", ".XX..X.XX.X..XXX", ".XXX.....XXX.X.X", "X.XX..X...X.XX.X", "XXX.....XXXX.XXX", "XXXXXX.X....X..X", ".X.X...X.XX...X.", "..XX.XXX..XXX...", ".XXX.XXX..X....X", "...X.XXX.X.X....", "XXXX..XX.XX..X..", ".X.XX...X.XX..XX", "XXX...XX..X.XXXX", ".X.XX...X.XX..X.", "..XXX.XXX.XXX..X", "..XXX..X.....XXX", ".......XXXXX..XX", "XX..X.X..X..XXX.", "..X.XXXXXXX.XXXX", "..XX.XX..XXXXXX.", "XX.XXX.X.XX.X...", ".XX.X..X.X...XXX", ".X...XXXXXX.....", "XXX..X...XXXX.X.", "X.X.XX.X.XXXX...", "..XXX.XXXX.X..XX", ".X.X...XXXXX.XX.", "XX.XXXX..X.X....", "..XX..XX.XX.X..X", ".XX.X..XX.XX.XX.", ".....X.X.X...XXX", "XX........XX...X", ".XXX..XXXX...XX.", "..XX..........X.", "XXXXXXXXXXXXXXXX"};
    int coinRow = 44;
    int coinColumn = 11;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> level = {"X.XXX.XX.X..XX..XXXXXXXX.X.X", "XX........XXXX..X..XXX...XX.", "X.XX.XXXX.XX.X.X....XXXX....", "..X.X..XX...XX......X.X....X", "..XXX.XXXX.XX.X.X.X.X..XX..X", "..XXXX..XX....XXX.XX.XX...XX", "..XX..XXXX..XXXX...XX...X...", "....X......X...X.X..XXXXXXXX", ".....X.XXX........X......X..", ".XX..X..X.XXXXXXXXX.X..X..XX", "XXX..X..X.XXX..XXXX...XXX...", ".XXX...XXX..XXX....XX.X..X.X", "...XXX.....XX..XXX.X..XX...X", ".XXX...XX..X...X..X..XX..XX.", ".X..X....X..XXXX.XX..XX.X..X", "XX..XXXX.X.XX.X..XXX........", "....X.X..XX...X.XXXX..XXX.XX", "XXX....XX.XXXX..X..X...XX.XX", "..X...X..XXXXXXX.XXXXX.X.XXX", ".X.X..XX.X......X.XX.X.X.X.X", "XXX...X......X...X...X.X..X.", ".X..XX.X.X.XXXXXX..X.X.X....", "XX.X..X...X..X..XX.......XXX", ".XXXX..X..X.XXX.X..XX..X.XXX", "X......XXXXX.XXX.XX.X.X.X...", "XX..X....X..XXX...X..X.XXX.X", ".X.XX..X.XX....X.X...XXX..X.", "XXX.XX....X...X.XXXXXXX....X", "XX....XX.XX..X..X.X.....XX..", "XXX..XX..XX.X.XX...X.XXXX.X.", "XX.XXXXX.X.XX..X...X.X..XXX.", "...XX...XX..XX..X......XXXXX", "XXX.X...X.XX.X..XXXXXX...XXX", "..X..X....XX......XX.X.X.XX.", "..XX.X.XXX....X...X.X....XXX", "XXXXX.X.X..X.X.XX.XXX.X...X.", "XXX.XXX.XX...XX..X...XX...X.", ".XXXX..X...XX..X.X..XX.X.X..", ".XX......X..X.XX..X..X..XX..", ".X.XXX.XX....XX.....X.X.X...", "X...XX.X...X.....X.XX.X.X.X.", "..X.XX......XXXX...X..XX..X.", "..X...X.X.XX..XX..X...X.XXX.", ".X.X..XX..XXXX.XX.....XXX.X.", ".XX.X.XXX....XXXX.....XX....", "..XX..X.XX..X.......X...XXXX", "X.XXX....X..X..X.XXX.XX..X..", ".X..X.XX...XX..XXX.X...XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 41;
    int coinColumn = 12;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
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
    vector<string> level = {".XXXX.X....XX.X.XX..XXXXX..X..X.XX.X........", "..X.XX..XX...X..XXX.X.XX..X..XXX.....X..XX.X", "..XX...X.XXXXX...X.......X..X...XX..XXX.X.X.", "XXXXXXX.....X.X...XX.XXXXX..X.XX.XXXX.X.....", "...X.XX..X..XXX.X..XXXXX.XXXXXX...X...X..XXX", ".X.XXX.XXXX....X....XX...XX..X.XXXXX.X.X.X..", "....X.XXXX...X..XXXXX..X.X.XXXXXXXXX.X..XX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 2;
    int coinColumn = 31;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> level = {".X.X.....", "X.X.XX.XX", "...X...X.", "XX..XXXXX", ".XXX..XXX", "XX.XXX...", "..XXXXX..", "....XXX..", "X.X......", ".X.X...X.", "..XX.XXXX", "X.XXX.X.X", ".XXXXXX..", ".XX.....X", "X.XXX...X", "..X...XXX", ".XXXX.XX.", "XXXXX.X.X", "...XXXXX.", "XX..XXXXX", "X.X.X.XX.", "XXXX....X", "..XXX.X.X", "X..X..XXX", "XXXXXXXX.", "X.XXXX.XX", ".XXX..XXX", "XX....X..", "...X....X", "......XX.", "..X.XX.X.", "XX......X", "XX.XXXX..", "X.X.XX.X.", "..XXXX.X.", "X.X..XX..", "X..X.X.X.", "XXXX...X.", ".XX..X.X.", ".X.X...XX", ".....X.X.", "XXXXX.XX.", "..X.XX.X.", ".XX.XXX.X", "X.X.X.X.X", "XX.XXXX..", "XX..XXX.X", ".X.X.XX..", "XXXXXXXXX"};
    int coinRow = 46;
    int coinColumn = 7;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
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
    vector<string> level = {"X.XXXX.X.XXXX..XX..X....XXXX.X", "..XX.....X..X..X.XX.XX...XXXX.", "X.X.XXX...XX.XX.XX.XXXXXX.XXXX", ".XX...X..X.X.XXX..X.XX..X..X..", "..X.XXXXX.XX.X...X....XXX.XXXX", "X.XX..XX..X...X.X.....X...XX..", ".XXXX.XXXX.XX.XXX....XXXXXXX..", "XXX..X.X.X.XXX..XXX...X.X.X.X.", "..X.XX.........XX..XX.X.....X.", "X.X.X..X.X.X..X..X.XXXX.X...XX", "....X.XX.XX..XX..X.XXXXX..XX.X", "XXXX...X.XXXXX...X...XXXX..X..", ".XXX...X.X..X.X.XXXX.XXXXX..XX", "XXXXX..X.XXX..X..XX.X...X.X..X", "XX...X..X.XX....XX.XX...X..XX.", "XX....X.X.XX..XX.X.XXXXX..X.XX", ".X....X...XXXX....XX..XXXXX..X", ".X.XXXX.X.XXX....XX...XX.....X", ".X..XX.X..XXXX.X..X.XX....X..X", "X...XXX.XX..XXXX.......XX...X.", "..X.X...X.X...X...XX.X.XXXXX..", "..XX......XX..X..X.X.X.......X", "..X..X.....XXXX...X.XXXX.XXXXX", ".XX.X.X....XXXX.X.X..X..X.X...", ".XX.X..XXX.XX..XXXXXXX..XX...X", "X.X...X.X..XX.X.X..XX.........", ".XX.XX.XX..XX.X...XX.X..XX....", "..XXX.X....XXX.XX..XXXX..X.XXX", ".XX...XX..XX....X.X.X...XX.XX.", "XX.X....X.X.X.XX.XX....XXX.XXX", "XXXXXX..XX.X.XX.X..X.X.X..XXX.", "X..X...X.X.XXX..X..X.X..XXXX.X", ".XXX..XXX...XXX.X..XX.....XX..", "XXX.X.X.X.X.X.XX.....X.X.XX.X.", ".....XXX..XX..X...X..XX.XXX.X.", "X...XX.XXXXX..X.X.X..X.....X..", "X....XXX.X...X.X.XXX...X.X.XX.", "X.XXX..X..X....XXX.XX..XX..XXX", "X.XXXX.......X.X.X.XXX...XXX..", "....X.XXX..XXX..X..XX..XX.X..X", ".XX.XXXXX....XXXX.X.X..XX.X...", "XXXX.X.XXX.XXX.X.XX....XX.XX.X", "XXXXXXX....X.XXXX..X.X.....X.X", "..X..X.XXX.X..XXXX.X..X.X..XX.", "XXX.......XX..X.XX.XX.XXXX.XX.", ".XXXX..XX..XXXX.XXXXX.XX.XXX.X", "...XXX..XXXX.X.XX..X.X.X.XX.X.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 29;
    int coinColumn = 25;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> level = {"..X.XXX.X", "X....X..X", "..X.XXXXX", ".X...XX.X", "X...X....", "..X.X..XX", "X.X..X..X", "XXXXXXXXX"};
    int coinRow = 8;
    int coinColumn = 4;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> level = {"X...X.XXX.XXX.X.X.X..XX..", "...X..X...XX...X...XXXXX.", ".X.XXXXXXXXXX.X..XXX.XXX.", "..X.XX..X..X....X..X..X..", ".XX.....X..XX..X.XXX.X...", "..XXX...X..XXX.XXXX.X....", "..X.....XX..X.XX.X..XXXX.", ".XX..XX.X..X.XX..X.X..X.X", "X..XXX.XX..XX.X.....XXX..", "XX.X...X.X.X.XXX.XX.X..XX", "XX.X.X.....XX.XXXXX.X..XX", "..XX...X.X.X...XXXXX....X", "XX.XX...X....XX..X..XX..X", "..X..XX.X..X.X.....XXXXX.", "XXXX.X.XX.XX.X.X.XX.X.XX.", ".XX.X....XXX.XXXX.XXXXX..", "XXXX..XX.X..XX....X...X..", "XXXXXXXXXXXXX....XX.X..XX", "....X.X.X..XXX.XXXXXX...X", ".X.X.X.XXX.XXX.X..X....XX", "X..X..XXX.XXXX.X.XXXXXX..", "....X...XXXX.XX..X..X.XX.", ".....XXX..XXXXX.XX.XXXXXX", "X..X.XX..X.X.X...X....XXX", "XX..X...X..X.XX.....XXX..", "X..X...XXX...X..X.XX.XX.X", "..X..X..X..X.X.X..X..XXX.", "..X.XX.X..XX.X.X...X....X", ".XXXXXXXX.XX....XX...X...", ".XX.XXX..XX...XXX.X.XXXXX", ".XX..X.X.X......X.X..X..X", ".......XXXXX....XXX..X..X", "X.XX...X...XX..XXX.....XX", "XX....XX.X.XX.XXX...XX...", "X.XXX..XXX...X.XXX.X.X.XX", ".XX..XXX..XXXXXX.XXXXXX.X", ".XX.X....XX..X....X..XXX.", "X...X.X..X.X..XX.X.X.X.XX", "..XX..XX...XXX.XXXX..X..X", ".X..XX..XX.X.XX..X.XX.XXX", "XX...XXXX.X.XX..XXX.XXX.X", "..X.X.X.XX..XX.X...XX.X..", "XX.XXXX.XXXX..XXX...XXX.X", "XX.XX.XX..XXX.XX...XXXX.X", "...X...X..X.XXXXX.X.XXXX.", "X...X.X.XX.....X..X...X..", "XXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 45;
    int coinColumn = 8;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> level = {".X....X.XX.X", "X.......XXXX", ".X..XX.X..XX", "XXXXXXXXXXXX"};
    int coinRow = 4;
    int coinColumn = 12;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
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
    vector<string> level = {"XX...X.....X.X.XX.XX..XXX.XX.X.XX..", "...X...XX.X..XXXXXX..XXXXXX..X.XX.X", "XXXX..XX.X.XXX.X...XX.....X.X..XXX.", ".......X.X..X..X..X.XXXXXXXXX.XX...", "X.XXXX....XX..X...X.XXXXX..XXXX....", ".X.X.X...X.XXX......XXXXX.X.X.X..X.", "X.XX.XXXXX.XX.XX...XXX..X..XXX.X.XX", "X.XXXX.XX..X..X.X..XXX...X.XX..XX.X", "X...XX.X.X.XX...X.X.XXXX..XXXX.X.X.", "..X.X..XXX...XXXX.....X.....X.XX...", ".......X..XX.X...XXX.X.X..XXX.X...X", "....XX.X...X.X.X.XXXXXX..XX.XXXXXXX", ".X.XXX......X....XX....XXXXX.X.XXX.", "XX......X.X.X...X..XX...XXXX.X..X..", "X..XXX....XX.X.X.XX..X...XXXX.X...X", "X.X.XXXX..XXX..X....X..X.XXX..XX..X", ".X.XXX.XX...XXX.X...XX.XXXX..X...XX", ".X.X.X....XX..XXX..X....XXX.X.X.X..", ".XXX...XXX.X..XX.XXXX.....XXX.XX..X", "X.XXXX..X..X.X......XX.X.X.XXX..X.X", "X...XXXXXXX.XXXX.XXX....X...X.X.XX.", "XXXX.....X...XXX...XX.X...X.X....XX", "...XX.XXXX.X.XXXX..X....XX.X.X.XXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 9;
    int coinColumn = 6;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> level = {".X.X.XX.XX.XX", "XX..XX.X.X...", "XX.X.XX...XXX", "..X.X...X.XX.", "X....X..XXXX.", ".XX....X....X", "X.XX....X..XX", "XXX.XX.X.XX.X", "XX.X..X..X..X", "X...XX.X.X...", "XX..XXXXXX..X", "XXXX.XX.X.X.X", "..XXXXXXXX..X", ".X.XXXX.XXXXX", "....XX.X..X.X", "X...XX.XXX..X", ".X..XX.....X.", "XXX..XXX.X..X", "XXX.XX.XXX..X", "X..X.X....XXX", "XX.X.X.XXXXXX", ".X..XXX.XXX..", "X.....XXX.XX.", "..X.XXXXXXXXX", "X..XX...X.XX.", ".X..XX.XX....", "XXXXXXXXXXXXX"};
    int coinRow = 22;
    int coinColumn = 2;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> level = {"XX.XXX..", "..X..X..", "..XX..X.", ".X.X....", "...XX..X", ".X..X..X", "..X.X...", ".X.....X", "X.X.....", "X.XXX...", "X..XXXX.", "XX.X...X", ".X.XX...", ".X..XX..", "XXX..X..", "..X..XXX", "XXX.XXXX", "X.X.XXXX", "...X..X.", "..X.XXX.", "X..XX.XX", "XX..XX.X", ".XX.XX.X", "XX...X.X", "...X....", "X.XXXXXX", "XXXXXXXX"};
    int coinRow = 24;
    int coinColumn = 2;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
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
    vector<string> level = {"XXX.X.XX..XX.X.X.XX", "XXXX..XX..XX.X.X.XX", ".X..X.X...XX..XXXXX", "XXX.X...X.X.X.XXXXX", ".X.X.X....X.X...XXX", "..X.....X.XX..X.X.X", "X.X.XXX..X.....XX..", "XXX.XXX...XX..X..X.", "..X...XXXXXXXX..X.X", ".XX...XXX.X....XX..", "....X.X..X...XXX...", ".X.XXX.X..XX..XX.XX", "XX.X....XX..XX...X.", ".XX.X....XXXX.XX..X", "XXXXX......X.......", "...X.X..XX....XX.XX", "XX..X.XXXX.X..XXXX.", ".X...X.X.X.....XX.X", ".XX.X.X.XXX..XX...X", "XXX.X.X.X.XXX.X.X..", "X.XXXX...XX.X.X..X.", "XXXXXXXXXXXXXXXXXXX"};
    int coinRow = 3;
    int coinColumn = 7;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> level = {"...XX..X.X......X...XX...XX...XXXXXX", "XX..X..X...X...X.XX.X...X.XXX.XXX...", "..X...X......XXX.XX..X.XXXX.X.X..X.X", "X.XX..X.X....XX...X....XXX..X.XXX...", "X....XX...XXXX.XXXXXX..X..X..X.XX.XX", "X.XX..XX.XX....XX..XX..XX...X.XX..XX", "XXX.XXXX.X...X.X.XX...XXX..XXX.XXXXX", "XXX....X.X.....X.XX..X.XXXX..X.XXX.X", "..X...XX..XXX......X.......X.XXX.XXX", "...XXX.XX..XXX...XX..XX.....X......X", ".XX.XX....X.....XX....X.XXX.X....X.X", "XXX....XXX.X.X.............XX.X..XXX", "X.X.XX..X.X..XXX.X.XXX.XX..XX.......", ".X..X....X.XXX..XX......XX.X.X..X.XX", ".X.XX.XX...XXX....XXX.X.X...XX.X.XX.", "..X.X.XXXX.....X...XXX....X.X..X.XX.", "X...XX....X..X.....XXXXXX..XX.X.....", "...XX.XXXX..X.XX.X.XXXXX...X..XXX..X", ".X...X..X...X..XXXXXX.XX..XX.XXXX.XX", "X.....XX.X....XXX...XXXX..X...X..X.X", "XXX....X..X.XXXXX..XX.XX.XX.X..XXX..", "X.XX...X...X..XX.XXX.XXXX..X........", "..X....XX..X...XX.X.X...X....X..X...", "XX..XX...XXXXX.....XX......XX...X.X.", "...XXX..XXX.X..XX..XX..X..X...X.X.X.", ".XXX..XXXX.X.....X...XXXXXX..XXXX...", ".X.XX..X.X..XX.XX..XXX....XXXX..XX.X", "XX.X.XXXX.X.....XX.X.XXXX.X.XXX...XX", ".XXXXXXX...XXX...XX..XXXXXX.XXXX.XX.", "X...X....XXXX.X....XX...XXXX......XX", "X.X.X..XX..X...X.X.X...XXXX.X.XXX...", "XXXX.X.....XXX.XXX...X.X.X..XXX.XX..", "X..XX.X.X....X.X..XXX..XXXX..XXX.X..", "XX..X....X...XX.XXXX....XX.XX.X..X.X", "..XXXX.X.XXXX.XX.XX.XX..XXXX...X..XX", "XXX...X.XX......X.X.XXX..X..XX..X...", ".XX.XXXXX.X.X.XX...X..X.X.X.X.X.XX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 37;
    int coinColumn = 27;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> level = {"X.X..X..X.X.XXX..X..X.", ".XX..X..XX....XX...XXX", "X..X.....XXX..XX...XXX", "XXX.X.X.X..X..X.X.X..X", ".XX.....XX....X.X..XX.", "X...XXX.X..X...XX..XXX", "...XXXX.X.X..XXXX..X.X", "X...X..X.X....XXXXX.XX", "..XXXXXX.XX...X.X..X.X", "...XXX..X...XX..X....X", "X.XX...XXX.XXX......X.", ".XX.X...XXXX..X.XXXXXX", "XXX...X.X..XX.X..XXXX.", "..XX..X..XXXX..XX.X.X.", ".XX..XX.X....X.X.XXXX.", "XXX..X...X.XXX.X.XXX..", "X..XX..XX.XXXX...X..X.", "XXXX..XX.XX.XX.X.X..X.", "X.XXXXX..XX.X.XX.XXXX.", "X.X.XX.XXX..XXX.X.XX..", ".X.XXXX.XXXX.XX.XXX.XX", "..X.X.X.X.XX.X....X.XX", "XXXX......X..XXX..X...", "....X.X..X...X..XX.X..", "XX...X.XXXX..X..XX.X..", "..XXXX.X.XXXXX.X..XXXX", ".X..XXX..XXXX.X....X..", "........XXX.XX..XX..X.", "XX.XXXX........XX.X...", "..XX.XX..XX.X..X...XX.", "..X.X....XXX..X....X..", "....X.XXXX.X.X..XX..X.", ".XXXX...XX..XX.X.X..X.", "..X.X.XXX.X...XX...X..", "...XXX...X..XX..XX.X..", "XXXXX.XXXXXXXX.X.X.X..", "...X.XXXX...X....XX...", "X.XX..XXX..X...X.XXX..", "XXX..X.XX.XX.XXX.XXXXX", "XX..X...X...XX.X.XXXXX", "X..XX.XXXX..XX...X.XX.", "X.X...XXXXX.XX.X.X.X..", "X.XX...X..X.XX.X...X..", "XX.XX.XX.X.X...XX..XX.", "X.XX.............XXXX.", "XXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 36;
    int coinColumn = 13;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> level = {"XXXXX.XXXXXXX.X..X.XX.XX.XX.XX.XX.X..X.", "..XX..XX.X...XXX.XX...XX.XX..XX..XX.XXX", "X.X....X.XXXXX...X.XXXX...X.X..XX...XXX", ".....X.X..X.X.XXX.XXXXX.X.X...XX.X.....", ".X.X.XX..X.X..XX..XXX..X....X.X.XX...X.", ".......X.XXX.....X..X.X.XXX..X...XXXX.X", ".X.....XXXX.XX.XXX...XXX..XX..XX.XXXX.X", "X....X.XXX..XX..XX.X.X...XX......X...XX", ".X..X.XXXX..X..X.....X....X...XX.X..X.X", "X.....X.X..XXXXX.XX..X....X..X.X.X...X.", "XXX.XX.XXXXX...XXX.XX.XXX..XXXX..XX.XXX", "X..XX.XX.XXXX..XX..XX.XX..X..X.XXXX.X.X", "X.X..XXX..X.X..XX..X..XX..X..X..X.XX..X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 8;
    int coinColumn = 22;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> level = {"XX.XXX", "X.XXXX", ".XX.X.", "X.XXX.", ".XX.XX", "XX.XXX", "X.XX.X", "X...XX", "XX.X..", "....XX", "XXX..X", "....XX", ".XX..X", ".XX.X.", "XX.XXX", "XXXXXX"};
    int coinRow = 2;
    int coinColumn = 5;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> level = {"XXXXX.XXX.XXX.XXX.", ".XXXX..X.XXXXX.X.X", "X.XXX.X.....XX..XX", "..X.XX..XX.XXXXX..", ".XXX...XXXXX.XXXX.", "XX..X..XXXXX..X..X", "XX.X..XXXX.....X..", "X.XX..XX.XX.X....X", "XXXXX.X.XXXX.X.XXX", "XXXXX..XXX...X.X..", "X.X.XXXXX.....X.X.", ".XXXX.X..X.XX....X", "XX.X..XXXXX.X..XX.", "XX.XXXXXXX..X.X.X.", "XX..X.X...X.X.....", "X.XXXXXXX.XX.X...X", "XX..XX.....X..X.XX", "....X.X..X.XX.....", "..XXX.X.X...X....X", ".XXXX.XX.X.XXXXXX.", ".X.X.X.XXXX..X....", ".X..XXXXX.X.....X.", "..X.X.....XX.XXX..", ".XX.XX.X..X..XX...", "XX.X.X..X.X....XXX", "...XX...XXXX..X..X", "XXXXXXXXXXXXXXXXXX"};
    int coinRow = 5;
    int coinColumn = 12;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> level = {"XX.X..XX..XXX.X.XX......XXX..XX.XXXXX.", ".X...X....XXX.X..XX.X.XXXXXXXX.X...X.X", "XXX.XX.XX....X.XXX.....X..X.X.XX.XX.XX", "X.XXX.X..XX.X..X..XXXX..XX.XXX.X..X...", "..XX.X..XX.XX..XXXX...XXX...X..XXXX...", ".X...X.X..XX...X.XX.X.XXX.X....XXX.XX.", "XX.X.XX......X.X.X...X.X.XXX..XXXX...X", "...XX.XX.X.....XX....X....X.X.XXX.XX.X", ".X.XX..X...XXX.XX.XX...X.XX..XX.X.XXX.", "..XXX....X.....XX.X...XXX.......X.....", "...XXXX.XXXXXX..XXX..XX.....X.X.X.XX..", "X.XX.X.XXXXXXX.XXX.XXX.XXX.....X..XXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 5;
    int coinColumn = 12;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> level = {".X.X...X.X....", ".XXX.X....X..X", ".....X.X..X.X.", "X.X..XX...XX..", ".XXXXX...XXX.X", ".XXX.XXXX.XX.X", "XX.X..X.XX..XX", "XXX..X..X.XX..", "X.XX....X...X.", "..X..X..XXXX.X", "XXXXXX..XXX.X.", "..XX.XXXX.X...", "XXXXX...X.X..X", "...X..XXXXXX.X", "XXX..XXX.X...X", "X...X.X.XXXX..", "....XXX.X....X", "....X.X.....XX", "X.X.XXX.XX..X.", ".XX.XX.XX.XXX.", "..X.XXXXX.....", "XX.X.X..XXXX.X", "..X.....X.XXX.", "....X..X.X.X.X", "X.X.X..X.XX.X.", "..X.XXX..X...X", "XXX.XXXX...X.X", ".XXXXXX...XXXX", "...X.XXXXXX...", ".XXXX...X..XX.", "X....XXXXX.X.X", "X.X..XX..X....", ".X.X.XXXX.XXXX", "......XXXXXX..", "X..X.XX.XX.X..", "X.XXXXXX.X.XXX", "...X.XX.XX.X..", "..X....X....X.", "X.X.XXX..XXX..", "XXX.X..X.X.XX.", ".XX.X.XXX..XXX", ".......XX..X.X", "X..XX...XX..XX", "XX.X.X...X..XX", "XXXXXXXXXXXXXX"};
    int coinRow = 40;
    int coinColumn = 2;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> level = {".....XXX...XX....X.X...X", "X...X...X..X...XX....X..", "...X.......X.XXX.....X..", "XX......X.X.X..X...X....", ".........X.XX......X.X..", "...........X...........X", "X.X..X.XX.XX...X.X......", "XX...X.......X..........", ".......X.X.X...X......X.", "...X.X.....XX..X...X..X.", ".X.....X..X.X......X...X", "X..X......X.X........X..", ".X.X.XX...X.XXX........X", ".X......X...X..X.X......", "X...X.XX...X....XXX....X", ".XX.XX.X.......XXX......", ".....X.XX..XX.X.X..X.X..", "...X.......X..X..XX..X..", ".......X..XX.X.....X....", ".............X......X...", "........X.....X....X..X.", "......X.XX..X........X..", ".X.X..X...X...X....X..XX", "......X...X.....X.....X.", ".X......................", "...X..X.....X...XXXX...X", "...X........X..X...X..X.", "XXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 6;
    int coinColumn = 12;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> level = {"....XX....X.X..................", "X......X..X.XX...X......XXX....", ".......X..X.....XX..X......X...", "...............X...............", "..XX....X.X..X..X.........X....", ".X..XX.....X..X.X......X.X...X.", "....XX.XX.X..X..X.X.....XX..XXX", "......X.XXX....XXX....X........", ".X.X...XX.X.........X.XX.X.X...", ".........X....X...X.........X.X", "..X......XXX......X.........X..", "......X.X.X.XX..X.....X.XX.....", ".....XX.X.......X...X.X...X..X.", "..XXX....X..X..X......X...X...X", "X...X..X.....X.....X.X.X.....XX", ".....X...............X......XX.", "X........X.....X.XX...X...X..X.", "X.X..........XX....X....X......", ".X...X...................X...X.", ".X.....X....X...X......X.X.X..X", "..........X......XX.X..........", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 7;
    int coinColumn = 17;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
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
    vector<string> level = {".X.XX.......X.....XX.......X....XX....X", ".XX.......X.........X....X......X...XX.", "......XXXX......X...X..XX..X...XXX.X...", "..............X.X...........X..XX......", ".......XX..X........X...XX.X......XX..X", "X.X...XX.X.XX.XXX..XX.X.......XX.....X.", "......X.......X.X....X..X...X.X........", "X.X..X..XX...X...X.....X..X..X....X....", ".X...X.....XX.............X....X.......", "X...........XX...X.X...X...........XXX.", "...X......X.....X..X....X.X.....X......", "......X.X..X.X.........X.X..X..X.......", ".....X..X......X...X.X.......X..XX.X...", ".X......X...X..........X......X.XX.X.X.", ".XXX...XX...X..X........XXX.......X....", ".X.XX..X..X..X........X....X...X....X..", "X...XX...X........X.XX..XX.....X.X.X...", "..XX.......X...XX...X.X..X....X......X.", "......X.XX......X.X...X..X.X.....X..X..", "X........XX.X.XX.......X.X...X......X..", "X..XX.X.....X..X......X.X.........X....", "X.X..XXX..X.....X.......X..X..X......X.", "...X...XXX..XX........X.X.X.X...XX.....", "X....X...X....XX...XX...X...X......X...", "..X............X.X..X..X...X..X....X...", "....X............X....X.........X.X...X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 5;
    int coinColumn = 12;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> level = {"X...X.X.X.XX..X..X.......", "X..X...............X.....", "XXX....X.XXX...XXX...XX..", "..X....X........X.......X", ".......X.................", "..X.....X..XX..X..X...X..", ".X...X.....X...X..X.X..X.", "..X....X.X.X......X....X.", "..X..........X.....X.XX..", "X.X...X....XXX.....XXX...", ".X.......XX..X.XX..X.....", "......X.XX....X..........", ".X..X..........X.X.......", ".......X.X.X.X....X......", "......X.X.X...X..........", ".XX......X..X.....X....XX", "X..........X..X..........", "......X....X..........X..", ".XX......X....X..X...X...", "XXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 10;
    int coinColumn = 20;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> level = {"..........X", "XXXXXXXXXXX"};
    int coinRow = 2;
    int coinColumn = 4;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> level = {"...X.X......X.X....X...X...........XX", "...............X..X..X...X..X....XX..", ".X..X.........X.X.....XX....XX.....XX", "X.....X....XX.X.X.X.XXXX.X....X..X...", "....X.X.XX..XXXX..X.........X.X......", "..XX......X..X...X..X.....X.X.XXX...X", "........X..X.......XX..X..XX...X..X..", "....X.X.XX....X............X.....X...", ".XX..XX...X..XX..........X.X...XX..X.", "XX.....X...XX....X....X...........X..", "........X...X.X.....X..X.X..XX.....X.", "....X..X.X......X.....X.....XXX..X..X", "X...X.X..XX...X......X..X...X.....X..", "....XX.X.......X.X...........X.X...X.", ".XX...X..X......XXXX.X.X....X....X.X.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 11;
    int coinColumn = 21;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
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
    vector<string> level = {"X.X.....X.X.X...X....X.X....", "X.X..X.....XX.....XX....XX..", "....X..XX..X................", "..X......XX..........X..X...", ".X.....X.X...XX..X..X...XXX.", "...X..X.XXX.X..X....X..X....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 1;
    int coinColumn = 22;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> level = {"........X..X.......XX.......X..........X.", "....XX.....X.....X.X.XX..XX.........X....", "X.X....X..X.....X...X.XXXX....XX.X..X....", "X...............X.....X..XX.....XXX......", ".XX.....X.X....XX..X........X.....X......", "....X........XX..X......X......X.....XX.X", "X.............XX....X.X......XX..........", "...........X.....X.......X..X.X.XX..XXX..", "............X.........XX......XX.X...X...", "X...XX..X................X......XXXX..X..", "....X.........X...X.....X..X.X..X.X.X....", ".........X...XX............X.XX......XX..", "X...X..X..X..........X.........X...XX....", "..XX..............X.X....X.X.X..XX....X..", ".X...X..X..X.......X..X...X...X....XX...X", "........XXX......X..X..X..X....X....XXX..", "X.........X...X...X..X.........X........X", "...X...X..X..XX.XX...X.XXX....X.XX...XX.X", "........XX.X.....XX.......XX...XX..X..X..", "X...X..........XXX.....X...X......X..XX.X", "....X.X...X.....XX.......XXX...X.......X.", "X.......XX....X.X...................X....", "..X.XXX......X.X.......X..X..X...X.X..XX.", "..X.....X......XX......XX..X...........X.", ".......X.................XXX.X..........X", ".X.......X.XX........X....X......X.......", "............X..............X...X.XX......", "X.....X...........................XX.X...", ".........X.X...................X.........", ".X....X...........X..X......XX.......X...", "X.......................X.X....XX..X...XX", "......................X..............XX..", "....X....X..X....XXX...XX....X...........", "...X.....X....X.......X.............XX.XX", ".X.XX..X....XX.........X.X.XX........X...", "...........X.....X....XX.........X...X...", "...X.....X............X......X.X.X.X.....", "..X...........X.X....X...X.X.......X.....", "...XXXX.X.XXX...XX.X...XX......X.XX...X.X", ".X....X...XX......X.X.XX......X......X..X", ".X.XX.X....XXX...............XX......X...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 18;
    int coinColumn = 41;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> level = {"...XXX.X..X..X....X.....", "XXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 2;
    int coinColumn = 10;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> level = {"..", ".X", "..", "..", "..", "..", "..", ".X", ".X", "XX", ".X", "..", "X.", ".X", ".X", ".X", "..", "..", "..", "X.", ".X", "X.", "..", "X.", "..", ".X", "..", "..", ".X", "..", "..", "..", ".X", "X.", "..", "..", "..", "X.", "..", "..", "..", ".X", "XX"};
    int coinRow = 22;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> level = {"..X.X...........XXX.X.X....", "...................X.X.X...", ".XX.....X.....X..X.....X...", "..X...X.....X....X...X.....", ".......X.X...XXX.X..X.XX..X", "XX......X..X....X.X...X....", "...XX.X.XX.XXX..X........X.", ".X....X...X.............XX.", "..X.XX....X............X...", "...X.X.X...............X...", "XXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 11;
    int coinColumn = 21;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> level = {"..X......XXX..XX.......X..X.......X..", "X.....X..X...............XX..........", "..X......X....X.......X.......X....X.", "X.........X....X.X...X..XX.........X.", "X.XX.X..X..X..X....X.........X....XX.", "X....XXXX.......X.X..X....XXX.....X..", "X..XX.XX..XXX.......X................", "X...X.....X.......X...X..X..X........", "..........XX...XX..XX.....X..........", "X.....XX.....X.....X.XX..............", ".....X..XX.X.....X....X.......XXX....", "..X...XX.X.XX..XX..X...........X.X...", "..X...XX....X.X.......X..X.X...X...XX", "...XX..........X.X....X..X.X....X..XX", ".X...........XXX....XX....XX....X.XX.", "..XX.XXXX.......X.XX.....XX...X.X..X.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 17;
    int coinColumn = 12;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> level = {"........X..XX...X.X..X.XX.X.....", "..X.........XX......X.X..X.....X", "......X..X...X...X..X...X...XX.X", "........X....X...X..............", ".......XXX.X..X..X..X....XX...XX", "X.X......XX..X...X........X....X", "..XXXX..........X..........X.X.X", "......X..........XX.X.X.........", ".....XX.X...X..........X..X.X..X", ".X.X..X.....XXXXXX........XX....", "...XX.X..X...X..........X..X.XXX", ".XXX.....X....X...............XX", ".X..XXX.X....XX..XX...X.XX.XX...", ".X....X......X..X.X.X........XX.", ".......X......XXX..........X...X", "..X................X....XX....X.", "..XX....XX..XX.....X..XX...X....", "..X...XX.X.........X.X.....X....", "..X.X.......X.X........XX.......", "...X...X................X.X...X.", "...X.X...X...X..X.XXXX....XX.X..", "XXXX...XX......X.X.....XX..XX..X", ".............X.X.X..XX..X.XX....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 18;
    int coinColumn = 20;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> level = {"X..X.X.X.X..X.........X....X.", "X..............X......X.X..X.", "........X..X....XX..X.X.....X", "..X........X..X..X...........", "X..XX..X..X..XX.X.XX....X....", ".XX.X..X..X.....X.XX.XX.X...X", "XXX..X.X.XX...X..XX..........", "...X.XX..XXX.X..X..X.X.......", ".X.X..........X.......X...X.X", "........X....X.X....X.....X.X", ".X.X......XX..X......XX.X...X", "...XX..X.X.......X.......X...", "......XX.X.X....X...........X", "..XX.....XX....X.X.X...XX....", "..X........X.....XXXX...XX.X.", "...XX..........X.....X.......", "X...X.X..........X.....XXX...", "....X..X...X....X............", ".........X..XXX...........X..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 7;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> level = {".........XX..X..X....XXX......", ".X........XX.......X......X...", "X........XXX..X...X...X.....X.", "....X.X.X.XXX.X.X...X.X...X.X.", "XXX.X.X....X...........X.XX...", "..X.....XXX..X..X..X.....X..X.", "X........XX..XX...XX...X......", "....XXX.X..X.X.X....X...X.X.X.", "...X.......X..X......X......XX", ".X...X........X.......X.......", ".....X.X..........XX..X..XXX..", ".......X........X.X...XXX.....", "..X.X.......X.......XX.X...XX.", "..X.XX....X.......XX.....XX...", "......X....X.XXX....X...XX.XX.", ".X....X.X.............XX....XX", "..XX.XX.......XX.X.....X..XX.X", "...XX..X.XX.XX..X.X.X.XX.....X", "....X.....X.XX..XXX.X..X.....X", ".......X......X...X...X..X..X.", ".....X....X..X......X...X.X...", ".XXX....X...X............X..X.", "XX.X.........X...........XX.X.", ".........X..X.X...XX..X...XXXX", "...XX..X..X...............XXXX", "X.........X.XXXXX...........X.", "......X...X.XX............X...", "X..X...X...X.....X.....X...XX.", "...X.........XX....X..X.X.XXXX", ".X..X........X..XX.....X...X..", "X.X.X.......XX..........X....X", "..X...XXX.XX.......X.....X.XX.", "X....X.X..X.X....X....X...X...", "........X....X......X.X...XX..", "X..X.........X...X...XX.......", "X.X............X...X...XXX.XX.", ".X..X.X.........XXX.X..X..X...", ".......X...X.X....X...........", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 13;
    int coinColumn = 29;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> level = {"X.XX..X.XX...X.......X........X.........", "....XXX..............X..XX......X.....XX", ".....X.X...X....X...X............X..X.XX", "X....X............X......X.....XXXX.X...", "..X.....X.......X.X...X.....X.X.........", ".X....X.....XXX...X...X....XXX.......X.X", ".....XX.X....X.X.....XX..X.X........X.X.", "..X.XX.............X...........XX.......", "...XX.X............X.X....X..X.....X....", "..X..X....X.X.X....X.........X..X.......", ".....XX.....X.X.XX.X...X.XX.XX......X...", "X.X....X....X..X....X..X....XX.X.......X", "....X.........XX.X....XX.......X.X...X.X", "..X.XX..X.....X.X.......XX..XX......X.X.", "X...........X......X...X.....X.XX.......", "....X.XXX.........X....X..X..X.X........", ".XX...X.XXX.X...X..X.XX...XX............", "X..X..X....X.........X...X.X.XX.X.X.....", "XX...........X..XX.......X.......X.....X", "XX..X....X...X.X..XX..X.X............X..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 17;
    int coinColumn = 27;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> level = {"...X...X.......XX.X...X.XX.X..X.XX...", ".X.X..X..XX...X..........X........X..", ".XX.X...XX....XX.....X.......X.......", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 1;
    int coinColumn = 23;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> level = {".......XX...X...X.X..X....X.................", "X....X.....X.......X..XX..X..X..X.XX...X....", "..X......X.X.....XX.....X...XX.........XX..X", "..X......X..XXXX..XX...XXX..X.......X.......", "X..XX..................XX.....XX....X...X...", "...X.X..XX.X.XX..X.X...X..X..............X.X", "..X...X..X.....X.....X..X..X..XX.....X...X..", "X...........X....X..X.X.X.X.....X.XX..XX.XX.", "X.....X..X......X..X.......X.....X.X.....X..", "........X...XX...XX..X..........X...X.......", "...X.......XXX....X........X......X......XX.", "X......X.X....X.....X..X.......X..........X.", ".XX.XX.X..X...XX.......X.XX.....X....X.X..X.", "......XX.......XX...........X.X.X...X....X..", "...X.......X.X...........X.X......X.....X..X", ".XX...X.X.....XX....XX..........X.....X..X..", "......X...XXX..X..X............XX.X..X......", ".......X..XX.......X.XX.....X....X.....X..X.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 19;
    int coinColumn = 15;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> level = {"XX.X...X..X......", ".X..X..X..X......", ".......X....X...X", ".XX...X..........", "....X.......XX.X.", "X.X.X...X.XX.....", "X..XX...X..X.X..X", ".....X...........", ".X..X...X.XXX....", "......XXXXX.X..XX", "......X......X.X.", "XXXXXXXXXXXXXXXXX"};
    int coinRow = 2;
    int coinColumn = 8;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> level = {"...X..X..X....X.XX....X.X.X..XX", "X.....X........X.....X...XX.X.X", "XX.XX.X...X.X.X.XXX.X.X..X...X.", "X...X........X.X..X.....X......", "X..X.......XX...XX..X..X.....XX", "X...XX.......X.....X..........X", ".X..X....XXXX......X.X.X...XX.X", "...........X.....XX..X...X..X.X", "......X.X.XX..X.....X..X.X..XX.", ".X..XXX.X.............X........", ".X.X.XXX...X...XX..X..X.X..XX..", ".X.X......X.X..X.......X......X", "X.X..XXX.XX..X..X...........X..", "...X......X......XX..XX.X.XX.X.", "..X.........XX......X.X..X.X...", "..X...X....X..X.X......X.X.....", "..XX.......X........X..X.....X.", "X...X.....X......X.X..X..X.....", ".....X.......X.....X.X...XXXX..", ".X.....X...X.......X.X.........", "....X..X.X.X..XXX...XX...XX..X.", "XX....X.......X...XX.......X...", "..X....X....X.......X.X..X.X..X", "..........X...X..XX.....X.XXX.X", "..XX.X....X.....XX.............", ".......XX....X..X.X...X.X.X.X..", "...X.X.......X..XX..X.....X....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 21;
    int coinColumn = 17;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> level = {"...X.....X.", "...........", "X......X...", "X.X........", "....X......", "......X....", "........X.X", "...........", "...........", "..........X", ".....X.X..X", ".X.X.......", "...........", "X.X........", "........X..", "......X....", "..X........", "...X.X....X", "...X.....X.", "....X....X.", "....X..X..X", "....X.X....", ".....X.X...", "XX.....X...", "......X....", "...........", ".....X....X", "...X.......", "...........", ".X....X....", "XXXXXXXXXXX"};
    int coinRow = 3;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> level = {"....................X...XX...X......", ".X..X....X..........X.X............X", "...........X....X..X.........X.X...X", "......XX...X.........X..............", "....................XXXX.X..........", ".........XX.X...X.....X.X.X...X...X.", ".............X........X.....X.......", "......X..X.X...X.X..............X...", "..........X....X.X........X.......X.", ".....X....X....X.XXX........X.......", "..........X...X.X...................", ".....X............XXX......X........", "..X...X..........................X..", "........X....X......XX.XX.X.........", "X......X.........XX.......X..X..X..X", "......X.X...X.....X...............X.", "....X.X...X.....X..X..........X.....", "X.....X....X..XX...........X...X....", "XX..........X....X.....X...X..X..XX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 10;
    int coinColumn = 16;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> level = {"...X.............X.X.X.", ".......X.....X........X", "............X.X..X.....", "...X....X.........X....", ".........X.....X...X...", "...X.X...X.............", "..X....X...............", "............X..X.X.....", "XXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 3;
    int coinColumn = 13;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> level = {"X....X.....", "........X..", "X..X.......", "X.X....X..X", "XXX........", ".........X.", "X.X..X.X...", "...X.......", "........X..", "...........", ".....XX....", ".X.........", "...........", "..X........", "...........", "..........X", ".X.........", "...X.......", "X...X.X....", "...........", "..XX..X....", "........X.X", "...X.......", ".....X.X...", "...X.X..X..", "....X......", "X..........", ".XX.X..X.X.", "....X.....X", "...........", "...........", "......XX...", "......X.X..", "........X..", "....X..X...", "X.X........", "XXXXXXXXXXX"};
    int coinRow = 29;
    int coinColumn = 11;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> level = {"...", "...", "...", ".X.", "X..", "X.X", "X..", "..X", "..X", "...", "...", "...", "...", "...", "...", "X..", "...", ".X.", "...", "XXX"};
    int coinRow = 5;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> level = {".XX......X..X.XX..X.......X...X....X...X..", "................................X.........", "..X..................X...................X", "..X...........X.....X............X..X.X...", "...............X....X..........X...X......", ".......X............XX......XX.X..X..XX...", ".....X...X.......XX.....X..X.....X.......X", "..............X..X.X.X....X.........X..XX.", ".X....X.X...........XX............X.......", "........X...X.X...X.X..X.X............X...", "....X....X..X......X.....................X", "......X......X.....X...X......XX.X.......X", "...XX..........X........X..X..X........X..", "..........XX......X.......XX......X.......", ".X..........X...X........X..X....X.....X.X", "...XX.....................XX......XX.XX...", "..X........X.......X....X............X....", ".....XX.......X......X.........X..X...X...", ".......X....XX..X....X........X....X......", "...X........X...X.X.X...X................X", "...................X...............XX....X", ".....XX........................X..........", "..........X.X.......X.....................", "........X......XX.......................X.", "....X.XX.XX..X....X....XX...............X.", "..X...........X....XXX...X................", "..X....X..X.....X..............X....X.X..X", "XX.................X..X.....XX...X........", "..X..XX...X......X....XX..................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 30;
    int coinColumn = 4;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> level = {"....X..X.....XX...........X...XX......X.X....", "....X.....XX......X.......X.................X", "....................................X........", "X.X.......X.........XX..X.X.......X..X.......", ".........X...X.X....X..........X.X...........", "........X..................X.................", "..X........X.....X.....................XX...X", "...XX....X..........X............X........X..", "....X...XX...X.......X.......X...X....XX.X.X.", ".X...X......X.X.X.X.......X...X.X..X...XX....", ".X......X..X.........XX....X........X.....X..", "........X....................................", "X..X................X.X.....X..X..X........X.", ".............X........................XXX....", "........X.......X....X.X..X....XX............", "....X................XX......X...XX..X..X....", "..................X...X...X.X........X....XX.", "...........XX...........X....X...XX.........X", ".....X............................X.X..X...X.", "....XX..X.........X..............X...........", "................X........X....X..X....X......", "..X....XXX...XX...X....X...XX....X..X........", "X..........X...X.......X.X......X......X.X...", ".X..XX..........X....X......XX......X.X......", "........X.....................X..............", "...X.......X........X...........X.....XX....X", "..........X......X..X...X....................", "..........XX..XX..X.X.X........XX............", "...X....X...X..X..X...X....X........X.....X..", "......................X..........X....X.XX...", "....X......X..X.X....X.X.......X......X......", "X.....X......XX.........X.X....X.............", ".X....X...X...........X...X.X.............X..", ".........XX...XX....X.......................X", "......X........X.....X...X.X............X....", ".X..........X...X......X.......X.X....X..X...", "...........................X..............X..", ".X........................XX.....X..........X", "...X......X........X.............X.....X...X.", "XX...................X.....X..........X.X....", "X.......XX.....X..X..................X.X...X.", ".....X......X......X..X.......X..X........X.X", "....X...........X....X..X....X.X.........X..X", "..X......X...........................X......X", ".........X...X....X..X.X....X.....X....X.X.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 43;
    int coinColumn = 45;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> level = {"..X.................X....X...........", ".X.................X........X........", "....X................X.X.XX.XX.......", "......X.............................X", ".X.....X......X.........X........X...", "X.....X.......X......................", "...XXX..........XX.X.X..X...X........", "X.....X..........X...................", ".........X....X.......XX.X......X....", "..X..............................X...", ".X.......X............XX...X.........", "..........X.....................X....", "....X.X.....XX.............X..X..X.X.", "XXX............XXX.......X..X.X...X..", ".X.................X.....X.......X...", "...X......................X.X......X.", ".................X..........X..X.....", "..X.......X.X.X............X..X.....X", ".X..X...X..X.....X........X..X....X..", ".......X...................X.X.....X.", "...X.......................X.X......X", "...X.....X.....X......X...........X..", "......X.......X...X.....X..X...XX....", "X.....................XX..X..........", "...X...........X.........X.......X.X.", ".....X....XX.........................", "....X....X.............XX............", "....X...................X.....XX.....", "..X..X.....X..X.....X.X...X..........", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 22;
    int coinColumn = 4;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> level = {"..X..X.....XX......X...X..........", ".X.X..XXXX.............X.......X..", ".........X...X...X.X.........X...X", "X..X............X.X...X.....X...X.", ".X................X.X.....XX......", "...X...........X...........X......", ".X.........X...........X.X.X......", "..X..X.....X.......X.X............", ".XX..........X........XX..........", ".X...X.XX.....X.X...............X.", "........X...X..X.XX.X.X.X..XX...X.", "X...............X...............X.", "..........X.......X..............X", "XX..XX..........X.X..XX...X.......", ".X....XX.X...XX..........X........", "............XXX..X................", "........X..XX..X..XX.........X.X..", "...X..X.X.................X......X", "......X..........X..X........X....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 16;
    int coinColumn = 18;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> level = {"....X....X.XX.X...X.", ".....X.X...X.....X..", ".........X........X.", ".X..........X.......", ".........X..........", "X....X...........X..", "..X...X...........XX", "...X......X......X..", "....X...X...........", "...........X.X..XX..", "....X..X............", "...X......X.........", "................X...", ".....X.............X", ".........XX.....X...", "....X....X.....XXX..", ".......XXX.......X..", ".............XX.....", "..X.X....X...X...X..", "..........X.XX..X...", "XX....X..X..X.....X.", "X......X.X...X......", "..XX.X..XX....X..XX.", ".....X.........XX...", "....XX.X.....X..X...", "...X...X....X.......", "............X......X", "......X....X........", "X.X....X.X.X......X.", ".X.............X....", ".X...X.X..X..X.X....", ".X...............X..", ".X.X....X.......X...", ".X.........X........", ".............X.....X", "....X.........X.....", ".........X.......X..", ".XX....XX........X..", "..X............X...X", ".......X...........X", "X.............X.....", "X..X................", ".............X..X...", "...XX....X.....X....", "......X.....X.......", "......X.............", "XXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 16;
    int coinColumn = 17;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> level = {"..........XX.....X...........X........X...X......", "...............X...X.X.......X..X.........X......", ".............XX..X....X.....X..X...X...X.........", "...............................X.....X.....X..X.X", "...X.X....X...........X...XX..............X......", ".....X........X.........X..........X....X.X......", "X...............X....X...XX..X.X..X.............X", "X.X...X....................XXX....X......X.X.....", "..................X..X.......X.......XX..X..X...X", "......X....X.................X....X...........X..", "......X.X...XXX.........X......X..X..........X.X.", "......................XX...X.X......X.X..X.X.....", "....X......X......XX..........X...X.....X........", "............XX.......X....XX..X...X.............X", ".............X.....X.......X.X...................", "............X....XX.....................XX.......", "....X................X.X.X.X.X.........X....XX...", "........................X...X...........X........", "...X.X...X.X.XX.X....X...X......X...X......XX.X.X", "X............XX..........X...X......XXX....X.....", "...X....X....X.......X.....X............X.X.....X", "..X.............X.XX......X.....................X", "...X.X.X..X.X...X..X....XX.....X..XX....X..X..X..", ".....X....X..........XX...................X......", "...XXX.X..X.....X.X....X.X..............X...XX...", ".X.......X..X..X...X...X.............X......X...X", "..............X.X...X...........X......X.........", ".X.........X..X........X...X.............X...X...", "X...X...XX.........X..X.........X......X.........", "X.XX..............................X....X.........", ".......X.X....X.......X.....X............X...XX..", "........X.X.....X..........X.................XX..", "..X.......XX.....X..X.XX.......X........X.......X", ".................X.........X..X.X..X.............", "....X........X..X..X...X..X....X........X....X...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 5;
    int coinColumn = 43;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> level = {".XX.........X...............", ".......X...X......X.........", "....X.....X........X........", "....X........X.X...X..X.....", "..X...X....XX...X......X....", "..X........XX.....X.......XX", ".....X.........X........X...", "................X.X.......X.", "X.....X....X................", ".....XX....X.......X..X...X.", "......X..........X.X.......X", "..X...X.X.......X.X..X......", "....X...XX...X..............", "..XX..XX.....X.....X...X....", "....X...X...........X.......", "...X...X.....X.X............", ".....................X......", "X.....................X....X", "..X..X...X......X.....X.....", "XX..............X..X.XX.X...", ".....X.........X....X..X....", "........X......X....X.......", ".................X..........", ".....X..........X......X....", "....X....X..XX..X...........", ".....X............X.........", "...........X......X.XX.....X", "......X.X...........X.......", ".X.....X.XX.......X......X.X", "...X..XX..............X....X", "......X..........X..........", "......X..............X......", "..X..X....XX..X...X........X", ".X.............X......X.....", "X.....X......X.............X", "...........X......X.X.......", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 16;
    int coinColumn = 4;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> level = {"......X..........X......XX.....X..X...............", ".X....X....................X...........X..XXXX....", "..........XX...X.........X..X.....X...............", "...X.X.X.X.....X....X........X...X................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 5;
    int coinColumn = 45;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
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
    vector<string> level = {"....X..X", "XXXXXXXX"};
    int coinRow = 2;
    int coinColumn = 5;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
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
    vector<string> level = {"....XX..X....X.X.XX........X.......X...", ".....X.XX..........X...............XX..", ".....XX..XX........X......X.........X..", "X....X...XX.........X...X....X.X.......", "....X.X.X...X..X......X.X.X........X.X.", "...X..X.............X.................X", ".X...X........X........X...........XX..", "X...............X...XX......X..XX....XX", ".X...X.........X.X..........X..........", "...XX.X..X..........X................X.", ".X.......X.X............X...XX.........", "...X.X..XX...X......X.....X...XX..XX...", "..XX.X..X.........................XX...", "..X...X.X......X.X..X......X....X....X.", ".....X....X.........X..........XX...X..", "X........XX..............X......X...XX.", ".....X...............X.................", ".X.......X....X.....X.XX........X...X..", "X..............X......X................", "..XX..X......X..........X...X..X......X", "............X...X.........X....X.......", "......X........XX.....X.....X...X......", ".........X.....X.......X..X......X.....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 8;
    int coinColumn = 32;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> level = {"..........X....X.X..X........X.", "......X...X....X.......X.......", "X.....X.X.............X.X.....X", ".........X..X.........X..X.....", ".......X.......X.X.....X.......", "...X.X........X..............X.", "X..X........XX........XX.......", ".X........X..X......X....XXXX..", ".X............X..X.....X.......", "XX....X.XX.....X.....X....X.X..", "..X.....X................X.....", "X..X........X..........X.X..X..", "X.........X.....X....X..X....X.", "X...X......XX..................", ".X............X....X.X.........", ".....X.X....X...XX.....X...XX..", "......X.XX....X................", "..X............................", ".......X.................X.....", "..............X.....X..........", ".....X..............X..........", "...XX....X........XX...........", "............XX.......XXX....X..", ".........................X...X.", ".......X......................X", "XXXXXX.......X.................", "...X..........X....XXXXX.X.....", "XX.X..X.X.X..X.................", "...X.............X........X.X..", "XX.....X.............XX........", ".X..........XX....X..X......XX.", ".X................X....X.X.....", ".X.X...XXX.......X...X.........", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 10;
    int coinColumn = 27;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> level = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> level = {"...", "...", "...", "...", "...", "...", ".XX", "XXX"};
    int coinRow = 8;
    int coinColumn = 2;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> level = {".........X....XX", "...X.X....X.....", ".X.X..XX..X.....", "....X.....X.X...", ".........X...X.X", "....X...X.......", "..X.......X.....", "................", "...X.X........X.", "X......X..X.....", ".X...........X..", "................", ".XX...X.........", "............X...", "...X......X.....", ".X..............", "X..............X", "..X.X....X....XX", "..X....X.X..X...", "...............X", "..X....X.XX.....", "..........X.XX..", ".X....X.........", ".X....X..X......", ".......X......X.", "X..X............", "....XXX.......X.", "........X.......", ".X....X.........", ".........X......", ".........XXXX.X.", "...X............", ".....X..XXX.....", "..X.............", "..........X.....", "...X.X..........", "...X....X.......", "................", "...........X....", ".X..............", "..........X.....", ".....XX.........", ".......X...X....", "......XX...X....", "....X.X.........", "..........X.....", "...X............", "..............X.", ".........X......", "XXXXXXXXXXXXXXXX"};
    int coinRow = 18;
    int coinColumn = 15;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> level = {"X.....X.....", "......X.....", "X...........", "..X.X..X....", ".X..........", ".X..........", "...X.X......", "..........X.", "X....X......", "XXXXXXXXXXXX"};
    int coinRow = 10;
    int coinColumn = 10;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> level = {".X.....X.XXX..X....X.X.X.........X.X...XX....X....", "....XXX.X.....X.X.......X.X.....XX.X.XX.....X...X.", ".X......X...XX...X....XX..XXX.....X.X......XXX....", "........X..X..X......X...X.......X.XXX.X.XX....X..", "X..X........X...........XX.......X........X..X...X", "XXXXXXX.XX...XXX.........X.X...X.X.......X...X....", ".............XX...X....XX.XX........X.X.........X.", "X.......XX......X........X..X...X....XXX........XX", "..X...X.....XXX..X...X....X..XXX..X............X.X", ".......XX.X....XX.X..X..X....XX.......X..X........", ".X....X..X.......X....X.X.XX..X.XX..XXXX.X..XX...X", "..X...X......X.X..X.XX.....XXX.....X.......XX...XX", "....X.X.X.......X.X.X.........X........X...XXX....", ".....X......XX...X.XX.X.X..XX..XX.....X.X..X......", "...XXX..XX.X.X.X.X.X........X........X....XX.X..X.", "...X.X.........X.X.XXXX..X....XX......X...........", ".X...XXXX.X....X....X..X......X...X..X..X....XX...", "..X.X.............X...X..X..........XXX..X.X.X....", "....XX.........X..X...XX....X.XX...X..XXX...XX..X.", ".X...X.X....X..XX....X.X.X...X...X.X.X.X..X......X", ".......XXX.XX..X..X....X...X...........X.....XX...", "X......XXXX...X........XXX.........X..X..X..X...X.", "XX....XX.X...X......X..XX......X....X.....X.X.X...", "....X..........XX.......X........X.X..X.X...X.....", "..X......X..........XX.X.X.XX.X.XX..X.XX..XXXX.XX.", "XXX...X............XXX.X........X...X....X...XX...", ".X..X...X......X..XX..........X..X....X..X..XX.XX.", "....X....XX..XX...X......X.XX........XX....X....XX", "..X...XXX..X..XXXX..X...X...XX...X...X..X..X......", "............X..........X...XX.....X..XX.......X...", "....X......X.XX.X...X....X......XX..X..X.....X...X", "X....X..X...X.X.......X...X.......X..X....X..X....", "X.X...X...X..........XX..X....X....X.X...........X", "......X.X.......X.X.....X........X..X.X.........XX", "X..X.....X.X.X....X.X....X...X.X.....X..X.......X.", "..XX....X.....X.XX..X......X....X..X.XX.X......X.X", "..X........XXX...XX...XX......X.X..X.X..XXX.X.X...", "....X.....X......XX.....XX.....X.....X.........X..", "X......XX.........X...XX...X..X.........X..X...X..", "..X...X...X.X...X......X.X...XX....XX.......XX.X..", "..X...X.X.X...X.....X...X..X...XX...............X.", "X.X........X.XX..X.......X..X.....X....X.....XX..X", ".X..X...X.XX.X....X.XXX.......X.X..X.....X..X.X...", "...XX.....XX...XX....X..X......XXXX.......X.X.....", "......XX.XX............X....X.....X.X.XX...X.X....", "X..X.......XX....X...X.X.....XX......XX....X..X...", "X..X........X....X..X..X.XX.X...X......X.X........", "..X...XX..XX...X..........X......X.XX....X..X.....", ".X.XXXX.....X.......X....X.....XXXX.......XX.XXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 4;
    int coinColumn = 34;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> level = {".X...XX.XX....X...........X............X.......X..", ".......X....X....X....X...XX..X...X...XX....X.....", "...X...XX.....XXXX..........X...........X..X.X....", ".....X...X.......X...X.X........XX....XX......X...", "X..............X..X..X.X....X....XX....X.X.X.....X", "X.X..........X..X...XX.X.X.XX...X..........X...X..", ".X.....XX.X...XX.X...X..X....X.XX........X..XX....", "........X.X...X....X....X....X..XX.X.X.XXX........", "XX.XX...........XX.....X....X.X.X.........X.......", "............X..X.XX....X..XX.X.....X...........X..", ".X................X.......X....X.X.X.......X.X.X..", ".......X...XX..X..XX.X.......X.......X..X...X.XX..", "....XX.X..XXXXX..........XX........XX...X....X....", "XX...X....XX.X..X..X.X.X.....X....X.XX...X.......X", "X....X.....X..XX..X.....X...............X......X..", "....XXXXX..X.XX....X.XXXX..X.X..X..X.XX..........X", "..X.......XX...........X.......XX.....XXX.X.......", ".XX..X.........X......XX.......X..................", "X.X...X....X...........X...X..X.X....XX...X....XXX", ".......XX............X...X..X....XX....X..X..XXX.X", "......X.X......X...X.......XXX.XX.......X....X....", "X...X..X....X...X..X....X......XX....X.....X...X..", "..X.X......XX..X.....XXX....X.....X......X.XX.....", ".X.......XX....X...XX..X.....X....X...X.XXXX......", "......X..X.X..XXX.....X..XX........XX..XX....X....", "XXX.X...X.X..X...X..X.X...X.XX.X.........X.....XXX", "...X.X.....X.XXX.X..X.........X.......X.....X.....", "..X..X........X......X.X..XX...X..........X...XX.X", "X......XX...........X.....X.....X..X.......XXX....", ".....X..X...............XX.X.......XX...X...X....X", "...XX.X..X.XX...X...XX...X..XX.......XXX......X.X.", "...X....XX..X....XX.......X....X..............X.X.", "......XX.X...X.....X.............X.X.........XX.XX", "..XX............XX..X........X.X..XX...XX...X.X.XX", ".X..X......X..XX...........X.X....X.....X..X....X.", ".......XX.X..X.......X..XX.X...XX...X....XX.....X.", "X.X....XX.X..XX.....XX......XX.X.X....XX.....XXX..", ".X...X.X......X............X..X.X......X.XX..X..XX", ".X..............X...X....X........X....X....X.X...", "........X........X....XX...XX.XX.X.......X...XX..X", ".XX.XX.X.XX....X.XX.X.XXX.........X.X...XXX.X.....", "...X..XX...XXX..X.X........X.X..X.XX..X...X...X..X", "............X.XX.X.....X.X......X.X....X..........", ".X.XX.....X.....XXX.........XX..XX.......X...XX...", "X....X...X.....X.X...............X.X.X.....X....X.", ".......XXX..X.........X..X..X.X....X....XX.X......", "X.XX...X.XX.......X.....XX.X...X.....X....X..X.X..", "X........XX....X...X............X......X.XXX...X..", "XX....X.........X.......X..XX.XX..X.X..XX.X.XX..XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 46;
    int coinColumn = 9;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> level = {".X..X..XX...X.X........X.........XXX.....XX.X....X", ".X.X....X..X.X...X.........X..XXXX...XXX.....X....", "..X...XX........X..X.XX..X...XX.X.X.X.XX.X.......X", "...X...XX................XX.X......X........XX.X..", "XXX.X...........X........X.XX...........XX..XX..X.", "....X......XX....X...XX.........X..XXXX......XXX..", "X.X.X..X.........X..X..X......X..X....X....XX.....", ".X....X....X...XX.....XXX.....X.X......XX.X...X...", "XX......XX..XX...X...X........X.....X..X.....X.X..", ".....X...XXX.X....X........X...X.X.X.X.X.X......X.", "...X..X.....XXX.X..X.XX........X.X....X...X...XX.X", ".XXX..X..XXX......X.XX...X...............X....X..X", "...X.X...X.....X..XXX....X.X...X..XX..X...........", ".........X.XX......X.X.....XXX.X........X....X...X", "X......X..X.............X..X..X....X.......X..X...", "XX....X..............X.X........X...X.X..X.XX..X..", "XX.XX...X...XXX......X.......X..X.................", "XX....XX.X..X...X.XX......XXX...........X.........", "X.XX..X.X...X..X....X....X...XX....X..X....X...X.X", "............X....X.......X.X..........X..XX.X...X.", ".....X..X...X.X.X..X..XX.....X..X...X..........X..", "...XX..........X...X.......XXX...X.....XX.X...X...", ".....XX............XX.X....XX.....X.....XXXX.....X", "...X..X.X.X...X...X..X..........X..XX.X......XX.X.", "......X.XX..XXXX..........XX...X....X........X...X", "....X.......X...X....X....XX....X.X....XX.....X...", ".X.....X.XXX.X..................XX..X.X......X....", "X...XXX.........X......XX.....X..X..XX....XX...XXX", "..X..X..XX.....X.XX....X....XX....X...X...XX......", "............X.XX.X.X........X....XXX.....X....X...", "....XX.X....XXX.X............X..X....X.X......X...", "X.X......X.........X.X.......X...XXX..X...X.X.X.X.", "X.X....XX.X..X.....X..XXX..X..X.X.......X....XX...", "XXX.X.X..X...X.X......X...X........X..X.X...X.X...", ".X...XX.XX.......................XX...X...X.......", ".....X.X....X..X.XX.XX..X......X.......X.........X", ".X.X......X......X.....X......XX.X..........X..X..", "..XX...X............XX.X....X.X....X...X.X.XX.....", ".....X.X..XX.X..............X.....XXX.....X.X.....", ".XX..X...............X....X.XX.X.....X....XX...X..", "...X...X....XXXX...XX.X...X.X........X........XX..", "...X....X...X....X...X.X..X.X.X.XX...XXX..X.XX..X.", ".X..........XX.X...X..X..XX...........X.X..X..X...", "...X........X.....X.XX...XXXX......X.....X..X..XX.", "....XXX...........X.....X........X.X.....X.X......", "X.X.........X...X...X..X...XX......X.........X....", ".X.....X....X.X.....................XX.X..XX...X..", ".X.XX......X..X............X......X...XXX.X......X", "..X........X.......X........XX......X............X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 31;
    int coinColumn = 13;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> level = {"..XX.X....X......X....XXXX...XX.XXXX.X......X.....", "......XX.........X.....X..X...X....X........XX....", "...XX...X...XX..............X..XXX....X.X.......XX", "X...............X.....X....X....X....X.........X.X", "..X.X.XX.X..X...XX.X.X..X....X..X............X.XX.", "X..X..............XXX.....X..............X...X.X..", "....X.XX....X...XXX.X..X..X..XXX..X...X.....X...X.", "XX.........X.X.....................X...X....XXX...", "X.X............................X....X.............", "..XX.X..XX.....X.XX....XX.................X.....X.", ".....X...XXXX.X....X..........X.X..XX..X........XX", "...XX...........X...........X....X.XX....XX..X...X", "X................X..X..........X.XX..XX...X.X.X.X.", "..XX..X..........XX.....X..X.........X.X.......XXX", "X........XX....X...X..X..X....X..............X....", ".X............X.......X.X..X...X.X..X.X....X...X..", "....X..X.....X.X..X...X....X..X.XX...XX..........X", "....X...X...X....X....X.......XXX..X.X.X........X.", ".X....XXX.X...X.X.....X.X..XX.XX..X..XXX.X.XXX....", "X..XX.X.X.....X..XX..X.X.X.X.........X.X.X..X...X.", "....X.........X....X....X.X......X..XX........X.X.", ".X.X.XX.............X.........X.........X.X.......", ".XXX.X....X.X..XX..XXX....X.....X.........X.....XX", "...X....XX..X..X.X..X....XX...XX........X.........", "X.......XX....X..X.....X.X.......X...X...XXX.X....", ".X.XX.XX............X.X.....X.....X.XXX..X...X.X..", ".X....X..X..X..X....XXX....X....XX.......X.XXXXX..", ".X........X...X.X..............XX..XX.......X.....", ".X........X.X.....X.....X........X.X......X.....X.", ".X....XX......X.X...X.....X.........X.X...X.......", "X..XX...X.X...X............X....X..X....XX........", "..X....X.X.X..X............X.X.X.X.XX.X.XX...X....", ".........XX.....X....X....X.X....X.....X....X.....", "..XX..XXX...X.X...X..XXX.X...X.........X.X..X.....", ".XXX.XX.X....X....X..X....X.........X...X....X....", "XXX...X.....X...XX.X.........X.X......X.....X...X.", "X.X...X..X.........X....X..X....XX.X....XX.......X", "X...........X...............X...X..XXX...X.X..X...", ".............X.X.X....X............X.......X.X...X", "...XXX...X....XX.X.X..X............X.X.X.XX...X..X", "XXXXX..XX....X....XXX......X.X.XX.XXX.............", "XX.......X.X.......X.X.X...XX...X..X.X........X...", "X.X.X..X...X.X...X.X....XX..X....X.....X.XX.X..X.X", "X................XXX.XX....X...XX.......X...X.....", "..XX........XX...X.X.X....X...X...X.X....X.X...X..", "...XX........X.XX....X....X....X.X.....XX..X.....X", ".XX..XX....XX.XX..X....X.......X.X.XXX...X........", "......X....X....XXXX...X...XX....XX.X.X.....X.X.X.", ".X...X.XX.....X......X...X....X........X.XXX......", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 37;
    int coinColumn = 25;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> level = {"..X.....X..X...X..XX....XX....X.........X.....X...", "..X.X.X...X.....X..........X..........X......X...X", "..X............X.X........X.....X...X......X.XX...", "X.XX..X.....XX.X.X..X.X...XX.....X.....X..X.......", ".X..............XXXX....XX......X....X........XX..", "...XX...XX...............X....XX...X...X..X.......", ".X........X....X....X...X.XX.....X.X.....X....XX..", "....X...X.......X....X..X...X.X.......X........X..", ".X..X...X......XX....X.....X...X....XX...X...X....", "...X....X.X.X..X.X..X....X.X...............X.XXX..", "....X.X.X.......X...........X.X......X......X.....", "XXXX.......X...X..X.XX.X...........X..XX..........", ".X..X......XX...X......X....X....X...X...X......X.", "X.XX.X....XX.X....X...X......XX....X...X.X.....X.X", "X.X..XX....X........X...X............X...XX.......", ".......X.X....X.X..........X.XX....X.X..X...X.....", "......XXX........X.X..X....X.XXX....X....X.X......", "X.X.X..X.X.......X.....XXX......XX...............X", ".X.X..XX.....XX..X.....X......X.X....XX....X.X..XX", "X...X..X.X.X...X......X..X....XX..X.X.X....X.....X", ".X.....XX.X.......X..X.X...X..XX...X.....X......X.", "XX.....X..X...X.X...XX...X.....XXX....XX...XX.....", "..X..............X....X...X.................X..X..", "....X.X.....X.....XX.X.X.XXX..X..........X.X.XX...", "X...X...X...XX.......XX.XX.....X..........XX...XXX", "...............X....X...X.............X....XX...XX", ".X...X..........XXX...X.X...X..X...........X....X.", ".X.....XX.X...X.X.X....X.XX...X......X........X...", "X....XX......XX.X.......X..........XX....X.X......", "...XX......X.X............X......X.X.X..XX.....X..", "..X..X...X...........X...X..X........XXXXX..XX..X.", "..X....XX.X......XX............X.X..X.....X....X..", ".....X.XX.X..............XX.......XXXX.X..........", ".............X....X.......XX...XX..X..XX.X.......X", "...X.......X.......X..........XXX....X.X..X...XXX.", ".....XX.....X....X..XX....X...X.XX..X........X....", "XX......X.XX..X...XX..........X....X..X.XX....XXX.", "....X.....X....X...X...X.........XXX....XX.XX.....", ".X.X......X..XXXX.........X.X.XX.XX.........X..X.X", ".X...............XX........X.X......X.X........X..", "....XX........XX...X.XXX.X.X..X.XX..............XX", "X...X...X...X....X..X.X..X.....X.X......X..X....X.", ".XX..X..X..X..........X.XXXXXX.X.X.........X.....X", "X.XX......X.X.......X.......X.X......XXX....X.....", "..X...X....X...X.X...X...XX..XX.......X.X.....X..X", "X...X....X..X.X..X...XXX.......X.X..X.X...XX.....X", "..X....X..X.............X..X.....X....X.....XX....", ".X..X......X...X........X..XXXX.......X..X......X.", "...XX...X...........XXX.......X..X.....X...X....X.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 35;
    int coinColumn = 4;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> level = {"....X.....X.X.X...........XX.X..X.....X....XX.X.XX", "X......XX.X....X........X...X...X.....XX..X.......", "........XX...X.X....XX......X...X..X....X......X..", ".X....X....XX.X..X.XX......XX......XX..X..........", ".....XX.X.X...X..X....X............XX.......XX..XX", "X.....XX.X.X.......X..XX.X.X..X..XX...........XX..", "......XX........X.....X.X..X.XXX..X..X.X......X...", "..........X..X...X.....X......X........X.X........", "............XXXX...X....X..X..X.................XX", "......X...X..X.....X..X..X..X....X...X..X..X..X...", "X....X...X....XXXX............XX.......XX......X..", ".....X..X..X.XXX....XX.........XX............XX..X", "......X.XX.........XX..X.X..X..X.X.X.X....XX.XX...", ".X.....X.X...X.X...X.X..X....X....X..X.....XXXX..X", ".....X.X.X......X..X.X......X....XX........X.X....", "....X.....XX.XX.....X.X..XX...X.X.............XX..", "..X...........XX..X...........X.....X.X..X.......X", "X..X............X.X..XX.........X..XX.X.....X...X.", "X.X..X....X..X.....X..XX..XX....X..XX..XX.....X...", "............XX...X.X......X..X..X.....X.X...XX....", "X...XX....X.......XX.X.X...X..X.XX.....X...X....XX", "................XX..X..........X...........X......", ".X..X.X..X..X..X.........XXX....X.X.X..X.......X..", "....X.X....X..X......X.X....X.XX.....XXX.X..XX....", ".X.XX...XX........X..X.X...X.X..X....X.........X.X", ".XX..X........X...X...X......X....X.....XXX..X.XX.", ".XXX...X....X...........X.....X.X..XXXX.....X..X.X", ".X...X.XXX.....XX....X.XX....XX..........X........", "......X..X....X......................XXX.XX.......", ".....XXX.X..X..XX.X.....XX...X...XX...X.X.X..XX.X.", "X..........XX..X.X.X.....XX....X.XX............X..", "..X.X........XX.X...X..........X..X..X.X..........", ".X....XX....X....X.XX...........X.XX.X.X..X......X", "XX..XX..X...........X..X.XX.X.XX.X...X.X.X...X....", "..X...X...XX.X..XX.......X.........XX...XX.X..X...", "......X.........X.........X....X..........X....X..", ".X......X.......X.X.X......X.X........X........XX.", "....XX.X.............X......................X..X..", "X.....XX........X......XX..X..X.X...X....XX..X....", "X........X.X.........XX.XX.XX...X.XX..............", "....XX.X..XX....X.X..................X....XX.....X", "X...X..X..X..........X...X.XX...XX.....X.X.X.X...X", "XXX......X...X..X....XX......................XX...", "...........XX....X.XX...X.....X.......X..X.......X", ".X......XX........X.......................X.......", "X........X..X...X.....X.XX.XXXXX....X.X..........X", "X....XX...........X.......XX....X.....XX..X......X", ".X.........XX..X...........XX...X..X...X..X...XX..", "XX...........X..X..X..XX.........X...X..XX....X...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 50;
    int coinColumn = 21;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> level = {"...........X....X.X...XXXX...XXX....X...X.XX......", "......XX.......X....X...XX........XX..X..........X", "...X..X....X......X.X.......X......X.X.X.X......X.", "X..X.....XX.X...X...........X....X.....XX...X.X...", "..XX......X....X.........X........X....X..X.....X.", ".....X..X.............XX......X...X.....X.........", "..............X..X......X..X.X.........X.....X..X.", "....X..X.......X.....XX......X..X.X......X...X..X.", "......X..X.X.X......XXXXX.XX....X....XX....X.....X", "...XX....X.........XX.....X..XXX.X...XX........XXX", "X.X..X..X....X.X...........X..XX.......X...XX....X", "...X..........X.....XX.....XX.........XXX.X....X..", "...X.XX..X.XX...XX................X.XX.X........X.", "..XX..........X.........XX..X.X....X..XXX.X.X..X..", "X...X........X.X...XXX......X.........X.X...X.....", "X.....XXX...XXX.X.......XX..X.....XXXX......X.....", "................X..X....X.....X..X.............X..", ".....X..XX.....XX.X.X.X...XX......X..XX......X..X.", ".X.X.XX....X.X...XX.........X...X.X...XX...X..XXXX", "XX..X........X...XX......X.X..X...........XX.X....", "......X.XX........XX.....X....XX.X.X...........XX.", ".X...X...X.......X.......X...X.X.........X....X.XX", ".X..........XX.....X.X.X..X.X......X.XX...XX...X..", "X..........X.XX.X..........XX..X....XX.X.......X.X", "..........X....X.XX...XX...X...X....X..X......X...", "X...X.X....X.XX.X...X...X...XXX......X............", "...X...X....XXX....X....X.X..X.................XX.", "..X........XX..X....X.....X......X......X...X.....", "....X.X...X....X.....X...XX.....XX...X....XX......", "X......X....X.X.X......X......X......X...X..X...X.", "....X....X.....X....X..X.......XX...X...X.........", "..X...X.......XX.X...XX...X.........X.......X.X..X", ".....X...X....X.X.....X..X.X.....X...X.........X..", ".....X.............X.XX.XX.....XX...X.......X.....", "X...X...............XX.....X...X..X......X........", "X..X..X..XX.X.....X.X..X.......XX.X.X..XX.X..X.X..", ".........X.X..X.X.......X........X.X........XXXX..", "..X.XX.X.....X.........X......X...X...X...XX.X..X.", ".XX.X....X......X..X....XX.X...X.......X.XX.X.X.X.", "...X....X.X..X...X...XX....X.....X..XX..X........X", "......XX..XXX....X.......X........X.....XX......XX", "...X..X..X.X.X...X.........X..X..........X.X..X.X.", "...X..X...X.X.....X.X.X.X......X.....X.XX.......X.", "....X..X.XX.X.......X...X..X..............X..X....", "......X...........X....X..X......X.X.X....X.......", "............X.X.X....X............X..........X....", "....X...X....X...X....XX.X.X..XXX............XXX..", ".....X...X.....X.X...X.....X..X....XXX.......X.X..", ".XX.............XX...X......X..XX...X...XX...X.X..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 22;
    int coinColumn = 10;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> level = {"...XX..X....X..X...X.......X.....XXX....XX..X..X..", ".X.X..X.XX............X...X.XX....X............X..", "...X..X..XX.......XX...X..X...X.X.....X.....X.....", "XX............X...XX...X...XX................X....", ".........X...X..X...X..X............X.X.X.X...X...", "...X...X..X.........XX..X...X.......X.X...X......X", "...X...X..X..........X.X.....XX.X..X.X.......X.XXX", "...X.......X.....X......X.....X.....XXX...X.......", "..XX...X...X...X..X.X......X....XX.X..X.X...X.X..X", "XXXX....XX...XX.......XX.......XX........X..XX....", "..X....X.X..X..................XX..........X..XX..", "..X..XX.X.X..X....X........X...X...X.....XXX......", "...XX.X.X.......X....X.X........XX..X..X..........", "..X.XXXX..X.X..X.X...........XX....XX....X..X...XX", "....X..........X......X....XX.......X...X..X...X..", ".XX....X...X....X.....X..X.....XX...........X.....", ".XX......X.X..X.......XXX........X................", "....X.....X..XX...X.X....XX.X.X......X.....X.X.X.X", "........X....XX..X....X.XX.......X.X.X.XX......XX.", "......X...X.XX..X..X.............X.....X..X.X.....", "...XX.X...X..X.....X......X.XX...X.XX....X.X....X.", "........XX.XXX.X.X......X.XX..XX.X..X..XX..XX.X...", "......X.....XX.X..X.XX..X....X...XX...X.X.X...X..X", "XX......X........X.....X..X.X..X.....X.X..X...X...", ".X...X.............X...........X...X............X.", "..............X..............X.X.X................", "....X..XX.X..........X........X......X.X.......X..", "....X.X...................X...X....X............X.", "...X.....X...X.X..X..XX......X.....XXX..X..X...X..", "...X...XX..X.......X........X........X.XX..X......", ".X.X...................XXXX..X............X.......", ".X..X.....X....X.....X.X.....XXX.....X..X...X....X", "X........X....XX........X..X.....XXX.........X..X.", "..........XX......X...............XXX.....XX......", "X.......X.X.X.X.....XX..X.X.........X..X........X.", "X...X...X.X..........X......X.........X...X...X.X.", "..........X..........X...XX.....X..........X.XX...", "XX..X..X.XX.....XX......X...X..X..X..X.XX.X..X.X..", ".X......X..XX.......X...XX....X.X.X..X.....X...X..", ".X............X...X...XX.............XX.X.....XX..", "X.......X..XX..X..X..X......X...........XX...X....", "...X.XX.X...XX........XX.......X........X..X..XXXX", "...X...X........X.X...X.........X.................", "XX.X.XX...X....X...X.X.....X....XXX.............XX", ".....X..X.XX.X.XX.X..X..X..XX..X......X..X.....X..", "....X.X.........................X..X...XX.......XX", "..........X..X...XX..X.X....X...X..X.....X........", "......X.X....XX.X..XX....X..X......X......XXX.X...", "XX....X.....X..X....X..X....X..X.....X.......X...X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 48;
    int coinColumn = 45;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> level = {"...X.X...XX...X.......X...X..X....X.........X..XX.", "...X.X....XX..........X.X...XX..X...X.X.....X.....", ".X...X......X.......X.X..X.X.....X.X.X....XX....XX", "...X...X..X.X...X.....X.X....X......X.......X....X", ".X.XX..X....XX..X.X..X.....X......X....X..X.....X.", "........X..X...X..XXX..X..X.X.XX.X..X...X..X.X...X", "...XX.X...X...XX.....X..X.......X.....X.....X.XX..", "..XX..........X....X...X.......X.XXX.X..X.....X.X.", ".......XX.XX.X......XX..X.X.X.X........X.X...X..X.", "XX..X..X..X...X.X..XX.X.X.X........X....X.X.X.....", "......XX.......X.X......X.XX....X...XX...XXX..XXX.", "..X..X.XX.........X.......X..XX....X..X....X..X..X", ".X.......X.X.....XX....X.X...X.X.............X..XX", "....X...X......X....XX.....X.XXX.........XX.X...X.", ".X.XX.......XXX..X..............X......X..XX..XX..", "...X.X.......XX..X...X.......X.X..X........X..X.XX", "X..X.............X.................X..X.X....X....", "XXXXX.......X.............X..X....X.......X..XXX..", "........X.X..X.....XX...X.X...XXX..X.....XXX......", "X.X.X.X.....X....X.X..X.XX.......XX...X...X...X.X.", "...X....XX..X..X......XX....X...X.......X...X...X.", "..X.X........X.X.....X..X..X..X.......XX..XXX.X...", "...X..X..X.X.........XX..X..X.........X....X.X..X.", "X..XX.....X...XX.X.X.X............X.............X.", "..X...X.X..X..XXXXXX..X....X......X....X.XXXX...X.", "XX.X.....X...X.X..........XX.X.X.......XX...X....X", ".X..X.........X..........X...X..XX...X.XX...XX...X", "...X......XX......X.........X...............XXX...", "....X........X....X.......X............XXX....X...", ".X........X...XX..X.X.....X.....X....XX....XX...X.", "..XX.........X...X.X......X.......X....XX.....X..X", "....XX..XXX.......X.....XX...X......X.XX....XXX...", "...X.X......XXXX...XX.......X...........X....X...X", "...........X...X...X.X.....X..XX.XX......X..XX....", ".......XX...XX..X...XXX..X...XX.X........X.....X..", ".............X.XXX..X.X....X.....X.XX........X....", "...XXX..X.......X...X..X.......X.XXX......X..X.XX.", "....X.....X..XX.X........X..........XXX...XX...X..", ".X.X.XX.X.XXX...........X....X.X..........X..X....", ".....XX............X......X..........X...X.XX..X..", ".....X...X....X.....X......X.X......XXX....X......", "X............XX..X.X..X..XX..X.X..X.X........XX...", "...XX.......XX.....X.....X.X......X......X....X...", ".X.XX........XXX.X..........XXX.X....X......X.X..X", "........X.X...X....X.........X.............X.....X", "X.....................XX..X.......XX..X......X....", "...X.XX........X....XX......X.....X.X...X.....X...", "....X..X.XXX..XX.X...XX.X..X.X...X..X..X.X..X...X.", ".X....X...X..........X...X...XX...X.X.....X....X..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 12;
    int coinColumn = 36;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> level = {"X.....X...X...XX......XXX..X.XX.....XX........X...", ".X...X...XX....X...X....X.....X...X...X....X.X...X", ".X.X.X.....X..X........X...X.......X...X.....XX...", ".X....XX.X...X....X..X.....X..X..X.....X...XX.....", ".X.X..XX.X..X........X..X.X.X.............X.......", "...XXX....XX.X.X....XXX.......X............X......", "...XX...........X...XX......XX....X......X..X...X.", ".....XXX.X...X.X.X..X.X.......XX.......XX.X..X....", "X.X.X...X..X..XXX....X...X.XX......X.X.....X.X....", ".XX..XX...X.X.......X...X..X......X..X.......XX...", "......X..X.X.X...........XX....X...........XX....X", "...X.X..........................X..X...X.X..X.....", "....X..............X.XX....X.X..X...X.......XX..XX", ".X..X.......X.X....X.......X............X......X..", "X.X...X.....X............XX.X.X..X.......X.XXXXX..", "..X.......X.X.X........X.X..........XX............", "XX........XX...XX.XX...X..XX......X.X.X...........", "X.X.X..X.X..X................X.X...X.....X...X..X.", "........X.........X..XX..XX...X....X.X........X..X", "..X........X....XXXX.....X.XX....X..............X.", ".XXX.X..............X..X.......X......X.X.....X...", "......XX.X..X...X.XXX.X...X.X..XXX......XX........", "X..........X..X...XX..XX...X.XX.X.XX.....X.XXXX...", ".X.....XX......X.X........X.X...X.XXX..X..X.....XX", "XX....X.X.X....XX...X..X.X.X.X..........XX.X....X.", ".........X.X....X.X.XX..X......X..XXX.....X.....X.", "X....X....X...XX..X..........XXX..X..X.X..X......X", "X..X...XXX.........X...X..X...X..X...X...X.X......", "XXXX.....X..XXX.....X..X...............XXXXX......", "...XX..X.........XXX....XXX.X...XX..XX..X.X..XX...", "X.X..XX.....X.XXX......X.X...........X......XX..X.", "X...............X....XX..X.X....X..X..X.X.X.......", ".XXX..X..XXX..X.X.X...X....X.X.X........X....X....", "..X.XX.X..X..XXXX...XXX...........X..........X..X.", ".............X..........XX..X.X.X..X.XXXX.X.XX...X", ".XX..X............X.......................X.XX....", "....X..XX..XX.XXX.....X......X..X..X.......X...X..", "......X..X.......X.....X.X.X.X.......X.X......X...", "XX...X.....X.X.X..X....XX.................XX..X...", ".X...X..X....X...XX.......X.....X.X..........X.XX.", "...X.X..XX...X.X......X.......X...X..X............", "XX..............XX.........X.X....XX......X.....X.", "X.X....X..X.....X...X....XX....X..X..X..X....X...X", ".X....X.X............X......X..............X..X...", "......X.X.XX..X..........X..X.....X.X..X...X...X..", "......XX.................X.......X.XXX.X.X...X....", "......XX.X....X.....X..X.........X..........X..X..", "X......XX.XX..X...X..X.X....X.X....X..X........X..", ".X...X...X.......X.X.X.X.XXXXX.XXX...............X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 43;
    int coinColumn = 26;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> level = {"X.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> level = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "X..........................X..................X...", "..................................................", "...............X..................................", "..........XXXXXXXXXXXXXXXXXX......................", ".................................................X", "....XXX........................................X..", ".............................XXXXXXXXXXXXXX.......", "........X.........................................", "X.................................................", "..................................................", "..................................................", "..................................................", "X.....................................XXXX.......X", "..................................................", "..................................................", "...............X..XXXXXXXXX................X......", "..................................................", "..................................................", "X.................................................", "....X......................................X.....X", "..................................................", "..................................................", ".................................X................", ".........X........................................", "..................................................", "..................................................", ".........XXXXXXX.................................X", "..................................................", "X.................................................", "..................................................", ".................................................X", ".....................................X............", ".......................X..........................", "..XXX........................................X....", "..................................................", "...X.............................................X", "..................................................", "..................................................", "...........X......................................", "......XXXX......................X.................", "X.................................................", "XXX..X............................................", "X.................................................", ".............................................X...X", ".......X..................................XXXXXXXX", "..................................................", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 31;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> level = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "X..........................X..................X...", "..................................................", "...............X..................................", "..........XXXXXXXXXXXXXXXXXX......................", ".................................................X", "....XXX........................................X..", ".............................XXXXXXXXXXXXXX.......", "........X.........................................", "X.................................................", "..................................................", "..................................................", "..................................................", "X.....................................XXXX.......X", "..................................................", "..................................................", "...............X..XXXXXXXXX................X......", "..................................................", "..................................................", "X...XXXXXX........................................", "....X......................................X.....X", "..................................................", "..................................................", ".................................XXXXX............", "....X....X................XXXXXXXX...X............", "........................X............X............", ".....................................X............", ".........XXXXXXX.....................X...........X", "....X................................XXXXXXX......", "X.................................................", ".........................................X........", "..........................X......................X", ".....................................X............", ".......................XXXX.......................", "..XXX....................................XXXXX....", "..................................................", "...X.............................................X", "..................................................", "..................................................", ".........XXXXXXXXXXXXXXX.............XXXXXXX......", "......XXXX......................X.................", "X..XXXX...........................................", "XXX..X.................................XXX........", "X.................................................", ".......................................X.....X...X", ".......X..................................XXXXXXXX", "..................................................", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 29;
    int coinColumn = 12;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> level = {"X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 2;
    int coinColumn = 32;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> level = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".X................................................", "X.................................................", "..................................................", ".X..............................................XX", "..................................................", ".................................................X", "..................................................", "........................XXXXXXXXXX.......XXXXXX...", "XXXXXX...................................X.......X", "............................................X.....", ".....X............................................", ".................................XXXXXXXXX.......X", "........................X........................X", "..................................................", "..................................................", ".....X......................................XXXXX.", ".................................................X", "......................XXXXXX.....................X", ".....X............................................", "..................................................", "..................XXXXXX...............XXXXXXXXXX.", ".......................................X..........", ".....X...........................................X", "XXXXXX............................................", ".......................................X..........", ".......................................XXXX.XXXX.X", "X.................................................", "..................................................", "..X.......................................X......X", "..................................................", "..................................................", "..X.......................................X......X", "X.................................................", "..................................................", "...............XXXXXXXXXX........................X", "........................X.................X.......", "..........................................X.......", "XXXXXXXXXXXX...X...........XXXXXXXXXXXXXXXXXXXXX.X", ".........XXXXXXX........XXXX......................", "..................................................", ".................................................X", "..................................................", "..................................................", ".................................................X", "..................................................", "..................................................", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 23;
    int coinColumn = 23;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> level = {"XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "X.................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 1;
    int coinColumn = 50;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> level = {"X.X.XXX.XXX.XXX.X.X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X...X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X...X...X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX..XX.XXX.XXX.XXX.", "X.................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 1;
    int coinColumn = 50;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> level = {"XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X...X.X.X.X.X.X.X.X.X.X.....X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X...X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X...X.X.X...X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X...X.X.X...X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.", "X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "X.................................................", "X.................................................", "X.................................................", "X.................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 1;
    int coinColumn = 50;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> level = {"XXXX", "...X", "XXXX"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> level = {"XXX.XX.............XXXXXX.......XXXXXXXXXXXXXXX...", "X.X.....XXXXXXXX...X............X..........X......", "X.X.....X....X.....X....X.......X..........X......", "X.X.....X....X.....X....XXXXXX..X..XXXX....X......", "X.X.....X....X.....X............XXXX..X....X......", "X.XXX...X....X.....X..................X....XXXXXXX", "X.X.....X....X.....X..................X....X......", "X.X.....X....X.....XXXXXXXXXXXXXXXXXXXX....X......", "..................................................", "X.X.....X....X.............................X......", "X.X.....X....X.............................X......", "X.XXXXXXX....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....", "X.................................................", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 4;
    int coinColumn = 28;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> level = {"XXXXXXXXXX", "...X......", "XXX.......", "X.....XXXX", "..XXXXX..X", ".........X", ".........X", "XXXXXXXXXX"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> level = {"X"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> level = {"....", "XXXX", "...X", "XXXX"};
    int coinRow = 2;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> level = {"..X..", ".X.X.", "X...X", ".X.X.", "..X..", "XXXXX"};
    int coinRow = 1;
    int coinColumn = 3;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> level = {"X.XX", "...X", "XXXX"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> level = {"XXXXXXXXXX", "...X......", "XXX.......", "X.....XXXX", "..XXXXX..X", ".........X", ".........X", "XXXXXXXXXX"};
    int coinRow = 1;
    int coinColumn = 3;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> level = {"..", "XX"};
    int coinRow = 2;
    int coinColumn = 2;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> level = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> level = {".", "X"};
    int coinRow = 2;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> level = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 50;
    int coinColumn = 50;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> level = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 13;
    int coinColumn = 36;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> level = {"XXX", "XXX", "XXX"};
    int coinRow = 3;
    int coinColumn = 3;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> level = {"X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> level = {"X.........X.........X.........X.........X.........", ".........X.........X.........X.........X.........X", "........X.........X.........X.........X.........X.", ".......X.........X.........X.........X.........X..", "......X.........X.........X.........X.........X...", ".....X.........X.........X.........X.........X....", "....X.........X.........X.........X.........X.....", "...X.........X.........X.........X.........X......", "..X.........X.........X.........X.........X.......", ".X.........X.........X.........X.........X........", "X.........X.........X.........X.........X.........", ".........X.........X.........X.........X.........X", "........X.........X.........X.........X.........X.", ".......X.........X.........X.........X.........X..", "......X.........X.........X.........X.........X...", ".....X.........X.........X.........X.........X....", "....X.........X.........X.........X.........X.....", "...X.........X.........X.........X.........X......", "..X.........X.........X.........X.........X.......", ".X.........X.........X.........X.........X........", "X.........X.........X.........X.........X.........", ".........X.........X.........X.........X.........X", "........X.........X.........X.........X.........X.", ".......X.........X.........X.........X.........X..", "......X.........X.........X.........X.........X...", ".....X.........X.........X.........X.........X....", "....X.........X.........X.........X.........X.....", "...X.........X.........X.........X.........X......", "..X.........X.........X.........X.........X.......", ".X.........X.........X.........X.........X........", "X.........X.........X.........X.........X.........", ".........X.........X.........X.........X.........X", "........X.........X.........X.........X.........X.", ".......X.........X.........X.........X.........X..", "......X.........X.........X.........X.........X...", ".....X.........X.........X.........X.........X....", "....X.........X.........X.........X.........X.....", "...X.........X.........X.........X.........X......", "..X.........X.........X.........X.........X.......", ".X.........X.........X.........X.........X........", "X.........X.........X.........X.........X.........", ".........X.........X.........X.........X.........X", "........X.........X.........X.........X.........X.", ".......X.........X.........X.........X.........X..", "......X.........X.........X.........X.........X...", ".....X.........X.........X.........X.........X....", "....X.........X.........X.........X.........X.....", "...X.........X.........X.........X.........X......", "..X.........X.........X.........X.........X.......", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> level = {"....X", ".....", "XXXXX", ".....", "XXXXX"};
    int coinRow = 1;
    int coinColumn = 5;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> level = {"XX", "..", "XX"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> level = {"X.X", "..X", "XXX"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> level = {"XXXX....", "...X.XXX", "XXX..X..", "......X.", "XXXXXXXX"};
    int coinRow = 2;
    int coinColumn = 4;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> level = {".XXXXXXXXXXXX", "XX.........XX", ".............", ".............", "XX.........XX", ".............", "XX...........", ".............", "XXXXXXXXXXXXX"};
    int coinRow = 5;
    int coinColumn = 13;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> level = {"XXXXXX.XXX.X.X.XXXXX.X.XX...XXXXXXX.XX..XXX.XXXX.X", "XXXXXX.X.XXX.XXX...XXXXX.XX.XX.X.XXX.X...XXX.XX.X.", "..XXXXX...XXX..XXXXX.X.XX.XXX.XXXXX..X.XX.X.XXXXXX", "XX...XXXX..XXX.X.XXXX.X.XXX.X.XXX.X.XXXXXXX..XXX..", ".XXX..XXXX.XXXX..XX.XXX..XX..XXXXXX.X.XXXX...XXX..", ".X.X...X.XXXX.XXXX....XXX...X.XXX.XXX.XX.X.XX.XX..", "XXXX..X.XX..XXX.XXX...XXXXXX.X...X..XXX.XX..XX.XX.", "XXXX.X...XX.XXX..X.....XXX.XX..X.X..XXXX.XXXXXXXXX", "XXXX.XXX.XXX.X.X.XX..X...XX.XX..X.XXX.XXX.XXX...XX", "..XX.XXXXXX.XXX.X.XXX.XX.XXXXXXXXXXXXXXX.X..XX.XX.", ".XXXX.X..XX.XXXXXXXXXXXXXX.XXXX..X.XXXX.X..XX..XXX", "X.XX.X.XX..X.XXXXXX.XX..XX.X.XXX..X.X..XX.X..XX.XX", "...X.XX.XXXX..XXXXXXXXXXXXX...XX.X..XXX..XXX.XXXX.", "XXXXXXXX.XXX.XXXXXXXX.X..XXX.XXX.XX.XXXX.XX.XXXXXX", "XXXXXXXXXX..X.XX.XX.XXXXXXXXXXX.X..X.X.XXX.X.XXXX.", ".X.XXXXXXXX.XX..XXX..XX.XXXXXX.XX..XX..X.X.X..XXXX", "..XX..XX.X..X.XX..XXXXXX....XX.XX.XXX.X...X.XXXXX.", ".XX.XX.X...XX..X..X.X.X.XXXXXXX...XX.XXXX.XX..XXXX", "XX.XXX.XXXXXX.XX..X.X....XXXX....XXXXXXXXX.XXXXX..", ".XXXXXXXXX..XXXX.XXX.XXXXXXXXXXX.XXXXX..X.XXXXXX.X", "....X..X.X.X.XX.XX.XXX.XX.XXX.XXXX.XX.X.XXX..XXX.X", "X.....XX..XX.X.XX...XXXXX.XX..X.XXX...X.XX...XXXXX", ".XX..XXXXX.XX.X...XX.XXXX.X.X.....XXX..XXXXXXXXX.X", "XX.XXX..X.X.XXX..XXXXXX.X.XXXXX.XXXXXXXXXXXXX..XXX", "X.X.XXX.XX..XXX.XX.X.XXX.XX.XXX.X.XXXXXX.XX...X.XX", "XX.XXXXX..XX..XXX.X.XX.XXXX.XXXXXXX.XXXX.XXXXXXX..", "XXXX..XXXXXXX.X.X...X..XXXXXXX.X..XXXXX.XXX.XX..XX", "X.XXX.XXXXXXXX.XX.XX.X..X.XXXXX.XX.XXX.XXXXX.XXX.X", "XXXXX.XXXXX.X.XX.XXXXXXXXXXXXX.X.XXXX.XXXXXX.X.XX.", "XX.X.XXXXXXXX..X.X.XXXX.XXXXX.X.X.XXXXXXX...X.XXXX", "X.XXXXXXX..XX.X.XXXXXXX..X..XX.X.XXXXXX...X..XX.XX", "X.XXXXXXXX.X...XXX...XXXX..XXXX.X.XX.XXX..X.XXXXX.", "XXXXX..XX..XXXXXXXXXXXXXXXXXXXXXXX.X.XXXXXXXXX.X.X", ".XX.XXX....XXXXXX.X.X.X.XXXXXXX.XXX..XXXXXX.XXXXX.", "XXXX..XXX..XXXX.X..XXXXX.X..XXX.X.XXX.XXXX..XX..XX", "X.XXX..XX.XX.XX.XX.XXX.XXXX..X.XX.XXX.XXXX.XXXXXXX", "XXX.XXX..XX.XXXXXXX..X.XX.XXXXX..XX.XXXXXXXX.XXXXX", "XXXXXXXX.XXXX.XXX.X.XX.X.X.X.XXX.X.XXXX.XXXXX.XXXX", "..XX........X..XXXXXXX.XXX.XXX..X.X.XX...XXXXXXXX.", ".XX....X..XXXX..X.X..X.XXXXX.X..XXXX.XXXXXX.X.X..X", "X.XXX.X.XX.XXX.X.X..X.X.XXX.XXX.XXXXXXX.XX...XXX..", "...XXXX.XXXXXX.XXXX..XXXXXXX.X.X.X.XX..XXXXX.XX.X.", "...XXX.X...XX.XX.X.X.XXXX....XX.XX.XX.XXX.X.XXX.XX", "X..XX..XXXXXXX..XXXXXXX.XX.X.XXXXXXX...XXXXX.X...X", "XXX.X..XX.X.X...XX.XXX.X.X.XXXXX.XXXXXXXXXX.XXXX.X", "XXXXXXX.XX.XX.XXX..X.XXXXX..XX.X.XXXXX..X.X..XX.X.", "XXX.X.X.XX.XX.X.XXXXXXXXXXXXXXXX.X..X.XX.XX.XXX..X", "XXXX.X....XXXXXXXXX.X.X..XX.X..XXXX......XX.X...X.", "X..X.X...XXX.X.X..XX.....X.X...XXX.X.....X.XX..X..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 15;
    int coinColumn = 9;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> level = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X................................................X", "X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X.X............................................X.X", "X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X", "X.X.X........................................X.X.X", "X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X", "X.X.X.X....................................X.X.X.X", "X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X", "X.X.X.X.X................................X.X.X.X.X", "X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X", "X.X.X.X.X.X............................X.X.X.X.X.X", "X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X", "X.X.X.X.X.X.X........................X.X.X.X.X.X.X", "X.X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X....................X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.XXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X................X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.XXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X............X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.XXXXXXXXXX.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X........X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.XXXXXX.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X....X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.XXXX.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X......X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.XXXXXXXX.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X..........X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.XXXXXXXXXXXX.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X..............X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.XXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X..................X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X......................X.X.X.X.X.X.X.X", "X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X", "X.X.X.X.X.X..........................X.X.X.X.X.X.X", "X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X", "X.X.X.X.X..............................X.X.X.X.X.X", "X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X", "X.X.X.X..................................X.X.X.X.X", "X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X", "X.X.X......................................X.X.X.X", "X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X", "X.X..........................................X.X.X", "X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X", "X..............................................X.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", ".................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 25;
    int coinColumn = 25;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> level = {"X.X", "X..", "XXX"};
    int coinRow = 1;
    int coinColumn = 3;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> level = {"X..X", "X...", "X...", "XXXX"};
    int coinRow = 1;
    int coinColumn = 4;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> level = {"X", ".", ".", "X"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> level = {"....", "XX..", "X.XX", "X...", "XXXX"};
    int coinRow = 3;
    int coinColumn = 3;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> level = {"XXXX", "X..X", "X...", "XXXX"};
    int coinRow = 2;
    int coinColumn = 4;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> level = {"XXXX", "X..X", "X...", "X...", "X...", "X...", "X...", "X...", "X...", "X...", "X...", "X...", "X...", "X...", "X...", "X...", "X...", "X...", "X...", "XXXX"};
    int coinRow = 2;
    int coinColumn = 4;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> level = {"XXXX....", "...X.XXX", "XXX..X..", "......X.", "........", "XXXXXXXX"};
    int coinRow = 2;
    int coinColumn = 4;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> level = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 3;
    int coinColumn = 25;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> level = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    int coinRow = 1;
    int coinColumn = 1;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> level = {"..........", "..........", "..........", "..........", "..........", "..........", "..........", "XXXXX.XXXX", "..X.......", "XXXXXXXXXX"};
    int coinRow = 8;
    int coinColumn = 8;
    ArcadeManao* pObj = new ArcadeManao();
    clock_t start = clock();
    int result = pObj->shortestLadder(level, coinRow, coinColumn);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test97() == 0 ? ++passed : ++failed;
    test98() == 0 ? ++passed : ++failed;
    test99() == 0 ? ++passed : ++failed;
    test100() == 0 ? ++passed : ++failed;
    test101() == 0 ? ++passed : ++failed;
    test102() == 0 ? ++passed : ++failed;
    test103() == 0 ? ++passed : ++failed;
    test104() == 0 ? ++passed : ++failed;
    test105() == 0 ? ++passed : ++failed;
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22732328&rd=15496&pm=12504
********************************************************************************
#include <algorithm> 
#include <string> 
#include <vector> 
#include <queue> 
#include <iostream> 
#include <cmath> 
#include <sstream> 
#include <map> 
#include <set> 
#include <functional> 
using namespace std; 
#define pb push_back 
#define INF 1000000000 
#define L(s) (int)((s).size()) 
#define FOR(i,a,b) for (int _n(b), i(a); i <= _n; i++) 
#define rep(i,n) FOR(i,1,(n)) 
#define rept(i,n) FOR(i,0,(n)-1) 
#define C(a) memset((a),0,sizeof(a)) 
#define ll long long 
#define mp make_pair 
#define pii pair<int,int> 
#define x first 
#define y second 
 
bool used[52][52]; 
inline bool check(vector<string> mas, int ei, int ej, int lad) { 
  --ei; --ej; 
  queue<pii> q; 
  C(used); 
  int n = L(mas); 
  int m = L(mas[0]); 
  used[n - 1][m - 1] = 1; 
  q.push(mp(n - 1, m - 1)); 
  while (!q.empty()) { 
    int ci = q.front().x, cj = q.front().y; 
    q.pop(); 
    if (cj + 1 < m && mas[ci][cj + 1] == 'X' && !used[ci][cj + 1]) { 
      used[ci][cj + 1] = 1; 
      q.push(mp(ci, cj + 1)); 
    } 
    if (cj - 1 >= 0 && mas[ci][cj - 1] == 'X' && !used[ci][cj - 1]) { 
      used[ci][cj - 1] = 1; 
      q.push(mp(ci, cj - 1)); 
    } 
    FOR(di, -lad, lad) { 
      if (ci + di < 0 || ci + di >= n) continue; 
      if (used[ci + di][cj]) continue; 
      if (mas[ci + di][cj] != 'X') continue; 
      used[ci + di][cj] = 1; 
      q.push(mp(ci + di, cj)); 
    } 
  } 
  return used[ei][ej]; 
} 
class ArcadeManao  
  { 
    public: 
       int shortestLadder( vector <string> level, int coinRow, int coinColumn ) 
    { 
      rept(ladder, 51) { 
        if (check(level, coinRow, coinColumn, ladder)) return ladder; 
      } 
      return -1; 
    } 
  }; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/