/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2417
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

class GravityBomb {
public:
    vector<string> aftermath(vector<string> board);
};

vector<string> GravityBomb::aftermath(vector<string> board) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> board = {"..X", "X.X", ".X."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...", "...", "..X"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"...", "X..", ".X."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...", "...", "XX."};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"XXXXXX", "......", "......"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"......", "......", "......"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"XX.XX....XX"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX.XX....XX"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"X", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "."};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"X.X...XXXXX..X.X.X.XX.XXX..XXXX.XXX...X", "X.X.X.X.XX.X..X...X.XXX.X...XXX.XX.XX..", "XX.X.XXXXXX.X...X.XX..XXX.......XX.XXXX", ".X.XXX.X..XX.X.XXX.XXX.XX.XXX..XXXX..X.", "XXX.X.XX.XXX.X.XX..X..X..X...X..XX.X..X", "XX.X.X..X.X.XX..XX.XXX.X.XX...X...X..XX", "XX.X...X..XXX...XXXX...XXX..X.X.X....X.", "...XXX.XXX.X.X.X...X..X.X....X..XXXX.XX", ".X...XXXXX...X.X...X..X.XX.XX.X...X.XXX", "XX....XX...X.X.XX.X...XXX.XXXX.XX.X.XX.", "XXXX.XXXX....XX.X.XXX..XXXX.X.XX.X...XX", "X.XXXX..XX.X.XX....X...X..X.X.XX..XX..X", "XXX.XX.X..X.XX.XX.XX.X.X..X.X..X.XXXX.X", "X.XXXXX....X.XXX..X...XX...X.XX......X.", "XX.X.X.X.XXX....XX.X.X.XX..XXXXX.XXXX..", "...X.X.XX....XXX..X...XXX.X..XX.X..X.X.", "X.X.X.....X.XX.XXXXX..X..XX.XXXX..X..X.", "X..XX..XXXX..XX.XX.XX.X....XXXX.X..XX.X", ".XX.X.XX.XX.X.X..XXXX..X...XX.XXXXX.XX.", "XX.XXXXX.XXX.XXX.XXX.X.XXX.X.X...X..XXX", "X..XXX..X.X.XXX.XX.X..X..XX.......X.XX.", "X....XX.X.X.XXX....XX.....X.X.XXXXXXXX.", "..........XX..X..X.XXX.X.X.X.XX...XX.XX", "X.X.X.........XXXX.XXX.......XX..XX.XXX", ".XXX..XX..X.X....X...X..X.XXXXX..XXX..."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", "...................X...................", "...................X...................", "X..................X...................", "X............X.....X..........X......X.", "X......X..X..X.....X..........X...X..X.", "X......X..X..X.....X...X....X.X...X..X.", "X..X.X.X..X..X.....X...X....XXX..XX..X.", "XX.XXX.X..X..X..XX.X...XX...XXX..XX..XX", "XX.XXXXXX.X..XXXXX.X..XXX...XXX.XXXXXXX", "XXXXXXXXXXXX.XXXXXXX..XXX.XXXXX.XXXXXXX", "XXXXXXXXXXXX.XXXXXXXX.XXX.XXXXX.XXXXXXX"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"..X.XXX......XXXXXX", "XX.....XXX..XX...X.", "X...X..XX.XXX..X.XX", "...XX.X...X.X......", "..XX..X...X.X.XX.XX", "XX.XXXXX....XXX..XX", ".XX.XXX.X.XXX.X..X.", "..X.XX..X..X..XXXXX", ".XXX..XX.X...XX...X"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...................", "...................", "...................", "...................", ".................X.", "....X.X.....X.X..XX", "..X.X.X.....X.X..XX", ".XXXXXXXX.X.XXXX.XX", "XXXXXXXXX.XXXXXX.XX"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"X...X..XX.XXXXX.X.X.XXX", "...X...X.X.XX.XXXX.X..X", "..XX...XX.X.XXXX..XXX..", ".XXXXXX..XXX....X..X.XX", ".X..XXXXXX.XX.X..X.XX.X", ".XX...X.X..XX..X.X....X", "XXX.X.X.X.XXXX.X.XXXXX.", ".XXX...X.X.XXX..XXX..XX", ".XX..XXX.XX......XX.X..", ".XX...XX.XX..XX..XX..XX", "X.XXX.X.X...XX..XX.XX.X", "XX....XXXXXXXXXXXXXX...", "XXX.X.X.XXX..X.....XX..", "XXX.....XX.XXXX..X..X..", "..XX.XX.X.X.....X..XX.X", "XX.XXX.......XXX.X.XX..", "XX.XXX.....X.......X..X", ".XX..X.X.XX...XX.X...XX", "..X.....X..XX...XXXX...", "XX.X.........X.X..XX.X.", "X........X.XXX..X.X.X.X"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".X.....................", ".XX..............X.X...", ".XX........XXX...X.X..X", ".XX.....XX.XXX...X.XX.X", "XXX...X.XXXXXX...XXXX.X", "XXXX..XXXXXXXXX.XXXXX.X", "XXXXX.XXXXXXXXXXXXXXX.X"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"XXX.XX.XX.X.X.X.X.XXXXX.X..X..XX....XXXX.XX", "X.X.XXXXX.X....XX..X.XX.XX.XXX.....X..X.XXX", ".XXX..X.XXX..XX.X.XXX.X.XX...X.....XXX.XXX.", "X.XXX..X.X.X..X.XXX..X.XXXXX..XX....X.XXXXX", "...XX.XX....XX.X.X..X.X.XXX...XXXX.X.X...XX", "XXXX..XX.XX.......X...XX.X.....XX.X.X.X..XX", "....XX.X..X...X..X....XX.X.XX.....X....X...", "X..X..X.....X........X..X..XXX.....X.X.X.XX", "XX.X....XXXX.XX..X..XXXXXXX.XX...X....X.X..", ".XXXXXX..X..X.X..X.XXX.XX.XX...X.X.XXXXXX..", ".XX.XXXXX..X.X...XXX......X.XXX..X.X..X..XX", ".X.XX.XXXXX.X..XX....X...X.XXX.X.XX..X..X.X", "XXXX.XX.XXX.XX.........XX.XXX.X..X...XXXX..", "X..XX.XXX...X.X.XX.X..X..X..XX..XX.XX...XX.", "XXX.X..X.XXX...X.X.XX.X.XXX...XXX....X.X.X.", "..X.XXX.XXX....XX...XXX.X.XXXXX..XX......X.", "X...X..XXX...X.X..XX.XXX..XX...X..XX.X.XX..", ".XX.X..XXX..XX.........X.X..XX....XXX.XXXXX", ".X.XX.X..X.XXX.X.X.XXX....X...XX..X..X.X.XX", "..XXX..XXX.X.X.XX.X..X.XX.X..XXX.XXXX..X..X", ".X..XXX...X..X.XXXXX.XXX....XXX..XXX....X.X", ".X.X....X.X..X..XXX.XX..X.X.X..XXX.XXXX.X.X", "X...XXXX.XXX...X.X..XX..XX.XX..X.X..XX.XXX.", "X....XX..X..XX.X...X...X...XXX.XX.X.......X", ".X...X.X..XX.X...X.X...XXX.X....X.X.XXXX.X.", "X.XXX..X.....XXXXX.XX.X.X.....XXXX...XXXX..", ".XXXXX.X.XXXX....X..X.X.XX.XX.XX...X..XXX.X", ".X...X...X.X.X..XX.XX..X..XX.XXXXX..X.X...X", ".XX...XXXX.....X..X.XXXXX.XX.X.XX.X..X....X", "....XXXX.X....X.XX.XXX....X...X.XXX.X...XX.", ".XX.XX...X.XX.XX.XXX..X.XXX.X.XX.XXX.X.XXXX", "X.XX..X...XX....X..XXXX.XX.X.X......XXXX.X.", "X.X....XXXXX..X.XXX.XX.X.XX.X.X.XX..X..XX..", ".XXXXX.X.X....XXXXXX.X.X...XXXX..XX..XXXXXX", "..XXXXX......X...XXXX..XX.XXXX..XX...X..X..", "X.X..XXXXX.....XX.X..XX.XX...X..X.X.XX..XX.", "...XX......X.X....X..XXX..X..XX...X.XXX.X.X", "XXX.X.X...X.X..X...X.XXXX....XXXXXX..XX..X.", "X.X.XX.XXX.XXXXXX..XX..XX..X.XXX.XXX...XX..", "...XXX..XXX.X..X.XX...X....XX..XX.X...X.X.X", "XX..XXX...X.X.XXXX...X.XX...X....XXX.X.XXXX", "..XXXX....X.XX.......XXX..X..X..X...XXXX...", ".X..X.X.X..X.XXX.X....X..X.XXX...X.X......X", "X.X..XXX..XX..XXXX...XXXXX.XX.XXXXXX..X...X", "...X...XXXX...XX..X.X.XX...X.....XX.X.X...X", "X.X.XX.XX..X...XX...XXX.XXX..X...XXXXXX.X.X", "..X.XX.XXX...X...XXX.X.....XX.XX.XX.XX.XX.X", ".XX....X..XX.X.X.XX.XXX.X...XX.X...X.X.XX..", ".X.XXX..XX..X.XXXXXX.XXXXXXXX..XX....X.XXXX"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "....X......................................", "....X......................................", "....X......................................", "....X......................................", "....X................X..X...............X..", "..X.X..X.X.......X...XX.X............X..X.X", "..X.X..X.X.......X...XX.X........X...X..X.X", "..X.XX.X.X.....X.X...XX.X..XX....X...X.XX.X", "..X.XX.X.X.....X.X...XXXX..XXX.X.XX..X.XX.X", ".XX.XXXX.XX....X.X...XXXX..XXX.X.XX..X.XX.X", ".XXXXXXXXXX....X.X.X.XXXX..XXX.X.XX..XXXXXX", ".XXXXXXXXXX..X.XXX.XXXXXXXXXXXXX.XX..XXXXXX", "XXXXXXXXXXX..X.XXXXXXXXXXXXXXXXX.XX.XXXXXXX", "XXXXXXXXXXX..X.XXXXXXXXXXXXXXXXX.XXXXXXXXXX", "XXXXXXXXXXXX.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"...XX.....X.X", "....XXXXX....", "XX.XXXX...XX.", "X.X....X....X", "....X.X.XXXXX", "XX..X.X.X....", ".....XXXX..XX", ".XXX..X.....X", "X.X.X.XXXXX..", "X....XXX.X.XX", "X.....X.X.X.X", "X.X.XX.X...X.", "XX.XXX...X...", "XX.X.X..XX...", "..XXXX..X..X.", "XXX..XXX..XXX", ".XXX......X.X", "X.X..XXX.X...", "XXXX..XX..XX.", ".XX...XXXXXXX", "XX.XX.X..XXX.", "..X......XXX.", ".XXXXX..XX.X.", "XX.X..XXXXX..", ".XX.X.XX.XX.X", ".XX.XXXXX..XX", "XXX.X.XXXXX.X", "X.....XXXX...", "X...XX..X.X..", ".X..XX.X.....", "X.X..X..XX.XX", "....X.X...X.X", "X.X.XXX..X.XX", "..X....X.X..X", "XX..XX..X....", "X.X...XXXXXX.", "...XX.X..XX.X", "XXXX.X.XXXXXX", "XX.X.X....XX.", "X.XXX.XX..X..", ".X....X...XX.", "X.XX....XX.XX", ".XX.X.X.X...X", "...X..X..X.X.", "XXXX.XX..XXX.", ".X.XX.XX.X..X"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", "......X......", "......X......", "......X......", "X.....X......", "X.....X......", "X.X...X..X...", "XXX.X.X..XX..", "XXX.X.X..XXXX", "XXX.X.XXXXXXX", "XXX.XXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"XXX.", ".XX.", "X.XX", "XX..", "X.XX", "..X.", "XXX.", ".X..", "XXXX", "XXX.", "...X", "X...", ".XXX", "XXX.", "X..X", "X.XX", ".XXX", "XXX.", "X..X", "XXXX", "....", "..XX", "..X.", "..X.", "...X", "XXXX", ".XXX", ".X..", ".X..", "X.XX"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "....", "..X.", "..X.", "..X.", "..X.", "XXX."};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {".", "X", ".", ".", ".", ".", "X", ".", ".", "X"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".", ".", ".", ".", ".", ".", ".", ".", ".", "."};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {".XX.X...XXXXXX.X.XXX......X...", "..XX...XX.XX...XXX..X..X.X.XX.", "X...XXX.XXXX..X....X....XX.X.X", ".X.XXXX..XXXX.XXXXX...XX.X.XXX", ".....XXX.X.X..XX.XXXX.X.XXX..X", "X.XX.XXXX.X.X...X....XX.X.XXX.", "....XX.XX.X.XX......XXX.X..X..", "X.....X.XXXX..XX.XXX.XXXX..X.X", ".X...XX.X.XX..XXX....X.X..X...", "...XXX..X..X..X...X..XXXX..X..", ".XX..XX.X.XX.X..XX..X.XX.XX.X.", ".XX...XX..X.XX.XX.XXX...X...X.", ".X.XXX.X..XX.X.X.......XXX..XX", ".....X.XXX...XXXX.XX.XXXXXXXXX", "XXXXX.......X..XXX...X.XX.X.XX", ".XXX..XXXXXX..X....XX.XXX..XX.", ".XX.XXX..X.XXXXX..XX..........", ".X..X.XXXX.XXXX..X.XX..X.X.XX.", ".XXX..XX.XX.XXXXXXX...X.X.X..X", "XXX..XX..X....X....X.XXXX...X.", "....X...X..X..X.X.XX........XX", "X..XX.....X....XXXX.XXX.XX....", "X.XXX.X..XX...XXXXX.XXXX..X.X.", "X.X..X.XXXX.XX...XXX.X.XXX....", ".XX.X.X..XXX.....XX..XX..X..X.", "X.X........XX..X.X....XXXXX.XX", "XX..XXXX.X.X.X..XX..X...XX...X", "..XXXXX...XX.X.XXX.X...XXX....", ".X......XX..XX.....X..XXX....X", "XX..XXXX...XX....X.XXXXX.X....", "X.X.XX.X.X.XXX.XXXXX.X..X..X..", "X.X.X...XX.X.X....X....X..XX.X", ".X.........XXX...X..X..X....XX", "X..XXX...XXXXX..X..X.X.X.XX.XX", ".XX...X.X....XX....XX.XX.XXXX.", "XX.XXX.X.X..XXX.X.XX.X..XXXX..", ".XX.X..XXXX.X.X..X.X.X..XXX.X.", "XXXXX....X..X....X.X..XXXX.XX.", "..XX.X........XXX.XX....XX...X", "XX.X..XXXXXXX.XX.X.X..X..XX.X.", "XX.XXX.X..X...X..XXXX....XX..X", "X...XXX...XXX....XX.X..XXX....", ".XX....XXX...X...XX..XXXXXXX.X", "..X...X..XXX....XXX...X...XX.X", "..X.XX..XX...XXXXXX.X...X.X.X.", "....X.....XXXXXX.XXX.X.XX.XX.X", "...X..X.XXX..X..X.X....XX.XX..", "XXXX.XXXX.X...XXXX.XXX.XXX..X."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "........................X.....", ".................X......X.....", ".................X.....XX.....", ".........XXX.....X.....XX.....", "....X....XXX.....X.X...XXX....", ".XX.X....XXX.....XXX...XXX....", ".XX.XXX..XXX.....XXX...XXX....", ".XX.XXX.XXXX.XX..XXX...XXX..X.", ".XX.XXX.XXXXXXXXXXXX..XXXXX.X.", ".XX.XXX.XXXXXXXXXXXX..XXXXX.X.", "XXX.XXXXXXXXXXXXXXXX.XXXXXX.XX", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {"..X..XX.XX.X..X..X..XX.X.X...X.XX...X", "X....XXXXX..X...X.XXX....XX...X.X..X.", "XXX.X..X.XX.X.XX..XXXXXXXX.XX..X.X.X.", "..XXX..XXXX.X....X.X.X.X.XX...X.X...X", "XX.X.X.X.XXXX..XX....XXX.....X..X.X..", "X....X...XX.X..X..XX.XX...XX.X...X.XX", ".X..X.XXXX...XXX.XXX..X..X..X.XXX...X", "XXX.X.X.XX....XXX...XXXXXXXX.XX.XXX.X", "XXX....XX.XX....XX.XX..XX...XX.X.X.X.", "..X.XXXXXXXXXXXX.X..XXXX.X.X..X.XXX.X", ".X.X.XXXXXX.XX..XX...XXX..X.XX.XX...X", "X.....XX....XXX.XX.XX.....X....X...XX", "..XXX..XXX....X...X..XX.X.X.XX..X.XXX", "XXX.X...X..XXX.XXXXX..X.XX..X.....XXX", ".......XXX..X.XXXXX.....X..XXXXXXX..X", "X..XX.XXXXXXXX.XXX..XX...X.X...XXXXXX", "X.X..XXXXXXXX..XX.XXX...X..X..X.XX.X.", "XXX..XXX...XXXX.X......XXXXXX..X.....", ".X.XX.XX.XX.XXXXX.X..X.XX.XXXXXXXXXXX", ".XX.XXXX.......XX.XX..XXX...X....X...", "X..X..XX..XX....X..XX.X..XXXX.X...X.X", "X.X.XX.X.XXX.XX.X.XXX.X...X...XXX..X.", "X...X..XX.....X.X.X..X.X.X.XX.XXX..X.", ".X...X.XXX.XXXXXXX.X.XXX..X....XXX...", "X.X.....X.XXX.XXX..X.X....XXX..XX..X.", "XX....XXXX.X.X.X..XXX.XX.XXX..XX.X...", "X.XX...XXX..X.X..X.XXX.X.X.XX.X....XX", "..X.X.X..XXX.X.X.XXXXX.XXXXX..XX.XX.X", "XXXX.XX..X.X...XXX.XXXX..X..X......X.", ".XXX..X.X.XXXXX...XXX.....XX...XXX..X", "X..XX..X..X..XXX.X.......X..XX.X...XX", ".XXXXXX..X..XX..X...XX.XXX..XXXX.XX.X", "X...X....XX..XXXX.X.XXX..X..XXX..X.XX", ".X...X.X...X...X...X....XXXXX.X..X...", "X.X..X.X.X.....X.X...XXX.X...X.XX..XX", "XXXX.........XX..X...X.XXX..XXXXX.X.X", ".X.X.X...XXX...X....XX.X...XX.X..XXX.", ".XX.XXX..X.X....XXXX...X..XXX..XXX...", "..XX......XXXXX..X.......X.XX.X....XX", "XX..XXX...X..XXX.XX......XXX..XX...XX", "..X..XX.X.XXX..XX.....XX....X.XXXX..X", "..X...XX.....XX.XXX.X.X..X.XX.XXX.XX.", "XX..X....XX.X.XXXXXX...X..XXXXX.XX.XX", ".X...XXXX.XXXXX.XX......X.XXXX....XXX", "X...X...XXXXX.X...XX..XX.XX..X.XX.XXX", "XX.XXX.X.XXX..X.XX..X..XXXX.XX.X.XX.X", "XXX.XX.XX.X..X.XXX.XX.XXX.X.X.XXX.X..", ".X...X..X...XX....XXXX...XXXXXX.X.X.X", "X.X....X..X.XXX...X..X..X...XXXX.X.X.", "XX.XXX.X...XX..X....XXX.....X.X..XX.X"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", "............................X........", ".......X....................X.......X", ".......X....................X.......X", "X......X.X..................X..X....X", "X......X.X......X........X..X.XX....X", "X......X.XX.X.XXX........X..X.XXX...X", "XXX....X.XX.X.XXX......X.X..X.XXX..XX", "XXX....X.XXXX.XXXX.X.X.X.XXXX.XXX..XX", "XXX..X.XXXXXXXXXXX.XXX.X.XXXX.XXXX.XX", "XXX.XXXXXXXXXXXXXXXXXX.X.XXXX.XXXX.XX", "XXX.XXXXXXXXXXXXXXXXXXXX.XXXX.XXXX.XX", "XXX.XXXXXXXXXXXXXXXXXXXX.XXXX.XXXX.XX", "XXX.XXXXXXXXXXXXXXXXXXXX.XXXXXXXXX.XX", "XXX.XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "XXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"XX.XX.X..X.XX", "XXXX.XXX.XXX.", "...X.X..XX..X", "....XX..X.X..", "....XX..X..X.", "X...X.X......", "X.XXX....XXX.", "X..X..X....XX", ".X.X..XXX..X.", "XX.XXXX.....X", ".X.XX..X..X.X", "XX.....X.XX..", ".X..XXX.X.X..", ".........X..X", "...XXX.....XX", "X.XX..XXX..XX", "X.X..XXX.XXXX", "XXX.X.XX.XXXX", "X.XX...XXXX.X", "XXXX.X...X.X.", "...XX.....X.X", "XX.X.X.XX.X.X", "X.XX...X....X", "..XXXXXX.XXXX", "..XXXX.X..X..", "..XX.XX..XXXX", "...XX..XXXX.X", "X.X.XX..X.XXX", ".X..XXX..X.XX", ".X.....XXXXX.", ".X......X...X", "....XX....X..", "...XX.X...X.X", "X...XXX..X.XX", "X.X.....XX...", "X.XX.X...XXX.", "X.X.XX....X..", "........XXX..", "....XXX..X.X.", "X...X.X.X.XX.", "...X..XXX.XXX", "X.X...XXXX.XX", ".......XX..X.", "XX..X.XXXXXXX", "....XX...X.XX", "..X....X.XX.X", "X..XXX...X.XX", "..XX...XXX.XX", "..XX..XX...XX"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", "............X", "............X", "...........XX", "...........XX", ".........XXXX", "...XX....XXXX", "...XX....XXXX", "X..XX....XXXX", "X..XXX...XXXX", "X..XXXXX.XXXX", "X..XXXXXXXXXX", "X.XXXXXXXXXXX", "X.XXXXXXXXXXX", "X.XXXXXXXXXXX", "X.XXXXXXXXXXX", "X.XXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"X.XXX....X.XX.X.X..XX...X....X.", "..XX...X.XX.XXXX..XXXX.X.XX.X.X", ".X.XX...XX.X.XX.XXXXX...X..XXXX", "XX...XX.X.X..XXX..X...X....XXXX", "X...XX.XX.....XX..XXX.X.X.X.X..", "..XXXX..X.XXXX.XX..XX.XXX....XX", ".X.XXX.X...X..X..XX.X.XXXXXX.XX", ".XX.X.XX.X.....XXXXX...XX....X.", "X.XX......X.X...XX.X..X.X..XXX.", "X.X.XX...XX..X..X...XXX..X..X..", "......X.XX.X..X.XX.XXX.XXXX....", "X.X.X.X..X.XX..X...X.....X..XX.", "..XXX.X....XXX.XX..XX.....XXXXX", "X.X..X.X...X.......XX.X...X....", "XX.XX...XX..X.XXXXX..XX.X..XX.X", "...XX.....X.X...........X..XX.X", ".X......X.X...X.XX.XX..X...XX..", "X.X..XXX.X.X.XXX...XXX.X..XX...", "X.XXXX.XXXX.X......X.X.......XX", "..XX....XXX.X..XXX....XXXX....X", "......XXX.XXX.X..X....X...XXXX.", "X.X.XX....X...X.XXX.X.XX.XX..X.", ".XXXXX..XX....XX.X.XXXXX.X.....", "X.X.XX...XXXX..X....XXX.....XX.", "XXX....XX....X....XXXX.XX..XX.X", "....X...XX..XXXX....X.XXXX....X", ".......X.XXXX...XX..XX.XX.XXX..", "..XXXX.XXXXX..X..........XX...X", "..X..X...XXXXX.XXXX..XX.XXX.X.X", ".X.X.XXX.X.XXXXXX...X.XX.X.....", "XX.X..X...X.XXXX.X.XXX.XX.XXX..", ".XX......XX.XX.X....XX..XX.....", "...XXX.X.X.X....XX.X...X.XXXXXX", ".X.XX.X.XX...X...XXX.XXXXXX..XX", ".X.XXXX...XX.XXXXXX.XX.XXX..X.X", "XXXX.XX...XXXXXX.XX.X....X.XXXX", "XX.X.....XX.....X...XX..XX..XXX", ".XX..XX.X...XX..X.X..X.XX....X.", "X.XX.XX.XX....XXXXX.X..XX.XXXX."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "....................X..........", "....................X..........", ".........X..........X..........", "..X......X..........X...X...X..", "..XX.....X..........X...X...X..", "..XXX....XX.X.XXX...X..XX...X..", "..XXXX...XX.X.XXXX.XX..XX...XXX", "..XXXX...XXXX.XXXX.XX..XXX..XXX", "X.XXXX..XXXXXXXXXX.XXXXXXX..XXX", "XXXXXX..XXXXXXXXXX.XXXXXXXXXXXX", "XXXXXX..XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXX.XXXXXXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"X....XX.XXX..XXX.XXX..XXX.", "....XX.XX....X..XX.X.X.XX.", "..XXX....X...X.X.XXXX...XX", "XX.XXXXXX.X.X....X.XXX..XX", "X..X...X.X......X.X..X..XX", ".X.XX..XXX.....XXX.X.X..XX", "XX.....X.....X..X.X...XX.X", "X..XX..X.......XXXX.X..X..", "XX..XXXXX.XXXX..XX......X.", ".XX....X..XXX..X...XXX..XX", "XXX.X..XX..XX.XX..X..X..XX", ".XXX.X.X...X.X.XXXXXXXXX..", "X.X..X.....XX.....XX.XX..X", "...X....X....XX.X.XX...XX.", ".XXXX...XX.X...XX.X...X..X", "X.X.X.X.X.XXXXX......X.XXX", ".X..X......XXXXX..X.XXXX..", "XX.X...XX.XXXX.X.XX...XXXX", "X..X.XXXX..XXX.X.X.X.X.X..", "..XX.XX.X.XXXX...XXXXXXX..", "X.XX.X.X..X....X.XX..XXXX.", ".XX.XX.XXX....X....X.X.XXX", "XX.X..X.XX.XXXXXX.X.....X.", ".XX.X..XXXX.XXX.X..X.XX...", "XX..X.X.XXX.XXX.XXXXX.X.X.", "..X..X.XX.X.XX..XX.X....X.", "....X.X.X.XXX...XX.X..XXXX", "XXX.XXXX.X..X.XX.XX....XXX", "X.XX..X.XX.XX.XX.X.X.X.X..", "X....X.X.XX...X.X.XX......", "X...X.X...XXXX...XXX.XX.X.", "X.XXXX.XXX.X.X.XXXX...XXX.", "XX.X..X.....XXX.XXX.XXX.XX", "XXX.XXX.XXXX..X......X...X", "XX......XX..X....X..X.....", "XX.XX.XX.X.X..XX..XXX..X.X", ".X.X.X....X..X.XXX.X...X.X", "X.XXXX..XX..XXXX.XXX....XX", "XXX.XX..XXXXXXX.X.........", "X..XXX.....XX.X.....X..X.X", "X..X.X.X...X.XXXXX....XXXX", "XX.X.X.XX.X.......X...X.X.", ".X.....XX.X.X.XX..X..X....", "XX...XX.XX.X.XXX..X....X.X", ".XX..XX..XX.X..XXXXXXX..XX", "..XX.XX....XXXX....X.X..X.", "X.XX...XXX.....XXX..XXXXX.", "..XXX.X...XXXX....XXX..X..", ".X..X..X...XXX.X.......X.."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "X.........................", "X.........................", "X.......X...X.....X.....X.", "X.......X...XX....X.....X.", "XX......X...XX...XX.....X.", "XX.X...XX..XXX.X.XXX...XX.", "XX.XXX.XX..XXX.X.XXX...XX.", "XX.XXX.XX..XXX.X.XXX.X.XXX", "XXXXXX.XX..XXXXXXXXX.X.XXX", "XXXXXX.XXXXXXXXXXXXX.X.XXX", "XXXXXX.XXXXXXXXXXXXX.X.XXX", "XXXXXXXXXXXXXXXXXXXX.X.XXX", "XXXXXXXXXXXXXXXXXXXX.XXXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXX"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"..", ".X", "..", "X.", "X.", "..", "XX", "X.", "XX"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..", "..", "..", "..", "..", "..", "..", "X.", "X."};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"XXXX.XXX.XX..XXXX...XX.X.XXXX..X....X.XX..XX..X.", "X..X.XX.XXX...XX.XXXXXXXX.XX..X........XX..XX.X.", ".X.XX.XX.X.X..XXX.X.XXXXXX.X..X.X.XX...X..XXXXX.", ".X..XX.X..X.X.X...XX.XXX.XX...XXX..X.....X.X..XX", "XX...X...X.X.X.X..X.XXXXX.XX.X...X.X.X.X..XX..X.", "XXXXXX..XX.XXXXX.XX...XXX.X.XX.XX.X....X....XXXX", "XXX.X....X.X..XX..XX.XX...XX...X.X..XX..X.X.XXX.", "XXXX.X..XX..X.X.XXXX..X.XX.XX.XXX.X...XXXX...X..", "..XX.XXX.X.XXXXXXXXXX.XX.X...X.XXXXX..X...XXXXXX", "XXX.X.X..X.XX.XX..XX...XX.XX.X.XXX...X.XX.XXXX.X", ".X..X...XX.XXX..X.....XXX.....X...XXXXXX.XXXX...", "..X....X.XXXX.XX..XX....XXXX.XXXXX..XX.X.XXX.X.X", "X.X..XX.XXXX..XX.XX...XXXXXXX.X.X.XXX..XXXX..XX.", "X....XX.X.XX..XXX.X.....XX..X...X.X.XX...X...X.X", "X.XX.X.X..XX.X..XX...X.XXXXXXXXXX.XXX.X.XXXXXXX.", "X.XXX.XX.X.X.XXX.X..XXX.X....X....X..X...X.X.X..", "X..X.XXX...XXXX.X.X.X..XX.....XXXXX.XX.XX..XX.X.", ".X.XXXXX.....XX..XX..XXXXXXXXX.XX..XXX...X..X.X.", "X.X...XX.XX...X.X.XXX..X.XXX....X...XX.X...X....", "X.X..XX..X..XX.XX..X.....XXX.XX.X.X...X..X..X.X.", "X.X.XX.XXXXX..X...XX.X..XX.X...X...X..X.X...XXXX", ".X.X........XXX........X.XXX.X...XXX.X...XX.....", "XXX.XXX..XXXX..X.XXX..XXXXXXX...XX..XXXX.X.XX...", "XXX...XXXX..X..X.XX....X.X.X.....X..XX....XXX...", ".X...XX..XXX...X...X.XX.....XX...X.X...XXX..XXX.", ".XXXXXX.X.X...X.....X.XXX..XX.XXXXX.X...X....X..", "XX.......X....XX.X.....X.X..X..XX.XXX......X..X.", "..X.XXX.X...X.XX.X..X..X.X.X.XXX.XX......XX.....", "XX..XXXX.X.XXXXX........X.X..XX....XXXX.X...XX..", "....XX.X..XXX..XX.X.X.X..X.X..X.X.......X....X..", ".XXXXX...X.XX..X...X.XX.XXX......X...X.XX...X..X", "XX...XX...XX...XXXXXXXX...X..X.XX.X.XX.X..X..XXX", ".X......XX....XX.XX.X...X..XXXXXX...X.X.XXX....X"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", ".........X....XX................................", ".....X...X....XX................................", ".....X...X....XX..X........X....................", "XX...X...X.X..XX..X....XXX.X....X...............", "XX...XX..X.X..XX..X....XXX.X....X...............", "XXX..XX..X.X..XX..X...XXXXXX....X...............", "XXX..XX..X.X..XX..X...XXXXXX...XX...X.......XXX.", "XXX..XX..X.XX.XX..X...XXXXXX...XX.X.XX.X...XXXX.", "XXX.XXX..X.XX.XX..X...XXXXXX.XXXX.X.XX.X.XXXXXX.", "XXX.XXXX.XXXX.XX.XXX..XXXXXX.XXXX.X.XX.XXXXXXXX.", "XXXXXXXX.XXXX.XX.XXXXXXXXXXX.XXXXXXXXX.XXXXXXXX.", "XXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX."};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"XXX..X..X.......XXX.X.X..XXX....XXXX.", ".X....XXX.X.X....XXX.....XXXXXXXX.X..", "..XX.XXX.XX...X....XX.X...X.XX..X..X.", "X.X.XX.XXX.XXXX..X.X..XXX.XXXXXX...XX", "XX....XX..XX.XX.XX.XXX..X...XXX.X.X..", "X...X..X..XX.X.X.XX.....X....X.XX...X", "X..XX.X.X.XX..X.XXX..X.X.X.X.X.XX..X.", "XXXX....XXX.XXX.X....X.X..X..X.XX..XX", ".XX...X.X..XXX.XXXXX..XXX...XXX.XXX.X", "..XXX.X.X.XX...XX....X...X.XXX.......", ".XXX...X.XX..XX.X..X.X..XX...XXX....X", ".X.XXXXX.......X..X.X.X.XXX.X..XXXXX.", "XX.XXXXX..XX....X.XXXX.X.XXX..XX.XX..", "...XXXX.XXX.X.X.XXXXX.XXXXX.X..X....X", "X..X...XXX.X..XXXXXX....X...XX.X...XX", "XX..XX..XX....XXXX.X..X...X..X.XXXX..", "XX....X.X...X...X..XX.XXX....X.XX..X.", "XXX.....X.X.XX.....X.X...XXXXXXX.X.XX", "X.XXXXX.X.XXX.XXXX.X...XX.X.XX..X.X.X", "XXXX.X.X..XXX.X....X....X.XXXXXXX..X.", "X.XX.X.XXX...X.X.XXXXX..XXX.XX...XX.X", "..X....X...XXX....XXXXX...X.XX..XXXXX", "X.X.XX......X..X...X..XX...XX.XX..XXX", "XXXX...XXXXXX.X..X.XX.XXXXXX..X..XXX.", "X.XX.X....XX..X.XX...XX..XX..X.....X.", "XX...XX.X.X.XXX.X..XXXX..XXXXX......X", "X.X...XXXXXX..X.XX.XX..X...XX...X...X", "...X.XXX..X..X....XX..XXXXXXX.XXXX...", "XX.XX.X..XXX..XX.XX..X...X.....X..XX.", ".......X.X..X..X..X...X..XX.XX.X..XXX", "X....XXX.X.X..X.XXX.XX.XXXX.X.XX.XXXX", "X..X.X.XXXXXX.X.....XXXX..XXX.....X.X", ".....XX.....X...X.XX..XXXX.XXXXX.X...", "..X..XX.....X.XX....X.X.XX..XXX..X.X.", ".X.X.X.X..XXXX....XXX..X..XXX.......X"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", "............................X........", "...................X........XX.......", "X..................X......X.XX.......", "X.........X........X......X.XX.......", "X.........X........X......X.XX.X.....", "X....X.X..X...X....X.....XX.XX.X.....", "X..X.XXXX.XXX.X.X..X..X..XX.XX.X...XX", "X.XX.XXXX.XXX.X.XXXX..X.XXX.XX.X...XX", "XXXX.XXXX.XXX.X.XXXXX.XXXXXXXX.XX.XXX", "XXXX.XXXX.XXX.X.XXXXX.XXXXXXXX.XX.XXX", "XXXX.XXXXXXXX.X.XXXXXXXXXXXXXXXXX.XXX", "XXXX.XXXXXXXX.X.XXXXXXXXXXXXXXXXXXXXX", "XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"X.XXX..X....X...X....XXX", "X.X.XXXXX..XX.X..X..X...", "..X..X..X.XX.....X.X.X..", "X..XXX...X.X...XXXXX....", "X.X.XX.XXXXXX.XXXXX....X", ".XXXX.XX...XXX.XX.X.XXXX", "X.X...X.X.X.X..XX...X...", "XXX.XX.X.XXX.X.X....X.XX", "..XXXX.....X.X..XXX..XX.", "..XXXX.X.X.X....X.XXXX..", ".XXXX...X.X.X..XX.X...XX", "......X..XX.XXX.X.XXX.XX", "XX.XX..X.X..X.XXXXXX....", ".X......XXX.X.XXXXXXX...", "..X..XXX.X..X.XX.XXX..XX", "X..XXX..X..XX..XX.XXXX..", "XX...XXX..X.X...X.....X.", "X....XXX..XXX.XX....X...", "..XXXXXXXXX.XX.X..XXXX..", ".XXX..XX.XXXXX.XXX.X.XX.", "X.XXX.....X..X....X..XXX", ".X.XX.XXX.XXX...X.X.X...", ".X.XXXX.X.X.XX..X....XXX", ".XXX.XX.XX..XXX....X.X..", ".XXXXXXXX..XXXX..X....X.", "XX.X.XX.X...XX..X...XXX.", "X....X...XX..X...XX.XXX.", "X...XXX.X.....XXX..X.XX.", "X.XXX.X.XXX.X.XX..X.X...", ".X..X.XX...XXX....XXXX..", "..X..X.X.X....XXX.XX...X", ".X.XXX..XX.X.....X..XX.X", ".X..XXX...X...X.X..XX.X.", "XX.X.XXX.....X.XXXXX....", ".....XXX.X.X...X..XXX.X.", "XXXX.X...XX.X.XXX..XXX.X", "XX.X...X...XX......XXX.X", "XX..XX.X.XX..XX.X..XX.XX", "XXXX...XX.X.....XXXX.X..", "XX.XXXXX.X.X..XXX..XXXXX", "...XXXX..X..XX.X.X..X...", "..X...XXX..XX.......XX.."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", ".....X..................", ".....X......X...........", ".....X......X...X.......", "...XXX......X...X...X...", "...XXXXX....X...X...X...", "...XXXXX....X...X..XX...", "XXXXXXXX....X..XX.XXXX..", "XXXXXXXX.XX.X..XX.XXXX..", "XXXXXXXX.XXXX..XX.XXXXX.", "XXXXXXXXXXXXX..XX.XXXXX.", "XXXXXXXXXXXXX..XX.XXXXX.", "XXXXXXXXXXXXXXXXX.XXXXX."};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"....XXX.X.XXXXX..XX...X.XXX.....", ".XX.X..X.X.X..X......XX..XX.XXX.", "..XXXX.X..XX.XX.X.XX.X...X..X...", "..XX.XX..X...XXX.XXXXX..X..X..X.", "XXXX..X..X....X.XXX.X..XX..XXX.X", "X.XXXX.XXXXX.X...XX.XX.XX...XXXX", "X.X.XXX.X..X..X.X.XX.XX.XX.X.X..", "X..X.X..XX.X.XXXX..X..XXXX..XXXX", "X.XX...X...XX...XXX..XXXXX.X.XX.", "X.X.XX.X.XX..XX....X.X.XXXXX.XXX", "...XX.X...X.XX.XX..X..XXX..XX.XX", "....X......X..X..XXXX.X.X..XX.X.", "X.X..X.X...X.X.XX.XXXX.XX...XX..", ".X.X..XXX.X....XX..X.X.XX.XXX...", "X.....XX..XX..XXXXXXX.X.XX..XX.X"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"................................", "................................", "................................", "................................", "................................", "........................X.......", "........................X.......", "........................X.......", "...........X..X...XX....X...X...", "..X........X..X.X.XX.X..X...XX..", "X.XXXX.X...X.XX.X.XX.XXXXX.XXXX.", "X.XXXXXX..XX.XX.XXXX.XXXXX.XXXX.", "X.XXXXXX.XXX.XXXXXXXXXXXXX.XXXXX", "X.XXXXXXXXXX.XXXXXXXXXXXXX.XXXXX", "X.XXXXXXXXXX.XXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"XXXXX.X.XX.X.XX..X.....X.X", "...XX.X.XXX...XX..XX.XX..X", ".XX.XX..XX...XX.X.X.X..X..", "X...X..X.XXX.XXX..XXXXX.XX", ".XX..XXX.XX.X..X..X..XXXX.", "XX.X.XXXX.....X.XX.XX.XXX.", ".X..X.X...X..X..XX..X.X.XX", "X....XXX..XX....XX....XXX.", ".XX.XX.X........XX..X.....", "...XXX.XX.X..X.XXXX.XX.X..", ".X.XXX.XXXX.X.XX....XX.XXX", "X.XXXX.......X.X..XXXXXX..", "X.X.X.X...XXX.XXXX..X..X..", ".XX...XXXXX.XXXX..XXX..XXX", "X.X.X..X.XX...XX...X.....X", ".X.XXX.XXXX.XXXX.XX....X..", "X....XX.XX.XX.XX....XXXX.X", "X...XX.XXXXX..XX.X.XX.X.XX", "....XX.X.XXXX..X...X.X...X", "XX.XX..XX....X.XX.XX..XXXX", "XX.....XXX.XXXX.XXX.X.XXX.", "XXXX.X.XXX.X.XX..X.X....XX", ".X..XXX..XXX..X...XX...X.X", ".XXXXX...XXX.X.....XX..X.X", "XXX.XX..X.XXXXX.XX.X..XXXX", "XX..X.X.XXX..X...XX..XXX..", "XXX.XXXX..XX..X.X..XXX.XX.", "XXXXXX.X.XX.XX.X.XX.X.XX..", ".XX..X.X.XX...XXX...X.X.XX", "..XXX.X....X.XXX.XX..XX.XX", "XXXX...X..XXX.X..X.....XX.", "X...X...XX.XX..X..XXX...XX", "..XX.X.XXXX..X.....X.X...X", ".XX...X.X.XX.X..XX.XXX...X", ".XXXX...XXXXXXXXXX.....X..", ".X.X..XXXX.XX....XX..X..XX", ".X...X.XXX.XX..X.XXXXX....", "X.XXXX.X.....X..XXXXXXXX.X", "X..XXXXX.X..X.X...XXXX...X", ".XXX....X..XX.X.XX..XX..XX", ".X.XX..XX..X...X....XX.X..", "XX.....XX.XXXXXXX.XX..XXXX", ".XX.X...X..XX.X..XX.X..XX.", "X.XXX...XXXXXX.......X.XX.", "X.X.XXX...XXX.XXXX.XXXXXX.", ".X..X..X.X.....X.XXXXX..XX"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "....X.....................", "....X.....................", ".X..X.....................", ".X..X..................X..", ".X..X..X.XX.........X..X..", ".X..X..XXXXX..X.....X..X.X", ".X..X..XXXXX..X..X..X..X.X", ".XX.XX.XXXXX..XX.X..X..XXX", "XXX.XX.XXXXX..XX.X.XX..XXX", "XXX.XX.XXXXX.XXX.XXXXX.XXX", "XXXXXX.XXXXXXXXX.XXXXX.XXX", "XXXXXX.XXXXXXXXX.XXXXX.XXX", "XXXXXX.XXXXXXXXX.XXXXXXXXX", "XXXXXX.XXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"XX..X.X...XX.X.", "....X..XXX.XXX.", "X.XX.X.X..XXXXX", "..X.X..XXXXX.XX", ".X...X.X....XXX", "XX...XXXXXX....", ".X.X.XXXXX.XXXX", "..XXXXX..X.X.X.", "X...XX.XX..X..X", ".X..XX...XX....", "XX....XX.XX.X..", ".XXX.X.X.X.X..X", "X...XXXXXX.XX.X", ".X.X.XX..XX.XX.", "...X.XX...XX..X", ".XXX..XXX.XX...", "XX.X...X.XXXXX.", "XX.X..X...X....", "XXX.X..X..X...X", "X..X.XXXXX.X.X.", "XX.XX.X....XX..", "XXX.XX.X..XXXXX", "XX..X.X.X..XXX.", ".XXXX.X....X.X.", ".X.X.X.X.XXX..X", ".X.XX.XXXX..X.X", "XXX.X.XX.X..XX.", "X.XXX.X.X..X.XX", "..XX.X.XX.X.X..", "X.XXX..XX.X.XX.", "X.X....X.XX...X", "XX..XXX.XX.X.XX", ".XXXXX.XXXXXX.X", ".X.XXXX...XXXX.", "XX.X.X.X..XXX.."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", ".X.....X...X...", ".X.....X...X...", ".X.....X...X...", ".X.X...X..XX...", "XX.XXXXX..XX...", "XX.XXXXX.XXXXX.", "XX.XXXXX.XXXXX.", "XX.XXXXX.XXXXXX", "XX.XXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {".XXXXXX.X..", "XX....XXX..", "....XXXX...", "...X.X.XX..", "X..X..XXX..", "X.X..XXXXXX", "..XX...X.XX", ".....XXXXXX", "XXX..XX.XXX", "X..X.XXXXX.", "....XX.....", "....XXXX...", "XXX.XX.X.X.", "....XX..X..", "....XX.XX.X", "X.X..X.X...", "XXXX....XX.", ".X.X...X.XX", "X.X..X...XX", "XXX..X.XX.X", "X.XX...XX..", "X.X.....X.X", "XXX.X......", "....XX.X..X", "XXX..X.X...", ".X.X..X.XX.", "X...X.X.X..", "X.XX..XX..X", "X.X.X.X..XX", "X..XX..X...", "XXXX.XXX.XX", "....XX.X..."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", ".......X...", ".......X...", "X....X.X...", "X....X.X...", "X....X.X...", "X.X..X.XX..", "X.X..X.XX..", "X.X..XXXX..", "X.X.XXXXX.X", "X.XXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"...XXXXX...X.XXX.XX....X..XX.XXXX.X.....", "X..X..X.XX.X......XXXX....XX.X.XX......X", "XX....XX......XX...X..X.X..XX...XXX....X", "XXX..XXX.XXXXX..XXXX....XXXX..XXX....XXX", "XXXXXX.X.XX.XXXXX...XX.X..X..XXX.XXX.X..", "..XXXX..X.....XXXX...XX.XX..X.....X.X...", "..XXX.X.X....XXX.XXX...X.XXX...XX.....X.", "XXXXXX.X.XXX..X.....XX.X.XX.XX...XX...XX", "XX.X.XXXX..X.X..X.XX.X.X.X..XX..X.XXX..X", "XX..X.X.XXXX....X..XX..XX..X.XXXX.X..XXX", "X.XX...XX..X.XXXXX..X.X..XXXX....XXX.X..", ".X.XXX...XXX.X..XXXXXX.X.......X.X..X.XX", "XXX...XXXXX..X..XXX...XX..X.XX.XX..XX.X.", "XX...X....XX..........X....X....X.XXXXXX", ".XXX...X..XXXX..X.XXX..XX.X.X.XX..XX.XX.", "X...XX.XX.....XXX..X.XXX....X.XX...X.XXX", ".X.X..XX..X..XX.XX.X..XX....X........XX.", ".X..XXXXX...X.X.X.XX.XX.XX...X.X..X...XX", "X....XX.XXX.XXX....X.XX...X.XX..XX..X.XX", "..XXX.XX.X..X..X.XXX..XX......X.X.X.XX..", "X..XXX.XXXXX..XXXX.XXXX....X.XX.XX..X..X", ".X.X...XX....X.XXXXX.X.X...X...X.X.XXX..", "XX.XX...XX.XX.XXX..XX.XXXXXX.XX.XXXXXX..", "XX.XX.X.XXX.XXX...XXX..XXX...XXXXX.X.XXX", ".X.X.X..X.X.X....XX.XX..XX...X.XX.XXX...", "XX..XXXXX.X..XX..XXXXXX.....X.XX....XXXX", "..X....XXXX...X..XXX.XX..XXXX.XX.XXX....", "...XXX...XX.XX....X.XX........X.X...XX..", ".XXX.XX...X..X..X..X..X.X.X.XXXX.X..XX.X", "X.X.X..XX.XX..X.XXX.XX.XX.X..XX.X.XX.XXX", ".X..XX.XXXX.X...X.X.X.XX.XXXX.X....X...X", ".XX.XX...XXX.X.X...XX.X...XXXX.XXXX..X..", "XX.XXXX.XXX..X.XX..X.XXX..XXXXXX.XXX...X", "..X...X.X..XXXX...XX....X...X..XXXXX..XX", "...XXXXXXX....X.X.XX..........XXXX.XXXXX", "X..X.........X.....XX.XXX.XX.X.X.XX.X.X.", ".X.......X..XX.XXXXXXXX..X.X.......XX.XX", "XXX.XX..XX.XXXXXXXXX.XX..XXX..X.X.XX..X.", "X...X......X...XXX..X.XX...X..X.XXXXX..X", "..X..X.XXXX..XXX.X..X..X......XXX..X.X..", "XXXX...X...X..X.XX.XX...X..X..X...X.XX.X"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "...................X....................", "...................X....................", "...................X....................", "...................X....................", ".X......X.......X..X....................", ".X.X....X....X..X..X...........XX.X....X", "XX.XXX.XX.X..XX.X.XX..X.......XXX.X....X", "XX.XXX.XXXX..XX.X.XXX.XX......XXX.XX...X", "XX.XXX.XXXX..XX.XXXXX.XX...X..XXX.XX.XXX", "XX.XXX.XXXX..XX.XXXXXXXX..XX..XXX.XXXXXX", "XX.XXXXXXXXX.XX.XXXXXXXX..XX.XXXXXXXXXXX", "XXXXXXXXXXXX.XXXXXXXXXXX..XXXXXXXXXXXXXX", "XXXXXXXXXXXX.XXXXXXXXXXX..XXXXXXXXXXXXXX", "XXXXXXXXXXXX.XXXXXXXXXXX..XXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"..XX.XX..X....X.X...XXXX.X.XX..X...XXX..XX.XX.X.X", ".X..X..XX.X...XXXX...X......X...XX..X.X.X...XX..X", "..XX...X.XXXXXXXX..XX.XXXXXX.X.XXX......XX.XX..X.", "XX..XXX..XX...XX.XX...X.X....X..XXXX.X..XX.X.X..X", "X..X..X...X...XXXX..XXX....XX.X..X.XXXXX.XX....XX", "XX..X.XX.XX.X.XX...XX..X.....XX..X.............X.", "XXXXXXXXXXXX..X.......XXX.X..X.XX.X.X..X..XX.X.X.", "XX...X..X...XX.XX...XXXXX.X.XX......X..XX..XXXXXX", ".XXXX.....X.X.XX.X.X..XX...X.X....X.XX..X.X..X.X.", "X..X..XXX.XXXXX.XXX..X.XX..X....XX..XXX.X...XX.XX", ".X.....X...X...XXXXXX.X.XX.XXXX....XX.X.X...XXX..", "X..X..XX.X..X.XX...X.XX..XX.X..X.X...X..XXX..XXXX", "X.XX.....X.XX..XX.XXX..XX.X.XXXXX.X.XX....X..X.XX", ".XX.XX....X......XXX.XX.X..XX.XX.X...XXX.XX..X..X", "...X...XXXX.XXXX.X..XXX..X...X...X.X.XXXX.XX....X", "XX......XXX.XXXX.X..X.X.XX.X...XXXX.XX.XXX...XX.X", "XX.X.XXX.XX.....XXXXXX.XX.....XXXX..XXX.X.XXXXX..", ".....X.X.......XXXX..X.XXX.X..XXX..X.X..X.X.XX.XX", "X.XX.XX.X.XXXX.X.X.....XXXXX.XX.X..X...XX.X..XXXX", "X...XXXX.XXX....XXXX.XX.XXX.X....XXX.X.X..X.X...X", "X.XX.XX.XXXXX.....X.X..X....X.X.X.X.XX.X....X.X..", "XX.XXX..X.X.X.XXXXX.X....X...XX.X....XX......X..X", "XXX....X.XXX..XX....XXXX...X...X.XXXX.XXXX.X.X.X.", "X....X...XXX....XXXX...XXXXX.X....XXX..X.X.XXXX..", "XXXX......XX...XX...X.XX...XX.X.X..XX....XX..XXXX", "XX.XXXX...X.X.X.XX..XXX..X.X..XX...XX.XX.XXX....X", ".X.XX...X.XXX...XXXXXXXX.X.X..X.XX.X..X.X...XXX..", "X..X.XXX....X.XXXXXXX...X.....X.......X.X.X..X.XX", "..XX.XX....XX..XX.X.........XX.XXX..X.XXX.XX.XX..", "X.XX..X..X.XXXXXXXX..X...X..XX..XXX..X.X....XX...", "XX..XX.X.X.XXXXX..XX.X.X.X..X.XXXX..X...XXXXX...."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".............................................X...", "X.........X....X.............................X...", "X.........X....X.............................X...", "X..X......X....XXX......................X....X...", "X..X......X.X.XXXX..................X...X....X..X", "X..X......X.X.XXXX..X.XX........XX..X...X....X..X", "XX.X.X...XX.X.XXXXX.XXXX........XX..XX..X.X..X..X", "XX.X.XX..XXXX.XXXXX.XXXXXX.X..X.XX..XX..X.X..X..X", "XX.X.XXX.XXXX.XXXXX.XXXXXX.XXXX.XX..XX.XX.X.XX.XX", "XX.X.XXX.XXXX.XXXXXXXXXXXX.XXXXXXX.XXXXXX.X.XX.XX", "XXXX.XXX.XXXX.XXXXXXXXXXXX.XXXXXXX.XXXXXXXXXXXXXX", "XXXXXXXX.XXXX.XXXXXXXXXXXX.XXXXXXX.XXXXXXXXXXXXXX", "XXXXXXXXXXXXX.XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXX.XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {".XXXX..X.XX.XX...X...X...XX..X.XXX..XX.X....X...X", "XXXX...XX.X.X.XX....XXXX.X.XXXXX.X.X..XX.X.X....X", "XXX.XX.X....X.X......X..XXX.X......X.X..XXXXXX.X.", "XXXXX.X.X.X.X.X.X...XX.XXXXX..X.XX.XX...XX.X....X", "...X..XX....X..X...XXXXX......XX.XX..XX.XX.XX...X", "X......X..XXXXX......XXX...X....X..XX..X.XX.XX..X", "XX..XX..X.XX.X..X...XX.......XX.X...XXXXXXX.X....", ".XX.X.X.XXXXX.X..X.X.X..X.XXXXXX.XX...XXX..X.XXXX", ".X.XXX..X..XXXX.XXXX.X..X.......X.X...XXX..X..X.X", "X.......XX..XX.X..X.XX...X..XX.XX.X..XXXXXX.XX.X.", "XX..XXX..X....XX.X.XXX.XX..........XX..XX.X.XX...", "XX....X..XXX...X.XX...X.X...XX....XX.XX.X.X.XXXX.", "X.XXXXXXX....X.X.XXX....XX.XXXXXXXXXX....XX.X..X.", ".X.X.X.X.X.X.X......X.X..XXXX.XXXXXX..X.XXX....XX", "X..X.XX.XXX...X.......XXX...X.XX...XX..X..X.XX...", ".XX.XXX....XXX.XX.X.XXX..X...X.X.XX...XXXXXXX..XX", "..X.X..XXXXX.XXXX..XXX..X....X.XX.XX.XXX.XX..XXXX", "X......XX.XX.X.X.XX..X......XXX...XX.XXX..XXX...X", "XXX...X.X..XX.X..XXXXXXXX.XXX.X.XX.XX..X.XX..XX.X", "XXXXX.X...XX..XX.X.XX.XXX.XXX.X.XXX..X.XXX.XXX.X.", "XXX..XX.XX..XXX.X.XX.X.....XXX..XXX.X.XXXXX....X.", "...XX..XX....X..XXXXX.XX.X.XXX.X.X.XXX...X....X.X", "XXX.........X....X.X.X.....XXXX..XX...XX.......XX", ".....X.XX.....X.XXX.XXXX.XX.X...XXXX..X.XXXX.X.X.", "X.X...X.XXX.XXX.XX.....XX.XXXXX..X.X...X..X..X...", ".XX.X.X...X.X..XX.XX....XXX...XXXX.X......X.XX..X", "X.XX...XX.X...X.XX.X...X....XXX.XX..XX...XX..XXX.", "X.X.XXXX.XXX.XX...XXXXXX.XX..X..XX...X.XX...XX..X", "..XX.X..X.XXXX........X.X..XX....XX....XXXXXXXXX.", ".X.XXX.XX.X....X.XXXX.XX.XX...X.X..XX.XX.XX...X..", ".X.X.XX....X..X.XXX..X..X...X..XXX.XX...XX...XX..", "XX.XXX.....XX..X..X...X.XXX...X.XXX.X...XXXXXXX.X", "..X..XX.X..XXX.X.XX....XXX...XXXX.XX.XXXXX..XX.X.", "...XXX.....XX..X.X.X.X.XXX..X.X.XXXX....X.X....X.", "X.XXX..XXX..XXX..X.XX........XXXX.X.X.X.XX.X...X.", "..XXXXX.X..X...XX..XX..XX.XXX.X.XXX...X.XXXX..X.X", ".X.XX...XXXX.X.X.X....XXX....X..XX.XXXXX.X..X..X.", ".X.....X..X..X.X....X....X.X.XXX...X.X.XXXX.X...X", ".X.X.X....XXXX.X.XX...XXXX.XX...X.XXX.X...XXX.XX.", "X..X..X.X.XXXX..XX.XX...XXXX.XXXX...XX..XX...X...", "..X.X.XX..X.X.X....XX.X..XX..X..X.X.X..XXXXXXXX..", "XX......XX.XXXXX...X.XX..XXXXXXXXXXXXX.X...X.X...", ".XX.X.X.XXXXXX..XXX.X...XX...XXXX.XXX.XXX.XXXX..X", "X..XX.XX......X.X..X.X..XX.X.X.X.XX.XXXXXX..XX..X", "X...X..X.X..X.XXXXX..X....XX.XXX..XX..XX.X.XXX.X."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".........................................X.......", "................................X........X.......", "................................X......X.X.......", "................................X......XXXX......", "............X................XX.XXXX...XXXX......", "........X...X................XX.XXXX...XXXX.XX...", "XX..X...X...X....X...X..X....XX.XXXX...XXXX.XX...", "XX..X...X.XXXX...X...X..XX..XXX.XXXX..XXXXX.XX...", "XXXXX...X.XXXXX..X.X.X..XX..XXX.XXXXX.XXXXX.XX...", "XXXXX.X.X.XXXXXX.X.XXX..XX..XXXXXXXXX.XXXXX.XX..X", "XXXXX.X.X.XXXXXX.X.XXX..XX.XXXXXXXXXX.XXXXX.XX.XX", "XXXXXXXXX.XXXXXX.XXXXXXXXX.XXXXXXXXXX.XXXXXXXX.XX", "XXXXXXXXX.XXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XX", "XXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XX"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {".X.XXX....XX.XX..XX..XX..X", "XX.....X...XXX.X..XXXXX...", "X..XXXX..X.......XXX.XX.X.", "X..X.......X...X.X..X.XX..", "XX...XXX..X....XX.X.XX..X.", "X.X.X.XX.XX.X.X...X..X.XXX", "...XX....XX...XXXX..X..XX.", ".X.XXXX.XX.X.X.XXXXX..X...", "....X.X..XXXX.XX.XXXXX.XX.", "XXXXXX.XX.X...X..X....X.X.", ".X..X.X...XXXX.X.X.XX..XX.", "..XXXXXXX.X.XXX..XXXX..X..", ".XXX.....X.XXX.XXXXXX..XX.", "..XXX..X.XXXXX.XX..XXX.XX.", "XXX.XX...XX.XX......XXX..X", ".X.X..XXXXX.X.X..X........", "X..XX.X.XXX..X..X.......X.", "X.X..XXXX.XXX.X.X.X.X..XXX", "X.XXX....XX..X.XX..XXX..X.", "XX.......XXXX.....XXX.XX.X", "...X...X....X.X.X.X....XX.", "XXXX....X..X....XX..XX.XXX", "XXXXX....X..X.....X.X.XXXX", "X.X.XXX..XXX..XXX..X.XX..X", ".XX.XXXX.X.X.X.X.XX.XX..XX", "..X.XX..XX...X.X.X.X..XX..", "XXXX.XX...X...X....XXX..X.", "X.X.XX........XX...XX..X.X", ".X.X.X...X....XXX...XX.XX.", "XXXXX.XXX...XX.X.X.....XXX", "..XXXX.X.X.XX.X.XXXX.X...X", "X...XX.XX.XXXX.XXXXX..XX..", ".X.XXX....X..XX..X.XX.XXXX", ".XXXXX..XX..XX....XX.XXXX.", "X.X.X.XX..XXX.X.XXXXXX..X.", ".X.X.X....X.XXXXXXX..X.X..", "XX.X..X.XX..XXX..X.X..X...", "XX.X....X...XX..XXX.XX..X.", "X.X.X.XX...XX...X.XX.X....", "X.XXX..XXX.X.....X.XX...XX", "....X.X..XX...XX..XX..XX..", "X.XX.......X.XXXX.XX...XX.", "....XXXX.X.....X..X..X...X", "XX...X.X..X..XXX.XXX...XXX", ".X...XXXXXX....X..X......X", "X.X.X.......X..X.X.X..X.XX", "X.X...XXXX.........XX.X.XX", "..XXX.XXXX.......XX..X.XX.", "..X.X.X..XXX.X.XXX....XX.X", "XX..XX.XXXXXX.X..X.X.X..X."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "....X.....................", "....X.....................", "....X...................X.", "....X...................X.", "X...X....X.......X.X....X.", "X..XX....X.......XXX....X.", "X.XXX....XX......XXX...XX.", "X.XXX....XX....X.XXX...XX.", "XXXXX....XX.X..X.XXXX..XX.", "XXXXXXX..XX.X..X.XXXXX.XX.", "XXXXXXXX.XX.XXXX.XXXXX.XX.", "XXXXXXXX.XXXXXXX.XXXXX.XX.", "XXXXXXXX.XXXXXXXXXXXXX.XXX", "XXXXXXXX.XXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"X.X..XXXXX.XX.XXXX..XX...X.XX.X..", ".X.X.XX.XXXX.......XXX..X...X...X", "XXXXXXXXX.XX.X..X..XXXX..XX..XX..", "..XX..X.XX.XX.....XXX..XXX..X.X.X", "X..XXXX...XXXX.X....XX..XX..X.XXX", ".XXXX.....X.X.XX...XXXX.XXXX.X...", "X.X...XXXX.X.X.XXX...XX.X..X.XXXX", "X.........X...X..XXX.XXXXXXXXXXXX", "X.X.X..XX..X.X.X...X.XX..XX..X..X", "X.XX..X.XXXX.XXXXXX.X..X.XXX.....", "X..XX...XXX.X.XXXX...X...X.XX.XX.", ".XX.XX.XXXXX..XX...XXX.X.XXX.X...", "XXX.XXXX..XX.X...XX.XX.X.XXX.X...", "XX.XX..X.XXXX.X.XX..X..X.XXXX.XXX", "X..X.XX..X.XXX......X......X...X.", "XX.X.XX.X.X.X....X.XXX.X..X.X.X..", ".......X.XX....XX.X.X..X.XX.XXX.X", "XXX.....X..X.XX.XXX.X.XXX..X.XX.X", ".XX..X.X.XXXXXXX...X.X..XX..XX..X", ".XXX.XX.X..XX..X..XXXX..XX....X.X", "X.XXXXX..X.XXX...XXXX.XXX....X.XX", "XX......XXXXXXX.X...X.X...XX.XXX."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", "...........X........X............", "...........X........X............", "X..........X........X....X.......", "X.........XX........XX...X.......", "X.X.....XXXX........XX...X....X..", "X.XX..X.XXXXX.......XX...X.X.XX.X", "XXXX.XX.XXXXXX.X...XXX...XXX.XX.X", "XXXX.XX.XXXXXXXX.X.XXX.XXXXXXXX.X", "XXXXXXXXXXXXXXXXXX.XXX.XXXXXXXX.X"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"...X..XXXXXXX..XXXXXX.......X", ".X.X.XXXX.X..X.X.XXXX.XX..XX.", ".........XXXXXX...XX...X.XX.X", "XX..XX..XX.XXXXX.X.X.X...XX.X", "..XXXXXX.....X.XXXXX...XXXXXX", ".XXXX..XX.....X.X...X.XX..X..", "XXXX.X..X.X.XXX.X....XX.....X", ".X.X.XX.X...XXXXX.XXX.XXX..X.", "XX.X..X.XX.X...X..XXXXX..X...", "X.X.XX..X.X......X...X.X...X.", ".X.X.XXX..XXXX....XX.XXX.X.X.", "XX.X.X..X.X..X..XXX.X.XX..XX.", ".XX...XX.XXXXX.XX.X...XXX.X.X", "XXX...XXXXX..XXX..XXXX.XX..X.", "X..X.XXXXX....XX.X.X.XXXXXXXX", "X.XX.XX.....XXXX...XX..XX.X.X", "XXX..X.X.XX.XXX.XX..XXX.XX..X", "XX.XXX.XXXXXX.XXXX..XX...XXX.", ".XX.XX...X...XX.XXXXXX.XXXX..", ".XX..X..X...XX.....XX....XX.X", "XXXXX...X..XXX.X.XXX.X.X..X.X", ".X...X..X......XX.XX....XXXXX", "X.X...X...XX.X....XXXXXXX.X..", "XXX.XX..X...XXXX...XX..X.....", "X.X........XX.XX.X.XX...X.XXX", "X...XX..X..XX..XXX.X.XXXX.XX.", "..........X.X..XX.....XX.XXXX", ".XX.XX.XX.X.XX.XX.XX.XXX...X.", "X.......X...XX.XX.XX..X.X....", ".XXXXXXXX...X...X.X..XX.X.XX.", "....XX...XX...X...X..X.X.XXX.", "..X...XXXXX.X...XXXX.X.....XX", "XXXX.X.XX........X..X..X.X.X.", "XX....XX.X..X.X..X.X..X.X..XX", "X.....X.....XX..X..XX..X.XXXX", "X....X.X..X.X.X....X...X...X.", "X......XX...XXX.X.XXXX.X..XXX"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", "...................X.........", "...................X.........", "............X......X...X.....", "........X...X......X...X.....", ".....X..X...X......X...X..XX.", "XX...X..X...XX.....X...X..XX.", "XX...X..X...XX....XX...X..XX.", "XX...X..X...XX.XX.XX...X..XX.", "XXX..X..X...XX.XX.XXXX.X..XXX", "XXX..X.XX.X.XXXXX.XXXXXX..XXX", "XXX..X.XX.X.XXXXXXXXXXXX..XXX", "XXXX.XXXX.X.XXXXXXXXXXXXXXXXX", "XXXX.XXXX.X.XXXXXXXXXXXXXXXXX", "XXXX.XXXXXX.XXXXXXXXXXXXXXXXX", "XXXXXXXXXXX.XXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {".X", ".X", "..", "XX", ".X", "X.", "XX", ".X", "..", "..", "..", ".X", "XX", "XX", "..", "..", "..", ".X", "XX", "..", ".X", "X.", ".X", "X.", "XX", "X.", "..", "..", "..", "..", "..", ".X", "XX", "..", ".X", "..", "XX", ".X", "..", "..", "XX", ".X", ".X"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", ".X", ".X", ".X", ".X", ".X", ".X", ".X", ".X", ".X"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"..X.XX.X.XX.X..X..XX.X.X.X.XX.X..X...XX.X.X..XX", "XXX.X.XX.XXXX.X.X......X.X..X.XX.XXXXXX..XXX...", "XX.....X...XXXXXXX.X.....X.XX...XX..XX......XXX", ".XX...X...X..X..XXXX..XX.XX.X....XXXXXX.X.XXX.X", "...XXXX...XXX..X.X.XX.X..X..XX.XX..XX......XX.X", "XX..X.X.XXX...X.X.X.XXXXX...X.X......X..XXX.X..", ".XX.X...XXX.X.XX...XXXXXXXXX...X.X.XX.X.XX.X...", "X..XX.XXXXXXXXXXX..XX.X..X...XXXXXXX.XXXX..XX..", "XX..X.X..X....X.X....X.XX....XX.X.X....X...X.X.", "X.XX.....X.XX...X...X.X....XXX..X..XX..X.X....X", "XXXXXX.XX..XX......X.X.XX...X.X...X.X..X....X.X", ".XX...XX...X.X...X.X.X.....XX.....X.XXX.X..XXXX", "XXX.XX.....X..XX..X..X..XX.XX.X...X.X....X.XX..", "X......X....XXX..XXX.X.X......X.X..XXXXX...XX.X", "...XX.XXXXX....X.X.X..XXX.XXXX.XX.......X.XX.X.", "XX.X.XXX..X.X.XX...XXX..XXXXX.XXX.XXX...X.X..XX", "X.XXX.XX.XXXX..XXX.XXX.X.XX.XX...XX.X...XX...XX"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "............................X..................", "...................X........X.......X..........", "X...X.......X......X........X.......X..........", "XX..X.XX..X.X......X.X.X.X..X.......X......X..X", "XXX.X.XX.XXXX.XX...X.X.X.X..X.X...X.X...X..XX.X", "XXX.X.XX.XXXX.XXX..X.X.X.X.XX.X.X.XXXX..X..XX.X", "XXXXX.XX.XXXX.XXXX.XXXXXXX.XX.X.XXXXXXX.X..XXXX", "XXXXX.XX.XXXX.XXXX.XXXXXXX.XXXXXXXXXXXX.XXXXXXX"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"X.", "XX", "X.", ".X"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..", "..", "..", "X."};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"..XX..X....X.X....X....X.X..XXXXXX..X..", "X.......XXXXXXX.....XX.X..XXXXX...X.X.X", "..XXX.......X...XX.X.....X.XX..XXX..XX.", "XX.XX.X.XX..X..XXXXX..X.XX..X.XX.XX..X.", "XX....X.XX.X..X....XXXX.X..XXXX.XXXX.X.", "....XXX......X.X.XXXX..X.X....XX..XXX.X", "X.X..XXX........X..X.X.XX.XX.XXX.X.XX..", ".XXXXXX.X..XXXXXX..X.XX.X.X.X..XXXX.X.X", "XX.XX.XXXXXX.XX.X.XX.XX..XX...X.X..X.XX", "X..X.XXXX.XX.X.X.XXXX.X.XX..X..X.XX.X..", "XX.XX.XX...XX.XX.XXXXXXXX....XXX.XX....", "XX..X....X.XX...XX...X.X...XXX..XXXX.X.", "...XXXXX.XX.X.X.....XX..XXXXX..X.X.XXXX", "....XXX....XXX.XXX.XX.X....XX..X.XX.X.X", ".X.XXXX...XXX.X.XX.X...X.XXX.X......X.X", "...X.XX......X...X..X.XXXX..X.X.XXX..X.", "...XX.X....XX.X.X.X.XXXXXX..XX.XXX.XX..", "...XXXXX..XXXXXXXX.X..XXXX.X.XXX.XXXXX.", "..X.XX..XXX.X...X..XX.XXXX.X...X.XX...X", "..X..XX..XX...X.XX.X.XXXXX.X..XXXX.X.XX", ".XX...X.X.XXXXXX......X.XXXX..X..X....X", ".XXXX.X.......XX..X.XX...XX......X.XXX.", ".X....X..X.......X..XX...XX...XXXXX....", ".X.X.X...XXX.X...X.XX..XXX.XXX..X..XXXX", "XX.XXXXXXX..X...XX...X.XXXXXXX....X.X..", ".X.X.XXXX...X...X..X...X.XX.X.X...X...X", ".X..X.XXXX.XX.X..X..XXX....X.X...X.XXXX", "X.X.X.....XX...X...X..XXXX...X.X.....X.", ".X..X..X.X.X....XXX.XX..X..XXXXXX.X.X..", ".X.XXX.XXXXXX.XXXX.X.XXXXX.....X..XXX..", ".XXX...X...XX.XXX.XXX...XXX..XXX..X.X..", "X.XX.XXX.X..XX.XX.XX.X..XX.XX......X..X", "...XXX..X.XX.....XX..XXX.X.....X.X.X...", "XX..X.X..X...XXX.X..X.XX.X...X....X.XXX", ".X.....X.XX.XXXX..XXXX.X..X.X.X..XX.X.X", "....XXXX.XXX.X.XXX.X.X.X.XXXX.X.XXXX...", "X.XXX....XX..X.XXX...X.XX.X.XXX..X.X..X", ".XX.XXXX.XX..X.XXX.X...X..X...XXX.X.X..", ".X..XXX.X.XX...XX.XX.X.X.XXXXXX.XX.XXXX", ".....X..X.XX.X......X..XX.X....X...X.XX", "X.X..X.XXXXX.......XXX.XX..XXXX.X..XX..", "...X....X.X..XXXXX..XXX.X.X.X...X.XX.XX", ".X.X...XX.X..XXX..XX.X.XXXX.XXXX.XXXX.X", "X....XX..XXXX.X.X..XX.XXX.X....X.X...XX", "X.X.X..XXXX...XX..X..XX..X....X.X....X.", "XXX..X.XX.X..X..X..XXXXXXXXX.....X..X.X", ".XX..XX.XXXX..XXX..XX....X....XX...XX..", "X..XX.......XX..X..X.XXX.X....X.X.X..XX"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".........................X.............", ".........................X.............", "...................X...X.X.............", "......X............X...X.X.............", "......X............X.X.X.X.......X.....", "....X.X.........X..X.X.XXX.......X..X..", "....X.X...XX....X..X.X.XXX....X..X..X..", "....XXX...XX....X..X.X.XXX....XX.XX.X..", ".X.XXXX..XXX....X..XXX.XXX..X.XX.XX.X.X", ".X.XXXX..XXX...XXX.XXXXXXX..X.XX.XXXX.X", ".X.XXXX..XXXXXXXXX.XXXXXXXX.X.XX.XXXX.X", ".X.XXXX.XXXXXXXXXX.XXXXXXXXXX.XX.XXXX.X", ".X.XXXXXXXXXXXXXXX.XXXXXXXXXXXXX.XXXXXX", ".X.XXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX", "XX.XXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"XXXXX.X.X.X..XX...XXX.X...X...XX.X...X...X.X.XX.XX", "XXXX..XX.X.X..XX..X....X.XX.X...XXX.XXXXX.X.X..XXX", "X..XX......X.XX.X.X..X....XX.XXXX..XXXXXX.XXX.X.XX", "XXX.XX.XX.XX.X...XXX..X.XXXXXX......XX.XX.X.......", "XXX.X.X.XXX.X.X...XX.XX...XX..X.XXX...XXXX..XX.XXX", "XXX...XXX.XX.XXX..XX..XX..X.X.XXXXX...XX.....X.X.X", "XX.XX...XX.XX.X..XX.X..X...XX...X.X.X...X..XX.X..X", "X...X....X.XX.X.X.XX..XXXXX.X.XXX.XXX...X..XXXX..X", "XX..X......XX.XXXXX..X.X...X...X..X.X.X.XXX.XXXXXX", "...XX.....XXX........XXXX.X..XXX..XXXX.X..XXX.X...", "..XXX.XX.X.XXXX.XXXX..X..X.X.X..XX...X.X.XXXXX...X", "XXXXX.X...XX.XXXX..X.X..X.X.X.XXXXX..X.XX.XX.....X", "XXXXX....X..XXXX.XXXXXXX.XXX.XXXX..XX.XX..X..X.XX.", ".X.X.XX.XX.XXX.X.X..X..XX..XX.XXX..XX.XXXX....X...", ".X....X.XXXXXX.X.XXXX.X...XX.X.XXXXX.XXXX.XX......", "...X.X....X..X..XXXX.XXX..XXX......XX..XXX.XX.XXX.", ".X..X.XX..XXXX.X.X....XX.....XXX.XX..X..X.XXX.X.X.", "X.XXXXXX.XXXXXXX.X.XX.XX...X..XX..XXXX.X...X...XXX", "...XX.XX.X..XXX..X.X..X..XXXX..X.XXXXXX..XX..XX.XX", "X...X.XX...XX...XXXX..XXX..X..XXXXXX.XX.X..XXXXXXX", "XX.XXX..X.XXX.X..XX.X...XX..X.XXX.X.X.XX..X.....XX", "..X..X.X...XXXX.X..XXXXXX.XX.XXX..X.XXX.XX.XX.XX.X", "X.XX.X.XXXX..X.XX...X...X...XXXX...X.XXXX..XXXX.X.", "XX......X.X.X.X..XX.XX.XXX....X.XXX..X.XXXXXX.XXXX", "X...XXXXXX..X.X......XX..X....XXXX.XX......XX.X.X.", ".....XX.X..X.XX....X.XX.XX...XXX.X..XXXX..X.XX..X.", "X...X....XXXX..XXXXX.X..XX..XXXXXXX...XXX.X.XXXXXX", "X....XX....X...X.XX.....XX.XXXX..X.X...XX.X.XX..XX", "..X...X..XX..X..X..X.XXXXXX..X.X.XX....XX.XX.X.X.X", "XX.X.X..XXXXX.X..XXXXXXXX..X.XX.....XX.XXX..XXX...", ".XXXX.X.XX.X.X.X.X...XX.XX....XXXX.X.X.X.XXX......", ".X.XX...X.XXXX..X.XXXXX..X..X.XXX.X...XX..X.XX....", "XX.X..X.X.XX...X.X..X..XX.X.X...XX.XX.X.X...XX...X", ".X..XXX.X..XXXXX.XXXX.....X.XX...XXX..XXX.XXX.XX..", ".X....X.XXX.X.XXXX.X.XXX...XXX..X.XXX...XXXXX..XXX", "X.X.XXXX....XXXXX.X..XXXX...X..X.XXX.X..X.X..X....", "X.XX.XXX....XX.X...XX.XXX..X...X......XXXX...X...X", "X.X...XX..X.X.X.X.XX.X.X.X..X.XXX...XXX..XXX....XX", "..X.XXXXX...XX..X.X..XX....X.....XX.X.X..XXX.XXX..", "XXXXXXX...XXX.X..X.X.XXXXX.X.X..XX.X.X..XX.XXX.X..", "XX....XXX....X.X..X.XX.XX..XXXXXXX.........X..X..X", ".XXXXX......X..XX.X.X.X..XX..X.X.X.....X...X...XXX", "...XXX.....X.X.X.X...X..X.X.X...XXX.X..XXXX...XX..", "..X..X..XX.X.XXXX.X.X..XXXXX.X.X..XXXXX.XX..XX...X", "..X.XXX.XXXX...XXX.....X.X.X.X.XX.X..XX.XX.X..X.XX", "..X....X.X.X.XX..X..X...X....XX.X.X.XX...XXX.XXX.X", "X.X.X..XXX..XXXXXXXXXXXXX..XX......XX..XXX.X.X...X", ".X.X...X..X.XXXX.X.X..XX..X..XXXX.X.X..XX..XX.XXXX", ".X..X...X.X...XXX....X.XXXXX.XX.X..XX..XXX.XX.....", "XXXXX....XXXX..XX.XX..X.X.XX.XX.X...X.XX....XX..XX"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........................................X.........", "...........XX..................X.......XX........X", "....X......XX.........X........X.......XX..X.....X", "....X......XXXX...X...X.......XXX......XX..X.....X", "X...X......XXXX...X...XX......XXX.X.X..XX..XX....X", "X...X.X....XXXXX.XXX..XXX.....XXX.X.X..XX..XX....X", "XX..X.X....XXXXX.XXX..XXX..X..XXX.X.X..XX.XXX....X", "XX..X.X...XXXXXX.XXX.XXXX..X.XXXXXX.X..XX.XXXX...X", "XXXXX.X.X.XXXXXX.XXX.XXXX..X.XXXXXX.XXXXX.XXXXX.XX", "XXXXX.X.X.XXXXXX.XXX.XXXX.XX.XXXXXX.XXXXX.XXXXX.XX", "XXXXX.X.XXXXXXXXXXXX.XXXX.XXXXXXXXXXXXXXXXXXXXX.XX", "XXXXX.X.XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX.XX", "XXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"..X.X.X.X..X.X..XXXX.X.X....XXXX..X..X.XX.X.X.XXXX", "XX.XXXX.XXX.XXXXX...XX..XXX....X..X.XX.XXXX..X..XX", "X.XX..XX.X...X.X.....XXXX.X.XX...XXX.X.XX...X.XXXX", "XX....X.X.XXX.X...X...XXXXX.XX.....XX.XX.XXXXXXX..", "..X.X....XX.X.X.XX.X...XXX.XXX....XXXX.X..XX....XX", "...XXXX..X..X.X...X.XXX.X....XX....XX.X...XX.....X", "XX.X.XX.....X...XXX.X.....XX.X.XXXX...X.XXX..X.XXX", "..XXX.X...XXX.XX......X.X..XXX...X.X.XX...X.X..X..", "......X...X..XXXXXX.XX.X.XX..X..XX.XX.X..X.XXX.XX.", "..XXXX..X.X...XXX.X..XXXX.X....X.XXXXX.XX.X...XX.X", ".XX...XX.X...X.XX.....X.XXXX.X.XX.X.X.XX.X......XX", ".XXXXXX...XXXX.X.XX..XX.X.XX.XX...XXX...X..X.X.XXX", ".X..X.XXX..XX.XX...XXX.X.X..X.XXXXX......X..X.X...", "X.X.XX.XX..XXXXXXX.X...X..XX.X..X.XX..XXX.X.X...XX", "XX.XX...X..X....XX...XXX...X..XX.X....XX..X..X..X.", "..X...XX...X.XX.X..X.X.XX...X.XX...XX....X....XXXX", "X....X.XXX.X.XX.X....XXX..X.X......X.XXX.....X.X..", "XX..XXXX..XX..X.XX...XXX.XX...X..XX.X......X.....X", "..X..XX..XXX.XXXXX...XXX....XX...X......XXXX..X..X", "X.XX....X.X..X.X.XXX.XXX.X.XXX.XXX...XXX........XX", "XXXXXXXX....X.X.XXX.XXXXXX.XX.XX.XXXXX.XXX.XX...XX", ".XXX.XX...XXXXXX.XXXXXX.X.X.X.X.XX.....XX.X..X.X.X", "...XX.XXXX.....X..X.X.XX..XXXXX...X....XX....XX.XX", "XX....X..X.X.X...XX...XXX.XXX..XX.X.XX.X.XX..XXXXX", "X.XXXX.X.X.....XX.XX.X..X.X...X.X.X.X..X.X..X.X.XX", "..X.....X..XX...XXX.X.XX..XX...X.XX.....X.X..X....", "..XX.XXX...XX....X.XX..X..XX.XXXX.X...XXX.X..X.X..", ".X..X.XXX.....XX.XX......XXX.XXX.XXXX.XXXX.X....XX", "X..XX......X.X.X..XX..X..X.XXXX..X.XX..X.X......XX", ".X.XX.X..XX..XXXXX.XXX.XXX..X..X.X.XXX.....XX.XXXX", ".X..XXX..XXX..XXX.XXX..X..XXXX.XX.........XXX.XXX.", ".XX..XXXX.X...XXX..X.X....XXX....XX..X..XXX..XX.XX", "X.X..X.X.X...XX.X...XXX..XX.X.........XXXX..XX.XXX", "X.X.X..XXXXX..XX..X.XXXX.X.X.XXX.X..X......X....X.", "X.XX..XXXXXXX.X...XXXX..XXXX..X.X.X.XX......XX.X..", "X...X.XX.X.XXX...X.X.X....XX.X..X.X..XX...XX.X.XXX", "..X.X.XX..XXXXXXX.X....X...XXXXXX.XX.X.X...XXX.XXX", "...X.....XX....X..X.XX..X.XXX....X.X.X..X...X.XXX.", "X...XXX.....X..XXXX..X.X.XX..X.XX...XXXX.X..XXX.X.", "...XX..XXXXXX.XXXX.X...XXXX.X..XXX.X.XXX.XXXXX.XXX", "..X.....X.X.XX..XX..XXXX..XX.XX..XXXX..X.XX.XXXX.X", "XXXX..XXXXX.XXXXXXXX.XX...X.XX......X.X....XXXXXXX", "XXX.XXXX.XXX.X.......XXXXX..XX.XX...XXXX.X...XXXXX", ".XX..X...X.....X.XXX..XXX.X.XX...XX...XX.XX.X.XXXX", "X.X.X..XX..XX...X.........X..X.XXX.XXXX.X.X.XXX.XX", ".XXXXX....XXX.X.X...X..X.XX..XX.X.XX..X.XXXX.XX..X", "XX..XX....XX.......X.X.X...X....XXXXXX.X...XXXXX..", "XXXXX....X.X..X...XXXX.X....X....XXX.X.....X..XX..", "X...X.XX.X.X.XXXX..X..XXXX.XXXXX.XXX.XXX...X..X..X", ".X..X.X..XX....X.XX.XXXX..X.XX...X..X..XXXX...X.XX"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................X", ".................................................X", ".......................X........................XX", ".......................X..X.....................XX", "......X..............X.X..X.....................XX", "....X.X..............X.X..X..X..................XX", "....X.X..............X.X..X..X.........X........XX", "..X.X.X....X..XXX....X.X..X.XX....X....X........XX", "..X.X.X....X..XXX....X.X..X.XX...XX....X.......XXX", "..X.X.X....X..XXX.X..XXX..X.XX...XX....X.......XXX", "..X.X.X...XX..XXX.X..XXX..XXXX...XX.X..X.....XXXXX", "X.X.X.X..XXX..XXXXX..XXX..XXXX...XXXX..X..X..XXXXX", "X.X.X.XX.XXX..XXXXX..XXX..XXXX.X.XXXXX.X..X..XXXXX", "XXXXX.XX.XXXXXXXXXX..XXX..XXXX.X.XXXXXXX.XX.XXXXXX", "XXXXXXXX.XXXXXXXXXXX.XXXX.XXXX.X.XXXXXXX.XX.XXXXXX", "XXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"XXX", "XXX"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...", "..."};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"..X", "X.X", ".X."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...", "...", "..X"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"...X..X", "X..XX..", ".X...XX"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".......", "...X..X", "XX.XXXX"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"XXXXX", "X....", "....."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".....", ".....", "X...."};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"XXX", "XXX", "XXX", "..X", "...", "XX.", "X.."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...", "...", "...", "...", "...", "...", "X.."};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"XXX", "XXX"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...", "..."};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"X.X", "X..", ".X.", ".XX"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...", "...", "...", "..."};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {"X"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"."};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"X.X", "...", "..."};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...", "...", "X.X"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"X..X..X.", ".XXX..X.", ".XXX..X.", "........", "........"};
    GravityBomb* pObj = new GravityBomb();
    clock_t start = clock();
    vector<string> result = pObj->aftermath(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"........", "........", "...X..X.", ".XXX..X.", "XXXX..X."};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9992143&rd=5075&pm=2417
********************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector.h>
#include <math.h>
#include <ctype.h>
 
using namespace std;
 
class GravityBomb {
  public:
  vector <string> aftermath (vector <string> a) {
    int n,m,i,j,k;
    n = a.size();
    m = a[0].size();
    int cnt[100];
    for (i = 0; i < m; i++) cnt[i] = 0;
    vector <string> ans;
    ans.assign(n,"");
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        ans[i] = ans[i] + '.';
      }
    }
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        if (a[j][i] == 'X') cnt[i]++;
      }
    }
    k = 100;
    for (i = 0; i < m; i++) {
      if (cnt[i] < k) k = cnt[i];
    }
    for (i = 0; i < m; i++) {
      for (j = 0; j < cnt[i] - k; j++) {
        ans[n-j-1][i] = 'X';
      }
    }
    return ans;
  }
};

********************************************************************************
*******************************************************************************/