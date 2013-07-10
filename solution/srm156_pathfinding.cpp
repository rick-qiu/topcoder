/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1110
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

class PathFinding {
public:
    int minTurns(vector<string> board);
};

int PathFinding::minTurns(vector<string> board) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"AB.................X", "XXXXXXXXXXXXXXXXXXX.", "X................XX.", ".XXXXXXXXXXXXXXXX.X.", ".XX............XX.X.", ".X.XXXXXXXXXXXX.X.X.", ".X.XX........XX.X.X.", ".X.X.XXXXXXXX.X.X.X.", ".X.X.XX....XX.X.X.X.", ".X.X.X.XXXX.X.X.X.X.", ".X.X.X.X.XX.X.X.X.X.", ".X.X.X.X...XX.X.X.X.", ".X.X.X.XXXXXX.X.X.X.", ".X.X.XX......XX.X.X.", ".X.X.XXXXXXXXXX.X.X.", ".X.XX..........XX.X.", ".X.XXXXXXXXXXXXXX.X.", ".XX..............XX.", ".XXXXXXXXXXXXXXXXXX.", "X..................X"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 397;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"X..A..X", ".XXXXX.", ".X...XB", ".XXXXX.", "X.....X"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"A.................XX", ".................XXX", "................XXX.", "...............XXX..", "..............XXX...", ".............XXX....", "............XXX.....", "...........XXX......", "..........XXX.......", ".........XXX........", "........XXX.........", ".......XXX..........", "......XXX...........", ".....XXX............", "....XXX.............", "...XXX..............", "..XXX...............", ".XXX................", "XXX.................", "XX.................B"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
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
    vector<string> board = {"....", ".A..", "..B.", "...."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"XXXXXXXXX", "A...X...B", "XXXXXXXXX"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"XXXXXXXXX", "A.......B", "XXXXXXXXX"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"XXXXXXXXX", "A.......B", "XXXX.XXXX"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"...A.XXXXX.....", ".....XXXXX.....", "...............", ".....XXXXX.B...", ".....XXXXX....."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"AB.................X", "XXXXXXXXXXXXXXXXXXX.", "X..................X", ".XXXXXXXXXXXXXXXXXXX", "X..................X", "XXXXXXXXXXXXXXXXXXX.", "X..................X", ".XXXXXXXXXXXXXXXXXXX", "X..................X", "XXXXXXXXXXXXXXXXXXX.", "X..................X", ".XXXXXXXXXXXXXXXXXXX", "X..................X", "XXXXXXXXXXXXXXXXXXX.", "X..................X", ".XXXXXXXXXXXXXXXXXXX", "X..................X", "XXXXXXXXXXXXXXXXXXX.", "...................X", ".XXXXXXXXXXXXXXXXXXX"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 379;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"A...................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "...................B"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"AX.X.X.X.X.X.X.X.XXX", "X.X.X.X.X.X.X.X.X.XX", "XXXXXXXXXXXXXXXXXX.X", "XXX.X.X.X.X.X.X.X.XX", "XX.X.X.X.X.X.X.X.XXX", "X.XXXXXXXXXXXXXXXXXX", "XX.X.X.X.X.X.X.X.XXX", "XXX.X.X.X.X.X.X.X.XX", "XXXXXXXXXXXXXXXXXX.X", "XXX.X.X.X.X.X.X.X.XX", "XX.X.X.X.X.X.X.X.XXX", "X.XXXXXXXXXXXXXXXXXX", "XX.X.X.X.X.X.X.X.XXX", "XXX.X.X.X.X.X.X.X.XX", "XXXXXXXXXXXXXXXXXX.X", "XXX.X.X.X.X.X.X.X.XX", "XX.X.X.X.X.X.X.X.XXX", "X.XXXXXXXXXXXXXXXXXX", "XX.X.X.X.X.X.X.X.X.X", "XXX.X.X.X.X.X.X.X.XB"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"AX.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.XX", "XXXXXXXXXXXXXXXXXX.X", "XXX.X.X.X.X.X.X.X.XX", "XX.X.X.X.X.X.X.X.XXX", "X.XXXXXXXXXXXXXXXXXX", "XX.X.X.X.X.X.X.X.XXX", "XXX.X.X.X.X.X.X.X.XX", "XXXXXXXXXXXXXXXXXX.X", "XXX.X.X.X.X.X.X.X.XX", "XX.X.X.X.X.X.X.X.XXX", "X.XXXXXXXXXXXXXXXXXX", "XX.X.X.X.X.X.X.X.XXX", "XXX.X.X.X.X.X.X.X.XX", "XXXXXXXXXXXXXXXXXX.X", "XXX.X.X.X.X.X.X.X.XX", "XX.X.X.X.X.X.X.X.XXX", "X.XXXXXXXXXXXXXXXXXX", "XX.X.X.X.X.X.X.X.X.X", "XXX.X.X.X.X.X.X.X.XB"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"X.X..X..X..X..X..X.B", ".X.X..X..X..X..X..X.", "X..XX..X..X..X..X..X", ".XX.XX..X..X..X..X..", "..XX.XX..X..X..X..X.", "X..XX.XX..X..X..X..X", ".X..XX.XX..X..X..X..", "..X..XX.XX..X..X..X.", "X..X..XX.XX..X..X..X", ".X..X..XX.XX..X..X..", "..X..X..XX.XX..X..X.", "X..X..X..XX.XX..X..X", ".X..X..X..XX.XX..X..", "..X..X..X..XX.XX..X.", "X..X..X..X..XX.XX..X", ".X..X..X..X..XX.XX..", "..X..X..X..X..XX.XX.", "X..X..X..X..X..XX.XX", ".X..X..X..X..X..XX..", "A.X..X..X..X..X..X.X"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {"...................", "...................", "...................", "...................", ".........B.........", "...................", "...................", "...................", "...................", "XXXXXXXXXXXXXXXXXXX", "...................", "...................", "...................", "...................", ".........A.........", "...................", "...................", "...................", "..................."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"..X.....XX........X", ".XX.....X.XXXXXXXX.", ".X......X.X.....X.X", ".X......X.X....X.X.", ".X......X.X...X.X..", "X.X.....X.X..X.X...", ".X.X....X.X.X.X....", "..X.X...X.XX.X.....", "...X.X..X.X.X......", "....X.X.XAXX.X.....", ".....X.XXBX.X.X....", "......X.X.X..X.X...", ".....X.XX.X...X.X..", "....X.X.X.X....X.X.", "...X.X..X.X.....X.X", "..X.X...X.X......X.", ".X.X....X.X......X.", "X.X.....X.X......X.", ".XXXXXXXX.X.....XX.", "X........XX.....X.."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {".X.XX.XXXXXXX.XX.X.X", "B..................A"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"...X..", "XX..X.", ".XX.XX", ".X...X", "X.X.X.", "X...X.", ".XXXX.", ".XXXX.", "XX....", "X....X", "..X.XX", ".X.X.B", "XX.XX.", "XX.XX.", "XXX.XX", ".X.X.X", "...X..", "A.....", "X.XXX."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"X.XXXX.XX", "X..XX.X..", ".XXX.XXX.", "..XXXXXX.", "XXXXXXX.X", "XXXXXX.XX", ".XX..X.XX", "X..XXX.X.", "XXXXX.X.X", "X...XX.XX", ".XXXXXX..", "X.XXX.X..", ".X.X.X.XB", "X..X.XXXX", "AXX.XXX..", "X.XXX.X..", "X.XXX.X..", ".X.XXXXXX", ".XXX.XXX.", "XX.X.XXX."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {".XXXX.XXXX.XX.", "XXX.XX.XX.X..X", "..XX..X.XX.X..", "X..XXX.XXX....", "XXX.XX.XX.X...", "X.X.XX.XXXX.X.", "XX.X.XXXXXX.XX", ".X..XXX.XXX.XX", "XXX.XXXXXXX...", "XXXXXX.X..XX.B", ".X.X.XXXXXXXX.", ".X....XXXX....", ".X...X.X...XXX", "...XX.X.XXX.XX", "AXX.X.XXX.XX.X"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"...X.......X.B", "X...X.XX..XX.X", ".X....XX..X..X", "X....X..XX.X.X", "XX..X...X.....", "XXXXX....X..XX", "XXX.XX.XXXX.XX", "..X.X.X.XX...X", "X..X.XX..XXXX.", "XXXXX.XXXX..X.", ".XX.X.X.......", "X....X.X.X.X.X", "XX....XX..X...", "X.X.XXXX......", "A..X.X.X....X.", "X...XXX.X...XX"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"XXX.X.X..X.XXXXXXXXX", "A.XX.X.X.X..XX..XXX.", "....XXX.XXXXXXXXXX..", ".X.XXX....XXX..XX.XX", ".XXXXXXXXX.......X.X", "XXXX.X.XXXXXXXX.X.X.", ".......XXXXXXX..X...", "XX.XXXXX.XX.X..XX.XX", "XX.XXXX.XXXXXX..XX.B", "XXXX.XXXX.XXXXXX.X.X", ".XXXXXXX.XXXXX.XX.XX", "X..XX..XXXXX.XXX.X.X", "..XX.XXXX..X.X....X.", "X.X..X...X..X.X.X.XX", ".X.XX..XX..X.X.XXXX.", "XX.X.XXXXXXX..XXXXXX", ".X...XXX..XXX.X.XX.X", ".XX.XXXXXX.XX...XX.X"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {".XXXX..X..X.X..X.X", "X.XX..X.XX.X.XX..X", "X...X...XXXXXX.X.X", "..XXX..XXX..X...XX", "X..XXXXXXX.X.XX...", "XXX..XX.XX..X...XB", "XX.X..X.XX........", "..X..X.XX..X.X.XXX", ".XX..X.X.XXX.X.XXX", "...X.XX.XX....X.X.", "X.XX..X..XX..XX..X", "X..XX..X.XXX..X...", "AX....X..X.XXXXXXX", ".XX.X..X.X.X..XX..", ".XXXX.X.X.X.X..X..", "X.XX..XXX...X.X..."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {".X.X.XXXXX..", "X...X.X.XXXX", "AXX.XX.XXX..", "X.XX..XXXX.X", ".XX.X.XX...X", "..X.XX.XX.X.", "..XX.XX.XXXX", "..X.XXX..X..", ".X....X..X..", "X.X.XXX...X.", "...X.X.X.X.B", ".X.XX.X.XX.X", "XXX...XX...X", "XX..X.XXXX.X", "X..X....XXXX", ".XX.XX..X.XX", "....XXXXXXXX"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"X..XX...XX...X.X", "X..XXXX..XX.X.X.", "XX....X...X.X..X", "XXX.X.XXXXX..XXX", "X.X.....XX......", "X..X..XXX.XX.X.X", ".XX..XX.X.XXXX..", "X.XXXX.X...X.X.X", "XX..X.XX..XXX.X.", "XX.X.XX......X.X", "AX.X..XXX.XXX.X.", "X....X..X..X....", "XXXXX.X.XXXX..XB", "..XX.X...XXXXXX.", "..XXXXXX.XXX.XX."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {".X....XX.XX", "...X.XXX.X.", "XXXX.XX..XX", ".XXXX...X.X", "X.X..XX.X.X", ".X.XX...X.X", "..X.XXX.X.X", "X.X..XXXXXX", "..X.X.X....", "..XXX.X.X.B", "XX...XX.X..", "X.X...XX.XX", "XXX..XXXX.X", "XXX.XX.X..X", "A.....X.XX."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"XXXXXXX.XX...XXXX", "XXXXXXX.XXX.XX..X", "X.X.X.X.X.XX.X.XX", "XXXXXX.XX...X.X.B", ".XX.X..X.X.XX.XXX", ".X.XX.XX.X.XXX.XX", "XXXX.XX.XXXX.XX.X", "X.XXXX.XXXXX.XX.X", "XXXXXXX.XXXXX.X..", ".XX.XX.XXXXXXXXX.", "XX.X...XXXX.X...X", "X...XX..XX.XXX.XX", "AXX..XXXXXXXXX..X", "..XX..XX.XXXXXXX.", "..XXXXXXXXXXXX..X", "XXX.XXXX.XXXXXX..", ".XXXXXXXXXXXXXXX.", "XXX.XXXXX.XXXXXX."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"X..X.X...XX.X.XXXX", "XX.X...X..XXX.XXX.", "....X.X...XXXX..XX", "..XXX..XXX......XX", "X..XXXX.XXXX.X..X.", "..XX.XXXXXXX.XX.XX", "X.XXXXX....X..XX.X", "X..XXXX.X.XXXXXXXX", "XX.XX.XXXXX.XXXXXX", "...XX.X.XXX..X.X..", "X...XXXXX.XXXXX.XX", "A.XX.XXX.X..XX...X", "XXX.....XXXX...XXB", ".X...XXXX.XX....X."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"X....XX...XX.XXB", "X..XXXX..XXX.X..", "XXX..XXXXX..XX..", "XX..X.X.XX.X...X", "XXXXXXX..X.....X", "XXXX..X..XXX..XX", "...XX..XXX..XXXX", "XX.XXXXXXXX...X.", "XX..XXX.X.X..XX.", "AXX..X...XX.XX.X", "X.XX.X...X..X.XX", ".XX..X...XX.X..X", "..XXXX...X.X.X.X", "XX.XXXX.X.XXXXX.", "..X.X...XXX.XXX.", "X..X....XX.XX...", "..X.X.X.X....X.."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"..X.X.XX..X.X.", "AXXX.XXXX.XXXX", "X..XXXXX.X.XX.", ".X.XX.X.X..XXX", "..XXXXXX..X.XB", "X.XXXXX.XXXX.X", "XX.X...XX.XXXX", ".X..XXXXXX.XX.", "XXXXXXX.X.XXXX", "..XXXX..X.X.XX", ".XX.X.X..XX.XX", "X...XX........", "XXXXX.X.X.X..X", "..XX..XX..XXX.", "X.X.X.XX.....X", "X....X.X..XX..", "..X.X.XXX.XX.X", "..XXXX.XX.XX.X", "XXXXX..X......", "X.X.X.XX.X.X.."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {".XX....X.X.X.X", "....X.X....X.X", "....X....XX...", "...X...X.X.X..", ".XX..X..X.XXX.", "..X..X...X..X.", ".XX...X..X.XXX", "..X.X..X...XX.", "X..X.X.....X..", "........X.XX.X", ".XX.......X..X", "X.X..X.XX.X..X", "....X.X.XX..X.", "XX....X..XX..B", ".XX..X..XXXX..", "XXX..X.XX.XX.X", ".XXX.......X..", "A.XX.....XX.XX"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {".X..........XXX...X.", "XX..XX..X..XX.X...XX", "XX..XXXX..XX......XX", ".X.....X.X...X....XX", "..XX.....X.X.XXX...X", "..X.X.X.X....XX.X..X", "A.XX.XXX.....X..X...", ".XX.X...XX.X....XX.X", "XXX..X.XX...XXXXX.XX", "XXX..X.XX......XXXX.", ".X.XX.X.........XX..", ".X.....XX....XXXXXXX", ".XXXXXXX..XX.X.X...X", "XX..X...XX..X.XX..XB", "X.XX.XXXX..X..X..XX."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"X...XXX.X.....XXX...", "XXX.XXX...X.XXX...XB", "X.X..XX..XXX.XXX....", "...X..XXX....XXX....", "XX..XX.....XXXXX....", "X.XXXX...X....X..XXX", "X.X.XX...XX...X.XX..", "..X.XX..X..X..XXXX.X", "A...XXX.XX.X..XX.XX.", "XX.X..XXX.XXX.XXX...", "X..X..XX.XX.....XX..", "..X..X..XX........X.", "XXXXX...X.XX..X.X.X.", ".X.XX.X..X.XX...XXXX", "X.....X.X..XXX.XXXX.", "X..X.X........X.X..."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"..XXX.X....X.XX....", "..X....XX.....X..XX", ".XXXXX...XX.X.X....", "XXX....X.X.X...XX..", "X..XXX..X...XX...X.", "..XXX....X.XX....X.", "XXXX..X..X.X.......", "AXX..X....X.....X.X", "XX...XXX..X.....X.X", "X.....X..XXX..X....", ".....X......X..XX.X", "X.X..XX.XX....X.XXX", ".X..X..X......X..XX", ".XXXXX...XX.....X..", "..X..X...XX.X.....X", "......XXXX.X......X", "........X.X.......B", "....X.X......XX.X.X", "X...XX...XX.X.X..XX", "X.XX..XX...X..X..XX"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
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
    vector<string> board = {"..XX..XX.X.X.X...XXX", "..X................X", ".XXXX.XX..X........X", ".X.X..X.XXX..X..XX..", ".XXXX.X..X..X....X..", "A.XXX.XXXXX..XX.XX..", "X..XX.XX.X.X......X.", ".X.XXX.XX.XXX...XX.X", "X..XXXXXX.XX.X.XXX..", "XX.XXXX..X....X.XXXB", ".XX.XX.......XXX.XX.", "XX.XX.....X.X.....XX", ".X..XXX.....XX..X..X", "X...X..XX.....X..X..", ".X.XXX.X.X....X.XX.X", ".....XX.XXXXXXX..X.X", "X.XX.X.XXX.....X.X.X", "..X..X......XXX.X...", "XX.X.XXXX.....X..XX."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"X.XXX.X....XX.X.", "..XXXX..X..XX.XX", "X...X..XX.......", ".X.....XX.XXX.XX", "AXXX.XXXX.X..X.X", "..X....X.X....X.", "............XX.X", ".XX.XXXX...XXX..", ".X....XX..XX..X.", ".XX.X..XXX.X..XX", "....XX.XX.X.XXX.", ".XX..XXX..XXXX..", "XX...X.X..X..XX.", ".X.XX.XX..X...X.", "...XXX.XX....XXX", "X.X...XX.X...X..", "X.X.X.XX....XX.B", "...XXX...X...XX.", "..XX....XXX.X.XX", "......X..X......"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"XX...X.X.X.XB", ".X..X.X.X.XXX", "X.X....XXXXX.", "XX.X.X.......", ".X.X..X.XX...", "..X.X..X....X", ".XX..X.X.X..X", ".XX.X...XXXX.", "XXX....X..X.X", ".X..X..XX.XX.", "X..X.X...X.X.", "AXX.X.XXX...X", "..X.X..XX....", "XX.X....X..XX", ".XXX..X.....X", "XX..X.X.X.X..", "XXXXX........", "X.XX.XX..XX.X", ".....XXXX..X.", "X.XXX..X....X"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {".X.X......", "AX.XX...XX", "XX..XXX..B", ".X...XX..X", "X.........", ".X.X.XX.XX", "XXX.....XX"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
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
    vector<string> board = {"X..XXXXX...XX..XXX.", "X.X..XXX.X..X...XXX", ".X.XX.X..X..XXXXXX.", "..XX...XXXXX.XX....", "X.XX..XXXX..XXX...X", "..XXX.X.X.X.XXX.X..", "...XX.XXX.XXXX....X", "XX.....XXXX.X.XX.XX", ".X....XX.X..XX....X", "XX..XXX..XX.XX...XX", ".X..XX.XX..X.....X.", "XXX.X.....XX.....X.", ".X...XXXX.X....XXXX", "..XX.XX...X.XXXXXXB", "A.XXXXX..X.XX.X..X.", "X.XXX..X.XX...X..XX", "XXXXXX.XX.X..XX.XX.", "X...XXX........X...", ".XXX.XXXXXX.X..XX..", ".XX.X.X....X......X"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"X..X..X...", "XX...X...X", ".XX..X..X.", ".X......XX", ".X...X.X.B", "X.....XXX.", "XXX.X.XX..", "AXX...X.XX", "XX..X..X.X", "X...X..X.X", "..XX.XX...", "XX.X.X..XX", "X.XX...X..", "X...X..XX.", "..X..X..XX", "XXX.XX.X..", ".X.XX.X..X", "...XX..XXX", ".X..XX...X"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"....", ".A..", "..B.", "...."};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"AB.................X", "XXXXXXXXXXXXXXXXXXX.", "X..................X", ".XXXXXXXXXXXXXXXXXXX", "X..................X", "XXXXXXXXXXXXXXXXXXX.", "X..................X", ".XXXXXXXXXXXXXXXXXXX", "X..................X", "XXXXXXXXXXXXXXXXXXX.", "X..................X", ".XXXXXXXXXXXXXXXXXXX", "X..................X", "XXXXXXXXXXXXXXXXXXX.", "X..................X", ".XXXXXXXXXXXXXXXXXXX", "X..................X", "XXXXXXXXXXXXXXXXXXX.", "...................X", ".XXXXXXXXXXXXXXXXXXX"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 379;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"XXXX", "XXBX", "XA.X", "XXXX"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"AX.", "X.X", "BXX"};
    PathFinding* pObj = new PathFinding();
    clock_t start = clock();
    int result = pObj->minTurns(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=152347&rd=4585&pm=1110
********************************************************************************
#pragma warning( disable : 4786 ) 
 
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cstdio> 
#include <set> 
#include <map> 
#include <functional> 
#include <deque> 
 
using namespace std; 
 
int gt[ 20 ][ 20 ][ 20 ][ 20 ]; 
 
bool wal[ 20 ][ 20 ]; 
 
int dx[] = { 0, 1, 1, 1, 0, 0, -1, -1, -1 }; 
int dy[] = { 0, 1, 0, -1, 1, -1, 1, 0, -1 }; 
 
deque< pair< pair< int, int >, pair< int, int > > > daq; 
 
bool vald( int x, int y ) { 
  return x >= 0 && y >= 0 && x < 20 && y < 20 && !wal[ x ][ y ]; 
}; 
 
class PathFinding { 
  public: 
  int minTurns(vector <string> a) { 
    memset( gt, 0x40, sizeof( gt ) ); 
    memset( wal, 0xff, sizeof( wal ) ); 
    int ax = -1; 
    int ay = -1; 
    int bx = -1; 
    int by = -1; 
    for( int i = 0; i < a.size(); i++ ) { 
      for( int j = 0; j < a[ 0 ].size(); j++ ) { 
        switch( a[ i ][ j ] ) { 
        case '.': 
          wal[ j ][ i ] = false; 
          break; 
        case 'X': 
          wal[ j ][ i ] = true; 
          break; 
        case 'A': 
          ax = j; 
          ay = i; 
          wal[ j ][ i ] = false; 
          break; 
        case 'B': 
          bx = j; 
          by = i; 
          wal[ j ][ i ] = false; 
          break; 
        } 
      } 
    } 
    gt[ ax ][ ay ][ bx ][ by ] = 0; 
    daq.push_back( make_pair( make_pair( ax, ay ), make_pair( bx, by ) ) ); 
    while( daq.size() ) { 
      pair< pair< int, int >, pair< int, int > > ti = *daq.begin(); 
      daq.pop_front(); 
      int td = gt[ ti.first.first ][ ti.first.second ][ ti.second.first ][ ti.second.second ] + 1; 
      pair< int, int > na; 
      pair< int, int > nb; 
      for( int x = 0; x < 9; x++ ) { 
        if( vald( ti.first.first + dx[ x ], ti.first.second + dy[ x ] ) ) { 
          na = ti.first; 
          na.first += dx[ x ]; 
          na.second += dy[ x ]; 
          for( int y = 0; y < 9; y++ ) { 
            if( vald( ti.second.first + dx[ y ], ti.second.second + dy[ y ] ) ) { 
              nb = ti.second; 
              nb.first += dx[ y ]; 
              nb.second += dy[ y ]; 
              if( ( na != ti.second || nb != ti.first ) && na != nb ) { 
                if( gt[ na.first ][ na.second ][ nb.first ][ nb.second ] > td ) { 
                  gt[ na.first ][ na.second ][ nb.first ][ nb.second ] = td; 
                  daq.push_back( make_pair( na, nb ) ); 
                } 
              } 
            } 
          } 
        } 
      } 
    } 
    if( gt[ bx ][ by ][ ax ][ ay ] > 1000000 ) { 
      return -1; 
    } else { 
      return gt[ bx ][ by ][ ax ][ ay ]; 
    } 
  } 
};

********************************************************************************
*******************************************************************************/