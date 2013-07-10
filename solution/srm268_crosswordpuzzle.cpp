/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5867
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

class CrossWordPuzzle {
public:
    int countWords(vector<string> board, int size);
};

int CrossWordPuzzle::countWords(vector<string> board, int size) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"X....X", "X.XX.X", "...X..", "X.XX.X", "..X..."};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
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
    vector<string> board = {"...X...", ".X...X.", "..X.X..", "X..X..X", "..X.X..", ".X...X.", "...X..."};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {".....X....X....", ".....X....X....", "..........X....", "....X....X.....", "...X....X....XX", "XXX...X....X...", ".....X....X....", ".......X.......", "....X....X.....", "...X....X...XXX", "XX....X....X...", ".....X....X....", "....X..........", "....X....X.....", "....X....X....."};
    int size = 5;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"...", "...", "..."};
    int size = 50;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
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
    vector<string> board = {"....", "....", "...."};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
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
    vector<string> board = {"........X.X.XX...X.XX.....XX...X.X....X........", ".......X.......X....X.XX.....X...X.X.X.XX.XX..X", "....X....X..XX..X......XXX...X.X...X..........."};
    int size = 2;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"X..X.X..........X", ".X.......X.......", ".X..............X", "....X......X.X...", ".............X...", "..X....X...X.....", ".................", ".......X....X....", "............X..X.", "X...X.......X....", ".................", ".................", "........X........", ".X....X...X......"};
    int size = 6;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
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
    vector<string> board = {"XX.XXX.XXX..X......X.....XXXXXX.X.XX...XXX...X...X", ".X...X.X...X.XX.XXXX..XXX..X.XX...XX.XXX...X......", "..XX...X.X......X....X.XXX.X.X.......XX.XXX..X.X.X", "X........XXXXXX....XX..X.X.X.....XXXX.X..X.......X", "XXXXXXXX..XX...X.X.X.X.......XX.X..XX....XX.XX.X.X", "XX....X.XX.XXX...X.......X...XX.......XXXX...X.X.X", ".X.XX.X....XXX.X.XX.X...XXX....X.X.X..XX.X..XX.X.X", "...XX...X.X.XXXX...X...XX...XX..XX..XX...XX..XX...", ".XX...XXX.X......X..XXXX.X.XX..XXX........X....XX.", ".X.X.X.X.......XXXXX..XX...X.X.X...XXX.X....X...XX", "...X.X..X...XX..XXXX...XX.....X..X...X..XX..X..X.X", ".X.X.XX....XXX........XX.XXX.XXX..X..X.X....X....X", ".X.XXX.X.....X.XXX..XXXX.....X...X..XXXXX...X.XX..", "X..XXX....X.XX..X..X.XX...X.X.X..X.....XXXX.XXX...", "X...XXX.XXX...X..X...XXX.X.....X.....XX.....X...XX", "..X.X...XXXXX.XX.X....XX....XX.X.X.X..X.X.XXX....."};
    int size = 2;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"....XXXX..X..X...XX.....X..X......", "........X...........X........X....", ".XX....X...X..X..XX...X.......X...", "........X...X...X.....X...........", "....X...XX.XX.........X..X........", "...........X..XX...X......X..X..X.", "..X..X.X......X.......X....X...X..", ".....X.....X...XXXX..........X..X.", "X...X..X.................X........", "X.X..X.......X....X...X...X....XX.", "X..X.X..X..........X.X........X..X", ".........................X........", ".XX.XX......X.........X...........", "......X.....X.........X...X.X.....", "X..............X...X...X..........", ".......X...X.........X........X...", "......XX.X............XX..........", "..X.XX...........X.X..XXX.........", "........X.XX..X....XX......XX..XX.", "XX.....X..XXX....XX........X.....X", ".X.................XX...X....X...X", ".........X....X.....X.......X.....", "................X.........X...XX..", "XX......X....X.XX...X..X..X.......", "...........X......X.X...X.X..X...X", ".X............X...XX..X..X..X....."};
    int size = 9;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", "......................................."};
    int size = 39;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"XX...X....X....XXX", "XXXX.XX..X..XX..XX", "X.....XX.X.XXXX.XX", "XXXX..XX.....X..XX", "..X....XX.XX.XXXX.", "...XXX.X..X..XXXX.", ".X..X..XX.X.X.....", "..X.X.....XXX.X.XX", "...XX..X.X....X.XX", "XX....XXX..X.XX...", "..XXX..XXX..XXX.X.", ".X.....X...XXXXX..", "...XX.....XXX.X.X.", "XX..XXXX...XX.....", "XX.XXXXX..XX...X..", "XX..XXX.X.XX.X..XX", ".....X.....X.XX...", ".XX..XX.XX.X.XX.XX", ".XXX.XX.XXX...XXXX", "..XX...X...X.XXX..", "XXX..XX..X........"};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {".......X.XXXX.X..X.X.........XXXXXX", ".X...XXX.X.XX...XX...X....XX.....X.", "XX.....X...XX.X...XX..XX.XXX..X..X.", "XXX..XXX....X.XXXXXXX......XX.X.XX.", "..X..X.X..X....XXX...X.X..X.XX...X.", "...X...XX.XXX.X......X.XXXX.X......", "..X...X.....X.XX.X.X......X.XX...XX", "X..X.........XXXXX.XXX.......X.....", "XX...XX.X..X.XX..X..X..X.X.X..XXX.X", "XX.....XX..X.X..XX...XXXXXX.XX.....", "X...XX..XXX......XX.X........XX..XX", "....X..X..XXX.XX..XXX.X..X...X...X.", ".X...X...XX.XXX.X....X.X.X...XX....", ".....XXXX....XX..XX.XX.....X....XXX", "..X.X....X.XX.X....XXXXX..XX...X..X", "X....X.X....X.XXXX.X...XX..XXXX...X", "X..X.XXX..X.X..X.......XX.X..XXX..X", "XX.XXX..X..X...X.XXX.X..X.X.X...X..", ".......X.......XXX...XX.X........X.", "..X.XX..XX..XXXX...X..X....XXX.X...", ".XXXX..XX.........XXX.X...XX...XXXX", ".X....X...XXXX.X..XX.....X...XX.XXX", "X.X.X..XX..XX.....XXXX..X..X....X..", "X.X..XXX.X.XXX.....XX..XX...XXX.X.X", "X.X......X..X.XX.XX.....X....X.X..X", "..X..X...X.X..XXXX.XX...X.X.......X", "..X.X......X.XX.X..X...XXXX.XX.....", ".X.XXXX.XX...XX.X.X...X..X..X.XX..X", ".X.XX.X..X.X....X........X..X..X.XX", "....X.....X..XXXXX...X...XX.X..X.XX", "XX....XXX.X....X.XX.XXX.XX..XX.X.X.", "...XXXX.X..X.XXX.XX....X.......X...", "XXX..X.....X.XX.....X.X...X.XXX.XXX", "X.X....X..XX..X..XX..XX..XX......X.", "X...XXXXX..XX..X..X..X..X...XX.X..."};
    int size = 7;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"................................................", ".X...X..........................................", "....................X..........................."};
    int size = 27;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
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
    vector<string> board = {"................................................", ".X...X..........................................", "....................X..........................."};
    int size = 26;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
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
    vector<string> board = {"................................................", ".X...X..........................................", "....................X..........................."};
    int size = 28;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"......X.XX", "X.X.X...X.", ".X........", ".XX..XX...", "..XXXXX.X.", "X.X...XX..", "...X......", "X..X......", "X.X...X...", "..X..XX...", ".XX...X.XX", "...XX..X..", ".....X..X.", "X.......X.", "X.X....XX.", "X.XX.X...."};
    int size = 2;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"X....XXXXX...XXX...X", "...X.X.XXX.X..XX....", "X..X.X.X..XX...X....", "XXXX.X....XX.X...X.X", "...X.X.XXXXX.XXX..XX", "X.X....X..XX..X.....", "X.....XXX.XX...X..XX", "XX..X.....XXX..X.XX.", "X..X..X...XX...X....", "XXXXX.X...XX.XXXX..X", "..X.XX...X..XXX.X...", "X...XX.X...XXXX.X.X.", "X.X....X..XX....X.XX", "...XX...XXX..XXXX...", "XX.XXXX.XX...XXX...X", "X...XX..XX.X.XXXX..X", "XX...XX.XX.XX..XX.XX", "X...XX.X....X..XX...", ".X........XXXX...X.X", ".X.XXXX.X.....XX.X..", ".XX..XXX..X.X....X.X", ".XX....XX.XXXXX.....", "..XX.X...X.X.X..XXX.", ".XXXXX.X.X.X.......X", ".XXX.X..XX.....X....", ".......XXXXX.XXX..X.", "..X.X.X......X.XXXX.", ".XX.X...X..X.X.XX...", ".XX.X.X.XXX..X..XXX.", "..X.X.XX.X.X..X....X", "X.XXX..X.X.XXXX..X..", "..X..X...X..XX..X..X", "..XX.X..XX.X..XX.X..", "X.X....XXX.X.XX....X", "XXX....X.X.X.....XXX", ".X.XX..X.X.X.XXX.X.X", "...X.X.X.......X....", ".XXX.......XXX..XXX.", ".XX..X.XX..XX..X.X..", ".X..XX.XXX..XXXX....", "...X.X.X.X.XXX...X.X", ".....XX..XX.XX.XXX.X", ".XXX.X...X...XXXXXXX", "XXX.........XXX.....", "X...X.XXXXX.X.....X.", "X.X.X..X......XXXX..", "X.X..XX..XXXXX.....X"};
    int size = 49;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"X.......X..X...X..........X.", ".X.........X..XXX..X....X...", "..X......XX.................", "..............X.X....X......", "....XXX...............X.....", ".X...................X......", ".....XX..X.............X....", ".....X........X..X..........", "..........X...............X.", "..X......X........X......XX.", ".....................X......", "...X................X..X.X..", ".................X.....X...X", "...........XXX...X.X........", "......................X.....", "..........................X.", "..........................X.", "...........X.........X......", "........X...................", "......X.......X.............", "...X..X......X....X.........", "................X...........", "............................", ".....X..X............XX.....", ".....X.....X............X..."};
    int size = 11;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"X..", "...", "...", "...", "...", "X..", "...", "..X", ".X.", "...", "...", "...", "..X", "...", "..X", "...", "...", "...", "...", "..."};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"XXX.....", "....X...", "..X.XX..", "X.....X.", "X.....X.", "X......X", ".X.X.X..", "..X..X..", "..X...X.", "X.XXX..X", "......XX", "........", "XXXXX...", "..XX...X", ".....X..", "XX.XX...", "X...XXXX", "XX..XXXX", ".X..X..X", "........", ".XX.X.XX", ".X......"};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
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
    vector<string> board = {"X....X", "X.XX.X", "...X..", "X.XX.X", "..X..."};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"...", "...", "..."};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"...X...", ".X...X.", "..X.X..", "X..X..X", "..X.X..", ".X...X.", "...X..."};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"XX....XXX", "....X....", "....X...."};
    int size = 4;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"...X", "...X", "...X"};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"....", "....", "...."};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {".....X....X....", ".....X....X....", "..........X....", "....X....X.....", "...X....X....XX", "XXX...X....X...", ".....X....X....", ".......X.......", "....X....X.....", "...X....X...XXX", "XX....X....X...", ".....X....X....", "....X..........", "....X....X.....", "....X....X....."};
    int size = 5;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"X....X", "X.XX.X", "...X..", "X.XX.X", "..X..."};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"....", "X...", "...X", "...."};
    int size = 4;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"....", "....", "...."};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
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
    vector<string> board = {"..X..", ".....", "..X.."};
    int size = 2;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
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
    vector<string> board = {"...", "...", "..."};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
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
    vector<string> board = {"....X", "....X", "....X"};
    int size = 4;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"....X", "....X", "....X"};
    int size = 2;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
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
    vector<string> board = {"X...XX...XX...X", "X.............X", "X...XX...XX...X"};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {".....X....X....", ".....X....X....", "..........X....", "....X....X.....", "...X....X....XX", "XXX...X....X...", ".....X....X....", ".......X.......", "....X....X.....", "...X....X...XXX", "XX....X....X...", ".....X....X....", "....X..........", "....X....X.....", "....X....X.....", "..............."};
    int size = 5;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"X....X", "......", "...X..", "X.XX.X", "..X..."};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"X.....X", "X.....X", "X.....X", "X.....X"};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"....", "....", "...."};
    int size = 4;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {".XX", ".XX", ".XX"};
    int size = 2;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"....", "X...", "...X", "...."};
    int size = 3;
    CrossWordPuzzle* pObj = new CrossWordPuzzle();
    clock_t start = clock();
    int result = pObj->countWords(board, size);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10442944&rd=8001&pm=5867
********************************************************************************
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
using namespace std; 
 
#define FOR(i,v,n) for(int i=v,_n=n;i<_n;++i) 
#define REP(i,n) FOR(i,0,n) 
#define sz(c) (c).size() 
 
struct CrossWordPuzzle { 
  // MAIN 
  int countWords(vector <string> board, int size) { 
    int res = 0; 
 
    REP(i, sz(board)) { 
      int cnt = 0; 
      REP(j, sz(board[i])) { 
  if (board[i][j] == 'X') { 
    if (cnt == size) 
      res++; 
    cnt = 0; 
  } 
  else 
    cnt++; 
      } 
      if (cnt == size) 
  res++; 
    } 
 
 
 
    return res; 
  } 
 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/