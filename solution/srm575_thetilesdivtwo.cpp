/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12501
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

class TheTilesDivTwo {
public:
    int find(vector<string> board);
};

int TheTilesDivTwo::find(vector<string> board) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"X.X", "...", "X.X"};
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
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
    vector<string> board = {"X.....XXX.XX..XXXXXXXXX...X.XX.XX....X", ".XXXX..X..XXXXXXXX....XX.X.X.X.....XXX", "....XX....X.XX..X.X...XX.X..XXXXXXX..X", "XX.XXXXX.X.X..X..XX.XXX..XX...XXX.X..."};
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {"X.....XXX.XX..XXXXXXXXX...X.XX.XX....X", ".XXXX..X..XXXXX.XX....XX.X.X.X.....XXX", "....XX....X.XX..X.X...XX.X..XXXXXXX..X", "XX.XXXXX.X.X..X..XX.XXX..XX.X.XXX.X..."};
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"...............................................", "...............................................", "...............................................", "..............................................."};
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"....", "....", "...."};
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {"X.X", "...", "X.X"};
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
    clock_t start = clock();
    int result = pObj->find(board);
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
    vector<string> board = {"X...", "....", ".X.."};
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {"X.....XXX.XX..X...XXXXX...X.XX.XX....X", ".X..X..X..XXXXX.......XX.X.X.X.....XXX", "....XX....X.XX..X.X...XX.X..XXXXXXX..X", "XX.XXXXX.X.X..X..XX.XXX..XX...XXX.X..."};
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {".....XXX.....XX...XXXX..X....XX....XXXXXX...X.X", "..X..X.X.....X....XX.X..X....XX.X.......X...XXX", "X..X.X.X.....XX...XX.X..X....XX....XX...X..XX.X", "....XXX......XX...X..X..X....XXXX..X....X...X.X"};
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {"XX..XXX.....X...X.XX.XX....X", "XX....XX....XX.X.X.X.....XXX", "X.XX..X.X......X..XXXXXXX..X", ".X..X..XX......XX.......X..."};
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {"...............", "...............", "...............", "..............."};
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
    clock_t start = clock();
    int result = pObj->find(board);
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
    vector<string> board = {"..X...X......XX...X....X.X.X.X.X.XXX......XX...", "....XX..X...X.......XX........XXX..X..X..X...XX", "X.X....X.....XX.X.X.X..X..X..X..X..XX......XXXX", "....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.....XXX"};
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {".X", "XX"};
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
    clock_t start = clock();
    int result = pObj->find(board);
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
    vector<string> board = {"X.", ".."};
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {"X..", "X.X"};
    TheTilesDivTwo* pObj = new TheTilesDivTwo();
    clock_t start = clock();
    int result = pObj->find(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23149727&rd=15495&pm=12501
********************************************************************************
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
using namespace std; 
class TheTilesDivTwo { 
public: 
    int f[1000][1000],a[1000][1000]; 
    int n,m,i,j; 
    bool check(int s,int x,int k)  
    { 
        return (a[x][k]==0) && (!((s>>(k-1))&1)); 
    } 
    void dfs(int x,int k,int s,int ns,int sum) 
    { 
        if (k>n) { 
            f[x+1][ns]=max(f[x+1][ns],f[i][j]+sum); 
            return ; 
        } 
        dfs(x,k+1,s,ns,sum); 
        if (((x+k)%2==0) && check(s,x,k)) { 
            if (check(s,x,k-1) && check(ns,x+1,k)) dfs(x,k+1,s | (1<<(k-2)) | (1<<(k-1)),ns | (1<<(k-1)),sum+1); 
            if (check(s,x,k+1) && check(ns,x+1,k)) dfs(x,k+1,s | (1<<(k-1)) | (1<<(k)),ns | (1<<(k-1)),sum+1); 
        } 
        if (((x+1+k)%2==0) && check(ns,x+1,k)) { 
            if (check(s,x,k) && check(ns,x+1,k-1)) dfs(x,k+1,s | (1<<(k-1)),ns | (1<<(k-2)) | (1<<(k-1)),sum+1); 
            if (check(s,x,k) && check(ns,x+1,k+1)) dfs(x,k+1,s | (1<<(k-1)),ns | (1<<(k)) | (1<<(k-1)),sum+1); 
        } 
    } 
  int find(vector <string> b){ 
        memset(a,1,sizeof(a)); 
        n=b.size(); 
        for (int i=0;i<n;i++) { 
            m=b[i].size(); 
            for (int j=0;j<m;j++) 
                if (b[i][j]=='X') a[j+1][i+1]=1; 
                else a[j+1][i+1]=0; 
        } 
        memset(f,129,sizeof(f)); 
        f[1][0]=0; 
        for (i=1;i<=m;i++)  
            for (j=0;j<=((1<<n)-1);j++)  
                if (f[i][j]>=0) dfs(i,1,j,0,0); 
        int ans=0; 
        for (int i=1;i<=m;i++) 
            for (int j=0;j<=((1<<n)-1);j++) ans=max(ans,f[i][j]); 
        ans=max(ans,f[m+1][0]); 
        return ans; 
  } 
};

********************************************************************************
*******************************************************************************/