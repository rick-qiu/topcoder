/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8508
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

class LargestGap {
public:
    int getLargest(vector<string> board);
};

int LargestGap::getLargest(vector<string> board) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {".....X.X......."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"XXXX", "....", "XXXX", "....", "XXXX", "...."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"XXX.........XX...........XX..X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"XXX", "X.....", "....XX..XXXXXX", "X........X..", ".XXX."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"X.XX...X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"X.X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"X.XX.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {".............XX...............XXXX................", "..XX................XXXX...................XXXX...", "..........XXXX..................XX.............X..", ".................X.............XXXX.............XX", "XX...................XXX................."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 221;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"XXXX......XXX.........XXX.........XXX......XXX....", "..XXXXX.........XXXX.........XXXX.........XXXXX...", "....XXXX......X......XXXXX.......XX......XXXXX....", "..XXXX......XXXX.......X......X.......XX.........X", "........XX........XXXX.......X......XXX......XXXXX", ".........XXXXX......XXX.........XXXX.......XXX....", "..XXXXX........XX.........X......XX.........X.....", "..X........XXX.......XXXX......XXXXX.........XXXX.", "........XXXX.......XXX.........XXX......X.......X.", "........XXXX......XX.......XX......X.........X....", "....XX........XX.......XXXXX.........XXX.......XXX", "X.........XX........X.........XXXX.........XXX....", ".....XXXX.........X.........XXX......XXXXX......XX", "X.......XXXX........XXX.........XXXXX.......X.....", "....XX.......XXXX........XXXX.......XX.........XXX", "X........XX.......XXX.........X.......XXXXX.......", "XXXXX........XX.........XX.......X........XXXXX...", "...XXXX.........X........XXXXX.......XXXX.......XX", "XX......XXXXX........XXXXX......XX......X.......XX", ".......XX.......XXXXX......XXXXX......XXXXX......X", ".........XXXX.........XX......XXXXX.......XX......", ".XX.........XXXX.......XX......X......XXXX........", ".XXX......XX......XXXXX........X........XXXXX.....", ".XXX.......XXXX......XXXXX.......XX.......XXXXX...", "...XXXXX.......XXXX.......XXXXX......XX.......XXX.", "......XXXXX.........XXXX.......XXXX......XXXXX....", "....X.........XXXXX.........XXXXX........XXXX.....", "..XX........XXXX.......X.........X.........XXX....", ".....XXXXX.......X.......XXXX.......XXXXX.......XX", "......XXXX.......XXXX........XXX........XXX......X", "XXX.......X.........X.......XXXXX........XXXXX....", "..XXXXX.......X........XX........XXXXX.........XX.", ".....X.........XXX........XXXXX.......XXXX.......X", ".........XXX......XXXXX........XXX........XXXX....", "....XXXXX........XXX.......X.......XXXXX.......XXX", "XX.........XXX........X.........X.........XXX.....", ".X........XXXXX......X......XXX......XX......XXXXX", ".......XXX.........XXXXX.......XXX.........X......", "XXXX........XXXXX........XXX.........X.........XXX", "XX.......XX.......XXXX.......XX........X.......XXX", "XX......XXXXX......XX........XXXXX.......XX.......", "..XXX.......XXXXX......XXX........X......XXXXX....", "..XXXXX........X......XXXX.......XXXXX......XX....", "..X.......XXXXX.........X........X......."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {".........XXX...........X..........XXXX...........X", "XXX.........XX..........XX.............X..........", "XXXXX..........X.............XXX............X.....", "......XXXX.............XXXX..........XXXXX........", "..X..............XXX............XXX.........X.....", "....XXXX..............X............XX..........X..", "............XXXX..........XXXX..........XXXXX.....", ".....XXXX..........XX............XXXX...........X.", "...........X..........XX..........XXXXX...........", "...X............XXX..............X...........XXXX.", "..........XXXX.........XX............XX...........", "..X............XXXX............X..............X...", "..........XXXX...........XXXXX...........XXXX.....", ".........XXXXX.............XX.........XXXXX.......", "..XXXXX.............XXX..............XXX..........", "...XXXX..............X..........XX...........XXXXX", "............X..........XXX............XX..........", "XX...........X............XX.........XXX.........X", "X.........XX..............X..............XXXX.....", "........XXX..........X............X............X..", ".........X............XX..............XXXX........", ".XX..............XXX..........XXXXX..............X", "............X.........XX..............XXXX........", "...X...........XXX.............X..........XX......", ".......X.............XXX.............XXX..........", ".X...........XX............XX.........XXXXX.......", ".....XXX..............X.........XXX..........XXXXX", ".............XX..............XXX...........X......", "......X.........XXX............"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"..XXXX..XXXXX.....XXXX...X..XX.....XXXX.......XXX.", ".....X..X.......XXX......XXXX.......XX.....XXXX...", "....X......XXXXX...XXXXX.....XXXXX......XXXXX....X", "XX......XXXXX.....XXX......XXX....X..XXXXX...XXXX.", "...X....XXXXX...XXXXX......XX.......XXXXX....XX...", "..XX...XXXXX...X..XXXXX......XXX.....X.......XXX..", "....XXXX...XXXX....XX...X....XXX..XXXX.......XX...", ".XX.......XXXX.......XXXX..XXXX..XXXXX..XX...XXXX.", "..XXX.....X.....XXXXX..XXXXX...XXX......X.....XXX.", "..XXXXX..XX......XX.....XXXX..XXXX..X.......X....X", ".......XX...XXXXX..X.....XXXXX..XXXX......X....XX.", "....X....XXXX......XXXX...XX......XXXX.....XXXXX..", "..XX.....XXXXX......X...XX...XXX.....XXX.......XXX", "....XXXXX..XXXXX.....XXXX...XXXXX....XXX.....X..XX", "XX.......XXXXX.......XXXXX.....XX......X.......XXX", "XX...XXXXX...XX....XXXX..X.....XXX....XXXX..XXX..X", "XXX.....X.......X......XX.......XX....XXXX.......X", "...XXX..XXXX...XX...XXX.....XXXXX..X......XXX....X", "XX...X....XXXX..XXX....XXX.......XXX.....XXX.....X", "XXXX....XX....XXXXX...X......XXXXX...XX......X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"......XXX......XXXXX.....XX.....XXXX.....X......XX", "X.....XXX.....XXXXX......XXXXX......XXXXX......XXX", "XX.....XXXX.....XXXX......XX.....XXX......X......X", "XXXX......XXXXX.....X.....X......XXXXX......XX....", ".XXX.....XXXXX.....XXXX......X......XX.....XXXXX..", "....XX......XXXX......XX......XXXX.....XXXXX......", "XXXX......XX.....XXXX.....XXXXX.....XXXXX......X..", "...XXXXX......X......XX.....XXXXX.....X......XXX..", "...XX.....XXXXX.....XXX......XXXX.....XXXX......XX", "X......XX......XX.....XXX......XXXX.....XXXX......", "X......XXXX.....XXXX......XXXXX.....XX......X.....", "XX.....X.....XXXX.....XX.....XXXXX......XXXXX.....", ".X.....X......X.....X......XXXX......XXXX.....XXXX", "X......XXX.....XXXXX......XXXX......X.....XXXXX...", "...XX......XX......XX.....XX......X.....XXX.....XX", "XX......X.....XX.....XXXX.....XXXX......XX......XX", "XXX......XX.....XXX.....XXXX......XXXXX.....XXX...", ".."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {".XXXXX..XXXXX...XXX...XXXX..XXXX...XX..XX..X...XXX", "..X.XXXXX..XXXXX...XXXX...X...XXXX...XXXXX..XXXX..", "XX...XXX..XX.X..XXX..XXXX.XX.XXXXX..XXXXX.XXXXX.XX", "XXX.X...XXXX...XXXX..XXXX.XXXXX..X..XXX.X..XXX..XX", "XXX...X..XXXXX.XXXXX...X.X...XXXX.XXXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {"XXX.......XXX......XXXX........XXXXX........XXX...", "....XX.........XXXXX......XXXX........X.......X...", ".....XX.........XXXXX........X........XXXXX.......", ".XX.......XXXXX........XX.........XXX......XXX....", "..X........XXX.......XXXXX.........XXX........XX..", ".......XXXXX........XXXX.........XX......XXX......", "...XXXX......XX......XXXX........XXX........XXX...", "...X........XXXXX........XXX.........XXXXX........", ".XXXXX.........X.........XX.......XXX......XXX....", ".....XX.........XXX......X.........XXX.........XXX", "XX......XXXXX.......XXX.......XXXXX.......X.......", ".XXX.........X........XXXXX......XXXX.......XXXXX.", ".......XX........X.........XXXX......X........X...", "......XXXXX......XXXXX.......XXXX.......XX......XX", "XX......XXX........XXX.........XXX.......XXX......", "..XXXX.........XX.......XXXX........XXXX......X...", "....XX......XXXX......XXXXX.......XXXXX......X....", "..XXX........XXXX......X........XXXXX........XXXXX", "........X.........XXX.......XXXX.......XXXXX......", "...X......XXXXX.......XXXXX.......XXXXX......XXXX.", ".....XXXXX........XX........X.........XX......X...", "....XXXXX........X........XXX.......XXXXX......XXX", ".........XX.......X.........XXXXX........XXXX.....", "..XXXX........XXXX........XXXXX.........XXXX......", "...XXXX.........XXXXX.......X.........XXXXX.......", "..XXXXX.........XXX......XXX........XX.......XXX..", "......."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 387;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"..........XXXX............XXX.........XXXXX.......", "....XXXX..........X.........XXXXX.........X.......", "XXXX.......XXXX........XXXXX........X..........XXX", "X........XXXXX...........XX...........XX.....XX...", "...XXX...........XXXX............X.........X......", "......X..........XXXXX........XXXXX............XXX", "XX.........XXXX.........X...........XXX.......XXX.", "............XXX......X.......XXXX.........XXXX....", "........XX..........XXX......XXXXX...........XXX..", ".......XX........XXXXX...........XXX.....XXX......", "...XXX......XX...........XXXX......XX..........X..", "....XXXXX..........XXXX........XXXX.....X......XXX", "X......XX..........XXXX.......X............XXXXX..", "....X......XX.........XXXXX........XXXX...........", "..XX.........X............XX...........XXXX.......", "..XXX.............XXXX......XXXX.......XXXX.......", "......XX.....XXXXX........XXXXX.....XXXXX........X", ".....XX.......X.......XXX......XXX.......XXX......", ".....XXXX............XXXX......XX.........XXXXX...", ".......XXXXX.....XXX.....XXXXX.........XX.........", "XX........X.............X..........X........XXXXX.", ".........XXX.........XXXXX........XX.............X", "XXXX........XXX.........X............XXX..........", "...X......XXX.........XX.........X........XX......", "XX.......XXX.......XXXXX......X...........XX......", "...XX.....XXXX...........XXX........XXXXX.........", ".XXXX..........X........XX.......X.....XXXXX......", "...XXXXX...........X..........XX............X.....", "......XXX............XXXX............XXX.......XXX", ".........XXXX.............X.........XXX...........", ".XXX...........XXX..........XXX.........X......X..", ".....XXXX..........XXXX.............XX............", ".XXX.............XX..........XXXXX.........XXX....", "........XXXXX........XX..........XX............X..", "....XXX...........XX............X...........XXX...", "..........XXXXX.......XX.......XXXX.........XX....", ".XXXX........XX......XX.........XXXXX..........X..", "...XXXXX.........XXXXX.....X..........XXXX........", "....XXXXX......XX.........XXXXX......XXXX......XXX", "..........XXXX.........XXXX.............XXX......X", "X............X.....XXXX.........XXX...........XX..", "......XXXX......XXX.............XX.............XXX", "XX.........XX.......XXXX............X........XXX..", "...........XXX........XXXXX.............X.........", "...X.....XXXX.........XXXXX.............XXX.....XX", "X..........XXX........XXX............X........X...", "....XXX.....XXX.............XXX..........X........", "..."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"XXX.......XX....XXXXX.......XX......XXX....XXXX...", ".XXX....XXX....XXXXX.......X......XX......X.......", "XX.....XX......XX.....XX....XXXXX....XXXX.....XXX.", "....XX.....XX.......XXX......XXXX....XXX.......XXX", ".....XXX......XXXXX....XXXXX.......X.....XXXX....X", "XX......X......XXX.....XXXX.......XXXX......XX....", ".X....XXXXX......XXXX.....XXXXX....XXXXX.......XX.", "....XXXX.......XXXX.......XXXXX......XXXXX......X.", "....X.....XXXX......XXXX......XXXXX.......XXXX....", "...XXXXX.......XXXXX.....XXX.....XXXXX......XX....", "...XXX.....XX.....XX......XXXX......XXXXX.....X...", "....XXXX......XXXX.......XX.......XXXXX.....XXXXX.", "....XXXX.......XXXX....X.....X....XXX.......XXXXX.", "....XXXXX.......XXXXX....XXX....XXXX.....X.......X", "XXX.......XXX.......XX......XXXXX....XXXXX.....X..", ".....X....."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 365;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"X...............XXX...............X...............", "XXXXX..............XXX...............XXXXX........", ".......XXXXX...............XXXX..............XXX..", ".............XX...............X..............XXXX.", ".............XXX..............XXX...............XX", "X...............XXXX..............X..............X", "..............XXXX...............XXX..............", ".XX..............XXXXX...............XXXX.........", ".....XXXXX...............XXXXX...............XXXX.", "..............XX...............X..............XX..", "............XXX..............XXXXX..............XX", "XX...............XXXXX..............XXX...........", "....XX...............XXXX...............XX........", ".......X...............XXXXX...............X......", "........XXXXX..............XXX...............X....", "..........XXX..............XXXXX...............XXX", "XX...............XX..............XXX..............", ".XX..............XXXXX...............XXX..........", ".....XXX..............XX..............X...........", "....XXX...............XXXXX...............XXX.....", ".........XXXXX...............XXXXX..............XX", "XX..............XXXX..............XX..............", ".XX...............XXXX..............X.............", ".XXXXX...............XXXXX..............XXX.......", ".......XX...............XXXXX...............XX....", "...........XXX..............XX...............XXX..", "............XX...............XXXXX..............X.", "..............XXXXX..............XXXXX............", "..X..............XXXX...............XXX...........", "...XXXX...............XX...............XX.........", "......X...............XXXX..............X.........", ".....XXXX..............XX...............XXXX......", "........XXX..............XXXX..............XX.....", "..........XXXXX.............."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"XXXXX.........X.........XXX.........XXX.........XX", "X.........XXXXX.........XXX.........XXX.........XX", "XX.........XXXX.........XXX.........XX.........X..", ".......XX.........X.........X.........X.........XX", "XXX.........XX.........XXXXX.........XXXX.........", "XX.........X.........XXXX.........XXXXX.........XX", ".........X.........XX.........X.........X.........", "XXXX.........XX.........XX.........X.........XXXXX", ".........X.........X.........XXXXX.........XXX....", ".....XX.........XX.........XXXX.........XXX.......", "..XX.........XXXXX.........XXXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"...XXXX.....XXXX.....XXX....XXXX.....X.....X...XXX", "XX....XX......XXXXX...XXXXX....X......X....X...XXX", "X....X.....XX......XXX...XXXXX.....XXXXX......XX..", ".X.....XXX....XX....XXXXX...XXXXX.....X....X.....X", "XX....X...X...XXXXX......XXX.....XXX...XX.....XXX.", ".....XXXX.....XXXX....XXXXX....XXX...XXX....X...X.", ".....XXXX.....XXX...XXXX.....XXXX...XXX....X......", "XX...X......XX....XXXXX.....XXXX.....X......XXX...", ".XXXX......X....XXXX.....X......XXX....X......XXX.", "..XXXXX....XXX.....XXXXX......XX.....X......XXXX..", "....X...X....X.....XXXXX....XXX....XXXXX.....X....", ".XXX.....XXX...X....XXXXX...XXX.....X...XX...X....", ".XXXXX....X......XX...XX......XXXXX......XXXX.....", ".XXX...X....XXXX....XXX......XX...XXX....XXXXX...X", "X......XX.....XX...XXXXX...XXXXX.....XXX.....X....", "XXX...XX....X.....X.....XX.....XXX.....XX...XXXX..", "..X...X....XXXX...XXXXX...XXXX.....XX...XXXXX.....", ".XXX......X...XXX.....XX....XXXX......X....XXXXX..", "...XXXX....X...XXXXX......XXX......XXXX...X....XXX", "X...X.....X.....XXX...XX....XXX...XXXX.....XX....X", "XXX......XX.....XX...XXXXX......XXXXX....XXXXX....", ".XXXXX.....XXXXX......XXXX...XXX....XXXXX.....X...", "..XXXXX.....XXXXX...XX.....X.....XXX...XXX......XX", "XX......XX...XXXX.....X......X...XXXXX...X...XXX..", ".XXX.....X.....XXXX...XXXXX....XX.....XXXXX....XX.", "..XX....X....XXXXX.....X...X....XX...X......XXX...", "XXX......X...XXX...XXX....XXXXX.....XXX....XXXX...", ".XX.....XXXXX.....XXX.....X.....XXXXX......XXX...X", "XXXX...X......XX.....X....XX......XXX....X....XXXX", ".....X....XX....XXXX.....XX.....XXXX.....XXXX.....", "XX....XX......XXXXX...XXXX...XX.....XXX.....XXXXX.", "..XXX...XXX...XX......XXXXX.....XXXXX....XXX.....X", "XXX....XXXX...XXXX......XXXXX....X......XX......XX", "X....XX.....XXXX.....X...XXXX......X......XXX...XX", "X.....X....XXXXX....XXXX....XXXXX.....XXX....X....", "XX.....X...XXXX....XXXXX....X...X.....XXXXX.....XX", "X...X.....XXXX....XXXX......XX.....XXX....XXXX....", ".XX.....XXXXX.....XXXXX......X...XXXX......X.....X", "X....XX...XX...XX....XX.....X....X....XX....X.....", "XXX......XX......XXXX......XX...XX......X.....XXX.", "..XX......XXXX......XXXX......X.....XX....XX.....X", "X......XXXX......X....X...XXXXX...XXXX......XXXXX.", "...X....XXXX...XXXXX...XXXX.....XXX......XX....X..", "...XX.....X......XXXX......XXXXX.....XXX......XXXX", "......XXXX......XXXX...XX.....XXXX...X.....XXXX...", "...XXXX......X......XXXXX......XXXX....XX......XX.", ".....XXXX.....XXXX....X....X.....XXXX.....XXXXX...", ".."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"......XXXX.......XXXXX.......XXX.......X.......XXX", ".....XXXX.......XXXX......XXXX.......XXXX......XXX", "XX.......XX.......XX......XXX......XXXX.......X...", "...XX......XXX......X......X......XX.......XXXXX..", "...X.....XXX.......XXX.....XXX......XX.......XXX..", "....XXXX.....XX......XXX......X......XXXX......XXX", "X.......X.......XXX......X.....XXXX......XX.....XX", "XXX.....XX.....XXXXX.....X.......XXXXX.....X......", ".X......XXXXX.......X.....XXX.....X.....XX.......X", "X.....XX.....XXX......XX.......XXX......XXXX......", "XXX......XXXX.....XX.....XX.....XXX.....XXX.....XX", ".......X.......XXXX.......XXX......XXXXX.....XXX..", "...XX......XXX.....X.....X.....XXX.......XXXX.....", "X.......XXX.....XXXX.....XXXX......XXXXX......XX..", "....XXX.......XXXXX.......XXXX......XXXXX.......XX", "XXX......XXXX.......X.....XXXXX.....XXXX.......X..", "...XXX.....XX.......XX.......XXXX......XX.......XX", "XXX......XXXX.....XXXXX.......XXX.......XXXXX.....", "..X.....XXX.....XXXXX.....XXXX.....X......XXXXX...", "...XXX......XXXXX......XXXX.......X.....X......XXX", "X......XXXXX.....XX......XXX......X......XXXX.....", "..XXXXX.....XXXXX.....XX......X......XXX.....XXX..", "....XXX.....XX......XXXX.....XXX.......XX.....X...", "...XXXXX.....XX.....X.....X.......XXX.....XXXX....", "..XXXX......X.....XX.......XXX......XXXX.....XXXX.", "....XXXXX.....XXXX.......XXXX......XXXX.......XX..", "...X.......XXXX.....XXX......XXX.....X.....XXXX...", "....XXXXX.....XXX......X......XXX.....XXX.......XX", ".....XXXX......XXX......X......XXXX......XX.....XX", ".....XXXX......XXXX.....XXX......X......XXX.......", "X.....XXXX.....X.......XX.......XXX.......XXXXX...", "..XX.......XXXXX.....XXX.....XXXX.....X......XX...", "...XXX.......XX.....XX.....XXXX.......XX.....XX...", "..XX.....XXXX.......XXXX......X......XXXX.......XX", "XX.....X......XXX.....XXX.......XXX.......XX.....X", "......XXX.....XXXX.......XXX.......XXXXX......X...", "....XXXXX......X.......XXXX.....XXX......XXXXX....", ".XXXXX......XXX.......X.....XX.....XX.......X.....", ".X......XXXXX......XX.......XXXXX.....XX.......XX.", "......XXXXX.......XXX.......XXXXX.......XXXX......", ".XXX.......XXXX......XXX.......XXXX......XXXX.....", "..X.......XXXX.......XXX.......XX......X.......XX.", ".....X.....XX.......XXX.......XXX......X.....XXXXX", ".......XX......XXXX.......XXX.....XX......XXXX....", ".XXXXX.....X......XX......XXXXX......X.....X......", ".XXXXX.......XXXXX.....XXX.....X......X......XXXXX", "....."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"...........XX...........XXX...........X...........", "XX...........XXXX...........X...........XXX.......", "....XX...........XXX...........XXXXX...........XXX", "XX...........XX...........X...........XX..........", ".XXXX...........XXX...........XXXX...........XXX..", ".........XXXX...........XXXXX...........X.........", "..XXXXX...........X...........XXXX...........XXXXX", "...........XXXX...........XXXXX...........X.......", "....XXXXX...........XXX...........XXXX...........X", "...........XXX...........X...........XXX..........", ".XXXX...........X...........XXXXX...........XXXX..", ".........XX...........XXXXX...........XXXX........", "...XXX...........XX...........XXX...........XXXXX.", "..........XXXXX...........XX...........XXX........", "...XXXXX...........X...........X...........XXXX...", "........XXXXX...........XXX...........XX..........", ".XX...........XXXXX...........XXXXX...........XX..", ".........XX...........XXXXX...........XXXXX.......", "....XXXXX...........X...........XXXXX...........XX", "X...........XXXX...........XX...........X.........", "..XXXX...........XXXXX...........XXX...........XXX", "...........XXXXX...........XXX...........XXXX.....", "......XXX...........XX...........XXXX...........XX", "X...........XXX...........XX...........X..........", ".XX...........XX...........X...........X..........", ".XXX...........XX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"...........XXXXX.......XXX..........XX......XX....", ".....XXX..........XX..............XXX......XXXX...", ".......XXX............XXXX......XXX......XXX......", "......X........XXXX.........XXXX......XXXX........", "....XXXXX........X........XXXX............XXXXX...", "......XXX......XX..............XXXXX......XXXX....", "..........XX......XX............XXXXX...........XX", "............XXXXX.........X........X...........XXX", "X...........XXXX.......XXX...........XXXX.........", "..XXX.............XXX..............XXX............", ".X............XXXX.........XX.............XXXXX...", "......X.............XX...........X........XX......", ".......XXXX.......X..............X.......XXX......", "...XXXXX..........X..............X.........X......", ".......XXXXX..............X...........XXX.........", "XX..........XXX............XXX.........XXXXX......", "...XXXXX.......XX.......XX........XXXX.......XX...", "....XXX.............X..............XXXX......X....", ".........XXX........XXXXX.......XXXX........X.....", "..XX.............XX.............XX.............XXX", "......XX............XXX......X........XXXX.......X", "XXX..........X..............XXXX.............XXXX.", "........XX........XX..............XXXX..........XX", "XX..........XXX........XX.............XXXX......XX", "..............X......XXXXX..............XXX.......", ".X............XXXX........XX.......XXXX..........X", "........XXXXX...........XXX.......XXX.........XXXX", ".......XX.........XXX............XX...........X...", ".........XXX.............XXXX.............XX......", "......XX............XXXXX..........XXXX........XXX", "XX..........XX.............XX..........XXXXX......", "....XXX........X..............X.............X.....", "...XXXX......XXXX........XXXXX..............XXXXX.", "...........XXXX........XX...........XXXX..........", "...XXX...........XXXXX.........XXXX........XXX....", ".........XXX..............XXXXX..........XXXX.....", "........XXXX.............XX......X......XXXXX.....", "........XX..........X.........XX..............XXXX", "X............XX...........XXXX.............X......", "......XXXXX.........XXX..............XXXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 468;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"XXX..XXXXX...XXXXX.....XX....XXXXX....XXXX...XX...", ".XXXX.....X...XX...X.....XXX....XXXX....X...XXXX..", ".XXX....XX.....XXXXX....X...X.....XXXX....X....X..", "...XX....X....X...XX..XXXXX....XX...XXX..XXXX...XX", "XX....X.....XXX....XX...XXX..XXXXX..XXXX.....XX...", "..XXXX.....XX....XXXXX...XXXX..X.....X...XXXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 245;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"XXX...............XXXX...............XXXXX........", "......XX.............XX.............XXX...........", "....XXX..............X.............XX.............", ".XXXX.............X..............X.............XX.", "..............X.............XXXX..............XXX.", "..............XXXX..............XXXX..............", "XXX.............XX..............XX..............XX", "XXX...............XXX...............XXXX..........", "...XXX...............XXXX.............XXXX........", ".....XXXX.............XX...............XXXX.......", "........X.............X..............XX...........", "...XXX..............XXXX.............XXXX.........", "....XXXXX.............X...............XXX.........", ".....X...............XXXX..............XXXXX......", ".......XX..............X.............XXXX.........", "......X...............XXXX..............XXXX......", ".........XXXXX...............XXX..............XXXX", "X.............XXX...............XXX.............XX", "X..............XXX...............XXXX.............", "X..............XXXX..............X.............XXX", "X.............XXX..............X.............X....", ".........XX.............XXXX...............XXXX...", "..........XX..............XXX...............XXX...", "............XXXX...............XXX.............XX.", "..............X..............XXXXX...............X", "X..............X.............XXXX...............XX", "XX...............XX..............XX..............X", "XX...............XXXXX.............X.............X", "X.............X.............X.............XX......", "........XXX..............XXXX...............XXXX..", "............"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"..........XXXX.............XXX...........XX.......", "........XX...............X...............XXXXX....", "....XXX............XXX.............XXXXX..........", ".......X............XX...............XXXXX........", "......X.....XXXXX........XXXX......XXXXX.........X", "...........XX..........XX.........XXXX.......X....", "...........XX...........XXX................XX.....", "..........XXXX..............XXXXX..............XX.", "........XX.............X.......XXXX..............X", "XXXX.......XXX.....XXXXX.............XXXX.........", "..XX.........XXXX...........XX.............XX.....", "..........XXXX..............XX................X...", "..............X..............XX..........XX.......", "...XX................X.................XXXXX......", ".......X..............XX.............XXXX.........", "...XXXXX.....XXX...........XXXXX.............XX...", "...XXXXX.........XXXX...........X..........XXXX...", "..............XXXX......X............XX...........", ".X.....XXXX..............X.....XXXXX........X.....", "..........XXXX.........XX........XXX.............X", "X.....X..............X.........XXXXX..............", "..X........XX..........XX........XX...............", ".XXXXX......XXXXX.........XXXXX..........XXXX.....", "...........XX................XXXXX......XXXXX.....", "XXXXX.......XX.................XX........XXXXX....", "........XX.......XXXXX................XXXXX.....X.", "...............XXXXX.........XXX........XXX.......", "....XX.......XXXXX................X...............", ".XXX............X.........XXX..............XXX....", "........XXX..............XXXXX.........XX.........", ".......XXX................XXXX.......XXXXX........", "....XXXXX...............XXXX......X...............", "..XXX.........XXXX..............XXXXX.............", "..XX..............XXXX...........XXXXX............", "XXX......XXX.......XXXX.....XXXX...............XX.", "...........XXXXX..............XXXXX..............X", "XX........XX................XX...........X........", "XXX.........XX........XXX.......XX...........XXXXX", "................XXXXX.................XX..........", ".XXXX........XX.........XX.........XXXX...........", "..XXXXX............XXXX...............XX..........", "X.......XXXX........XXX.........XX........XXX.....", "....XX..........XXX.................XXX.....XXXX..", "....XXXXX................XXXX...........XXXXX.....", "............XXXXX..............XXXX........XXXX...", "..XXXXX...........XXX.........XXX...............XX", "...........X.........XXXX.....XXXXX...........XXX.", "..............XXXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 596;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"..............XXX..................X............XX", "X...............XX..........XXXXX.........X.......", "...........XXX.................XXXXX..............", "...X............XXX..............XXX..............", "..XXX.................XXXX.................X......", "...........XXXX...........XXX................XXXX.", "..........XXXXX............X.............XXX......", "...........XXX.................XX...........XXX...", ".......XXXX..............XXXX...........XXXXX.....", ".........XXXXX............XXXXX...............XXXX", "..........XXXXX...........X.................XX....", "..............X..............XXX............X.....", ".....X.........XXXX.........XX................XXX.", ".............XXXX.........XXXXX...............XXXX", "..............X.........XXXXX..........XXXX.......", "......XXX..............XXXXX................XX....", ".....XXXX.............XXXX.........XXX............", "..XX.........X..................XXXXX.............", "X.............XXXX..........XXXX.............XX...", "..............X.........XXXX..........X...........", "XX.................XXX................XXXXX.......", ".........XXXX.........X.................XXXXX.....", "........XXXXX.........XXXXX.................."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {".........XXXX..........XXXX..........XXXXX........", "..X.........XXXX..........XXXXX..........XXXX.....", ".....XXX..........XXXX..........X..........XXXX...", ".......XXXXX..........X.........X..........XXX....", "......X.........X..........X.........XX.........X.", "........XXX.........XXX.........X.........XXX.....", "....X..........XXXXX.........X..........XXX.......", "..XXX.........XXXX..........XXXX..........X.......", "..XXXXX..........XXXX..........XXXX.........XXX...", "......XX..........XXX..........XXX.........XXXX...", ".......X.........XXXX.........XXXX.........X......", "....X..........XX.........XXXXX.........X.........", "XXXX.........XX..........XX.........XXXXX.........", ".X.........XXXXX.........X.........XX.........XXXX", "X.........XXXXX..........XX..........XXXXX........", ".XXXXX..........XX.........X..........XXXXX.......", "..XXXXX..........XXXXX..........XX..........XXX...", "......XXXX.........X..........XX.........XXX......", "...X..........XXXXX..........XX.........XX........", ".XXX.........XXX..........XXXXX..........X........", "..XX.........XXXXX..........XXXX.........X........", "..XXXX.........XX.........XXXX..........XX........", ".XXXX.........X.........XXXXX.........XX.........X", "XX.........XX.........XXX..........XX.........XXX.", "........XXXX.........XXXXX..........XXXX.........X", "XX..........XX.........XXXXX.........XX..........X", "X..........XXXX.........XXX..........XXX..........", "XX.........XXX..........XXX..........XXXXX........", ".X..........XXXXX..........X.........XXX..........", "XX..........XX..........XXXXX.........XXXXX.......", "...XXXXX..........XXXX.........XXXX..........XX...", ".......X..........X..........XX.........X.........", ".XXXXX.........XX..........XXXXX..........X.......", "...XXXXX.........XXXXX.........XXXXX..........X...", ".......XX..........X..........XXX..........X......", "....XXXXX.........XX.........XX..........XXXXX....", "......X.........XX.........XXXX.........XXX.......", "..X.........XXXXX.........XXXX..........XXX.......", "...XXXXX.........X.........XXX..........X.........", ".XXXXX.........XXXX..........XXXXX..........XXX...", "......XXXX.........XXX..........XXXX.........XXXXX", ".........X.........X..........XX.........XXXX.....", "....XX.........XXXX..........XX..........XXX......", "....X..........XX.........XXXX..........XXX.......", "...XXX.........XX........."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {".......XX...........XX.............XX...........X.", ".......XXX.........XXX...........XXXX........X....", ".........XXXXX............XXXXX.........XX........", "..XXX.........X...........XXX.......X..........XXX", "XX.........XXX.........XX.............XXXXX.......", "..."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 238;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"...XXXXX.......XXX...XX......XX.......XXX....XX...", ".XXXX..XXXX.X..X.XX....XXXX..XXX.....XXXXX......X.", ".XX...XXX......XXXX.......XXXX......XXX......X.XXX", "X....XXXXX....XXXX....XXXXX.XX..XXXXX..XX..XX..XX.", "....XX..XXX.XXXX......XX.....X.......XXXXX.......X", "XXX.....XX..XXXX....XXX.....XXXXX...X..XXX..X.XX..", "..XX.......XXXX......X..X..XXX.....XXX.......X..XX", "XX.XX...XXXXX.......X.XXXX.......X...XX..X....XXXX", "X....XXXXX.XXXXX.......XXXX...XXXXX..X...XXXXX....", "."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"X...X.............XX..........XXXXX........XXXX...", "......XX....XXX..........XX...........X..XXX....XX", "X............XXX............XX......X....XXXX.....", "XXX.......XX.........X..........XXX.........X...XX", ".......XXX.............X..XXX.......XXXX.........X", "XXX............X.....X..........XXXXX.........XXX.", "..XXXXX....XXXXX..XXXXX..............XXX..........", "..X..............XXXX..........XXX.........XXXX...", ".....XXXXX.....XX........XXXX.........XX.....XXXXX", "........XX...........X...X...........XXX.......XXX", "X............XXXXX..........X....XXXX.....XXXXX..X", "XX..XXXXX..............X......XXXX.........X..XXX.", ".........XX....XX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 337;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"..........XXXXX......X.......XXX........XXXX.....X", ".......XXX.........X.........X.........XXXXX......", "..XXX.......XX......X.......XXXX..........XX......", "X.........XXX..........XXX......X.......X.......XX", "X.........XXXX.....X..........XXXX.......XXXX.....", "..XX.......XXXXX.........XXXX..........X.....XXXX.", "......X..........XXXXX........X.......XXXX........", "XX.......XX..........XX.....XXXX..........XX......", "..XXX......XX..........XXXX......XXXX.......XXX...", "...XXXX........XXXXX........XXXX.....XXXXX........", "XXXX......XXXXX..........XXX..........XX.........X", "XXXX.......XX.........XXX......XX........XXXXX....", "...X.....XXX.........X........XXX.....X..........X", "X......X.....X.........XXXXX......XXXX.......XXXXX", "......X..........XX.......XXXXX........XXXXX......", "....XXXXX.........XXX.....XXXX......XXXX......XX..", "....XXXXX.....XXXXX......XXX..........XXX.........", ".XXXX.........XX..........XXXX.....XXX.........XX.", "....X......XXX......X........XXXX.......XX........", "..X..........XX......XXXX.....XX.........XX.......", ".XX.........X.........XXXXX.........XXX......X....", "....XXX......XX.......XXX........X........XXX.....", ".....XX.......XXXX..........XX..........X.....XXX.", "......X.........XXXXX......XXX..........XX.......X", "XXXX.....XXX......XXX.....XXXXX..........XXX......", "X......XXXX......X......XXX......X........X.....XX", "XX.....XXX.....X.....XX.........X........XXXX.....", ".XXXXX.......X........XXXX..........XXX..........X", ".......XXXX......XXXXX......XXX......X......XX....", ".....XXXX......XXX........X.......XXXXX.....XXXXX.", ".....XX.....XX.........XXX......XXXXX......XX.....", "...XXXXX.....X..........XXXXX.....XX.......XXX....", "...XXXXX.....XX..........XXXX..........XXX........", "..XX.........XXX..........XXXX..........X........X", "XXXX.......XXX......X..........XXX.....XXX.....XXX", "X.......XXX..........XX........XX.........X.......", "..XX.......XXXXX.......XXXX........XXXXX.....XX...", "...XXXXX........XXX.......XX......XXX........XXXXX", "......XXXXX.......XXX.....XXX.......XX.......XXXX.", ".........XXXX.......XXXX.....X.........XXX........", "XXXX.........XXXX..........XXXX.....XX.....X......", "....XXXXX......XXXX......XXXXX.....XXX.........XXX", ".....XX.......XX........XXXXX.........XXX.........", ".X........XXXX......XXXXX..........XXXX..........X", "XXX........XXXXX.........XXX..........XXXX........", "..XX.......X......X..........XXXX.........XXXX....", "...XXXX.....X......XXXX..........XXXXX.......X....", "......XXXX.......XXXX.........XX......XXXXX.......", "..XXXXX.......XXXXX......X........XXXX.....X......", "..XXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 525;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"..............XXX..............XX...........X.....", ".........XXX..............XX............X.........", "...XX..............XXXX............XX............X", "XXX...........XXXX..............XX..............XX", ".............XXX............XX...........XXXXX....", "..........XXX...........X..............XXXXX......", "........XXXX...........XX............XX...........", "XXXXX.............XXX............XX.............XX", "XXX............XX..............XXXXX.............X", "XXXX...........XXXX.............XXXX..............", "XX............XXXXX............XXXXX............X.", "..........XXX.............XX.............X........", "...X............XXXX..............XXX............X", ".............XXXXX..............XX...........XXX..", "............XXXX............."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"XXXX.....XXXX...XXXX.....XXXX....XXXX.....XXX.....", "XXXX...X...XXX....XXXX.....X....XXXXX...XXX....X..", ".XXXX....XXXX....XXXX.....XXXXX...XXXXX.....XXX...", "XXX...X...XX...XX...X....XXXXX.....XXXX...XXX....X", "XXXX...XXX.....XXXX...XXXXX....XXXX.....XX...XXX..", ".XXXX....XXXXX.....XXX....XXXX...XXXX.....XXXXX...", "..XXX...XX...XXXX....XX....XXXX.....XX.....XXX....", ".XX...X...XX.....XXX.....XX....XXXXX.....XXX.....X", "XXX...XXX...X...XXXXX....XXXXX.....XXXXX....XXXX..", "..XXX...XX...XX...XXXXX....XXX.....XXX...XXXXX...X", "XXXX...XX....XXXX...XXXXX....XXXX....XXXX...XXXXX.", "...XX...XXX...X...XX.....XXX.....XXX...XXX.....XX.", "...XX...XXXXX...XX...XX.....XX...X...XX...XXXX....", ".XXXX....XXX...XXXXX.....XXXXX....XXXX...XXXXX....", "XXXX.....XXXX...XXXX...XX....XXX...XXXX....X.....X", "XXXX...XX.....X.....XXX...XX....X.....XXXXX...XXX.", "....X.....XXXXX...X....XXXXX.....XXXXX...XXXX.....", "XXXX...XXXXX...X...XXXXX.....XX.....XX...XXXX...XX", "....XX.....XXXXX....XX...XXXX.....XX....XXXX.....X", "XX....XXX....XXX...XXXXX.....XXX.....XX....X.....X", "XXX...XXXX...XXX....X.....X...XXXXX...XXXXX...X...", "XXX....XXX.....XX.....XXXXX.....XXX...XXXXX.....XX", "XX.....XXX....X.....XXXXX.....XXX.....X.....XXXX..", "..XXXX...XX...XXXX.....XXXXX...XXXXX...XX....XXX..", ".XX....XX....XXXXX...X...XX....XXXXX.....X...XXX..", ".XXXXX.....XXXXX...XXXX...X....XX...XXX....XXX....", ".XXXX.....XXXXX....XXXX....XXXX.....XXX.....X...XX", "XX....XXX.....XXXXX....XXX....XXXXX.....XXXX.....X", "X.....XXX....XX.....XX....XXXXX.....XXX....X.....X", "X.....XXX....XXXX.....XXX.....X.....XX....X.....X.", "....XXXXX.....XXXX...XXX....X.....XXX...XXX....X..", "..XXXX.....XXXX.....X...XXXX....XX....XXXX.....XXX", "...XXXXX...XXX.....X...X...XXX....XXXX....XXXXX...", "..XXXX....XXX...XXXXX....XXX.....X.....XXXX.....XX", "XX.....XXXXX....XXX...XXXXX.....XXXXX.....X....XXX", "X....XX...XXX.....XX.....XX....XXXXX...XXX...XX...", "..XX...XXXXX.....XX....XXX...XX.....XXXXX.....XXX.", "....XX....XXXX....XX....XX....X...XXXX...X.....XXX", ".....XXXXX....X....XX....XXXXX.....XXX....XX...XXX", ".....XX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {".........X........XX........XXXX........XX........", "X........XX..........XXXX........XXX..........XXXX", "........XX........XX........XXXX........XXXX......", "....X........XXXX..........XXX........XXXXX.......", "..XX........XXX.........XXX..........XXXXX........", "XXX........XXXX........XXXX........XXXX........XXX", "..........XXXX..........X.........X..........X....", ".....XXXX........XX.........XX........XXXX........", "XXXXX.........XXX.........XXX..........XXXX.......", "..XXXX..........XXXXX........X.........XX.........", "XXXX..........XX........XX..........XX.........XXX", "XX.........X..........XXXXX........XXXXX..........", "XXX.........XX........XXX.........XXXXX.........XX", "XX........XX.........XXXX........XX........XXX....", ".....XXXXX.........XXX........XXX.........XXXX....", "......X........XXXXX.........X.........X..........", "XXX.........XXXXX........XXX..........XX..........", "XX.........XXXX........X..........XXXXX..........X", "XXX........XXX........XXX..........XX.........XX..", "......XXXXX..........X..........X.........XXXXX...", "......XXXX........XXXXX..........XXXXX.........X..", "........XXXXX.........XX.........X.........XXXX...", ".....XXX.........XXX........X..........XXXX.......", "..XXXXX.........XX.........XX.........XX..........", "XX..........XXXXX........."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1212;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {".............XXXXX............X...........XXXX....", ".......XXXXX.............XXXXX...........XXXX.....", "............X.................X.................XX", "X..........X.............XXX................XXXX..", "........XXX...........XXXXX............X..........", "....XXX.............XX..................XXXX......", "........XXXX..........XXX................XXXX.....", ".......X...............XXXXX...............XXXX...", "...........XX..............XXXXX............XX....", ".............XXX................XXXXX..........XXX", "XX..............XXXXX..........XXXXX..............", ".X..........XXXX............XXXXX............XXXXX", ".............XXXX...........XX...............XXX..", "........XX.............XX..............XXX........", "..........X..................XX.............X.....", ".........XXXXX...............XXXXX................", "XXXXX.................XX............XXX...........", ".....XX............XXXX...........XXXX............", ".XXX............X............XX.................X.", ".............XXXX................X..........XXX...", "........XXXX..........XXXX............XXXX........", "....XXX.............XX.................XXXXX......", ".....XXX..........XXXXX..............XX..........X", "X...........XX..........XXXXX..........XX.........", ".......XXXXX.............XX.................XXXXX.", ".........XX...............XXX..................XXX", "XX...............XX............X...............XX.", "................XXXXX.................XXXX........", "..XXXXX............XX.................XXXXX.......", ".........XXXX............XX...........XXXXX.......", "......X...............XXXXX..................XXX..", "...............XXXX............XXX................", "..XXX..............XXXX..................XXXXX....", "...........XXXX...............XX...........XXXX...", ".......XXXXX...............XXXXX..........XXXX....", "........XXXX...............X...........X..........", ".......XXXXX.............XX.................X.....", "............X.............XX..............X.......", "....X..............XXXX..............XXXXX........", "..XXXXX.............XXX.................XX........", ".......XX..........XXXXX..............X...........", "X..............X............XX............XXXXX...", ".........XXXX................XXXX...............X.", ".........XXXXX...........XXXXX.............XXXX...", ".............X...............XXX..........XXX.....", ".....XXXX.............XXXXX..........XXX..........", "....X................X..................XXX.......", ".......X..................XXXX................XXXX", "X...............XX...........XX..................X", "XXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 710;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"....XXXXX.....XXX........X.......X...X........X...", "..XXXX.......XXXXX.......XXX........X....XXX...XXX", ".......X...X....XXXX........XXX....XX........XXXX.", "...XX......XX....XXX...XXXXX...X........XXXXX.....", "..X...XX......XXXX........XX...XXXX........XXXXX..", ".XXXX...X....XXX........X.....XX.......XX.......XX", "........X........XXX....XXXXX...XXXXX.......XX....", ".XXXX........XXXXX.....XXXXX...XXXXX......XXX.....", "...XX....XXXX......XX...XXXXX.....XXX.......XX....", "..XXXXX.....XX........XX......XX.......XX........X", "XX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 308;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"XXXX...XXXX.......XXX.....XXXX...XXX...........X..", "..XXXXX....XXXX.........XX...XX...........X.......", "XXXX....XXXX..........XXXXX..........XX.....XXXXX.", ".....XXXXX.........XXXXX.........XXX.......XXXXX..", ".XXXXX..........X.......XXX.........XXXX.........X", "....XXX.....XX..........XXXX........XXXXX.........", "..XX...........XXXX...XXX.......X....XXX...X.....X", "X.........XXXX.......X..........X...........XXXXX.", "......XX...........XX.......XXXX.......XXX......XX", "X......XXXXX.......XXX.......X....X....XX.........", "..XX..........XXX.......XXXX.........XX..........X", "XXXX......XXX.........XXXXX.....XXXX.......XX.....", "......XX...XXXXX.........XXXX..........X..........", "XXXXX........X........XXXXX..........XXXX.....XXXX", ".........XXX...XX.....X.......X....XX..........XXX", "XX.....XXXX....X.....XX......XXXX.....XXX.......XX", "XX........XX....XXXXX......XXX.......XXXXX...XXXXX", "..........XXXX...........XXXX....XXXXX......X.....", "..XXX.........XX...........XXXX......X...XXX......", "....XX.......XX........XXXXX.....XXX..........XXXX", "X..........XXXX....XXX....XXXXX.....XXXX....X.....", "....XX....X...XXX.....XXXX........X...XX......XX..", "......X....XX.........XXXX........XXXXX.........XX", "XXX...........XXXX.......XXX......XXXX...........X", "XXXX...XXX..........X.........XX.........X........", "...XXX......XXXXX....X...X.......XX...XXX.......XX", "XX.......XXX....XXXXX...........XX.......XX.......", "..XXX.........XX......XXXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 302;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {".................XXXXX.......XXXXX...........X....", "..........XXXXX....................XXXXX.......XXX", "..............XXXX....................X......X....", "............XXXXX...............XXXX......XXXX....", "................X......XX................XX.......", "...........XX............XXXX......XXXXX..........", "XXX.............XXXX.................X.......X....", "...X....................XX................XXX.....", ".............X..................XXX..............X", "X.........XXXXX................XX.................", "..XXX......XXX...............XXXX.............XXX.", ".................X..................XXX...........", "..XXXX............XXX............XXXX.............", ".....XXXX.......XXX...............XXX.............", ".....XXXXX..........XXXXX...............XXXXX.....", ".....XXXX.......XX...............XXXXX............", "XX......XX......X.............XXX................X", "XXX....................XX.................XX......", "...........X.......XXX................X...........", ".....XXXX..............XXXXX................XXXXX.", "......XXXXX...............XXXX..........XXX.......", "...XXXXX..................XXXXX................XX.", ".......XXXX.........XX......XX.............XXX....", ".....XXX............XX...............XXXXX........", "........X....................XX.............X.....", "........XXXXX..............XXXXX......XXXXX.......", ".....XXXXX..........X.................XXXXX.......", "....XXXX.................X..........XXX...........", "..XX.................XXX.............XXX..........", ".......X..............XXX..........XXXXX.......XXX", "XX.......X..................X...............XXXXX.", ".....XX.............X...........XXXXX...........X.", ".......XXXXX............XXXXX..................XX.", ".........XXX............XXX.............XXXX......", "...........XXX........XX......XXXX........XX......", "........XXXXX............XXXX........XXX.........X", "XXX...............XXX...............XXXX..........", ".......XXXXX...........XXX..................X.....", "......X......XX................XXXX........XXXXX..", "..........XXXXX........XXXX................X......", ".........XX....................XXXX...............", "XX............XX...............X..............XXXX", "X.........X........XXXX...............X...........", "......XXX.......X................XX.............XX", "X.............XXX.................XXXX............", "...XXX................XXXX.............X.......XXX", ".......XXXX..................X.................XXX", ".................XXXX.........XXXX..........XXX...", "..............XXX...................."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2414;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"X....................XXXXX..................XX....", ".........XXXXX..................XX..............XX", "X..............XXXXX................X.............", "....XXX.............XXX...................XXX.....", ".........XX...............X...................XX..", ".................X.................XX.............", ".....X..............XXXX................XX........", ".........X.............XXXX.............XXX.......", "............XX..............XX....................", "XX.............XXXX................XXXXX..........", "....XXX..................XXXXX...................X", "...............X....................XXXX..........", ".....XXXXX................XX.................X....", ".............XXX...................XX.............", "..XXX....................XXXX..................X..", "................XXX.................X.............", "....XXXXX....................XX...................", ".XXXX....................XXX.............XXX......", ".........XXXX....................XXXXX............", ".......X.................XXX...................XXX", "XX..................XXXX...............XX.........", "...X...............XX..............XXXX...........", ".XX...................XXXXX...................XX..", "..................XX....................X.........", "...XX..............X...............XX.............", ".XX...................XX.............XX...........", "....XX..................XX....................X...", "............XXX.................XX................", ".XX................XXXX.............XXXX..........", "........XXXX.................XXX..................", "..XXX.................XXXX..................XX....", "...............XXXXX............XXX...............", ".X.............XXXXX................X.............", ".....XX............."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 829;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"..........XX..........XX.........X..........XX....", ".......XXXXX.........X..........XXXX........XXXXX.", "........XXX...........XXXX........XXX........XXXXX", ".........X.........XXX............XXXXX..........X", "X........XXXXX.........XXX........X............XXX", "XX............XXX...........X........X.........XXX", "X........XX..........XXXX...........XX.........XXX", "X............XX............XX............X........", "...XXXXX..........X.........XX...........XX.......", "....XXX........X.........XX.........XXXX..........", ".XX........XX............XXXX............XXXXX....", ".......XXX.........XXXXX..........X.........XXX...", ".......XXXX............X........XXXXX........XXXX.", "..........XXXXX.........XXXXX........XXXXX........", "XXXX............XXXX............X.........X.......", ".X........XX.........XXX........X...........XXXX..", ".......XXX........X............XXXXX.........XXXXX", ".........XXXXX.........XXX..........XX..........X.", "...........XX..........XXX.........XXX...........X", "XX..........XXXX...........XXXXX...........XXXX...", "......XX..........XXXXX..........XX............XXX", "XX............XX..........XX..........X..........X", "XXXX........XXXX..........XXXXX............XXX....", ".......XXX............XXX........X............X...", ".........XXXXX...........XX........XXXXX..........", ".X..........XXXX............XXXXX...........XXX...", "......X...........XXXXX.........XXXX............XX", "XXX........XXX.........XX..........XX............X", "XX..........XXXXX...........XXXX...........XXXXX..", "..........XX.........X........"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"...........XXXX...........XXX..........XX.........", ".XXX.................XXXX............XXXXX........", ".........XX................XXX...............XXXXX", ".............XX...............XXXX..............X.", "................XXX...............XX..............", "X..........X............XXXXX.................X...", "........XXX...........XXX...........XX..........XX", "XX.............XX.............XXXX............XXXX", "X..........XXXXX..............XXXX............X...", "..........XX...........XXX...........X............", "..XXXXX...............X............XXX............", ".....XXXX.............XX..............XXX.........", "...XXX.................XXXX.................XX....", ".........XXXXX..........XX.................XX.....", "........XXXXX..........XX.................XXXXX...", "........XX...............XX...............X.......", "..........XXXXX.............XX............XXXX....", "........XXXX.............XX.................XX....", ".............XXX............XXXX.................X", "XXX.............XX.................X.............X", "XX...............XXXXX..........XXX...............", "..X...........XXXX...........XXXX................"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {".................XXXXX..............XXXX..........", ".......XX.............XXXXX...............XXX.....", "..........X............XX.................."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"..........XXXX...........XXXXX...............XXXX.", ".......XXXX...........XX.............X............", ".XXX........XXXXX.............XX............XXX...", "..........XXX.........X........XX........XX.......", "........XX................XXX...............XXXX..", "..............X.........X...............XX.......X", "XXXX..........X................XXX............XXXX", "X........X............XXXX................XXXX....", "...........XX........XXXX........X.......XXX......", ".........XXX............X................XX.......", "XXXX.........X.........XXX..........XXXXX.........", "XX.......XXXX............XXXX................X....", "........XXXXX.......XXXXX............X............", "XXXX.........XXXXX...............XXXX.............", "..XXX.......XX...........XXXX........XXXXX.......X", "XXX................XXX.............XXXXX..........", ".....XXXXX..............XXXX..............XXXXX...", "........XX............XXXXX.......XXXXX.........XX", "XXX.........XXX...........XXXXX.........XX........", "..X..............XXXX..............X........XXXXX.", "............XXXXX........X.............XX.........", "......X...............XXXX..............XXX.......", ".........X...............XXXXX...........XXXX.....", ".....XX...............XXXXX................X......", "...XXX.......XX.........XX...........XXXX.........", "X.......XXXXX................X................XXX.", ".........XXX.......X...............XXXXX.........X", "XXX................XXX............XXX.............", ".XXXXX...........XX..............XX...............", ".X..............XXXX........XXXXX................X", "...........XXX..........XXXX................XX....", ".......XXXXX................XXX.............XXXXX.", "..........XXXXX..............X........XXX.........", "......XXX................XX..............XXX......", "....X.........X.......XX.......X..........XXXXX...", ".........XXXXX............XXXX..............XXX...", "......XXXX.......XXXXX................X...........", ".XXXX............XXXXX............XXXX.......XXX..", "........XXXX..........XXXX.........XXXXX..........", ".....XX...........XXX...........X.............XX..", ".....XXX...............XXXXX............XXX.......", "..XXXX.........XXXX...............XXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1279;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"..XXXXX...XXX....XXXX..X...XXXXX..XXXXX...XX..XX..", "..XXXX..XXXXX....XXXX.XXX.X...XXXX..X.XXX...X....X", "XXXX..XXXX..XX..XXXX...XXX..X....XX....XX..XX..X.X", "XXXX....XX..XXXX...XXXXX.XXXX....XXX.X.XXXXX....XX", "XXX....X..XXXXX...XXXX...X..XXX...XXXXX.XXXXX....X", "X....XXXX.X..XXX..XX....XXX....XX.X....XX....X..XX", "XXX..XXXX..XXX....XXXXX....XXXX..XXXX.XXXX.XXX..XX", "XX.XXXXX..XXX.XXXX.XXXX..XX.XX..XX....XX...XXXX.XX", "XX...XXXXX.XXXXX....XXX..XX....XX.XXXX..XXXX.X.XXX", "...XXXXX..XXXX..XXXX...X...XXXX.XXX.XX...X..XXX..X", "XX...XXXX..X...XXXX.XX..XXXX.X....XXXX..X..X..XXXX", "X...X.XX.XXXXX....XXX...XXX..XXXX.XXX....XXXXX..XX", "...X....XXX.XXX.XXXX.XXXX....X...X.XXXX....XXXXX..", "X.XXXXX.X.X....XXXXX.XX..XXX....XXXXX.XXXX..XXX.XX", "XX...XX..X..XXXXX...X.XXXXX..X...XX...XXX.XXXXX..X", "X..XX..X...XXXX....X.XX..XXX..."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {".............XXX.........XXX...............XXX....", ".......XXX...................XXXX................X", "XXX...............XXXXX..................X........", ".XX..............XXXXX..........XXXX.............X", "X..........X..................XXX.................", ".X..............XX..........XXX..........XXXX.....", ".....XXX..............XX...................X......", "....XXXXX...................XXX...........XXXX....", ".......X................XXXXX...........XXXX......", "...........X...............X..........X...........", ".......XXXXX...............XXX............X.......", ".....X.................XXXXX..............XXXX....", "...........XXXXX.............XXXX..............XXX", "...................XX.................XX..........", ".....X.............XXXXX...............XX.........", "..........XX...................XXXXX..........XXXX", "X.............XXX..............XXX................", "...XX..........XX...............X.........XXXXX...", "...............X............X................X....", "..........XXXXX................X...............XX.", "..............XXXXX................XXX...........X", "XXXX..........XX.............XXXX.................", "XXX................XXX...............XX.........XX", "..................XXX.............XX..............", "XX................XXX............XXX..............", "..XXXXX...........XXXXX..................XXXX.....", ".......XXXX............XX..........XXXXX..........", "..X..............X............XX............X.....", ".....XXXXX...............XXXX...................XX", "X.................X............X..................", "XXX..........XXXX..............X................XX", "...........XXXXX............X..........XXXX.......", "........X..................XXXX.................X.", "........XXX..........XXXXX...................XXX..", "..............XXXXX..........XXX..................", "XXX................XX...........XXX...............", ".XXXX.................XXXX...................X....", ".......XXXXX..........X..............XXXXX........", "........XXX..............X..............XXX.......", "..........X.........XXX.........XXXXX.............", "..X..........XXXX............X..................XX", "XX.................XXXXX...........XXXXX........."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 760;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"...............X................XXXXX...........X.", ".......X........X................XXXXX............", "...XXXX..........XXXXX..................XXXXX.....", ".............XXX.............X...................X", "...................XXXX...................XX......", ".............XX...............XX..........XXXXX...", "...........X..............XXXX...................X", "X..............XXX.........X.........XX..........X", "XXXX.........XXXXX........XXXX...........XX.......", ".....X.........X..................X.............XX", "XX...................XXXX..................X......", "............XXXX..........XXXX.................XXX", ".................X...........X............XXXXX...", "........XXX..................X........XXXX........", ".XXX............X..........XXXX................XX.", ".................X..............XXX...............", "..XXXX..............XXXX..............XXX.........", "..XX.................X.............XXX............", ".X........XXXX.................XXXX.............XX", ".................XXXX.........XXXX..........XXXX..", "..........XX...............XXXX...............XX..", "...........XXX.............XXXX..............XXXX.", "...........X..............XXXXX................XXX", "XX...................XXXXX...............XXXX.....", ".............X...................XXXX...........XX", "XXX.............XXX.........XXXX..............X...", ".............XXX...............XXXX............X..", ".........XXXX...............XXXXX.................", ".XXXX............XXXXX...................XXXX.....", "..............XXXX..............XXX.............XX", "X..............XXX................XX.............X", "X............XXXXX..........XXXX............X.....", ".............XXXXX........XXXX.................X..", ".......X...................XXXX............XXXXX..", "................X............XXX..............XX..", "................XX...........XXXX...........XXXXX.", "...............XXXXX.............X................", ".XXXXX........XX................XXXXX............X", "XXXX..................XX...................XXX....", "............XX........XXX.............XXXXX.......", "........XX..................XX.........XXXXX......", ".......XXXX.................XX.........XXXXX......", "...........X..........XXXXX...............XXXX....", ".............X...........XXXXX..................XX", "XXX..........X.........X.............XXXX.........", "........"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"XXXX..........XXXXX..........X..........XXXXX.....", ".....XXXXX...........XX...........XXXX..........XX", "..........XXX...........XX..........X..........XX.", "..........X...........XX...........XXXX...........", "X...........XXXX...........XXX..........XXXX......", ".....XXXXX...........XX..........X..........XX....", ".......X..........XXX...........X...........XXX...", "........XX...........XXX..........XXXXX...........", "XXXX..........X...........X...........X..........X", "...........XXXX...........XXXXX...........XX......", "....X...........XXXXX...........XXXXX..........X..", "........XXX..........X..........X...........X.....", ".....XXXXX..........XXXXX..........XXX...........X", "XX..........XXXX..........XXXX..........XXX.......", "....XXXX...........XXXX..........XX...........XXXX", "..........XXXXX...........XX..........XXXXX.......", "....XXXX..........XXXXX..........XX..........X....", "......XXXX..........XXXXX...........XXXXX.........", "..XXXX..........XX..........X...........XX........", "..XX...........XXX..........X...........X.........", ".XXXXX...........XX..........X..........XXXXX.....", ".....XXX..........XXXXX...........XXXX...........X", "...........XXXX..........XX..........XXXXX........", "..XXX..........XX..........XXXXX...........XXX....", "......XXXXX..........XXXXX..........XXXXX.........", "..XXX..........XXXX...........XXXX..........XXX...", "........XXXXX...........X...........XXX..........X", "..........XXX..........XXXXX...........X..........", ".XX...........XXX...........XXXXX...........X.....", ".....XX...........X..........XX..........XXXXX....", "......XXXXX...........X..........X..........XX....", ".......X...........XXXX..........XXXXX..........XX", "XX..........XXXX...........X..........XX..........", ".XX...........XXXXX...........XX..........XX......", ".....XXXX...........X..........XXXX...........X...", "........X..........X..........X..........XXXXX....", "......XXX...........XXXX..........X...........XXX.", ".........XXXXX...........XXXXX..........X.........", "..XX...........XXXXX...........XXX...........XXXXX", "..........XX..........XXXXX...........XXXXX.......", "....XXX...........X..........XXXXX...........XXX..", ".........XXX...........XX..........XXXXX..........", "XX...........XXXXX..........X..........XXX........", "...XXXX..........XXXXX...........XXXX...........XX", "XXX...........XXX..........XXX..........X.........", ".X...........XX..........."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"...........XXXXX.........XXXX......XXX..........X.", "........XXX.......XXXX........XXXXX.......X......X", "XXX........X........XXX......XXXXX...........XX...", "........XX........XXXXX.........XXX........XXXXX..", ".........XXXX..........XX.........X.........XXXX..", ".........X..........X..........XXX.........XX.....", ".XXXX.........XXXXX.......XXXX...........XXXXX....", "....XXXX.........XXX...........XXX.........XXXXX..", "........XX..........XX........XXXXX..........XXX..", ".........XXXX.........X......XXXXX......XXXXX.....", "...XX.......XXX.......XXXX..........XX........XXX.", "......XXXXX.........XX..........XXXX......X.......", "XX..........XXXX...........XXXXX.......XXX.......X", "X.........XXXXX......XX..........XXXXX......XXXX..", "........XX......X..........XXX...........X........", "XXXXX.......X........XX......X........XXXXX......X", "XXXX......XXX........XXXXX........X..........XXXXX", "......XXX.......X.......XXXXX.........XX..........", "XX.......XXXX...........XXX.......XXX.........XXX.", ".......XXX.......XXXXX...........X........XXX.....", ".....XX......XXX...........XXXX......XXXXX.......X", "XXXX.........XXXXX.........."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {"XXX..................XXXX..................XXX....", "..............XXXX..................XX............", "......X..................XX..................XXX..", "................XXXX..................XXX.........", ".........X..................XXX..................X", "XX..................XXX..................XXXX.....", ".............XXXX..................XXXXX..........", "........XXXX..................XXXXX...............", "...XXX..................XXXXX..................XXX", "XX..................XXXXX..................XXXXX..", "................XXXXX..................XXXX.......", "...........XXX..................XXXXX.............", ".....XXXXX..................XXXXX.................", ".X..................X..................XXXX.......", "...........XXX..................X.................", ".X..................XX..................XXX.......", "...........XXXXX..................XXX.............", ".....X..................XXX..................XXXXX", "..................XX..................XXX.........", ".........XX..................X..................XX", "XX..................XXXXX..................XXX....", "..............XXXXX..................XXXXX........", "..........X..................XXXXX................", "..X..................XXX..................XXXXX...", "...............XXXX..................XXXX.........", ".........X..................XXXX..................", "XX..................XXXX.................."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"............XXX.............X...............X.....", "..........X.............XXX...........XXXXX.......", ".......X...........XXXXX...............X..........", "...XXXXX............XXXX...........X............XX", "...........XXX..............XXXX............XXX...", "............XXXX...............XXXXX.............X", "XXX...............XXX...........XXXX...........XXX", "...............XXXX...............X.............XX", "XX..............X...............XXXX.............X", "XXX.............XXXXX.............XX..............", "XXXXX..............XXX.............XXX............", "XXXX............X...........X..............XX.....", ".........XXXXX...............X............XX......", ".......XXX.............XXXXX.............XXXX.....", "..........X..............XX............XXXXX......", ".....X..............XXXXX...........XXXX..........", "....XXXXX...............XXXX.............X........", ".......X............X..............XXXXX..........", "....X...............X............XX............XXX", "XX.............XXX...........XXXXX...........X....", "........X...........XXX...............X...........", ".XXX..............X...............XX.............X", "XXX...............XXXX..............X.............", "XXXXX..............X.............XXXXX............", ".XXXX...........XXXXX.............X.............XX", "XX.............XXXX...............XXXX...........X", "XXXX...........XXX...........XXX..............X...", "............XXX..............XXXXX............X...", "..........XXX.............X..............XXX......", ".........XX.............XX...............XXXXX....", "..........XXX...............X...........XXXX......", "........XXX............XXXXX...............X......", ".......XXXX.............XXXXX..............XXXXX..", ".............XXXXX..............XXX.............XX", "...........X...............XXX............XXX.....", "......XXXXX..............X...........X............", ".XXXXX...........XXX...............XXXXX..........", "....XXX............XXXX.............X...........XX", "XX.............XX...........XXXX............XXX...", "..........X...............XXX............."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1976;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"................XXXX................X.............", "...XXXX................XXXX................XXXXX..", "..............XXX................X................", "XXXX................X................XXXX.........", ".......XX................XXXXX................XXX.", "...............XXXXX................XX............", "....X................XXXX................XX.......", ".........XXX................XX................XXXX", "................X................XXXXX............", "....XX................X................XXXX.......", ".........XXXX................XXXXX................", "XXX................XXXXX................XXXX......", "..........XXXXX................X................X.", "...............XXXXX................X.............", "...XXXX................XX................XXX......", "..........XXX................XX................XXX", "X................XXXXX................XXX.........", ".......XXX................XXX................XXXXX", "................X................XXX..............", "..X................XXXXX................XX........", "........XXXXX................XXXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {".........XX....XXX......XXXX....XXXXX.....X.......", "...XXX.......XXXXX.....XXX.........X....XX......XX", "XX.....XX........XX.......XXXXX.......XXXX......XX", "XXX..........XX.........XX....XXXXX........XXXXX..", "......XXXXX.....X.......XXX......XXXX..........XXX", "X.......X.......X.....XXXX....XXX..........XXXX...", ".X......XXXXX....XXX..........XXX.......XXXXX.....", "....XXX........XX...........XX.........."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 378;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"X..............XX..............XXXXX..............", "XXX..............XXXXX..............XXX...........", "...XXX..............XXX..............XXXX.........", ".....XXXX..............XXXXX..............XXX.....", ".........XXXX..............X..............XXX.....", ".........X..............XX..............X.........", ".....X..............XXX..............XXXX.........", ".....XX..............XX..............XXXXX........", "......XXXX..............X..............XXXXX......", "........X..............XXX..............X.........", ".....XXXX..............XXXX..............XXXX.....", ".........X..............XXXX..............X.......", ".......X..............X..............XXXX.........", ".....XXX..............XX..............X...........", "...XXXX..............XXX..............X...........", "...X..............XXX..............X..............", "XXXX..............X..............XX.............."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {"XX....XXX............XXXXX........X...XXXXX.......", ".XXX............X...............XXX............XXX", "X..........XX.........XXX..........XXXXX..........", ".XXX......XXXX......X.........XXXX..........XXX...", "XXXXX......XXX.....X..........XXXXX...............", ".X...XXX.........X.........XX...........XX........", "..XXXX.............XXXX...XX...............XXX....", "......XXX.......X.........XXXXX...............X...", "....XX.......X........X............X.............X", "X.........XXX..............XXX.....XXXX..........X", "X........XXX.......X.....X........X.............X.", ".....XX.....XXX.......XXX.........XXX...XXXX......", "........XXXXX..............XXXX..........XXXX.....", ".........XX.............XX..........XX..........XX", "XXX....XXX.............XXXXX..............XXX.....", ".......XXXXX.......X.........XXXX...........XX...X", "XX....XXXXX.........X..........XXXX..............X", "XXX................X.............XX...............", ".XXX..............XXX....XXXXX.........XXXXX......", "...XX..........XX..XXX...........XX.........XXXX..", ".......XXXXX.............X.......XXX..........XXXX", ".......XXXX...........XXX...XXX.......XXX.........", "......XXXX...............X......XX....XXX.........", ".....X............XXXXX...........XXXXX...........", ".X............X...........X...............XXX.....", "...........XX.......XXXXX...............X.......XX", "XXX.......XXXX................XXX.............X...", ".............XXXXX...........XX........XXXXX......", ".XXX..............XXX.........XXXX..........XXX...", "........XXX.......X.......XXXXX.....X..........XXX", "X...X..X............XX............XXXX.........XX.", "...XXXXX....X.............XXXX..............X.....", "......XXX..........."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1242;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {"X...............XX..X...XX............XXX.........", "......XX...XX........X......XXXXX....XX......XX...", "......XXX...............X.....XX.........XXXXX..X.", "..............XX...XXXX...............XXXXX.......", ".XXX.....X..XXXX............XXXXX..........X......", "........XXX.............XX................XXX.....", "XXX..XXXXX.......XXX..XXXXX............XXXX.......", ".........XXXXX.....XX...XXXXX....XXX.............X", "X.....XX................XXXX....XXXXX...........XX", "XX.........XXXX................XX..XX..X..........", ".....XXXXX..........XXX........XXX.............X..", ".............XX...........XXX.............XXX.....", ".........XXXX...............XX..........XXXXX.....", "....XXXXX...........X..XXX..XXXXX.......XXXXX.....", "...........XX...........XX......X..........XXX..XX", "..........XXXX.......XXX....XXX.........X.........", ".XXXXX....XXXX.........XX............XX........XXX", "X................XXXXX............XXXXX......X....", "..........XXX.....XXX..............XXX............", "..XX...............XXXX.....X.............X.....XX", "X.............XXX............X...............X....", "XXXX..XXX................XXX............XXXXX.....", "XX.............."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {"...............XXX.............XXX................", "..XXXXX..................X......XXXXX.........XXXX", "..................XX................XXXX..........", "XXX................X..........XX............XX....", ".....XX...............XXXXX.................XX....", "...XXX..............XX.........XXXXX..............", "....XXXX.........XXXX.................XXX.........", ".....XXXXX...........XXXX...........X.............", "....XXXX..................X.........XXXXX.........", ".....XXX......X.................XXXXX.............", "...X........XXX........XXXXX.............XXXX.....", "........XXXXX...........XX..............XXX.......", ".....XXXXX.............XXXXX.............XXX......", "...XXXX..............XXXXX............XXXX........", "XXX........X..............XX.......X.............X", "X.......XXX...........XXXXX........XXX.......XXXXX", "......X.................XXXXX.............XXX.....", "........XXX.................."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
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
    vector<string> board = {"........XXXXX.......XXX........XXX.........XXX....", ".XXX...........XX......XXX...........XX........XXX", "X...X.............XXXX........XX...XX............X", ".............XX....XXX........X..........XXXX.....", "........X...X........XXX............XXX....XXX...X", "X..........XXX.............XX............XXXXX....", "........XXXXX.....XXX...X.....XXXX..............X.", "...XXX....XXXXX............X..........XXXX........", "...XX...........XXX......XX...........X...........", "..XXXX.........XX............XX............XXX...X", "XXXX..........XXXXX......XXXX............XX.......", "XX..........XX..........XXXXX.........XXX.........", "..XXXXX..........XX...XXXX.........XXXX.........XX", "X...XXXX........X.....XX...XXXX.......XXXX....XXX.", "...XX......XXXX........XX.....XXX.....XX....XXXX..", ".....XXXXX...XX............XXXX...XX......XX......", "......XX.......XX..............X...........XXXX...", "XXX......XXXX........X...XXXX...........XX........", "X......XX........XXXX......XX......XXXX.......X...", ".........X....XXX........XXX...XX..........XXXXX..", "..........XX.............X......XX.....XXX........", "...X..............XX............XXXX......XXXXX...", "......XXXXX...........XX.............XXX.......XX.", ".......XXX.......XXX.......XXXXX.....XXX.....XX...", "..........XXXXX............XXX...XX........XXXXX..", "........XXXXX..........."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1258;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {".....XX........XXX......X..........X.............X", "...........XXXX.........XXXX......XX.............X", "XX...........X......X.......XXX.............XXXX..", "......X........XX....XXXX.................XXX.....", "..XXXXX.....XXXX.....XXXX..............XXXXX......", "......XX.........XXX.................XX........XXX", "XX.....XXXXX................XX.................XXX", "X.........XXXX.............X..............XXXXX...", ".........XXXX......X..........XXX...............XX", "X............XXXX......X...........X...........XXX", "XX................XXXXX................XXX........", "...XX......XX.................XX..............XXXX", ".............XX...............XXXXX............XXX", "XX................XX.........X..............X.....", ".XXXX.............XXXXX.........XXXX......XXX.....", ".XXXXX...............X..........X.................", "X............XXXXX..........XXX.........XX........", ".....X.............XXXXX..........X...............", ".XXX....XXXXX........XXXXX............XXXXX.......", ".........XXXXX.....XXXXX.................XXX.....X", "XXXX..............XXXX...........XXXXX........XXX.", ".........XXX.........XXXX.....X........XXXXX......", ".XXX...........XXXX...........X...........XXXX....", "XXXX.................XX...............XXX....X....", ".......XX...............XXXXX............XXXXX....", "........X...........XX.........XXX.....XXXXX......", ".XXXXX............XXXXX..........XXXXX......XXXX..", "..............XXX.......X....XXXXX...............X", "XXXX............XX................XXX.............", "XXXX.............X.................XXXXX........XX", ".....XX...............XXXXX............XX.........", "........XX...........XXXXX......XXXXX.............", "XXXX................XXX.........XX......XXXXX.....", "...........XXXX.....XXX................XXX........", "....XXX................XXXXX............XXXXX.....", "XX............XXX..............XXXX...............", "..XXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 328;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"XXXX.........XXXXX..........X...........XXXX......", "......XXXXX...........XX..............XX.......XXX", "X.............XXXX............XXXX..............XX", ".............XXXXX.........XXXXX..............X...", "............X.............XXX........XXXXX........", "........XXXXX...........X.............XXXX........", "..XXXXX............XXX.........X...............XXX", "..............XXXXX................XXXX...........", "....XXX...............XX.............XXXXX.......X", "XXX..........XXXXX................XXXXX..........X", "XXX......X.........X.................X........XXXX", ".................X.......X......XX........XX......", "...X...............X.................XX...........", "...XXX.............X................XXXX.......XX.", "................XX...........XXXXX........XXX.....", ".....XXXXX......XXXXX..........XX...............XX", "XX......XXX...........XXXX.......XX...........XX..", ".............XXX.................X.........XXXXX..", "........XXX..............XXXXX............XXX.....", "..........XXXX.................XX.................", "XX.......XXXXX......XX.........XXXX.............X.", ".........XX......XXXX.................XXXXX.......", ".XXXXX......XXX........XXX.................XX.....", ".........X.............XXXX......X...............X", "XXX.................X............XXX...........XXX", "X.................XX.......X...............XXXXX..", "............XX.......XX........XXX................", "XXXXX........XXXXX...............X..............XX", "XX.................XXXXX................XXX.......", "..XXXX.......XXX.................X........X.......", "........XXXX.......XX...............XXXXX.........", ".....XX................XXX................X.......", ".....X..........XXX......X.......XXXXX............", "....XX........XXXXX.................XXX...........", "...XXXXX.............XX........XX.......X.........", "XXXXX.............XXXXX............XXXXX........XX", "...........XXXXX......XXX..........XX.........XXX.", ".......XXXXX.........XXX............XXX.......XXX.", ".....XX.................X........XXXXX..........X.", ".............XXXXX.......XXXXX......X...........XX", "XX.................X.................XXXXX........", "...XX................XXXXX......XX.............XXX", "......XX.................XXXXX......."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 981;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {"XXXXX........X...........XXX..............XXXXX...", "............XX........XXXXX.............XXXXX.....", "........XXXX...........XXXX............X..........", "........XX..................XXX.........XXXX......", "..X..........XXXX..................X..........XXXX", "........."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {"XXX...........XXX........XX...........XXXX........", "....XX.........XXXXX...........X.........X........", ".XX..........XXX............X...........XXXXX.....", ".......X.........X..........XXX........X.........X", "XXXX.........X..........XXXXX.........XXXX........", "XXX..........X.........XXXXX..........XXXXX.......", "..XX...........XXXXX..........XX............XXXX..", ".......XXXX..........XXXX...........XX........XXXX", "X.........XXX...........XXX............XX.........", ".XXXXX.........XXX............X...........X.......", "...XX..........X............XXXXX............XXXX.", "........X...........X............XX.........XXXX..", "..........XXXXX........XXXX...........XXX.........", ".X..........XXXXX............XXXXX...........XXX..", ".......XXXXX..........X..........X...........X....", "......XXXX.........XXX..........XXXXX............X", "XXX............XXX..........XX..........XX........", "....XXX........XXXXX...........XXXX............X..", "......XXX.........XXXXX...........XX........XXX...", ".......XXX........XXXX.........XXXXX.........XXXXX", ".........XXXXX...........XXX............XXX.......", "...XXXXX........X.........XXXX........XXX.........", "...XX........XX.........XXX............XX.........", "...XXX.........XXX..........X...........XXX.......", "...XXXXX............XXXX........XX...........XX...", "......XXXX..........XX.........X........X........X", "............XXX........XXXXX..........XXXX........", "...XX........XXXXX............XXX............XXX..", "........XX...........XXX.........X...........XXXX.", "...........XXX........XXX...........XXXX.........X", "XXX..........XXX.........XXXX..........XX........X", "XX.........XXXX........XXXX............XXXXX......", "....XXXXX............X.........XXXXX.........XXX..", ".......XXXX........XXX.........XX............XXXX.", ".......X..........XXX...........XXXXX............X", "XXXX..........XXXXX...........X.........XXX.......", "....XX..........XXX...........XXXX...........XXXX.", ".........XXXX............XX...........XXXX........", "....XXX...........XXXXX.........XXXXX........XX...", ".........X...........XXXX........XXX............X.", "..........XX...........XXXX..........X............", "XXXX............XXXX...........XXX............XXX.", "..........XXX..........XX........XXXXX............", "XX............"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 528;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {"X............XXXXX..........XX...........XXXXX....", ".........XXX.....XX.......XX...........XXX........", "....XXX........XXX............XXXXX...XX..........", "..XXXXX..XXXXX.....XXX..........X..............X..", "......X......XXX...XXX.........X..........XXXX....", "X..............XX.........XX........XX..XXXX.X..X.", "...XXXXX..........XX.X......XXX...XXXXX.XX........", "...XXXX..........XXXXX..............XX........X...", "....X.........X.XX.......XX.......XXXXX..........X", "X......XXXX..........XX........X........XXXX......", ".......X.....XX........XX...XX.....X.XXXXX........", "......XXXX..XXX.......X.............XXXXX.........", ".XXXX.............XX...XX.........XXXX...XXXX..X.X", "XX...........XXXX.......XXX..XXX.......XXXXX.....X", "XX.......XXX.............XXX.XX....X............XX", "............X.........X.....XXXX.XX..............X", "XXX........X.....XX............X..............XXX.", ".........X........XXX...XXXX...........XX......XXX", "X.......XXX.....XXXX.........XXXXX..XXXX.XXXXX....", "..XXX.............XXX..........XXX..XX....XXXX....", "XXX.............XXX............XX...X......XX.....", ".......X.....XXXX............XXXX.......XXXXX..XX.", "..XXXXX.....X.....XX.....XXX..XXXXX.XXXXX........X", "XXX.....X............XXX.............XX...X......X", "X........XXX.......XXXX...........XX....XXX.......", ".......X....XX.........XXXXX..XXXX........XXX.....", "....X..XXX............X.............XX.....XXX....", "......XX.........X.............XXXXX...........XXX", "X.......XX........XXX.XXX...XX..............XXXXX.", ".........XXXX..X.........XXXXX............XXXX....", "........X........XXX....X.......XX.X..........XXX.", ".......XX...........XXX.XXX...XXXX.............XXX", "X..............XX...XXXX........X............XX...", "...........XXXXX......XX..........X..........XXX..", "............XX........XX..XX....XXX.......XXXXX...", "...........X.XXXX.............XXXXX............XXX", "X....XX.XXXXX..............XXXX........XXX........", "...XX....X......XX.............XXXX.............X.", "...X..............XXXXX.XXX...XXXX..XX............", ".XXX.......XXX....XX..XX.XX....XX........X........", "....XX........XXX............XXXX.........X...XXXX", "...........XXXX......X....XX...X.XXXXX...........X", "XXXX.......XX......XXX..........XXXX...XXXXX......", ".....XX.........XXX........XX.......XXX..........X", "XXXX...........XX.....XX.XXXX....XXX.....XX.......", ".......XXX........X.XXXXX......XX...X.............", ".X..............X.............XXX.........XXXXX...", ".........XX.....XX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2301;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> board = {"........XX........XXX........XXX........XXX.......", ".XXXX........X........XX........X........XXXXX....", "....XXXXX........XXXX........XXX........X........X", "XXX........XXXXX........XXX........X........XXX...", ".....XXXX........XXX........XXXXX........X........", "XXXX........XXXX........XXX........XX........XX...", ".....XX........XX........XX........XX........XXXXX", "........XXXX........XXXX........XXXXX........X....", "....X........XXX........XXXXX........XX........XX.", ".......XX........XX........XXXXX........X........X", "XX........XXX........X........XX........XXXX......", "..XXX........XXXX........XXXXX........XXXX........", "X........XXXXX........XX........XXX........XXX....", "....XXXXX........XXXX........XXX........XX........", "XXXXX........X........XX........XX........XXXXX...", ".....XXX........XXX........X........XX........XX..", "......X........XX........XXXX........XXX........XX", "XX........XXX........XXXXX........XXXXX........X..", "......XXXX........X........XXXXX........XXXX......", "..XXX........XXX........XXX........XXXX........XXX", "X........XX........XX........XXXXX........XX......", "..XX........XXXXX........XXXX........XXX........XX", "XX........XX........XXX........XXXXX........X.....", "...XXXX........XXXX........XX........XXX........XX", "XXX........XXXXX........XXX........X........XXX...", ".....XX........XX........XXX........X........XXX..", "......XX........XXX........X........XXXX........X.", ".......XXXXX........X........XXXXX........X.......", ".XXXXX........XXXXX........XXX........XXXXX.......", ".XXXX........XXXXX........XXXXX........XXXXX......", ".."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {"...........XXX...........XXXXX...........XXXXX....", ".......X...........X...........XX...........X.....", "......X...........XX...........XX...........XXXX..", ".........XX...........XX...........X...........XXX", "...........XX...........X...........XXX...........", "X...........XX...........XX...........XXXXX.......", "....XXXXX...........X...........XXXX...........XX.", "..........X...........XXX...........XXX...........", "X...........XXXX...........XXXX...........XXXX....", ".......XX...........XX...........XXXX...........XX", "...........X...........X..........."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> board = {"...........XX.......XXX........XXX............X...", "...............XX............X...................X", "XXXX..................XX..............X...........", ".........XXXX........X............X......XXXX.....", ".XXXX...........X.....XXX.........XXXXX........XXX", "XX.....X............XXXXX.......XXX............XX.", "..................XXXX.................X..........", "...XXX....................XXXX..........XXXX.....X", "XXX.................X....................XXXX.....", ".XXXX............XXX.....X...........X.....X......", "...........XXXXX.............XXXXX...........XX...", "..X.....XXX....................XX.......XXX.......", "...........XXXX.................XXX...............", "XX...........XXX............XXXX.................X", "X.......XXXX................X...................XX", "X...............XXX.......XX........XX............", "........XXXXX........XXXX................X........", "...XXXX...................XXXX.....XX.............", "...XXXX.............XXXXX................XXXX.....", "...........XXXXX................XXXX..............", "....X......XXXXX.................X................", "....XX......XXX................XXXXX..............", "...XX............XXXX.........X...................", ".XXXX..............XXX................XX..........", ".......X...............X.............XX...........", ".....X.................XXXXX......XXXX............", ".....X.....XXXXX............XXXX...........XX.....", ".......XXXX...................X...........XXXX....", "............XXX.................XX...........XX...", "..........XXXX.......XXXX....................XX...", "...........XXXXX....................XXXXX.........", "...XX.......XXXXX...................X.............", "..XXX....................XXX..........XX.........X", "XXX.................XXXX............XXXX.........X", "XX...................XXXX...........XXXX..........", "..........X..................X.....XX..........X..", ".................XXXX........XXXXX................", "..XXX.......XXXX..................XXXX............", "."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1884;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {".............X..............XXXX............XX....", "...........XXX................X...............XX..", ".........XXXX...............X.............XXX.....", ".........XXXX............XXXXX...........XXXX.....", ".......XX...............XX...............X........", "....XX............XX..............X..............X", "XX...........XXXXX.............XX.............XXXX", "X............XXX.............XXXX............XXXXX", "...........XXXX.............XXXXX............XXXXX", "...........XXXX...........X...............XXXXX...", "........XXXX...........XX..............XX.........", "....XXXXX............XXXX..............XXXXX......", "........XX............XXX................XX.......", "........X..............XXXXX...........XX.........", "..XXX...............XX..............XX............", "..XXXX...............XXXX................X........", "....XXXX...............XXX...........XXX..........", "......X..............XXXX...........XXXX..........", ".....X.............XXXXX...............X..........", "....XXXX...............XXXX................XXX....", ".......XXXXX..............XXXXX...........X.......", "......XX.............XXX.............."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {"XX...XXXXX....X....XXXXX...XXXXX....XXXX...XX..XXX", ".....X....X.....X...X...XX..X.....X.....XX...XXXX.", "....XXXX.....XX....XXX.....XXXXX.....XXX....X....X", "XXXX..X....XX.....XXXX....XXX...XXXXX.....XXX....X", "XXX...XXXX..XXX...XXXXX...XXXXX....XXX...XXX....XX", "XX....X...XXXX....XXXX.....X.....XX..XXX..X....XXX", "X...XX.....XXXX.....XXX.....X....XXXXX.....XXX...X", "XX....XXX...XXXX....XXX....XXX....XX.....XXXX.....", "XXX.....XX.....XXXXX....XX...XXX..XXXXX..XXXXX..XX", "..XX...X..XX...X.....XXX....XXXXX.....XXX....X..XX", ".....XX...X..XXXXX...XXXX.....XXXXX....XXXX..XXXXX", ".....XXXX..XX..XXXX..XXXX.....XXXX....XXXX....XX..", ".XXX....XXXXX.....XXXXX...XXXX..XXXXX.....XXX....X", "X..X..X...XX.....XXXX....XX.....XXXX....XXXXX...XX", "XX...XXXX.....XX.....XXXXX..XXXXX..XX...XXXXX....X", "X....XX....XX...XXXX....XXX....X...X..XXXXX..XXXX.", ".XXXXX.....XXXX..XXX..X...XX..XXX.....XXXXX...XX..", "XX....X..XXXX..X..XXXX.....XXX.....XXX...XXX.....X", "X..XX...XXXXX....X....XXXX..XX....XXXX..XXXX....X.", "...XX....X...XXX.....XXXXX.....XX...XXXXX.....X...", "..XXXX..XXX..XXXXX.....X...XXXX....XX.....XXX.....", "XXX.....X..XXX....XXX...XXX...XXXX....XXX..XXXXX..", "...XXXXX...."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {"XXX............XXXXX............XXX............XX.", "...........XXX............XX............XX........", "....XXXXX............XX............XXX............", "XXX............XX............XXX............XXXXX.", "...........XXX............XXX............XXXX.....", ".......X............XXXXX............XXXXX........", "....X............X............XXXX............XXX.", "...........XXXXX............XXX............X......", "......X............XX............XXXX............X", "............XXXX............XXXXX............XXX..", "..........XXXXX............XX............XXX......", "......XXX............X............XXX............X", "X............XXXXX............XXXXX............XXX", "X............XXXXX............XXX............XX...", ".........XXXX............XXXXX............XXXXX...", ".........XXX............X............X............", "XXXXX............XXXXX............XXXXX...........", ".X............X............XXXXX............XX....", "........XXX............XXXXX............XXXXX.....", ".......XXXX............X............XXX...........", ".XXX............XXXXX............XX............XXX", "XX............XXXXX............XXX............XX..", "..........XXXX............XXX............XX.......", ".....XXXX............XXXX............XXXX.........", "...XX............X............XXXX............XXXX", "X............XXXX............X............XXXX....", "........XXXX............XXX............XX.........", "...X............XXX............XX............XXX..", "..........XXXX............XXXXX............XXXX...", ".........XXXX............XXX............XXXXX.....", ".......X............X............XXXXX............", "X............XXXX............X............X.......", ".....XXX............"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> board = {"XX.................XX...............XX....XXX.....", ".........XX............X................XX........", ".....XXXX....................X..............XXXX..", "................XX...............X................", "XXX...................XXXXX.......X.....XXX.......", ".............XXXXX....XXX............XXXX.........", ".......XXXXX............XX......XXXX..............", "...X....XXX...............XXXXX.......XXXXX.......", "..........XXX.........XXXX.............X..........", ".......XXXXX...............XX.................XXXX", "X.......XXXXX....................X....XX..........", "...X.................XXX.................XX....XXX", "........XXX...............XX...........XXX........", "..XXXXX........XXXX...........XXXX................", "XXXXX....................XX........XXX............", ".XXXX..............X.........X..............XXXXX.", ".........X.......X.........XXXXX..............XXXX", "..................XXXXX............XXXXX..........", "..X...........XXXX......XXXXX....X......X.........", ".......XX......X.........XX...........XX.....XXX..", "..XXX.........XXXX.......XXXXX...............XXXX.", ".................XX..............XX..........XXXXX", "..................XX.............."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 700;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {"XXXX........X.......XXXX.........XXX.......XXXX...", ".........XXX....XXXX............XX..............XX", ".......XX....................XXXX.................", "..X......XXXX....XXXXX..................XXX.......", ".......XX.......XXXX.........XXXXX...........XXXXX", ".............XX...............XXXXX............XX.", "..............XXXX.................XX.......XX....", ".............XX.......X....XXXX.....XXXX..........", "......XXXXX..........XXXXX.................X......", "...X..........X............X......X...............", "...XXXX..........X....................X...........", "....XXXX..............XXXX............XXXX........", "..........X.........X................XXXX.........", "......XXXX................X.........XXXX..........", ".....XX................XXXXX..................XXXX", ".............XXXX..............XX..........XX.....", ".......XXX.....X...................XXXX...........", "XXX......XXX............XXXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 129;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {"XXX..............X..............XX............XXXX", ".............XXXX..............X............X.....", "........XXXX............XX............"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {"..............XXXXX...............XXXX............", "XXXX...........XX...............XXXX.........XXXXX", "...........X................XXXXX.........XXXX....", ".........X...........XX...........XX.............X", "................XXX...........XXX...............X.", "..............XX................XXX...............", "XXXX..........XXX.............XXX................X", "X................X..............XXXXX.............", "XXXXX...........XXXXX............XXX..........XX..", ".............XXXX...........X...........XX........", "....XX................XXX................XXXXX....", ".......XX.........XX............XXXXX.............", ".XX..............XXXX...............XX............", "..XXX................X.........XXX...............X", "..........XXXXX.........XXXXX............XXXXX....", "..........XXXX............X................XX.....", ".......XXXX.........X................XXX..........", "...X...........XXXXX............XX............X...", "...........XXXX...........XXX............XXX......", "......XXXXX.........XXXX.........XXX..............", "..XXXXX..........XXXX..............XXXX...........", "XX.........XXX...........XX...........X..........X", "XX.........X.............XXX..............XXX.....", "...........XXX................X............XXXX...", "........XXX.........XXXXX................XXX......", ".....XXXX.........XX...........XXX.........XXX....", "........XX............XXXXX.............XXX.......", "...."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> board = {"XXXXX.........XX.........X..........XXX..........X", "XXXX.........XXXXX..........XXXX.........X........", ".XX.........XXXXX.........."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> board = {"XX.....XXX.....XXX.....XX....XXX....XXXX....XX....", ".XX.....XXXX....XX....XX.....XX....XXX.....XXX....", "X....XXXX.....XX....XXX.....X....X.....XX.....XXXX", "....XXXX.....XX.....XXX....XX....XXX....XXXX.....X", ".....XXXXX.....XX....XXX....XXXXX.....X....XXXXX..", "..XXX....XXX....X....XXXXX....XXXXX.....XXX....XXX", "XX.....XXXX....XXX....XXXX.....XXXX.....X....XX...", ".XXXXX....X.....XXX....X.....XX.....XX....XXXX....", ".X.....X....X.....XXX.....XXXXX....XXX.....X....XX", "XX.....XXXXX....XXXXX....XXXX....XX.....XXXX.....X", "XX....XXX....."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> board = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> board = {".X.X..X..X.X.X..X.X..X..X.X..X.X.X..X..X.X..X.X.X.", "X..X.X.X..X..X.X..X..X..X.X..X..X..X..X..X.X..X..X", ".X.X..X..X.X..X..X.X..X..X.X..X..X.X.X..X..X.X.X..", "X.X.X..X..X.X..X..X..X..X.X..X..X..X..X.X..X..X..X", ".X.X..X.X..X..X.X..X..X..X..X..X..X..X..X.X.X.X.X.", "X..X.X..X.X..X.X.X.X.X.X..X.X..X.X.X.X.X.X..X.X.X.", "X.X.X.X..X..X.X..X.X.X..X.X.X.X..X.X.X.X.X.X.X.X.X", "..X..X.X..X.X..X..X..X.X..X.X..X..X..X.X..X.X..X.X", ".X.X..X..X..X..X.X..X.X.X.X..X..X..X.X..X..X.X.X..", "X..X.X..X..X.X..X..X..X..X.X..X.X..X.X.X..X..X.X.X", "..X..X..X.X.X..X.X.X.X..X..X..X.X..X..X.X..X..X.X.", "X..X.X..X.X.X..X..X.X..X..X.X.X.X..X..X..X..X..X..", "X.X.X..X.X..X..X.X.X.X.X.X..X.X.X.X.X.X.X..X..X.X.", "X..X.X..X..X..X..X..X..X.X..X..X.X..X.X..X.X.X..X.", ".X.X.X.X.X..X.X..X.X..X.X..X..X.X.X..X.X.X.X..X.X.", ".X.X..X.X..X..X..X..X.X..X.X..X..X..X..X..X.X..X.X", ".X.X..X.X..X..X..X..X.X..X..X.X..X..X..X..X..X..X.", ".X.X.X.X..X..X.X.X..X..X.X..X..X..X.X.X.X.X.X.X.X.", ".X..X.X..X..X..X.X.X.X.X.X..X..X.X.X.X.X..X..X..X.", ".X..X.X..X..X.X.X.X..X..X..X.X.X..X..X.X.X..X..X..", "X.X..X..X..X.X..X.X.X..X.X.X..X.X..X.X..X..X.X..X.", "X..X..X..X..X.X..X..X.X..X..X.X..X.X.X.X.X.X..X.X.", ".X..X.X..X..X..X.X..X.X..X..X.X..X..X.X..X..X.X..X", ".X.X.X..X..X.X.X..X..X.X.X.X.X.X.X..X.X..X.X..X..X", "..X..X.X.X..X..X.X.X..X..X.X..X..X.X.X.X.X..X..X.X", "..X.X..X.X..X..X..X..X.X.X.X..X.X..X..X.X.X..X.X..", "X.X..X.X.X..X..X..X.X.X..X..X..X.X.X.X..X.X..X..X.", ".X..X.X.X..X.X.X.X.X.X.X.X..X..X.X.X..X.X.X..X..X.", "X..X.X.X..X..X..X.X.X..X..X..X.X..X..X..X.X.X.X.X.", ".X.X..X..X..X.X..X.X..X.X..X..X..X..X.X..X..X..X..", "X.X..X.X.X.X.X.X.X.X.X..X..X..X.X.X.X..X.X.X..X.X.", "X.X.X..X..X.X..X.X..X.X.X..X.X.X.X..X.X..X.X.X.X.X", ".X.X..X..X..X..X.X.X.X..X.X.X.X.X.X..X..X..X..X..X", "..X..X..X.X..X.X..X.X..X..X..X.X..X..X.X.X..X..X.X", "..X.X.X..X.X..X..X.X.X..X..X.X.X.X..X..X..X.X..X..", "X.X..X..X..X..X.X.X..X.X..X..X..X.X.X..X..X.X..X..", "X..X..X.X.X..X..X..X..X.X.X.X.X..X.X..X..X.X.X.X.X", "..X..X..X.X.X..X.X.X..X.X.X..X.X..X.X..X.X.X..X.X.", "X.X.X.X..X.X.X..X.X.X.X..X.X.X.X..X..X.X.X..X..X.X", "..X.X..X.X..X.X..X.X.X.X..X.X.X.X.X.X..X.X..X.X..X", "..X..X..X..X..X..X..X.X.X..X..X.X.X.X.X.X.X.X..X.X", ".X.X.X.X..X..X..X..X.X..X..X..X..X..X..X.X.X.X.X..", "X.X..X..X.X.X.X..X.X.X..X..X.X..X..X..X.X.X.X..X.X", ".X.X.X.X.X.X.X.X..X..X..X..X.X..X.X..X..X..X.X.X..", "X..X.X..X..X.X.X.X.X.X..X.X.X..X..X.X.X..X..X..X.X", "..X..X.X..X.X.X..X.X..X..X.X.X..X..X..X.X.X..X..X.", ".X.X..X.X.X.X..X..X..X..X.X.X.X.X..X..X..X.X..X..X", ".X..X..X.X.X..X..X..X..X..X..X.X.X.X..X..X.X.X..X.", ".X.X..X.X.X..X.X.X.X..X..X..X..X.X.X..X..X..X..X..", "X..X..X.X.X..X..X..X.X.X..X..X.X.X.X.X..X..X.X.X.."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> board = {"..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> board = {".X..X..X..X..X..X.X..X..X.X..X.X.X.X..X.X.X..X.X..", "X.X.X.X.X.X..X..X..X.X..X..X..X.X..X.X.X.X..X.X..X", "..X.X..X..X..X.X..X.X.X.X..X.X..X..X.X.X..X.X..X.X", ".X.X..X.X.X.X.X.X..X..X.X.X.X..X.X..X.X.X.X.X.X..X", "..X..X.X.X..X..X..X.X..X.X..X..X.X.X..X..X.X..X.X.", "X.X.X..X..X..X.X..X..X..X..X.X.X..X..X..X.X..X..X.", ".X.X.X..X..X..X.X..X..X..X.X..X..X.X.X..X.X.X.X..X", ".X.X..X..X..X..X.X.X..X.X..X..X..X..X.X.X..X.X.X.X", "..X.X..X.X.X.X..X.X..X.X..X.X..X.X.X.X..X.X.X..X..", "X.X.X.X.X..X.X..X..X..X.X.X..X..X.X..X.X.X.X.X.X.X", ".X.X.X.X.X..X.X.X..X.X..X..X.X..X..X.X.X.X..X..X.X", "..X..X..X.X.X..X.X..X..X.X.X.X.X..X.X..X..X..X.X.X", ".X.X..X..X.X.X..X..X..X..X.X..X..X..X..X..X.X..X.X", ".X..X..X..X.X.X.X..X.X.X.X..X..X.X..X.X.X..X..X..X", "..X.X.X..X..X..X..X.X.X.X.X..X.X..X..X.X..X.X.X.X.", "X.X..X.X.X.X.X..X..X.X..X.X.X..X.X..X..X.X.X.X..X.", "X..X.X.X.X.X..X.X..X..X..X..X.X..X.X.X.X.X..X..X.X", "..X.X..X..X..X.X..X.X..X..X..X..X..X..X.X.X..X..X.", ".X.X..X..X.X..X.X..X.X..X..X..X..X.X.X..X..X..X.X.", "X.X.X..X.X.X..X.X..X..X.X.X..X.X.X..X..X.X..X.X.X.", ".X..X..X..X..X.X.X.X..X..X.X..X.X.X.X.X.X.X..X.X..", "X..X..X.X..X..X..X.X..X.X..X..X.X..X.X.X..X..X.X..", "X.X.X..X.X.X.X.X..X.X..X..X.X.X..X..X..X..X..X.X..", "X.X.X.X.X..X..X..X..X.X.X..X..X..X.X..X..X.X.X.X..", "X.X..X.X..X..X.X.X..X..X..X.X..X.X.X..X..X.X.X..X.", "X.X.X..X.X..X.X..X.X..X.X.X.X..X..X..X..X.X.X.X.X.", ".X..X..X..X..X..X..X..X..X..X..X..X.X..X..X..X..X.", ".X.X..X.X..X.X.X.X..X.X..X..X..X..X.X..X.X.X.X.X..", "X..X.X.X.X..X..X.X.X.X..X.X..X..X.X.X.X..X..X..X..", "X.X..X.X..X.X.X.X..X.X..X..X.X..X.X..X.X..X.X..X.X", "..X..X.X..X..X.X.X.X..X..X..X..X.X.X..X.X.X..X.X.X", ".X.X..X..X.X..X..X.X..X.X.X.X.X.X.X.X.X..X.X.X.X.X", "..X.X.X.X.X..X.X.X.X..X.X..X.X.X..X.X..X.X..X..X..", "X..X.X..X..X..X..X.X..X..X.X..X..X..X..X..X.X..X..", "X..X.X.X..X.X..X..X..X.X..X..X.X.X..X.X.X.X.X..X..", "X..X.X..X.X..X..X..X.X.X.X.X.X.X.X.X.X..X.X..X..X.", ".X.X..X..X.X..X..X..X.X.X.X.X.X..X.X..X..X.X.X.X.X", "..X.X.X.X.X.X..X..X..X.X..X..X..X.X..X.X.X..X..X..", "X.X..X..X.X.X..X.X..X.X..X.X..X..X..X..X.X..X.X..X", "..X.X..X..X.X..X.X.X.X.X..X..X..X..X.X.X.X..X..X..", "X..X..X..X..X.X.X.X.X..X.X.X..X.X..X.X..X.X..X.X..", "X..X..X..X..X..X.X.X.X..X..X.X.X..X.X..X..X..X.X..", "X.X.X..X..X..X..X.X.X.X..X.X.X.X.X.X.X..X.X.X.X..X", ".X.X.X.X..X.X.X..X..X..X.X.X..X..X..X.X..X.X.X..X.", ".X.X..X..X..X.X.X..X..X..X.X..X..X..X..X.X..X.X.X.", "X.X.X.X..X..X.X..X..X..X.X..X..X..X..X..X.X..X.X..", "X.X..X..X.X.X.X..X.X.X..X..X.X.X..X..X..X..X..X..X", ".X..X..X..X..X.X..X..X..X.X..X..X.X..X..X.X..X.X..", "X..X..X..X..X.X.X..X..X..X..X..X.X..X..X..X..X..X.", "X..X.X.X..X.X..X..X..X.X..X.X.X..X..X.X.X.X.X.X..X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> board = {"X.X............X.....X..................X.........", ".........X............X.X..............X..X.......", ".......X.X..................X.......X.............", ".....X.X.................X..............X.........", "........X....X.......X............X....X..........", "..X.......X.........X..........X..............X...", "......X.....X.........X.............X.............", "....X..............X..............X..........X....", "............X................X.............X......", ".X.X............X..............X........X.........", "....X..........X.X..................X...X.........", "...X............X.X...............X...........X...", "...X....X............X................X.....X....X", "..................X..X..................X........X", ".................X.............X.........X........", ".X.....X.....X................X..............X....", "X.................X........X.......X..........X...", "..X.........X...............X................X....", "...........X..............X...............X......X", "....X.............X....X.............X....X....X..", "...X.....X................X....X..X...............", ".X.........X.........X................X...........", ".......X.............X..X..........X.............X", ".............X..............X............X........", "..........X...X....X......X......X.............X..", ".......X..........X...........X...........X.....X.", ".........X.............X................X.........", ".....X.........X......X....X...X......X...........", "X.......X..............X............X.............", "....X....X........X............X.............X....", "..X...X................X.X...............X....X...", "...............X..X.......X.X..X..............X...", "...............X...........X......X...............", "...X..................X...X........X..X...........", ".......X..................X................X......", ".X......X......X..............X..........X........", "........X.X.X.................X.......X.........X.", "X........X...........X.....X..............X.X.X...", "...........X..X.X.......X......X.......X..........", "....X....X..................X........X....X.......", "......X...X.......X................X.........X....", "..X............X......X...X...............X.......", "..X...............X..........X.....X.......X......", "....X............X..........X..........X..........", ".....X....X................X......X...............", "..X..........X.............X.......X..............", ".X.....X.............X.......X.................X..", "......X.....X..............X..X.X.................", ".X..X.................X........X...............X..", ".............X..X.....X................X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> board = {"X...X.X....X...X.X..X....X....X.X..X.X.X..X....X..", "X.X..X...X...X....X.X....X...X.X...X.X..X....X....", "X..X...X...X.X.X.X....X....X.X....X....X....X.X..X", "....X.X..X...X....X.X.X...X..X..X...X.X...X..X...X", ".X....X....X....X...X...X...X..X.X....X....X....X.", ".X...X....X..X.X...X.X.X.X..X...X...X...X..X...X.X", "..X...X...X.X...X..X...X.X....X.X...X...X...X..X..", ".X....X....X...X.X...X..X.X..X.X.X....X...X...X...", ".X...X.X....X....X...X.X...X....X.X....X...X..X...", "X....X.X.X..X..X...X....X....X.X..X..X..X...X....X", "....X..X..X..X....X.X..X....X..X...X....X.X....X..", "X..X..X....X.X...X.X..X.X....X..X...X..X.X...X...X", ".X...X....X...X...X...X.X...X....X.X...X.X..X...X.", "..X...X...X...X...X...X....X....X..X....X....X....", "X..X.X..X....X..X..X....X..X.X.X...X....X....X...X", "..X...X..X....X.X..X....X....X..X....X.X.X..X....X", "..X..X....X...X....X..X..X....X....X...X..X.X...X.", ".X...X..X....X....X..X.X....X....X...X....X...X...", ".X....X..X.X..X.X....X....X.X....X.X...X....X.X..X", "....X.X.X...X....X....X....X...X...X..X....X.X.X.X", "..X....X....X....X..X.X..X...X....X...X..X...X....", "X..X...X.X....X.X...X..X.X..X.X.X....X...X....X..X", ".X..X.X....X...X...X...X.X..X...X..X.X..X....X....", "X..X..X...X...X..X....X...X..X..X...X....X.X..X.X.", "..X..X...X..X....X...X....X..X....X...X.X.X.X....X", "....X....X..X.X...X...X..X....X...X..X...X....X.X.", "...X...X....X..X...X...X....X.X...X..X...X..X....X", "...X..X.X...X..X.X....X.X...X....X..X....X...X.X..", ".X.X..X...X...X....X...X..X....X..X.X..X....X...X.", "X....X....X...X..X..X...X.X....X.X..X....X..X...X.", "..X...X...X....X..X....X....X..X....X....X.X...X..", "X.X.X....X....X....X..X....X...X....X...X....X....", "X...X..X....X.X....X.X...X.X.X.X....X..X...X.X....", "X..X.X.X.X.X..X.X.X....X.X.X..X..X.X....X.X....X..", ".X..X...X....X....X.X....X..X..X.X....X....X...X..", ".X...X....X..X...X...X....X...X.X....X....X.X....X", "....X..X.X..X..X...X.X..X..X.X....X...X...X....X..", "X.X....X...X....X..X...X...X...X...X...X..X.X....X", "..X....X....X..X....X....X..X.X....X...X....X.X...", "X....X.X....X...X....X....X...X...X....X....X....X", ".X..X....X...X...X.X.X.X....X.X...X..X.X....X.X..X", "...X....X..X.X....X...X..X...X.X...X....X...X....X", "..X....X....X....X..X....X....X...X...X.X...X.X.X.", "..X..X..X.X...X....X..X..X...X...X....X..X...X..X.", ".X.X.X....X....X..X...X...X..X.X...X..X..X...X.X..", "..X....X....X.X.X....X...X...X..X....X...X...X.X.X", "....X....X...X...X.X..X...X..X....X...X..X..X..X..", "X....X..X...X...X....X..X...X....X..X...X.X....X.X", "..X...X....X.X.X.X.X.X.X....X..X...X...X.X....X..X", "..X.X.X..X...X....X...X....X.X....X..X....X.X....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> board = {"..X.......X..............X.................X......", ".......X.................X........X....X....X.....", ".........X....X...........X..X..X.........X.......", "X...X...........X.X...............X.......X.......", ".........X.......X.....X........X........X...X....", ".............X..............X...........X.....X...", "..........X...............X.......X..........X....", ".............X.................X...............X..", ".....X....X....X................X..............X..", "...X......X.....X............X.....X....X.........", "...X.................X.........X....X...X.......X.", "....X........X...X..........X................X....", "......X.........X........X................X......X", "...X...X...........X.............X..X..........X..", "..X..............X.....X.....X...X........X.......", "X.................X...........X.......X...........", ".X.......X....X...............X..........X........", "......X........X.................X..............X.", "........X..X................X....X............X...", "............X...........X.......X......X..........", "...X.....X.X.............X..X......X..........X...", ".X....X..........X............X.X.............X...", ".........X......X.................X.......X.......", ".........X................X......X..............X.", ".........X.........X...X............X.X...X......X", "...........X.................X........X...........", "...X.................X.................X..........", "X.................X...........X..............X....", "......X.....X................X..........X........X", "..X......X.................X...X....X.......X.X...", "...........X.X................X.................X.", ".........X..............X........X.............X.X", ".............X......X....X...........X............", "..X.X..............X...X...............X..........", "......X...............X...............X...........", "......X.....X............X...X...X.............X..", "...............X.........X............X........X..", "..............X..............X....X...........X...", ".X.............X.............X............X.......", "X..X..........X.X...........X.......X........X....", ".....X.....X.........X........X....X.....X.......X", "..........X.......X..............X.....X.X......X.", "................X.....X.........X...X..........X..", "............X..........X.............X.......X....", "......X........X..............X.......X...........", ".....X...........X................X...............", "..X..X............X.................X.............", "....X................X.X.....X...............X....", ".........X..X.........X.X.................X.......", "X....X..........X...........X...X............X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 363;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> board = {"X..........X....X............X.X.........X....X...", "X...X...X.............X............X.........X....", ".X..........X.....X..........X.........X.......X..", "......X.X......X.....X....X.............X.....X...", ".X.....X..X..........X....X...X.....X............X", "........X............X.........X.........X..X.....", ".......X...X.........X.........X...X............X.", "........X...........X...X.........X....X.......X..", "..X............X............X.........X...........", "..X....X.....X........X....X..X....X.............X", "...........X.......X....X............X...X........", "....X............X....X........X............X.....", ".....X...........X..X...X.........X.........X.....", "....X...X....X....X.............X.X........X......", ".......X.............X......X.....X...X...X.X.....", "...X...........X.X...X.X.....X...X...........X....", "....X........X.....X.....X...X............X.X...X.", ".......X..........X..........X............X..X....", ".X...........X...........X.....X....X...X.X.......", ".....X..........X........X..........X.....X.......", "..X...........X...X.......X.............X.....X.X.", ".........X.....X.....X.........X.........X........", ".....X.........X....X.....X.X.X.........X.........", ".X..X...X..X..........X.......X..........X.......X", "..X...........X.X.....X...X........X.......X......", "....X.......X.......X....X.X..........X...........", "X........X.......X..........X...X.........X.......", "..X..........X.............X.........X........X...", "........X.....X.............X.............X.X.....", "..X.........X.......X..........X.....X.X.........X", "..........X....X.......X...X........X............X", "...X...X.......X.........X..X...X.............X...", ".........X...........X....X......X....X.......X...", "....X..........X.......X........X.X..........X....", "........X...........X...........X...X....X........", "....X............X......X............X......X.....", ".......X.........X........X..........X......X.....", "......X...........X......X....X.....X.......X.....", "........X...........X.........X............X....X.", ".......X..X.........X.....X.............X.........", "X........X......X.X......X.............X....X.....", "X...........X...X.....X..........X.......X.......X", ".........X.......X...X...X......X.........X.....X.", "...........X..........X....X.....X........X....X..", "..X.......X.............X...X.........X.....X.....", "...X..........X.X..X.......X......X..X...X........", "..X.....X...........X........X..X.......X.........", "X..X............X......X.......X....X.X...........", ".X............X..........X.....X..........X.......", "..X......X..........X.............X.X..X..X......X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 707;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> board = {"X......X....X........X...X......X..X...X.X....X..X", ".......X.......X....X....X....X....X.......X.....X", "...X........X...X..X....X.....X..X........X.......", "X.......X..X........X.......X.X......X.....X.X.X..", "X.......X........X.....X........X.......X.X......X", "......X....X......X........X....X.....X..X...X....", ".X...X......X........X.....X......X...X........X.X", ".X.......X..X........X........X...X...X...X.....X.", "..X....X.....X......X.X..X....X........X....X....X", "........X.......X....X..X.....X.....X......X.X.X..", "....X......X.......X..X.X...X......X.......X......", ".X......X.X........X......X.......X...X........X.X", ".......X..X.X...X........X....X.......X......X..X.", ".......X.....X......X.......X.X.......X..X..X.....", "X.....X....X.....X.X........X........X..X...X..X..", "X...X........X...X......X.......X..X.X......X.....", "X..X......X.......X....X.......X....X.....X.X...X.", ".......X..X.....X.....X..X.....X.....X...X..X.....", "...X.......X........X......X......X.X........X....", "....X...X....X...X.......X.....X...X.X.X.......X..", "..X..X...X...X.....X....X.....X...X.......X.......", ".X....X...X..X....X....X.X..X.....X........X......", ".X.X...X....X......X.X...X...X......X..X......X..X", ".X.......X.X..X......X.....X.X......X......X.....X", ".X..X.......X...X.X........X...X......X..X..X.....", "..X........X....X....X..X.......X.....X....X......", ".X......X........X..X....X....X.......X.X...X.X...", "...X.X......X.....X.....X.....X.X......X.......X..", "......X........X...X.....X....X..X.X.......X......", ".X........X..X........X..X....X........X..X....X.X", "....X.....X.X...X.....X....X.X.......X.......X....", "X..X....X......X...X...X........X......X.X...X...X", ".X......X......X........X.......X....X....X.X.X...", "...X.......X........X......X.....X.....X.X.......X", ".X..X........X.X...X.....X.X.......X....X....X....", ".X.....X.X........X.......X....X....X......X.X....", "...X.X.......X....X....X..X...X..X......X.....X...", "..X..X..X.......X......X.X........X..X........X...", "...X....X......X...X....X....X...X...X....X...X...", ".....X.X..X...X..X.......X...X..X..X.....X........", "X.....X......X....X........X........X.....X..X....", ".X........X......X......X.X..X....X...X....X...X..", "...X..X.....X.X.X.X.......X.......X..X.....X..X...", "....X......X.....X.X.......X......X....X......X...", "X....X..X..X.X.......X.......X.....X......X.....X.", "X.X........X........X.X..X.......X........X....X..", "....X....X.......X..X..X....X..X........X........X", "........X...X..X.....X........X.......X....X...X..", ".X.......X......X....X...X.X..X...X..X.X...X.X....", "....X.....X...X.X.X.....X...X....X...X.......X...X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 371;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> board = {"X.......X.....X....X.....X........X..........X....", "......X...X..X...X.......X.......X..........X.....", "....X....X.......X..X..........X..X.X.X.....X..X..", "......X..........X........X.......X..........X....", ".X.........X.....X....X.X.......X.....X.....X.....", ".....X.......X....X..........X.......X..........X.", ".....X..X.....X....X.X....X....X......X.........X.", "X.......X.....X....X.......X.........X........X...", "...X.......X........X..........X....X.......X.....", ".X..X......X..........X.........X.........X.......", "X........X......X.X..........X........X....X......", "...X..........X.........X..X..X.........X.........", ".X......X.......X..X..........X..........X.X....X.", ".X..........X...X........X.....X........X........X", "..X..........X...X....X....X.X...X.X.........X...X", ".X........X.........X.........X.....X.X........X..", ".....X..X...X.........X...X....X.X.....X.....X....", "....X..X....X.........X.........X.......X..X......", "X........X........X.X..X.......X.X........X.......", "X...X...X.X.X......X...X...X......X.......X.X.....", "...X........X.........X.........X.....X....X......", "..X.X...X..........X..........X........X....X.....", ".X......X.X...X..X.......X..........X.......X...X.", ".......X.....X..X.........X..........X.X..........", "X.X.....X.....X..X.........X...X...X..X..........X", "....X..X....X....X....X....X.....X..........X.....", "X.....X..........X........X...X.........X...X...X.", ".X.........X....X...X.........X.......X......X....", ".X.......X.X.......X..........X......X...X......X.", "...X.......X....X.....X.....X.X...X.X.....X......X", "..........X.....X..........X......X......X........", "..X...X......X...X.X......X....X..........X....X.X", ".........X...X..........X...X....X..........X.....", ".X..X.......X......X.X.....X....X.........X.......", "X..X.X........X.....X..........X.X.X.......X....X.", "...X........X.....X...X........X..........X.......", "...X.....X.......X...X.......X.......X.X........X.", "...X....X....X........X.....X........X........X...", "..X.........X..........X..........X..........X....", "..X..........X....X.X.....X.....X..X.........X....", ".X....X.......X...X...X...X..X...X..........X.....", ".X.......X.....X........X......X.......X.X......X.", ".........X....X..........X....X..........X........", "X.X.......X....X..X.....X....X......X.........X...", ".......X.....X.....X......X..........X....X.......", ".X....X........X.........X.X........X....X....X...", "X........X.......X.......X........X.......X...X...", "......X....X.X.....X...X..........X..X..........X.", ".X...X.....X....X....X.....X......X......X.......X", "........X.........X......X..........X.....X....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> board = {"X.................X.................X.....X.......", "...X.............X..........X......X....X......X..", ".........X.......X.................X......X..X....", "..........X...............X..................X....", ".......X.....X.......X.................X..........", "X............X.........X..................X....X..", "......X............X..........X......X....X.X.....", "...........X.................X..............X.....", "............X..............X....X.X...............", "...X.......X..........X....X.................X....", ".........X..X.................X..............X....", ".......X.X.......X.....X..................X.X.....", ".........X......X.X..........X...X.............X..", "...X.........X...X..........X........X..........X.", "........X........X.....X.............X............", ".....X......X..................X..........X.......", "..X.............X................X....X...........", "..X..X....X..................X...............X....", "X..........X................X....X................", "..X....X........X................X.........X......", ".......X............X...X..X.....X................", "X.....X.....X.X................X..........X.....X.", ".......X........X..................X..............", "....X.........X.................X...X..........X..", "...X..............X.....X.....X.........X.........", ".......X..........X.........X................X....", ".......X............X..........X...X............X.", ".................X.........X.........X.....X......", "........X...X...........X.....X..................X", ".....X.........X..................X...............", "...X................X.............X...............", "X.....X.X...............X.......X............X....", "..X............X...........X.....X.....X..........", ".......X.................X.........X....X.........", "........X................X..........X.....X...X.X.", "...X.........X......X.....X.....X............X....", ".......X..................X................X......", "....X...............X.................X...........", "...X.........X..........X.......X.......X.........", "..X..X.................X.........X.............X.X", "........X..........X..........X............X......", "...X...............X..X.....X..........X..........", "........X.........X........X.........X.........X..", ".....X................X...............X...........", "X.......X...........X......X............X.........", "...X......X..............X.............X..........", ".......X.....X.....X.............X................", ".X................X......X....X.X.........X.......", "......X..........X....X.............X..X..........", "X.X............X..........X....X.......X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1135;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> board = {".X..........X..X.X..X.........X......X...X......X.", "....X...........X.....X...X.X....X.X....X.........", "..X.....X.....X..........X..X........X......X...X.", "..X...X..X..X....X......X......X...........X....X.", "........X...........X......X.......X..X........X..", "...X....X...........X.....X.......X.....X.......X.", "..........X....X........X.....X...X...X...X.....X.", "......X...X...X...........X......X..........X....X", ".........X.......X.........X...X...X.......X...X..", ".....X......X...X.......X..........X....X......X..", ".X....X.X.....X.X.......X......X.....X........X...", ".....X.....X......X....X...........X......X.....X.", "......X..........X.X.......X..........X...........", "X.....X..........X..X........X.....X..........X...", "X...X.X.....X......X..X.......X.......X....X....X.", "........X..........X.......X..........X........X..", "...X.X..........X......X...X....X..........X...X..", ".X..........X......X.X..X..X.......X.......X......", "....X...........X.........X..X.........X...X.X....", "X...........X...X...X...........X......X....X.....", "....X......X.........X.....X.......X...........X..", ".......X.X..X.........X..X.X......X......X........", "..X..........X.....X..X........X.........X........", ".X......X..........X...........X..X.......X.......", "..X.X..X........X.....X.X......X.....X.X.....X....", "......X..X.X...X..X....X.X..X.....X.........X.X...", "........X....X..X.......X......X......X...........", "X.X..........X.......X.X...X...........X..X.......", "..X...........X......X.X...........X....X........X", "...X.......X..........X.X...X.......X..X..........", "X......X........X...X..........X..........X....X..", "........X...........X....X.X.....X..X......X....X.", "X......X..X....X..X.......X........X....X..X......", "..X....X......X...X.....X..........X......X..X....", "....X.........X.........X.........X.X.X.........X.", ".X.X....X.......X..........X..........X.......X...", "..X........X.........X......X..........X..........", ".X.X.....X......X...........X.X.....X....X.X......", "X........X........X.......X......X..X.......X.....", "....X.......X.........X.....X......X.......X.....X", "...........X....X..X.........X.......X.........X..", "........X.........X......X.......X...........X....", "X..X..........X.........X..........X...X.....X....", "..X..........X...X...X.X...X...X....X....X........", "X...........X....X...X....X........X.........X....", "......X...X....X.......X..X...........X.......X..X", ".......X.X.......X......X.........X..........X....", ".....X.........X...........X...........X.X........", "...X.X....X.....X...........X..........X.......X.X", "..........X..........X...X.......X........X.....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2377;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> board = {"X.....X..X....X.....X.....X.....X....X.....X..X...", ".X.X.X.....X...X..X.X....X...X..X..X.X.....X..X...", "X.....X...X....X..X.....X..X....X.....X.....X...X.", "..X..X.X...X..X...X...X.....X..X.....X..X..X....X.", "...X.....X.X.....X.X..X...X.....X.....X...X...X...", "X....X..X..X..X.X....X...X.....X...X.X....X.X.X.X.", "X.X....X.....X...X....X.X.....X.X....X...X..X.X.X.", "....X.....X...X...X...X.X.....X.....X...X..X...X..", "..X.X..X..X...X...X.....X.....X.X...X..X..X..X...X", ".....X.....X.X..X.....X....X.....X.X....X..X....X.", "....X...X....X....X..X....X.X.X.....X...X....X.X.X", "....X.X...X....X.X...X.....X.X....X..X...X.X.....X", ".....X.....X.X.X.....X.....X.....X....X.....X.X...", "..X.....X....X..X....X.....X.X.X....X.....X.X....X", "..X.X.X...X...X...X...X...X....X....X.X....X.X....", ".X.....X..X.X..X.....X..X.X....X...X.X....X.X...X.", "...X...X.X...X...X...X.X....X..X.....X..X.....X..X", "....X....X...X...X....X.....X.X..X.X....X....X....", ".X.X.....X....X...X.....X....X.X....X...X.....X...", "X.X.....X...X..X...X.....X.....X..X...X.....X.....", "X....X....X..X....X....X.X...X.....X....X....X...X", ".X.....X.X.....X....X.....X.X....X.....X..X....X..", ".X...X..X..X...X....X...X.....X...X.....X...X.....", "X...X...X..X.X.X.X..X.X....X...X.....X.X....X..X..", "...X..X...X....X..X.....X.X....X....X.....X..X....", ".X.....X.X...X...X.....X.X...X..X..X....X..X...X..", "..X...X..X.X...X...X..X.X.....X...X...X..X....X...", ".X...X...X..X.X..X...X..X.X.....X.....X..X.X....X.", "..X..X..X....X.X.....X...X.....X....X..X...X....X.", "....X.X.....X...X.....X.X...X.....X.....X.X.....X.", "X....X.X.X...X.X.....X....X.X...X.X...X..X...X...X", "....X...X..X.X...X....X..X..X.X...X...X.....X..X..", "...X...X.....X..X.X...X..X....X..X.X.X.....X....X.", "X..X.....X.X....X.....X.X..X...X..X..X..X.X.....X.", "X..X....X..X..X.X...X...X.X...X....X...X.X....X..X", "...X.X....X.....X....X..X.X.....X...X.....X.....X.", "X.....X.X.....X...X....X....X...X....X.....X..X..X", "..X...X.....X.....X....X...X.X.....X.X..X...X...X.", ".X....X.....X....X...X....X..X..X...X....X...X..X.", "....X.X..X.X...X..X...X...X....X.X..X....X.X.....X", "....X..X....X.X.....X....X.X..X....X...X.....X....", ".X....X..X..X.X.....X....X.X...X...X...X...X.....X", "...X.X.X...X....X.....X...X....X...X.....X...X....", "X....X.X..X.X..X...X..X...X...X..X....X.X.X..X.X..", "..X.X....X.X.....X.X.....X.X.X..X.....X....X.X...X", "...X..X..X...X.X.X....X..X....X.X....X...X...X....", "X.X.....X..X....X....X.X.....X.....X.....X.X..X.X.", "X.....X.X.....X.X....X.....X...X.....X.....X....X.", "..X....X.....X....X.X.X.....X...X.X.X..X...X.X.X..", "...X...X.....X..X....X....X.X.X....X....X.....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
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
    vector<string> board = {"..X............X.....X........X.....X......X....X.", "....X.X........X............X...........X.........", "..X....X..........X..X......X..X............X.....", ".......X.........X....X.........X....X............", "X..........X......X...........X.......X.........X.", ".X........X....X.......X..X...X............X....X.", ".......X..X....X...X.....X....X..X.......X...X....", "..X.......X.....X............X............X.....X.", "....X.........X.X..........X.X...........X........", "...X.......X.........X...........X..X.......X.....", ".......X..X.X.........X...X....X....X......X......", "X...........X........X............X.X............X", "....X...X.X.X....X.........X...........X..X.....X.", "...........X....X..X.X.X.....X..........X.........", "X.........X.......X.........X........X.........X..", ".X........X..........X..........X...........X.....", "...X....X..........X...........X..........X.......", "X...X............X...........X.X.X.........X.....X", "...........X....X.........X...........X...X.......", ".....X....X........X.......X....X....X...........X", "...X.......X.......X.......X..X......X....X..X....", "...X.......X........X.....X.....X..X........X.....", ".X.........X......X.........X.X.....X........X....", ".......X..........X............X............X.....", "..X........X.........X..........X.......X.....X...", "X.......X........X.....X..........X............X..", "...X.......X.....X........X..X....X.....X.........", ".X....X.......X.......X..X.......X...........X.X..", ".......X...........X...X.........X......X.........", "X...........X.......X............X.........X.X....", "......X.X..X.......X.......X.X........X.........X.", "..........X...........X..........X....X...X.......", "..X........X....X.........X....X.........X..X....X", ".......X...........X......X............X........X.", "..........X.........X.....X.........X.X....X......", "..X......X............X.....X.X.....X..........X..", "X............X......X...X............X..X....X....", ".....X......X...X.........X.........X...........X.", ".X......X........X.......X............X....X.....X", ".....X...X........X...........X..X........X.....X.", "..X..........X.X.......X........X....X........X...", ".........X...X....X.......X...........X.........X.", "........X.........X..........X........X......X....", ".......X.....X...X......X..........X......X......X", ".......X.....X....X...........X........X..........", "X..........X..X.......X........X........X.........", "X......X....X..........X...........X......X...X...", ".......X......X..........X............X........X.X", "..X.......X.........X...X...X.X............X......", "......X............X.......X......X.........X....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> board = {".....X..X.....X.....X.X...........X....X..........", "X...X....X..X.......X...........X.........X...X...", ".......X....X.........X.....X.X...X.....X........X", "....X..X........X...X..........X......X........X..", ".X.......X...........X..........X..X....X.........", "..X...........X........X.....X.......X....X.......", "X.......X........X..........X.......X.....X.......", ".X...........X..........X...X..........X..........", ".X...X........X..........X.....X.X.X.......X......", ".....X..........X........X.........X........X.X...", ".......X...X......X.......X........X..X.....X.X...", ".....X...X....X..........X........X...X...X.......", "...X..........X.......X...X...X.....X..X......X...", ".X.........X........X..X.X.........X.....X........", "...X.....X...........X.......X...X...X...........X", ".........X.....X.........X......X....X.........X..", "...X..........X...........X.......X......X......X.", "..........X.X..........X...X....X.........X.......", "..X....X.......X........X.X....X......X.X......X..", "X......X..X......X..X....X.....X..........X..X...X", "...X.X.X.......X.......X..........X.......X......X", ".X.X........X....X...X.......X...........X....X...", "........X.........X.........X...X..........X.....X", "......X.......X...........X........X.......X....X.", "....X........X......X.........X.....X.....X....X..", ".......X.......X.......X......X..........X......X.", "X......X....X.........X..X...X.......X....X...X...", "..X....X.....X........X.........X......X.......X..", "..X...X..X...X....X........X.X.........X..........", "X...........X.....X.........X.X..X....X......X....", "....X......X....X.........X...........X.....X.....", "......X.....X...........X..X...X..........X..X...X", "...........X..........X.........X......X.....X....", "...X..X..........X.........X.X..X........X........", "...X....X.....X.X.........X....X....X......X..X...", "...X...........X...........X...........X........X.", ".........X........X.....X..X........X..X....X.....", ".....X.....X.X....X...........X.......X........X..", "......X........X.......X..........X......X........", "...X...X...X...X..........X...........X..........X", "....X..........X.X..X..........X...X.X...X....X...", "....X........X.X...X........X.........X..........X", "...X..........X...X.........X.......X..X..........", "X..X........X...........X.......X.....X.........X.", ".........X..........X....X...........X......X....X", "....X..X.....X...........X..X...........X.....X.X.", "X.........X...........X.........X..........X......", "....X.....X.......X...X......X.X....X.......X.....", "......X.X....X...........X.........X.....X........", ".X..........X.....X.......X...X...........X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> board = {"X.........X.........X.............X.X...X..X......", ".....X......X...........X............X........X...", "X.........X....X..........X.X...X........X........", "...X...X.........X.......X....X...........X.......", "......X......X....X.....X.........X..X...X......X.", ".....X.............X..............X..........X...X", ".............X.......X........X.....X....X........", "X...........X......X.......X..............X.......", ".......X.........X............X.............X.....", ".........X.X............X..X.............X.....X..", ".....X...........X...........X........X...........", "...X......X........X...X..............X....X...X..", ".X..X...X..X.X..............X.............X.......", "....X........X............X.X....X....X........X..", "......X.....X..........X......X......X............", "X.............X.....X..X..X...........X.X.........", "....X............X...X...X...........X...........X", "............X....X...........X...X...........X....", "......X........X.X...X...X............X...........", "..X.......X....X.............X..........X........X", ".............X.X....X...........X.X.X....X........", "X.X.X...X..X.......X.....X...........X............", "X..X.X.X...X.........X............X...X..X........", "....X.......X...........X.............X.......X...", ".X.X.........X...........X.....X......X...........", "...X...........X......X..........X...X......X..X..", "X.............X............X...........X..X.......", ".X..........X.....X.....X....X..........X.........", ".X...........X.X.............X.X.........X........", "..X..........X............X..............X........", ".X...X.............X.....X..X..............X......", "X........X...X.............X............X......X..", "...........X.............X........X.....X........X", "........X........X..X.......X.........X.X....X....", "......X..X........X.....X...........X.X.....X.....", ".........X...........X.........X....X...X....X....", ".X.X...X.X..........X.............X........X......", ".X...........X..X..X........X............X........", "X.........X...X.....X......X..............X.......", "......X..........X........X.........X....X.......X", ".....X............X..X.............X..........X...", "......X.........X........X....X.........X.........", "....X.........X.........X......X..X..X...X..X.X...", ".....X........X.........X..........X.....X........", "..X.......X.......X....X.............X...X.....X..", ".....X.X..........X..........X..........X..X..X...", "..........X..X............X..........X...........X", "...........X...X.........X..............X.......X.", ".....X.X.X.............X...........X...X..........", "..X.............X......X...X.X............X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 392;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> board = {"X..............X...............X...............X..", "........X..............X....X.X..........X...X....", ".X................X......X.............X..........", ".X.......X.X...X....X....X.........X..............", "X.........X...X.X...........X.....X...X........X..", ".X............X.........X...............X......X..", "....X.............X..........X...............X....", "..X...........X.........X...X........X............", "X................X...X..............X..X..........", "....X............X..........X..............X......", "....X..X............X...........X........X........", "........X...............X......X...............X..", "..........X.............X..............X..X....X..", "..............X...............X.............X....X", "............X................X.......X.........X..", ".........X.........X.............X..............X.", ".....X..X....X..X............X..............X.....", ".....X.............X...............X.X..........X.", "..X..X........X..X.......X.............X..........", "...X..X......X...........X........X......X..X.....", ".........X..............X.X................X...X..", "...X....X...............X.X........X........X...X.", "...........X.....X.X........X....X......X.X.X.....", ".........X..............X.............X.........X.", "X...X.......X............X...............X....X..X", ".......X.........X..........X.............X.......", "X....X...X.........X................X...X.........", ".X................X......X...X.X............X...X.", ".X.............X..........X..........X............", "...X.......X.....X.........X.............X....X...", ".........X......X...............X.....X...X.......", "......X..........X..............X...............X.", "...X...............X.....X...X........X...........", "...X.X.............X...X...X............X........X", "...X...........X.......X.......X.......X..........", "......X..X...............X..........X..X.......X..", "............X.............X.............X.........", "..X............X................X...........X.....", "........X..X............X..X.........X...X........", ".......X........X...........X......X........X.....", ".......X................X...X.........X...X.......", "...X.......X...X.........X...............X........", "........X...............X.......X.........X..X...X", "........X....X........X.X.X......X.X..............", "X.X..X.X...X.........X......X.X.X.....X.......X...", "..........X.........X.....X.......X....X....X.....", "....X......X..X....X.........X............X...X...", "..X............X.X.......X....X............X......", "...X.........X.........X.......X....X......X...X..", ".........X...X...............X..........X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 558;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> board = {"....X....X......X......X......X....X.X.......X.X..", "X.X...X..X..X..X...X...X...X.......X......X..X...X", ".....X....X....X..X..X.X...X......X.......X....X..", "..X..X......X......X...X.......X.....X...X..X..X..", "....X.......X......X.......X.......X..X...X.......", "X.....X.X....X..X.....X...X.....X....X.......X..X.", "....X.....X...X.....X...X...X..X...X......X......X", "....X..X...X...X...X.......X.X...X.......X.X...X..", ".....X....X......X...X..X....X...X....X...X......X", ".....X.......X...X......X.X.......X....X.....X...X", "......X....X..X.......X.......X...X.X......X......", "X..X.X.......X......X.....X..X.....X.X.....X....X.", "...X.X.X..X....X.X.X...X..X.......X....X.X..X...X.", "....X......X......X....X....X.......X.X.....X...X.", "......X.......X.......X...X....X.X....X......X....", "...X.X..X..X.......X...X..X....X......X.....X.....", ".X....X...X......X.X.......X.......X.X...X.......X", ".X....X.......X.....X.......X..X...X...X....X.....", "X.X.X.....X....X...X.......X.......X......X...X.X.", "......X.X....X......X...X.....X......X..X.X.....X.", "...X..X.....X...X......X..X...X.....X.......X...X.", "X....X..X.......X.......X....X....X.......X...X...", "..X..X.X.X..X.....X...X.....X.X.X.X....X..X......X", ".X.....X.......X.X.....X.....X.......X....X...X...", "X....X......X.....X....X...X......X.....X.....X...", "..X..X...X..X..X...X......X....X.X..X....X.....X..", "X.X......X...X.......X....X..X....X......X.....X..", "....X.....X...X....X.......X...X.......X.X.X....X.", "X..X.....X....X......X.X.X.X......X....X.X....X...", "..X......X....X.....X.....X.X.....X.X......X....X.", "X...X.....X....X...X.....X.X.......X.....X....X.X.", ".X.X.X.X.X..X...X.......X.....X..X.....X.......X.X", ".......X.X.....X....X....X......X.....X.....X.....", "X...X..X...X....X......X...X.....X......X.....X...", "X.......X......X.X..X.......X...X...X...X....X..X.", ".X.......X.X.....X.X......X...X.X.X.......X......X", ".......X...X..X.......X......X...X.....X.X.....X..", "...X..X....X.....X....X.....X.....X.......X.......", "X..X..X..X..X.......X..X.......X.....X.X....X..X..", "..X...X..X..X..X.X.....X.......X.....X.X.......X..", ".X.X.......X...X...X.....X.X...X.X.....X......X...", ".X....X.....X...X.....X.....X.X...X.X.......X...X.", ".....X..X...X......X...X.......X......X.....X.....", ".X....X....X...X.......X....X.......X.......X.X...", ".X......X....X......X.......X......X......X......X", "......X.X.....X....X.X....X.....X.X...X.....X....X", ".......X.......X....X...X.....X..X......X......X..", ".....X..X.......X......X..X.......X.....X.......X.", "....X..X.X.X.X.....X.......X.X....X....X.......X..", "....X......X.......X.......X..X....X..X....X.X.X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 227;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> board = {"X.X........X..............X.............X.........", "..X..X..........X..........X..................X...", ".X..X...X......X.............X................X...", "...X.....X.................X...................X..", "X..............X........X..................X......", ".........X.........X...........X..X............X..", ".................X....X.X..X..........X...........", ".......X...............X..................X.......", "..........X...........X.X...................X.....", ".....X...............X...........X...............X", ".............X.........X...................X......", "............X............X..............X......X..", "....X.X.....X.X....X.......X....X...........X.....", "..........X..........X.....X..X.............X...X.", ".........X...................X..................X.", ".....X........X................X..X...............", "X......X.......X.........X...................X....", ".........X.......X........X...................X...", "..............X..................X.....X..........", ".....X........X.X.........X.X..X................X.", ".......X...........X...............X...X..X.......", ".....X..................X.........X...X...........", ".X.....X........X...........X.X.........X.........", "....X........X........X.............X.......X.....", "...X.............X...X.....X............X.........", "..........X.........X....X................X.......", "X...X..............X.......X.....X..........X.....", "X...........X................X..............X.....", ".......X.............X...........X................", ".X.....X......X...X................X..............", "X........X...X........X................X..........", "...X................X...................X.........", ".....X...............X...X................X.......", "......X.........X...X...............X.............", "..X...............X..................X.......X....", "........X........X.....X....X..X...X..............", "...X............X....X................X...........", "......X..................X...X........X...........", "X.............X................X...............X..", "....X............X.............X.....X....X..X....", "....X................X..................X..X..X...", "............X...............X...........X.........", ".X...X...........X............X......X............", ".......X..................X.........X...........X.", "...X...................X..............X....X......", "....X............X...........X.X...........X......", "X....X...........X.X.................X............", ".X...X..........X........X............X...........", "X.......X.................X..................X.X..", ".............X.................X.................X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 543;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> board = {".........X......X..X........X....X.............X..", ".............X............X.................X.....", ".........X...........X..............X.............", "..X................X....X...X...........X.........", "...X..X..................X.................X......", ".......X.........X................X...............", "X.......X........X.........X....X............X....", "..............X..X..X....X....X.............X.X...", "...............X.....X......X..............X......", ".........X...........X.......X.............X......", ".....X.X..............X.......X................X..", ".....X...............X.............X....X.....X...", "..............X.X......X........X.....X...........", ".......X...........X...............X..............", "..X........X..............X.X.............X.......", "....X.......X.............X..................X....", "..........X...............X....X..........X......X", ".......X...........X............X..X..............", "....X................X..........X............X....", "............X...........X.............X...........", "......X.............X.................X....X......", "...X............X...X.............X.............X.", "..X........X..................X..........X........", ".........X....X..........X.........X..X...........", ".......X..X................X.X...........X........", "......X............X....X.X..............X........", "....X......X..X....X...............X........X.....", "..X........X.........X.................X..........", "...X............X.....X..........X..............X.", ".....X..............X............X............X...", ".............X.........X........X...........X.....", ".X.......X..X..................X..............X...", "..X......X........X.....X........X...........X...X", "....X..X.X..............X....X....X..........X....", ".........X.................X............X.........", ".....X.............X.........X....X...............", "..X............X........X...X...........X.........", "..X.............X..................X..............", "...X.........X...X...........X...X.........X......", "......X.....X..................X...........X......", ".......X..X........X........X..........X..........", "........X........X......X..............X.....X.X.X", "......X.................X........X..............X.", "...X.............X.................X....X..X......", "..X.X.....X......X...X.X............X.............", "...X...X.............X.................X..........", ".X.....X.............X..................X.........", ".X..............X.....X..............X........X...", ".........X.X.............X...........X............", "....X..................X....X........X..........X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 225;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> board = {".....X....X.....X..X..X..X.....X....X......X..X...", "....X.......X.......X.X......X..X.X......X...X..X.", "......X..X.....X.X.X.X.....X.......X.......X......", "X....X......X...X.......X.......X.......X......X..", ".....X......X.......X.X.X....X.......X.X.......X.X", ".......X....X.X..X.....X.....X.....X....X.X......X", "..X.X.......X....X....X....X...X...X...X.....X...X", "..X....X.....X.......X....X.X....X......X.X.....X.", "....X......X.......X...X.....X.......X...X.X.X.X..", "....X...X.....X.X....X.X.......X......X......X....", "X....X.....X.....X......X....X..X....X.....X......", "X....X..X....X.X....X....X....X.X.....X.......X..X", ".X.X.X......X.....X...X.....X..X....X..X...X...X..", "...X.X.X...X.......X.......X...X......X.X.......X.", "....X..X...X....X...X...X..X...X.X.......X.....X..", "..X...X....X....X.....X.....X.X.X.....X.....X....X", "....X...X..X....X.......X......X..X....X....X.....", "X....X...X.......X......X......X......X......X....", "X.....X...X.X.......X......X....X......X.....X...X", "....X....X..X.......X..X.......X......X....X......", ".X.......X.......X...X.......X..X.....X......X..X.", "....X.......X.....X.X......X......X..X...X.....X..", "..X......X.X.......X...X..X...X......X.......X....", "...X....X.......X.....X.X...X......X.X.....X.X..X.", ".X......X....X..X.X.....X...X...X......X...X......", ".X....X....X....X......X....X......X...X.......X.X", ".......X......X......X.X....X.......X....X......X.", ".....X....X.....X..X..X....X......X..X..X.....X...", "X.X.....X...X......X......X.....X....X.......X...X", "..X....X.......X....X.......X.....X....X...X.....X", "......X.......X.......X..X......X..X.....X..X..X..", "X...X......X....X...X....X..X.....X....X..X....X..", "....X..X.X..X...X..X..X.......X.....X...X....X...X", "......X.....X...X..X......X.X...X....X......X.....", "..X....X....X.X.....X.X.....X.......X.......X...X.", ".X....X.X......X...X....X.......X.......X...X.....", "..X...X...X.....X.X....X...X.....X..X.X...X.....X.", "......X....X......X.X......X..X.X....X..X......X..", "...X.X....X.....X.......X...X....X.......X.....X.X", "...X.....X..X....X.......X.X..X......X......X.....", ".X......X.....X.....X...X...X.X.....X....X......X.", "...X.......X.....X.....X..X..X..X....X.......X....", "..X..X.....X.......X....X......X.X..X....X......X.", "......X.....X.......X..X.......X.......X......X...", "X.....X..X.X....X.....X...X.....X.....X......X....", "..X..X..X....X......X.....X.....X.X....X.....X....", "..X......X.X....X...X.....X.X..X....X.X.X..X.X....", "X.......X.....X......X..X..X....X.......X...X.....", "..X.......X.X...X..X.......X.X..X...X.....X.X.....", "..X......X......X.....X.X......X...X......X.....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> board = {"X...................X...............X.............", "....X........X......X...X..................X......", ".......X.....X.........X............X.............", ".X............X............X..X...X.............X.", "X...........X...X............X...........X........", "X................X........X..X...................X", "......X....X.........X..................X......X..", "....X........X................X.......X.....X...X.", "..........X......X......X.............X...........", ".....X................X..............X.X..........", ".......X....X...X......X..X...........X...........", "X..........X........X..X........X.........X.......", "X.................X.........X........X.....X...X..", ".........X......X.X.................X.............", "..X...X...............X..................X........", ".X..............X....X.X...................X.....X", ".............X.........X......X............X......", ".......X.................X....X..........X........", ".........X....X......X.....X...................X..", "............X.......X.............X...........X...", ".............X...........X...........X............", ".......X............X...................X..X.X....", "...X......X...................X...X...............", "..X...........X...X..................X........X...", "......X..........X.....X.....X.....X..X...........", "......X................X...............X..........", ".....X.............X....X.....X.................X.", "..X................X...................X..........", ".....X................X.......X...........X...X...", "...X..X.......X..................X..............X.", "............X...............X........X......X...X.", "......X.........X................X........X.......", "...........X.X......X...X.............X........X..", "................X...........X...............X.....", "...X........X........X.................X..........", ".X..........X....X............X..............X....", "...X...........X........X.......X.........X.....X.", "....X..........X............X.................X...", "....X..........X.X..............X.....X..........X", "..X...............X.......X...................X...", "X..................X............X.............X...", "...........X...................X................X.", ".................X......X....X.............X......", "......X........X................X.................", ".X................X................X..X...........", "...X........X..........X.............X............", "...X..........X.................X....X.X..........", ".X.............X..............X................X..", "X..................X.............X..........X.....", ".X..............X.................X............X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1369;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> board = {"......X...X........X..X....X.X....X.........X.....", "....X...X.......X......X.........X..........X....X", "..........X...X....X...........X..X.........X...X.", "..........X........X..X.....X...........X..X...X..", ".......X.........X..X...........X.........X.......", "X..X....X.........X......X.......X........X.X....X", ".....X..X....X..X.........X..........X..X.......X.", "..X...X.....X...X...X..........X.....X.....X..X...", ".......X.........X....X..........X..........X...X.", ".....X...X..X......X..X......X........X.......X...", ".......X.......X...X....X........X.....X.X..X.....", "......X..........X....X.....X..........X.X........", "X..........X.X........X..X........X.....X.....X...", "......X..X.....X......X.....X..X......X....X......", ".....X.........X......X........X.........X........", "...X....X.X.........X......X........X.X..........X", "..........X.....X....X..X........X..X.......X..X..", "........X......X...........X........X...X...X..X..", ".X....X.....X.........X..X........X.X.........X...", "X.....X.......X...X........X......X..........X....", "...X...........X..........X......X....X...X..X....", ".X...X.X..........X...........X.X........X........", "X........X.....X...X.......X.X..X...........X.....", "X..........X.X......X.......X......X......X.......", "X..........X...........X....X......X...X........X.", "..........X........X.....X.......X...........X.X..", "........X...........X...........X...........X..X..", ".......X.........X........X.......X.....X.........", "..X.......X...X.X.......X...X...X..........X......", ".X....X.X.......X.......X.....X.X...X.......X..X..", ".......X..........X.X.......X..X........X........X", ".X...........X....X...........X......X..X..X..X...", ".X.......X.X..X...X.........X........X.....X......", "..X.......X.......X.....X........X..X.......X.....", "......X...........X......X...X.......X......X.X...", ".....X...X......X...........X......X...........X..", "X........X........X.X.......X..X...X.....X........", "..X..........X.X.........X....X........X...X......", "..X..X....X....X........X..X....X...X...........X.", ".........X...........X.........X...........X.....X", "..X.......X......X.........X......X..X..........X.", ".X......X..........X.....X.X.....X........X...X..X", "...........X..X...X...........X....X...X..........", "X.........X..........X........X.......X.....X.....", "..X........X.......X..........X.........X.........", "X.X...X.........X...........X......X...X.....X.X..", "...X.......X...X.......X...........X.....X........", "X......X..........X........X...X....X...........X.", ".X...........X..X.......X..X......X.......X.......", "....X...X...........X..........X.........X....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1320;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> board = {"...........X...X........X.........X...X...X.......", "..X..........X...........X........X........X....X.", "...X.X....X.........X........X..X..........X......", ".....X...X.X.........X.......X...........X.......X", "........X..........X......X...........X.......X...", ".....X....X.X.......X..X...X......X..X........X...", "..X......X.........X....X........X..X..X........X.", "....X...X.X.....X.X.......X...X.......X...........", "X.X........X........X..........X..........X.......", "....X.X......X........X....X......X....X...X......", "...X...X.........X........X...X...........X.....X.", ".X....X.........X.........X....X........X........X", "..........X......X.X....X..........X..........X...", "..X....X.X..........X..........X......X........X..", ".......X...X.X...X...X..X.X......X...........X..X.", "..X....X....X...........X...........X.......X.....", "..X..........X....X.........X....X......X..X......", "X...X.........X..X........X.........X...X.........", ".X......X.......X..X...X..........X...X..........X", ".X.........X...........X..........X........X..X...", ".X..........X.X.X.X.X....X........X.......X.......", ".X..X..........X...X..........X..X...X.X.........X", ".....X..X.........X.....X......X.......X.....X....", "......X.........X....X........X.X..X...........X..", ".X........X..X..X..X..........X.......X......X....", ".X..X....X..........X.........X..X.........X......", "...X.X........X..X......X....X..........X...X.....", "....X.........X...X........X......X......X........", ".X........X...X.....X...........X.....X...X..X....", ".X........X..........X...X........X.......X...X...", "....X..X...X....X......X..X.........X.......X.....", "X.X.X.X..X........X..........X..........X.X.......", "....X........X.....X...........X.........X......X.", ".......X.........X...X...X........X...........X...", "...X...........X........X.......X.......X.......X.", "....X..X.......X.........X.........X......X.......", "X.X..........X......X....X......X..........X...X..", "X.........X.........X.......X......X......X.......", "....X..X......X...........X.........X....X.......X", "......X....X....X..........X....X.........X.......", "..X........X...X.......X........X......X..X.......", "....X.........X......X........X....X...X..X...X...", "..X......X...X.......X.....X.X.....X....X.....X...", "........X.....X...........X.......X...........X..X", ".........X..........X..X....X...X.X...X.X.........", ".X.........X...........X......X.........X..X...X..", ".........X.......X...X....X.........X.......X.X.X.", "......X........X.........X.X........X..X...X......", "X.....X..........X.........X.......X........X.....", "......X.X..X..X..X.....X...X......X..........X..X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 774;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> board = {"X.....X......X.....X......X.....X....X.....X.X.X..", "......X.X.X..X..X......X........X.......X...X..X..", ".....X........X.....X....X.....X........X.....X...", "..X....X...X........X.X...X........X....X......X.X", "....X......X.....X.....X.......X.....X...X.....X..", "...X....X..X.....X.......X.....X.....X......X...X.", ".....X..X.......X.X..X........X.....X..X.....X...X", "......X.......X.....X.X......X....X....X....X.....", "X......X...X......X......X.....X......X..X........", "X......X......X....X.X....X....X..X..X....X...X...", ".X....X.X..X........X......X.......X.......X......", "X......X....X.......X.X.X.....X.......X......X....", "....X...X...X......X.....X.......X......X.......X.", "....X.X....X........X..X.....X..X.X.......X....X..", "......X...X...X....X........X......X........X...X.", ".......X.......X...X..X........X.X.....X....X...X.", "...X..X.....X......X.X...X.....X....X...X.......X.", "X....X.....X.X...X....X.......X....X.......X...X..", "X.......X........X.....X........X.X....X.X......X.", "....X......X........X.......X..X......X..X......X.", ".X...X......X...X...X......X...X.......X...X.X....", ".X...X...X.......X..X........X.....X..X....X.....X", "........X.......X........X.......X........X.....X.", ".X..X....X..X....X..X..X...X....X......X......X...", ".....X........X.....X......X....X..X......X.......", "X........X.....X......X..X..X....X...X.X......X..X", "...X....X...X..X.X....X.....X.....X....X...X...X..", "....X...X.X..X....X.X......X.......X...X.......X..", "..X...X.......X.......X.....X..X.......X...X.....X", "......X....X..X....X.......X........X.......X..X..", ".X.X.......X..X.......X.X...X...X.......X....X....", "....X...X...X..X..X.....X....X.....X.X.X.....X....", "..X....X.....X....X........X..X........X......X...", ".X........X..X.......X..X......X..X....X...X...X.X", "....X..X........X.......X..X........X.X.X.....X..X", ".....X.....X.....X.X..X....X..X.......X.....X.X...", "....X....X..X........X......X....X.X........X.....", "X..X....X.....X....X........X........X.......X....", ".X....X......X.....X...X.X.....X......X....X......", "..X.X..X..X......X...X.X..X....X........X..X....X.", "......X........X.X.......X......X......X..X.......", "X....X........X.....X.....X...X....X..X........X..", ".....X....X.......X.X...X..X.......X...X.....X....", "..X......X......X..X........X..X...X.X...X.X......", ".X.......X........X...X....X..X.....X.X.X.....X...", "X.....X........X.X......X......X......X......X...X", ".....X.......X....X..X.....X.X....X.....X.....X...", "..X........X.......X....X........X.......X.....X..", ".....X...X....X.X..X..X..X......X.....X.X.....X...", ".....X........X.X......X.....X....X....X....X....."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1205;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> board = {"X....X.......X.......X..........X...........X.....", "X.X.......X.......X.X..X.......X......X..........X", ".........X........X......X.........X..X...X.......", "....X..........X.....X....X....X...........X....X.", ".........X..........X...X......X...........X......", "....X........X.........X..X...........X.....X.....", "......X........X...X.........X....X......X.......X", ".......X......X......X...X...........X.X.......X..", "........X.....X....X.X.......X..X..........X.....X", ".....X...X..........X..........X.......X..........", ".X..X.....X.....X.....X.....X...........X....X....", "...X.........X..X.X....X..........X...........X...", "......X....X.......X.........X...X....X...X.......", "....X......X......X.....X...X.........X...X...X...", "X...X...........X.......X....X.X...X........X.....", ".X..X.......X..........X......X...X....X.....X....", ".X...X....X...........X.....X.......X..X.........X", ".....X...........X.........X.X......X.......X.....", "......X.......X..........X.........X..X.X.........", ".X...X.X.X.......X...........X..........X......X..", "......X.......X.......X.X....X.X.......X..........", "X........X..........X......X......X.......X.......", "X.X.......X.........X.X..........X...........X....", "..X..X.........X...........X..........X.......X...", "....X.......X....X.........X.........X...X....X...", "..X........X...X...........X...X....X.X.......X.X.", ".X....X...........X........X.....X..X...........X.", ".....X....X.........X.......X........X......X...X.", "X........X..........X.....X..........X........X...", "..X...........X.........X.X.......X....X......X...", "..X...X.X.....X..X.........X....X..X..........X...", ".X...........X...X..........X........X....X.....X.", ".........X........X...X....X...X.X.......X......X.", ".....X.X..........X..X...X.X..X...X..X....X...X...", "X..........X.....X...........X.X....X...........X.", "X..........X..........X.........X.....X...X......X", "..X......X.........X........X..X.......X..........", "X.........X.....X..X...........X...X........X.....", "....X...X..........X....X...X..X......X..........X", "...........X...........X..........X........X......", "...X..X......X......X.......X.X.........X.....X...", "X........X.........X.X.......X.....X.X.......X...X", "........X.....X....X.......X.........X..........X.", "........X....X......X.......X.....X.....X.........", "X..........X......X.X........X......X..X....X..X..", "....X........X..X..X....X.X.....X.....X..X........", "X..X......X.X..X..........X....X.X........X......X", ".....X........X..........X...X...........X.X...X..", "........X.........X.X....X......X...X.....X.X..X.X", ".....X.........X.X......X.........X....X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1961;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> board = {"X...X...X.....X......X......X....X...X......X..X..", "X.X...X.X.....X.....X.....X.....X.....X....X.X....", "..X......X....X....X....X.....X.....X...X..X.X....", "X..X.....X.....X......X..X.X.X.X......X......X...X", ".X..X...X..X.....X......X....X......X.X......X...X", ".X...X....X....X.X......X..X.....X.X.....X...X....", "X.....X.X....X....X.X..X.X.X..X..X.....X.X.X......", "X.....X...X......X....X......X....X...X.....X.X...", "...X...X..X......X.....X...X.....X.....X.X......X.", "...X.X...X......X...X.X....X.....X.....X..X......X", "..X.X......X.....X...X..X.X.X.X...X....X.X......X.", "..X...X.X.....X..X.X.X...X......X......X.....X.X..", "....X......X.X.....X..X.....X.....X...X.X.....X...", "...X......X...X...X.....X.....X......X...X.....X..", "..X.....X....X.....X...X.....X.....X..X.X..X.X..X.", "X...X...X..X...X.....X.....X....X......X...X...X..", "..X...X....X.X..X.....X...X..X..X..X..X..X.....X..", "...X.....X...X.....X.....X....X..X..X......X....X.", "....X......X..X..X.X......X.....X...X.....X..X...X", ".X......X......X...X.X.X....X......X......X.X.X...", ".X....X....X.....X..X...X......X..X..X..X.....X...", "X...X.....X...X..X....X......X..X..X..X...X..X....", "..X...X..X..X...X.....X...X...X...X...X....X.X.X..", ".X.X.X....X..X......X.X.X.X..X......X......X..X...", "..X....X....X.X...X.X.X.X.....X.....X...X...X...X.", "....X..X....X...X....X..X.....X.X......X......X.X.", ".X.....X....X.....X....X......X..X..X......X.....X", "..X......X...X..X......X.X.X.X..X.....X.....X...X.", "....X..X......X......X....X...X.....X...X...X.....", "X......X...X....X.....X.....X...X..X....X....X....", "..X....X..X..X.....X.X..X...X...X..X....X...X.....", ".X.X..X..X.....X.....X.....X....X..X...X..X...X.X.", "....X.....X.X......X.....X.X.....X......X..X......", "X...X......X.....X..X....X.....X.....X...X.X....X.", "...X..X.....X..X......X......X.X....X..X....X.....", "X.....X.X......X....X.X.X...X.....X..X....X.....X.", ".X.....X.X..X......X...X.....X...X.X.X..X...X.X...", ".X....X....X....X.....X......X......X.X....X....X.", ".....X......X.X....X....X....X......X..X......X...", "X....X.X......X....X......X....X...X......X......X", "...X.....X.X...X..X....X.X....X....X.X......X...X.", "....X....X....X......X...X.....X....X......X..X...", ".X.X.X...X..X....X.X......X......X....X...X..X..X.", "..X......X...X..X.X....X......X.X......X......X...", ".X..X......X......X......X..X..X....X......X..X...", "..X..X.X.....X......X...X......X.X.....X.....X....", "X..X....X...X.....X.X......X.....X....X.....X..X.X", ".....X.X....X..X.....X..X....X...X....X.X.....X...", "...X.X.X..X..X..X...X.....X.....X......X.....X.X..", "..X....X.X..X.....X...X.....X......X.X.....X.....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> board = {"X.....X....X...............X.X.........X..........", "......X.......X.X.........X..............X........", ".......X.......X.............X...........X..X.....", ".....X......X.........X....X...............X.....X", ".........X................X......X.......X........", "X.....X...........X......X.......X..........X.....", ".....X..X...........X....X..X........X.........X..", "X.X........X...X.........X.....X........X...X.....", ".X...............X...............X....X...........", "..X..X..........X............X......X.......X.....", ".......X........X.......X............X.........X..", ".....X........X...X.X...X..............X..........", "...X...............X...........X.............X....", ".....X...........X.........X.......X......X.......", "....X........X.......X.............X.......X......", "...X..........X......X.....X............X...X.....", "..X................X......X.......X.............X.", "...X.......X...........X...........X..............", ".X..X...........X..........X............X.........", "...X..........X.X......X....X......X.....X........", "....X.....X.......X............X.X...........X....", "......X.....X.............X.............X.........", ".X..........X.X..........X.........X......X......X", "....X..............X.........X................X...", "..X................X..........X.........X.........", "....X.......X..........X...........X..............", "X.....X.X....X..X.............X............X......", "..X........X...............X.......X........X.....", "X..............X...X................X.....X......X", "..............X...........X.....X.....X........X..", "..............X................X......X...........", "..X.....X...........X......X......X.X.............", "...X..............X.....X......X...............X..", ".....X...........X.............X..X............X..", "..X.............X..............X.........X......X.", "..........X.....X...........X...........X.........", "......X....X........X.X.....X.......X...X........X", ".........X.............X.............X.....X......", "X............X............X......X..............X.", "...X........X..X.............X.............X.....X", "...........X.......X....X......X...............X..", ".......X........X..X...........X................X.", ".....X....X.....X....X.....X..........X...........", ".....X.X...........X.......X...X..X...............", "X....X...............X......X..........X..X.......", ".......X..........X.............X......X..........", "......X...............X........X....X............X", "....X.X...............X.............X........X....", "....X..........X.....X.....X......X..........X....", ".......X...............X.......X..........X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1514;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> board = {"X....X....X........X....X..X....X......X.....X....", "..X......X.X........X..X.....X..X.X....X.....X.X..", "....X...X........X.X.....X.X........X...X.......X.", "...X....X........X...X......X........X......X...X.", "....X.......X...X...X........X.......X........X...", ".....X....X......X.......X...X...X..X.....X......X", "..X.......X...X.......X..X..X........X........X...", "..X.....X.....X....X.......X....X....X.......X....", "..X........X......X........X........X....X........", "X..X.X...X......X.....X........X........X...X.....", "..X.......X.X.......X.....X....X....X....X.X......", "..X....X..X......X....X.....X.......X........X.X..", ".....X....X....X........X...X.X.X.X.X........X....", "....X......X.......X......X........X.....X.......X", "...X.......X.....X.......X...X.....X...X...X..X...", "...X...X.....X......X..X.....X..X..X.X..X.X....X..", "..X....X.......X....X........X....X.X....X......X.", "...X......X..X.X..X........X...X.X.....X..X.....X.", "......X....X...X....X.....X........X....X........X", ".......X........X.X......X....X.....X........X..X.", "X..X.X.....X........X.....X.....X.......X...X.....", "X.X....X...X......X....X......X..X.X...X........X.", ".X........X.....X......X.....X....X.....X...X.....", "..X........X......X........X.....X.....X.......X..", "X..X......X.......X......X.......X........X.......", "X.....X.......X..X.....X.X.......X.X.X....X.X..X..", "...X........X........X.X...X.....X.......X......X.", ".......X......X.X..X.X....X.....X.....X.....X...X.", ".X........X.......X.....X........X.....X.....X....", "...X...X.X.X.....X........X...X.X.......X...X.....", ".X.......X....X......X...X....X..X..X........X...X", "........X......X...X...X....X........X...X.X.X....", "...X.......X.X......X...X.....X....X...X....X.....", "...X......X.....X......X.......X...X........X.X...", ".X........X......X...X.......X.......X..X.....X...", "....X........X......X.......X.....X....X.X.X...X..", ".X.X....X....X.....X......X...X.....X.X..X.......X", "....X...X.X......X.....X........X....X......X...X.", ".......X........X.....X.....X......X........X....X", ".X......X......X.....X......X....X..X..X........X.", ".......X....X.....X..X.X.....X........X.X...X.X...", "..X..X.......X..X.....X..X......X........X...X....", "....X.......X....X........X..X....X..X.....X.X..X.", ".....X........X....X....X.......X........X...X..X.", "....X.....X.......X....X.....X.......X...X.X......", "X..X........X...X...X.......X......X.......X....X.", ".X.....X.X........X..X........X...X........X....X.", ".....X....X.X.X........X.X.......X..X.....X...X...", ".....X.....X....X........X.X........X..X.......X..", "...X.X.X.X.......X..X.....X.......X......X........"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 246;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> board = {"X.....X.....X.X....X..X..X..X.....X..X.....X.....X", ".X.X...X....X.....X.X.....X..X.....X...X..X.X....X", "...X.....X..X...X....X..X.....X.....X...X..X...X..", "..X....X...X.....X..X.....X....X....X.....X....X.X", "..X...X.X.....X....X...X..X.....X..X.....X...X....", "X....X...X.X....X..X..X.....X..X...X.X...X...X..X.", "..X.....X.X..X..X..X.X...X..X....X...X....X..X..X.", "..X....X....X.....X..X...X.....X....X...X..X...X..", "...X.X...X.....X....X.X.....X.X....X.X..X..X.....X", "..X.X.X..X....X...X.X....X..X...X....X..X..X..X.X.", "..X...X...X.X....X.X.....X.....X.....X....X....X..", "X.X...X.X...X.X...X..X.X....X....X..X....X.X.X....", "X.X.....X....X..X.X...X.X....X...X..X....X.....X..", "...X..X....X.....X.....X.X...X.X.X...X.....X..X.X.", "..X....X....X.X.X.....X...X...X.....X....X.X....X.", "....X..X.X....X.....X..X..X.....X..X...X.....X..X.", "X...X..X.X.X..X.....X.X....X...X...X.....X.X...X..", "...X.....X.X.X.X...X..X....X..X..X..X...X.....X...", ".X.X.X.X..X.X.....X..X.X...X.....X....X..X....X...", ".X....X..X.....X....X.X..X....X..X.....X..X...X...", "..X..X..X..X....X...X...X.X....X..X..X...X...X.X.X", "...X.X..X.X..X..X..X.....X.....X..X...X.X...X.....", "X..X.....X..X.....X....X..X....X....X.X..X...X....", "X.....X..X.....X..X..X...X...X....X.X.....X.X.....", "X.....X...X..X..X..X....X....X...X...X..X.X.....X.", "...X....X...X....X.X..X.X.X..X.....X...X.X...X..X.", "....X.....X..X.X.....X..X.X....X.....X..X...X.....", "X....X..X....X...X....X.X.X..X....X....X...X.....X", "....X..X..X.....X.....X....X.X.....X.....X....X...", ".X..X..X...X....X...X...X.X.....X.X.X...X.....X.X.", "....X.....X..X.....X...X..X....X.....X.X.....X...X", "...X....X...X...X...X....X..X.....X..X...X....X.X.", "..X....X...X...X.X.X.X.X.....X..X.X...X.....X....X", ".....X.X.....X...X.....X.....X...X.....X..X.X...X.", ".X.....X....X....X.X.....X....X....X.....X....X...", "..X....X..X.....X..X.....X....X..X..X.....X.....X.", "..X.....X...X.X..X...X..X.X..X..X.....X.....X....X", "....X.....X.X...X...X.....X....X.X...X.....X.....X", ".X....X.....X...X...X..X...X.X..X.....X..X..X....X", "....X....X..X.X.X..X...X.....X...X..X..X.X..X...X.", "X..X..X.....X.X....X...X..X..X.X.X....X...X...X...", "..X....X...X..X...X.....X.X....X....X.....X.X..X..", "X...X.X.....X....X.X..X....X...X....X..X...X....X.", "..X..X..X..X....X.....X...X.....X.....X.....X.....", "X....X.X...X..X.X....X.X..X..X..X.....X..X....X.X.", "X..X...X....X...X..X.X...X.X.....X...X.X.X.X.....X", "...X.....X.....X.X....X.....X...X..X...X....X..X..", "X....X..X...X...X.....X....X..X.X..X..X...X.....X.", "..X..X.....X...X..X.....X..X.X...X.....X.X...X....", ".X....X...X.....X.....X....X..X....X....X.....X..X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> board = {"X...........X.......X.X.....X...........X.......X.", "............X...........X................X..X.....", ".........X..........X.......X......X..............", "...X................X....X.........X..............", "......X................X............X.X...........", "......X............X....X........X...X...X........", ".....X...X..................X.............X...X...", "....X.................X............X.............X", "......X.X.......X..............X................X.", "..X..................X..................X......X..", ".........X............X..........X.X.............X", ".........X.......X...........X..X................X", "...X..................X.....X..........X..........", ".X...........X.......X.................X......X..X", "........X........X.................X.............X", "....................X....X........X...X...........", ".......X........X................X..X.............", "....X......X...................X........X........X", ".X..............X...........X....................X", "....................X.............X..............X", "..........X.....X......X....................X.....", ".........X...........X........X....X..............", "......X.X...............X..................X......", "...X........X...............X................X....", "..X.........X.X.........X.........X........X......", "...X.....X..........X.............X.X.......X.....", ".X.............X..............X.......X..........X", "....X..........X...X..........X..........X...X....", "....X................X.........X....X.............", "..X....................X..................X......X", "......X.......X....................X.........X....", ".....X..X..X.X.........X.........X.........X......", "..........X.....X........X.................X.X.X..", "..................X.........X............X........", "........X...X...............X.................X...", ".......X...................X..................X...", "............X..X..X.......X..................X....", "...............X....X...................X.........", "...........X.....X.........X......X..X.......X....", "..............X.....X...........X.......X.........", ".........X..X...X..X..............X......X........", "..X............X..........X.....X...X.............", "..X..X..........X...........X................X....", "......X.X.......X...............X...........X.....", "...X...................X.................X........", "....X..........X.............X.............X......", "..............X.................X......X.......X.X", "....X....X...........X..............X............X", "......X.................X......X................X.", "...........X...................X..X.......X..X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 949;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> board = {"...X............X........X......X...............X.", ".......X..............X...........X.........X.....", "X...........X...........X..X....X................X", "..X..........X..............X..X............X.....", "....X.......X...X..............X............X..X..", "...X...........X..........X.................X.....", ".....X...........X.........X.X....X.............X.", ".........X..........X................X..X.........", "........X.......X...............X..........X......", "........X..............X...........X........X.....", ".......X..........X..............X..X.......X.....", "............X.............X.......X....X.......X..", "..X...X.............X................X.....X...X..", ".........X..X.......X........X.....X..X....X......", "....X.............X................X..............", "...X........X...............X...X.X........X.X....", "X..........X.....X..X....X................X.......", "..........X........X................X..X...X.....X", ".X.X............X..............X.........X........", ".......X....X..............X..............X.......", "........X...............X..X.............X.....X..", ".......X...X.............X..........X........X...X", "..........X.....X...............X.................", "X.............X...X.............X.....X...X.......", ".X............X............X..X.......X...........", "...X.........X............X.................X.....", "X.......X.....X...X.........X............X........", ".X.....X...X.........X...............X......X.....", ".....X................X........X.X.......X........", "X.........X................X..............X.......", "..X............X....X.............X..............X", "................X.........X.................X...X.", ".............X..............X.......X.............", ".X..........X...........X.X...X.X....X.......X....", "........X................X....X.................X.", ".....X...............X....X..X.............X...X..", "......X..X.................X....X.....X..X........", "...X............X.....X........X..........X.X.....", ".......X....X........X.X........X....X..X.........", "........X.................X......X..X..........X..", "...X.............X.....X....X......X.............X", "..............X......X....X.........X........X....", ".....X..............X.............X.............X.", "......X...............X........X.........X........", "....X..........X.......X.........X......X......X..", "..........X.........X...X............X..........X.", "......X...........X.X..............X..X.....X.....", "....X................X......X.................X...", ".............X.....X............X.........X...X...", "...X............X..............X...X.........X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1958;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> board = {"...X............X.............X..........X........", "..X...........X.......X............X..X.........X.", "...X...........X...X........X................X....", "...........X..........X..X.............X.........X", "...........X............X..........X.............X", ".....X.X................X....X...............X....", ".......X.............X...........X.........X......", "........X.................X................X......", "........X......X............X.X.....X.........X...", ".........X...........X.............X.X...........X", "..X.................X.X.....X..........X..........", "X.........X...........X..........X..............X.", "....X...X............X........X..X....X...........", "....X...X................X....X..........X.....X..", "........X...X....X....X...X..........X............", ".X...X.............X.............X............X..X", ".....X....X........X.........X.....X..............", "X...........X.........X.................X.........", ".....X.................X.X.....X.............X....", "..X...........X.........X.................X.......", ".......X.....X...X..............X.............X...", "............X........X..........X............X...X", "...X...............X................X.........X.X.", "...............X...........X.........X............", "....X...............X.............X...............", ".X..X...X....X.......X...X......X............X....", "....X.............X......X.......X.............X..", "......X........X....X..............X.....X......X.", ".......X.............X.................X...X....X.", ".X.......X.................X...X............X.....", "............X...............X..X................X.", "X................X.....X.......X............X.....", ".......X..........X......X.X...........X..........", ".X......X.............X..X.....X.....X....X.......", "X.................X.......X.....X...............X.", "........X.......X..X.X........X................X.X", ".X............X..............X...X..............X.", "..........X.....X..............X..........X.......", ".........X.................X.......X..............", ".X...............X...X.....X........X...X.........", "........X..X...............X...........X..........", "....X....X....X........X.......X......X...X..X....", "............X.........X............X............X.", "...X...........X...............X.X.............X..", ".......X......X..............X.X....X.............", "...X.........X..............X.................X...", "..........X..............X......X..X..........X...", "..X....X...........X........X..........X...X......", "...........X..........X....X.X......X...........X.", "..........X.....X..............X............X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 376;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> board = {"....X..........X..................X...........X...", "............X................X..............X.....", "......X..................X..X........X.......X....", "..............X......X...............X............", ".....X.................X..............X..X........", "......X.......X.....X.................X.........X.", "...X.........X.....X..................X...........", "......X...........X...........X.......X...........", ".....X...............X................X......X....", "........X.....X...............X......X.......X....", ".X...X.....X............X..............X..........", "...X...X...........X.........X..X................X", "...........X..........X.........X.....X..X...X....", "X...........X...............X...............X...X.", "..........X.............X........X................", "..X.........X........X..........X.....X...........", ".....X.........X...............X.................X", ".X...........X...........X..........X......X......", "...X...X.......X................X.....X.........X.", "...............X...X.........X.........X..........", ".X...X................X.....X..............X......", "...........X....X...............X.................", "X........X..............X................X........", "....X..............X....X.....X....X..............", "X...X..X.................X....X......X.....X......", "...........X................X...............X.....", ".........X...........X..........X......X....X.....", "......X..........X........X......X................", "..X.......X.............X....X..............X...X.", "............X........X...............X............", "X.............X....X.X.............X......X......X", "..............X............X...............X......", ".......X...X..X.......X.....X...X....X........X...", "..X..................X................X...........", ".X.............X.............X................X...", "......X.........X...............X...........X.....", "....X....X.........X....X.................X.......", "....X.......X..X................X..X.....X.X......", ".....X...X.............X.........X.........X...X..", "................X......X............X........X....", "......X..........X..X.............X..X............", "....X..........X..X..........X..........X.........", ".......X.X.................X...........X.........X", "..................X..................X...........X", ".........X..........X.........X.........X..X......", ".X.......X..X...........X.........X........X......", ".....X..........X..........X................X.X...", "............X...X.......X.................X...X...", ".........X..................X..X...X............X.", "..X..............X.............X............X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2168;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> board = {"X...X.......X............X......X.X......X.......X", "...X.........X........X...X..........X.X..........", "..X..........X...X....X.........X....X............", "X........X...........X........X.......X..........X", ".X....X........X...X..X.......X.X............X....", "X...........X..X..........X...X...........X...X...", ".........X.......X...X.X..X.....X.......X.........", "X..........X.......X..X............X..X...........", ".X............X........X......X......X..X....X...X", "............X...........X...X.X....X........X.....", "......X..X..........X.....X..X.X...........X....X.", ".........X..X........X..........X.X....X...X....X.", ".......X.X.X............X.X.X...........X..X......", "......X..........X......X..........X..X.......X.X.", "X......X.X.X........X......X...X.X....X..........X", "...X.........X...........X............X...X..X....", "...X...........X.....X....X...X.........X.......X.", ".........X........X.........X..X.......X..X.......", "X......X......X....X...........X...........X.....X", "............X....X.......X........X........X......", "...X............X........X..X...........X.X.......", "....X...........X..X.....X..X.....X......X.X.....X", "...X..........X....X............X......X..........", "..X.X............X.........X.........X.......X....", "......X.....X............X....X........X..........", ".X..........X....X.........X....X............X..X.", ".X............X....X...X..........X..........X....", ".......X..........X....X............X............X", "....X.........X..........X.......X....X..........X", ".........X............X.......X...X...X.......X...", "...X.....X..........X......X.........X...........X", "........X........X.........X.......X.........X....", "..X..X......X.......X............X...........X....", ".....X......X...........X..........X..........X..X", "..X...........X........X............X......X.....X", "..........X.......X.......X......X............X.X.", ".......X.X.......X.........X....X..........X......", ".X...X...........X.X............X......X.....X...X", "......X..........X.X..........X.......X.......X...", ".......X...........X......X..X........X.......X...", "......X.......X.........X...........X........X...X", "....X..........X.X.....X..........X......X........", ".X.....X............X.........X.X.........X.X.....", ".....X......X....X.X........X.......X....X........", "....X....X............X..........X....X...........", "X.X.........X..........X..X.X..........X........X.", ".....X.....X............X............X........X.X.", "...........X.........X...........X.X...........X..", "....X.........X......X...........X.....X...X......", ".....X........X...........X............X.......X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 401;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> board = {"X...X......X..............X............X..........", "X...........X.............X....X..............X...", "...X............X........X........X..X............", ".X...X...........X....X.....X...X..........X..X...", "........X.....X.......X...........X..............X", "........X..........X.........X.....X.....X...X....", "....X.....X............X............X.X.........X.", "...........X............X..X..............X.....X.", ".......X............X......X..X.........X....X....", "..........X...........X......X.........X......X...", ".....X.........X..............X.......X.X......X..", ".........X..X......X.............X...X...........X", "............X...........X..X..X..............X....", "...X.....X.X...X.............X.....X...X..X.X.....", "........X.......X..........X......X.........X.....", ".....X........X....X...........X......X.X.........", "...X............X..X..........X......X....X.......", "...X.........X.........X........X..X......X.......", ".......X......X......X..............X.....X.......", "....X......X.......X..............X..............X", "..............X..X..X...X..........X.........X....", "...X.....X.....X..X..........X............X......X", ".X......X.....X..............X..X.............X...", "....X.X.........X..............X.........X.....X..", "X..........X..........X......X.............X......", "...X.....X.X..........X..............X...........X", "...X..............X........X........X.............", "X.X....X......X..........X......X...X........X....", ".X...........X........X.X....X...........X...X....", "X.......X.........X............X...........X..X...", "...X..X....X....X........X.X..........X..X.....X..", ".......X..........X.........X........X............", "X.........X............X.X..............X......X..", ".......X......X....X......X.X.X.......X...........", "X.......X......X.....X......X.X...X.........X.....", ".....X............X........X..............X.....X.", "......X............X..........X......X...........X", "...........X.............X..X.....X.............X.", ".X.X....X..............X....X............X........", "....X........X.X.X.............X...........X......", ".X.........X...........X............X.............", "X.......X...X............X.........X..........X...", ".........X...X....X......X....X...........X....X..", "........X.........X.........X...........X.........", "X.....X.....X...........X.........X......X........", ".....X.............X........X........X...........X", "..............X........X....X.............X....X..", ".........X........X....X..............X...........", ".X..........X..X........X......X......X....X......", "..X...........X..........X.............X.X........"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 984;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> board = {"X.......X.......X........X...........X........X...", "....X..X.X.X.....X.......X...X...........X......X.", ".......X......X........X......X.X............X....", ".X..........X.X......X......X.....X........X......", "..X..........X...........X.......X......X.........", "X........X.X.........X........X.X..........X......", "......X.X..X..........X.............X......X......", "....X.............X.......X........X..X...........", "X....X...........X.........X...........X.........X", ".......X.............X........X............X...X..", ".X....X......X........X.....X....X............X...", "....X..........X............X....X.X...X..X.......", "X.............X...........X....X.............X....", "X..........X....X....X.......X...........X........", "..X......X.X.........X..X..X...X....X.......X.....", "....X........X....X...X.....X..X.......X......X...", ".......X..X..........X......X.............X.......", "X.......X..........X.....X.X.......X...........X..", ".....X.............X.........X............X.X.....", "X.........X...........X..........X.X............X.", "...X......X.......X.....X............X.........X..", "...X...X.........X..........X.....X.......X.......", ".X.............X.......X.......X..........X.......", "..X...X........X...X........X........X.....X....X.", ".....X..........X...........X.....X.............X.", "....X............X..........X........X..X.......X.", "...........X..........X.....X..X............X.....", "........X.........X..X........X....X..X...........", "..X.......X..X...X.X...........X.......X.........X", "............X..........X.........X...X..........X.", "...X.....X..X...........X.....X............X......", ".X...........X....X.......X.............X.........", "..X...........X.........X.........X....X.......X..", ".......X.....X.............X....X......X.X........", ".X........X.........X.........X.X........X...X....", ".........X......X..X......X.........X............X", ".......X....X......X.....X........X............X..", "X.X.......X.......X.X.....X.......X............X..", "......X............X.....X.............X....X.....", ".X...........X.......X.........X.......X..........", "..X........X.......X..........X..........X........", ".....X........X.X..X.......X...X.....X......X....X", ".X...........X............X.......X...X.......X..X", "...X.....X..........X............X....X...........", "X..........X...........X.............X........X...", "....X.X..........X.....X.......X.............X....", ".X.............X........X...X...X.X.........X.....", "....X.....X.X...X.....X...........X.........X.X...", "..X.........X........X......X..X...........X.....X", "........X..X.....X...X.X............X............X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1344;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> board = {"X..X......X.............X.....X......X......X.....", ".X......X.........X..............X......X...X...X.", "......X...............X......X..............X..X..", "............X.............X...............X.......", "......X.......X....X.......X......X.............X.", ".............X.......X.X......X.......X........X..", ".........X...X.............X..........X..X.....X..", "...X............X........X......X....X......X.....", ".X...............X..............X.....X.......X...", "X...X..............X......X...............X.......", "...X.............X.........X......X..X.......X....", "....X.........X....X...........X.........X........", ".X......X....X..........X............X...X........", "......X...X.......X.X............X............X...", "..X...X.....X.........X.....X.....X...X........X..", ".....X...............X.............X.....X.X.X....", "..X.......X....X....X.........X...............X...", "........X............X.......X.X.........X........", "..X..............X........X.............X.........", ".X...............X..........X...............X.....", ".......X...............X...........X....X.........", "..X..............X........X..............X........", "......X....X......X......X............X...........", "X..X.......X.........X........X...X......X........", "......X.............X..X......X.............X.....", "...X.............X.......X..............X.X......X", ".X............X.X...X........X.....X...X..........", "X...........X.........X......X........X.......X...", ".........X..............X.......X.............X...", "...X.......X.....X....X.......X.X...............X.", "............X..........X..............X..X..X..X..", ".............X..X.....X........X..............X..X", ".............X............X.......X.......X.......", "...X..............X.X..X.............X............", ".X.......X.............X.........X....X..........X", "..X...X.....X....X.X....X..X........X...X..X......", "....X............X.X.X...........X...X.....X......", "...X..............X.X.....X........X.......X......", "X.X.............X..............X..............X...", "............X.......X...........X.....X....X...X..", "......X..............X........X.X....X............", "X....X............X...........X.............X.....", ".X.........X..............X...........X...........", "..X............X.....X..X......X.....X.....X......", "..X......X..............X...........X..........X..", "...........X..............X...............X.......", "......X..........X........X.......X.............X.", ".............X..............X...........X........X", "........X......X...............X....X....X......X.", ".X...............X......X...............X......X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 417;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> board = {"X.................X....X................X.X.......", "X.X................X.............X................", ".X..............X.....X...............X..X.X......", ".......X.........X................X............X..", "..........X........X.....X.........X.......X......", "........X.................X........X...........X..", "............X..X.X......X..........X....X.......X.", ".....X................X......X..........X...X.....", "............X...........X...............X........X", ".................X.........X.X....X...........X...", "..............X.....X.....X....X...........X......", ".....X.........X.....X............X.......X.......", ".....X......X............X..............X........X", ".............X..X...X..X..X........X.........X....", "......X..........X............X........X......X...", "...X......X....X....X...............X.............", "..X.....X.X.X.....X.........X...............X.....", "...X...............X...X..X.................X.....", "..........X..............X.................X......", "..........X............X........X..............X..", ".....X........X.......X..X...............X....X...", ".......X..............X...............X.....X.....", ".......X............X....X.......X.......X......X.", "............X.........X................X........X.", "..X.........X...........X...X..X....X..X..........", "X....X..X.....X...........X...............X.......", ".........X.................X.......X..........X.X.", ".............X............X.........X......X....X.", "X..............X..X...............X........X......", ".......X...............X.......X................X.", "............X.......X...............X.............", "....X............X........X.....X.........X..X....", ".........X..............X.....X.....X.X......X....", ".X...X................X..............X...........X", "..........X...........X.................X.........", "..X............X.......X...............X..........", ".......X.................X............X.......X...", "...........X...X..X.............X....X.....X......", ".........X.X.................X.....X....X.........", "....X.X.X......X.....X..X........X...........X..X.", "........X...............X..............X.......X..", "..............X.........X...........X.............", "..X...X.X.......X...X..X.........X....X...........", "..X..........X...........X..X..........X..........", ".X...........X.........X................X.........", "X..............X.............X.............X......", "....X...........X.........X.................X.....", ".......X...........X......X.......X...............", "..X................X.........X....X...............", "..X.........X.........X.....X...............X...X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1807;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> board = {"X..........X.......X............X...........X..X..", "..X.........X........X..........X.......X.X.......", ".X..X............X.......X.......X..X...X....X....", "....X......X....X.X.......X.......X............X..", ".........X.....X.........X............X...........", ".X........X........X.X......X............X...X....", ".X............X..X......X......X..........X.......", ".X...........X.....X..X......X....X.........X.....", ".X........X.......X.........X........X............", "X......X........X............X......X............X", "........X..X........X..X.......X....X............X", ".......X.......X............X...........X.X.....X.", "......X............X.....X.....X......X....X......", "X....X.X.X...........X..X......X.X...X..X.........", "...X..X.........X.........X............X....X.....", ".X....X..........X............X...........X...X...", "..X.........X.X...X......X............X.......X...", "....X...........X........X.........X............X.", "......X........X...........X......X..........X.X..", "X...........X.......X.X.........X..........X..X...", "...X.........X........X....X...........X.X.X......", "....X............X....X..........X..X......X.X....", "....X..........X........X.....X.........X.........", "..X............X.....X......X.....X.X.......X.....", "....X.....X.........X...X........X...........X....", "........X...........X...X...........X..X..........", ".X........X............X..........X............X..", "X...........X.......X...X....X......X..X......X...", "X.........X......X........X..........X...........X", "......X..........X..X.........X.X...........X.....", "......X........X............X........X..X.X.......", "X............X.........X..........X..X......X.X...", "......X.....X..X...X........X....X........X...X...", ".....X.........X.X.....X...........X..X..X.....X..", ".......X......X.........X......X........X.........", "...X.......X...........X...........X.....X........", ".X....X.........X............X.X....X............X", "...X.X........X............X............X......X..", ".........X..........X.....X..X....X.....X......X..", "..X..X........X..X......X......X....X.X.....X.....", "...X.........X.X.........X............X........X..", ".....X............X....X...........X......X.......", ".X........X.....X...X.....X.....X..........X......", ".....X.X..........X...........X..........X....X...", "..X......X.........X........X...X...X...X.........", ".X....X............X..X........X......X...........", ".X.....X..X....X....X.X.......X..X............X...", "......X.X........X............X...........X.....X.", "........X..........X......X......X..X...........X.", "........X..X........X..X......X......X...X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 238;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> board = {"........X.X......X....X........X........X..X......", "...X....X.X........X.....X.X...........X.......X..", "X.......X...........X.......X.........X.........X.", ".X......X.X.........X.......X......X.........X....", "....X..........X...........X.X....X.........X.....", "......X.X..........X.........X...X.....X....X.....", "..X.........X....X.X.......X.........X...........X", "...X...........X..X..X........X........X.........X", ".....X..........X....X....X...X.....X........X....", "X....X.X..........X.X..........X.X........X.......", ".X.....X.X.......X...X.........X.........X........", "X........X.X.........X..X...........X........X....", ".....X.X........X..........X.........X.X.X.....X.X", "....X...........X......X..........X......X....X...", ".X.X...X...X.........X.........X...........X......", "X..........X........X.X..X......X..........X......", "....X..........X..X.......X...........X.....X.X...", "........X.......X.......X........X.........X...X..", "...X......X....X...........X..X......X.X.........X", "........X......X.....X........X.X..........X..X...", ".......X....X........X..........X.........X.X.....", ".....X..X...X......X...X...........X....X....X.X..", "X.....X..........X......X.....X....X.X..........X.", ".......X.X.....X....X.........X....X....X....X....", ".X...........X....X........X.X........X.........X.", "........X.X...........X.......X......X..........X.", "..........X...........X..........X..........X..X..", "......X.X...........X.X......X......X.X.X.........", ".X.X.........X...X........X...........X.........X.", ".....X.....X.......X.X..X........X....X...........", "X...X....X..X.......X..X.........X.......X..X.....", "...X.........X.X...X........X...........X.........", "..X.........X........X.....X....X.........X..X..X.", ".X.....X...........X......X....X..X..X..........X.", "...X...........X.......X....X........X.....X......", ".X...X.........X.......X.........X.....X..X.......", "X.....X.X...X...........X.X..........X.....X....X.", "..........X..........X.X.........X..........X.....", ".....X.......X.......X.....X.X..X..X..X....X...X..", ".X........X.....X.........X..........X...........X", "...X........X..X.X.........X....X......X......X...", "...X...........X.......X....X........X.......X....", "..X.....X.....X...X...X.........X..........X....X.", "...X....X.X....X......X.....X.......X..X.X.....X..", "..X........X.......X...X...X.....X...X....X.......", ".X...........X.X...X.....X.......X.X...........X..", ".X...X.X.......X....X...........X.....X.X.....X...", "........X.....X......X..X...X......X....X..X..X...", "X......X....X...........X...........X...X.X.X.....", ".....X...........X..........X......X......X....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1310;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> board = {"X....X...X....X...X.X....X.X....X...X....X....X...", ".X....X...X.X...X.X...X...X.X...X..X....X....X....", "X.X..X.X...X..X..X.X.X.X.X..X...X.X...X.X.X...X...", "X...X.X...X..X.X...X.X...X...X....X....X..X...X.X.", "..X....X.X..X....X..X..X...X...X..X...X....X....X.", ".X....X..X...X.X....X....X.X....X..X...X....X....X", "...X.X.X..X...X...X.X.X....X...X..X....X.X..X..X..", "X....X..X....X...X..X..X.X...X.X.X...X..X..X...X..", ".X..X.X.X...X...X....X..X..X....X.X.X..X...X.X....", "X....X...X...X...X.X.X..X...X....X...X..X..X...X..", ".X...X...X...X....X.X..X....X..X.X....X...X....X.X", "..X...X.X..X..X...X....X....X....X....X..X....X..X", "....X....X....X..X...X....X..X...X....X.X...X..X..", "..X..X....X.X..X.X..X..X.X..X..X.X..X..X....X...X.", ".X...X...X..X....X....X..X....X....X....X....X.X..", ".X....X.X.X.X..X....X..X....X....X..X..X...X....X.", ".X.X....X...X....X..X.X..X....X.X.X...X..X.X.X...X", ".X....X...X..X.X...X...X...X....X.X..X..X...X..X..", "..X.X....X....X....X...X.X.X..X...X....X.X.X...X..", "..X.X....X....X....X.X....X...X..X...X.X...X..X...", ".X.X.X...X....X..X..X....X...X...X....X.X....X....", "X...X..X..X...X.X....X....X....X...X.X....X...X...", ".X.X.X...X...X..X....X....X...X.X...X....X.X....X.", "X....X.X....X....X..X....X.X...X...X....X...X.X...", "X.X....X...X....X.X....X....X.X..X.X..X....X...X..", "..X....X.X.X...X..X...X..X.X..X..X....X...X.X.X..X", "..X..X....X..X..X.X.X...X..X....X....X....X..X.X..", ".X..X...X...X.X....X.X....X.X.X...X..X...X.X.X...X", "...X....X...X..X....X....X..X....X...X.X...X..X..X", "..X....X....X....X.X...X..X...X..X.X.X....X...X..X", "...X..X.X.X.X....X...X...X...X...X...X...X...X.X..", "..X.X....X....X.X...X..X....X..X..X.X...X.X...X.X.", "X.X....X..X...X...X.X..X..X.X...X..X...X....X.X...", "X....X....X.X...X..X...X..X....X.X....X....X...X.X", "..X..X....X..X....X.X..X...X....X.X..X....X....X..", "X..X....X....X...X...X...X.X....X..X...X..X..X..X.", "..X...X..X....X.X..X....X...X...X....X...X.X.X...X", "....X.X..X...X.X....X...X....X...X...X...X.X..X..X", "....X.X.X.X...X.X....X....X..X....X....X.X..X....X", "....X..X.X..X....X...X..X..X....X.X....X..X.X...X.", "...X..X....X....X..X..X.X..X...X...X...X..X...X..X", "..X....X....X....X.X..X....X...X...X....X..X..X..X", "...X..X.X....X..X....X.X...X....X..X..X....X..X.X.", "...X..X....X...X....X....X...X...X....X..X..X...X.", "..X....X..X..X..X.X.X....X..X..X....X.X....X.X....", "X.X.X...X.X...X...X....X.X...X...X.X....X...X...X.", "..X.X.X...X.X...X....X..X.X.X..X..X....X.X..X..X..", "..X...X...X...X....X.X.X.X.X...X...X....X...X..X..", ".X.X.X....X.X.X.X...X....X....X..X...X...X.X.X.X..", ".X...X..X...X.X...X.X....X.X....X....X...X...X...."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> board = {"....X..........X........X..........X........X.X...", "...X.......X.......X.........X..........X.....X...", "X.......X..........X..X..........X..........X.....", ".....X.......X...X......X......X....X...X.....X...", "....X..........X..........X..........X.X........X.", "........X......X........X...X.......X......X......", "....X....X......X...X...X..........X........X.....", ".....X..X.......X........X......X..........X......", "...X..X......X..X..........X..........X.X..X...X..", "..X...X......X..........X.......X....X.......X....", ".....X....X.......X.X..X.X....X......X..X.........", ".X....X.........X......X........X........X........", ".X...X......X........X..X.X.....X......X......X...", ".X......X....X....X....X....X.........X.....X.....", ".X..........X..X.X...X........X.....X....X...X..X.", ".........X..........X......X......X....X.X.......X", ".....X......X..X..X..........X....X.........X.....", "....X..........X.......X.X.......X..........X.....", "....X........X..X......X..........X.X..X.......X..", "..X.........X.....X..........X.........X........X.", "X...X........X.........X..........X..........X....", "..X....X....X...X....X.......X..X..........X...X..", "........X..X..........X........X.....X...X........", ".X..X........X.......X..........X.........X.......", "..X..........X.........X......X.....X......X......", "...X.........X.........X......X.....X.........X...", ".....X......X.....X.......X..........X.........X..", "........X...X.........X...X........X.........X.X.X", "....X.....X....X.....X.X......X......X....X.X.X...", "...X..........X...X...X...X.......X.......X......X", "....X.....X.........X.....X........X........X.....", "....X.....X.........X..........X..........X.......", "X.........X...X.......X.X....X.....X.........X.X.X", ".......X......X....X....X..X..........X..........X", "..X..........X.......X.....X....X........X.....X..", "X........X...X.........X....X........X..X....X....", "..X...X...X.........X........X.......X......X..X..", "X........X.......X..X........X.......X...X....X...", "..X..........X.....X..X.X.X.....X..........X.....X", "......X....X.X.........X........X..X..........X...", ".X.......X....X...X........X....X.........X......X", ".......X...X.X......X....X..........X......X.X....", ".....X.......X...X.......X...X....X...X........X..", "...X..........X.........X..........X.....X.......X", ".X....X....X.....X.....X....X.......X..X.X.....X..", "...X.......X......X..X........X........X......X..X", "....X........X.........X......X.........X......X..", "........X.X....X.....X...X.X.X..........X.......X.", ".X..X...X..X...X...X.........X.........X.........X", "........X........X....X........X....X....X......X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> board = {".X.......X........X..X..X....X......X........X....", "..X..X.......X.......X.....X.X......X........X..X.", ".....X........X..X......X........X.......X.X......", "X....X....X.X...X.......X...X..X.......X..X...X..X", ".....X......X.......X......X.......X....X.......X.", "...X.....X...X....X...X.......X........X........X.", "......X.....X.....X..X........X...X.......X...X...", "..X........X..X..X......X....X.....X...X..X....X..", "...X.......X..X........X......X....X...X.X.....X..", "......X...X...X......X........X.X..X.X..X....X....", "..X.X.....X........X.......X.....X...X.X........X.", "....X.......X........X..X.......X....X....X.......", ".X........X.....X....X...X..X........X........X...", ".X.......X......X.X..X....X......X.....X.....X....", "..X...X....X.....X..X......X.X.....X.X.......X....", "....X........X.....X..X...X......X...X......X.....", "..X....X......X.......X....X....X...X....X.X......", "X........X........X......X.....X..X.....X..X......", ".X.......X....X...X......X........X........X......", ".X.X.X..X..X.....X....X..X.....X........X......X..", "......X....X....X....X.X....X.......X.X....X......", ".X........X...X..X....X....X......X........X.....X", ".....X........X....X.X...X.......X.......X..X...X.", "..X.......X......X........X...X.......X........X..", "...X........X.....X...X..X.X.......X......X.....X.", "..X....X........X........X..X.....X.....X...X....X", "......X....X....X........X..X....X.......X........", "X......X.....X...X......X........X......X.......X.", ".X......X...X..X.....X........X.......X........X..", "..X..X......X......X......X.X....X.X.....X....X..X", ".....X....X.....X........X........X......X...X....", "..X.X..X..X.....X....X....X...X......X......X..X..", "..X........X......X.......X...X.....X......X......", "..X....X.......X....X...X...X.X.....X........X....", "X....X..X......X...X..X......X........X......X....", "....X....X..X.......X.X.......X..X......X......X..", ".X......X....X.......X..X.X..X.X.......X.....X..X.", "......X........X......X...X....X.X......X......X..", "..X......X.....X.......X......X.....X..X........X.", ".X........X........X.X.......X....X......X.X.....X", "...X......X.....X.....X..X......X...X........X....", "...X.X.......X...X........X......X.......X....X.X.", "......X.X......X.......X......X.......X.......X...", "...X.....X.......X........X...X.X.....X........X..", "...X.....X.....X........X.X.......X..X.X....X...X.", "...X.X.......X.X.......X........X...X.X......X....", "...X........X......X.....X..X....X...X......X.....", "X.....X.X.......X...X..X........X.......X.X..X..X.", ".......X..X...X....X..X........X...X....X.......X.", "...X..X..X.....X.....X.....X.....X.......X..X....."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 289;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> board = {"X...X.....X.............X..........X...........X..", "....X.X.....X.X..X.....X............X...X.........", "..X........X.........X.........X..............X.X.", "............X...........X............X.X..........", "X..........X...X..X..X.............X....X........X", "........X.X..............X.........X.X......X.....", "..X..........X.....X.............X...X............", "X...........X.........X............X.X........X...", "...X....X........X............X.X.........X......X", ".............X..X......X...........X..X..........X", "......X..........X...X..............X..X..........", ".X........X...X.....X........X.......X............", "X...X........X.............X.X..............X.....", ".....X.......X.........X.....X..............X.....", "X........X....X..........X...........X....X...X...", "...........X..............X...........X..........X", ".............X...............X.X.....X......X.....", "........X......X...........X......X..........X....", ".......X............X..........X....X..........X..", "....X.........X......X.........X........X.........", "..X...........X........X...........X........X..X..", ".........X..X.........X...X.............X.........", ".....X........X............X.X.............X..X...", "..X.......X.........X..........X.....X.....X......", "..X.............X...............X....X...........X", "........X........X..........X..............X......", "X...............X.X..........X............X.......", ".....X.....X.....X...........X..X........X........", "..X............X.........X....X.......X...........", "....X...............X.........X...............X...", "......X.....X.....X........X.......X......X....X..", "..X.X...............X.............X......X........", ".X...............X.........X...............X....X.", "..X.......X.........X..............X..............", "X..X......X.....X......X..X..........X...........X", ".X..........X...X.X....X............X...X..X..X...", "........X...X.........X..........X.....X..........", "X.........X..........X.....X..........X...........", "...X..X..X.............X..X......X.......X........", ".....X.......X..........X........X......X.....X...", "......X......X..........X...........X........X..X.", "..X............X...........X...............X......", ".X..........X............X........X........X......", ".X..............X........X...............X........", "....X....X...X............X...X..........X........", "....X.............X......X........X..........X....", ".....X.X.....X.........X....X.............X.......", "....X.........X...........X...X.X..X....X.........", ".X....X.........X......X............X....X........", ".......X.........X.X.X.X.......X...............X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1454;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> board = {"........X....X.........X...........X.........X....", "...X......X...X..........X.....X........X.........", "X........X...X....X......X.....X........X.........", "..X.............X.....X....X............X..X....X.", "..........X.X.......X...X..X.............X.......X", "..X.....X.............X...........X......X........", "....X........X...X..X...X..X.......X.........X..X.", "......X.........X..X.....X.....X.....X..........X.", "......X..........X.....X...........X..X.........X.", "X......X...........X...X.........X..X.......X.....", "........X........X...........X.............X......", ".X..........X........X.............X..X...........", "X.......X.......X....X.....X.....X.........X......", ".X.X..........X..X..X..X......X.....X.X..X........", ".....X...........X........X......X...........X....", ".......X....X.......X............X......X.....X...", "..........X......X..X.........X....X...X....X.....", "........X......X....X.............X............X..", "..X......X.............X.........X.....X..........", "X.....X..........X.........X...X.....X..........X.", ".....X.........X.....X.....X............X.........", "....X...X....X..........X..X..........X......X.X..", "..........X...X.......X..........X...........X....", ".......X..........X.......X..........X...........X", "......X.............X...........X..X..X...........", ".X..........X.X............X.......X.X...X.......X", "............X............X...X.............X......", "X....X..X............X.......X..X.X.....X...X.....", "...X...X........X.X...........X.....X...........X.", "..X.......X.......X.X.........X.....X.....X.....X.", "......X...X......X..X...........X............X....", "X.......X.........X.............X.............X.X.", "............X...X.......X.......X.............X...", "X..X..........X.X.............X............X......", ".X............X.............X........X.......X....", ".........X.....X....X.X...........X..X.......X.X..", "......X...X............X.............X.......X....", ".....X.......X.........X.............X......X.....", ".......X............X......X.......X...........X..", "..X....X..........X..........X.X.........X....X...", ".X.............X.........X.....X..........X..X....", ".......X.......X......X............X.............X", "....X.....X...X...........X.............X....X....", ".........X.............X.X.....X.............X....", "....X..........X..........X.........X.....X.......", "......X.......X............X.X..X....X.......X.X..", "...X.......X......X.............X.......X.....X...", "..X..X....X......X............X..........X.X......", "......X.......X......X........X..........X......X.", ".X......X............X.......X............X.....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1582;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> board = {"..........X...................X.............X.....", "X......X........X................X..X...........X.", "......X..................X..........X......X......", "............X.......X...............X.............", "....X..X...................X...................X..", "X........X..............X.....X....X.X........X...", ".............X.......X................X.........X.", "......X..................X............X...........", "....X...............X...X..................X......", ".X......X..............X..........X.........X.....", "..........X.............X.X.................X.....", "X.X......X...............X...X....X........X......", "........X....X........X..................X.......X", "...............X....X..........X....X..........X..", ".............X...............X.X.........X........", "..........X...............X....X.........X......X.", "............X...............X..............X......", "...........X.X.....X..X.....X.....X........X......", "..X......X......X..........X.............X........", ".........X....X.....X.....X.................X.....", "X.....X......X...................X.X........X.....", "...........X..........X..................X.X......", "......X..............X......X..............X.....X", ".................X..................X.......X...X.", ".............X.......X..............X.............", "....X.....X................X.X......X.........X...", "..X.................X...........X........X...X....", "........X.X...X...............X.......X..X........", "...........X.......X.................X....X.......", ".X.............X..................X..........X....", ".......X....X...............X.....X........X......", ".......X........X.................X........X.X....", "....X.............X............X....X...X.........", "..X...X...................X............X......X...", "..X.........X................X.....X.............X", "............X................X......X.X...........", ".....X.............X......X............X..X.X.....", "...X.......X........X......X................X.....", "..X..X....X...............X.....X...X.............", "..X...........X..............X..X..........X......", ".............X...X.X......X.................X....X", "................X.......X..................X......", "....X............X....X...............X...........", ".....X.................X...................X......", "...X......X...................X..................X", ".X..X..........X............X.........X...X.......", ".........X....X...............X.................X.", "......X...X......X.............X....X.X....X......", ".......X..............X..................X........", ".........X..X...................X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 227;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> board = {"X...X.X.X...X..X....X...X.X...X...X.X.X..X....X...", "X....X.X...X....X....X...X....X..X...X..X..X....X.", "...X....X....X.X..X....X.X..X..X...X...X.X...X....", "X..X.X....X....X...X....X....X...X....X.X...X.X..X", "..X...X..X.X..X..X..X....X....X.X..X..X....X...X.X", "...X..X.X....X..X....X...X...X...X....X..X....X...", "X.X...X....X...X..X...X...X...X.X....X.X.X.X..X.X.", "..X...X....X.X....X.X...X..X.X....X....X.X.X...X..", "X...X...X.X.X...X...X....X...X....X....X.X....X...", ".X.X...X..X...X....X..X..X....X....X..X...X..X.X..", "X.X...X..X...X...X....X.X..X...X.X.X..X....X....X.", "X.X...X..X....X....X...X....X....X..X..X....X....X", "...X....X.X....X...X....X.X.X...X..X..X.X....X..X.", "..X..X.X....X....X...X..X...X.X..X...X..X..X...X..", ".X..X.X....X.X....X.X...X....X....X.X...X....X....", "X...X..X..X..X....X....X...X..X....X..X..X...X.X..", ".X....X..X...X.X..X..X...X...X..X....X...X...X..X.", "X.X..X..X..X.X.X.X....X.X...X...X..X...X...X..X...", "X..X..X..X.X...X..X.X..X....X..X....X..X..X....X..", "..X.X...X...X...X...X.X.X...X....X...X.X..X...X.X.", "...X..X....X.X..X..X....X..X....X..X.X....X..X...X", "..X...X..X..X...X.X...X....X....X.X..X..X.X.X....X", "..X....X.X.X...X..X.X..X..X.X..X..X...X...X....X..", "X...X.X.X.X....X.X.X..X...X...X..X..X....X....X...", "X..X..X...X.X..X...X...X...X...X..X...X...X...X...", ".X...X...X....X.X....X....X...X.X.X....X.X...X....", "X...X.X.X....X...X.X...X.X.X.X....X...X..X....X...", "X..X.X..X...X....X..X...X..X...X...X....X..X..X...", "X...X....X.X..X...X..X...X..X....X..X...X...X...X.", ".X....X.X...X..X.X.X...X.X...X.X.X....X...X.X...X.", "..X...X....X...X...X...X.X.X...X...X.X...X....X...", "X..X....X.X...X....X....X..X...X....X..X...X....X.", "..X....X...X.X...X...X.X....X....X.X..X..X...X.X.X", "...X..X....X....X...X.X..X.X..X....X...X..X.X...X.", "X....X.X...X...X..X...X.X..X..X.X..X.X.X..X...X..X", "....X...X..X.X....X.X.X....X..X...X..X..X..X....X.", "...X..X....X...X....X....X...X..X....X.X.X.X...X.X", ".X...X....X.X...X...X..X.X..X..X....X...X...X..X..", "X..X....X....X..X...X....X.X.X...X.X..X..X.X...X..", "X.X...X....X....X...X.X.X.X..X.X..X....X....X....X", "...X.X....X..X.X....X...X..X...X.X..X..X....X....X", "..X.X.X....X.X....X...X...X...X...X.X...X...X.X..X", "....X...X..X.X....X...X...X.X..X....X....X....X..X", ".X....X...X..X..X.X....X....X....X....X.X...X...X.", ".X.X...X..X...X.X.X....X.X...X....X.X....X....X.X.", "X....X...X...X....X....X....X.X.X..X....X....X...X", "..X.X..X....X..X...X..X..X...X....X...X.X...X..X.X", "...X....X..X.X....X...X...X..X.X..X....X....X...X.", "X..X....X....X..X..X.X..X.X.X..X..X...X....X.X..X.", "...X...X.X...X....X.X.X.X.X...X...X...X....X...X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> board = {"X..X...X....X......X......X......X.X......X.......", "X...X......X..X...X.....X.....X......X.X.......X..", ".....X.......X..X.......X..X......X...X......X...X", "...X.....X.....X...X....X....X......X..X...X.X...X", ".......X.....X.....X......X..X......X.......X...X.", "...X.....X..X.......X...X.......X.....X.......X...", "....X.....X.....X.....X.X..X.....X.......X.....X..", "..X.X....X..X.X...X.X......X.X......X.......X.....", ".X..X...X.......X......X.....X.....X....X..X.....X", "...X.......X....X....X.......X......X......X....X.", "......X......X......X....X......X....X....X.X.....", ".X.....X..X.X.......X.......X.....X.....X.X.......", "X....X..X....X...X....X.......X...X...X...X....X..", "....X.X..X......X......X.X...X.......X..X......X..", ".X.X......X.....X....X......X.....X...X.......X...", ".X.....X.......X......X......X.....X.....X......X.", "X......X......X.X..X..X.......X...X....X.......X.X", "....X...X....X....X.......X.......X.X...X.......X.", ".....X.....X....X.......X.......X.X......X.X......", ".X......X.X...X....X....X....X.X....X......X...X..", "....X...X....X......X...X.......X......X.....X....", "..X.X.X...X.X.....X.....X.......X...X.......X.....", ".X.......X.X.......X.X......X......X.....X....X...", "X.......X...X.....X...X.......X......X.X.......X..", "..X...X...X.....X.....X.X.X.X......X.X...X......X.", "X.......X.....X......X.X.......X...X......X..X....", "...X.....X.X......X......X.......X..X.......X....X", "......X.X....X......X.....X......X.......X.....X..", "....X.X.....X......X.....X......X.......X...X.....", "X.......X.......X.....X..X....X.......X...X.....X.", ".....X.....X......X.X.....X.....X.......X......X..", "...X......X...X.....X....X.....X...X..X.......X...", "..X.X.....X..X....X.....X.X.......X......X..X.....", ".X.X..X...X.......X...X.......X....X..X.......X...", "X....X.......X..X.X..X.......X.......X.....X......", "X..X...X.X....X..X.....X.....X..X...X.......X.....", "X.......X....X....X.....X......X...X....X.......X.", ".X..X.X...X.......X.....X.....X.....X..X......X...", "X.......X......X.X.X....X.....X...X....X...X......", "X.....X.......X..X....X.X...X....X......X...X....X", "......X...X......X..X..X..X.....X...X.....X.....X.", "....X......X..X....X...X..X...X...X.....X..X...X..", "..X.......X...X....X...X.......X......X.X.......X.", "......X......X.....X....X.......X....X......X..X..", ".....X.......X.X......X....X......X.....X...X.....", "X......X.......X.......X..X....X.X.....X..X..X...X", "..X.X..X.......X....X.......X.....X....X.....X....", "X.....X..X....X..X.......X...X......X......X...X..", ".....X.....X.....X.X......X.X......X..X.....X.....", ".X.......X.....X......X.X..X.....X...X...X.....X.."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> board = {"X...X...X..X..X.X...X..X..X...X..X.X.X.X..X..X..X.", "X.X...X.X...X..X.X..X.X..X.X..X..X..X...X...X...X.", ".X...X.X..X.X..X.X.X..X.X.X.X...X.X..X...X.X...X.X", "...X..X.X...X.X...X...X..X..X..X..X.X...X...X..X..", "X..X.X.X..X.X..X...X.X.X.X..X.X.X.X.X..X..X..X..X.", ".X..X.X.X...X.X..X.X...X..X...X..X...X...X.X...X.X", "...X...X...X.X.X..X...X..X...X.X...X.X.X.X.X...X..", "X.X...X.X.X..X..X..X.X..X...X.X.X.X..X..X.X..X..X.", "..X...X...X...X...X...X...X..X..X..X.X.X.X...X...X", "...X..X...X..X.X.X...X.X.X..X..X...X..X..X...X...X", "...X...X...X...X...X...X...X..X..X..X...X.X.X..X..", "X...X.X..X.X.X..X.X...X...X.X.X..X..X...X...X...X.", "X...X.X.X..X...X..X.X..X.X...X...X...X...X..X..X..", ".X..X...X...X..X...X...X...X...X..X..X.X...X.X.X..", "X..X...X..X.X.X...X..X.X.X.X...X.X...X..X...X...X.", ".X.X.X...X.X..X..X..X.X.X..X..X...X.X..X...X..X.X.", "..X..X.X.X.X...X...X.X.X.X...X...X...X..X.X.X...X.", ".X.X..X...X..X.X...X.X.X.X...X...X...X..X...X...X.", "X...X...X.X..X.X..X..X.X..X...X.X..X..X..X...X..X.", "..X.X.X.X.X...X..X..X..X...X...X...X..X..X..X...X.", "X...X.X.X...X..X...X..X...X..X...X..X.X..X...X...X", "..X...X...X..X..X..X.X..X...X...X...X...X..X...X.X", "...X..X..X.X...X...X.X..X.X...X...X...X...X..X.X..", "X..X..X...X...X.X...X..X.X.X...X.X.X...X...X.X..X.", ".X.X.X...X.X.X..X..X.X.X...X...X..X.X.X...X..X...X", ".X...X...X.X.X.X.X...X.X...X...X...X..X...X...X.X.", ".X..X...X...X...X.X...X.X.X...X.X.X.X..X...X...X.X", ".X.X.X...X.X...X...X..X.X.X.X...X.X..X...X.X..X.X.", "X.X..X.X.X.X...X.X.X..X..X..X..X..X...X.X...X...X.", ".X...X..X..X.X.X...X.X...X...X.X.X.X..X.X.X..X..X.", "..X.X.X...X.X...X..X..X.X...X.X...X...X.X..X..X.X.", ".X.X..X.X...X..X.X...X..X..X...X..X..X...X.X..X..X", "..X...X...X.X.X...X..X.X..X.X...X...X.X..X...X...X", ".X.X.X..X.X.X...X...X..X..X...X.X...X...X.X...X..X", "...X...X.X.X..X.X.X..X..X.X..X..X.X..X..X..X...X..", ".X.X...X..X.X..X...X...X...X.X..X..X.X.X...X...X..", ".X.X...X...X...X..X..X.X...X...X.X..X..X...X...X.X", "..X...X.X..X..X...X.X...X...X..X..X...X..X..X..X..", ".X...X.X...X.X..X...X.X...X.X...X.X...X...X.X.X..X", "...X.X..X.X.X.X...X.X.X..X.X.X...X.X...X...X.X.X..", ".X.X.X.X..X...X..X...X..X..X.X..X..X...X...X...X.X", ".X..X.X..X.X.X...X.X...X...X.X.X...X...X.X..X..X.X", ".X.X.X...X...X.X...X...X..X.X..X..X..X...X..X...X.", "..X..X..X..X..X...X.X.X..X.X.X..X...X...X..X.X.X..", "X..X..X.X..X..X..X...X..X..X...X.X.X.X..X...X...X.", "X.X.X..X...X.X.X...X..X..X.X.X...X..X.X...X..X.X..", "X...X..X.X.X.X.X...X..X.X...X..X...X.X...X..X.X.X.", "..X...X...X.X.X..X...X...X..X.X..X...X.X..X...X..X", ".X...X...X...X.X...X.X...X...X..X...X..X.X.X..X...", "X..X.X...X.X.X..X.X..X..X...X...X..X.X.X...X...X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> board = {"X........X.....X..............X...................", "X................X....X..........X................", "X..........X........X.................X...........", "........X.....X.................X................X", "....................X.................X.X.........", "..........X..............X.............X..........", ".......X.............X..........X.................", ".X.......X....X.........X........X..X.............", ".......X.....X.............X.X........X...........", ".....X....X...X............X....................X.", "...............X.......X...X...................X..", "............X.............X.X...........X.........", "....X.............X..........X...........X........", ".....X....................X.......X....X..X.......", "............X.....X..X................X...X.......", ".............X...............X........X...........", "....X.X..........X......X...X....................X", "..X.......X.........X.X......X.............X....X.", ".............X.........X.................X........", ".........X......X...............X.........X.......", ".X.........X......X........X...................X..", "...X...X...................X........X.............", "....X.........X..................X................", "..X....X.................X....................X...", ".......X.............X.................X.........X", "......X...................X......X..............X.", "X................X.............X..X...............", "..X...X.X.......X...........X..X.......X..........", ".X.................X......X....................X..", ".............X...............X......X.............", "...X.......X...........X...................X......", "..............X............X..X...................", ".X.X..........X.....X................X.....X.....X", "......X.................X...........X............X", "....X............X..................X.....X.......", "...X...............X....................X........X", "..............X.............X.............X.......", "X...............X........X.......X...X............", ".X.X................X.....X.................X.....", "......X...X............X......X..........X.X......", "X..X............X....................X..........X.", "..................X...X..................X........", "......X.....X...................X...............X.", "..X....X.X.............X...................X....X.", ".............X..X.............X.................X.", "....X.........X...............X......X............", ".X..........X.....X..............X................", "...X..................X......X.................X..", "................X..............X.........X.X......", "....X.....X.......X........X...X..........X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1543;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> board = {"X........X..X..X...........X...X.X....X..X........", "...X...........X...........X.X........X.......X...", "........X....X......X......X...X.........X.......X", "..X.X...........X.....X.........X.X..X....X.X.....", ".X...X.X.....X..X.....X..........X.X.........X....", "......X.........X.....X..X.....X.X......X.....X..X", ".....X.....X...X....X........X.....X..X...........", "X........X...X...........X.X..X...........X.......", "..X..........X..X....X..........X..X..........X...", "....X...........X.......X......X.......X........X.", ".....X......X.........X.......X.....X...X......X..", "......X......X..........X........X....X....X...X..", "X.......X.........X........X.X.....X...X..........", "X....X.....X......X.....X......X...........X.....X", "......X...........X.......X...........X...X..X...X", "..........X..........X...X.X.........X..X.........", "X......X........X.X....X........X...........X.....", "......X....X....X..X........X...X..X.....X...X....", "X.X......X...X.......X...........X......X.......X.", "..........X.X...........X.....X.X.X...........X...", ".......X...X...X....X........X...X.....X...X..X...", "X.......X..........X...........X..X.X.....X.......", ".X..........X.........X.......X......X..........X.", "X....X...X........X.....X..X....X.X...X...........", "X..X......X....X...........X......X......X.....X..", "..X.X...X......X.....X....X.......X...........X...", "......X....X.........X...........X.......X..X.....", ".....X..X.....X.X.........X.....X..........X......", "..X....X........X.........X.X.........X.......X..X", ".X.......X....X...........X.X.......X...........X.", ".......X.......X...X...X...........X..........X...", ".......X.X...X.......X.........X...X.......X......", "...X.X......X.........X..........X.....X...X......", "...X.X..........X.......X...........X...........X.", "......X.........X...........X.........X......X....", "....X..X..........X.........X....X......X.........", "..X.X.....X...X..X.......X.X...........X.X.X....X.", ".....X..........X...........X.........X.X.X.......", "...X.......X.........X.........X..X........X....X.", "........X.....X.X..........X.....X....X.......X.X.", ".....X.......X.X......X.........X.X......X........", ".X.....X.....X...........X.......X...X......X.....", "......X........X...X...X.........X.........X.....X", ".....X.........X........X.........X....X..........", "X..........X........X.....X..........X.....X.X....", ".......X.........X..X......X.......X..........X..X", "........X.....X......X.......X...X.X..X...........", "X...X...........X.........X.X......X.X....X..X....", "......X.........X...X...........X..X.........X....", "......X.........X.....X......X.........X.......X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> board = {"X..X.X...X.......X..........X......X.......X.X.X..", ".X..........X.....X........X......X..X.....X......", "..X......X..X...X.......X..........X.....X........", "X.........X..........X.....X..X..........X.....X..", ".....X.......X...X.X....X....X....X.X.......X.....", "....X........X..X..........X...X........X.......X.", "..X.........X......X.......X..........X.......X...", ".....X.........X.X.........X.........X.....X......", "X.....X...X........X.X.X....X..X....X.....X....X..", "....X.......X........X.........X........X......X..", ".......X......X.......X.......X........X.......X..", "........X.........X.......X..........X..........X.", "....X.......X.X......X........X....X.........X....", "...X.X....X.....X..........X....X.........X..X....", "..X..X.......X.......X...X.....X....X...X.....X...", "..X..........X.X..X......X..X.....X.X..X.X....X...", "...X...X.X..........X.........X.....X.......X....X", ".......X.........X..X..X.X.........X........X.X...", "....X.X.......X.....X.X....X.X.......X....X.......", "..X.........X.......X......X.....X...X.......X....", "......X......X...X....X.......X...X..X.......X.X..", "........X.........X..X.........X.X..........X.....", ".....X..X.....X.........X....X...X..X.........X...", "X....X......X.........X......X........X.X......X..", "......X..X..........X..........X.........X..X.....", ".X.X..........X.....X.X..........X.......X.X......", ".X..X.X..X.......X.......X.......X........X.....X.", "........X........X..........X......X.......X.....X", "..X..X...X......X.........X...X.......X...X.......", "X..X.....X....X..........X..X....X.........X..X...", "...X........X.X........X.X........X....X.X.....X..", ".......X..X..........X......X......X..X....X..X...", ".......X..........X.........X..X........X.........", ".X....X.......X......X...X.....X......X.........X.", ".........X....X........X..X....X.X.........X...X..", "..X..X......X.....X.....X....X...X.X.....X....X...", "......X.X.......X..........X..X........X.....X....", ".X..........X.........X....X.X..X..........X..X...", "....X.....X....X...X.X..........X.X........X......", ".X.X......X..........X........X..X.........X....X.", ".......X..........X....X..X......X.X..........X...", "...X..X.....X.....X..........X......X.......X.....", "...X...X....X..........X.....X...X..X.X.........X.", ".X...X..........X..........X.......X.X.X........X.", ".....X.........X........X.....X.X.......X......X.X", "...X..X....X........X......X........X........X....", "..X..........X........X.........X........X.....X..", ".X.....X.X....X..........X.........X......X.....X.", ".X.....X.......X.......X..X..X..........X...X.X...", ".....X........X.........X........X....X.........X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 587;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> board = {".X...X...X.X...X.X...X.X.X...X.X...X..X..X...X.X.X", ".X.X.X...X..X.X.X.X..X.X.X...X..X..X...X...X.X...X", "...X.X.X.X..X.X.X..X.X.X.X..X.X.X.X...X...X.X...X.", "X..X.X.X..X...X...X..X..X.X.X.X...X..X..X..X.X...X", "..X..X..X.X..X..X...X..X...X...X..X..X..X...X...X.", ".X...X..X..X...X...X...X...X..X..X..X..X..X..X.X..", ".X..X.X.X.X.X...X...X..X...X..X...X...X.X..X.X...X", "..X...X..X.X.X.X..X.X...X...X.X..X..X..X.X..X.X.X.", ".X..X..X.X..X.X..X.X.X...X..X..X.X...X..X..X..X.X.", "..X...X...X...X...X.X..X...X...X...X..X...X...X...", "X..X...X...X...X..X...X..X.X...X.X...X...X..X.X.X.", ".X.X..X..X..X...X.X..X.X..X.X.X.X..X...X..X..X..X.", "..X.X..X.X.X..X..X..X...X.X..X.X..X..X..X...X...X.", ".X...X.X..X...X.X...X...X..X..X..X...X..X.X.X..X..", "X...X..X...X..X...X..X.X.X.X..X..X..X..X...X.X..X.", ".X..X.X.X.X.X...X.X...X.X...X...X...X.X..X..X..X.X", "...X..X..X.X..X..X...X.X.X...X...X...X...X..X..X..", "X..X...X...X.X...X.X...X...X..X..X.X...X...X...X.X", "...X.X.X..X.X..X..X...X...X..X.X..X..X...X.X..X.X.", ".X...X...X.X.X.X..X...X...X..X...X.X...X..X..X..X.", "X..X...X..X..X.X..X...X.X..X...X..X..X.X..X..X..X.", ".X...X.X...X..X...X...X..X.X..X..X.X.X..X...X.X.X.", "..X...X...X...X...X..X..X.X.X.X..X.X..X...X.X.X.X.", "X.X..X...X..X.X..X.X.X..X.X..X...X...X.X..X.X...X.", ".X..X...X.X..X..X..X..X.X..X.X.X...X..X..X...X..X.", "..X.X...X.X..X.X...X..X..X.X..X.X...X..X.X..X...X.", ".X.X..X.X..X..X..X.X.X...X.X.X...X...X...X.X...X.X", "..X.X..X.X..X...X...X..X.X...X..X.X...X...X.X.X...", "X...X...X...X..X...X...X...X..X.X...X...X..X...X..", "X...X..X...X..X..X...X...X...X.X...X..X...X...X.X.", "X...X.X...X.X...X.X...X...X.X...X..X.X..X.X..X..X.", "..X...X...X.X..X..X.X.X..X..X...X...X.X..X...X.X..", "X.X...X..X..X.X...X.X...X...X...X.X..X...X..X...X.", "X...X...X...X...X.X.X...X..X.X...X...X...X...X...X", "...X..X..X..X.X...X...X.X...X.X..X...X.X.X.X.X..X.", ".X.X.X...X..X.X...X...X...X..X...X..X..X..X..X...X", "...X...X.X...X..X...X..X...X.X..X.X...X...X.X.X..X", ".X..X..X...X.X.X...X.X..X..X...X...X..X.X..X..X..X", ".X...X.X..X..X.X...X.X...X..X...X..X..X.X.X...X..X", ".X..X...X...X..X...X..X..X..X..X...X.X..X...X..X.X", "...X...X.X..X.X...X..X..X..X.X.X..X...X..X.X.X...X", "..X...X...X.X..X..X.X..X..X.X...X..X...X...X..X...", "X...X.X..X.X...X..X..X..X.X.X...X..X...X...X.X.X..", "X..X.X.X..X.X...X.X.X.X.X.X.X..X..X.X.X...X.X...X.", "X.X...X.X.X..X..X...X...X...X...X.X..X..X...X...X.", "X...X...X.X...X...X.X.X...X..X.X..X..X...X..X.X...", "X...X.X.X..X...X..X...X..X..X..X..X..X..X...X..X..", "X...X.X...X.X...X.X..X.X.X...X.X.X.X...X...X..X...", "X.X.X..X...X..X...X..X...X..X.X.X.X...X.X..X...X.X", "..X.X..X.X.X...X..X.X..X..X...X..X.X..X...X..X...X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> board = {"X......X.X.X......X......X...X....X.......X.......", "X..X.X.X...X.X..X.X......X...X.......X.......X....", "X....X....X....X.......X.......X...X.......X.....X", ".....X....X.....X.X....X......X.X.......X....X....", "...X...X......X.....X...X.X......X.......X.......X", "...X....X....X..X......X....X.X.X.X....X....X.X...", ".X....X...X....X..X...X.X.X..X.X...X..X......X.X..", "....X...X.X.X..X...X.....X....X.......X.......X..X", ".X......X....X...X.X.....X...X...X..X.....X......X", "..X..X.....X...X.X......X....X.....X......X.....X.", ".....X.......X...X.....X.....X....X..X......X...X.", ".X.X......X......X..X...X...X.......X.X.....X.....", ".X.......X.......X.......X.......X.....X...X..X...", "....X..X.X.......X......X...X.....X.....X......X..", "...X.......X.....X....X.X..X......X.....X.....X...", ".X...X.....X....X..X..X..X......X.X.X....X.....X..", ".....X......X....X.....X....X....X.......X......X.", ".X......X.......X....X...X.......X....X....X..X.X.", ".....X.....X.X......X.....X....X....X......X....X.", ".X.......X....X.....X......X.......X.X......X.....", ".X....X..X..X.......X.......X.....X.....X......X..", "...X....X......X..X..X....X..X.X..X.....X.X.......", "X....X....X.......X.....X..X..X.X.X......X.X...X..", "...X.X...X.....X.......X......X.X...X......X......", "X..X...X....X....X...X...X.......X..X...X....X....", "...X......X..X.....X.....X.....X...X...X.....X....", "...X.......X...X.X...X....X.......X.X....X.....X..", "....X......X......X....X.......X.....X.....X..X...", "....X..X...X...X..X......X.....X....X..X.X.......X", "...X..X.X....X.X.......X.X......X.X.....X..X.....X", ".X..X..X...X..X...X.....X...X.....X......X...X....", "...X.X...X......X.......X.X....X.....X...X.....X..", "..X......X...X.X..X.....X......X.......X...X......", "X...X......X....X.....X...X.X......X....X....X....", "X..X...X...X.......X.X...X.X.......X...X....X.....", "X...X...X.......X..X...X.....X.....X..X....X.....X", "......X...X..X......X...X......X.X....X..X...X..X.", "....X.....X......X.......X...X.....X.X....X.......", "X...X......X......X.......X.X....X...X.......X..X.", ".X.......X..X.X...X......X.....X..X.....X....X....", "...X....X.......X.....X.X.....X..X.X.....X......X.", "...X..X......X.X.....X....X...X.......X.X...X..X..", ".....X....X.......X......X.......X...X.......X....", "X......X.....X...X......X...X.X..X......X....X....", "...X..X...X.......X.......X..X....X.X.....X.......", "X...X....X......X...X....X....X......X.....X..X.X.", ".X.X.....X.X.....X...X..X...X.......X.....X..X....", "...X.X.....X....X.X.X.......X....X....X......X...X", "..X.....X...X.....X.X....X.......X..X.X.....X.X..X", ".....X......X..X.....X.X....X......X..X.......X..."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> board = {"..................X.....X..................X..X...", "...X..................X............X.....X........", "...X................X..................X......X...", ".......X..X...X..............X...X.....X......X...", "........X..................X...............X......", "............X..............X...........X..........", "...X............X............X...........X........", "........X................X.....X....X......X......", "X...........X...............X........X..X..X......", "..X........X..............X...........X..X.......X", "..........X............X....X.............X...X...", "..........X...........X....X............X.......X.", "..............X.....X.......X........X............", "..X..............X...............X......X......X..", ".X.........X..........X.........X........X....X...", "..X..........X............X.........X......X....X.", "..........X......X.X..............X...............", ".X...X................X...............X...........", "X.......X.....X..X..............X...X.............", "...X............X..X......X.X....X................", ".X....X.................X......X...............X..", "..............X..X.X............X.....X...........", ".......X..X.....X........X.X.....X......X.........", "...X.............X..............X.........X.......", "...X......X...X.........X............X.......X....", ".......X....X.............X...............X.......", "...........X............X.....X........X..........", "......X......X..............X.............X..X....", ".......X................X................X......X.", ".................X........X..........X..........X.", "......X.....X.................X.........X.........", ".......X..X....X..................X........X......", "..X..X......X...........X................X........", ".........X......X..............X........X.........", ".X................X...X.X..................X......", "............X.....X..........X...............X...X", "........X.X..X...X.....X.............X............", "......X.............X.X.............X....X........", "......X...............X.....X.....X......X........", "........X............X.X......X........X..........", ".......X....X.............X...X...........X.......", ".......X........X............X.........X..X.......", ".........X..........X.................X...........", "..X..............X.............X..............X...", "..............X..........X.......X..............X.", "...X...............X.X...........X.X.X............", "X......X............X............X..........X.....", "...X............X..X...........X............X...X.", "...........X...............X.................X.X..", ".X...........X.X........X..........X.........X..X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1743;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> board = {".X............X.................X................X", "..........X...X.........X...X.X.........X........X", "..................X.......X...........X.....X.....", ".........X.X.......X.......X..................X...", "...X.............X...............X.........X......", ".........X.....X..............X.....X...........X.", ".................X..................X...........X.", "........X..........X.......X..X....X..............", "...X...........X..X............X....X........X....", ".....X..X................X..........X.X...X.......", "..X.........X..X.......X.........X...X.....X......", "............X..................X..........X.......", ".X...X.............X.......X....X..............X..", "X...........X......X............X..X..............", "....X............X....X.....X......X.....X.X......", "......X..................X..............X.........", "...X............X......X.........X..............X.", "...X...........X..........X........X..............", ".X................X..................X............", "X..............X..X..................X............", ".X........X..............X..................X.....", ".X...X.........X...........X..............X.......", "....X.......X..X..........X..........X........X...", "......X..............X..............X.....X.......", "..X..............X.........X.......X.X....X..X....", ".............X...........X..X.............X.......", "......X..............X.................X.......X..", ".X..............X.................X.............X.", ".............X..............X..................X..", ".X...............X.............X.............X....", ".....X.........X...X..X......X.....X....X.......X.", ".................X....X...............X...........", ".......X........X.............X..X..............X.", "...........X..............X...........X.......X...", "....X.....X........X.......X.................X.X..", "............X.X...........X........X..X...........", ".X.................X...........X...............X..", "............X....X..X..........X....X.............", ".....X.........X..........X.....X.................", "X.............X.....X...X.X............X..........", "........X.................X......X................", ".X.................X...X....X...............X.....", "X...X............X.......X.....X.....X.....X......", "..X..............X..X................X......X.....", ".............X.......X..X................X........", "..X........X.........X...X..................X.....", "..........X...........X..............X.........X.X", ".X....X..........X...............X.........X......", "............X..........X.......X............X.....", "....X....X..............X....X..............X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 317;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> board = {"....X..............X..X..............X........X...", "...........X...X...............X.......X.........X", ".............X...........X..............X.....X...", "X...........X..............X............X.X.......", ".....X......X.........X..............X.........X..", "....X.X.........X..X......X...............X.......", ".X............X.........X...X................X....", ".......X...X.............X...............X......X.", "..X...............X..X....X..X.....X...........X..", "...........X............X.......X...............X.", "..X........X...............X................X.....", "X.............X...X................X..............", "..X...............X..........X.....X..............", "...X............X.......X.X................X......", ".X.................X.........X.X................X.", "........X.............X...X.............X.........", "......X.........X.............X..X............X...", "..........X................X......X..........X....", "..........X...........X.......X..............X....", "......X.X.........X..........X.........X........X.", "...X.....X.....X................X...........X.....", ".....X...............X.........X........X.X.......", "....X...............X...........X......X..........", "X.........X.........X...........X.................", "X.........X.............X...X................X..X.", "..X......X.....X........X.X........X..............", ".X.....X.................X......X......X..........", ".X.........X........X.............X.........X.....", "....X...........X...............X...............X.", "......X..........X...........X..........X.X.......", "..X....X................X.................X.......", "X...............X..X.......X.............X........", ".........X.X........X..............X....X.........", "......X............X..........X.X.X...........X...", "....X............X........X..X..X..X.....X........", "....X..............X...X...X....X.................", "X..X........X.............X.......X...............", "X......X.............X.X................X.X.......", "..........X.................X............X........", "X...X.....X........X................X.X...........", "X........X........X........X...........X........X.", "................X......X.X..........X............X", "....X..X....X.........X.X.......X................X", "................X...............X.......X..X......", ".......X................X................X......X.", "........X......X...X.........X............X.....X.", ".......X............X.............X.X.X..X....X...", ".X.................X.............X.X......X.......", "...X...............X.............X.........X.X....", "...........X......X...........X...............X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1910;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> board = {"X...X....X.....X....X.....X......X....X.......X..X", "..X.......X......X.X.....X...X.....X.X....X....X..", "X......X....X..X......X.......X.....X....X......X.", ".....X.......X....X.......X.......X..X.......X.X..", ".....X...X.....X.......X.......X...X......X....X..", "....X..X.....X....X......X....X.X..X...X...X......", ".X....X.....X.X.......X..X...X.X....X.....X......X", "...X......X..X.......X.......X.X...X.......X...X..", "...X......X.......X.X......X.....X......X..X.X.X..", "..X...X.X....X......X......X......X.......X.X..X..", ".X.X....X.....X.......X..X......X...X..X..X.......", "X.......X....X.....X...X....X..X..X......X.....X..", "....X....X...X.....X..X.....X......X...X.....X...X", "...X......X.....X.X.....X....X..X.......X....X....", ".X...X.X....X.....X..X......X..X...X.......X....X.", "...X...X...X......X......X....X...X.......X......X", ".X.....X..X......X.....X.......X.......X......X...", "....X....X....X..X.......X..X......X..X.....X.....", "..X.....X...X.X......X.X.......X.......X.....X....", ".X...X..X.X....X.......X.X..X.....X...X.....X....X", "....X....X.X......X....X.X..X.....X....X.....X..X.", "..X......X..X...X.....X.....X....X.......X....X...", ".X...X.X.....X.......X.......X.......X.....X......", ".X..X.X.......X.......X.X......X.....X......X.....", ".X...X.......X....X.X...X.......X.X.....X..X.X....", "...X..X..X.......X.......X.....X..X...X......X..X.", ".X..X.......X......X.......X.X..X....X..X.......X.", "..X...X......X.X.X...X....X.X...X.X....X..X...X...", "....X.....X...X......X.......X...X..X...X....X.X..", "...X.....X....X......X.......X.X......X..X......X.", ".X.X......X..X...X.....X....X.......X.....X...X...", "....X.X....X....X.....X...X...X...X..X..X..X..X...", "..X.......X.....X.X.X.X......X.......X.....X...X..", "..X.....X...X..X..X......X.......X.....X...X...X..", ".X.....X.....X.....X..X.X...X...X....X......X..X..", "...X......X...X..X....X......X.......X.....X......", "X...X......X......X.X.....X..X.X.......X......X..X", ".....X....X..X.......X....X.....X.....X.X..X......", "X...X.X.X.X.....X.......X......X..X.....X....X...X", "......X..X...X.......X.....X...X.....X.X.X......X.", "....X.X....X....X...X.....X..X..X.X......X.....X..", "X....X.....X....X.X....X.....X...X.......X..X....X", "..X...X.......X...X......X..X...X..X......X.....X.", "X.......X...X....X.....X.....X.......X......X.....", "..X.......X.....X..X...X....X.X.X.....X..X..X....X", ".....X...X..X....X..X......X....X.X.....X......X..", "....X...X..X....X.....X..X.......X.X.....X......X.", "X.....X.X......X..X..X.X...X..X.....X.......X.X...", "....X.X.X.....X...X....X..X.X..X.....X.....X.....X", "......X.X.....X...X.......X.X.....X..X...X.X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> board = {".X........X.....X....X......X.......X......X...X..", "X.....X.....X......X........X..X...X......X......X", "........X.......X..X......X..X........X.X......X..", "X.X......X.....X.......X.X.......X...X....X...X...", "...X.......X......X......X....X......X..X........X", ".....X....X.X...X........X....X.X......X...X......", "..X....X...X....X...X........X.......X..X....X....", "X.....X..X......X..X.......X....X........X...X....", "..X.....X..X.......X..X....X......X..X.....X....X.", "......X........X.....X......X.X.....X.X........X.X", "...X.X..X........X.X......X....X.....X...X.X......", "..X....X...X........X.X........X........X....X....", "...X.....X..X.X.X...X.....X.......X......X....X...", ".....X.......X....X.X........X......X....X.....X..", "......X..X........X........X...X.X.X....X......X..", "......X......X........X....X........X.....X....X..", ".....X........X.......X...X....X.X........X.......", "X........X........X.......X..X.......X......X.X..X", "....X.X......X...X..X....X.....X......X..X.......X", ".......X..X......X.X...X........X....X.....X......", "X........X...X.......X.X...X...X......X.X.....X...", "...X........X......X..X......X.....X...X...X.....X", "......X...X...X...X.....X........X......X...X.....", "..X.......X........X.X.......X......X..X.X..X.....", "..X..X......X.X......X.......X.......X.....X...X..", "X...X..X.......X...X.X..X......X.....X........X...", "....X....X..X......X........X.......X...X.X....X..", "X......X..X.......X.X.....X...X..X..X.X.X........X", "..X..X.X....X..X....X.X.....X......X..X..X........", "X......X.......X.......X........X.X......X.X..X.X.", "......X........X.....X.......X.X......X......X....", ".X.......X.....X......X..X....X.....X........X....", "..X......X.....X..X.....X.....X.X.....X....X......", "..X....X..X...X.....X.......X.X.......X....X......", ".X....X..X.....X..X....X..X......X......X...X...X.", "X........X........X......X.....X.....X.......X....", "X......X..X........X...X........X....X...X..X....X", ".......X.....X.......X..X..X....X.......X........X", "........X..X.......X......X..X.X.X.....X...X......", "..X....X...X....X....X......X........X..X....X....", "..X..X...X.....X.....X....X.....X.X.X........X....", ".X.X...X.......X..X......X....X........X.......X.X", "....X..X..X...X..X.......X.......X.......X...X....", "...X......X...X....X.....X....X......X...X....X...", "...X........X.....X.......X......X....X.......X...", "...X....X..X...X.......X.....X........X....X...X..", "...X......X.....X..X........X......X.X.X.....X..X.", "X......X......X....X..X.X.X.......X.X...X...X.....", ".X..X....X.X....X........X..X.......X.....X......X", ".X......X....X........X......X.......X...X...X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 581;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> board = {"X..........X...X.......X.....X.....X.X..X......X..", "X..........X.......X.........X..........X.X.....X.", ".....X..X..........X...........X......X.........X.", "........X.....X......X.........X........X.X.....X.", ".X.......X..X..........X......X.....X....X...X....", ".X..X.......X..X..X........X.X......X..........X.X", ".....X......X.........X......X.......X........X...", "..X.X.......X..X.X.....X........X..X..X....X......", "....X.....X..X...X.X........X......X...........X..", "..X......X...X..X..........X....X...X......X......", "....X..X.......X.......X.........X..........X.....", ".....X.....X...X....X...........X..........X...X..", "X....X..........X.....X...........X.........X.....", ".....X..........X..........X..........X.....X.X...", ".X.......X........X..X..........X..X...X........X.", ".....X........X.......X......X...........X...X.X..", "..X....X....X....X.....X..X...........X....X...X..", ".......X....X...X.X..........X.X..X......X....X...", ".....X..........X........X..........X..X.........X", "........X.....X........X...X.......X...........X..", "..X.X.X.......X.....X.X..X......X..X......X.......", "X..........X.X........X.X..X.......X.....X........", ".X..........X.......X.X........X......X........X..", ".....X..X...........X...........X......X......X...", ".......X.....X.....X...X.....X.......X...........X", ".......X..X.....X...X.........X........X..X.......", "...X..........X..........X.......X....X..X......X.", "...X.X.X...X.........X.........X...X...........X..", "....X........X...X....X..........X....X.......X...", "..X.......X...X..X...........X...........X........", "..X......X...........X....X..X.......X.......X....", "......X.....X.X..X........X.......X..........X....", "X.....X.........X......X...........X..X..X........", "X........X....X....X........X........X.........X..", "........X..X...X....X.......X.X...........X.......", ".X...X.X......X..........X.X.X...........X........", "..X..X......X.........X......X...X.......X.......X", "...X..X..X.......X..X..........X..X......X........", "..X....X.......X.......X.....X.X.........X.....X..", "...X...X..X.........X...........X.......X.........", "..X...........X......X......X...........X.........", "..X.....X....X.......X.........X....X...X.........", "X......X........X......X.......X.....X........X...", "...X...X....X..........X..X...X......X...X...X..X.", "..........X....X..........X...X...........X.....X.", "..........X..........X......X.....X..........X...X", "..X...........X.......X....X...X........X.........", ".X...X.........X..X.....X..........X....X....X....", "X......X..........X.X..X......X......X...X.X.X...X", "...X...X...X...X.........X........X..X..........X."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1170;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> board = {"....X.....X.......X....X......X..X.X.......X.....X", ".......X...X.....X.X.....X......X.....X......X.X..", ".X...X......X...X..X.....X.......X.....X....X...X.", "......X......X.X.......X...X.......X.....X......X.", ".X....X......X......X...X.......X......X...X..X...", "..X.....X....X..X....X.X.....X.....X.......X....X.", "......X.X.....X.X...X.......X.......X..X.......X..", "..X..X.......X.......X.......X....X...X.....X.X.X.", "X.......X.......X.......X.....X....X......X.......", "X...X...X....X.....X.......X..X.......X...X.X.....", ".X..X.....X.X.....X...X.X..X..X...X......X.......X", "..X.....X.......X.......X......X.....X.......X....", ".X..X...X.X....X.X.....X...X...X..X.X.....X...X...", "X...X....X.......X.....X.....X.....X....X......X..", "....X...X.X..X....X...X.X....X....X....X.X.....X..", "..X.X...X.....X....X.X.......X...X.....X...X..X...", "....X..X......X....X...X.X...X....X..X....X....X..", "....X...X.X......X..X.......X....X..X....X....X...", "...X....X...X.....X......X.....X.....X..X...X.....", ".X..X.....X......X....X...X...X...X....X......X.X.", ".X....X.X.......X..X.X......X...X....X...X......X.", "X...X......X.X.....X...X.....X.......X......X.....", "X..X.....X.X.X....X...X...X...X......X.....X..X.X.", "...X...X.....X.....X..X...X....X.......X....X...X.", "X...X...X......X...X...X..X......X.......X...X....", "..X.X.....X...X.X...X.X.....X.....X...X.......X...", ".X...X......X......X....X.X.X.X......X.......X.X..", ".....X.X..X......X......X..X....X......X......X..X", "....X.....X...X...X.X..X.......X.......X..X.....X.", "......X..X......X.......X....X...X......X..X.X...X", "..X.......X.X......X....X...X...X......X.......X..", "..X.....X....X..X...X..X.....X.X.X..X....X......X.", ".X....X...X.X...X..X...X.X....X.X......X.X...X....", "..X....X.......X.X....X...X......X.X.....X.......X", "..X.X...X......X....X.....X...X.......X...X....X..", "..X.....X...X..X......X.X......X.....X.......X...X", "...X...X.....X.......X.......X.....X...X.....X....", ".X.....X.X.....X..X...X....X.....X...X.......X....", "X....X......X....X.....X...X.X.X...X..X.X.......X.", ".X......X..X...X.X.....X....X.X.X..X.X....X......X", "....X.....X.X..X......X.X....X.X...X....X....X...X", "...X.X....X....X.....X..X..X.X......X...X......X..", ".X.....X.......X.X.....X..X..X.......X.....X....X.", ".....X.....X.....X..X..X.X.......X.......X......X.", ".....X..X.......X.......X..X....X.......X...X.X...", "X...X....X.....X..X...X.X......X.......X......X...", "..X......X.X.......X...X.....X....X...X.......X...", "....X...X..X.......X....X.....X...X.......X...X...", "...X...X....X.......X.......X....X.X.......X......", "X.X.....X..X.....X...X..X......X.....X...X......X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 328;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> board = {".......X...........X............X...........X.....", ".....X........X.....X...........X............X.X..", "X..............X..............X....X.X.......X....", "......X........X..........X......X......X.........", ".....X.........X.........X..X....X..............X.", "....X.X.X..........X........X...X.......X.........", ".....X.X....X.......X..............X........X.X...", "X..............X......X......X.....X.....X.......X", "..............X..............X...........X........", ".X.X...X...X...X......X..............X............", ".X.....X....X...........X...........X.............", ".X.............X........X..X............X.........", "....X........X.............X..........X.....X.....", "........X.X....X.X............X....X............X.", "..X....X.......X.........X...X.X..............X...", "........X..............X..........X.....X.X.......", "...X.............X..............X........X...X....", "........X..........X...X.........X.X............X.", "X.......X.........X.....X..........X......X.......", ".......X.....X....X.............X..............X..", ".......X............X........X...........X..X.....", "X...X........X..............X.....X.............X.", "...........X...X............X.........X...X.......", ".X..............X............X.......X............", "..X.X.....X......X........X..............X......X.", "........X....X..............X.............X..X...X", "..........X..............X.........X..........X.X.", ".........X....X...X............X........X.........", "....X....X.......X.......X.....X.....X..X.........", ".X.X..............X...........X..........X........", ".X...........X.............X........X..........X..", ".........X.............X.....X..............X.....", "....X..........X...X............X.....X.......X...", "....X..X....X......X..............X...X..........X", "......X...........X.X........X...X....X...........", ".X............X............X...X...X...X.....X....", ".X.....X..........X.X....X.............X.........X", "............X..X....X..............X.......X......", "..X..........X.X.............X.......X...X....X..X", "........X..X...........X...........X..............", "X.....X..........X........X...........X...........", "..X........X....X.X..............X...X...X......X.", "......X..............X......X...X.....X...X.......", "......X..X.........X...........X...X......X.......", ".X.X..............X...........X........X..........", "..X..........X.........X.....X.............X......", "X......X.............X..X.X..X........X...........", ".X....X..............X..........X...X.............", ".X.....X.........X..........X.............X.......", "..X.X.....X.............X.....X..X.....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> board = {"..........X.X.............X..X..X...........X.....", "....X..X......X........X...X...X.............X....", ".X.............X.......X.X...X.............X......", ".......X........X..X..X....X.............X........", "......X..............X.............X........X...X.", "...........X......X.........X.............X.......", "........X...............X........X.........X......", ".......X........X........X..X.....X.......X.......", "........X........X.X............X......X........X.", "...X..........X..............X........X...........", ".X...........X.......X.........X.....X....X.......", ".....X..............X.............X..X.X.X.....X..", "...X.X...............X.....X..........X..X..X.....", "........X............X......X...............X.....", "X......X...............X.............X............", "X..X..X.X..X...........X...X..X......X............", "...X...........X........X.X......X..........X....X", "...X.X.....X............X............X....X.......", "........X.......X.........X........X.....X........", ".......X..............X.X.......X.....X.......X...", "........X...............X..........X............X.", ".....X........X.......X.X........X...........X....", "........X.....X.......X.......X.X.........X.....X.", "..........X.....X.X..X.....X....X...............X.", "..............X.X........X..........X.X.......X...", "............X.........X.X.......X...........X.....", "...X..........X.X..X....X........X...........X....", "...X...........X..............X..............X.X..", "........X..........X..X......X...........X..X...X.", ".....X.........X......X...X.....X...............X.", "X......X....X..........X.............X............", ".X.....X........X.......X..X............X....X....", ".....X.....X....X.........X.X.....X..X..X.........", "...X....X.............X...............X......X..X.", "X..X.......X.............X.....X..X...............", "X.X.......X........X............X..........X......", "X......X.......X.............X....X....X..........", ".X............X..........X......X.........X.X.....", "..X...X..............X.X..............X..........X", ".........X.............X....X.X.........X......X..", "............X.........X...........X..............X", "...X........X.......X...X............X.X...X......", "......X............X..............X..............X", "...........X...........X..............X...........", ".X.....X..............X..........X...X............", "..X.........X......X...............X.............X", "...............X.X.........X...X.......X..X.......", "....X....X...........X...........X.........X....X.", "......X.........X....X.............X.....X.....X..", ".X..X............X..............X....X..X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 308;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> board = {"..X........X.........X...........X......X.......X.", "....X.......X........X....X......X..........X.X...", "........X..X..X...X...X....X............X.........", "....X.........X...........X.X.X....X.......X......", ".X.......X.....X.X....X....X........X....X.....X..", ".............X............X.X.............X.......", "..X............X...........X............X.........", "...X..............X..............X.....X........X.", ".............X...............X.......X.........X..", ".............X...X.......X.......X....X...........", "..X..X.........X..........X............X..........", ".....X.....X.......X.............X...X...X........", ".X.....X........X............X......X.X.........X.", "......X.............X.........X............X..X...", "......X.............X.......X............X......X.", "............X.....X........X.....X............X...", "....X..............X...........X...............X..", "...........X............X.........X....X...X......", "......X.......X..X...X........X............X......", ".....X...X.............X.....X.............X....X.", "...........X.........X..........X............X....", ".X.............X.............X......X.....X.......", "..X..........X.........X..X....X..........X......X", ".............X.......X.............X....X.........", "X...............X...............X.........X.......", "...X...........X..........X............X..........", ".X..............X.....X............X............X.", "..X......X.......X..........X...............X.....", ".........X...X.....X..........X.....X.............", "X.............X.........X.X......X.....X.....X....", ".X......X.X...........X..X...............X....X...", ".........X..............X..X.X...X............X...", ".........X............X........X......X.......X.X.", ".........X...X.........X............X...........X.", ".........X..X.....X.X.........X.X..X....X.........", "....X............X............X.............X.....", ".........X......X.......X....X...............X..X.", "........X..X.......X......X.............X........X", "..............X.......X...X............X..........", "...X...X.........X...X..............X............X", "...............X..........X......X...............X", "....X............X........X..............X........", ".......X...............X......X..............X...X", "....X....X...........X............X............X..", "...X.......X......X.....X...............X.........", "....X.......X...........X...........X...X.........", ".X.X.X...X............X......X.........X......X...", ".....X.........X.............X..............X.....", "....X..X...............X..X.............X.........", "......X..X.X.......X......X............X.X...X.X.."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1216;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> board = {"X..........X.X...X..............X...X.X..........X", "...X...............X.....X.X......X.............X.", "..............X...X..........X.........X.X..X.....", "X...X.X.....X.........X.......X.................X.", "........X.............X..........X...X........X...", "...X..X......X........X.......X....X.........X....", "..........X..............X............X.......X...", ".......X...........X...X...X............X.........", "X...X.............X.........X..X.......X..........", "....X..............X..............X..X.........X..", "......X..X......X....X......X..X.........X....X...", "............X.........X..............X............", "...X................X....X.X.................X....", ".........X......X..............X.....X...X........", "..X...........X..X.......X.........X..........X...", "...........X..X.......X.............X...........X.", ".X...............X............X...X.............X.", "........X...........X........X...............X....", "........X..............X.....X.......X............", "..X..X...X.........X......X.........X.........X...", ".......X..X....X.............X...............X....", ".......X.......X...X....X................X........", ".....X........X.........X.........X........X......", "......X................X....X....X.......X........", ".....X.X................X................X........", ".X....X.....X.......X.........X....X......X.......", "..........X........X...X.....X..........X.........", "....X...............X..X....X........X..X....X....", "...X.............X..X..........X.X.X............X.", "..X...X....X...........X...........X......X.X...X.", "...X.................X..............X.............", "....X..X................X...............X.........", "....X.......X.........X..........X......X.........", "X.X..X.....X.........X........X.....X..........X..", ".............X.......X...............X........X...", "X.............X................X.................X", "........X..X...........X.........X....X...........", ".....X............X............X................X.", "........X......X......X...........X.............X.", "...............X........X...............X......X..", ".......X.........X..............X..............X..", "........X............X...........X..........X..X.X", "....X...............X.............X..........X....", "..X.....X.........X..........X...........X........", "X............X.............X.....X................", "X....X..............X...........X...........X.....", ".........X................X................X.X....", ".X..........X.............X.......X.....X.........", ".......X......X.................X.............X...", "......X...............X........X.X................"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1781;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> board = {"........X.......X.........X.......X........X......", "...X........X.X.X.X..........X.........X.........X", "........X.......X.....X....X.......X....X.........", "X....X.....X.........X.........X..X.X......X......", "..X........X.....X..X.....X....X.......X.....X....", "..X...X..X...X.........X.........X..........X.....", "X.....X.........X......X..X....X.....X.........X..", ".....X..........X..........X........X..X..........", "X.......X.X....X........X..........X.........X....", ".....X......X.......X..........X..X...X......X...X", ".X.....X.....X......X.......X.....X.........X.....", "...X........X.....X.........X......X.....X......X.", "..X.........X..X.........X......X........X..X.....", "X.......X.X..........X.....X.......X..X....X.X....", ".X...X..X...X..X.........X..X.X.........X.........", "X........X....X......X.......X.......X.....X......", "...X...X.....X........X....X..........X....X.X....", ".X......X..........X........X.X.........X...X...X.", ".X.....X.X.......X........X..........X....X.....X.", "..X....X...X..........X..X........X.......X.X.X...", "..X.....X......X.....X...X........X.....X.......X.", ".X......X.....X........X.X.........X.X..........X.", ".......X..........X..........X.........X.........X", ".X.X.......X......X........X.....X......X..X......", "X..........X...X......X.X.....X.....X..X..........", "X.........X..X....X.......X....X........X......X.X", "........X....X........X......X..X.......X........X", "..X.....X..X..........X........X.......X..X.......", "X..X........X........X..........X..........X.....X", ".....X...X....X.........X..X...X.....X.........X..", ".....X.....X...X.........X....X...X..X.X.....X...X", "........X..........X.X..X......X.......X........X.", "X..........X..........X...X......X.........X......", "....X........X..........X....X.X....X...X.......X.", ".........X......X.X..X.......X.......X........X...", "X.......X....X..X...X........X.........X........X.", "....X..........X.....X.......X......X......X..X.X.", ".......X......X......X......X.......X.......X...X.", "........X...X.......X.X..X.........X.....X.......X", "........X....X....X....X........X....X..X.........", ".X...X..........X..........X..........X.........X.", "....X.....X.....X.......X..X.......X.....X.X.X....", "..X.........X..........X......X...X..X..........X.", ".......X.......X......X......X........X.........X.", "........X.......X...X.........X......X.......X....", "X..........X...X.X..........X......X.......X......", "...X...X......X.......X..........X...X....X....X..", "...X..........X..X........X.X.......X..X........X.", "........X....X......X........X........X.........X.", "...X.X..........X....X......X..X.........X...X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 366;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> board = {"X....X..X......X...X..X.X.X......X.....X.X.......X", "......X..X....X......X....X..X.X......X.......X...", "....X......X...X...X.....X.X.......X..X.X......X..", ".X.......X..X.......X.X......X.X.......X.....X...X", "....X....X...X..X.......X......X......X..X.X....X.", "...X....X....X.....X....X.X.X....X..X.......X.....", "..X.X......X..X..X.....X.X..X.......X.......X.X...", "...X..X.....X...X.....X.X...X.....X....X..X.......", "X.X....X.....X.......X..X.....X.....X...X......X..", "...X.....X...X.....X...X....X.X.....X.....X.......", "X....X.......X....X....X..X.......X...X.....X.....", "..X...X....X......X.......X.X.......X.X......X....", "..X.X...X.....X.X......X.......X..X..X..X......X..", "....X.X..X.X......X....X.X.X..X.......X......X....", ".X....X.......X....X..X....X....X......X.X.......X", ".X..X..X.....X.....X..X....X......X.......X...X..X", "...X..X..X......X......X.......X.X.......X......X.", "...X.....X.X...X..X.....X.......X.......X.......X.", "...X......X...X...X..X...X...X...X.......X.X......", ".X..X.X.......X.X...X.X.......X.X...X..X...X......", "X.....X.X......X.......X....X.......X......X...X..", "...X.....X.X.....X..X..X..X.....X.X.X...X..X......", ".X......X....X...X.......X..X.......X...X.......X.", "......X...X......X......X..X.......X...X....X..X..", "..X....X....X......X.......X.......X...X.X......X.", "......X.......X.......X......X.....X.......X.....X", ".X.X......X.X...X.....X.......X.......X...X.......", "X.X.X......X......X......X...X.......X......X..X..", ".....X.......X...X..X.....X....X...X.....X.X...X.X", "....X......X.......X....X.....X.......X.....X.....", ".X.......X...X....X..X......X..X..X......X.......X", "..X.X.....X.......X....X.......X.....X....X...X...", "X....X.X.X....X..X..X.X.X......X.......X....X.....", "..X.X......X.X.......X....X....X......X...X.X..X..", "....X.......X......X...X.....X.....X...X.....X....", "..X.......X.....X......X..X.....X.X.....X..X.....X", "...X...X.......X.X...X.X...X.X..X....X..X.X.....X.", ".....X...X.X....X......X....X.X.X.X.X.......X.X...", ".X..X.....X.......X..X.....X.X...X....X.......X...", "...X.....X......X.X...X.......X.X.X.......X.......", "X.....X...X....X...X.......X...X......X.X......X..", "....X.....X.X.X..X..X.....X....X.X.....X.X.......X", "...X.X.X....X......X......X......X.....X...X.X....", ".X.X......X....X....X......X....X...X......X......", ".X.....X....X......X.......X..X.X..X.......X......", "X.....X.......X.....X.....X.....X......X.......X..", "X....X.....X...X....X.....X.....X.X....X.X.X....X.", "X..X....X...X......X...X.X...X..X....X.X.X.......X", "....X...X.X....X...X.X.....X.....X....X...X.....X.", "......X.X.......X...X..X..X..X.......X..X.X..X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> board = {"........X...X.......X.........X....X..X..........X", ".........X.X.......X.......X.....X......X.......X.", "......X....X........X.X..X....X.X....X.........X..", "X......X....X.....X..X.........X....X..X.........X", "......X....X..........X........X.........X.......X", ".....X..X........X........X..X..X......X.X..X.....", "X........X...X.X.....X........X.X....X.X.......X..", "......X....X........X.....X.......X.......X.......", "..X.......X.X...X........X........X..........X....", ".X......X.........X...X.....X.....X.X.......X...X.", "X.......X....X...X.....X..........X..X.........X..", "......X...X....X..........X.........X.......X.....", "..X.......X......X.X...X..X.X.........X...X.....X.", "X.X..........X........X....X......X....X...X.X....", "X....X....X..X.....X.....X......X.......X........X", "...X......X....X...X....X..........X.....X...X....", "......X......X.....X.....X.X.......X........X.....", ".....X........X.......X.........X....X.....X......", ".X..X....X.....X.X....X.........X......X...X......", ".X.........X.X.........X..X.........X.....X...X...", ".X.....X......X.X..X...X...X..X..........X........", ".X...X..X....X...X..X..........X.....X.....X.X....", "......X.......X..........X.X........X..X........X.", ".X....X.......X.X........X........X..........X....", "...X..........X.......X....X.....X...X.....X......", "X..X....X.X...X..X.......X.........X...X.X........", "..X..X...X.....X.......X......X.X.....X.......X...", "......X...X..........X.......X.......X.....X..X...", "X...X.........X..X.....X.X.........X...X...X......", "...X....X......X...X....X........X.........X...X..", "...X....X.....X.....X.X..X......X...X........X....", "....X..........X....X.....X..........X........X...", "......X.....X.....X......X........X......X........", ".X.X..........X.....X.....X.......X...X.X..X...X..", "..X.......X.X........X......X.........X..X.X......", "....X.....X....X....X...X...X........X....X......X", ".......X.......X...X.X.X..........X.........X.....", "X...X......X..........X....X.........X........X...", "....X.X......X..X......X.X...X......X...X....X....", ".....X..X.......X..........X..........X..........X", ".....X...X.X.........X....X.........X.X.X.....X...", ".......X....X.X.......X..........X.......X..X.....", "X........X........X....X.....X........X..........X", ".X......X.........X.......X.........X..X......X.X.", ".......X.......X....X........X....X....X..........", "X........X.......X..X..........X...X........X.....", "....X.X......X......X...X......X......X....X....X.", "X.X.....X....X..X..X.........X........X......X....", "X..X..X.....X........X.....X...X........X...X.X...", "...X........X...X....X......X........X.......X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1977;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> board = {"X.....X.X....X...X...X...X..X..X.....X....X.....X.", "...X.....X.....X....X.X..X.X.....X....X....X..X...", ".X.....X.X....X.X..X...X..X...X.....X.X..X...X.X..", "..X.X...X.....X.....X..X..X...X..X.X....X.X.X.....", "X....X..X....X..X....X.X....X....X.X...X...X....X.", "X....X..X.....X.X..X.X.X.....X.....X.....X...X.X..", "X.X..X.....X.X....X....X...X..X.....X..X..X....X.X", "...X.X...X....X....X.X..X...X.....X...X.....X...X.", "....X....X.....X....X.X...X.X.....X....X.X...X.X..", "X..X.....X....X.....X..X....X....X.X....X....X.X..", "..X.....X..X.X...X.....X.X.X.....X.....X.....X.X..", ".X...X.X...X...X....X...X.....X..X....X.....X...X.", "....X..X..X....X....X.....X...X...X.X..X..X.X.X...", "..X..X.X....X..X.....X..X...X..X.....X.....X..X...", "..X.....X.X...X....X.X..X.X..X....X....X.....X..X.", ".X.X....X.....X..X...X....X....X....X...X..X.....X", "..X..X..X.X...X.X..X.....X..X...X..X..X...X..X.X..", "X...X.....X.X....X.X.X....X.X.....X..X...X.....X..", "..X..X.X.X...X.X.X....X..X.X.X....X.X.....X...X...", ".X....X....X...X.....X..X.X..X..X....X.....X.....X", "....X.....X....X.X.....X....X....X...X...X.....X..", "..X...X..X.....X....X....X...X..X.X....X.X..X...X.", "X.X.X....X.X.X.X..X....X..X.....X...X...X...X..X..", "..X...X..X....X.....X..X.X.....X.X..X.X.....X.....", "X.....X...X.X....X....X.X...X.....X.X..X.X...X...X", "..X.X..X..X.....X....X.X....X...X....X.X..X..X..X.", "...X....X....X...X.....X.....X....X....X..X.....X.", "X.X.....X....X...X.....X.X....X.....X...X....X..X.", "....X.X....X...X..X.....X.X.....X.....X...X....X.X", ".....X.X....X...X...X.....X..X.....X.....X.X.X...X", ".X..X.....X.....X..X...X...X.X.X.....X....X.....X.", "X..X..X....X....X.....X..X...X....X...X....X...X..", "...X..X.....X...X.....X....X...X.X.....X.X.....X..", ".X.....X....X..X....X.X...X.X....X.....X.X.X...X..", "...X..X.X.X..X..X.X....X..X.X.....X...X..X..X...X.", "...X...X...X.....X...X...X..X..X..X....X...X....X.", "....X.....X....X.X..X..X..X.....X.....X.X.X..X.X..", "..X....X..X.X.X.X...X.....X.X.X..X..X.X.....X.....", "X...X.X...X..X...X.X...X...X....X.....X....X....X.", ".X..X.....X.X..X..X....X...X..X...X..X..X...X..X..", "X.....X...X.X.X.X....X..X.....X.X...X.X...X.....X.", "X.X...X..X.X....X...X....X.X....X...X.X.X....X.X..", "...X..X...X....X...X...X.....X....X.....X.X..X....", "X...X..X....X.....X....X.....X..X....X.....X.X....", "X..X..X....X....X.X...X..X...X.....X...X....X.....", "X.....X....X....X.....X....X.....X.....X.X.X.....X", ".....X....X..X.X...X.X..X..X.X....X.X.....X..X.X..", "...X...X..X..X..X..X...X...X..X.....X...X.X....X.X", "..X.X.....X....X...X.....X.....X....X.....X.....X.", ".X.....X....X....X..X.....X.....X...X...X...X..X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> board = {"....X...X......X..X...........X.......X.....X.....", ".X...........X...X..........X..........X......X.X.", ".......X........X..........X............X......X.X", "............X....X..........X..........X..........", "X.........X...........X.X.......X...X.......X....X", "......X.....X..........X.X...X........X..........X", "....X.....X....X........X......X...........X......", "....X.X........X..X.X......X....X...X...........X.", ".....X............X.......X.......X.........X..X..", "........X.........X..........X...........X..X.....", ".....X...........X.X.X..........X.X...........X...", ".......X........X.......X.......X...........X.....", "....X....X........X.......X.....X.........X.....X.", "......X........X.X.......X.....X.........X...X...X", "........X..X..........X............X............X.", "..X.....X........X...X............X..X.........X..", "........X..X.X............X......X.........X......", "X..X...X.....X...X........X...X...X.........X.X...", ".....X....X......X......X......X.........X........", "...X.....X........X......X........X...X......X....", ".....X.....X.........X.X......X......X......X.....", "....X..........X...X........X............X....X.X.", "...X.......X............X............X............", "X............X...X.X........X.......X....X........", ".X....X..........X..........X.X......X.....X......", ".X......X.......X........X.....X........X.X....X..", ".........X..X.....X....X...........X.X......X.....", "...X.......X...X..X.........X..X........X....X....", "X.........X....X....X..X........X...X....X........", "..X............X....X...........X.X..X.....X......", "..X..........X..........X.X.........X.........X...", "..X.........X.....X......X....X......X.........X..", ".X..X............X...........X....X......X........", "...X.........X....X.......X......X..X.....X.....X.", "...........X......X.........X..........X........X.", "...........X...X.....X..X........X.....X..........", "X.X.......X....X..........X............X..........", "..X......X...X...X.........X.X.........X..........", ".X...X........X........X..........X.......X...X...", "...X..X...X............X....X..........X........X.", "...X.X..........X......X......X...X...X.....X..X..", ".X..X...X.......X.......X...........X.........X...", "........X.......X........X.......X......X.........", ".X....X........X.......X.......X..X.........X..X..", "......X.....X..........X.....X..X.........X.......", "X..........X...........X.....X..........X..X......", "....X............X...........X....X.....X........X", "........X.......X........X......X...X..........X..", ".......X.......X.....X..........X........X...X....", "..X............X...X...........X.......X.X........"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 735;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> board = {".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> board = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XX.X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> board = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXX.XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> board = {"X.X.X.X.X..X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.XX.X", ".XX.X.X.XX.X.XX.X.X.X.X.X.X.XX.X.X.X.X.X.X.XX..X.X", ".X.X.X.X.X.X.X.X.XX..X.X.X.X.X.X.X.XX.X.XXX..X.X.X", ".X.X.X.XX.X..X.X.X.X..X.X.X.X.X.X.X.XX.X.XX.X.X.X.", "XX.X.X.X.X.X.X.X..X.XXX.X.X.X.XX.X.X.X.X.X.X.X..X.", "..X.X.X.XX.X..X.X.X.X.X.X.X..X.X.X.X.X...X.X.X.X.X", ".X.X.X.X..XX.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.XX.X..X.X.XX.X.X.XX.X.X.X.XXX.X.X.X.X.X.X.X.X.", "XXX.X.X.X.X.X.X.X.X.X.XX.X.XX.X.X.X.X.XX.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.XX.XX.X.X.X..X.X.X..X.X.X.X.X", ".XX.X.X.XX.X.X.X..X.X.X.X.X.X.X..X.X.X.XX.X.X...X.", "X.X.X.X.X.XX.XX.X.X.X.X.X.X.X.X.X.X.XX.XX.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X..X.X.X.X.X.XX..X.", "XX.X.X..X.X.X.XX.X.X.X..X.X.XX.X.X.X.XX..X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X..XXX.X.X.XX.X.X..X.X.X.X.X.", "X.X.XX...X.X.X.X.X.X.X.X.X.X.X.X.XX..XX.X.X.X.X.X.", "X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X..X.X.X.X..X.X.X.X.X.X.X.X.X..X.X..X.X.X.X.X.X.X", ".X.X.X..X.X.X.X.X..X.X.X.X.X..X.X.X..X.X..X.X.X.X.", "X.X.X.X.X..X..X.X.X.X.X..X.X.X..X.X.X.X.X.X.X.X.X.", ".XX.X.XX.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.XX.X..XX", ".X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X..X.X.X.X.X.X.XX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.XX.X.X..X.XX.X.X.", "XX.X.X..X.X.X.XX.X..X..XX.X.X.X.X.X..X.X.X.X.X.X.X", ".X.X.X.X.X.X.X...XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.XXX.X..XXX.XX.X.X.X..X.X", ".X.X.X.X..X.X.X.X.X.X..X.X.X.X.X..X.X.X.XX.X.X.X..", "X.X.X.X.X.X.X.XX.X.XX.X.X.X..X.X.X.X.X.X.X..XXX..X", "..X.X.X..X.X.X.X.X...X.X.X.XX.X.X.X.XX.XX.X.XX.X.X", ".X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X..X.X.X.X...X.X.X", ".X..XX.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX", ".X.X.X.X.X.X.X.X.X.X.XX.X.X.X..X.X.XX.X.X.X.X.X.X.", "X.X..XX.X.XX.X.X.XX.X.X.XX.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X.X..X.X..X.X.X.X.X.X.X.X.X.X.XX..X.X..", "X.X.X.X..X.X.X.X.X.X.X.X.X.X..X.XX.X.X.X.X.X.X.X.X", ".XXX.X..X.X.X.X...X.X.X.XX.X.X..X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X..X.XX.X.X.X.X.X.X..X.X.X.X.X.X.X.X..X.", "X.X.XX.X.X.X.X.X.X.X.X.XX.X.X..X.X..X.X.X.X.X.X..X", ".X.XX.X.X.X.X.X.XX.X.X.X..X.X.X.X.X.X.X..X.XX.X.X.", "X.X.X.X.X.XX.X.X.X.XX.X.XX.X.X.X.X.X.X.X.X.XX.X.X.", "X.X.X.X.X.X.X.XX.X.X.X.X.X.XX.X.XX..X.X.X.X.XX.X.X", ".XX.X.X.XX.X.X.X.X..X.X.X.X.X.XX..X..X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X..X.X..X.X.X.X.", "X.X.X.X.X.X..X.X.X.X.X.X.X.X.XX.X.XX..X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X..XX.XX.X.X.XX.X.", "X.X.X..X.X.X.XX.XX.X.X..X.X.X.X.X.X.X.XX.X.X.X.X..", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XXX.X..X.X.X.X.X.X.X", ".X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X..X.X.XX.X..X.X.X.X.X.X..X.X..X..X.XX.X.X", ".X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.XX.X.X.X.X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 248;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> board = {".X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X..XX.X.X.X.", "X.X.X.XX.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.XX.X.X.X.", "X.X.X.XX.X.XXX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.", "X.X.X.X.X.XXX.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.XX.X.X.X.XX.X.XX.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.XX.X.X..", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", "X..X.X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.XX..X.X.X.XX.X.X.X.X.X.", "XX.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X", ".X.X.X.X.XX.X.X.X.X.X.X.XX.X.X.XX.X.X.X.X.X.X.X.X.", "X.X.XX.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.XX.X.X", ".X.X.XX.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.XX.X.X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X..X.X.X.X.X.", "X.X.X.X..X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X..X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X..X.X.X.X.X..X.X.X.X.X..X.X.XX.X.X.X.", "X.X..X.X.X.XXX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.XX.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX..X.X.X.", "X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.XXX.X.X.X..X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> board = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X.", "X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X.X", ".X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X..X.XX.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X", ".X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.XX.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X..X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.XX.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> board = {"X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X..X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 214;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> board = {"X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> board = {"...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> board = {"...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2499;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> board = {"X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> board = {"X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 786;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> board = {"..........XXXXXXXXXXXXXXX.....X.........XXXXXXXXX.", "..........XXXXXXXXXXXXXXXXXXXXX...XXXXX.......XXXX", "XXXXXXXXXXXXX..XX.......XXX.....XXXXXXXXXXXXX.....", "....XXXXXXXXXXXX...XXXXXXXX.XXXXXXXXXXXXXXXXX.....", ".......XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "...............XXXXXXX.XXX........XXX...........XX", "XXX.......................XXXXXXXXXXXXXXXXXXXXX...", "......XXXXXXXXXXX.XXXXXXX..X...................XXX", "..................................................", "...................XXXXXXXXXXXXXX........XXXXXX...", "..X...X.........XXXXXXXXX....XXXXXXXXXXXXXXXXX....", ".......XXXXXXXXXXXXXXXXXXXXXXXXXXXX.....XXXX......", "....................XXX...........................", "X.........XXXXXXXXXXX.........XXXXXXXXXXXXXXXXXXXX", "XXX.........XXXXXXXXXXXXXXXXXXXXXXXX.....XXXXXXXXX", "XX.XXXXXXXXXXXXXXX....XXXXXXXXXXXXXXXXX....XXX....", "...............................................XXX", "XX...XX.........XXXXXXXX........XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX....XXXXXX...........XX........XX.", "....................................X..........XXX", "....XXXX....XXXXXX.XXXXXXXXXXX.XXXXXXXXXXXXXXXXXXX", "X.......XXXX..............XXXX.XXXXX.......XXXXX..", "............XXXXXXXXXX............................", "........................................XXXXXX....", "............XXXXXXX.XXXXXXXX......XXXXXXXXXXX.....", "....XXXXXXXX..........XXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXX........X.XXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX.X", "XX..XXXXXXXXXX......................XXX.XXXXX.....", "..............XXX............XXXXXXXX........XXX.X", "X........XXXXXX..XXXXXXXXXX.....XXX....X.....XX...", ".........XXXXXXXX...................XXX...........", "..XXXXXX..XXXXXXXX.............XXXXXXXX..XXXXXXXXX", "XX.................XXXXXXXXXXXXXXX..........X.....", "X.................XXXXXXXXXXXXXXX...XXXXXXXXX.....", "...XXX..XXXXXXXXXXXX.......................XX....X", "XXXXXXXXXXXXX...............XXXXXXXXXXXX..........", "........................XXXXXXXXXXXXXXXX..........", "................XXXX.........XXXXXXXXXXXXXXXXXXXXX", "XXX..XXXXXXXXXXXXXXX.............XXXXXXXXXXXX.....", "...XXX...........X.XXXXXXXXXXXXXX..........XXXXXXX", "XXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "...X....XXX...........XXXXXXXXXXXX....XXXX........", ".XXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX......XXX........", "..............XXX.....................X.X.........", "XXXXXXXXXXXXXXXXX....XXXXXXXXXXXXXXXXXXXXXXXX...XX", "XXXXXXXX..........................................", "....XXXXXXXXXX................................XXXX", "XXXX................XXXXXXXXXXXXXXXXXXX.XXXXXXXXXX", "XX....................XXXXXXXX..XXXXXXX......XXXXX", "XXXXXXXXXXXXXXXXX................................."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 397;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> board = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXX.....XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXX.....................XXXXXX", "XXXX...XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "................................................XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXX.......................", "......................................XXXXX.XXXXXX", "XXXXXXXXXXXX.............XXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX....XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXX....................XX..............", ".....................XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXX.............................................", "..................................................", "................X................XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXX....XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXX........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXX...........................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXX....................................", "....XXXXXXXXXXXXXXXXXX...........XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX........................", "..........................XXXXXXXXXXXXXXXXXXXXXXXX", "XXX.........................XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXX.....XXXXXXXXXXXXXXXXXXXXXXXXXX", "XX................................................", "..................................................", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..........", "..........................XXXXXXXX................", "........XXXXXXXXXXXXXXXXXXXXXXXX..................", "..................................................", ".................................XXXXXXXXXXX......", "..................................................", "...XXXXXXXXX..................XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXX.............................XXXXXXX", "XXXXXXXXXXXXX.....................................", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX............", "....................................XXXXXXXXXXX...", "............XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXX..............................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..........", "..........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.......", "..................................................", ".......XXXXXXXXXXXXXXXXXXXXXX.....X...............", "..................XXXXXXXXXXXXXXXXXXXXXXXX......XX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1733;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> board = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXX..............................................", "..................................................", "..................................................", "..................................................", "...........................................XXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...................", "...................................XXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.......", "..................................................", "..................................................", ".............................XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...................", "..................................................", "..................................................", "...XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...............", "..................................................", "..................................................", "..........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXX.........................", "............XXXXXXXXXXXXXXXXXXX...................", "......................XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..............", "..................................................", "..................................................", ".............XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "............................................XXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXX...............................", "............XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXX..............................................", "........................XXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX................", "..................................................", ".............................................XXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXX.......................", "...................XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 343;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> board = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXX..........................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXX..............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> board = {"......XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..........", "..................................................", ".......XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXX...........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..........................................XXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 557;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> board = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 933;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> board = {"X...X.X......X..X.X", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> board = {"X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> board = {"X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.XXX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.XXX.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..XX.X.X.X.", "X.X.X.X.X.X.XXXXX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XXXXXXX.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XXXXXXX.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XXXXXXX.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XXXXXXX.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XXXXXXX.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XXXXXXX.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> board = {"XX..X..XX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> board = {"XX........XX..XX........XX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> board = {"XXX....XX...XX....XXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> board = {"X..X..X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> board = {"X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> board = {"X.X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> board = {"X..XXX..XXX...XXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> board = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> board = {"X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> board = {"X..XX..X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> board = {"X.XX.XX.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> board = {"X..X.XX...X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> board = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX......", "X...XX...XXXXXXXXX.....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> board = {"X.XXXXXXX...XXX...XX.X...X.XXX.X...X.....X...XXX..", "X..XXX...XX.XX.X.XX.XX.X..XX...X....XXX....X..X..X", "XXXX..XX.X.X...XXX.X.XXX...X.XX...X........XX.XX..", ".X.X...XX.XXXX.XX.XXX.XXX.XX....X.X...X....X..X.XX", ".XXXXX....X.X..XX.X.....X.X..XX..XXX.X.X.X.X.XXX.X", ".XX....X.XXX.X...X..XX.X...XX..XXX.X.X....X..X.X.X", ".......XXXX.X.XXXXX...XXXXXX..X...XXXX.XX...X..XX.", "...XXXX.X.XX.X.XX....XXX..XXXX........XX...XX..X..", "X.X..XXX..XXXXXXXX..X.XX.XX.X.XX..X..X.XX..XXXXXXX", "..XXX..XX..X.XX..XX...X.XX..X.XXX.XXX.X.XXX...XX.X", "XX.X.XXX..X.X.XX.X....XX..XXX.X..X...X...XX..XXX.X", "X..XXXX.XX.XX...XXXXX...XXX.X...XX.XX...X.X..XX...", ".XX.....X..X.X..XXX..X..XXXXX...XX.XX...X....X....", ".X..X.XXX.XX..X..X.......XXXX...XX.X..X....XX.X.X.", "XXXX.X.X.X..X.X.X.....XX.XX.X.....XXX.X...XXXXX.X.", "XX..X....X..X..XX..XX.X.XXX.XXXX.X.XX.X..X...X.XX.", "X.X..XX.X.....X.X.X.XXX..X.X...X..XX......XX.XXXXX", "X........X.X.X...X.XXX.XXXXX..X.X...X.X.X..X.X.X.X", "XXX.XXXX.X.X.XXXX...XXX..XXX..XX..XX..XX.XXXX.....", "XX.X.XXXX.XXXX.XX...X...X.X..X.X....XXX.XX.XXXX..X", "..X..X.X.XX...X....X.XXXX.X..XXXX...XXX...XX.XX.XX", "XXXXXX..XXX..X..X..X....X..X..X.XXX.....XX..X..X.X", "XX.X..X..XX..XXXX..X.....X.X..XX.XXXXXX.X.XXX...X.", ".....X..XXXXXXX.....XX.XX.XX..XXXXXX.X.X.XX..X....", "XXXX.XX...XX.....X.....XXX.XXX...XXX...XXX..X..XXX", "...X.XXXXXX.XXXX...X..X.XX.....XXXX.X..X..X......X", "X..XX.X..XXXXXX.XXXXXXX..........XXX..XXXXXXX.X.X.", "X...XX..X.X.X.X.XX.XX...XX.XXXXX.X.X.X.......X..X.", "X.XXX....X..XX..X.XXX...XXXXX.X.X.........X.X.XX..", "XXX..X.X.X.XXXXXX.X.XX...XXX.X..X.XX.XX.X......XX.", ".XXX.X.X.X..X.XXX..X..XX..XX.X..XXX.X..X.XXXXX...X", "XXX.XXXX.X.....X.XX..X..X.XX.X.X.X..XXX...X..XXX..", "XXX.XXXX.X..XX..XX.XX...X.XX...X..XXX...X.....X...", "...X....X.X.X..X.XX.....XX....XX..X....X.X.XXX.X..", "XX..XXX....X.X.XX.X...X..X....X..X...XXX...X...XX.", ".X.X..X.X.XXXX.X.XXX.X.XX.X.XX........XX.XXX.X..X.", "XXX.X.XX.X.XXX.XX....X...XXX.X..X.X.XXX...X.....X.", "...XXXX.XXXX.X...XXX..XX...X.....X..X.XXXXX.XX....", "X...X..XX.X....XXX.XXXXX.XXX...X...XXX.X.XX...X...", ".X..X..XX..XXXX.....XXX....XX.XXXXX..XX.XX...X....", ".X...X....X...XXX.X.XX.X.X..XXXX.XX.X.XXX.X..XXXX.", ".XX...X.XXX.XX.X.XXXX..X..X...X.XX..XXX...XX...XXX", "X.X..X.X.....XX..X.X...X.X.X.X...XX.XX.XX.XXXXX...", "..X..XX....X...X..XX...X...X....X.X.XXX....XXX.XX.", "X..X...X...X.X.X.X...X....X.X.X.X.XX...XX.XXXX....", "X.X..X....X..X...X.X....X.X.XX.XXX.X.X....XXX.X.X.", "XXXX.X....X.X..XX.....X..XXXX.XXX.XX.X..XXXXX..XXX", "...XXX..XX.X.X...XXX...X..X.XXXX.XX..X.X..X..X..XX", "XXXXXXX.X.XX..X.XX..XXX...X.XX.X.X.X...XX..X....X.", "X.X.XXX....XXX.X..........XXX..X.X.X...XX.XXX.XX.X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1333;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> board = {"X..X.X..X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> board = {"..XX.X......XX...X..X.X...X..X.XXXXX..X.X..X..X.X.", "..XXXXX.X.....XX......XXXX.....XXX..XX.....X.XXXXX", "XX...........XX..XXXXX.X.....XX....XX...X...XXX.X.", "....X.X...XXX..X.X.XXX..XX..X..X..XX.........XX.X.", "XXX.X..X..XX.X..XXXX..X.X.XXXXX..XX.X.X.XXXXXXX...", ".X..X..X..X.X..X...X..X.XX.XX...XXXXX...X...X....X", ".........X.X..X.XXXXX..XX...XXX..XXX..XXXXXX....X.", "X.XX....X.XXXX.X........X.XXX.X.X.X...XXXXXXXX.X..", ".XXXX.XX.X.XX..X...XXXX...XX.X.X...X....XX.X.X....", "XXXXX..X.X.X..XXX.X..XXX.XXXXX.X..X...X.X..XXXXX.X", "....X..XXX.....XXXX.X..XX.XX....X.XX..XX..X.X..X.X", ".X.XXXXXXX..X.X.X.XXX..X.X..X.XXX...X..XX.X....XX.", "X..X.XX....XX.XX.X..XXXXX.XX...XXXXXXXX.X.XX..X.XX", "XX..X....X.X...X..XXXXX...X..XX..XX...XXXXX.X....X", "X.XX..X..X.XX.X...X..XXX.XXX..XXX.X..XXX.X.XXXX..X", ".XX.X.X.......XXX.X.X.XXX.XX.XX.XXXXXXXXX.....XXXX", "XXXXXX.XX..XXX..XX..X...XX.XX.XXX.X.X.X.X..X.XX.X.", "X.XX.X..X..X..X.......XX.X.XXX.XXXX........X...XX.", "X..XX.XX.XX.X.X.X.X........XX.X..X.XX.X.X.X.XXX.XX", "XX..XXX..XXX.....XX.X.X.X..X....X.X..XX.XXX.XXXX..", ".X.X...XXX.XXXX..X..XX.X.X..XX.XXX...X.....XX...X.", "XX..XXX.X.XX.XXX.XX...X.....X.X.XX..X....X.X...X..", "X...X..X..XXXX.XXX..XX.XX...XX..X....XX..X...X...X", "XXX.XX...X...XX.XX.X..X.XXX....XXXXXX....X.XX.....", "X..X..X..X.X..X.XXX....XXXXX.X..XX.XXX.XX..X...X.X", "XXX.X...XX.X.X.X...XXX...X.XX....X.XXXXXXX.X.....X", "..XX..XXX..XXX...XXX.X.X.XXX..XXXX...XXXX.XXX....X", "XXX.X.X.X.XX....XXX..X.X..XX.XX...X....XX.....X...", ".........X...X..XXX.......XX.X.X.XX.XX.XXX.X.X..XX", ".XX..X..X..XX..XX.X..XX....XXXX.XX.XXX...X.X.XX..X", "XX.XXXX.XXX.......X.XXXX.XX..X.........X.X..XX.X.X", "XX.XXXX..X....X.X....X....XX...X..XXXX...XX..X.XX.", "..XXX.X..XX.......XXX.XX.X.XXXX.X.X.X..X...X....X.", ".......XX.XXXXXXXX..XXX.XX.XX..X.X.XX..X.XX.X.....", ".X.X..XX.....X..X..X..XXXX.X...X..X.X..X.X.XXXXXXX", "X....XXXXX.X.X....XX.X..X...X...XXX.X.XXX...X...X.", "X.X...XXX.XXXXXX.X.XXX......XXX.XXXX.XXX.XXX.X....", ".X.X.X.XXXXX.XXX.X...XX..X....XXX.XXXX.XXXX..XXX..", "XX....XX...XXXXXXX.XX...XXXX..XX.X......X..XXXXX..", "X.X..X..XXX.XXXX.XX...XX.XXX.XX.X.XX......XXXX.X..", "...XXXXXXX.XXXX.XX.XX.....XX.XX......X.....X.X.XX.", ".X.XX.XXX.XX....XX.X.X....XX.XXXX..XX.X.X.XX.XXXX.", ".X..X..XX...X.XXX.X...X.........X...XX....X...XX..", "XXXX.XX..X..X.X.XXXX..XXXXX.XX.X.XXX..XX..XX..X.X.", "X.XX.XX.X..XX....XX.X.X..X..X..XXXX.X.XXX..X.XX.XX", ".XX...X....XX.XXXXX..X.X.X.XXX..XX.X.X...X.X..X.XX", "XXXX.XXXX..XX....X..X.X.XXXX....XX..XXXXX.X....X..", ".XX..X...X.X.XX..X.XX..XX.....XX..XX.X.XX.X.X..X.X", "..XXX.X.X..X.XX.X......X......XX.XX..X.XXXX..XXX..", "..XX...X.XXX...X.X.XXXX...X.....XX.XXX..X..XX.X.XX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1396;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> board = {"XX..XX.X.X..X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> board = {"X...XX...X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> board = {"X....X...X....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> board = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX......", "X...XX...XXXXXXXXX.....X", "XXXXXXXXXXXXXXXX....XXXXXXXXXX.....XXXXXXXXXXX", "XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXXXXXXXXXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> board = {"XXX..X..XX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> board = {"X....X..X....X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> board = {"X.XX....XX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> board = {"X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> board = {"XX....XX...X.......X"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> board = {"XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX.", "XXXXXXXXXX..........XXXXXXXXXX..........XXXXXXXXX."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> board = {"XXXX", "XXXX", "X.X.XX", "XXXX", "XXXX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<string> board = {".X.X..X."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<string> board = {".XX.......XX"};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<string> board = {"X..........................XXXXXX.................", ".......................XXXX.......................", "..................................................", ".........XXXX..........................XXXXXX.....", "......................................X...........", "................................XXXXXX............", ".............X....................................", "..............XXXX................................", "..................X...............................", "...................X..............................", "....................XXXX..........................", "........................XX........................", "..........................XXXXX...................", "...............................XX.................", "X.................................................", ".XXXX......................XXXX...................", ".....X............................................", "......X....XXX........XXXXX.......................", "...........................X......................", "..............X.............XXXXXX................", ".......XXXX.......................................", ".................X................XXXXX...........", ".......................................X..........", "................X.................................", "...........XXXX........XXXXXX.....................", ".............................X....................", "..............XXX.................................", "..................................................", "..............................XXXXX...............", ".................X................................", "..................X...............................", "...................X..........XXXXX...............", "..................................................", "....................XXX............XXXXXX.........", ".......................X..........................", "........................X.........................", ".........................X........................", "..........................X.......................", "XXXXXXX....................XXX....................", "..............................XX..................", ".......XXXXXXXX.................X.................", "..................................................", ".................................X................", "XXXX..............................X...............", "....XXXX.......XXXXXX..............X..............", "....................................X.............", "......................XXXXX.......................", "...........................XXXXXX.............XX.."};
    LargestGap* pObj = new LargestGap();
    clock_t start = clock();
    int result = pObj->getLargest(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1314;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390224&rd=12174&pm=8508
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
 
#define ALL(t) t.begin(),t.end()
#define FOR(i,n) for (int i=0; i<(int)(n); i++)
typedef vector<int> vi;
 
struct LargestGap {
  int getLargest(vector <string> board) {
    string s=accumulate(board.begin(),board.end(),string(""));
    vi best;
    int where=-1;
    FOR(i,s.size())if(s[i]=='X'){
      string s2=s.substr(i)+s.substr(0,i)+"X";
      vi cur;
      int len=0;
      FOR(j,s2.size())if(s2[j]=='.')len++;else if(len){cur.push_back(len);len=0;}
      if(cur.size()>1)cur[0]+=cur.back(),cur.pop_back();
      sort(cur.begin(),cur.end(),greater<int>());
      if(cur>best)best=cur,where=i;
    }
    return where; 
  }
};
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/