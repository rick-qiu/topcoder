/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12500
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

class TheTilesDivOne {
public:
    int find(vector<string> board);
};

int TheTilesDivOne::find(vector<string> board) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"X.X", "...", "X.X"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"...", "...", "..."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"......X.X.XXX.X.XX."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"X.....XXX.XX..XXXXXXXXX...X.XX.XX....X", ".XXXX..X..XXXXXXXX....XX.X.X.X.....XXX", "....XX....X.XX..X.X...XX.X..XXXXXXX..X", "XX.XXXXX.X.X..X..XX.XXX..XX...XXX.X..."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"XX..XXXXXXXXX.XXX.XXX...", "...X.XXXXXX.X..X...XX.XX", "X.X.X.X..X.X.XX.X.X...X.", "..X.XXXX..XXX...XX....X."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
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
    vector<string> board = {"...", "XX.", "..X"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
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
    vector<string> board = {".", "X"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
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
    vector<string> board = {"..X.XX.X.XX..XXXXXXXX.XX.XX...X..X.XX.XX.X.X.X.", "....X.XX...XXXXX.X.XX.X.X.XXXXXX..XX......XX.X.", ".......X.XX.X...XX.X.XX..XX..X...X.......XXXXX.", ".....X.XXXXX.X.XXXXXXXX...XX....XX....XX.XX.XXX"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {".X.XX..XXX.X.", "X.XXX.X..XXXX"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"..XX.XXXXX..X...XX.X.XX..XX.X.X....", ".XX..X..XX.XX.XX.XXX.XX.X..XXXX.X.X", "XX.XX...XXXX...X..X....XXXXX..XXX.X", "..XXX..X........X.........XXXX.X.XX"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
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
    vector<string> board = {".X...X.X.X.X...X...X.......X.X.X.X.....X...", "X...X.........X.X.X...............X.X...X..", "...X.......X...X.....X...X...X.X.....X...X.", "X.X.X.X...X...X.....X.X...............X...X"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
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
    vector<string> board = {".X.X.X.......X.X.X...X.......X.X..........", "X.......X.X.X...X...X...X.......X.X.X.....", ".X.X.X.X.X.X.X.X.X.....X.....X.....X.X...X", "X...X.X...X.X.X.X.X.X.X...X.X.X...X.X.X.X."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"...X.....X...X.X.X.....X...X...X.X...X.X.X.X..", "X...X.X.X.X.X.X.....X.X...X.......X.X.X...X...", "...X...X...................X.X.X.X.X...X......", "......X.X.X...X.....X.X.............X.X.X.X..."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {".............X.............X.X.....X.....X...", "X.X.....X.X.....X.......X.X...X.X.X.X.X.X.X..", ".X...X.X.................X.X...........X.X...", "X.X.X.X.....X.X.....X.....X.....X.X.X.....X.."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {".X.....X.X...X.X.X.....X.....X.......X...X.X", "X.X.........X.X...X.X...X.......X.X.X.X...X.", ".X...X...X.............X.....X.X.....X...X..", "........X...X.X.X.X.X.X.X...X.X.X...X.X.X.X."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {".X...X.X.X...X.X.X.X.....X...X.X.X.......", "....X.....X.....X.....X.....X.....X.X.X..", ".X.X.......X...X...X.X.X.X.X...X.....X.X.", "..X.....X.X...X.X.X...X.X...X.X...X.X.X.X"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {".X...X.X.X.X.X...X.............X.X.X...X.X.X.X", "......X.X.X.X...X.X...X...X.....X.X...X.X.X.X.", ".X.X.X.......X...X.X...X.X...........X.....X..", "X.X.X.........X.X...X...X.X...X...X...X.X...X."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {".X.X.X.X.X.X.X.X...X.X.X...X...X.X...X.....X", "X...X.....X...............X.X.......X...X...", "...X...X...X.X...X...X.X...X.......X.X.X.X..", "X.X...X.X...X.X.....X...X.X.X.X.X.X.X...X..."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"...X.X.X.....X...X...X.X...X.X.X.X.....X..", "....X.X...X...X.X.X.......X.X.X.....X.X.X.", "...X...X.....X...X.....X...X.....X.....X..", "..X.....X.X.X.X.......X.X.....X.......X.X."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {".X.....X.X...X.......X.X.........X.X.....X.X.X", "..X...X.X.X...X.X.....X...X.....X.X.X...X.....", ".X.......X.X...X.X...............X.....X.X.X..", "..X.X.X.X...X.....X...X.X.X.X.X...X.X...X.X..."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"...............................................", "...............................................", "...............................................", "..............................................."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"..............................................", "..............................................", "..............................................", ".............................................."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"XX...X.X.XXX..XX..XX.....X.X.X.XXX.X...X...XX.", "X.X.X.X.X.......X.X.X...X...X.XXXX..X.X...X.X.", "...X.X...X.X...XX.XX...X.X..X..X...XXXXX.X.X..", "X....X..X.XX.XX.X.X.X.....X.XX..X.X.XX...XX.X."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {".X.X.X..XX.......X.X...........X.X...XX...XX.", ".XX..X............XXX.......X.XXX.X.X.XXX.XXX", "X....X.....X....XX.X...X.X..X..X...XX...X..X.", "....XXX.....X...X.X...X.X.X..X.XX...X.X.X...."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
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
    vector<string> board = {"X..X..XX.X.X.X.X.X.XX.X..X.XXX...XX..X...X.X...", "....X.....X.XXX.X.X.X.X.X...X...X...X.X.......X", "XX.X.X.XXX..XX..X.X..X.X..X..X...XX..X.X.XX...."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"..X.X..X.X.X.X...XX....X...X.X.X...X.......X", "X.X.X..X..X.....XX..X.X....XX.X...X.XXXX....", ".....X.XXXXXX..X......X...XXX..X.........X..", "..XXX...........X.X...XXXXXXX.....XXXX....XX"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {".XXX.X..X.........XX.X.....X........X...XX..", "..XX....X..XX...XX.XXXXX.XX...X.X...XX..XX.X", "..XX.......X.XXX.X..XX.XXX...X..XX.X...X.X.X", "..XX.XX.X.X..X.XX...XX....X.X.....X.X..XXX.."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {".X...X.XXX...X.X.X.X.X.X....XX.X.X.X...XXX.X..", "..X..XX.X.X......XXX..X.X...X.....XXX..XXX....", "XX...XX.XXXX...XX..X.X.X...X.X.XXX.....X....XX"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {".X.XX..X...X.XX..X...XX.X....XXX.XX....X.XXXX", "X.X.X.X..X.XX..X....XX....X.X.X.X...X.X......", "XXXX....X..X.X.X.X...X.X.X.X.XXX.....XXX...X."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {".X...X.X.XXX..XX..XX.......X.X.X.X.....X...X...", ".....X........................X.X........X.....", "...X...X.....X...X...X.X.....X...X.XXX.X.X...X.", "..X.....X.X...............X...XX..X...X..X....X"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {".X...X.......X.X...........X.X...X.....X...X...", "............X.X.......X.X...X...X.X.X.......X..", "...X.....X.X...X.......X....X......X.....XXX...", "......X.....X...X..X.X....X.X.X.........X...X.."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {".X.X.X.X..X..X.XX....X.......X.X.......X.....X.", "......X.X...........................X.X...X....", ".X..X.X..X.X..........X..X...XX........X.X...X.", "........X........................X....X.....X.."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {".X...X.X.....X.X.....X.......X.X..X..X.X.X.X.X.", "....X...X.X.................XXX...........X.X..", ".X.X.X.X.....X.X.....X.....X.....X.X.X.....X...", "..............X...X......X............X..X..X.."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"...X.X...X...X..XX.X.......X.X.X..X..X...X...X.", "..X.............XX....X.X..X..X.........X......", ".X.X..XXX..XXX.X.X.X.X..............XX...X.XXX.", "......X.......X..X..X.X...........X.....X.....X"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"X.X......X.X.X.......X...X.X...X.X........X..X.", "....X...X.......X.....X.X...X.....X...........X", ".X.X..XX.X.X.X.X.X.X.X.X.....X.X...X.....X...X.", "....X..........XX...X.X..........XX...X...X...."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"...X...X...X.X...X...X.....X.......X.X.X.X.....", "..........X.X.X...X.......X.X.....X...X.......X", ".X.X.....X...X...X.X...X.X.X.X..X..X...X...X.X.", "X.............X.......X....X..X.....X......X..."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {".X.....X...X.....X.....X.......X.X.........X...", "....................X...............X.......X.X", ".........X.X.....X...X.X........XX...X.X.X.X...", "........X.......X.............X.X...X......X..."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
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
    vector<string> board = {"..X..X.....X.X.X...X.X.X.X.......X.X.X...XXX.X.", ".....X..........X...................X..........", "...X.X..X....X.X.X...X.....X.X.X............XX.", "......X.........X.X.................X.....X...."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {".....X.X.X...........X...............X.........", "..X...X....X....X.X...X.....................XXX", ".....X.....X.X.....X.X.X.X.......X..X...X....X.", "..X.................X...................X......"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"XX..XXXXXXX.X.XX", "..XX.......X.X.X", "XXX.X.X....XX.X.", "....X....X.X.X.."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
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
    vector<string> board = {"X...X...X.XXXX..X.X...X.X...X..X...XX.", "...X...X...X.X.....X...X.XXX.X.X...X..", ".X..X.XX.XX.X.X.X.....X.XX..XXX.XX...X", "..X....X.X.X...X.......X.X...........X"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"...XX.X.XX.", ".X...X...X.", "X.....XXXXX", "........XX."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"...XXXXXX.X...XX....XX....XX.XX.XXX...X.XX..X.X", ".X.X.XXX.X...X.X.X...X.XXX.X......XX.X.X...X...", ".X......X..X..XX..X.X...XX..X.X..XX.X.X.X.X.X..", "...X.X...X..X....X.X.X...X.XX..X.X.........X.X."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {"X.X.X.X.X.X.X.XXX.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "X.X.X.X.X.X.X.X.XXX.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "......X..............................", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "....X.X.....X.......X.X.X.......X...."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"XX..XXXXXXX.X.XXX.XXX.....X..XX.XXX.X", "XXX.X.XXXXXXXXXXXXXXXXXXXXXXXXX.XXX.X", "X.XXXX..X.X...XXX...X.XX...XX...XXX.X", "XXX.XXXXXXXXXXXXXXXXXXX.XXXXX.X.X.XXX"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"XX...X.X.XXX..XX..XX...X.X.X.X.XXX.X...X...", "XX.XX....X....X.X.X..XXX....X.X...X.X.XXX..", "..XX...X.X.X...X.X...XX.XX...X.X..X..X...XX", "XXX.X.X.X.X...X.X.X.X.X.X.X..........XX...X", "XX.X.X.XX.X....X.X.X..XX...X...X.X.........", "..X.X...XX...XX..XX..XX...........X.X......", ".X.X.X.X.X.X.X.XXXX....X.....X....XX.X...X.", "X..X..X...XX...X..X.....XXX...X.X.X.X.X...X", ".X.X..X.XX.X.X.X.X.....XX..X..XX.X.X.X.X.X.", "X.XX..X.XXX...XX..X...X.X.......X.....X.XXX", ".X.X.X.X.X...X.X.X...X.X.....X.XXX.X.X.XXX.", ".XX..X.X..X.X..X..X...XX..X.X.XX........X.X", ".XXX...X.X...X.X......X.X..X..XX......XX.X.", "X..X..X.....XX..X.X....XX.X...X.X.XX..X.X.X", ".XXX.X.XXX.X.X.X...X...X.X...X.....X.......", "XXX...........X.X...XXXXXXX.X...XXXX....XX.", "...XX.X..X.X.X.....X..X..X.....X.X...X.X.X.", "....XX....X..XX...XX.XXXXX.XX...X.X...XXX.X", "X.XX.X.X.....XXX.XX.X..X...X...X...X.......", ".X....XX.XX.X.X..X.XX...XX....X.X...X.X.X..", "XXX..XXXXX.XXXXX.X....XX.X.X..XX...X.XXX..X", "X.X.XXX.....X..XX.X.X.......XX..X.X...X....", ".XXX..XX.....X...X.X.XXX...X.X..X..X.X...XX", "..XXX.X.XXX...XX...XX.X...X.X..XX.X...XXX.X", "...XXX...X.X...XXX.X.XX..X...X.X.X.X.X...X.", "...X....XX..X.X.X...X.X.X.X...X..XX.....X.X", "XX.....X.XX......XXX.XX.X...X..X.XXXX......", "XX..X.X...X.X.X.....XX..X.XX..X...X..X....X", "....XX.X.X.X...XXX.X.X.....XXX.X.X.XXX.X.X.", "X.X.XXX.X.X...X.X.X..XXX..X.X...XX.X..X...X", ".X...XXX...X.X...X...XXXXX.X.X...X.X.......", "X...X.X.X.XX..X..XXXX...XXXXXX..X.XXX.X...X", ".X.X.....X.XXX.X..XX.X.X.XXX.XX.XXXX.XXX.X.", "XXXXX.XXX...XXX..XX.X.X.X.X.X.X.XXX.XX..X..", ".X...X.X.X.X...........X..X.XX.X.X..X..X...", "..XXX.X..X..X...X..X..X..XXX....X...X.X.X..", "...X.XXX.X..X..X.X..X..X...X.....X.XX..XX.X", "X.....X.X...X....X..X.XXXX.X....X.X.....X.X", ".X.X...X....XX...X.X.X.X...X.X...X.X.XX..X.", "X.X.X.X.X.....X.X...X.X....X.X...X.X..X.X..", ".X.X.X...X.X.XXX....XX.X.XXX...XXXXXX.X..XX", "XX..X.....X.X.X.X.........X...X.X.......XX.", ".X.XX.X....X.X.X...XXX...X.X.X......X.X...X", "X.X..X..X.X.X.X.X.XXX...........X.X...XXXXX", ".X.X...X.X.X.XXX.X...X.......X.......X.X...", ".XX.........X.X...X.X..X.X..X.XXXXX.......X", "....X........XXX..X..XX....XXX..X..X.X.X.X."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 154;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {".X..XX.X.X.X.X.XXX.X...X.X.X.....X.X.XX..X.", "X.X.X.X...X.X..XX.....X.X.X...X.X.XXX.X....", ".X.XX...X.....XX.X...XX....X.X...X.X...XX..", "..XXX.XXX...XX.XXXXX......X...X.XXX..XX.X.X", "XX.X...X...XXX.X...X....X..X..XX.X.X..XX.X.", "X.XX......XX....X.X.X.X.XX....X.XXX...X.X..", "...X.XX........X.XXX.X.X.X....XX...XX..X...", "X.X.XXX.XXX.XXX...X.X....X....X...X.X.XXX.X", "X..X.....XXXX..X.XX..X...X.X......XXXX...X.", "X...X.X.X.....X.X.X.X.X.X.X.X.X.XXX...X.X..", "..XX...X.XXX.......X.X...X...XXX.X...X...X.", "X.X....X..XXX.X.X.X.X.X....XX...X.X.XXXX..X", "..X..X.X....X..X.X.X.XXX.....XXXXX.XXX.XX..", "..X.XX....X.....X.X.X.X.......XXX.XX..X...X", "X..XX..X.X.X.X...X.X...X..X.XX.X.X.X.XXX...", ".X..X.X..XX.X..X...X........X...X.X...X.X.X", ".X..XXXXXXXXX..X....X...X..X.X.X...XXX.X...", "..X.X...X.XX.XX.X..X....X.X..X..X.X.X.X.XXX", ".X.X.X...X.....X.......X.X.X.X.X.XXX.X...X.", ".X..XXX..X...X............XX....X.X.XXX.X..", "....X.X...X..X.....X.XXXXX.....X.X...X.X.X.", "..X...X.X.XX........X.X.....X...XXXX.X..X..", "..XX...X.XXX.X.....X....XX.X.X..X...X..X...", "X...X.X.X.....X.X...X.XX..X.....X...X.X...X", "...X.X.X.X..X..X.X.X.XX....XXXXX.X...XXX...", ".XX.......X.X..XX.X.....X.....X.X.X...X.X..", "..XXXXX..X.X...X.X.X.X.XXX..XX.X.XX.XX.XXXX", "..X.X......X..X.X.X.X.XX..XXX.XX..XX.XX.XXX", ".X.XXXX....XX.X....X.X..X......X...X.X..XX.", "XXX.XX..X..X..XXX...X.....X.X.X.X.X...X.X.X", ".....X....XX.X.....XX..X...X.X...X....XX.X.", "X.X...X.XX..X.X.....X.X....XX.X.XX....X.X.X", "..X....X.X.X.X...X.X.X.X.X..X..X.....X...XX", ".XX.......X.X.X.X.X.X.XX..XXX...X...X.X.X..", ".X.X..XXXX.....X.X.X...X.X.X.X..X....X...X.", ".XX.X.X...X.X.X.X.X..X....X..XX.X....X...XX", "..XX.X.....X.X...X...X..X....X.X.X.....X.XX", ".XXXX.....X.X.X...X.X..X..X.X.X..X.XX..XX..", ".....X.X..X......X..X....X.....X.X.X.X.XXX.", ".X......X.X.X.X...X...X.X.X.XXX.X.X.X.....X", ".X.X.....X....XX..XXX...XX.X.X.X.X.....X..."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"..XX.X.X.....X...........X.X...X...X...X....", "...X..X.X.X.X.X.X.XX..X...X.X.X.X.X.XXX...X.", ".X.XX...XX...X.X...XX..XXX.....X...X.X...X.X", "X...X...X.X....XXX....X.X.X.X.....X...X.....", ".X.......XXXXX.XX..X.X...X.X...X..XXXX.X....", "..X.X.X.X.XX....X.X.XX.X...X..X.X.XXX.X.X.X.", ".X.XXX...X....XX...X.X.X.X.X..XX.X...XX....X", "..X..XX..XX.X.X.X.X..XX.X.X.X.X..XX....XX...", ".X.XXX...X...XX.X..X...X.XXX.XXXX..X.....X.X", "X.X.XX..X.X....X..X.X.X.X.X.X.X.X.XXX.X.X.X.", ".X.X.X.XXX.X.....X.X.X.X.......X...X.X.....X", "..X.X.X.X...XXX...X.X..XX..XX..XX.X.X.......", "X.XX....X........X.X.X.XXX...X.X...X.X...X..", "...X.X......X.X.X...X.X.X.X.X...XXX.X.X..XX.", ".X.X.XXXX..X.X..XX...X...X.X.X...XX.XX.XXX.X", "..X.....X.....XX....X.........X.X...XXXX....", ".X.XXX.X.XXX.X.X.X....X..XX..X.X.X.X...X.X.X", "X...X...X.....X..X..X.X.X...X.XXX.X.....X.X.", ".X.X.......X.X.X...XX.XX.X.X.X.XXX.X.X.X....", "..X.X.X.X..X..X.X.X.X.XX..X.X.XXX.....XXX.X.", ".X.X...X.X.X..X..X.X.X.X..X..X..XX.X.X.XXX..", "X.X...X...X.X...X...XXX.X...XXX.XXX.X...XX..", "....XX.XXX.X.X.....X.XX..X.X.X..XXXX.XXX.XXX", "X.XX..XX..........X....XX.X.X.XXXX.XXXX.X.XX", "...X.X.X.X...X...X.X...XXX.XXX.X.....X.X.X.X", "....XXX...X...XXX.XXX.X.X.....X.X.X..XX.X...", ".X...X.X.X.X...X.X.XXX.XXX.XXX.XXX.X..X..X..", ".X.X.XX.X...X.....X.X.XXX.XXX.....X..XX.XXX.", "XX...XX..X.X..XXX.XX.XXX.X.XX.X.....XXXX.XX.", "...X..X.X...XXX...X.XX..X.X.XXX.X.XX......X.", "XX.X.X.X.....X.X.XXX.............X.X.X.X.X.X", "..X.X...X.X.X.X.X.......X.XX....X.X.....X.X.", ".....X.X..X...XX.X.X.XXX...X.X.XXXX..X...XX.", "X..XX.X.....X..XX...X.X...XXX.X.X...XX...X..", ".X..XX..X.X......X..XX...X.X.X......XX.X.X..", "X.X.X.....X.XXX.X..X....X...X..XX.X...X.X.X.", "X....X.XXXXX...XXX.X.XXX...X.X...X.X.XXX.X..", "..X.....XX..XX.X..X.XX......X.X.X....XX.X.X.", "X..X...XX.X....X..XX.X...X.X.XXX.X..XXXXX..X", "X.X.....X.X.X...X.......X.X.X...X.XXX...X.X.", "XX.X.....X...X.....X.X.X.X..XX.....X.XX..X.X", "X.....XXXXXX.........XXXXXXXX.X.XXX....XX...", "X..X...X.X.X.....X.X.XXX.XXX.XXXX..X.XXX....", ".XX.X.........X..X..X....XX.X.XX.....XX.XX..", "...XX.X..X...X.....X.XXX.X.XXX.XXXXX.X.X.X.X"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {".X.X.X...X.X.X...X.X.....X.X.X.X.X.XX.XX.XX..X", "X.X.X.X.X.X.XXX...X.X.X.X.XX..X.....X...X...XX", ".X.X...X.X.X.X.X.X.X..X..X.X.XX..X...XX...XX.X", ".XX.XXX.XX..X.X....XX.X.....X.X.X.X.XXX.......", "XXXX.X.....X.X.X.X...XX......X...X.X.X.X...X..", "X.....X.X...X.X...X.XXXXX.X.X.X.X.X.......XXX.", ".X.X.X....X....X...X.X.X.X.XXX.X.X...X.X.X.X.X", "..XX.XX.X..XX.X.XXX.X.X.X...X...X.X.XXX.X....X", "X..X.X.X.XXX.X.X.X...X.X....XX..XX.X.X.X.X.X..", "...XXX..X..XXXXXX.....X...X...XXX...X.XXXX..X.", "...X.X.X.X...X.XX..X.X...XXX.....X.X...X..XX.X", "XX....X.X.X...X.....X.X.....XXXXX...XXX.X.X...", ".X.X..XX.XXX.X.XX.X....X.X.X.XX..XX..X.X..X..X", "..XXX.X..X......X...X.XX..X....XXXX.X....XX.X.", "XX.X.X...X.....X...XXX.X...X...X.X.X...X.X...X", "X.X...X.X.....X.....X.X.XXX........XX.X.......", "X...XXXX.XX..X...X.....X..XX.....X.....X......", "..XX.X..X.....X.X.XX..X.XXXX.XX.X..XX.X.X.XXXX", "..XX.XXX.X.X...X.......X.X...X.X...X.X.X...X.X", "X.XXX.X....XX.....X..XX.X...X..X..XXX.X.X.X...", "..X.XX.X.....X..XX.X.X.........XX........X...X", "X.X..X..X.....X...X.X.X.X...X...X.X.......X.X.", ".......X.X.......XXX...XXX...XX..XX..X.X...X.X", "XXX...X...X.X.XXX...X.XXX.X.X.X..X..X...XXX...", ".X........XX.X...XX.XX.XX....X......X.XXXX...X", "X.X...X.X.X.X..XX..XX.X.X.....XXX.X.X...XX.XX.", "...XXX...XXX.X...X...XX..XXXXX..XX.X.X......XX", ".X.XX.....X.XX..X.XXX..XX.XX.XXXX.X...X....XX.", "...X.XXX..XX.X.X.....X..XX.X.XX....X.X.X.X....", "X..X......X.X.....XX..X.X...X.XX.X..X.XX.XX...", ".X.X.....X.X.......X.X.X.....X....XX.X.XXX...X", "X.X.X.X.X...X.X.......X.X.X....X..X.X..XX...X.", ".......XXXXXXX.X.X.XX..X.X.X..XX.X.X.X.X......", "X.X.......XXX.X.....X.X...X.X.X.XXXX...XX.X...", ".X.X.X.X.....X.X.X.XXXXX...X.X.....X.XX..X....", "..X.....X.X.X.X.X.X.X.X...X...X..XXX.....X..X.", ".X....XXX..XXX.X.X.....X.X.X...X.X.X.X.X.....X", "X.XXX.X.X.X.X.....X.X...X.X..X..XXX.X.XXX.XXX.", ".X.X...X...X.X.......XX....X.X...XX..X...X.X.X", "..XXX.X.XX..X.XXX.X..X...X.....X.....X..XX....", ".X.XXX.X.X...XX....XXXXX.X...XXX.X...X...X.X.X", "..XX..XXX.X...X.X....X..X...X...X....XXX.X..X.", "...XX..X.X.X...XXX...X.X.XX....X.X.X...X..XX.."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {"..XX...XX..XX.XX.XX....X.....X..X......XX", "X.X.X.....X.....X...X....XX...XXX....XXXX", "...XXX.X.XXXXXXX.X.X...X.......X.X.X..XX.", "X.........XX.XX...X.X...X...X.X...X.X.X.X", ".X.X.X.X.XXX..XX...X.....XXX.XXXX...XX.XX", "X.X...X...X.X.X.X.X.X.X.X.....XXX..XX.X.X", "...X.....X.XXXX..X....X....X...X.XXXX..X.", "......X.X.....X.XXXXX...X.X.X.X.....X...X", ".X...X.....X..XXXX...XX....XX.XX..XX.X...", "..X.XXX...X.X.X....X..XXXX..XX..X..XX.X.X", "X..........X.XX..X....XX.X...X..XX.X.X.X.", "X.XXX.XXXXX.X.X.XXX.XXX.X..XXXX...X.XXX..", ".X.X...X...X.X.X.X.X.X.X...X...X.X.X.X.X.", "X.X.X.X.X.XXX.X..X......X.........X...X..", ".X.X.X..X..XXX.X..XX.....X.XXX.X.....X.XX", ".X..X.X...X...X...X...XX......X.X.X.X.X.X", ".....X.XXX..XX.XXX.X.X.X.....X..XX.X.X...", "X.X.X...X...X.X...X.XXX.X.X.X.X...X...X.X", "XXXX...XXX.X.X..XXXX...X.XXX..XX...X.X.X.", "X.X..X..X.X.XX..X.X....XX.XXX...X.X.XXX.X", "XX....XXXXX..X...X.....X.X.X..XX.....X.X.", "X.X.......X.X.......X.X.X...X.........XXX", "XXX.XX.....X.X.XXX.X.X.....X....X.X..X...", "XX..X.........X...X.X..XX....XX...X......", ".X...X.X.X.X.XXX.XX.X..XXX.X.....X.X.X.XX", "X.X.XX..XXX.XXX....XX.X.X.....XXX.X.X.X.X", "XX.X...X.X.XXX..XX...XXX.XXXX..XX.X..X.X.", "X.X.X.X.X.X.XX..X.X.X.X.X.....X.XXX...X.X", ".XX..X.X...X.X.XX..X.X..XX....X..X...X.X.", "..X...X.X..XX.X...X......XX.X....XX...XXX", ".X.X.XXX....X..X...X.X.X.XXX.XXX.XXXXX...", "X...XXX.........X.X...X.X.....XX....XX..X", ".X.X.X.XX....X.X.X.XXX.XXXXX.X...X..XX.X.", "X.X.X....XXXX.X.X..XXXXXXX....XX...XX.X.X", ".X.X.XXX..XX.XXX..X....X.X.X.X..X..X.X...", "XXX.XXX.X...X.X...XXX..XX..XXXX...X......", "XX...X.X...XXX.X.XXX.....X.XXXX..XXX..X..", "XXX.....XX.XXX..XXX.....XX..X.X.X.X...X.X", ".X.X.X.......X.X.X.XXX.XX..X...X.X.X.X...", "X.........X..X..X.X.X...X...X.....X...X.X", ".X...........X.XX....X.X.X.X.X....XX.....", "X.X...X...XXX.X.X.X...X.XX....XX......X..", ".....X.X.XX..X..XX.X...XX..X.X.X.....X...", "..X.X.X...XX..X..XX.X...X....XX...X.X.X.X", "XX.X..X..X.......X..XX.X...X.X.X.X.....X.", "..........X.X.....X.XX.X..X...X.X.X.XX..."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 134;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"XX.X..X..X.....X...X.X...X...XXX.X.X...XXX", "....X.X..X......XX..X.....X.X.XX..X.X.....", "XX.XX..X.XX..XX....X.X.X..X......X.X....X.", ".X..X.X.X.XXX.......X.XXX...X.X.X..X..X.X.", "...X.X...X.X.X...X...X.XXX.X.X.X...X...XX.", "X.XXX.X.X.XXXXXX..X.....X.....X...X.XX..X.", ".XX....X.X.X.XXX.X...X.X.X.X.X.X.X...X.X.X", "X.XX..X..X..X.X...X.X.X.X.X.X....XX...XXX.", ".X.X..X..X.....X.....X.X.XX..XX..X.....X..", ".X.XX.X.XXX.X.XXX.XXX..X..XXX.X.X...X.XXX.", "..X....X.XXXXX.X...X...X.X.X....XX.X.X.XXX", "X.X.X.X...X.X...X..XX..X.XX.XX..X.X.X.....", "...X.......X.X.X..XX...X.X.X.XX....X.....X", ".XX.X...XX.X........X.X.XX...X.X..X.X.XX..", ".....XXX.X.X.X....X.....XX...XXX..X.X..X.X", "X...XXX.X...X.XXXXX.XX...X......X.X.X.X.XX", ".XX.XXXX.X.X.XXXX..XX...X..XXX..XX.X.X.X..", "X.....X...X..XX.X.X...XX..XXX...X...XX..X.", "...X.X.....X.X..XX.......X...XX....X...XX.", "X.....X.X...X..X..X...X.X...X.X.X...X...X.", ".X.....X.X.XXX.X..XX.X...X.XX.XX.XX.XX.X..", "X..X....X...X.XX.XX.XX..X.XX...X.XX.X.....", "...X...X.X.X.XXXXX.X...XXX.X.X.X..X.......", ".XX.......X.X.X...X.XX....X.X.X.X...X.....", "XX.X.X...X.X.X...XX....X.X.XX....XX..X...X", "....X..XXXX...X.X....X.XX.X.X...X..X....XX", ".X.....X.XX.X....XX.XX...X.XXX.......X.X.X", "X..X..X.X.X.X...X...XX.X..X.X..XXX........", ".X.X.X.X.XXX.X...X.X..X.XX...X...X.X....XX", "X.X.X.XXX.X...XXXXX.........X..X..X.X.X.X.", ".X...XXXXX.XXX.X...XXX.X.XXX.X.X.X.X.X...X", "X.X.XXX..X.XX.X...X..X..X..XX...X.X..XX...", "XX.......XXX.X.X.X.......X.X.X.X...X.X...X", "X.X.X...X.....X...........X.X.X.XX..X...X.", "XX....X.X..X.XX..XX..XX..X.........XXX...X", "X...X...X.X...X...X.X.X.X.X.X.X.X.X..X..X.", ".X.XXXXX.......X...X.X..XX.....X.XXX.....X", "X.X...XXX..X..X...XXX..XX..X..X...XXX.X.X.", "....X.XXX..X.X..XX.X.XX.XX.X...X.XXXX.XX.X", "..X.X..XXXX.XXX.X.X.X.XXX.X.X...X...X.X.X.", "XX....X........X.X.X.X....XX.X...X.XXX...X", "X.XX..XX............X.X...X.X.X.XX....X.X.", "......X....X.XX....X.X.XX.XX...XXXXX.X...X", "X.X...........X.X.X.....X.XXX.X...XXX.X..."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {"XXX..X....XX.X...X...X...X.......XXX.X...X...", "..X.X...X.X.X.XX......X.X.X..XX.XXX.X.....X..", ".XX.XX...X.....X.X.X.X...X..X..XX.X..X.X...XX", "XXX.X.XXX.X.X.X.X.X..XX.X.....X....XXX..XX..X", ".X..XXX.XX.XX....XXX..X..X.X.X.X.X.X.XXX.....", "X.XXX...X.XXXXX.X.X...X.X.X......XX.XXXX..X..", ".X.......XXX.X.X.X...XXX...X.......X.X....XXX", "X...X.........X.X.X.X..XXX....X.....X.X...X..", ".X...X..XXX....X.XXX.X...XXX.X.X.XX..X.XXX.X.", "X...XXX.XXX...XXX.X...X.X.X...X..XX.X.XXX.X.X", ".X.....X.XX......X.XXX.X.X.X...X.X.X.X.XX.XX.", "X.XX....X...X...X.X.X.XX..X...X.........X...X", ".X...X.X.X..X.XX.XXX.X.X..X..XXX.....X.X.X.X.", "X.X...XX......X.XXX...XXXXXX...XXXXX.XXXX.X..", "..X..XXX....XX.XXX.X.X.X.XXX.....X.XXX..X..X.", "X.X.X.X.X.X...X.XXX.X.X.X.XX..XXX...X.X....XX", "XX.X...X.XX..X.X.X.X.XX..X.XXX...X........XX.", "X...XXXX....X.X.....X...X...X.X.X.X...X.....X", ".XX..XX..XX.X..X.X.X..X.XX...X.X.X.X...X.X.X.", "X.XXX.X.X.X...X.X.XX....XXX.....X.....X.X.X..", ".X.X.XX....X.X...X.X.X.X...X...XXX..XX.X...X.", "X.X.X.X.X.X.X...X.X.X.XXX...X.X.X...X...XXX..", ".X.....X.X.XXX..X...XXX...X..X.X....X......X.", "....XXX.X...X.X.X...X..X.X......XX..X.X.X....", "XX.XXX.X...X...XXX..XX..X..X...X.....XX..X...", "X.........X.X.X.X.X.X.X.X.......X.X.X.X..X.XX", "...X.X..X.....XX.X.....X.X.X...XX.XXX..X.X.X.", "..XX..XX...XX.XXX...X.XX.X.......X..X.......X", "...X.....X.X.X..X..X.X.....X.X.....X...X.X.X.", "X..XX.X.X...X...X.X...X.X.XXX.X.X....X..X.X..", "..XX.XX..XX..X..XX.X.X.XX...XX.X.X...XXXX..X.", ".X....X...X...X.XXXX..X...X...X.X...X.X.XX...", ".X.....X.XXXX...XX.XXXX..X.X.X...X.X.XX..X...", "X...X.X.X.X..XX.XX...XX.X...X.X.X.X...X....X.", "...XX.X......X.X.XXX.X........X..X.X..XX.XXXX", "X...X...X.X.....XX....XXXXXXX...X.XXX.....X.X", "X..X...X...X.XX.....XX...X...X.X.X.X.X....X..", "XX...XXXX.....XX.XX.X.XXX.X...XX..X.XX...XX.X", "...X...X.X.XX..X.X...X.X.X.....XXXXX.XX..XXX.", "X.X.X.X..X.XX.X.X..X..XXX..XXXX.X.....X......", "X.X.XX...X.X.X.X.X.XX.XX.X.X.XX.XX.XXX...X.X.", "X....X....X.X..X..X....XXXXXXX..X.X...X.X.X.X", ".XXX.XX....XXX.....X..XX.X..X..X.X..X.XXXX.XX", "X.....XXX....X..X.X.X...X.X..XXX..X...X.X.X..", ".X...X.X...XXX.X.X...X.X.X.......X.X.X.......", "............X.......X.X.X.X...X.X...X.X..X..X", "X.....XX...X.X.XXX...XXX...X.XXX.X.X...X...X."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 154;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {".X.X.X.X...X.....X.X......X..X.....XX....X.X", "X.XXX.X.....X.X.X.XX......X...X..XXXX.X.XX..", "..XX...X.X.XXX...X.XX....X.X.........X.X...X", "X..X....X.X.X.X.X.X...X.X..XX......X..X...X.", "X..X.X.X.X.XXX.....X..XX.XXX...X.XX..X...X.X", "X.X..X.X..XXX.X...X...X....X.XX..XX.X..X....", "XX.X.X.X..XXXX.X.XX.X..X.X.X.XXX...X.....X..", "..X.X.....X...X.X.X...XX.X...XXX.....X..X.X.", ".X.XXX.XXX.X...X..XX.XX...XX.X...X.X.X.X.XXX", "XXX.X.X...X...X.......XX..XXX.X.X.XX....X.X.", "XX.XXXXX.X.X.........XXX.X.X.X.X.XX........X", "X.......X......XX..XX.X.......XX.XX...XXX.XX", ".X..X..X...X...X.....XXX...X.XXX.X.X...X.X..", ".X...X..X.XXXXXX..X.X.X...X.X.X....XX.XX....", "..X........XXXXXXX...X.XXX.....X.....X.XXX.X", "XXX..XX.XXX...X.X.X.XXX.X.X.X.....XXXX..XX..", "X....XX....X.X.X.XXX.XXX.X.X.....X.X..X..XX.", "X.X..XX.X.....X.X.X...X..XXX.XX.X.X.X...X...", ".X...XX....X...XX.X....X.X.XX....X.XXX...X.X", "X..XX.XXX.X.....X.XX......X.X.X.....X.X.X...", ".X..XX...X.......X.XX....X...XX..X.X...XXX.X", "....X.X.....XXXXX.X.X.X.......X.XXXXX.XX..X.", ".X..XX......XX.X...X.X.XXX..X.XX.X....XX.X.X", ".XX.XX..X.XXX.X.XX..X.X...XXX.X.X.X.XX....X.", "XX.....X.X.X...X.X.X.XX..X.X.XXX.....X......", "XX.X..X...X.X.X.....X.X..XXXX.......X.X.....", "X..XX....XXXX..X.X..XX.X...X.X.X.X.X.X.X....", "....XXX.X.XXX...X.....X.X.X.X.X.XX..XXXXX.X.", "X..X....XX.XX....X.XX..XXXXX...XX.X..X...XXX", "..X.X..XX.X.X.X..X..X.X...XX..X.X.X.X.X....X", ".X...X..X......XXX...X..XX.X.....XXX.X.X.X.X", "..XX..X...X...X.X...X...XX.XXX....X.....X...", ".X...X.X..X..X...X...X.X.X..X..X...X.X...X..", "XXX.X.X.XXX.X.X...X.XXX...X.X...X.X.X...XX..", ".....X.X....X.X..X.X...X..XX.....X.........X", "X...XXX.X.XXX.X.X.XXX....X..X.XXXX..XX....X.", "X....X...X.X...X.X......XX...X...XXX.X.X....", "X.X.X.X...XXX......X..X....X.XX.X.X.X.XX.XXX", "...X...X.X.XXXXX....XX.X.XX..XXX.X.X.X.XX..X", ".XXX..X...X.X.XX..X.X.X..XX.XXX...X..X.XXX..", "X....X.X...X.X.X...XXX.X...X.X...XX..X.X.XXX", "XXX...X.X.X..X......X..XX.XXX.X...X.X.......", "XX.....X.X.X.X.X...X.X...X...XXX.X.X...X.XXX", "X...X.X...X.X.....X.XX..X.XXX.X.....XXX.X..."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {"XX...X.X.XX...XX..X.............XX..", ".......XX.X.X...X...........X.X.....", ".....X.X..X.....X........X...X.....X", "X.X....X.X..X..X....X.XX.X.X.......X", ".....X.X..............XX....X..X...X", "X.X......X....X..........X..........", ".X.....XX...XX..XX..X............XXX", ".......X.XX..X...XXX.XX.X....X......", "....XX.X...X....X..X....X...X..X....", "..X..........X.....X...X..X.X....X.X", ".X......X..X..XX.........X..X.X..X..", "X.....X......X.........X.....X..X...", ".X.X..........................XX.X..", ".XX...X...X.X....X..X.......X..X....", "X........X.X..X..........X........X.", "X.....X.......X....X..X..X......X..X", "......X.........X.X.........X..X.XXX", "..X......X...X.X.................XX.", "...........X.X...XXXX.X.......X.X...", ".XX....XX.X..X.........X..X.....X...", ".....X...X......X.......X....XX.X.XX", "X.XX...X.X...XX..XX.X..X........X..X", "X.X..X...X.......X........X....XX.X.", ".X.X..X.XX....X....X.......X.X..XXX.", ".XX.X...X.XX......X.......X....X..X.", "X.X....XX......X..X..X.X......X.X..X", ".....X.....XX...XXX....X.....X.XXXX.", "...X..X.........X.XXX.....X....XX...", "X..X..X.....XX..X...XX.X....XX...X..", "....XX.X..X......X.XX..X.....X....X.", "....X............X.X.....X..X.......", "..X........XX.....XXX...X.X...X....X", "XXX.......X..X.......X........X.XX..", "X..X...X..X....X....XX.X...X....XX..", "........XX......X......X....XX.XXX..", "...X....XXX....X....X.X..XX...X.....", "XX...X.X........X.X....X...X........", "............X.....XXX....XX.X.X....X", "XX..................XX.X..XX......XX", ".XX.X.XX..XX....X.XX..X.....XX..XX.."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 243;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {".......X..X...X..X...X.....X.X.", "............X..X.X..X....X..X..", "..XXX.....X......X..X..X..XXX..", "..X....XX.......X.XX.....X.....", "..X...............X..XX.X......", ".X....X....X..X.XX.X.X.........", "...X...X.X........X...X..X.....", "..........X..X....X............", ".X.XX.........X.X...X.X........", "..X.X...X.X.XXX....X..X.XX.....", "XXXXX.X...X.X.....X..X.........", "..........X..........X..X..X.X."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {"..........X....X.X.X......X.X...XX..", "..X..X......X..XXX.................X", "X.X..X...........XXX.............XX.", "............XX...........X........X.", "X..X..X.XX............X........XXX..", "X...X.....XX..X......X.........X..X.", "..X...XX..X...X.X.X.....X...XX......", "..X.....X....X..........X.....XX.XX.", "X.....X..X...X.....X.......X......X.", "....X...XX.....XX..X....XX.XXX.X....", "......X..XX..XX....X......X...XX..X.", "..X....X.....XX.X....X..X...XX......", ".X.........X...X......XXX...........", "X.XX..........XXX.X........X.....X..", "....X....X..XX..XXX...X.X....X......", ".......X...X.........X.X.....X......", ".......X.X.X......X.................", "......X...X...XX....X..X...XX......X", "..............X....XX...............", "...X..XX..........X....X.........X.X", ".....X.........X........XX.......X.X", "...XX..X.......X..........X.X...X...", ".....X..XX.......X...X....X.X.......", ".......X.XX.......XX.....X...X...XX.", "...X...X.............X....X.X......X", ".XXXXX.X.......X...X.....X.....XX...", ".............X.XX.X..X.........X....", ".......XX..XX.X...X.................", "..X....XX.....X..X..XXX..X...X......", ".....X.X....X.X..XX.X......X.X...X..", "......X..XXX........X.....X.........", "..X..X.............X.XX....XXX.X....", "...XX...X..X........X....X.......X.X", ".X..X.......X.X.............X..X....", ".....X..X..X.X........X.X..X..X....X", ".X.....XXXX....X.X.....XXX........X.", ".X..XX.....X......X.XX.........XXXXX", "..X.X.....X...X..X...XX....X.XX..X.X", "..X.X....X.X......X.X.XX...XX.XX...X", ".X...XX...XXXX.....X.X....X.X..X....", "..XX..X....XX.XX...X.....X..XX......", "......X...X....................X..X.", "....XX.................X......X...X.", ".X..X.X............X..X..X...XX.....", ".X....X.X.X.............X..X..X.....", ".....X.X........X.X.....X...XX...XX.", "..........X..X..X..XXX.............."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 312;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"X.X.X..X....X......X..............", "X....X....X..X.X.....X...XX..XX...", "..........X......X....X.XXX.....X.", "XX.X.X.....X....X........X..X.....", ".X.X...X.....X.......X.....XX..X..", "..X.....X....XX..XX..X......X.....", ".....X..X.X....X..X.........X.....", ".........X...X.X...X....X.X.X.....", "X...XX..XX...X.................X..", "...X....X..........X....X...X.X...", ".X..XX............XX..........X...", "XX.....X....X..XX......X...X......", ".X....X..........X.X........X.X...", "...X..........X......XXXX...X....X", "..........X.X.XX.................X", ".........X.X...X.......X....X.X..X", "..X....X....X........X...X..X.....", ".XX..........X...X..X...X....X.XX.", "..X....X.....XX.......X....X...XX.", "X..X...X.XX...X.X..X.............X", ".........X..X.X.....X...X....X....", "X.X..X.....XXX...........X........", ".......X..........X...X....X.X....", "X..X...X...X..X.........X.X.....X.", ".............XX.X.X.....X......X..", "...X.X........X.X...X.....X......X", ".......XX.......X.X....X..X......."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {"...X....X.XX..X.....X...........XX............", "....X....X.X.....X..XX.X..X..X.X.X....X...X...", "...X..........X...X...X.....X..X..X...X...X.XX", "X......................X.X.....XX.X..X...X..X.", ".X............X......X..X........X....X..X....", "..XXX.X....X.......XX.X....X......X..X..XX....", "..X...............X...XX...XX.X....X...X......", ".X......X...X.............X....X....XXX...XX..", "XX...X...X...............X....X.XX.X.XXXX.X..X", ".......X.....X.....X...XX...X...X......X......", "...X.........X..XX....X.....X.X....X.......X..", "...X.X.X.....X.XXX..X...XX..X..X..X......X.X.X", "X.X..............X..XX......X..X..XXX.XX....X.", ".X..X.X.X.XX..XX....X.X.....X.XX.XX....X....X.", "..XXX......X.......X.....X........X...........", "...X..XX...............X.X.X...X..X.......X.X.", "X...........XX..............X......X....X...X.", ".X.X..XX......XXX.X.......X....X...........X..", ".........X....X....X...X...X..X...X.X......X..", "X......X........X..X.X....X.......X..XX.X..X..", "......XX.XX.......XX..X....X.XX.X....XX....XX.", "...X.......X.XXX......X.....XX...X.X..X.XX...."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 182;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {"...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "..............................................."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 552;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
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
    vector<string> board = {"XX...X.X.XX...XX..XXX........X..XXX.X..X...XX.X", ".X.X.X...........X.X...X......XXX..X.....X.....", "...X...X.....XX.X....X.X..X.XX....XXXX.X.X..XX.", "..X..X..X.XX.X...X.......XX...XX..X...XX.X....X", ".X.X..XX.......X.X........X..X.....XX...XX..XX.", ".X...........XXXX.......X.XXX.X...XXX.XX.X....X", ".....X....XX.X...XX...X..X....X...X..XX.X...X.X", ".X.....XX.....X...X..X.X....X.X.X......X..X..XX", ".......X.X..X.X..X..X.....X......XXXX......X...", "..X..X...XX.X................X.........XXXX.X.X", "XX..X...X.X..X.X..X...X...X..X..XXX........X.X.", ".X..........X........X.X.....X.......X....X..X.", ".X......X..X......X...X....XX.X....X.X..X.XX.XX", "X..X..X...X...X.X.................XXX..........", ".X.X...XXXX.X......XX.X....XX...XXX.X..X.X.....", "..XX.X..X..X........X.X.XX.....X.......X....XX.", "X.XXX.XX...X.X...XX..XX.X..XX.......XX.XX.X..X.", "..X.......XX.X.....X...XXX.X.XX.X..X.XXX...X...", ".X.......XXXX.XXX.XXXXXX.XX.XX......X...X...X..", "..X..X.X.X....XX......X..XX.X.X..X...X.X..X..X.", ".X....XXX...XXX....XX....X.XXXX....X..X.X..X...", ".X.XXX..X..X....XX...X..X..XX....XX.XX...XX.X..", "..XXX..X.....XXXXX..X.X.X..X.XXX.X.X...X....X.X", "...X..........X.X.XXX...X..X.X...X...XXX......X", "X.....XXX...X.X...X..X.XXXX.......X.XX.......X.", ".......X.XX..X.XX...X..X....X....XX.X...X..X.XX", ".........XXX.X.X..XX...X.X.X..XXXXXX.....X....X", "XX....X...XX.X..XX...X....XXX...X.X........XXXX", "...X...X..........X.XX......X..X..XXX....XX.X.X", "..X.XXX..X.X.X..X.....X.XXX.X..XX...XX.XX.XX.XX", "XX..XX....X.XX.XX.....XXX.XX...X.......X..XXX.X", "..X...X..X.XX.X.............X..X.XX.X.X..X.XX..", "..XXX..X..X..X...XX.X..X..XXX...XX....XX.......", "X.XX.....X..X....X...............X..XX.X...X...", "X....X....X..X.XX.X.X....X.......X..XX.X.......", ".XX..XX.X.X.XX.........XX.XX....X.............X", ".XX..X......X.X...X.X..XX......X.XX..X.XXXXX...", ".X..X.XX....XXXXXX.X...X.X..X..X..X....X.X.....", ".......X.X........X..X.XX.X...........XXX.X..X.", "X.X......X.X...XXX...X..X.X...XX.XXXX..X.......", "XX.....XXXX..X.X..XX.....XXX............XXX....", ".........XX.........X.X...X..X.X.X..XXXX.XXX...", "X.......X.X......XXX..X.X.X.....XXX.X......XX..", "......XX.X.X.X...XX..XX..X.X.X.....XXX.XX..X...", "..XX....X.X..XX......X..X..X..XXXXXXX.....X..X.", "..X.....XX......X......XX..X.X...XX.....XXX.XX.", ".XXX.XXX.X......X...X.XXX..XX...XX......X...XX."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 314;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {"...X....X..X..XX.X....XX.XXX.XX.....X.X........", "XXXX.X....XXXXX....X......X.XX.........XXXX.X..", "..X...X....XX.X....X...XX.XXX.XXXX...X.X....X..", "..X...X....X...X..X......X.X.....X.......XX....", "X.X.XX..X..X...X.............X.X...X.X.X...XX..", "..X.XX...XX...X..XX..........X..X....XX........", "..........X..XX...X......X....X....X....X.X..X.", ".X.........X....X...XX.X.....X.XX..XX..X.......", "X..........X.X..XX........XX.XX.......X...X...X", "XXX.......X...X..X.XX.....X.XX.....X.X.XX..XX..", "..X...X.......XX....XX...X.X.X....XXXXXXXXX..X.", "...X...X..X.XX.X...XX.........XX....XX.XX.XX.X.", "...X....X.X........XXX..XX.X..XX..X..........X.", "X...X....XX.X...X..X..XXXX.X...X...........X.X.", "...XXX..XX.X......X.X...X.....X..XX.XXXXX...XXX", "X.....X...........X..X...X....X.X..X.XX....XXX.", "X..X..X.XX...X.XX.X......X....X.......X.X.X..X.", "..X...X.X........X....XX.X..X..X...X..XX.X.X...", ".....X.X..X..X.X..X.X.....XXXXX...X.X.....XXX..", "......XX.X..XX...X.X......X.XX.....X...XXXXX..X", ".X.....XX..X.XXX..XX..X.X.XXX.X.X..X.X..X.X.X..", ".X..X.XXXX...XX.XX...X.X..XXXXX.XXXX.....X.X...", ".X.X..X.....XXX.XX.X..XX.XXX..X.X...X..XXX.....", ".X....X...X..X..X....X.........X..X.....XX..X..", ".......X....X......X..XX..X..X.X..X.XX.XX...X..", "X..X...XX......X...XXXX.X..X..X....X..X..X..X..", "........X.X.....X..X.X.....X...XX..XXX..XX..X..", "X.X..X..X..XXX......X...X..XX.X.X.X..X....X..X.", "..X....XX....X...X....X....X..X.X.....X.X.XX..X", "X.........XX..X......X....X.XXX.....X.XX.XXX...", "X.XX...X........X.XX...X..X.XX..X...X.X..X....X", ".....XX..X....X.....X....XX..XXX.X.....XX......", "....X..X.X....X..X...X..X..X.........X....X...X", ".X.X.X....XXX.X.....X...XX..XX...X............X", "....X.....X....X.X........X....X...XXX.XXXX..XX", "........X...XX....X.....X...XX.....X....X..XX.X", "....X...XX......X....X...X......XXX.......XX.X.", ".....X.........XX......XXXX..XX....X...X.XX...X", ".X.XX.............XX.XX.....X...X.X...X.......X", "....X.X.XX..X....X....XX....X..X...X..X..XX..XX", ".X........X...X..X.X.X.X..X.XX...X.X..XX....XX.", "..X...X....X...XX.X..X...X.XX...X.X..XX...X..X.", "....X..X.X..X.X..X.X..X..X...X..XXX.XXXX.X.XX..", ".XXXXX.......X...X.XX.X.......X..X.....X..X.X..", ".X....XXX....X..X...X...X..X..X.X.X..X.XX....X.", ".......X...X.XX.X.X.....X......X.....X.X.X...X.", ".X.X...X...X.X.X...XXX.X..X.XX..X....X.X.X..X.."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 333;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> board = {"...X..XX...XX...X.XX.XX....XX........X.XXX.X...", "..X........X...XX.X.....X..XX.X.XX..X.XXX....X.", "..X....XXX.......X.XX...X...XX....X..X..XX..X..", ".X.XXX.X....X..X.X..........X.XXX...XX.X..X...X", ".XX.XX..........X.X.X.X..X..X.......XX..X.X..X.", "X.X..XXX.X....X..X....XX.X....XX...X.X..X..XX.X", "X...X............XX.X...XX...XX.X....X.XXX.....", "..X......X...X.X.X.....X..XX....X.X..XXX.X.XX..", "XX...X...X.....X.........X....X.XX.X.XXXX.X..X.", "......X.....X.....X..XXX...XX..X......X.X......", ".X........XXX.XX....X.....XXX....X..X..X.X..X.X", "X.XXX..XX.X.XXX..X...XX..XX.X..X.X....X.X.XXXX.", "..X.........XX..XX......X..X..XXX.XX....X..X..X", ".X.X.XX..XX..X.X.X.....XXXX.XX....X.X..X...XXX.", "....XX..X.X..X..X..X......X.X....X.........X..X", "XX..............X.X.X...X.XX.....XXX.X.X..X....", "....XX......X....XXXX.....XX.X..X...X..X.X..XX.", "...X.XXX.X..XX..XX....XX.XX....X..X......X....X", "X..XX....X...X...X..X...X.X.X....XX.X...X..XXX.", ".....XXXX.X..XXXXX..X..X..XX.X..X........XX.XXX", ".....XXX..X.X..X.XXXX....XX....XX....X.X.....X.", "XXX......X.....XX...X.X..X.XX...............XX.", "X..XX..X....X.X...XX..XXXX...XX...XX.X..X.XXX..", ".........X.X........X....X.......X.XXX.....X.X.", ".X.....X..X.......XX.X..X.XX........X..X.X.X...", ".XX.XXX...X.....X.XXXXX.....X.....X....X...X.XX", "...X....X....XXX.XXX.XXXX..X..XX.....X..XX.....", "X..X..X..X....XX.X.XX.X...X...X..X..XX.X......X", ".....X..XX....X..XXXX......X.X.X.X..XX..X..X..X", ".XX....X..XXX.X...X.XX.X..XX..XX.X.X.X.X...XX..", "..X.X.....XX..X.....X...XX...XXX.X...X.....X.XX", "..X..X....XXXX.XX....X...XX.X.XX..XX.XX........", ".XX.X.........X...XX........X.XXX...X..X.X.XXX.", ".XXX.X...X...X..X.X.XX..X.....X.XX....XX.X...X.", ".X.XX.X.X...X.X......XXXX..X.X.X....X...X......", "X.XXX..XX...X..X....X.X...X.X.X.X...XX.X..XX...", "XXX...X.....X..X..X....XX...X.....X....XX......", "X....XX..X.XXX..X.XXX.....X.X.....XXXXXX.....XX", ".XX...XXX...X..XXX..X.....XX.X.X.....XX..XXX...", "XXX.....X.X....X.XX.XXX....X.X.X...X.....X.....", "..XXXX.....XX..X..........X..XXX.X..X.X...X..XX", "...X.XXX..X.X..X..X..XX..XX.X.............X....", "...X.XX.XX...X....XX.X.X..X.....XX..XXX.XXX..XX", "..X......XX........X...........X..X.XXX...X....", "...X.X.XXX...X..X...X.X.XXX..X...X.....X..XX...", "........X....X..XXX.X.....X..X.X.XX.X...X.X.XX.", "...XX..XX.XX.X..XX..XX...X..XX.........X......."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {"X.XXX......X..XX.X..X.XX.....X..X..XX.....X..XX", "X.....X.....X.XX.X.....X..XX...X..X.X....XX.X..", ".........X.X..X..X..X.XXX..X.X...X..X.....XX...", ".......XX.................X...X.XX....X...X.X..", "....X.XXX.X..X..X....XX....X..XX........X..XX..", ".XX...XX........X.X.X.XXX.XX..X...X.X.....X.XXX", "....XX.X...XX....X..XXX.XX...X....XXXX.XX...XXX", ".XX....XXXX...X..X..XX..XXX..XXXXX..XX.X.......", ".XX.X.X.X....X..X...XXXX..X...X.X.XX.X..XX....X", "......X.XX..X....XX.......XX....X.X..XX........", "....X.X....X.XX....XX..X.X..XX..X.X..X..X.X....", ".X.XX....X..X........X.......X..X.XX...XXX...X.", ".X.X.X.X...X.X.......X.X......X..X....XX...X...", "......XXXXX..X.X.XX..X...X..X..X.X.X....X...X.X", "..X....XX........XXX...X...X.XXXX...XXX...XXX.X", ".X.........XX...X.XX...X.XX.......X.........X..", "....X.X..X.X.X.X....XXX.....XXX.....X...X.X....", "XXX...X...XXX.X......X.......X...X.....XX..XX..", ".X...X.......X..XX.XX.X..XXX...XX..XXXX.XXX..XX", "...X..X...X..XX....X.X...XX..XX..X.X.....XX.X.X", "X..X..X..X..X...X.....X.....X...X.....X..XX.X.X", "....X...X.X.XX.....XX..X.......XX..X...X...XX..", "..X...X...X......X....X.X.X.X.X.......XX..X.X.X", "...XXX...X..X.X....X.X.....X..X...XX..X.X...X..", ".X.X...X....X.....XX.X.......XX.X.......X......", "......X.X.....X...X.XXXX..XXXXXXXXX.XXX...X....", ".......X..X.X..XXX..........XX.XX...X.........X", ".X..XX..XX.X.X...X....X.X.XX...X.....XX..XXXX..", ".XXX.X..X...XX..X.X.X.X.X....XX.....XXX..XX....", "...X.......XX.X.XXX.X.X....X...X..X.X..X.......", "XXX.....X.XX.X...XXXXX.....X.XXX.XX........X..X", "X.XXX....XX....XX.XX..X..X........X...XX...X...", ".X...XXX..XX..X..XX.XXXX.X..........XX..X....XX", "........X......X.X..XX.XX.XXX..X..X.XXXX....X.X", "......XX....X.....X.....X.X.X.....X...XX....X..", ".....X.X...X.XXXXX.X..X................X.......", "...XX..X..XX.....XXX....X..XX.XX.......X.X..X.X", "X...X.....XX...XX......XXX.X...X.XX....X.XXX..X", "X..X..X.XX......X..XX........X.......X.X.XX...X", "..X..X..XX.X...X...X.XX.XXX..XXX.X.X..XXXX...XX", ".XX..XX...X...X.X....X.XX.X..X....X....XX.XX...", "...X.XXX.XX.....XXX.X.XX...X..X..X.X.X..X......", "......X.........X.......XX..X...X.........XX.XX", "X.XX..........X.XX.X..........X.X..X....X..X...", "..........X....XX....XX...........X.......X.X.X", "X...X.X...X..X.....X.XXX.XX....XX...X..XX.....X", "X.X.......XX.X..X.XXXXXX........XXX..X....XXX.X"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 321;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {"X..XX.X....X.X...X.X.XX..XX.......X..X........X", "X...X.X.XX.X...........X....X..XX....X..X.....X", ".......X.X..XX.X........X.XX.X....XX....XX..X..", ".X.X...X..X..X...X...XXXXX..XXXX....X....XX....", "....XX.X...........XX....XX..X...X.X..X........", "...XX.XX.X.X.....X.X..X.X.X.X....XXXX...XX.XXXX", "X.X.X..XX...X..X.XXX....X...X..XX...X.X......X.", "...X..X.X...XXX.XXX.X..XXXX....XX..XX..X.X...X.", "..X...X.X..X.....XX..X..X......X.XX.X..XX...X..", "XX......XX.X.X..XX.X....XX..XX..XXX....XX.X...X", "........XX....XX..X..X...XX.X..X....X.X........", ".X.XX.X.XX.....XX.........X...X..X.....X.X.XXX.", "...X.....X.X....X........X.......XXX.X.X....XX.", "XX....XX...X..X......X..XXXX..X..X.......X..X.X", "..X...X.....X...XX....X.....X...X.XX....X...X..", "X...XX...X.X..X.......X..XX.....X...X........X.", "....X....X....X....XX.X..XX......X..X...X.XX.X.", ".X.........X..X.X....X..XXX..X.X.XXXX.X..XX...X", "......XX..X..X..X...XX..X.X..X..X...X..XX.X..XX", "....X...X..X........X....X..X..X.....XX.X...X..", "X..X......X....X..X.XX...X.X...X...........X..X", "X...XX....X....X....X..X.X.XX.XXX..X..X.XX..X..", "......XX..X...X........X..XX.......X..XXXX...X.", "..X.X.X..XX..X..X.X..X..XX..............X.....X", "..XX.X..X..X..X........X.X.XX..XX........XX..X.", "X..X..XX.X..XX.XXXX.X...XX..XXX.X..XXX...X...XX", "X.X.XX........XX.X..X...XXX.....X.X.X...X..XX.X", "......X...X.XXXXX...XXX.........X.......XXX....", "X....XX....XX.....X....X.XX.X...XX.X.......X.X.", "..X...X.X..X....X.......XX.....X...X.X.X...X...", "X.XXX.X.X.....XX..XX.....XX..X.XX..X...X.X.....", ".XXX....X..X.XXX....X.XXXX...X...X..XX...X..X.X", ".....X....XX..X..XX.......XX...XX...X...XX..X..", "..X....X.......XX.......X...XX........XX....X..", "X.X...X..X.....X.X........X..X....X..X.........", "XXX..X.X.........X.XX.XX.XX.....X.X....X..X..XX", ".X...X..X.XX...X.X..X........XX..X.X...XXXXX..X", "..XXX.X..X...X.X.X....XX..X...XX.X.X......X....", "..X.X.X......X..X..X.X...X.X.XX...X....X...XX..", "..XX..........X...XXX.......X...X.XXX..XX..X..X", ".....X......X..XX.X.X..XX.XX...X..XX.........X.", "XXX.X.XXXX.X.X...X...XX.X.....X.X.X...X...X.X.X", "...X.XX..X.....XX.X.XX..XX...X....X.XXX.XX..XX.", ".....XX.X.............X..X.X.X.X.....XXX.X...XX", ".X...XXX.X.XXX.X.X.X........XXX.XXX..X.X..X...X", "X.X..X..X....XXX..X....X.........X..X..........", ".X..X..X..X..X....X....X..XX....XX............X"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {".XX..XX....X.....X.X..X.XX...X...X.............", "X....X..........XX..X.....X.....X.X...X....X..X", "..X..X.XX......XX...X..X.XX..X.....XX..X...XXX.", "...XX..X.XX....XX..X.X.X..X...XX..XX.X....X.X.X", "..X.X..XX.XXXX.X...X..XXXXXX.XX...XX.XX.XXX..XX", ".XXXX.X.XX..X.X......X..X.X.XX....X...X....X.X.", "X.XX...XX....XX..XX....X.XX.X.X............X.X.", ".XX.X.X..X......X.......X......XX.....X...X.X..", "..XX.XX.....XXXXX...X.X....X....X.......XX....X", ".X......XXX.X..X....XX.X....X...X..X....X..XXX.", ".X.X...X.X...X.XX...X.XX......X...X..X..XXXX...", "....X...X.X.........XX.X.X........X...X.X..X..X", "..XX.XX.XX.X..X.X.X.XX.X.X..XX.........XXX..XX.", "......X.X.XX..X.X...XX..X..X.XX.X....X..XX..X..", "...X....X.XX.X..X.....X...X....X.X...X.X..X....", "..X.....XX.X.......XXX......X...........XXXX..X", "XX.....X..X...XX...XXX....X..X....X....X..X....", "..XXX....X..XX..X...XXXX....X..X.XX.X.......X.X", ".XX....X..X.......X...X..X.XX..XXX..X..X......X", "X.X...X.XXXX...X.XX.X..X.XXX.XX.X..X..X........", "...XX.X.X.XX.............X..X..XX.....X..X.X.X.", "X...X...XX..X...XX.....X...X..XX..X..XX......XX", "XXXX..XXXX.X...XXX.X.X.XX......X..XXX....XX.XXX", "...X.XX.XXX....X.XXX..X..X.X.X.......X...XX.XX.", "X......X...XX...X.X....XXXX.....X..X..X...XX..X", "X.....XXX.........X.X..X...XX.X....XX......X...", "X.....X.X.....XX.X..X.XX...X..XX.X..X.XX.X.X.XX", "....XX.X.X......XX...XX....X.X.....X..X....XX.X", "....XX...........XX....X.X....X.............X..", ".XXXX.X......X.X.X.X.X.X...X.....X.X.XX......XX", "XX..X....XX....X...X....XX.X.X...X.X...X.XXXX..", "X.X.....XXX.X...X.....XX.X.X...X..X.X.X.....X..", "X...X..X.X.X.XX....XX...XXX..X...X..X...X..X..X", "X..X...XX.....X..X.X..XX.X...X.X......X..XXXX..", ".X.X...X..XX.X.....XX.......X.X.X...XX.X.X.XXX.", ".X...XX..XX...X..XXX...X.XX.X.......X..........", "XX..X............X............X....X....X.X....", "..X..X.XX...X........XX..XXX...X....X..X.X....X", "X.XX..XX..XX.XXX.X.XXX...X..X.X..XXX.X..X..X.X.", ".X...X......X.X......X...XX....X.X.XX....X.....", "...XXX...X.XXXXX..X.X..X......XX.X........X...X", "..X.X..XX...X......X.X...X........X....XX.X....", ".....XXXX.X........X.......X..XX.XXX..X........", "...XX....XXXX.XXX.X..XX.X....X.XX......X.....XX", ".....X....X.....X.XXX.X....X...X...XXXX.....XX.", "X....XXX.....XX....XX...X......X....XX.XX..X...", "....X.X.....XXXXX..X..XXX..XXX..X..X.XX.X....X."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 305;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> board = {".X...X.X.XXX..XX..XX...X.X.X.X.X.X.X...X...X...", "X...XX..X.X.X.X...X.X...X.X.X.X.X.X.X....XX...X", ".X.X...X.X...X.X.X...X.X.....X.X.X.XXX.X.X.X.X.", "X.X.X.X.X.X.X.X...........X.X.XXX.X.X.X..X..X.X", ".X.X...X...X.X.X.X...........X.X...X.....X...X.", "X.X.X...X...X.X.X.......X.X.X.X.X.X.X.X.X...X.X", ".....X.....X.X.X.X.X.....X...XXX.....X...X.XXX.", "..X.X.X.X.X...X.X.X..XXXX.X.X.X.X.X.X.X...X.X.X", ".X.X.X.X.X.X.XX..X.XXX...X.X.X.X.X.X.....X.X...", "X.X.X.X.X.X.X.X.X...X.X.X...X.X.....X.X.X.X.X.X", ".X...X..X.X..X.X.....X.X.XX..X.X.XX........X.X.", "X.X...X.X...X.X...X...X.X.X...X...X..XX.X.X.X..", ".X.....X...X.X...X.X.X...X.X.X...X.X.X.XXX.X.X.", "X.X.X.X.X.X...X.X...X.....X.....X.XXX...X.X.X..", ".X.X...X.X.X.X.X...X.X.....X.....X...X.X.X.X...", "..X.....X.X...X.X.X.X.X.X.X...XX....X.X.X...X.X", "XX.X..XX.X.X.X...X.X.X..XX.X.X.....X.X.X..X..X.", "..X.X.X...X.X.X.X...X...XXX.X.X.X.XXX.X.X.X....", ".X.X...X.X.X.XXXX..XXX.X.X.X.X.X.....X.X.X..XX.", "X.X.XXX.X.X.X.X.X...X.X..XX.X.X.X.X...X.X.X.X..", ".X.....X.X...X.X...X...X.X.X.X.X.X.X.....X.X...", "X...X.X.X.XXX.X.X.....X.X.X.X.X...X.X.X.X.X.X..", ".X.X...X.X...XXX.X.X.X.X...X.X.X.X.X...X.......", "X.X.X.X.X.X...X.X.X.X.X.X..XX.X...X.X.X.X...X.X", ".......XXX.XXXX....X.X.X.X...X...X...X.X.X.X.X.", "X.....XX..X.X.X.X...X...X...X.....X.X.X.X.X.X.X", ".X.X.....X.X.X.X.XXX.X.X.X.X.X.X.X.X.X.X.X.X...", "X...X.X...X.....X...X.X.X.XXX...X.X.X.X.X.X.XXX", ".X.X.X.X.X.......X.X.X.X.X.X...X...X.X...X.X.X.", "X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.X...X", ".X.X.X.X.X.X.X.X.X...X.X...X.X.X.X.X.X.X.X.X.XX", "X.X...X...X.X.X.X.X.X.X.X.X.X.X...X.X.X..XX.X..", "...X.X.X..X..X.X.X.....X.X.X.....X...X.X.X.....", "X.X.X.X.X.X.X.X.....X.X.X.X...X.X...X.X.X...X.X", ".X...X.......X.X.X...X...X.X.....X.X.X.X...X...", "XXX...X.X.X.X...X.X...X.X.X...X.X.X.X.X.X...X.X", ".X.X.X.X.X..XX......X..X.X...X.X.X.X.X.X.X.X...", "X.X.X.X.X.X.XXX.X...X.XXX.X.X.X...X.X.X.X...X..", "...X...X.X.....X.X...X.X.XXX...X.X.X...X.X...X.", "X.X.X...X......XX.X...X.X.X.X.X.X.X.X.X.X......", ".X.X...X.X.X.X.X...X.X.X.X.X.X...X.......X.....", "..X.X.X.X.X.........X.X.X.X.X..XX...X.X.X.X.X..", "...X...X.....X.X.XXX.....X.....X.X.X...X.X.X.X.", "....X.X..XX.XXX...X.X.X.X...X.......X...X...X.X", ".X.X...X...X.X.X...X.X.X...X..XX.X.XXX...X.X.X.", "X.X.X...X.X.X.X.X.X...X.X.X..X....X.X.X.XXX.X..", ".XXX.XXX.X.X.X.....X.X.X...X...X.X...X...X...X."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {"...X.X..X..X..XX.X.X..XX.X.X.X.....X.X...X.X.X.", "X.X.X...X.X.X.X...X.X.X...X.X...X.X.X.X.X.X.X.X", ".X.....X.X.XX..X...X.X.X.X.X.X.X.X...X.X.X.....", "..X...X.X.XXX.XXX.X.....X.XXX.X.X.X.X...X.X.X.X", "...X.X...X.X...X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.......X.X.X.X.X.X.X.X...X.X", ".X.X.X.....X.XXX.X.X.X.X.X.....X.X.X.X.XXXX..X.", "..X.X.X.X.....X.X.X.XXX.....XXX.X.X.X.X.X.X.X.X", ".X.X.X.....X.X.X.X.......X.X.X...X...X...X.X.X.", "X.X.X.X.X.X...X.X..XX.X.X.X.X.X...X...X.X.X.X.X", "..X...X......X.X...X.X...X.X.X.X..XX.XXX.X...X.", "........X.X.X.X.X.X.X.X.X.X.X.X...X.X..XX.X.X.X", "...X.X.....X.X.X.X.X.X.X.X.X...X.....X.......X.", "X.X.X.X.X.X.X.X.X.X...X.X.XXX...X...........XXX", "...X.X.XXX.X........XX.....X.....X.XXX.X.....X.", "X.X.X.X.X...X...X.X.X.........X.X.X.X.X...XXX..", "...X.....X...X.X.X.X.....X.....X.X.X.....XX..X.", "X.X...X.X.X.X.X.X.X.X.X.X...X.....X...X.X.X.X.X", ".X.X.X.X..X..X.X.X.X.....X.X.X.X...X.X....XX...", "..X.X.X...X.X...X.X.....X.X.X.X.X.X.X...X.X.X.X", ".X.X.X.X.X.X.X.X..XX.X.X...X.XXX...X.X.........", "X.X.X.X.XXX.X.X.X.X.X.X.X.X.X.X.X.XX..X.XXX...X", ".X.X.....X.X.X...X.X...X.X.X.XX..X.....X.X.X.X.", "X...X.X.X.X.X...X.X.X.....X...X.X.X...X.X...X..", ".X.X...X.....X.X.X.X...X.X...X.X.....X.X.....X.", "X.X.....X.X.X..X..X.X.X.X.X.X.X.X.X.X.X.XX..X.X", ".X.X...X..XX.......X.X.X.X.X.X.X...X.X...X...X.", "X.X...X.X.X.X.X.X...X.X.X.X.X.X.X.X...X.X.X...X", "...X.X.X...X.X.X.X.X...X...X.X.X.X.....X..XX...", "X.X...X.X.X.X.X...X...X.X.X.X.X.....X.XXXXXXX..", "...X.X.X.X.X.X..X..X.X.X....XX...X.......X.X.X.", "..X...X.X.X...X.X.X.X.X.X.X.X.X.........X.X.X.X", ".X.X...X.X.X.X.X.X.X.X...X.X.X.X.....X...X.X..X", "X.X.XXX.X.X.X.X.....X...X.X.XXX...X.X.X.X.X.X.X", ".........XXX.X.X.X...........X.X.X.X.X.X.XX..X.", "..X.X.X.X.X.X.X...X.X.X.X.X.X.X.X..XX...X...X.X", ".X.X.X.XXX.X...X.X...X...X.X....XX.....X.X.X.X.", "X.X.X...X...X.X.X.X...XXX.X.X.X.X.XXX.X.X.X...X", ".X.X.....X...X.X.X.X.XX..X.X.X.XX..X...X.X.X.X.", "X.X.X.X.X...X.X.X.X...X...X.X.XXX.....X...X...X", ".X.X.X.X..XX...X.X.X.X.X...X.X.X.X.X.X.X....XX.", "..X.X.X...X.X.X.X.X.....X...X.X.X.X.X.X.X.X...X", ".X.XX..X.X.X.....X.X.X.X.X.X.X.X.X.X.X.X.X.X...", "X.X.XXX.X.X.X...XXX.X.X.X.X.X.X.X.X...X.X.X.X.X", ".X...X.X...X.X...X.X.X...X.X.X.......X.X...X.X.", "X.X.X.....X.XXX.X.X.....X...X...X.X...X.X.....X", ".X.X...X.X.X.X.X.X.XXX.X.X...X...X...X.X.X.X..."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {".X.X...X.X.X.X.X...X.XXX.X.XX..X.....X.X.X.X...", "X.X.X...X.....X.X.X.X...X.X.X.X.X.X.X.X.X.X....", ".X.X.X.X.X.X...X.X.X........XX.X.X.X.X...X.....", "X.X.X.X...X.X...X.X.X.X...X.X.X.X.X.X...X.X.X.X", ".X.X.X.X.X.....X...X.X.X.X.X.X...X...X.......X.", "X.X...X.XXX.X.X.X.X.X.X...X.X.X.X.X.....X.X.X.X", ".X.XXX.X.......X.X..XX..XX...X.X.....X.X.X...X.", "X.X.X.X...X.X.X.X.X.....X.X...X.X.X...X.X.X.X.X", ".X...X...X...X.X.........X.X.X...X.X.X.X.X.X.X.", "X.X.X.X.X...X.X.X.X...X.X.XXX.X.X.X.X.X.X.X....", ".X.X.X...X.X.X.X.X.X.X...X.X...X.X.X...X.X...X.", "X.X.X...X.X.X.X.XXX.X.X.X.X.X..X..X.X.X.X.X.XXX", "...........X.X.X.X...X.....X...X...X...X...X.X.", "..X.X.X.X.X.X.X.XX......XXX.X...X.X.X.X.X.X.X..", ".X.X.X...X...X.....X.X...X...X.X.X.X.....X.X.XX", "X...X.....X...X.X.X.X.X.X.X.X.X.X.X.XXX...X...X", ".X.X.X...X.X.....X.X.......X.X.......X.X.X.X.X.", "..X.X.XXX.X.X...X.X.X.X...X.....X.X.X.......X.X", "...X.X.X.X.X.X.X.X...X.....X.....X...X...X.X.X.", "X.....X.X.X...XXX...X..XX.XX..X.X.X.X.X...X.XXX", ".X...X.X...X...X.XXXXX...X.X.X.X.X...X.X...X.X.", "X.X.X...X...X.X.X...X.X...X.X.X.X.X.X.X.X.X.XX.", ".X.XX..X.X.XX.X....X...X.X...X.X.XXX.X...X.X.X.", "X.X.X.X.X...X.X.X...X...X.......X.X.X.X.X.X.X.X", ".X...X.X...X.....X.X.X.X...X.X...X.X...X.X.X...", "X.X.X.X.X.X...X.X.X.XXX.....X.....X.X.....X...X", ".X.X.X...X.X.X.X.XXX.X.XX..X.XXX.....X.X.X...X.", "X.X...X.X.X.X.X...X.X.X.X.X...X.....XXX.X.X...X", ".X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..X.X...X.X.X.X.X.X.X...X.XXX.X.X...XXX...X.X.X", "...X.X.....X.XXX.....X.X.X...X.X.X...X.X.X.X.X.", "X.X.....X.X.X.X.X...XXX...X.X.X.X.X...X.X.X...X", ".X.....X.........X.X.X.X.....XXX.X...X.X.X.X.X.", "..X...X.X.X...X.X.X.X.X.X...X.X.X.X...X.X.X...X", ".X.X.X.......X.......X.X.X.X.X.X...X.....X...X.", "X.X.X.XXX.X.X...X.X.X.X.X.X.X.X.X.X.XX..X.X.X..", ".X.....X.X...X.X...X.X.X...X.X.X.X.X.X.X.X...X.", "X.X...X...X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X", ".X...X.X...X...XXX.X.X...X.X.X.X...X.X...X.X.X.", "XXX.X...X.X.X.X...X.XXX.......X...XXX...X.X.X..", "...X.X.X.X.XXX.X.....X.X...X.X.X.X.XX.X....X.X.", "X.X...X...X.X.X.X.X.XXX...X.X.X.X...X.X.X.X...X", "...X.X.X.X.X.X...XXX.X.X...X.X...X.X.XXX.X...X.", "X.X.X.X...X.X.X.X.X.X.X.......XXX.X.X.X.X.X.X..", ".X.X.X.X.X...X.X.....XXX.X...X...X.....X...X.X.", "X.X...X.X.....X.XXX.X.X.X.X...X.XXX.X.X.X.X.X.X", "...X...X.X.X.X..XX.X.X.X.X...X.X.....X.X...X.X."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {".X.X.X...X.X.X.X.X...X.X.....X...X.X...X.....X.", "X.X.X.X.....X.X.X...X.X.X.X...X.X.X.X.X.X.X.X..", ".........X.X.X...X.....X...X.X.X.X...X.X.X.X...", "..X.X.X.X.X...X.X.X.X...X.X.X.X.X.X.X.X...X.X..", "...X...X.X...X...X.X.XXX.X.X.XXX.X.X.X.X...X...", "XXX.X.X.X...X.X.X.X.X.XXX.X...X.X.X.X...X.X.X.X", ".X...X.X...X.X.X.X...X...X.X.X.X...X.X.X.X...X.", ".XX.X.X.X.X.X.X.X.X.XXX.X.X..XX.X.X.X.XX....X..", ".X.....X.....X.X.X.X.XXX..XX.X...X.X.X...X.....", "X...X.X.XX..X.X.X.X.X.X...XXX...X.X.X.X.X.X.X..", ".X.........X.X...X.X...X.X...X.X..X..X.X...X...", "X.X.X.X.X.X.X.X.X.........X.X.X.X.X.X.X.X.X..XX", ".X.X.X.X...X.X.......X.X.X....X..X.X..XX.X.X.X.", "X.X.X.X.X.X.....X.X.X.X.X.X.X..X.XX.....X.X.X.X", ".......XXX.X.....X.X...X.X.X.XXX...X.X.X...X.X.", "X.X...X.X.X.X.X.X.XXX.....X.X...X.X.X.X...X.X.X", "...X.X.X.X.X.X.X.X...X...X...X.........X...X...", "X.X...X.X.X.X.X.X...XX........X.X...X.X.X.XXX.X", ".X.X.X.....X.X...X.X.....X.X.X.XXX.X.X...X...X.", "X.X...X.X.X.X.X...X.X.X...X...X.X.XXX.X.X.X.X.X", "...X.X.X.X..X...............XX.X.....X...X.XX..", "X...X.X.X.X.X...X.X.X...X.X.X..XX.X...X...X.X.X", "...X.X...XX..X...X.X.X.....X.....X.X.X.X...X.X.", "..X.X.X.X.X.X.X...X.X...X.X.X.X.X.X.X.X.X.X.X.X", ".X.X...X...X.X.....X.X.......X.X.X.X.X.......X.", "..X...X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.X", ".....X.X.......X.X...X.....X.X.X.......X.X.X...", "X.X.X.X.X.X.X....X..X.X.X.X.X.X.X...X.X.X.X.X..", ".X.X.X.X.X.X.X.X.....XXXX....X.......X.X.X.....", "X...X.X...X.X.X.X.X.X.X.X.....X.X.X.X...X...X.X", "XX...X.X...X.X.X.X.X.X...X.X.X.X.X.X.X...X.X.X.", "X.X.X.X.X.X.X.X.X.XX..X.X.X.....X.X.X.X...X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.......X.X.X...X...X.", "..X.X...X.X.X.X.X...X.X.X.X.X..XX.X.X.X.X...X.X", ".X...XXX...X.X.X...X.X.....X...X.....X.X.X...X.", "X......XX.X...X.XXX.X.X.X.X.X.X.X.......X.X...X", ".X.X.X.X...X.X.X.X.X...X.X.X...X.......X.X...X.", "X.X.X...X.X...X.X...X.X.X.X.X.X.X.X.X.XXX.X.X.X", "...X.X..XX...X.....X.......X.X...X...X.X.X.....", "X.X...X.X.X...XX......X.X.X...X.X.X.X.X.X.X.X.X", ".X.X.X.X......X.XX.X.X.X...X.X.X..XX.X.X.X.X...", "X.X.X.X.X.X.X.X.XXX.X.X.......X.X.X.XXX.X.....X", ".........X.X...X.X.X.X.X.X.X.X.X...X.X.X...X.X.", "X.X.X...X.X.X.X.X.X.X.X.X.X...X.X...X.X.X.X.X.X", ".....X.....X.X.XXX.X.X.......X.X.X.X.....X...X.", "X...X.X.X.X.X...X.....XX..X.X.X.X.X.X...X.X.X.X", "...X.X.....X.X...X.X.X.X.......X.X...X...X.X..."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> board = {"X.X.X.X.X.X.X.XXX.X.X.X.X.X.X.X.X.X.X.X...X.X.X", ".X.X.X.X.X.X.X.X.X.X...X.X.X.XXXXX.X.X...XXX...", "X.X...X.X...XXX.X.X...XXX.X.X.X.X.X.XXXXX.X.X.X", "..XX.X.XX.XX.X.X.X...X.X.XXX.XXX.XXX.XXX.X.X.XX", "X.X.X.X.X.X.X.X.XX....X.X.X.XXX.X.X.X.X.XXX.XXX", ".X.X.X.X.X.X.XXXXX.X.X.XXXXXXXX..XXXXXXX.X.X.XX", "X...X.X...X.XXX.X.X.X.X.X.X.X.X.X.X.XXX.X.X.X.X", ".X.X.X.XXX.X.XXX..XX.X.X.X.XXXXXX..X.X.X.XX..XX", "..X.X.X.X.X.X.X.XXX.X.X.X.X.X...X.X.X.X.X.XXX.X", ".XXX.X.X.XXXXX.X.X...X...X.X.X.X.X.X.X.XXXXXXXX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.....X.XXX.X", ".X.X.X.X...XXX...X...X.X.X.X.X.X.X.X.X...XXX.X.", "XXX.X.X.X.XXX.X.X.X.X.X.X.X.X.X.X.X.X...X.XXXXX", "XX.X.XXX..X..XXXX..X.X.X.X.X.X.X.XXXX..X.X.X...", "XX.XX.XXXXX.X.X.X.X.X.X.X.XXX.X.X.X.X.XXX...X.X", ".XXX.X.XXX.X.X.X.X..XXXXXX.X...X.X.X.X.X...XXX.", "X.X.X.X.X.X.XXX.XXX.X.X.X.XXX...X.X.X.XXX.X.X.X", ".XXX.X.X.XXX.X.X.X.X.X.XXX.X.XXXXX.X.XXX.X.X.X.", ".XX.X.X...XXX.XXX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "..XX.X.X.X...XXX.X.X.XX..XXXXXXX.X.X.X.X.XX..X.", "XXX.X.X.X.X.XXX.X.XXX.X.X..XX.X.X.X.X.X.X.X.X.X", ".X.XXX..XX.X.X.XXX.X.X.XXX.XXX.X.XXXXX.X.XXXX..", "X.X.X.X.....X.XXX.X.X.X.X.X.X.X.XXX.X.XXX.X.X.X", ".X.X.X.X.X.X.XXXXXXXXX.XX..X.X.X.X.X.XXX.X.X.XX", "X.X.X.X.X.X.X.X.X.X.X...XXX.X.X.X.X.X.X.X.X...X", ".X.X.X.X.XXX.X.XX..XXX.X.X..X..X.XXXX..XX..X.XX", "X.X.X.X.X.XXX...X.X.X.X..XX.X.XXXXX...X.XXX...X", "XX...XXX..XX.X.XXX...XXX.XXXXX.XXXX...XX.X.XXXX", "X.XXX.X...X...X...X.X.X.X...X.X.X.XXX...XXX.X.X", ".XX.XXXX.X.X.X.XXX.X.XXXXXXXXX.XX..XXX.XXXXX.XX", "X.X.XXX.X.X.X.X.X.X.X.X.X.X.X.X.....X.X...X.X.X", ".XXX.XXX.XXXXXXX.X.X.X.X.X.XX..X.XXXXXX..X.XXX.", "X.X.X.X.X.X.X.X...X.X.XXX.X.X.X.XXX.X.XXX.X.X.X", "XXXX.X.X.X.XXX.X.X.X.X.X.X.X.XX..X.XXX.X.X.X.X.", "X.X.X...X.X..XXXX.X.X.X.X.X...X.X.X.XXX.X.X.X.X", ".XXX.XXXXXX.XX.X.X.X.X.XXXXX...XXX.X.X.X.X.X.XX", "X.X.X.X.X.X.X.X.X.X.X...X...X.X.XXX.XXX.X.X.X.X", ".X.XXXXX...XXXXXXX.X.X.X.X.XXX.X.XXX.X.X.X.X.X.", "X.X.X.XXX.X.X.X.X.X...X.X.X.....X.X.X.X.X.X.X.X", "X.X..X.X.X.X.X.XXX.X.X.XXXXX.XXX.XXXXX.X.X.X.X.", "X.X.X.XXX.X.XXX.X.X.X.X.XXXXX.X.X.X.X.X.X.X.X.X", "...X.X.X.XXX.X.X...XXXXX..XX.X.X.X.XXXXX.XXX.X.", "X...X.X.X.X.X.X.XXXXX.X.X.X.X.X.X.X.X.X.X.XXX.X", ".X.X.XXX.X.X.X.X.XXX.XX..X.X.X.X.X.XXX.XX..XXX.", "X.X.X...X.X.XXX.X...X.X.X.X.X.X.X.X.X.X.X.X.XXX", "..XX.X.XXX.X.X.XXX.X.X.XXX.X.X.X.XXX...XXXXXXX.", "X.X..XX.XXX...X.X.X.X.X.X.XXX.X.X.X.X...X.X.X.X"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> board = {"X..X..X.X.X.X.XXX.X.X.X.XXX.XXX...X.X.X.X.X.X.X", "XXXX.X.X.XXXXXXX.X.X.....XXXXX...X.X.X.XXXXXXX.", "..X.X.X.X.X.X.X...XXX...X.XXX.X.X...X.XXX...X.X", ".XXX.XXX.X.X.X.X.XXX.X.X.X.X...X.X.X.X.X.XXX.X.", "X.X.X...X.XX..X.X.X.X.X.X.X.X.X.X.XXX.X.X.X.X.X", ".XXXXX.X.XX...XX.XXX.X.X...X.X.XXX.X.XXX.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X...X.X.X.X.X", ".X..XX.X.X.X.X.XX..XXX.X...X.X.XXX.XXX.X.X.X.X.", "X.X.X.X.X.XXX.X.XXX.X.X...X..XX.X.X.X.X.X.X.X.X", "XXXX.X.X.XXX..XX.X.XXX...XX.XX...X.X.X.XXX.XX..", "X.X.X.X.X...X.X.X...X.X.XXXX..X.X.X.XXX.X.X.X.X", ".X.X.X.X.XXXXX.X.X.XXX.X.X.X.XXX...XXX.XXXXX.X.", "X.X.X.X.X.X.X.X.....X...XX.XX.XXX.X.X.X.X......", "XX.XXX.X.XXXXX.XXX.X.XXXXX.X.X.X.X.X.X.X...X.X.", "X.X.X.X.X.XXX...X.X.X.X.X.X.X.X.X.X.X.X.X...X.X", "XX.X.XXX.X.X.X.X.XXX.X.X.X.X.XXXXX.X.XX..X.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.XXX", ".XXX..XXXX.X...X.X.X..XX.X.XXX.X.X.X.XXX.X.X.X.", "X.X...XXX.X..XX...X.X.X.X.XXX.X.X.X.X...X.XXX.X", ".X.X.XXX.X.XXX.X.X.X.X.X.XXXXX.X.X.X...XXXXX.XX", "X.X...X.X..XX.X.X.XXX.X.X.XXX.X.X.X.X...X.X.X.X", ".X.XXXXXXX.X.XXXXX.X.X.X.XXXXXXXXXXX.X.X.X.X.X.", ".X.X..X...X.X.X.XXX.X.X...X.X.X.X.X.X.X.X.X.X.X", ".X.X.XXX.XXX.X.XX..X.X.X.XXX...X.XXX.X.XXX.XXX.", "....X.X.X...X.X...X...XX..X.XXX...X.X.X.X.X.X..", "XX.X...XX..X.X.X...XXXXXXX.X..XX...X.XXX.X.XX..", "X.X.X...X.X.X.X.X....XX.X.X.X.XXX.X.X.X.X...X.X", "XXXX.X.XXX.XXX.X.X.XXX.XX..XXXXXXXX..X.X.XXX.X.", "X.X.X.X.X.X.X.X.XXX.X.X.X.XXX.X.X.X.X.X.X.XXX.X", "XX...X.X.XXX..XX.X.X.X.X.XXXXXXX.X.XXXXX.XXX.X.", "X.X.X.X.X.X.X...X.XX..X.X.X.X.X.X.X.X.X.X.X...X", ".X.X.XXX.X.X.XXX.X.XXX.X.XXX.XXX.X.X.X.XXX...X.", "X.X.X..XXXX.X.X.X.X.X.X.X.XX....X.X.X.X.X.X.X.X", ".X.X.X.X.XXXXXXX.X.XXX..XX.XXX.X.X...X.X.X.X.XX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X...X.X.X.X...X", "...X.X..XX.XXX.X.XXX.X.XX..XXX...X.X.X.XX..XXXX", "X.X.X.X.X.X...X.X.X.XXX.X.X.X.X.X.X...X.X.X.X.X", ".X.X.X.X.X.X.X.XXX.X.X.XXXXX.XXX.X.X.X.X.XXX.XX", ".XXXX.X.X...X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X..XXX.XX.XXX.X.X...XXX...XXX.X.X.X.XXX.XXX.XX", "..X.X.X.X.X.X.X.X.......X.X.XX..X.X.X.X.X.X.X..", ".XXX.XXX...X...XXXXX.X.X.X.XXX.XXXXX.XXX..XX.X.", "X.X.X.X.X.X.X.X..XXX..X...X.XXX.X.X.X.XXX...X.X", "XXXXXX.X.X.X.X.X.X.XXXXX.X.X..XXXX.X.X.X.XXXXX.", "X...X.X.X.X.XXX.X.X.X.X.X.XXX.X.X.X...X.X.X.XX.", ".X.X.X.X.X.X.XXXXXXX.X.XXX.X.X.X.X.X.X.X.X.X.X.", "X.X.X..XX.X.X.X...X.X.X.X.X.XXX.X.X.XXX.X.X.X.X"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> board = {".X.....XXX.XX..XXXXXXXXX...X.XX.XX....X.....XX", ".XXXX..X..XXXXXXXX....XX.X.X.X.....XXX.X.X.X.X", "....XX....X.XX..X.X...XX.X..XXXXXXX..XXXXXXXXX", "XX.XXXXX.X.X..X..XX.XXX..XX...XXX.X...........", "XX.XXXXX.X.X..X..XX.XXX..XX...XXX.X...........", "XX.XXXXX.X.X..X..XX.XXX..XX...XXX.X...........", "XX.XXXXX.X.X..X..XX.XXX..XX...XXX.X...........", "XX.XXXXX.X.X..X..XX.XXX..XX...XXX.X...........", "....XX....X.XX..X.X...XX.X..XXXXXXX..XXXXXXXXX", "....XX....X.XX..X.X...XX.X..XXXXXXX..XXXXXXXXX", "....XX....X.XX..X.X...XX.X..XXXXXXX..XXXXXXXXX", "....XX....X.XX..X.X...XX.X..XXXXXXX..XXXXXXXXX"};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> board = {".X.......X..XX....X............X...X.....X.....", "X.X..X...X....XX..XX...........................", "....X...X..X.................X.....XX.X....X...", "....XX.......X..X....X.X....X.XXX..X...X...X...", "....X..X.X....X..X....X....X.........X.......X.", "..XX...X........X.X...X....X...X.X...XX...X.X..", ".X.X...............X..X.XXX...............XX.X.", ".XX..X.X...X..X....X.X......XXX.......X.X..X..X", "...............X..XX..X..........X.X........X..", "X........X.X..........X............X.X.X.......", ".....X.....X...X..........X.......X.........X..", "X...................X...X.....X..........XXX...", "X..........X......X...X..X.XX........X....XX.X.", "X.........................X.X......X.X.......X.", ".X..XX...X..........X..............X....X.X..X.", ".X..XX.X...X...X..X...X......X.X.....X.XX...X..", "........X....................X...X....XXXXXXX..", ".X....XX...X....XX.X...X.XX...X........X....X..", "...X....X...X.XX............XX.........X.......", ".....X....X.....X.....X.X.X.X.X.......X....XXX.", "....X...........X...........XX..XX......X..X..X", "..X......X...........X.....XX...X..XX..XXX.....", "....X....X..XX....XX.......X......X.X....X..XX.", ".............X...X....X...X.X..............X...", ".....X.X...X...X............X.X....X.......X...", "...X...X..XXXX.................................", "....X.......X..X......XX..X..X.X.X..X..X..XXX.X", "..X.............X..X.........XX................", "..XXX............XXX..X.X..X...X.....X..X.X....", "...................X.X.....X..........X.......X", ".......X..X...X...X.X.......XX..X.....X..X...X.", "XX.........X.....X..XX....X....XX...X.X...X....", "..X.XXX..X..X...............X.......XX.........", "X.X...XX..XX..X......X.........X....X.XX.X..X..", "..........X...........XXX.......XX...XX..X.X..X", ".X...XX......X.....XXX..X.XX.....XX....X....X..", "..XX..X....X.X..................X.....X.....X..", ".....X......X..X.......X.X..X...XX...X.......XX", "X.....X......X..X..X............XXX....X..XXX..", "..X...................X..X....X......X....XX...", ".....X........XX..X.X...X.....XX............X.X", "...X.....X..........X...............XX.....X...", ".X..X..X...X.X......X......X.........XXX..X..X.", "...XX..X.........X...........X......X.X...X....", "XX.............X.X..........X.........X...X.XXX", "...X..X........X.XX............X.........X.....", ".........X.X..............X...X.....X.....X.X.."};
    TheTilesDivOne* pObj = new TheTilesDivOne();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 419;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22936964&rd=15495&pm=12500
********************************************************************************
#include <functional>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <sstream>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <cctype>
#include <vector>
#include <string>
#include <bitset>
#include <cmath>
#include <queue>
#include <stdio.h>
#include <stack>
#include <ctime>
#include <list>
#include <map>
#include <set>
#include <assert.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define TR(i,x) for(typeof(x.begin()) i=x.begin();i!=x.end();i++)
#define ALL(x) x.begin(),x.end()
#define SORT(x) sort(ALL(x))
#define CLEAR(x) memset(x,0,sizeof(x))
#define FILL(x,c) memset(x,c,sizeof(x))
 
using namespace std;
 
const double eps = 1e-8;
 
#define PB push_back
#define MP make_pair
 
typedef map<int,int> MII;
typedef map<string,int> MSI;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<long double> VD;
typedef pair<int,int> PII;
typedef long long int64;
typedef long long ll;
typedef unsigned int UI;
typedef long double LD;
typedef unsigned long long ULL;
 
class TheTilesDivOne {
public:
  int find(vector <string>);
};
 
const int max_edge = 100007,
          max_vertex = 50*107*4,
          inf = 0x3f3f3f3f;
 
struct EDGE  {
    int next,u,w,v,r,idx;
    bool reversed;
} edge[max_edge];
 
int last = 0,V[max_vertex],n,m,s,t;
int height[max_vertex],nheight[max_vertex];
 
void insert(int u,int v,int w) {
    edge[last].u = u;
    edge[last].v = v;
    edge[last].w = w;
    edge[last].r = last + 1;
    edge[last].next = V[u];
    edge[last].reversed = false;
    V[u] = last++;
 
    edge[last].v = u;
    edge[last].u = v;
    edge[last].w = 0;
    edge[last].r = last - 1;
    edge[last].next = V[v];
    edge[last].reversed = true;
    V[v] = last++;
}
 
//AugPath(n,s,s,t,0xfffffff,edge);
long AugPath(int n,int u,int s,int t,int push,EDGE edge[]) {
   // cout << s << " " << t << endl;
    if (u == t)
        return push;
    int flow = push,minheight = n-1;
    for (int i = V[u];i != -1;i = edge[i].next)
        if (edge[i].w) {
            if (height[edge[i].v] + 1 == height[u]) {
                int delta = flow < edge[i].w ? flow : edge[i].w,f;
                if (delta) delta = AugPath(n,edge[i].v,s,t,delta,edge);
                edge[i].w -= delta;
                edge[edge[i].r].w += delta;
                flow -= delta;
                if (0 == flow || height[s] >= n) return push - flow;
            }
            if (height[edge[i].v] < minheight) minheight = height[edge[i].v];
        }
    if (!(push - flow)) {
        nheight[height[u]]--;
        if (!nheight[height[u]]) height[s] = n;
        height[u] = ++minheight;
        nheight[height[u]]++;
    }
    return push - flow;
}
 
int idx[501][501],
    mat[501][501];
int L[501][501], R[501][501];
 
int dx[4] = {1, 1, -1, -1},
    dy[4] = {1, -1, 1, -1};
int N, M;
 
inline bool ok(int x, int y)
{
    return x >= 0 && x < N && y >= 0 && y < M;
}
 
int dir[4][4];
 
int connL[501][501][4],
    connR[501][501][4];
 
inline int next_int() {
    int c; c = getchar();
    while (c < '0' || c > '9') c = getchar();
    int n = 0;
    while (c >= '0' && c <= '9') n *= 10, n += c - '0', c = getchar();
    return n;
}
 
int ddx[4] = {0, 0, -1, 1},
    ddy[4] = {-1, 1, 0, 0};
 
int go(int n, int m) {
  N = n; M = m;
    dir[0][1] = 0;
    dir[1][0] = 1;
    dir[1][2] = 2;
    dir[2][1] = 3;
/*
    last = 0;
    for (int i = 0;i <= m*2;++i)
        V[i] = -1;
    t = n-1; s = 0;
    memset(height,0,sizeof(height));
    memset(nheight,0,sizeof(nheight));
    nheight[0] = VERTEXS; int flow = 0;
    while (height[s] < VERTEXS)
        flow += AugPath(n,s,s,t,inf,edge);
    printf("%d\n",flow);
*/
   // while (EOF != scanf("%d%d", &N, &M))
    {
        last = 0;
        for (int i = 0; i < N*M*2+10; ++i)
            V[i] = -1;
 
       // REP(i, N) REP(j, M) mat[i][j] = next_int();
        int cnt = 0;
        REP(i, N) REP(j, M) idx[i][j] = -1;
        REP(i, N) REP(j, M) if (mat[i][j] == 2)
        {
            bool OK = false;
            REP(k, 4)
            {
                int nx = i + ddx[k],
                    ny = j + ddy[k];
                if (ok(nx, ny) && mat[nx][ny] == 1)
                {
                    OK = true;
                    break;
                }
            }
            if (OK) idx[i][j] = cnt++;
        }
        else if (mat[i][j]  == 1)
        {
            int OK = 0;
            REP(k, 4)
            {
                int nx = i + ddx[k],
                    ny = j + ddy[k];
                if (ok(nx, ny) && mat[nx][ny] == 2)
                {
                    OK++;
                    if (OK >= 2) break;
                }
            }
            if (OK >= 2)
            {
                L[i][j] = cnt++;
                R[i][j] = cnt++;
                insert(L[i][j], R[i][j], 1);
            }
        }
        s = cnt++, t = cnt++;
 
        REP(i, N) REP(j, M) REP(k, 4) connL[i][j][k] = connR[i][j][k] = false;
 
       // cout << " cnt = " << cnt << endl;
 
        for (int i = 0; i < N; ++i)
            REP(j, M) if (idx[i][j] != -1)
        {
            if ((i&1))
            {
                insert(idx[i][j], t, 1);
                continue;
            }
            insert(s, idx[i][j], 1);
            //map<int, map<int, int > > M;
            for (int d = 0; d < 4; ++d)
            {
                int nx = i + dx[d],
                    ny = j + dy[d];
                if (!ok(nx, ny)) continue;
                if (idx[nx][ny] == -1) continue;
             //   int dir
            //    if (d
                if (mat[i+dx[d]][j] == 1)
                {
                  //  cout << "src = " << i << " " << j << " mid = " << i+dx[d] << " " << j << " dest = " << nx << " " << ny << endl;
                  //  M[dx[d]][0] = 1;
                    if (!connL[i+dx[d]][j][dir[-dx[d]+1][1]])
                    {
                        connL[i+dx[d]][j][dir[-dx[d]+1][1]] = true;
                        insert(idx[i][j], L[i+dx[d]][j], 1);
                    }
                    if (!connR[i+dx[d]][j][dir[1][-dy[d]+1]])
                    {
                        connR[i+dx[d]][j][dir[1][-dy[d]+1]] = true;
                        insert(R[i+dx[d]][j], idx[nx][ny], 1);
                    }
                }
 
                if (mat[i][j+dy[d]] == 1)
                {
                  //  cout << "src = " << i << " " << j << " mid = " << i+dx[d] << " " << j << " dest = " << nx << " " << ny << endl;
                  //  M[0][dy[d]] = 1;
                    if (!connL[i][j+dy[d]][dir[1][1-dy[d]]])
                    {
                        connL[i][j+dy[d]][dir[1][1-dy[d]]] = true;
                        insert(idx[i][j], L[i][j+dy[d]], 1);
                    }
                    if (!connR[i][j+dy[d]][dir[1-dx[d]][1]])
                    {
                        connR[i][j+dy[d]][dir[1-dx[d]][1]] = true;
                        insert(R[i][j+dy[d]], idx[nx][ny], 1);
                    }
                }
            }
        }
 
        n = cnt;
        //memset(height,0,sizeof(height));
       // memset(nheight,0,sizeof(nheight));
        REP(i, cnt+1) height[i] = nheight[i] = 0;
        nheight[0] = n; int flow = 0;
        while (height[s] < n)
            flow += AugPath(n,s,s,t,inf,edge);
        return flow;
    }
    return 0;
}
 
int TheTilesDivOne::find(vector <string> board) {
  int n = board.size(), m = board[0].size();
  REP(i, n) REP(j, m) {
    mat[i][j] = 0;
    if (board[i][j] != 'X') {
      if ((i + j) & 1) {
        mat[i][j] = 2;
      } else mat[i][j] = 1;
    }
  }
  return go(n, m);
}
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/