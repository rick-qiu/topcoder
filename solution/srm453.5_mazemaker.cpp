/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10451
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

class MazeMaker {
public:
    int longestPath(vector<string> maze, int startRow, int startCol, vector<int> moveRow, vector<int> moveCol);
};

int MazeMaker::longestPath(vector<string> maze, int startRow, int startCol, vector<int> moveRow, vector<int> moveCol) {
    int ret;
    return ret;
}


int test0() {
    vector<string> maze = {"...", "...", "..."};
    int startRow = 0;
    int startCol = 1;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> maze = {"...", "...", "..."};
    int startRow = 0;
    int startCol = 1;
    vector<int> moveRow = {1, 0, -1, 0, 1, 1, -1, -1};
    vector<int> moveCol = {0, 1, 0, -1, 1, -1, 1, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
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
    vector<string> maze = {"X.X", "...", "XXX", "X.X"};
    int startRow = 0;
    int startCol = 1;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
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
    vector<string> maze = {"X.X", "...", "XXX", "X.X"};
    int startRow = 0;
    int startCol = 1;
    vector<int> moveRow = {1, 0, -1, 0, 2};
    vector<int> moveCol = {0, 1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
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
    vector<string> maze = {".......", "X.X.X..", "XXX...X", "....X..", "X....X.", "......."};
    int startRow = 5;
    int startCol = 0;
    vector<int> moveRow = {1, 0, -1, 0, -2, 1};
    vector<int> moveCol = {0, -1, 0, 1, 3, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> maze = {".XXXXXXXX.", "X.XXXXXX.X", "XX.XXXX.XX", "XXX.XX.XXX", "XXXX..XXXX", "XXXX..XXXX", "XXXX.X.XXX", "XXX.XXX.XX", "XX.XXXXX.X", "X.XXXXXXX."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {0, 9, 0, -8, 0, 7, 0, -6, 0, 5, 0, -4, 0, 3, 0, -2, 0, 1};
    vector<int> moveCol = {9, 0, -8, 0, 7, 0, -6, 0, 5, 0, -4, 0, 3, 0, -2, 0, 1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> maze = {".....", "XXXX.", "...X.", ".XXX.", "X...."};
    int startRow = 2;
    int startCol = 2;
    vector<int> moveRow = {1, 0, -1, 0, 1, 0, -1};
    vector<int> moveCol = {0, 1, 0, -1, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> maze = {"......."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {1, 0, 1, 0, 1, 0};
    vector<int> moveCol = {0, 1, 0, 1, 0, 1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> maze = {"X..X.XXX...XX...XX.XXX", "..X..X.X.XX.X..XXXXX..", ".XXX.X.X..XX.XX..XXXXX", "...X.X..XXX.X.X...X..X", "X.X..XX.XX..X..XXX.XXX"};
    int startRow = 1;
    int startCol = 4;
    vector<int> moveRow = {-3, 50, -9, -32, -3, 12, 47, -37, -44, 48, 10, 8, 23, 24, 10, 47, 20, -40, -30, -39, 3, -31, -3, -43, -42, -31, -23, -29, 12, 26, -30};
    vector<int> moveCol = {16, 31, -30, 2, -40, -2, 7, 48, 46, -40, 34, -3, -32, 43, 18, -5, 48, -38, 47, 39, 39, -42, -22, 4, -18, 7, 26, 41, 48, -28, -41};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> maze = {"..XXXX.X", "XX...X..", ".XXXXX..", "........", "XX.XXX.X", "X..XX.XX", "..XX.X..", "X...X..X", "..XX.XXX", "..XX.XX.", ".XXXXX..", "...X..XX", "X...XX..", "X.XX.X.X", "..XX.X..", "...XX..X", "X.XXX..X", "...XXXX.", "X.X.XXX.", "X......X", "..X.X..X", ".XX...X.", ".XXXX..X", "XXXXXX.X", "XX...X.X", ".X.X..X.", ".X.X.X.."};
    int startRow = 15;
    int startCol = 6;
    vector<int> moveRow = {47, -7, 5, -38, 20, 43, -9, 12, -43, 23, -43, 7, 26, 20, 23, -17, -16, 28, 42, 41};
    vector<int> moveCol = {20, 31, -26, -15, -41, 12, -44, 12, -22, -25, -14, 46, 19, -24, 4, -7, -15, -16, 5, 16};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> maze = {"XX.X.X..X.XXXX.X...X.X.X.X....XXX...XX....XX", "XXX.X.XX...X.X.X.X.XXXX...XX.XX.X.XXX.......", "..X...X..XX.XX...X...X.XXX.X...XXX.XX.XX.X..", ".....X.X....XXX..XX..XX.XX.....XX.X...XXX..X", "X.XX.X..X.X..X.XXXX.X..X.X...XXXXX...X....XX", ".X.XXX.X.XXXXXX..X..XX...X.XX.XX.XXXX.XXX.X.", "X...X..X..XX.X...X....XX.XX.X.XX.X.XX...X.X.", ".....XX..XX..X.X.XX.XXXXX.....XX...XX..X.X.X", "....X..X.X.X.XX.XX.X...X..X..X.X.XXX.X....X.", ".XX...X..XX.XX.XX..X...XXXXX.X..X.XX.X.XXXX.", ".X.XX.X.XXX.X..X..XX...XXX.X.....X.XX..X.XXX", "X...X.XX.X.X.X.X..XX.XXXXX.XX...XX....XX.X.X", "...X.X..X..XX.XXXX..XXX..X...XXXXXXXX...XX..", "XX..X.....XX.XXX.XX.X.X..XX..X.X..X..X....X.", "....XXX.XXXXXXXXXX..X.XXX..X.XX.XX....XX.XX.", "......X...XXX.XXXXXXXX...X.XXXX..XXX.X.X.X.X", "..X..XX..XXX.X.X....XXX...XXXXXX..X.X......X", ".XX..X.X..X.X...X....XXX......X..X...XXXXXX.", ".XX...X.XXX.........XX.X.X..XXXXXXXX..X..X.X"};
    int startRow = 6;
    int startCol = 8;
    vector<int> moveRow = {49, 16};
    vector<int> moveCol = {-36, -47};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
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
    vector<string> maze = {".X...XX..X..XXXXX.XXXXX.", "..X..XX.X.XX..X.X.XX.X..", "X..X...XXX...X..X.X.X..X", "...XXX.X.XXXXX..XXX....X", ".XXXX.X...XX..X.XX.XX...", "X..XX.X..X.X.X....X.XXXX", ".X.XX.X..XX.X.X..X..XXXX", "X..XXX.X.....XXXXXX...X.", "..XX..XXX..X....X..X....", ".XX..X..XXXX.XX.X..X..X.", "XX.X.X..X.XX.X..X.XXX...", "XX....XX.XX.XXXXXXX.XX.X", ".X.X..X...X.XXX...XX..X.", "XX.....X.XX.XXX.X..X.XX.", ".X..XX...XXXX.X..XX.....", "XX...X.XXXX.XXX..XX...X.", "XX.XX.XXX..XXXX.XX.X.X..", "XX.X.XXXX......XXXX..X..", "..X..X.X.XXX.XX.XX.X.X.X", ".XXXXXXX.....XXX.X.....X", "X.XX.XX.X.XXXX....XX....", "X.X....X.XXX.X.X.XX.X.X.", "XXX.XX.XXX.X.X....XX.X..", "XXXX..XX.X.X.X.X...X.XXX", ".X.XXXXXXX.X...XXX......", ".X..XXX.X.XX..X.......XX", "..X..X...XX.X.XX.X...X.X"};
    int startRow = 23;
    int startCol = 18;
    vector<int> moveRow = {11, -13, -40, 22, 27, -33, -21, -48, 6, 32, -32, -17, -2, 7, -1, -44, -12};
    vector<int> moveCol = {22, -13, -19, -45, -2, -17, -44, -1, -17, 50, -27, -36, 30, -8, -17, 19, -22};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> maze = {"XX.XXX.X....X.XX..XXXX.X.", ".XX.XXXX.XXX...XX......XX"};
    int startRow = 1;
    int startCol = 3;
    vector<int> moveRow = {36, -37, 12, 44, 34, 39, 7};
    vector<int> moveCol = {7, 10, 17, 19, 49, -34, 22};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> maze = {".XXXX.X..X.XXX.XX.", "XX.XXX..X.X..X....", "XX...X.XX..X.XX.X.", "XX...X....XXXX.XXX", ".X.XXX...X.XXX.XXX"};
    int startRow = 0;
    int startCol = 7;
    vector<int> moveRow = {-8, -35, 1, -8, 7, -15, 22, -37, -20, -14, 27, -49, 41, -50, 24, 13, -20, -27, -35, -4, 19, -2, 35, -40, -4, 47, -38, 35, -20, 3, -17, 19, 17, 50, -48, -29, 12, 13, 48, 4, -10, 9, 26, 20, -20, 40, 47};
    vector<int> moveCol = {44, -22, -8, -25, 36, 32, -45, -38, 44, 36, -22, -10, 49, -2, -14, 5, 40, 18, -4, -25, 13, 36, 13, 39, -9, 20, -31, 19, 11, 49, 7, -45, -8, 6, 16, -45, -49, -8, -22, -26, -4, 1, 46, -19, -24, -4, 30};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
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
    vector<string> maze = {".X.XXX.XX..X.........XX..X.", "X.XXX.XXXX..X.X.X.X.X..XXX.", "X...XXXX...XX.XX.X.X.X.....", ".X..XXXX..X..X....X.X.XXXX.", "X...XXX...X...X.....X.XX.X.", "XXXX.XX..XX..X.XXX.XX...XX.", "X.X.X.....XXX..XX..XX.XXX.X", "...X....XX.X.XX.X..XXXX.X.X", "X..X.......XX.XX.X..X...XX.", "XX.XX....XXX......X.XXXXX..", "....XXXX.X.XX.X.XXX.X..XXXX", "....XXX..X.XX.X.X.X...X..X."};
    int startRow = 5;
    int startCol = 21;
    vector<int> moveRow = {-6, -35, 33, 17, -40, 28, 24, 11, 41, 38, 10, -34, -13, -41, -31, -11, -49, -18, 17, 1, -1};
    vector<int> moveCol = {-36, 31, 9, 39, -10, 23, 36, 34, 43, -1, -37, 47, -47, 50, 21, -33, 27, 39, 10, -15, 6};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> maze = {".X.XXX.XXX...", "..X.XX..XX.X.", "XXX.XX.....XX", "X.XXXXX..XX.X", "XXX.X.XX...X.", ".X.XX.X.....X", ".XXX.XX.XXX.X", "X.XXXXX..X.XX", "..XXX..XXXXXX", "..X..X.X..XX.", "...X..X.XXX..", "XXX......XXXX", "XX.X....X.X.X", "XXXX.XX.X.X.X", ".XXXX.X.XXXXX", "X..XXXXX.XXXX", ".X.X.XX.XX.X.", ".X..X...X.X.X", "XX.X..XX....X", ".......X.X...", "XX.X....X.XX.", "X.XX...XX..X.", ".XX.X.X.X.X.X", ".X....X..X.X.", ".XX.XX.X.....", ".XX.XXXX..X.X", "XX..XX...X..X"};
    int startRow = 20;
    int startCol = 12;
    vector<int> moveRow = {45, 0, -14, 39, -30, -1, 34, -14, -9, -17, 14, 27, 19, -28, 12, 43, -10, -9, -30};
    vector<int> moveCol = {31, 19, -19, -37, 18, 33, 18, 17, -13, 12, 21, 2, -45, -20, -48, -27, -50, 48, -42};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> maze = {"X.....XX.......XXXX.", ".XX..XX.X..XXX..XXXX", ".X.X...X.X..XX.XXX..", "XX.X...XXX.....X.X.X", "X..X.XXX.......X..XX", "XXXX...X.XX.X...X...", ".X.XXXX..XX..XXXXX..", "XX...X.X.XXXXXXXXXXX", ".XX.XXXXXXX.XXXX.X..", "X.XX.X.X....XXX.X.XX", ".X....XXX..X.X.....X", "XXXX.X.XXX.XX.XX....", ".XX....XX..X..XXXXXX", ".XXX....XXXXX..X...X", ".XXX.X.XX....X..X.X.", "XXX.X.X.X...X..X.X.X", ".X..XX..XXXX.XX.XXX.", "..XXXX.X.X..X.....XX", "X...X.X.XX....XX..XX", "XXX.X.X.X..X.X...XXX", ".XXX..X....X..X.XX.."};
    int startRow = 19;
    int startCol = 9;
    vector<int> moveRow = {42, -20, -32, -49, 31, 9, 5, -19, 12, -31, -49, 2, 27, -27, -39, -22, -13, -24, -10, 34, -37, -31, -43, -31, -25, 44};
    vector<int> moveCol = {-28, -40, 29, 41, -17, -20, -44, -39, 2, 43, 9, -22, 16, 25, 35, -10, 28, -37, 32, 35, 6, -31, -9, 44, -33, 50};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> maze = {"...XXXX.XXX......XX..", ".XX..X..X...XXX.X...X", ".XX..XX....X.XX.....X", "XXX..XXXX..........X."};
    int startRow = 0;
    int startCol = 2;
    vector<int> moveRow = {-37, -47, 14, 32, 15, 6};
    vector<int> moveCol = {-19, 46, -39, 16, -32, -6};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> maze = {"..XXXX...XXXXXXX..XXX.X...X.X.XX.X.X..X.", ".XXX..X.X...XX.XX.X.XX....XXXXX....X.X..", ".X.XXX....XXXX.....XXX.XXX.X...X..X...X.", "..XXXXXXXX.....X..X..X..XX..XXX..X..X.X.", "X.....XXX.X.XXXX..X...X...X..XXX..X.XXX.", ".X...XX.X.XXX..X.....XX.X.X.XX.X....XX..", "XXX.X.XXXX..X.X.X.X.XX..X...X..XXX.XX..X"};
    int startRow = 5;
    int startCol = 3;
    vector<int> moveRow = {4};
    vector<int> moveCol = {4};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> maze = {"XXXXX.X...XXX.XX..XX..XXX", "X.XXX...X.X.X.X.XX..X.X..", ".X.X.....X.X.XX.XX.X....X", "..X..XXXX.XXXXX.X...X....", ".XXXXX.XX...X.XX....X.X.X", ".X..XXX..XXX.XX.X...XX.XX", ".X..XX.XXXXXXXXX..X.XX...", "XX.XX.X....X..X.XXX.X...X"};
    int startRow = 1;
    int startCol = 13;
    vector<int> moveRow = {-3, -4, -5, 5, -1, 3, 2, 4, 2, -5, 4, -1, -4, -2, 0, -2, -4, -1, 4, -5, -4, 5, -1, -2, -2, 3, -5, -5, -5, 5, 1};
    vector<int> moveCol = {9, 0, 10, -9, -3, -5, -7, 2, 0, -1, -8, 10, -3, -2, -8, 0, 5, -2, -8, 0, -10, 7, -9, -9, -1, -5, 6, -5, -9, 8, -3};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> maze = {"X.XX.X.XX...XXX.XX.XX.XX.X", "..X..XX.XXXX....XX....X...", "XX..XX.X.XX.X...XX...X..X.", "X.X...XX.X..X..XXXXXXX.XX.", "XX.X.......XXXXX......X..X", "XX.XX.X.XX..XX..X.X..X...X", "XXX..XXXX.XXXX..X.XXX.XX.X", ".XXX.X.X..X.XX..XX.XXX...X", "XXX.X..XX..XXX....X...X..X", "X...X.X.X...XXX...X.....XX", "XX.XXXX....XX.X..X...X....", "XXXXXXX...XX....XXX.XX.XXX", ".XX.XXXX.X.X.X...XX.X..X..", "..X.X..X.XXX.....X...X....", "X..X..XXXX.X.XXX...XXX.XXX", "X.X.X..XXX..XXX.XXXXXXX.X.", "XX.XX.XXXX....XX...X..XXX.", "X.....X.....XXXX.XX....XX.", ".XXXXX.XXX.XXXX.X..XXXXX.."};
    int startRow = 13;
    int startCol = 3;
    vector<int> moveRow = {0, -1, 1, 4, -4, 4, -1, 3, 5, 4, 1, 4, 3, 2, -1};
    vector<int> moveCol = {8, 9, 0, 3, -7, 2, -3, -3, 10, 10, -3, -6, -8, 6, 1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> maze = {"...X.XX...XX.X..XX...XXXXX.X..XXX.XXXX", "XXXX...X.XXX.X...X.X..X...X.X.XXXXXX.X", "XX...XX..XX.X.XXX.X......XX..XX...X...", ".X.XX..X.X.XXXX.X.X...XX.X.....XXX.X.X"};
    int startRow = 3;
    int startCol = 27;
    vector<int> moveRow = {-4, 4, 0, -2, 1, 2, -1, 5, -5, -4, 4, -3, -3, 5, -5, 2, 1, -2, -4, -3, 1, 4, 4, 3, -1, 5, 0, 4, 1, 5, -3, -4, -2, -3, -5, 0, -4, 3, 2, -5, 3, -3, 4, 2, -2};
    vector<int> moveCol = {0, 8, -1, 6, 9, -10, 4, 4, -5, 2, -7, 10, 6, -2, 4, -7, -10, 5, -3, -9, 5, -4, -2, -6, 6, 10, 4, -8, 3, 8, -9, -6, -2, 9, -5, -8, 7, 6, -2, 5, -6, 7, 0, -6, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> maze = {"..XXXX.X...X.", ".XXX.XXX.XX.X", "...X.XXXX.XX.", "X.X.X..X.XXXX", ".XXXXXX..XXXX", "XXXX......X.X", "X...X.XXX...X", ".X....X...XXX", "XX...X..X.XXX", "....XXX.X.X.X", "XXXXX.....X.X", ".XXX.X..XXX.X", ".X.XX.XX.....", ".XXXX..XX..XX", "..X..XXXX.X..", "..XX.X......X", "X..X.X..X..X.", "X....XX...X.X", "XXX.XXXX..XXX", "....XX...X.XX", ".X.........XX", "X.X..X....XXX", "X.XX.X...XX..", "X..X.X...XX.X", "X..XXXXXX.XX.", "XXXXXX..XXXX.", "...X..XXXXX.X", "...X.XXXXX..X", "...XX...XX...", "X.XXXXXX.XX..", "XXXX.X.XX....", "...X.....X...", ".X..XX.X..XX.", "X.XX.X..X.XX.", "XX..XXXXX.XXX", "XXX.X....X.X.", "X..X.X..X...X", "XXXX.X...X..X", "...XX.XXX..XX", "XXX..X.XX..X.", ".X.X..X....XX", ".XX.XX.X.XXX.", "X..X..X.XXXXX"};
    int startRow = 4;
    int startCol = 8;
    vector<int> moveRow = {4, 2, 4, -4, 0};
    vector<int> moveCol = {-9, -8, 7, -1, -5};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> maze = {"XXX.X", "X....", "X..X.", ".X...", ".X...", "..X..", "..XX.", "XXX.X", "XX...", "..XXX", "...XX", "X.XXX", "X..X.", "XXX.X", "...X.", "XXXX.", "X..XX", "..XX.", "...X.", "..XX.", "XXXXX", "XXXXX", "XX...", "....X", "..XXX", ".X.X.", ".....", ".X..X", "..X..", "....X", "X...X", ".....", "..X.X", "XX...", "...X.", "XXXXX", ".X..X", "..X.X", "..XX.", "X.X.X", ".....", "XXX.X", "X.X.X", "XXX..", "XX.XX", "XXX.X", "X...X", "X.X.X", "X...X"};
    int startRow = 17;
    int startCol = 0;
    vector<int> moveRow = {4, -3, -2, -5, -4, -3, 3, -3, 4, -4, 1, -5, 0, 2, 0, 5, -5};
    vector<int> moveCol = {-7, 8, -3, 10, -4, -3, -10, 6, -8, -8, -5, -7, -1, 10, 6, 3, 7};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> maze = {".X.XXXXXXXXXXXX.XX.X", "X.XX.X.X.XX.XXX..X.X", "XXXXX...XXXXXX.X..XX", "X.XX.XX..X.XX..X.XXX", "X.XXXX..XXXX..X.XX..", "X.X..XX.....X..X...X", ".X..X.XXXXXX...XX...", ".XXX......X.XXX.XXX."};
    int startRow = 6;
    int startCol = 19;
    vector<int> moveRow = {-4, 1, -1, -4, -4, 0, -1, -2, 0, -1, -4, -1, -2, 0, 2, 1, 5, 1, 2, -4, -5, 4, -2, 3, -1, -5, -2, 1, 5, 3, 2, -4, 5, 1, -3, -3, 1, -5, 2, -3};
    vector<int> moveCol = {4, 4, -7, 2, 7, -3, 9, -3, 2, 9, -7, -8, -6, -8, 4, 4, 7, -10, 9, 2, -7, 2, 0, -4, 8, 9, -7, 0, -4, -10, 0, 4, -3, 8, -2, -10, -8, 5, -10, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
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
    vector<string> maze = {".XX.XXX.XXXXX...XXX.XXXXX.....X..XX.X...XXXXX", "XX..X..XX...XXX.X.XX......XX.X.X.X....X......", "..XXXX..X.X....X.XX..X..X.X..X.X...X.XX...X..", "XX.X.XX..XX.X..X...XX.X.X..X...XX.X.XX.XXX..X", "..XXXXXXXXXX.X......XX.XXXXXX.X.X...XX.X.XX.X", "XXXX....XX.XXX..XX..XX...X....X.XX....XXXX.XX", "X.XX..XXX..X..........XX..X...XXX.X.XXXX.XX.X", "X.X.XX.X..X....XX...X..X..X.X.XX.XXXX.X.X...X", ".X.X.X...XX....X...X.X...X.X...X.XX.XX.XX..X.", "X.X..XX.X....XXX.......XXXX.X.....XXXXX.XXX..", ".XXX.XX.....X.X..XX...XXX.XXXXX..XX..XX.X..X.", "XX.X..XXXXX.XX..XXX.X..X.X.XX.X..XXXXX...XXXX", "XXXX.X.XX.XX.XX..X.....X..X...X.X.XX...XXXXXX", ".XX.X.XX......XXX.X..X...XXX.X...X.XX..XX....", "..XXXXX...XX.X.XX...X.XXXXXXX.X....X..XX..X.X", ".XXXXX.XX.XXXXXX.X.X.XX.X..X.XX.X..X...XXXX..", "X.XXX.XXXXXXX.XX.XXXX.X....XX.XX.XX.X.X..X...", ".XXXXX..X.XX.X.XX.X.XX.XXXXX.XXX.X..X.XX.X...", "XXX..XX..X.X.X...X......X.XX....X..X...XXX.XX", "XXX..XXXXXXX....X.X.XXX...X..X...XXX.X..XX..X", "..XXX...X...X.XXXXXX.XX..X.X...XX...XX.XXXXXX", ".X.XX.X.XX...X.XXXX....XX......XXX...X.X..XXX", "X..XX.XXX.XXXX..XXXXX.X......X.XX.XXX...X.X.X", "X...X.X..X.XXX..XXXX.XXX.XXX.X.....X.X..X.XXX", "X..XX..XXXX....X..XXX...X..X.X.X.XXXXXX...X..", "XXX.XX....XXX.XX.XX.XX.X.XXXX..XXXX......XX..", "XX.X.XX...X...XXXXX.X.XXX.XXXX...X....X.XXX.X", "..X...XXX........X.....XXXX..XXX...X...XX.X..", "X...XXXXX.X.XX...XXX.X.X....XX....X.XXX....X.", "..XXX.XX...XX....X.X.....X.X...X..XXXXX...XX.", "...XXX..XXXXX...X.X...XX.XX.X...XX..XXXX.XXX.", "XX...X...XX.X..XXXX.X..XXXXXX.XX......X..XXXX", "......XXX.X..X..XXX.X.XX...XXX..XXX.X....X...", "X.X..XXXXXX..X..X...X.XXXX.XXXX......XXXX.X.."};
    int startRow = 16;
    int startCol = 39;
    vector<int> moveRow = {0, -1, 4, -5, 2, 1, -2, 1, 3, -2, 0, 1, 5, 1, 1, 5, 0, -2, -5, -1, -4, -3, 4, 4, 0, 2, 4, 2, -5, 1, -4, 2, -3, 1};
    vector<int> moveCol = {4, 0, -5, 6, -9, -8, 7, -1, 1, 0, 9, 3, 1, -5, 4, -8, 0, -10, -8, 9, -7, 7, 5, -3, -6, 8, 3, 1, 3, -6, 1, 5, 0, 6};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> maze = {".X...X.XX...X.X.XX.X.XXXX..X.", "..XX.X.XXXX.X.XXXXX.XX...XX.X", ".XXXXX..X..XX.X.......XXX.XXX", "X..X.XX...XX.X.X..X.X.X....XX", "...X..X..X.X...XXXXX.XXX.....", ".XX..XXX.X...XX.XXXX.X.....X.", "XXXX..XXXX..XXXX...X...X..X.X", ".XX.X......X....XXX.X.X....X.", "X....X....X.XX.X.XXX.XX.XX..X", "..X..XX..X...XXXX..XX.X....XX", "X.XX.X.X.X.XXXXXXX.X..XX.XX.X", "XXXX...XXXXX..XXX......XXXXX.", "X..X....XX..X...X.X....XX.X..", "X.X.XX.XXXXXX.X.X.X...XXXXX..", "..XXXX.X.X...XX...XXXXXXXXXX.", "X.XXXX....X..XXX.XXX.X.X.XXXX", "X...XX.XX.XX.X.XX.......XXXX.", ".X..XX..X..X.XX..XXXX.XX.XXX.", "..X...XX.XXX.....XXX.XXXXXX.X", ".X....XX.X....XX...X.X.X.X.XX", "XXXX.XXXX.XXXXX.X..XXXX.X...X", "X.X..XXX.X.X.XX.XXXXXX.XXXX..", "XXXX...XXXX.XX...XX.....XXX..", "XX.X.....X.XXXXX...XX.XX..X.X", ".XX.XX.XX....XXX...XX..XXXX..", ".XX....X....XX...X.XX...X.XX.", "XXXXXX..XX.X..X....XXXXX.XXXX", ".....XX.XXXXX.........XX.X...", "X.X..XXXX....XX...XX.XXXXXX..", "XXX..X.....XXXXXXXXX.XXXX..XX", ".X...XXX.XXX.X.X.XX.X.X..XX..", "XX..XX.XXXXXX...X.X.XXX.XXXX.", "XXXX.XX.X.XXX..X..X..XXX.X.XX", "X.....XXX..XXXX.....XX..XX.XX", "XX..X.X.XX.....XX.X.X..XXX.X.", "X.X.XXX.XX......XXXX..XXX..XX", "..XXX.XXXXXXX.X..XXXX.X.XX..X", ".X.XX.XXX...X.X......X.X....X", ".XXX.X.X.X.X..XXXX.X.XXXX...X", ".XX.X.XXX.X.XXXXXX.XXX.XX.XX.", "X...XXXX....XXX...X...X.X.X.X", "X.XXX..XX.XXXXXXXX...XXXX.XX.", "......XXX.XX.XX..X...X.XXXXXX", "XX.X.X..X..X.XXXX...X.XXXXX.X", "X...X.X...XX.XX.X.XX...XXXXXX", ".X....XXXX..X.X...X..X.XXXXXX", "X.X..X.XXXX.X.XXX.....X.X.X.X"};
    int startRow = 37;
    int startCol = 19;
    vector<int> moveRow = {4, -4, 4, 4, 3, -2, 0, 1, 2, 5, -2, 4, -2, 5, 5, 0, 2, 5, -3, 2, 2, -4, -2, -5, 1, -3, 0, -1, -1, 0, 0, 5, 3, 3, 1, 2, 2, -5};
    vector<int> moveCol = {8, 3, 4, 7, 1, 3, 2, 10, -3, -2, -3, -2, 0, -6, 1, -5, -4, -9, 5, 10, 1, -1, -5, -9, -1, -1, -2, -6, 8, 9, -8, -6, 2, 3, -1, 0, 10, -7};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> maze = {"X.XX..X.XX...X.X..X.X.X..XXX.....XX....XX.XX", "..XXXX...X..XX....XXX.XXXXXX...XX.X...XX.X.X"};
    int startRow = 0;
    int startCol = 10;
    vector<int> moveRow = {1, 0, -3, -2, 5, 2, -2, 1, 1, -2, -3, 0, -1, 0, 1, -3, 5, 4, -5, 1, -3, -4, 1, 1, 0, 3, -4, -3, 5, 1, 0, -3, -3, -3};
    vector<int> moveCol = {4, -3, 1, -1, 6, 2, -6, 4, 5, 5, 7, -10, 4, -1, -2, -10, -7, -9, -2, -2, 9, 6, 7, 9, -2, -1, -7, -3, -8, -9, -4, 10, 6, -2};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> maze = {"..X...XXX..XXX..XX.X....XX....X.X..XXX", "XXXXX..XXXXX....X....XXXXXX.XX..XXXXX.", "XXX..XXXX.X...XXX.XX.XXXX..XX....X..XX", ".XXX..X.XXXXXXX.X.X..XX.X.XXXX......XX", ".X....XXX..XXXXXXX.XXXX..XXXX.XX..XXX.", ".X.XXX.X.X..XX.XXXXX...X.XXX...X....X.", "X.XX.X.....X.X..X....X...XX...XX..X...", "X..X..X.X.X..X.....X..XXXXX....X...X..", "....X..X......X..XX..X...XX.X..XX.X.XX", "..X..X........XXXXX..X.X.XX...X...XXXX", ".XXX.X...XXX.XXXX.XX.XXXX.XXX..XXX...X", "XXX.XXX.....X.X.X.....X..XX.X..XXX....", "X..X.XXXX.X..XXX..X.XXX.XXXXXXXXXXXX..", "XXXX.X.XX.XX.X.X...XXXXXXX.XXXX.X.X..X", "XX.X..X.XX.X..XX..XX..XX.XX.XXXX..XXX.", "X......XX.XX..X..X.X.XX.....X.XXXXXXXX", "X...XX.X.X..X..XX..X.XXXX.XXX...X.X.XX", "..XX.....X..X..XXX...X.XXXX....XXXXXX.", "XX.XXXXX..X...XX..X..X.X.XX.X.X.XXXXX.", "X.XX..XXXXX..XXX.X.XXX.X......XX.X....", ".X..X.XXXXX.X.XX.X...X...XX..X....XX..", "...X.X..X..XX.......XX.X....XX.X.XX...", "..XXXX.XXX.XXXXX..XXX.X.X..XXX..XX.X..", "..X.X...XXXX.XXXX.......XX....X...XXXX", "X.XXX....X..X..X.X...XX.XX.X.X.XXX....", "XXX.X.X.XX...XX..XXXXXXXX..XXXX.X.X.X.", "X.X..XXX...X.X..XXXXX.X.X...XXX...X..X", "XXXX.XX...XXXXX....XXX..XX.XXX.XX.X.X.", "XXX.......X.XXX.XXXX...XXXXXX..X.XXX..", "...XXX.XXXX.XXX.X...X....XX..X.XXXXX.X", "..X.....X..X.X..XX.XX.X....X.XXXXXXXX.", "XX.X..X.X...X.XX..X...X.XX.XX.X...X.XX", "..X.XXXXXXX...XXXXX.XXX..X..XXXX...X.X", "XX...X.X.X.X.X.X.X........XXXX..X.X...", ".X..XXX..XX.X.XX.X.X.X.XX.X..XXX.X.XXX", "XXXX.XX.XXXXX...XX.....XXX....XX..XXXX", ".X.X...XX..X.X.X.X...XX..XXX.......X..", "X..X.XXX.XX.......XXX.XXX...X...X....X"};
    int startRow = 36;
    int startCol = 28;
    vector<int> moveRow = {-2, -2, 4, -5, -4, 0, -5, -2, -3, 4, -5, 1, 5, -2, -5, -5, 4, -5, 4, 4, -3, -5, -5, 3};
    vector<int> moveCol = {1, -3, -9, -1, 6, -10, 6, 0, 2, 2, -10, 6, 0, -4, 3, 6, -1, -8, -2, 6, 2, -6, 0, -7};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> maze = {"..X.", ".XX.", "...X", ".X..", "...X", "X...", "X.XX", "....", "X.XX", "X..X", "X...", "X.X.", "XXXX", "X...", "X.X.", "XX.X", ".XXX", "XX..", "X.XX", "...X", "...X", ".XXX", ".XXX", "..X.", "XX.X", ".XX.", "X.XX", ".X..", "..X.", "....", "X..X", "XX..", "X.XX", ".XXX", ".XX."};
    int startRow = 17;
    int startCol = 2;
    vector<int> moveRow = {3, -5, 2, -4, 5, 2, -2, 4, -3, 4, -2, 1};
    vector<int> moveCol = {-10, 2, 10, -6, -7, 6, 8, -5, 5, -6, -8, -5};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
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
    vector<string> maze = {"XXXX.X.XXXX...XXXX..XX.....XXXX...XX..X.XXXXXXXX", "XXXXXXXX.XX...XXX..X.XX...X..XX.XX...X..X.X.X..X", "X.X..X.X..X..XX.XX...XX...X.XX..XX.....X..X...XX", "X.X.X.XX.XXX..XX.X..XX..XX..X..X..X.XX....XXX..X", ".X...X..X.....XXX.X......X.XXX..X....X...XX.XXX.", "..XX.X...X...X..XX..XXXX.X.XXXXXX..X.X.XX.XXX..X", "X..XXXX.X..X.XX.XX.XXXXX..XX.X...X..XX.XXX...X.X", "XX.X..XXXX.XXX.XX.X.XX..XXXXX.XX...XX.X......XX.", "XXX.XX.X.XX.X....XXX..XXX.XXXX..X......X.X.X..X.", "XXXX.X.XXXX....X..XXX.X.....XXXX.X.X..XX...XX...", "XX..XX.XX.XX.XXXXXXX.XX..X.X.X.XXX.XXXXX.XX..X..", "X.X.X..XX...X.X.XXX.X...XX....X.X..X...X...XXX.X", "X.X.XX..XXX.X.XX..XX....XXXX.X..XX..XXX.X.X.X...", "XX.....XX..X.XX...XXXX..X....XX.XX..XXX...XXXX.X", "XX.X...XXX...XXXXXX.....X.X..X....X.X...XX.XX.X.", "..XXX..X..XXX.XX..XXXXX...X...X.XX..X.XX.X.XXXX.", "XX.X.X..XXX..X.XX.XXX...XXXXX.X...X.X.X.XX.X..X.", ".XX.XX..X.XXX.XX...X.XX....X..XX.XXX.XXX.X.X.X.X", "..X...XX....X..X....XXXX...X..XX.X.X.X...XXXX.XX", "X....X...XXX.XX.XX.....XXXX..X.XX...XX...X.X....", ".XX....X..XXXXXX.X..XX..XX.X.X.XXXX..XXX.X.X..XX", "X.....XXXX..X...X..X..X.X....XXXXXXXX.X.X...X.XX", "XXXX.XX.X.XXXX..X.X.X.XXX.......XXXXX..X..XX....", ".XXX..X.XX.X..X....XXX.X.X.X.XXX..XXX.XXX.X.XX..", "XX..X..XXXXX..XX...X.X.....X.X.XX.XX.....XXX.XXX", "...X..XXXX...XXXX...X...X..X...X...X.....XX..XXX", "X.X.XXXX...XXX....XXX..XX.X...X..X.XXX..X..X....", "X..XX.....X..XXX..X.X.X...XXXXXX...XX..XX.XX..XX", ".X...X....X.X...XX......XXX............X..X...X.", "X.X..XX..XXXX.XX..X......X.XX..X.X..XXX.XXXXXX.."};
    int startRow = 28;
    int startCol = 14;
    vector<int> moveRow = {0, 0, 4, 5, -1, 5, -3, -2, 3, 4, -5, 4, -2, 5, -5, -4, 0, 3, -4, -2, -1, -2, 2, 1, 4, -1, -2, 5, -3, 3};
    vector<int> moveCol = {-7, 8, 8, -10, 0, 2, -9, -6, -7, 1, -2, 6, -2, -1, -2, -8, 6, 9, -9, 6, 0, 4, -2, -5, -9, -6, 4, -10, -9, -4};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> maze = {"X.XX.....XXX.X...XXX..XX..XXXXXX.XX.XXXX....X.", "..XXX.XX.XX.X...X.X.X..X..XXX.XX.XX.X...X.....", ".X..X.X.X......XXX.XX.X..XX............X.XXXXX", "XXX.X...XXX.X....XXXXX...X...X...XX.XXXX..XXX.", ".X.X..X.X.XX.X.X.XXXXXX..X..XXXX.X.X....X..XXX", "X.X...XX...X.XX...XX.XX..X...X..X.X.X.XXXXX.X.", ".X.XX.XX..XX.XX.XXXXX.X.X.X.X.XX.XXXX.XXXXX...", "XX.X..X..X....XXXXX...X..X....X.X..X...X.XXX.X", "....XXX...X.X....XXXX.X..XXX..XX...XXX..XXX..X", "X.XX.XX..X.X.XX..X..XXX..XXXX.XX.X...XXX.X...X", "..X...X....X.X....X...XX..XX...X.XXXXX...X.X.X", "X.X.XX.......X.X..X.XXXXX.X..XX.XXX.X.XX...XXX"};
    int startRow = 8;
    int startCol = 28;
    vector<int> moveRow = {1, 0, 4, 3, 4, -3, 2, 0, 4, 4, -1, 0, 4, 3, 5, 0, 4, -2, 0, -4, -5, -4, 2, -2, 2, 2, -1, 2, -5, 1, 4, 2, 0, 1, 4, -5, -5, -3, 2, -2, 3};
    vector<int> moveCol = {-3, 7, -3, 5, 7, -5, -9, -4, -4, -1, -2, -6, 5, -4, 7, 7, 8, 6, -5, 4, 4, 5, -7, 2, -5, -9, 9, 6, -6, -4, -7, -3, 5, -6, -5, 1, 5, -5, -10, 0, -10};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> maze = {"....XXXXXXXXX.XXX.XX.X.XX.X.", "XXXXXXX..XX.X.X.....X.....XX", "....XXXXX..XXX.XXXX..XXX.X.X", ".X.XX.XX....XXX..XX...XXXXX.", ".....XXXX..XXX..XXXXXXX.XX.X", ".X...X..XXXX.XXX..X.....X.XX", "..XXX.XXXX.X.....X.XXXX.X.XX", "X..XXX.X...X..X.X..XXXX..XX.", ".X.....XXX.X...X.....X..X.X.", "XX.XX.XX.X.X.X.X.X..X.X.X..X", ".XX..X.XXX......X..X..XXX.XX", "XX.X.X.XX...XX..XX....X.X.XX", ".X...XX...X.X.....X.XXXX...X", "X..XX......X.XXXX......XXXX.", "XXXX...X...XXXX..X...XX.X...", "XXX.XX.XX.X.XXXX..XXX...X.X.", "X.X.X.....XXX...X..X.X.....X", ".XX...X..XX.XX.X..XXXX.XXXX.", "X.X.X...XX.X.X.XX..X...XX...", "XXX.X..XXX..X..X.XX...X...XX", "X.XXX..XXX.X....X...X.XX..X.", ".XX....X.XXXXX..XXX.X..XX...", "X..X.X...XX.XX.X.XX.XX...XXX", ".XX..X..X..XXX.XX.XXX.XX.XXX"};
    int startRow = 20;
    int startCol = 1;
    vector<int> moveRow = {-2, -1, -5, 2, -1, -3, -2, -1, -4, 3, 1, -2, 5, 1, -4, 2, 1};
    vector<int> moveCol = {2, -10, 3, 10, -7, 6, 2, 4, 6, -7, -2, -1, 6, -1, 4, -9, 1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> maze = {"X.XX...X.XXX.XXXXX...XXXX..XXXXXXXX.", ".....X.XXX.XXXX.XX...X.X...X.X.X..X.", "XXX..XXX.X.XX.XXX..XX.X...X...XXXX..", ".....XXX...X.XX....X...X.X.X...XXXX.", ".XXX..XXXX...X..X..X.X.XXX.XX.X.....", "X.X.X.XX.X.X..XX..X...XXXX.X.XX..XXX", "...XX.X.X...XX..........XX.XXX..XXXX", "XXXXXXX...X..X..XXX..XXX.X.X..X.XXX.", "X.XX..X..X.XXX...XX..XX.X.XXXXX....X", "X.XXX....X.XX....X...X..XX....X.X.XX", ".XXXXXXXXX..X.....X....XX.XXXX.XX..."};
    int startRow = 10;
    int startCol = 16;
    vector<int> moveRow = {4, 2, -3, 5, 3, 0, -3, -3, 5, -5, -3, -2, -3, 5, 2, -3, 2, -5, 1, 3, 2, 2, 1, -5, -2, 5, 3, 2, -5, -3, -1, 2, 5, -2, -3, -4, 3, -3, -1, 0, -3, -5, 4};
    vector<int> moveCol = {10, 1, 5, -10, -8, 5, 3, 7, 8, 7, -10, 8, 10, -10, -8, 7, 7, 5, 8, 6, -5, 10, 8, -5, 2, -3, 10, -2, 1, -2, 6, 1, 2, -1, 3, 10, -5, 2, 2, -8, -8, 5, 3};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> maze = {"X.X..XXX..XXXX....X.X..", ".XX..XX...XX.X.X..X.X..", ".X......X.XXX..X.XX.X..", "...XX.X.X.....XX.X....X", "..X.X.X.....X.X.X.X.XX.", "XX.....X.XX..X.X.X.XXXX", "XX.X.X..X......X..XXX..", "XXX.X...X..XXX.XXXXX.X.", ".XXX.XX.....X..X..X.X..", "XXX...X.XXXXX.XX.X.XXX.", "..XXXXXX..X..X.X.XX.XX.", "XXX...XXX.X..X.XX.X...X", ".X.......X..X.X....X..X", "X..X.X..X.XX..X..X.X.XX", "X...X.X..X...XX....X..X", ".X..X.X.X.....XXXXX...X", "..XXXXX.X.X..X.X.X...X.", "...X..X..XXXXXXXX..XX.X", "XX..XX..X.X...X.X.XXXXX", ".XXXXXX.X.XX.XXX....X.X", ".XXXX.XX....XX...XX.XXX", ".XX...X.XX...XXX.X....X", "X..X.XXXX....X..X..X...", "...X......XXX.X...XXXXX", "XXXX...XXX..X..XXX...X.", "...X.X.X.XX.XXX.X...X..", "XX.XX.X...XXX.....X..X.", ".XX..X.X.X..XXXXX.XXXXX", "..X.XX.XX.XXX..XXX.XX.X", ".X..X...X.....X...XXX..", "X....X.XX..X...X.XXXXXX", ".XX.XX.XXX.......X.XXXX", "XXXX.X.XXX..X.XXXXX.X.X", ".X.X.X....X.X.XXX..XX.X", "XXXXX..X..X.X.XXX.X..X.", ".XXXX.X..X.X..X.XXX...X", "...XX..X.X..XXX.XX..XXX", ".XX.XXXX..XX.X.X.XX.XX.", ".XXXXX..XXX.X.......XX.", ".X..X.X..X...X....X...X", "X.XXX.XX..X..XX..XXXXX.", "XX.X..XX..X.XXX.X...X..", "X.X.X.XX..XX..XXX..XXX.", "X..X..X...XXX.XX.XX....", ".X..X.XX.XXXX.XXXXX...X", "X....XX.X..XX.XXXX..X..", "..XX....XXXX.X.XX.XX..X", "..X..XX.XXX..XX...XX..X", "XX..XX.X..X..X.X.X.X..X"};
    int startRow = 14;
    int startCol = 17;
    vector<int> moveRow = {-4, -4, 1, 2, -2, 3, -3, -2, -4, 3, -4, 0, 2, -3, 0, 1, 4, 0, 3, -2, 0, -2, 2, 3, -3, 4, 0, -5, -2, 5, -4, 4, -1, 5, 2, -5, -5, -5, -1, 5, -2, 5, -2, 1, 3, -5, -2, -5, 1};
    vector<int> moveCol = {8, -4, 9, -2, 0, 6, 8, 1, -5, 9, 10, 3, -4, 0, 5, -1, 6, 5, -3, 1, -4, 8, -4, 2, 2, 3, -4, -1, -8, 7, -1, -1, -9, 3, -6, 2, 8, -1, 4, 2, 2, -10, 7, -9, 6, -2, 2, -5, 7};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> maze = {"X...X.XXX..X.X.X.X..XXXXXXXXXX.", ".X....X.X...X..XX....X...X.XX..", "..X..XXX.X.X......XXX........X.", "..XXXX..X...XX..XX.XX..XX..X...", "XX.X.X..X...X.....XXXX...X.XXXX", ".X...X..XXXXXXXXXXX.X..X.X....."};
    int startRow = 5;
    int startCol = 26;
    vector<int> moveRow = {0, -4, -4, 4, 1, -2, -2, 3, 2, -4, 0, 3, 1, -3, 2, -3, 5, -2, 2, 5, -3};
    vector<int> moveCol = {-5, -5, -10, -8, 6, -3, -9, -8, 4, -3, 4, -4, -2, -9, 8, -5, 6, -10, -9, -6, 4};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
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
    vector<string> maze = {".XXX...", "X...X..", "XXXX..X", "XXX.XX.", "X.X..X.", "..XX.X.", ".X.X.X.", "..X.XX.", ".X.....", ".XX..XX", "X....X.", "..XXXX.", "X.X..XX", "...X.X."};
    int startRow = 1;
    int startCol = 3;
    vector<int> moveRow = {-1, 4, -3, -4, -5, 2, -2, -2, -5, 5, 0, -4, 2, 4, 3, -4, 5, -1, 4, -3, -1, 5, 2, 2, -1, 5, 5, 0, 4, -5, 0, -4, -1, -1, 5, 2, 2, -1, 4, 1, -1, -1, 2, -2, -4, -3, 2};
    vector<int> moveCol = {1, -4, 9, -4, -9, -3, -4, 1, 1, -7, -7, -4, -6, 0, 8, -2, -8, -5, -9, 4, -4, -1, -8, 7, 3, -8, 10, 5, 7, 8, -8, 3, -3, -3, 7, 1, 10, 6, -6, -7, -8, 6, -2, 3, 2, 2, 9};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> maze = {".XX..", "XXX..", "..XXX", "X..XX", "....X", ".X...", "....X", "X.XXX", "X.X.X", ".X.XX", "....X", ".X...", "..X.X", "X...X", "X..XX", "X....", "....X", ".X.X.", "..X..", "..XX.", ".X.XX", "XX.XX", "X.X..", "XXXXX", "..XXX", "X.X.X", "XXX..", "X.X.X", "..XXX"};
    int startRow = 20;
    int startCol = 2;
    vector<int> moveRow = {-3, 0, 1, 3, -2, -2, 2, 4, 1, 2, -2, 3, 0};
    vector<int> moveCol = {-6, -7, -3, -10, 9, -1, -10, 6, 2, 5, -1, 7, -6};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
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
    vector<string> maze = {"X.X...XXXXX.", ".XXXX..XXXX.", "..XX.XX...XX", ".X.X...XX...", "........XX..", "..XXXX.XX.X.", "X.XX..X..XX.", "X..XX.X...XX", "..XX..XXXX.X", ".XXXXXXXXXXX", ".X.XXX.X.X..", "X..XX..XX...", "X.XX.X.XXXX.", "..X.XX.....X", "X.X.XXXX..X.", "..XXX....X..", ".XX...X..XX.", ".X.X.X.....X", "..........X.", "X.X.XX......", "...XXX.XX.XX", "X..X..XX.X.X", ".XX..XXXXXXX", "X.X.........", "X..X...XXX..", ".XX....XX..X", "....X.XXXX.X", ".XXXX..XXXX.", ".........X..", ".....X....XX", "......X.X.X.", "...X.X.X.XXX", "X.XX.XXX.XX.", ".X..X.X..X.X", "XXXX....X.X.", "X.X..XX.XXX.", "XXX.XX..X.XX", "XXX..X..X.X.", "..XXXX..X..X"};
    int startRow = 24;
    int startCol = 10;
    vector<int> moveRow = {4, -1, 3, 0, 5, -2, 5, 0, -2, 1, 4, -1, 2, -3, 0, 0, 3, 2};
    vector<int> moveCol = {-9, 6, -6, -5, -8, -7, 0, 7, -4, -4, 1, -5, 4, -4, -1, -3, -4, -9};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
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
    vector<string> maze = {"X.X...X..X.XX...X.X.X.X.X..X...X", ".X.XXX.......XXX.X....XX.XXXX.XX", "XXX..X.XXXX...X.X.....XXX..XXXX.", "..X...X..X...XXX.XX.XX...XXX....", "X.XX..XX.X.XX...XX.X..XXXXXXXXXX", "X..XX..XX..X.XXX....XX.XXXXXX.XX", ".X.X......XX.X..XX.X.X..XXXX..X.", "XXXX.X.X.XXXX..XXX..X..X.XX..X..", ".XXX.X.XX.XX..XXXXXXX...XX....X.", "XX..X....X.XX..XXX.XXXX.....XXX.", "X.X.XX...XX.X..X.X...X..X..XXXX.", ".XX.XX.XXX.XX.X.XX.X.XXXXXX..XXX", "X.XXX..XXX.XX.XXXX.X.XX.X.XX..XX", "XXXXX.XXXX...XX.XXXX..XXX..X....", "X.X...X..X.XXXX.....X....XXX...X", "XX.XXX.XX...XX....X......X......", "X.XXX.X..XXXX.XX.XXXX.X..X.XX.XX", "..X..XX.XX.XX...X...X..XX.XXXXX.", ".XX.XXXX.X.X..XX..X.X..XX...X.X.", "..X.XXX......XXXXX...X.XXX.XX.XX", ".X.XX...XXX.XXXXX.X...X.X....X..", "XX..XX..X.X...X.X...XX..XX.X.XXX", "X..X..XX...XX.XX..X..XXX.X.X.XXX", "XXXX.X.X.XX.X.X.X.XXXXXX.X.XX..X", "XX.XX.X...XXXXX..X..XX.X..XX.X.X", "..XXX.X.X.....X.X..XXXX.......X.", ".X.XXXX..XXXXX.XXX..X.XXX...XXXX", ".XXXX.X.X.XXX.X..X.X.X.X.XXX..XX", "X.X.XXXX.XX...X..X......X.XX....", ".....X..X.X.X.XXXX.XX.X.XXX..X..", "X.XX.X.XXX.X.XX.X..X.XX.X...X..X", ".XXXXXX.XX.XXXX..X..XX..X.X.XXXX", "X.X.XX..XXX..X..X..XXX.XXX..XXXX", "..XX.X.X.X.X...XX.XX.X..X.XX..X.", "XX.X.X.X...XXXX..XXXXXXX.....X.X", "XXXXX.XX.X.X.X...........X.X.X.X", "XX.X....X.XXX.XXXXXX...X.XXXX..X", "XX.X...XX...X....XXX.XX.XXX.XX..", "XXXXXXXX.XXXXX.X.XX..X...X..XX.X", "XX..X.XX.XXXXX.X..XX.....X..X...", "XXXXXX.X..X..XXX..X....XXXX..X.X", "..XXXX..X.XX..X..XXXXX..X.XX....", "XXX.XXXX.....XXX.....X.X.XXX.XXX", ".......XX.XXXXX.X...XX.X..X..X.X"};
    int startRow = 38;
    int startCol = 26;
    vector<int> moveRow = {5, 5, -4, -5, 0};
    vector<int> moveCol = {-1, -10, 9, 0, -3};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> maze = {"X.X..XX.X.X..X.XXXX.X", ".X....X.XXX.X.....XX.", "X.X......X...XX.X.X..", ".XXXX.X.XX.XXXX..XX.X", "XX..XX.....XX......XX", ".X.XX...X..XXXX...XX.", ".X.X.XXX.X....X.XXX.X", ".X...X.......XX....XX", ".XX..X..XXX....XXX.X.", "..X....XXXXX.X..XXXXX", "..X.XXX....X..XXX...X", "..XX.X..X.X..X....XX.", "..X..X..XXX...X.XX...", "X..X.X....X.X..XXX...", "....XX.X.XXXX..XX.X.X", "X...X.X.XXX..X.X....X", "...X....XXX..XX..XXX.", ".XX..XX.X.XXX.XX.XXXX", "...XXX..XX..........X", "XXX...X..X.X...X....X", ".X.XX.XXX.XX.X..X.XX.", ".XX..XX..XXXX..X..X..", "X...X..XX.X.XX....XX.", "X.X..X.X..X.XX..XXXX.", "X..X....X.X.X.XX.....", "XX....XX.X..XX...XXXX", "XXXX..X..XX..XX....X.", "XXXX.XXXXX..XX...XXXX", "X.X...XXXXXXXXX.X.X..", "XX.XX.XX..XX.XX...X..", "XXXX.....XX.XXX..XXXX", "XX.XXXX.X..XXXXXX.XX.", ".X.XX.X.X.XX.X...XXXX", "....XXX.X.XXXXXX..X..", ".X............X.X.X..", "XXX.....X.XXXX..X..X.", ".X..XX...XX.X.X.X.X.X", "..XX....XXX..........", "....XX..X...X..X...X.", ".XXXX.X.XX...XXXXX..X", "XX.X.X.XXXXX...X..X..", ".X...X..X..X...X...X.", "X.X.X...XXXX.XX....XX", "..X.XX.XXX..XXXX..X..", "XXX.XX.XX.XX.X.XX...X", "XXX.X.X.X..XXX.XX.X.."};
    int startRow = 22;
    int startCol = 15;
    vector<int> moveRow = {5, -3, -1, 1, 1, 5, 0, -5, 4, -1, -2, 0, 2, 0, -5, -3, -1, 3, 3, -2, 1, 2, -5, -4, -1, 4, -1, 4, 5, -5, -3};
    vector<int> moveCol = {10, 9, -9, 5, -1, -10, -5, -1, -4, -6, -6, 0, 10, 0, 3, 4, -6, 4, 6, -1, -2, -9, 0, 9, -6, -4, -6, 8, 2, 0, 6};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> maze = {".X.X....XX", ".XXX...XX.", "...XXX....", "X.XXX.XX..", "XXX..X....", "..X.XXXX..", ".X.X..X.X.", "XX.X....X.", ".XXXX.XXXX", "..XXXXX.XX"};
    int startRow = 6;
    int startCol = 2;
    vector<int> moveRow = {0};
    vector<int> moveCol = {2};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> maze = {".X...XX.X..X", "..XX.......X", "..X..XXXX...", "X..XX.X.....", "XXX.XXX.....", "XX...X.X.XXX", "..XXX..XXX..", "X.XXX.XXXX.X", ".XXXX..X..XX", "..XXXXXXX.X.", "XX.XXX.XXXXX", "...X.X...XX.", "X.XX.XXXXXX.", ".XX.XXXXXXX.", "X.X...X...XX", "..XX.XXX...X", "X.....X.XX..", "XXX.X.X..XXX", ".X.X.X..XXXX", "..X...XX...X"};
    int startRow = 15;
    int startCol = 8;
    vector<int> moveRow = {3, 0, -4, 0, -5, -3, 1, -4, -3, 0, 5, 2, -5, 1, 0, -4, -3, -4, 3, 0, -1, 2, 4, 0, -5, 2, -2, 1, -1, 1, 1, 4, -2, -5, -1, -2};
    vector<int> moveCol = {7, 6, 2, 6, -7, -6, 4, 4, 2, 4, 3, -5, 6, 8, -1, -7, -2, 7, -9, 8, -4, 9, -4, -10, 0, -10, 6, 9, -5, -4, -10, 9, 5, 6, -7, -9};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
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
    vector<string> maze = {"X..X.XXX.", "..X.X.X..", ".X.X.X.XX", ".X....X.X", "XX...X...", "......X.X", ".XXX.XX.X", ".XXXXX..X", "..XXXX.XX", "X..X.XXXX", "X.XX.X..X", ".XX.XX.X.", ".X.X.X...", "XXXX.X.X.", "....XXXX.", ".X.X.XXXX", "..XX..X.X", "XX.X..XXX", ".XX..X...", "..X..X..X", ".XXX.X.X.", "XX.XXXXXX"};
    int startRow = 13;
    int startCol = 8;
    vector<int> moveRow = {1, 5, -4, 4, 4, 0, 0, 1, -1};
    vector<int> moveCol = {3, -7, 9, -6, -5, -3, -1, -5, 5};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> maze = {"....X...X.X.XX.XX...XXX..XXX.XX...XXX.X", "X.XXX....X.XX..X...X...XX......X.X.X.X.", "XXXXX.X.X.XX..X.XX.X......X.X.XXX......", "XX.XXX..XXX..X..X..XX.XX.X..........XXX", "..X....X.X.XXXXX.X..XX.X.XXXX..X....X.X", "X..X.XXX..XX.X.X.X.XXX.X..XX....X.XX..X", "X.XXX.X.X.XX..XXXX......X.X..X...X....X", "X..XXX.X..X..X..X.XXXX.X.X..XXX..X..X..", "XXXXXX.XXXX.XX........XX.X.XXXX.XX.XX..", "XXXX..X.XXX....XX.X.XX........XX..XXXXX", "..X....XXX.XXXX..XXXX...XXXX..X.XXXXXX.", ".....X.X....XX.XX....X.XXXX..XXX.X.X...", "..XX....XX.XXX.X..XX.XX.....XXX......XX", "XXXXXX.X...XXXX...XX.X.X.X...XXX..XXX..", "X..XXXX.XX.XX.XXX.X.X..XXXXX...X.XX..XX", ".X...X..X....X.X.XX.....XXX.XX..XXX.X.X", "XXXXXXXXX.XXX.XXX..XXXXX.XXXX.XX.XX.X..", "X..X...X...XX.XXXXXXX..X.XXXXX.XX.XXX..", "X....XXX.XX..X..X.XX.XX.XXX.X..XX.....X", ".X..X....XXXXX.XXX.XXX..X...XX.XX.XXX..", "XXX..X.XXX...X.XX.X.X..X..XXXX....XX.XX", "...XXXX..X.XXXX.X...XX....XXXX.X.XXXXXX", ".XXX...XXX...X.XXX.X.XXX.XXX.XX.X..XX..", "X.XXX.XXX..X....X..X..X...X..X.X.X....X", "X.XX.XX...X...XX.XX.X.X..X.XXXX.XXX..XX", "X.X.X...XXX...XX..X..X.X.X..XXXXXX.XXXX", "X.X...XX.XXX.X...XXX.X.XX..X..X......X.", ".XXX...XX..X.X.X.XX..XXXXX..X.XXX...X.."};
    int startRow = 14;
    int startCol = 13;
    vector<int> moveRow = {5, 0};
    vector<int> moveCol = {-2, -9};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> maze = {"X.XX......X.XX.XX...XXX..X.X.X..XXXXX.XX...X.XX.", "..X.X..X.X....X...XX.....XXXX..X.XXXX.X..XX.X...", ".XXX....XX.XXXX..XXX.XX...X.X.X..XXXX.X..XX.....", "....X.X....XXXXX...X....XX.XXX..X.X......XXX..XX", "X..X.X..XX.X.XXX.XXXXX...XX.X.X..XX.XXXXX....X.X", ".....XXX.XX.XX..X..X...XX..XX...XX.XXX.X...X.X..", "..XX.X...XXXX..XX.XX.XXXX....X...X.X.X.X.X.X..XX", "XXX.X..XX.XX.XXX....X.X.X..XX.XX.X.XXX.....XX...", "X.X...X.XXX...X.X.XX.X.XX...XX.X..XX.XXX..XXXXXX", "..X.X.....XX..X.X..X.XX....XXX....X.X..XX...X.XX", "XXXX.XX.X..XX..XX...X.X..XXX.X..X...XX....XXX.XX", ".XXX.....X.X..X.XXXXXX.X..X...X.X.XX..X.X...XX..", "XX...X..X...XX..X.X..XX.XX..XX.XXX.XXXX..X..X.XX", ".XXXX..XX...X...XX.X.XXXX.X...X.......XX.......X", "X...XXX.XX...XX.X..XX.X..X...X..XXXXXX.X.XX.X..X", "..XX..XXXXXX..X..X..XXXXX.X.XXX.XX.X..XXX.......", "X...XXX.X.X...XXXX...XXX...X..XX...X.X.XX..X.XXX", "X.XXX....X.XX.X..XX.X..XXX..X.X....X...X..X.XXX.", ".XX...XXX.XXX.XXX...XXXXX.X.X..X.XXXXXX.X.X.X.X.", "X..X...XX.XX.XX....XXX.....X.XXXXX.X.XX.X..XX.X.", "..XXX..XX.XXX..X..XX..X....X...XXX......X.XX.X..", "XXXXXX.X...X........XXX.X.X.XX...X..XXX.X..XX.XX", ".X...X.X.XXX...X.XX.X.....X...X..XXX.XX..X.X..X.", "XXXX..XXXXXXX...X.XX..X...X.X.XXX...XXX....X..XX", "XXX.X..XX..XXXXXX..XX.XXX..XXX.XXXXX....X.X.X..X", ".X....XX.....X...XXXXXXX..XX.XXXXXX.XX.X.X....X.", ".XXX..X....XXX.XXX....X....X.XXXX.X..X.X.X....X.", "XX.XXXXXXXXX....X...X.XXX.X.XX..XXX..X..XX..X.XX", "X....XXXXX.XXX......X....X....XX.X.X.XXXXX.XX..X", "X.X..XXX..X...X.X..XX.....X..XXX..XX..X.XXX.X.X."};
    int startRow = 13;
    int startCol = 44;
    vector<int> moveRow = {4, 1, 1, 2, 5, -4, -2, 4, -3, 5, -3, -5, 3, -2, -1, 0, 3, -3, 4, -4, -1, 2, 3, -1, 4, -2, -4, -5, 1, -4, -5, 4, -2, 5};
    vector<int> moveCol = {-1, 8, 8, 9, 8, -4, -5, -1, -7, 1, 10, -6, -1, 2, -1, 0, 7, 6, -7, -8, 2, 10, -6, -6, 9, 5, 7, 4, -7, 4, 8, 4, 0, 1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> maze = {"X..XX..XXX..X.XXXX.", "X.XX.XX.X.X..X.XXX.", "X.XXXXX..XXXX..XX.X", ".XX.XX...X..XX.XX.X", "XX.X..XX.XX.X.X.XX.", ".X..XX..XXX..X.....", "X....X..XXXXX..XX..", "XXX.XX.XXX..XX..XXX"};
    int startRow = 4;
    int startCol = 15;
    vector<int> moveRow = {2, -5, 2, 5, 5, -3, -4, 4, -3, 5, -5, 0, -4, 2, -3, -5, -5, -4, -2, -3, 4, 0, -5, -1, 2, 3, -5, -3, -3, 1, -1, 1, 4, 4};
    vector<int> moveCol = {10, 5, 7, 9, 0, -10, 0, -8, 0, 2, -10, -7, -10, 3, 1, 5, -3, -1, 3, -3, -7, -9, 5, -3, -9, 10, 3, -2, -8, 7, 1, 9, -6, -8};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> maze = {"XX.X..XX.X.XXXX....X.X.X.XXXXX..XX", "X.X..X....X......XXXXXX.XXX..X....", "XX..XX.XXX......X.XXX.XX.XXXXX..X.", "..XX.X.....XX..X.X..X....X.X.XX..X", "..XXX.X.XX.X..X.X.XX..X...XX.X.XXX", ".XX.XXXXXX.....X...X.XXX.XX.XX.XX.", "XX.X..X....XXXX....XX..XX...XX....", ".XXXXXX...X.XXX.X..X.....XX....X.X", "X..X.XXXX.X..XX..........X.XX...X.", "X..X.XX....X......X.XXXXX.X.XX..XX", "..XX.X.X.X..X.X..XX.X..X.XXXX.....", "X...X.X...X.X...XX..XX.X...X.XX.X.", ".X.XXXX..X...XXXXXXX..XX..X..XXXX.", "...X..XX.XX..X...X.X..X.X.X..X.XX.", ".XX.X..X.XXX.X..XXXX..XXX......XXX", "XX.XXXXX.XXXXXX.XXX..X.X.X..X.XXX.", ".XX....XX.XXX...XXXX.XXXXX....X..X", ".XXX.X.X...XXX...XXX.XX..XX..XXXXX", "...X.X.XX.XX.X.XX.XX.X.X...X.X.XX.", ".X......XXXXXXXXX...XXX..X.XX...X.", "X.X...XX.XX..XXX...X.XXX.X.XX....X", ".XX.XX..X.X.XX..XX..XX.XX..XX.XXXX", "XX.X...XX.XXXXXXXX...X.XXXX..X.X..", "X..XXX..X.XX.X.X..XXX..X.XXX.XX.X.", "X..X.XX.XX.X...XXXX.X.XX..X..XXXX.", ".....X...XXXX...X...X.XX..X.X.X...", "X....XX.XXXX..X.XX..X.X.XX.XXXX..X", "...XX...XX.XXXXX..X..XXXX..XX.X.XX", "X.XX.XX..XXXXXX.XXX.XX.XX....XXX.X", "XX..X..XXX.XX..X.XXX...XXXXX.XXX..", "..X...XX....XXX.....X..XX...XX....", "..X.XXXX..X..XX...X.XXX..XXX..X.XX"};
    int startRow = 23;
    int startCol = 6;
    vector<int> moveRow = {3, -1, -4, -1, -2, 4, 2, 0, -1, -3, 0, -2, 3, 3, 4, -3, 3, 3, 2, -4, 4, 1, 0, -4, 2, 3, 4, 4, -5};
    vector<int> moveCol = {-6, -4, 0, 8, -1, 9, 3, -4, 2, 8, -8, -6, -9, -7, -10, 3, 4, -8, -8, 3, -10, 10, -2, -7, 9, -3, 6, 0, 10};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> maze = {"..XX..XX....XX....X.X.X..X..X..XX."};
    int startRow = 0;
    int startCol = 11;
    vector<int> moveRow = {0, 0, 0, 0};
    vector<int> moveCol = {6, -10, 22, 7};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> maze = {".XXXXXXXXXXXX....X.XXXXXXXXXXXXXXXXXXXXXXXXX", "..XXXXXXXXX.XXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X.X.XXXXXXX..XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "XX...X..XXXXXX.XXX..X..XXXXXXXXXX.XX.XX.X.XX", "..XX..X.XXXX.X.XX...X.X.X....XXXXXXX.X.X...X", ".X...XXXXX..XXX..X.X..X.X...X..XX.XXXX.XXXXX", "X.XX.X..X.X.X.X...X.XXX.XXXXXX.XXXX.XXXX...X", "X.XXXX.XXXX....XXX.....XXX....X.XXXXXX...X.X", "X.....XXX.X......XX...X.XX..X.X.X...X..XX..X", "XXX..X.XX.X.XXX.XXX..X.X.X....X...X..X......", "XXX....X..XX.XX.XX.X.XXX.X...XXXX.X.XX.XXX.X", "XXX.XX.XXX...XX..XXX.XXXXX..X.X..XXX..X.XXX.", "XX.XXXX.XX.X.XXXX..XXXXXX.XX..X....X....XX.X", "X.X.....XXXXXX.X..XXX.XX.X.X.XX...XX.....XX.", "XX.XXX.X.XX...X..X...X.XX...X.XXX..X...X.X.X", "....XX.........X.XXX..X...XXXXXXXXX........X", "X.XX.XX........X...XX..X..XXX.XXXX...XX.XXXX", ".XX..X...X...XXXX....XXX..X...XXXX...XXX..XX", "..X.XXXX...X..XXX.X.XXX...XX...XX.XX..X.X...", ".X.XX.....XXXXXXXXX....X.X.X.XX.XX.X.XXX....", "XX..XX.X.X..XX.XX..X......X............XX.X.", "....XX..XXXXX.X.X.X.XX..X.X....XX.X.XX....X.", ".....XX.X.X..XXXX.XX.XXXXXXXXXX...X.X.XXX...", "X...XX.XXX.XXXX.X.X.X...XX.X......XXX.X.X.XX", ".XXXX..X.XXXX..XX...XXX...X....XX.X.X.XXXX..", "XX.X..XX...XXX...XXXX.XXXX..XXXXX.X...X.X...", "XX...X..XX.XX.............XXXX..X.XXXXX.X.X.", "..XX.XX...X...X.XX.XXX.XX.X.X.XX..XXXXXX..XX", "X..XX.....XX.X.X.XXX.X.XX.X...XXXX..XXXX....", "X..X.XX..XX.XX.X.X.X....X....XX.X..X.X..XXXX", ".XXX..X...XXX...X...XXX.XXX.XX.X.X..X.XXXXX.", "..XXX..XX.XXXX..XX.....XXXXX.X.XXXXX.X..XXXX", "X...XX.XXXX....X..XXX.XX...XXXXXXX..X.XXXXX.", "..X.XX.XXX...XXXXXX.X.X..X.XX..........XX..X"};
    int startRow = 23;
    int startCol = 29;
    vector<int> moveRow = {-15, 13, 5, 9, 5, 20, 7, 10, 8, 27, 25, 24, 30, 27, 13, 10, 12, 6, 21, 11, 8, 26, 29, 26, 3, 5, 33, 6, 24, 18, 33, 14, 10, 28, 24, 23, 29, 4, 8, 9, 8, 19, 10, 18, 16, 11, 7, 12, 8, 6};
    vector<int> moveCol = {-24, 17, -1, 4, -21, 13, 17, -5, 5, -5, 11, -7, -19, 31, -16, 32, 5, 33, -19, 36, 2, 6, -11, 14, -1, -30, -35, -21, 21, 15, 1, -1, 14, -7, 20, 2, -3, -12, -11, 34, -26, 24, 33, 35, -37, -19, 21, 15, 31, -11};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> maze = {".XX.XXX...XXX....X.X.X.XX..XXXXX.X.XXX.....X", "..XXXX.XXXX.X.X..XX.XX.X..X.XXXXXXXXX...X...", "X.X.XXX.X.X...XXX.X.XXXX..XX...XX.XX...X..XX", "XX...X.XXXX.XX.XXX..X..XXXXXX..X..XX.XX.X.X.", "..XX..X.X.XX.X.XX...X.X.X...XXXXXXX..X......", ".X...XXXXX..XXX..X.X..X.X...X..XX..XXX.XXXX.", "X.XX.X..X.X.X.X...X.XXX.XXXXXX.XXXX.XXXX...X", "X.XXXX.XXXX....XXX.....XXX....X.XXXXXX...X.X", "X.....XXX.X......XX...X.XX..X.X.X...X..XX..X", "XXX..X.XX.X.XXX.XXX..X...X....X...X..X......", "XXX....X..XX.XX.XX.X.XXX.X...XXXX.X.XX.XXX.X", "XXX.XX.XXX...XX..XXX.XXXXX..X.X..XXX..X.XXX.", "XX.XXXX.XX.X.XXXX..XXXXXX.XX..X....X....XX.X", "X.X.....XXXXXX.X..XXX.XX.X.X.XX...XX.....XX.", "XX.XXX.X.XX...X..X...X.XX...X.XXX..X...X.X.X", "....XX.........X.XXX..X...XXXXXXXXX........X", "X.XX.XX........X...XX..X..XXX.XXXX...XX.XXXX", ".XX..X...X...XXXX....XXX..X...XXXX...XXX..XX", "..X.XXXX...X..XXX.X.XXX...XX...XX.XX..X.X...", ".X.XX.....XXXXXXXXX....X.X.X.XX.XX.X.XXX....", "XX..XX.X.X..XX.XX..X......X............XX.X.", "....XX..XXXXX.X.X.X.XX..X.X....XX.X.XX....X.", ".....XX.X.X..XXXX.XX.XXXXXXXXXX...X.X.XXX...", "X...XX.XXX.XXXX.X.X.X...XX.X......XXX.X.X.XX", ".XXXX..X.XXXX..XX...XXX...X....XX.X.X.XXXX..", "XX.X..XX...XXX...XXXX.XXXX..XXXXX.X...X.X...", "XX...X..XX.XX.............XXXX..X.XXXXX.X.X.", "..XX.XX...X...X.XX.XXX.XX.X.X.XX..XXXXXX..XX", "X..XX.....XX.X.X.XXX.X.XX.X...XXXX..XXXX....", "X..X.XX..XX.XX.X.X.X....X....XX.X..X.X..XXXX", ".XXX..X...XXX...X...XXX.XXX.XX.X.X..X.XXXXX.", "..XXX..XX.XXXX..XX.....XXXXX.X.XXXXX.X..XXXX", "X...XX.XXXX....X..XXX.XX...XXXXXXX..X.XXXXX.", "..X.XX.XXX...XXXXXX.X.X..X.XX..........XX..X"};
    int startRow = 23;
    int startCol = 29;
    vector<int> moveRow = {-15, 5, -5, 11, 12, -17, 21, 21, 7, 1, 23, 16, 30, 25, -2, 8, 25, 0, 16, 23, 11, 5, 5, 9, 24, 19, 26, 26, 11, 7, 19, 30, 25, 33, 12, 10, 15, 18, 13, 4, 31, 4, 8, 10, 33, 31, 14, 3, 8, 30};
    vector<int> moveCol = {-24, 12, -18, 1, 15, 14, -23, 21, -9, 5, -18, -8, 20, 10, 2, 18, 3, 32, -13, 33, 28, 13, -10, 9, -27, -15, 14, 19, 4, -4, -8, -31, -23, 24, 7, -5, 8, 17, 9, 22, 9, -9, -15, 39, 27, -30, 15, 5, 14, -13};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> maze = {"XX.XXXX", "X.....X", "XXXX...", ".X...X.", "XX...X.", "XXXXX.X", "XX.XX.X", "...X..X", ".X.XX.X", ".X.XX.X", ".X..XXX", "......X", "..XX.XX", "XXX....", "..XXX.X", "XX...X.", "X.X.XXX", "X......", "XX..XXX", "X.....X", ".....XX", "XXX..X.", "XX...X.", ".XX.X.X", "XXXX.XX", ".X..X..", "XXX.X.X", "XX.XX.X", "...X.XX", "XXX.X.X", "XXXX...", ".XX..XX", ".X.XX.X", ".....X.", ".XX..X.", "XXX.XXX", "X.XX.XX", "X...XXX", "XX.X.XX"};
    int startRow = 31;
    int startCol = 4;
    vector<int> moveRow = {6, -29, -30, -10, 24, -12, 14, 18, 11, 15, 4, -4, 2, 4, 19, 13, 30, 31, 11, 18, 34, 10, 17, 6, 21, 37, 38, 24, 25, 8, 15, 4, 0, 5, 31, 31, 11, 19, 0, 24, 0, 12, 29, 15, 17, 0, 29, 10, 21, 23};
    vector<int> moveCol = {-1, -1, 1, 5, -4, -3, 4, 2, 2, 2, 2, 2, 0, 2, 0, 0, 4, -2, -1, 3, 0, 3, 0, 2, 1, -1, 2, 3, -1, 0, 4, 1, 0, 3, 4, 4, 2, 1, 0, -1, 0, 1, -1, 4, -2, 2, 4, 3, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> maze = {"XXXXX..X.X.XXXX.XXXXXXXX.X...X.XXX..XXXXX.....XX.", "XXX.XX.X.X.XX.XXXXX.X.X.XX..XX..X.XX..XXX.X..X.XX", "X.XX.XXX.X.....XXX.X..XXX.XXX..X.X..X.XX..X.XX..X", "XXX..X.X.X..XX.XXXX.XXXX.XX....X...X...XX...X.X..", "X.XXXX..XX...X....XXX..XX.X.XX....X...XX.XX...XX.", "..XXXXXXXXXXX..XXXX.XX..XX..XXX.XX.XXX.X..XXX.X.X", "X.X......X.X..X....X..X.X.XXX.XXX..X.X...XX.X..X.", "X.XXX.....X.X...XXXXXX..XX.....X..XXX.XXXXXXX..XX", "XXXX..X.X.XXXX..XX..X.X..X.XX.XXX.XXXXXX...X..XX.", "XX.XX...XXXX.XX.XX...XX.XX..X..XX.X..X..XXX..XX.X", ".XX..XX.XX.X.XX..X.X.XXX...XX.X.XX.XX...XXXXXX..X", "XXX.XX.......X..XXXXXXXX..X..XXX.X..X.XXXX.....XX", "X..XX.XXXXXX.X.XX...X.XX.....X.....XXXXXX.X.XX.XX", "..XX.X.XXX..XXXX.XX.X...X.X.X.X..XX.....X.X.XX...", ".X...XX.X.XXXX.XXXXX.X..X.XX.XX....XX.XXX...XXX.X", "..XXXX.XXXXXXX....XXX..XX.XXXXX.X.X.....X.X..XXXX", ".XX.X....XXX..XXX..XXXX..X.X.X...X......X.X.X.X.X", "XXXX.XX...X.XXX.XX.XXX.XXX.X.....X...X.X...X..XXX", "X.X.X......X.XXX...X....X.X...X..X.X...X.XXXXX..X", "X.X....X..XX.X.XX...X..XXX..XXX.XXXX...X....XX.X.", "X.X..XX.X.....XXXX.......XX.XX.XXXX.X.X.XXXX..X..", "X....X.X..X.X....X..XXXX.XXX.XXX.X.XXX.X....XX.X.", "X.X.XX.X.XX...X..XXXXX.X..X.....X..XXX...XX.XX..X"};
    int startRow = 15;
    int startCol = 6;
    vector<int> moveRow = {-8, 3, -12, 5, 1, 5, 5, 4, 10, 2, 10, 13, 17, 4, 2, 13, 19, 15, 12, 10, 22, 0, 13, 19, 2, 3, 6, 6, 10, 12, 3, 11, 20, 4, 13, 14, 16, 4, 18, 12, 15, 13, 22, 20, 15, 16, 16, 13, 2, 7};
    vector<int> moveCol = {1, -3, 29, 3, 2, 15, 30, -6, -27, 6, -3, 30, 9, -17, 22, -4, 11, 7, 1, -10, 22, 20, 26, 3, 9, -9, -8, -1, 22, 39, 2, -17, 5, 15, 11, -14, 9, 13, 19, -11, -2, -11, -18, 11, 33, 27, -24, -4, 12, 18};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> maze = {"X...X.XXX", ".XXX.X..X", ".XX...XX.", ".X.X.X.X."};
    int startRow = 1;
    int startCol = 7;
    vector<int> moveRow = {2, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, -1, 2, 0, 1, 2, 1, 1};
    vector<int> moveCol = {-7, 6, 1, 0, -6, 0, -2, -2, -2, 8, 2, -5, 1, 0, 4, 2, 3, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> maze = {"XXXXXXXX...X..."};
    int startRow = 0;
    int startCol = 10;
    vector<int> moveRow = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> moveCol = {-1, 4, 6, -1, 2, 1, 5, 0, 3, 0, 4, 4, 6, 2, 2, 1, -1, 4, 0, 2, 4, 6, 3, 4, 5, 6, 4, -2, 2, 4, -1, 2, 5, 3, 4, 4, -2, 4, 0, 4, 4, 2, 0, 1, 5, 4, -1, 0, 1, 5};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> maze = {"X.X.XX.", "XXX.XXX", "XXXX.XX", "XX...X.", "X..X.XX", "X..XX..", "XX.X..X", "X.XXXXX", "XX..X.X", "XXXX..X", ".X..X.X", "..X.XXX", ".X..XX.", "..XXX..", ".X....X", "X.XX...", "...X.X.", ".X..X..", ".XXXXX.", "..XX.X.", ".X.X..X", "XX..X..", "XXXX.XX", ".XXXX.X", "X.X..XX", "XXXX..X", "..XX.XX", "X.X...X", "..X.XXX", "XXXXXXX", "......X", "..XXXXX", ".....X.", "..XX...", "X.XXXX.", "X.XXX.X", "X..X.X.", "X.X...X", "XXXX..X"};
    int startRow = 10;
    int startCol = 2;
    vector<int> moveRow = {20, 18, -24, 33, 7, 17, 3, -6, 3, 14, 0, 2, 3, 36, 23, 18, 26, -2, 7, 5, 20, 34, 22, 7, 24, 28, 21, 18, 26, 32, 34, 32, 6, 16, 24, 6, 3, 36, 4, 11, 6, 26, 9, 20, 1, 0, 28, 25, 12, 19};
    vector<int> moveCol = {3, -1, 3, -1, -6, -1, -1, -4, 0, 1, 0, 0, 0, 3, -2, -4, 2, -1, 4, 4, -2, -1, 2, -2, 5, 0, 3, 4, 2, 0, 4, 0, 2, 3, 2, 5, 3, 2, 4, 0, 4, 5, 4, -2, 0, 0, -1, -1, 0, 5};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> maze = {"XX.XX..", "...X.XX", ".XX.X..", ".XXXX.X", ".XXX..X", ".XXX..X", ".X..XXX", "..XXX.X", ".XX...."};
    int startRow = 0;
    int startCol = 2;
    vector<int> moveRow = {1, 3, 2, 6, 1, 1, 5, 1, 6, 1, 6, 3, 7, 6, 4, 0, 5, 7, 0, 3, 8, 1, 0, 0, 4, 6, 1, 6, 4, 2, 6, 6, 4, 6, 6, 6, 0, 7, 7, 7, 0, 8, 7, 3, 0, 0, 0, 5, 6, 5};
    vector<int> moveCol = {-2, 3, 4, -6, 0, -3, 3, 2, 6, 2, 0, 2, 3, 5, -2, -1, 1, 2, -1, 5, 4, 0, 0, 4, 1, 3, 5, 6, 2, 4, 6, 1, 2, 0, 0, 6, 1, 4, 5, 4, 3, 1, 4, 6, 2, 2, 6, 1, 0, 6};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> maze = {"XXXX...XXX.X..XXXX...XXXXX...XXXX..X..", ".X.X.X.XXXX..X.X..XXX.X.X.XXXX..XXXX..", "XXXXX..XXX...X.XXXX.XXXXX..XXXXXXXXXXX", "X.XXX..XXXX..X....X.XX.XXXX.X.X..X.X.X", "XXXXXX.XX..X.XX.....X..X.....XX.X....X", ".XX.X.XX.XXX.X....X.XXX..X..XXXXXX..X.", "XXXX...X.XX.XXXXX.X...XXXX.X.X...X.X..", ".X......X..X..XXX........X..XX.....X..", "XXXX..X..X..XX.X.XX.XXX......XX.XX....", "X.XXXXX.X.X.XXX.XXXXX.XX.XXX.XXXXXXX..", ".XXX..XXXXX..X.XXXXXX...XX.XXX.X...XXX", "..X..X...XX.XX.XXX.X..XXX.XX....X.XXX.", "X.XX.X.XXX.XXX...XX.X...XX...XXX.X...X", ".XXX.XXXXXXXX..X.X.X....X.X..XX.......", ".X.X..X..X.X...X.X..XX.X.XX..X...XX.X.", "X...X..X.XX..XX..XXX.X....XX.X.XX.X..X", ".X.XX..X.X.X.X..X..XX...X.XXXXX...X.XX", "X..XXX.XX..X.XX.X.X..X.XX.XX...XXXXXXX", "X.XX..XXX....XX..X.XX...XXXX.X..X..X.X", "X..XX.....XXX.X.XXX.XX...X.X.X....XXX.", ".XXX..X...XXXX.XXXXXX..XXXX...X.XXXX..", ".XX.XXX..XXX.X.XXXXX..X.XX.XX.....X..X", "XX.....X.....XX.X.XX....XXX.X.X..XXXX."};
    int startRow = 6;
    int startCol = 26;
    vector<int> moveRow = {1, 5, 5, -4, 5, -8, 0, 17, -5, 16, 14, 7, 3, 13, 0, 10, 5, 15, 12, 9, 10, 12, 10, 9, 7, 10, -1, 10, 12, 13, 4, 5, 9, 7, 5, 5, 18, 21, 5, 2, 18, 14, 14, 6, 0, 8, 10, 9, 2, 10};
    vector<int> moveCol = {5, -18, 6, 17, 6, 1, 0, 27, 1, 8, 4, 12, 16, -4, 5, 11, 19, 10, -17, 7, 7, -2, 19, -7, -19, 19, 15, 11, -23, -20, 3, 15, 20, 6, 12, 14, 4, -2, 8, 8, 12, 9, 1, 15, -2, 14, 8, 13, 23, -5};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> maze = {"XX....XXXX....XX..X...", "X..XX...XXXX.XXXXX.X.X", "....X...X.XX..XXX.X...", "XX.XX.X...XXXX..X.XXX.", ".X.XX.XX.X.XXX...XXX..", "X.XXXXX.X.X.XX..XX.XXX", "XXXX..X..X.X.XXXXXX.X.", ".XXXX......X..X...XX..", ".XX.X.X...X.XX....XXX.", "XXXXX.......X.XXX...X.", "..XX.XXX.XXXXXXXX...XX", ".XX.XX.X.X...XXXXXXXX.", "..XX..XX.X.XXXXXXXX.XX", "..X..XX.XXX.X.XX..XXX."};
    int startRow = 3;
    int startCol = 21;
    vector<int> moveRow = {0, 0, -1, 12, -2, 11, 7, -4, 4, 10, 9, -1, 10, 4, 11, 13, 2, 5, 2, 1, 4, 7, 1, 6, 9, 5, 13, 2, 3, 11, 12, 10, 2};
    vector<int> moveCol = {-16, 4, -4, 16, -7, -2, -6, 5, -6, -3, -10, -7, -16, 11, 10, -16, -18, 2, 10, 2, 0, 13, 8, 11, 7, 16, 11, 7, 0, 4, 20, 19, 9};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> maze = {".XXX..X.X..XX..X....X...X.X.XX.X..XXX..X.XXXX.XXX", "X.X..X.....XX.XXX...X..XX..XX...XX.X.X.X.X.XXX.XX", ".X.X..XX...X..XXX....XX.XX.X.......XX..XXXXX.XXXX", "X..XX.XXX.X.XX.X...X.X.XX..XXX..XXXXX.X.....XXXXX", "XXX..X...X.XX.X...XXX.XXXXXX.X..XX.XX.XXXXX.XX.X.", "...X..XXXXXXX.X.XXX.....XX.X....XXXX.X.X.X..XXX.X", "X.X.X.XXX.XX.XXXX...X..XXXXXX......XXXX..XX...XXX", "XXX...X.X.XXX..XXX.X..X..X...X.XXXX..X.XXXXX....X", "XXXXX.X.X.X.X.XX.XX.X........X........XXXXXX..X..", "X.XX..XX.X.X.X.....XXX...XX..XXX.X..XXXXXXXX.XX.X", "XX..XX.X..X.XXXXXXX..XX.XX.XX.....X...XXX.X...X..", ".XXXXXXXXX.....X...X.X.XX....X....X......XXXXX.XX", "X.X.X.XX..XXXXXX.XXXX......XX......X..X...X..XX.X", "XX..X..XXX.X.X..X..X.X....X...X.XXX....XX.XX.X..X", "..XXXXX...XX....X...X..XXX...X..XXXX........XX...", "XX...XX..X.X.X.XX...X.XXX.X...XXXX.X....X..X.XXXX", ".XXX.X.XXX.XX...XX..X..XX...XXXX.XX..XXXXX..XX.X.", "XX.XXX....XXXX..XX.XXX..XXX.X.XXX.XXX..X.X.XX.XXX", "X...X.X.X..X..XX.X.XXX.X..X....XXXXXXX....XXX.XXX", "X..XX..XX.X..XXXX.XX.X....X.X.XX..XX..X..X..XX.XX", ".X.XX.XXX.X..X.X.X........XX..X..XX...X..XXX..X..", "X..XXXX..X.X..XX..X.X.X..XXX....X.XX.X...X.X.X...", "X.XX.X...XX....XXXX.XXXX.X.XX......X.X..XX..X.XXX", "X.XXX...X..X..XXXXXX.XX..XXXX.X.XXXXX...X..X..X..", "XX..X...X.XXX.....X.XX.XXXX.X...X.XXXXX.X...XX.XX", "X...X.X...XX..XX.X.XXX.XX.X..XX.....XXXX...X..X.X", "X.X..X.XXXX.X..X.X....X..X.XXXX..X..X.XX.XX...XXX", ".X.XXX.X.XXX..X.XXX..XXX.XX.X...XX..X...XX.XXXXXX", "XX..X..X..X..X...XX..XX.XX.XX..XXXXX..XX.X...XXXX", "XX.......X.X.X..X..X..XX...X.X.X.XX...XX.XX..X...", "X.X...X.XXX.X.X.XXX.XXXXXXXX..X.X......XXXXXXXXX.", "XXX...XXXX..X.XXXX...XX..XXX.X.....XX..X.X.X.....", "XXXX.XX.X......X...XXXX..X....X.....X.XX..X...X.X", "X.X.X.X.XX..X.X..XXX...XXX..XXX.XX.XXXXXXX.XX....", "XXXX..XXXX..X.XXXX.X.X..X.XXXXXXX.XXX.XXX.X..X.XX", "XX.....X....XXXXX.X...X.XXXX...X..X..XX...X..X.X.", "XX....XXX.X.X.XXXXX.X.XXXXXXX.XX.XX..XX.XXXXX....", ".X..X...X...X..XX..X.X...XXXX.X.XX.X.X...X..X....", ".XXXX.X.XXX...XX.X.XX....XXX.X..X.X...XX.X.X..XXX", ".X.......XX..X.X...XXX...X.XX..X...X.X...X.X.X.XX", ".X.X..X.XX.....XX..X..X..X..XX.XX.XX...XX...XXXX."};
    int startRow = 17;
    int startCol = 40;
    vector<int> moveRow = {16, -33, -2, -7, -3, 34, -6, 27, 26, 1, 5, 12, 5, 5, 14, 39, 6, 15, 39, 22, 10, 14, 22, 20, 19, 30, 40, 39, 37, 8, 21, 16, 19, 5, 8, 29, 2, 28, 17, 37, 12, 11, 26, 24, 35, 18, 18, 10, 20, 30};
    vector<int> moveCol = {8, -15, -10, 10, -18, -29, -18, -7, 0, -33, -16, 17, -21, 19, -22, -4, 27, -3, -28, 8, 12, 3, 6, -12, 13, 1, -14, 29, 6, 20, -8, 20, 12, 8, -12, 2, -15, -3, 25, -13, 5, 20, 21, -5, 19, 23, -2, 17, 25, 27};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> maze = {"...X.X.X..X.X.XX...XX.XX...XXX.XXXX.XX.X..XX", "XX.XXXX..X.XXXXXXX.XXX.XXX.XXXXXXXXXXXX..XX.", "X..XXXXXX.XXX.XXXX.X..XXXXXX...X..XXXXXX..XX", ".XXX..XXX.XXX.X..XXX..X.X.....X..XXXX.XXXXXX", ".XXXXX..X..X....XX.X.XXX...XXXX..X.XX.XXX.XX", "XXXX.X.XX....X.X..X..X.X...XXXXX.X.XX....XX.", ".......XXXX.X..X.XXXX.XXX.XX.X..X...XXXX.XXX", "XXXXXXXX..X.....XXX...XXX.XXX..XXXXX.X..X...", ".XX.X..XXXX.X.X.X.........XXX.X.XXXX.X..X.X.", "..X.X.XXX.X.XX..XX.X..XXX...XXX.XXXXXX...XXX", "..X..XXX.XXXXX.X.XX..XX...XX..X...XX.XX.X.X.", "XXX.XX.XX...X.XX.X.X..X.XX.XX.X.XX.X.XX...X.", "...X.XX..XX..X..XXXXX..XXXXX.XXX...X.X.XXX.X", "..XX..X.X.X..X.X.X.XXXXX..........X.XX.X..XX", "X.X.X..XXXXXX.X..X.X..X..XXXXXX.XXX.X.XX.XX.", "X..XXXX.X.X.XX.X.X.X.XXX...X.X......XXXX.XX.", ".XXX...XX...XX.XXX..X..XXX.X.X....X.........", "..XXXXXX.X..X.X..X....XX....X..X...XXX.XXXX.", ".XX.XXXXX.X..X.X.X..X...X..XX...X...X.XXX..X", "...X...XXX.XX.XXX..XXX...XX..X...X.XX..X..X.", "X..XXXX.X..XX.XXXXX.XXX.XX.X...X.......X.XXX", "XX..X..XXXXX.X.XXXXX..X.X..XX...X.X...X.XX.X", "X.X..XXXX..X.XX....X.X.X.X.X.........XXXX.X.", ".XX...X.XXX.X.....X.....XX.....X.XXXX.X...XX", "XX..X..X..X..XXX.X...X...XX.XXX...XXX.X.X.X.", "....XX..XXXXXXX.X.XX.X.X.XX.XX.XXX....X.XX..", ".X.XX.X....X.X.....XXX.....X.XXXXXX.X.XX..XX", "X.X.XX....XXX.X.....XX..X.X.XXXXXX.XXX...XXX", "..X.X.XXX.X.X.XXXX.XX..XXXX.X..X.XX.X..XXXXX", "XX...XX.X.XX.XXXXXXXXXXX.X.XX.XXX.XX........", ".X..X.X..X.X.X..XXXXX.XX....X.XX..X..XX....X", ".XX......X.......XXX.XX.XXX.X...XX.XX.X.XXX.", "X.X..X.XXX.XXX......XX...XX.XX...XX.XX..XXX.", "XX.XX..XX..XXXXXX....XXX....X...X.XXX.X.XX..", "XXXX.XX...XXXX...X.X.....XX.XXX....XXX.XX...", "XXX...X..XXXX...X.XX...X.XXXXXX.X....XX.X...", "..XXXXXX..X....X..XX.XX..X...XXX.X.....X..XX", "..X.X.X.XXX..XXX.XX..XX..X.X.X.X.X.X.XXXX.X.", "...X.XX.....X.XXX.X.XXX.XX.X..X..XXXX.XXX...", "X...X.X.X....XX.XXX.X..X..XXX.XX..X.XXXXXX.X", "XX.X..XXXX...XX..X.XX.X.XX.....X.XX...XXXXX.", "X....XXXXX.X..X..X.XXXX..X..X.X...X.X..XXX..", ".XXX.X.X.X.X.X.X.XX...X....XXXX....X..X..X.X", ".X..XXX...X.....X.XX.X....XX.XX.XXXXX.XXXXX."};
    int startRow = 37;
    int startCol = 16;
    vector<int> moveRow = {5, -9, -13, -5, -16, 19, 8, 13, 2, 36, 20, 20, 31, 43, 25, 14, 29, 27, 19, 14, 27, 26, 21, 38, 14, 30, 24, 6, 37, 12, 25, 11, 38, 4, 23, 34, 31, 32, 20, 13, 28, 39, 11, 34, 28, 13, 38, 20, 24, 23};
    vector<int> moveCol = {7, 20, -14, -13, -28, -24, 3, 38, 19, 13, -17, -10, -5, -28, -22, -15, 7, 20, -10, 14, -18, -15, -1, 10, -4, 29, -2, 11, -5, -7, 20, -39, 17, 0, -25, -28, 31, -20, -9, 7, -24, 8, 19, -29, 21, 6, 3, -29, 1, -12};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> maze = {"X.X..X..X.X.X.X.XXX....XXXXX..X..XXX.....XXXX.X.X", "XX...X.X.XXX..XXXXX.XX..XX...XXX.XXXX....X.X.X...", "X.X.XX.XXXXXX.XX.X.....X.XX..XX.X.XXX.X..XXXXXX.X", "XXXX...X.XX..XX.XXX...X...XXX..X..X...XX.X..XXXXX", "XXXX..XX....XXX..XX.X.XX......X.X.XX..X...XXX...X", "X.X...XXXXXX.X..XX.X.X..X....XXX.X..X.XXX.X......"};
    int startRow = 2;
    int startCol = 24;
    vector<int> moveRow = {1, 2, 3, -3, 0, 0, -4, 2, 5, 4, 3, 5, 2, 0, 4, 4, 1, 1, 5, 3, 5, 3, 2, 1, 0, 1, 1, 2, 2, 5, 1, 3, 5, 0, 2, 0, 4, 5, 3, 2, 1, 5, 3, 0, 2, 1, 3, 5, 2, 0};
    vector<int> moveCol = {-20, 9, 3, 7, -26, 25, -10, 5, 2, -40, 6, -12, 2, 40, 24, 36, 3, 0, 25, 28, 41, 7, 7, 38, 3, 21, 21, 25, 38, 15, 40, 25, 19, 19, 5, 20, 9, 28, 30, 36, 12, 16, 9, 43, 18, 1, 1, 9, 12, 28};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> maze = {"....X..X.X.XXXX.XX....XX.XX..X", "XX.X....XX..X.X..XX.XX.XXXX.XX", ".X.X...XX..X.X..XX....X.X.XX..", "XX...XX....XXX..X.X.X..X..XX..", "..X...XXX..XXXXXX.X.X...X..XX.", "..XX.X.XXX....X.XXXXXX.X..XXX.", "XXX.X..XX..X.XXX.X.X...X.XX.X.", ".X.XXXX......XX.XXX..X..XX....", "XXXXX...X....XXX.XX.X.XXXXX.XX", "XX.XXXXXXX.XXXXX.X.XX..XX.....", ".X.XXXX..X.X.XXX.XX....X......", "XX.XXXXX.XXXX...X.XX..XX..XXXX", "XX.XXXXX.....X.X.XXX..X..XX.XX", "...XXXX.X...X..XX.X.XX.X..XX..", ".XX.X.XXXX.XX.X.XXX.XX.......X", "..X.XX......X...XX......XXX.XX", ".XXX.X.X..XXXXX.X.X...XXX.XX.X", "XXXXX.X.XXX..XXXXXX.XXX.X...X.", "..XXXXXXXXX..XX.X....X.X....X.", "X..X..X..XXX...X..X..XXXX.XXXX"};
    int startRow = 10;
    int startCol = 2;
    vector<int> moveRow = {1, -9, 14, -1, -8, -5, 0, -6, 17, -5, 19, -4, 16, 1, 2, 17, 0, 5, 8, 8, 13, 1, 7, 11, 11, 16, 4};
    vector<int> moveCol = {22, 0, 21, 3, -14, -10, -25, -7, -13, -5, -19, 1, 13, -4, 12, 5, 16, -12, 8, 8, -8, -6, -1, 11, 18, -4, 19};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> maze = {"XXXXXX.X...XXXX..XXXX...XXX..XX..X.XX..XX.XX", "...XXX..XXXXXXX.XXX.XX.XX..X.X.....X.X.XXXX.", "X.XXXXX.X.X.X.XX.XXXX.X.XX..X.XXX.X..XX.XX.X", "X...X.X....XXX.X..X....X..XX...XXXXX..X.....", ".X.XXXX..XXX..XX.....X.....X......XX..XX...X", "X..X.X.XXXXX...XXX..X.X.XXXXX.XX.XXX...XXX.X", "...XX.XX.X...X..XXX.X....X..XX.X......XX..X.", "......X.X.XXX..X.......X.XXX..X..XX..X..XXX.", "XX.X..XX.XX....XX..X..X.X....X...XXX....X...", "....XXX...XXX.X..XXX...XXXX..XXX..XXX.XXXX..", "...XX.X.X.XXX......X..XXX.X.X..XX...X.XXXXX.", ".X.X...XX......X...XXXX.X..X........X.XXXXX.", "X...XXXXX.XX..XXXXXX...XX.X.XXXXXX.X.XX..XXX", "X...X...X.X...X.XXXX..X...X.....XX..XX.XXX..", "X.X.XXX..XXXX.XX..X.XX.X....X..X..XXX.X..X..", "XXXX.XXX.XXXX.X.XXX...XX.XXXX....X.XXXXXX.XX", "XX..XXXXX.X.XX.XXXXXX...X.X.X.X.XX.X....X...", "....XX.XX.XX.XXX.XX...XX.X..XXXX..XX..X..X..", "X.X..XX.X.X....X..X.XX.X.X.XXX....X.X.X....X", "..X...X.XXX.XX...XX.XXX...X.XX..XXX..X.X.X..", "...X..XX..X.XXX.X.X.XXX.X.X.X..XXX...XX..XX.", "...XX.XX.XX.X......XX.....XX.XX.XXX.X.XX....", "..XX.X...XX....X.XXX.XXX.XXXX.X.XXX.XXXXX.XX", ".X..X.X.XX...X..XX..XX..XX..XX...XX.XXX.XXX.", "XX..X.XXXXXXX.....X.....XXX.XX.X.X.XX.XX.XXX", "..XXX.X..X.XXX.X.X..XX.X.X.....XXXX.X.....XX", "XX...XXX..XXXXX...X...X.X.XX..XXX.X.X...X...", "XXXX..XX.X....XX.....XXXX.X..X...X..X.XXX.XX", ".XX.X.X....XXX.X.XX..X.XXX..X.XXXXX..X..X..."};
    int startRow = 25;
    int startCol = 14;
    vector<int> moveRow = {1, -16, -2, 9, -3, 18, 5, 19, 7, 10, 8, 24, 25, 28, 23, 21, 9, 21, 21, 12, 12, 17, 27, 14, 5, 15, 5, 7, 25, 13, 20, 24, 8, 14, 23, 8, 2, 13, 22, 7, 2, 20, 10, 14, 13, 12, 7, 18, 7, 26};
    vector<int> moveCol = {1, 18, -1, -12, 7, -12, -5, 15, -32, -27, 5, -16, -36, 32, -7, -2, -1, -35, 19, 36, 6, -21, 13, 30, 0, 30, -2, 2, -2, -5, 30, 6, 1, 32, 33, 2, 10, 23, 23, 33, 27, 12, 1, 36, 29, 3, 1, 2, 38, 3};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> maze = {"XXXX..XX.X....XX..X.XX...", "X....XX...X....X.XXXX.XXX", ".X...X..XXXX....XX..X.XX.", "XXX.X..XX.X......X.X.XXXX", "XX..X.XXXXXXX.X.XXX.X.X.X", "XXX...X.X.XXXXXXX...XX...", ".XX...XXX.XXXX.XXX...X..X", "XX..X.X.XX..X.X..XX.X.XX.", "...XX.X...XX.XXX..X..X.XX", "..X.X..XXXX.X.....XX.X...", ".X....XXXXX..XX...X.X...X", "X...XX..X....X...X.X.X...", "XX.X.XXXXX.XX..XXX..XXX..", ".XXX.....X.X.XX.X..XX.X..", "XXX..XXXXX.X.X.X.XXX.XX.X", ".X.X....XXXX..XX.XX..XXX.", ".X.XX..X.X.X.XXXXX..XX.X.", "XX.XX.XX.....XX....XXX..X", ".XX.X...X..XXX...XX.XXXXX", "...X.XX.X.X.....X.X.XXX..", "X.XXXX..XX....X..XXX.X...", "..XXXX..XXX.XXX.X.X....XX", ".X.X.XX....XXXXXXX.XX.X..", "XXXXXXX.XX.XXXX.XXX.XX...", "XX...X.X.XX..XXXXX....XX.", ".X....X.X.X.X....X..X...X", ".XXX.XX.XX.......XX..X.XX", "X.X.XX.XX....XX...XXX.X.X", ".X.X.X.XX.....X.XXX...XXX", "XX.X.XXX.X.X.X..XX..XX.XX", "...X.X..X.XX.XXX..X.X...X", ".XX.XXXX....X...X...XXX..", "..X..X.XXXXX.X.X.XX..X.XX", "X.X.XX.....X.X.XX.XX.X..X", "X.XXXX..XX....XX.X..X...X", ".X.XX......XXXX...X..X...", "..X....X.X.XX..XXX.XX....", "X..X..X..X...XXX.....X.X.", "X....X..XX..XXX...X....X.", ".XX..X.X..XX.XXXXX.X....X", "XXXXXXX...X.X.XX....X.XXX"};
    int startRow = 32;
    int startCol = 4;
    vector<int> moveRow = {-16, -13, -19, 0, 6, 29, 21, 25, 3, 25, 26, -1, 27, 38, 10, 22, 6, 14, 37, 18, 10, 28, 8, 15, 28, 29, 15, 20, 2, 15, 40, 31, 29, 14, 2, 40, 40, 4, 18, 38, 2, 12, 32, 20, 3, 18, 35, 40, 15, 6};
    vector<int> moveCol = {-4, 19, 8, -6, 3, -12, -8, 10, 5, 12, 4, 3, 3, 8, 11, -3, 9, 7, 4, 1, 18, -4, 2, -12, 7, 19, 8, -1, -8, 19, 12, 21, 1, 18, -7, 1, 0, 12, 15, 19, 6, 8, 14, 6, 3, 9, 10, 9, 10, 7};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> maze = {"XX.XXX.XXX..X.XX.X....X.X.X.XX", "XX..XXX.XXXXXXX.X......X.XXX.X", "..XXXXXX.X.X.XXXXXX.X.XX.X.X..", "X....X.X.XXX..X.X.X.X..X.XX.X.", ".X...X..X.XX..X.XX.X...XX.XXXX", "XX....X.XXXXX.X.X...X.XX.X.X..", "..XX..XX.XX.X.....XXX..X.XX..X", ".XXXXXXX....X.XX....X......XX.", ".X..XXXXXXXX.X...XX.XXX.X.....", "X..XXXXX.XX..XX..X...X..XXXXX.", "X.X.X.X.XX...XX.X.X....X..XX.X", "..X...XX.XX.X.XX....XXX.X.X.XX"};
    int startRow = 10;
    int startCol = 25;
    vector<int> moveRow = {-3, 3, -10, -6, 6, 1, 2, 7, -1, 7, 10, 6, 5, 10, 6, 11, 7, 7, 4, 3, 2, 5, 8, 9, 8, 3, 3, 11, 11, 7, 6, 5, 5, 8, 7, 6, 6, 4, 4, 9, 11, 2, 8, 9, 2, 5, 1, 6, 3, 2};
    vector<int> moveCol = {-16, 3, -2, 9, -12, 5, -5, 18, -1, 23, -17, 1, -16, 1, -9, -22, -4, 9, 1, -8, 0, 10, -2, 4, -11, -1, -9, -4, 4, -4, 8, 23, 1, 16, 15, -4, -1, 12, -12, -8, 2, 5, 4, 8, 9, 4, 26, -1, 13, 14};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> maze = {"XXXXX.X..XX...X.....X.X.", "XXXX..XX....XXX..XXXXXX.", ".X.X.X..XXXXXX..XXX....X", ".....XX.XX..X.XXX..X.XX.", "...XX.XXXXX..XXXXX...X..", "..X..XX...XX.X......X...", ".XXX.XX..XX....XXXX.....", ".XXXXX..XXXXXXXX...XX..X", "XXX..X.X..X.........XXX.", "X.XXXXX.XXXXXX...X.X..X.", "..X.X.XXXXXX.XX.X.X...XX", "X.XX..XX.X.X.XX.XX..XXX.", "XXXX.XX.X.XXX......XXX..", "XX....X..XXXX..XXXXXX.X.", "X...X..X....XX...XX..XXX", "XXX.X....X....XXX..X.XX.", ".....X.XX...X.X....X....", "XXXXXXX.....XXX...XX.XXX", "X.....XXX.XX...XX..XXX..", "....XXXX.XX..X..X.X.X...", "XXX...XXX.X.X..X.XX...X.", "XX....X.X.XXXXX....X.X..", "XXXXX.XXX.....X..XXXX.XX", "...XX...XXX.X.....XXXX.X"};
    int startRow = 9;
    int startCol = 14;
    vector<int> moveRow = {-6, -6, -3, 13, 18, 12, 0, 17, 18, 13, 20, 15, 20, 7, 5, 5, 11, 17, 23, 0, 9, 5, 15, 6, 15, 8, 23, 9, 12, 22, 9, 3, 18, 17, 0, 22, 14, 15, 8, 16, 9, 9, 2, 0, 21, 18, 6, 5, 21, 9};
    vector<int> moveCol = {-4, 9, 3, -11, 13, 15, 1, 11, -3, -10, -10, 2, -17, 0, -15, -18, -2, 2, -18, -1, 16, 0, 4, 3, -2, -8, 14, -1, 6, 2, 4, -5, -8, 8, 10, 12, 3, -2, 13, -1, 0, 1, 20, 10, -3, 9, 5, 21, 16, 6};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> maze = {"XXXXXXXXXXX", "..XX.XX.XXX", "XXXXXX.X.X.", "X..XX.XXXXX", "..XX......X", "XXX..X..X..", "..X.XX..X..", "XXX.....XXX", "XXXXXX....X", ".X.XXX..X.X", "X..XX..X...", ".X..X....XX", ".X.X.XX..XX", ".XX.XXX..X.", "X..XXX.XXX.", ".XXX..XX.X.", ".X.X.XX..X.", "X.XX.XX.X.X", "X.XXXX.XX.X"};
    int startRow = 11;
    int startCol = 7;
    vector<int> moveRow = {0, -8, 3, 1, 7, 2, -2, 3, 14, 1, 6, 7, 3, 6, 7, 14, 9, 10, 1, 10, 4, 3, 1, 4, 8, 16, 6, 3, 2, 12, 14, 3, 12, 1, 6, 6, 2, 1, 7, 14, 3, 15, 3, 7, 1, 12, 8, 7, 4, 9};
    vector<int> moveCol = {-2, -2, -1, 2, 1, 5, -1, -1, -5, 2, 4, -5, 9, 1, -1, -1, 3, 0, -6, -2, 6, -1, -1, -4, 3, -5, 4, -2, 7, -5, -3, 5, 1, 3, 1, 0, 4, -3, 3, -5, -3, -1, -9, -3, 9, 3, -7, 1, 4, 2};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
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
    vector<string> maze = {"XXX..XX........XX.X.....X...", "XX...X...X...XXXX..XX.X.X.XX", ".XXX....X....XX.X.X...XXXX.X", ".X.XXXXX.XX.X..X.XXX.XX.XX..", "..XXX.X.X.X....XXXX..X.X.XXX", "X...XX..XX.XX..X.XX...X..X..", "X.X...X..XXXXX.XXXXX.X.X...X", "XXX..XX......XX.XXX.X.X.X.X.", "XXX.X.XX.XXX..X..XX.....XX..", "....XX..XXX...X.XX..X..X.X..", "..X..X...XXXX.X....XXX.XX.XX", "XX.X.X.......XX...XXX.....X.", "XXXX..X.X..XXX..X.X.XXX.....", "X..X.X.X..XXX....X.XX.....X.", "....X.XXXX..X.X.X..XX.X...X.", "..X.XXXX.....X.X.XX.XXXX.XXX", "..X..XX.XXXX.X..X.X.X.X.X..X", "X..X..XXXXXXX....XXX...XX...", ".XX..XXX.XX.......X.X.XX...X"};
    int startRow = 11;
    int startCol = 8;
    vector<int> moveRow = {3, -6, -10, 0, -8, 2, 16, 16, 15, 15, 0, 9, 17, 3, 10, 14, 0, 0, 0, 1, 17, 17, 13, 17, 9, 12, 4, 18, 16, 18, 0, 4, 10, 18, 6, 11, 13, 6, 4, 10, 7, 8, 10, 3, 18, 10, 7, 14, 14, 18};
    vector<int> moveCol = {-7, -1, 2, 4, -8, 9, -4, 6, 18, 1, 18, -2, 16, 5, 7, 5, 5, 23, 8, 9, 17, -1, 24, 7, 2, 22, 9, 17, 20, 6, 10, 13, -2, 5, 11, 17, 15, -3, 1, 6, 1, 22, 4, 15, 7, 5, 1, 7, 15, 6};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> maze = {"X..X", "XXX.", "X.X.", "XX..", "X...", "XXXX", ".X..", ".X.X", "..X.", ".X.X", ".X..", "XXX.", ".X.X", ".X.X", "X.XX", "X.X.", ".XX.", ".X.."};
    int startRow = 17;
    int startCol = 0;
    vector<int> moveRow = {-11, 9, -4, 0, -2, -6, 4, 13, 12, 7, 4, 13, 7, 0, 10, 9};
    vector<int> moveCol = {2, 1, 0, 0, 0, -1, -1, 0, 0, 2, 2, 0, 1, 1, 3, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> maze = {".X....X..XXXXX", "..X..XX...XX..", "XX.XXX.XX...X.", "X.XX..X.X.X..X", "XX..X....XXXXX", "..X.XXXXXX.XX.", ".X...........X", "X...X.X.XXX.X.", "XXX.X.XX.XX...", "..XXXX..XX...X", "X.X.X.XX.XXXXX", "..XX..XX.XXXXX", ".XXXXX.X.X...X", "X.....X.X.X.XX", "..XX.......X.X", "...X..XXXXXX.X", "X..X.XXX.X.XX.", ".X.X.XXXXXXXX.", "XX.X....X.X...", "...XX.X.X...X.", "X.XXX...XXX...", ".XXX.X.XXX.XXX", "...XXXXXX...XX", "...X.XX....X.."};
    int startRow = 1;
    int startCol = 4;
    vector<int> moveRow = {18, 8, -2, 1, -13, 10, 15, -9, 12, 0, 16, 9, 5, 9, 8, 9, 11, 10, 8, 19, 15, 21, 17, 18, 0, 22, 15, 16, 0, 6, 22, 4, 23, 21, 5, 1, 20, 3, 10, 7, 0, 14, 9, 15, 5, 5, 4, 4, 0, 13};
    vector<int> moveCol = {-2, 7, 2, -8, 5, 6, -3, -8, -10, -7, -9, -1, 9, -9, 10, 1, -1, -3, 6, 6, 5, -3, 9, 4, -9, -11, 0, -1, 0, 3, 10, -3, -3, 6, 1, 6, 1, 8, 10, 11, 0, 4, 0, 0, 2, 0, 11, 10, -2, 12};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> maze = {"XXX.XXX.XX", "X...XX.XXX", "X..X.X...X", "..XX..X.X.", "XXXXXXXXXX", "XXXXX..X..", ".XX..XXXX.", "XXX.XX.XX.", "XX...XXX.X", "..X....X.X", ".XX..XXXX.", "XX...XX.XX", ".XX.XX..XX", "XX.....XXX", "..X...X...", "XXXXXXXX..", "X.X.X.X.X.", "..X.X..XXX", ".XX..XX..X", "XXXX.X..XX", "XX.XX.XX..", "XXXX.XXXXX", ".X....X.X.", "X..X..X.XX", "XX....XXX.", "XXX......X", "XX....X.XX", "X.XX....X.", ".X.X.XX...", "XX.X....XX", ".X..X..X.X", "X.X....X..", "..XX..X...", "X.XXX...XX", ".X...XX..X", "....X..XXX", "XXX.XXX..."};
    int startRow = 7;
    int startCol = 3;
    vector<int> moveRow = {7, 5, 7, 7, 17, -11, 5, 13, 8, 0, 9, 29, 20, 20, 1, 18, 1, 5, 6, 27, 5, 33, 3, 8, 3, 26, 12, 0, 4, 0, -1, 30, 6, 33, 23, 18, 28, 5, 25, 10, 34, 23, 12, 30, 2, 2, 23, 4, 36, 21};
    vector<int> moveCol = {2, 0, 4, 0, -1, 1, -2, -4, -8, -7, 3, -5, 4, 3, -6, -1, -4, -2, -3, 2, 3, -2, 1, 4, -1, -4, 2, 4, 0, -6, -2, -6, 5, 4, 1, -5, -5, -3, 2, 6, 2, 6, 0, 5, 5, 5, 3, -1, 0, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
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
    vector<string> maze = {".X", "XX", ".X", ".X", "..", "..", "X.", "X.", "X.", ".X", ".X", "..", "..", "XX", ".."};
    int startRow = 8;
    int startCol = 1;
    vector<int> moveRow = {3, 0, -5, 6, 0, 0, 6, 4, 3, 6, 1, 1, 8, 2, 6, 5, 1, 5, 9, 5, 7, 10, 9, 0, 4, 10, 0, 2, 8, 2, 3, 8, 8, -2, 10, 0, 5, 2, 10, 10, 10, 9, 1, 2, 7, 3, 10, 6, 6, -2};
    vector<int> moveCol = {-1, 0, 1, 0, 0, 0, -1, 0, -1, -1, 1, 0, -1, 1, -1, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, -1, 0, 1, -1, 0, 1, -1, 0, 1, -1, -1, 0, 1, 0, 1, -1, 0, 0, -1, -1, 1, 0, -1, 0, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> maze = {"X.X.X....XXXXXX.X..XXXXX..XX.XXXXXXX.", "XX.XXX.XXX.X..XXXX.XXX.XX.X.X..X.XX.X", "XX..X.XX..XXX..XXX...X.X.XX.X.XX.X.X.", "..XX.XX....XXX.XX.X.XXXXX.XXXX.XX....", "XXXX.XXX.XXX..XX.X...X.X.X.X...X...XX", ".XXXXXXX...X...XXX.XXXXX..X..X.XXXX.X", ".XXX...XXX.X.X.XX.XXX..X......XX...X.", ".XXX.X.X.XX.XXX...X......X....X..XX.X", "...X....X.X..X..XX.X.XXXXX...XX.XXXXX", "..XX.X.X....XXX.X..XX..XX..X..X..XXX.", "XXXXX..XX...X..XXX....XX.XX....XXXXXX", ".X.X.X.XX..X.X..XXXXX.XXX.X.XXX.X..XX", "..X.XX...X.XXXXXXXX.X...X...X....X...", ".........X.....X...X.X..XX.XXXXXX....", "X..X.X.X......X..X.X...X.XX.X.X.XX..X", "X.XX...XX..X.X.X.XXXX.XXX.X..X.X.X..X", "X.X....X.XX...XX.....XX..XX.X.X.XXXX.", "...XXX..XX.X..X.....XXXXX.XXXX.X..X.X", "XXX..XX.X...XX...X..XXX..XXXX...X..X.", "XXXXX..X.XX..X.XXXX.X...X..XX.XXX.XX.", "X...XX...X.XXX.X.XX..X...XXXXX..XXXXX", "...X.XXX.XX..X..XX..XXXX..X..X.X.XX.X", ".X...X.X.XX.X..XX.X.XX..XXXX.X....XX.", "..XX...X....XX.XX...X.......X.X.....X", "X.XXXX.XXX.X.X.X...XX.XX.XXX.X..XXXXX", "X....XXXX..X.XX.XX.XXX..XXXX...X.XXX.", "X...X....XX.....X..XXX..X.XXXXXX.XXXX", "XXXXXXX.X.XX.X..X.X..XX..XX...XXXXX.X", "X.XXX.XX.X.XXXX.XXX.....XX.X.XXX...X.", "...X..XXX..X.X....XX.XXXX.X.X..XXXX..", "XX.X...X..XXX.XX.X...X.X...XXXX.X...X", ".X..XXXX..XX.XX......X...X.X.X.X.XX.X", "XX..X..X.X..X.X..X.XX.XXX.X.X..XX.X..", "X..X...XX.X..X.XXX....X.XX.X.XXX....X", ".XX..XXX.........X.XX.X.X..XXX.XXX.XX", "X..XX..XX..XXXXX..X...X.XXX.X.X.XX.X.", ".XX.X.XX.....X...X.X..X.XX.XX.X.....X", "XXX..X.......XX.X.XXX....X.XX.XXXXX..", "XXXX.XX.X..XX..X.XX....XX....XX.X.XXX", ".XX...XXX.XXXX.XX.XXXX.XX...X.X.X.X..", "X..XX.XXXX.X..XXXX.X.XXXX.XXXX...X...", "XX..X...X....XX.XX....X.X...XX..XX...", "X.....XX.X...XX.XX.X.X..X...XX...X..X", "...X.X.XX....X..XX.X.XX...X....X....X", "X..XX...XXX.XXX.XX...X..X...X.X.XXXX.", "X...XX.XX.......XX.XX...XX....X.X...X", ".X.X...X..X.XXXXX.XXXX.X.X.X.X.....XX", "..X.XXX.X...X...XXX..X.XXXX.X.....X..", "X..XXX.XX..XX.X.XX......XX..XX..X.XXX", "...X.X...XX.XXXXX.XX......XXXX.XX.X.X"};
    int startRow = 26;
    int startCol = 1;
    vector<int> moveRow = {-22, 21, -35, -23, -6, 6, 21, 17, 28, 17, 16, 41, 9, 42, 38, 18, 38, 6, 23, 48, 35, 44, 35, 1, 23, 46, 17, 23, 31, 25, 36, 17, 42, 10, 39, 34, 11, 39, 26, 7, 5, 2, 6, 43, 16, 47, 10, 39, 1, 7};
    vector<int> moveCol = {31, 10, -3, 9, -9, 0, -9, 5, -12, 4, 24, -19, 0, 3, -23, 5, 32, -18, 21, -5, 9, -24, 30, -21, 5, -1, 12, 9, 24, 14, -12, -16, -17, -20, -5, 9, -20, -4, 2, -2, 11, 30, 26, -6, -13, -19, -25, 19, 4, 5};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
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
    vector<string> maze = {".XX.X.X....XXX.XXXX.X.XX..X.X.XX.X.X..X..XXXX.X...", "XX.XXX..XXXX...X....XXX..X..X..XXX.X.XX.X.....X.X.", "X.X...X.X..XX.X.XXX.XXX.X.X.XX..XXXX..X.X....X...X", ".XX..XX..XXX.X...XXX.X...X..X..XX.XXXX.X.XX...XX..", ".....XXX..XXX.......X.X.X..XXX.X.X.X.XX.X...XXXXXX", "XXX..X..X.XX.XXXXX.X.XX..XXX.X.X..XXX.XXXXXXXXXXX.", ".XXX.X..XX.....XXX....XX.X....XX......X..XXX....X.", ".XX.XXX..X..X..X.XXXXX.....XXX..XX.XX..X.XXX.XX.X.", ".XXXX.XXX.....XX.XXX.X.XX....XXX.X.X..XXXX.X.X.XXX", "...X.X..X...X.XX...X.XXX..XX.XXX.X...X..XX.X...XXX", ".X.X.XXX.X.XXX...XX...XX..XX...X.XXX..X...XXX.X...", ".XX.XX..X.XXXX.......X....X.XXXX..XXX.XX...X....XX", ".XX.XXXX.X.XXXX..XXX.XX.X....XX...XX......XX.XX.X.", ".X...XXXX..X.XXXXXX....XX.X...XX...XXX.XXXXX..XXXX", "X.XXX..X..X..XXXX.XXX.X........XXXX.X.....X..XX.X.", "XX.XXX..XXXXX..X..X.X...X.X.X..XXX...X..X.XX..XXX.", ".XXXXX.XXX.XX..XXX..X.X..X.XX..X.XXX.XXXX.X.X.XXX."};
    int startRow = 16;
    int startCol = 18;
    vector<int> moveRow = {-9, -7, 4, 7, -2, 2, 2, 5, 0, 2, 1, 0, 4, 11, 2, 12, 0, 13, 5, 9, 3, 5, 10, 9, 14, 15, 4, 0, 12, 0, 9, 8, 13, 11, 16, 6, 1, 5, 2, 2, 16, 14, 10, 14, 10, 12, 6, 16, 13, 7};
    vector<int> moveCol = {-11, 20, -4, -15, 15, -15, -34, 33, -11, -3, 24, 11, 5, 34, -23, 0, 3, -8, 5, 5, 32, -10, 29, 7, 20, 7, 40, 26, 30, 20, 13, 25, 17, 11, 22, 4, 22, 4, 4, 30, 9, 22, 6, 31, 36, 39, 43, 11, 41, 41};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> maze = {".X.X.X.X.X.X.XXX.XXXXX...XXX.XXXXXX", "XX....X..X.X...X.XXXXX.X.XXXX...X.X", "X...XX...X.X.XXX.XXXX.XX..X....X.XX", ".XX.....X...XX.XX.XXXXX...X.X..XXX.", ".X.....X...XX.XX.X.X.X...X...X.XXXX", "...X......XXXXXX..XX.X.XX.XXXXX...X", "..X.XXXX.X.XX...X.XXXX..X..X....X.X", "X......XX.....X....XXX..X..X.......", ".X....XX.XXXXX.X...XX.X..XX.X.XX...", "..XX...X..X..X.XX...XX...XX.X.XX...", "...X..X.X.XXX..XX.XXX.XXXXX.....XXX", "X...XXX.XXX.XXXX..X.X.X.X...XXXXX.X", "XXX.XX..XXXXX..X.XX.X.X..XX..XXX..X", "...X...XX..XXX.X.X....XXX...XXXXX..", ".X.XXXX.XXX.XXXX.XX..X.X....X.X..XX", "X.XXX..X.X.XXX...XXXX.XXXXXXX......", "X.XX....XX.X.XXX.XX.XXX.X..XXXX.XX.", "XXXXX.X.XXX.X.X...X......X.XXXXX..X", ".X....XXX..X.XX....X.X.X...XX.X....", "..XX.X.X.XX.X...XX..XX.XXX......XXX", "X.....XXX.XX.XX.X...XX...XXX....X.X", "X.......X...XX..X...X..X.XX.X..XX.."};
    int startRow = 10;
    int startCol = 13;
    vector<int> moveRow = {5, 5, 11, -15, -17, -4, 19, -13, 17, 8, 6, 5, -2, 2, 16, -1, 6, 8, 11, 5, 13, 19, 10, 2, 5, 10, 15, 5, 4, 20, 16, 16, 6, 8, 18, 2, 1, 13, 17, 8, 17, 0, 10, 7, 8, 0, 18, 10, 18, 15};
    vector<int> moveCol = {20, -9, -8, -27, -17, -17, 7, -3, -3, -27, -14, -2, -17, -13, 34, 0, -6, -2, -26, -12, 2, -9, 33, -7, 4, -1, 32, 1, -5, -12, -4, 6, -3, -14, 18, -16, 20, 10, 5, -4, 14, 25, 23, 22, 11, 28, 20, 11, 24, 10};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> maze = {".....", ".....", ".....", "....."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {0, 1, 0, -1, 0};
    vector<int> moveCol = {0, 0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> maze = {".."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {0};
    vector<int> moveCol = {0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> maze = {".XX.X.XX.X.XX.X.XX.XX."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {0, 1, 0, 2, 0, 0};
    vector<int> moveCol = {2, -3, 3, 4, -3, -2};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> maze = {"..X.X.X.X.X.X."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {2, 0, -2, 0};
    vector<int> moveCol = {0, 2, 0, -2};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> maze = {"...........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".........................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.....................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X.............................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X.........................X.X.X.X.X.", ".X.X.X.X...........................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X...............................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X...................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.......................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..........................................."};
    int startRow = 17;
    int startCol = 40;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 273;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "................................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X............................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X........................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X....................................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X................................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X............................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X........................X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X....................X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X................X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.XXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X............X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.XXXXXXXXXX.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X........X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X......X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.XXXXXXXX.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X..........X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.XXXXXXXXXXXX.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X..............X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.XXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X..................X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X......................X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X..........................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X..............................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X..................................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X......................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X..........................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X..............................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................."};
    int startRow = 18;
    int startCol = 24;
    vector<int> moveRow = {0, 1, 0, -1, 1, -1, -1, 1};
    vector<int> moveCol = {1, 0, -1, 0, 1, -1, 1, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 1086;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> maze = {"...............", "XXXXXXXXXXXXXX.", ".............X.", ".XXXXXXXXXXX.X.", ".X.........X.X.", ".X.XXXXXXX.X.X.", ".X.X.....X.X.X.", ".X.X.XXX.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X...X.X.X.", ".X.X.XXXXX.X.X.", ".X.X.......X.X.", ".X.XXXXXXXXX.X.", ".X...........X.", ".XXXXXXXXXXXXX.", "..............."};
    int startRow = 28;
    int startCol = 12;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 184;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> maze = {".............................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "...........................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.......................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X...................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X...............X.X.X.X.", ".X.X.X.................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.....................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.........................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXX.", "............................."};
    int startRow = 0;
    int startCol = 17;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 229;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> maze = {"..............", "XXXXXXXXXXXXX.", "............X.", ".XXXXXXXXXX.X.", ".X........X.X.", ".X.XXXXXX.X.X.", ".X.X....X.X.X.", ".X.X.XX.X.X.X.", ".X.X.X..X.X.X.", ".X.X.X..X.X.X.", ".X.X.X..X.X.X.", ".X.X.X..X.X.X.", ".X.X.XXXX.X.X.", ".X.X......X.X.", ".X.XXXXXXXX.X.", ".X..........X.", ".XXXXXXXXXXXX.", ".............."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> maze = {"...........", "XXXXXXXXXX.", ".........X.", ".XXXXXXX.X.", ".X.....X.X.", ".X.XXX.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X.X.X.X.", ".X.X...X.X.", ".X.XXXXX.X.", ".X.......X.", ".XXXXXXXXX.", "..........."};
    int startRow = 20;
    int startCol = 4;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 266;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> maze = {".......................", "XXXXXXXXXXXXXXXXXXXXXX.", ".....................X.", ".XXXXXXXXXXXXXXXXXXX.X.", ".X.................X.X.", ".X.XXXXXXXXXXXXXXX.X.X.", ".X.X.............X.X.X.", ".X.X.XXXXXXXXXXX.X.X.X.", ".X.X.X.........X.X.X.X.", ".X.X.X.XXXXXXX.X.X.X.X.", ".X.X.X.X.....X.X.X.X.X.", ".X.X.X.X.XXX.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X...X.X.X.X.X.", ".X.X.X.X.XXXXX.X.X.X.X.", ".X.X.X.X.......X.X.X.X.", ".X.X.X.XXXXXXXXX.X.X.X.", ".X.X.X...........X.X.X.", ".X.X.XXXXXXXXXXXXX.X.X.", ".X.X...............X.X.", ".X.XXXXXXXXXXXXXXXXX.X.", ".X...................X.", ".XXXXXXXXXXXXXXXXXXXXX.", "......................."};
    int startRow = 16;
    int startCol = 2;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 212;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> maze = {".............................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "...........................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.......................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X...................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X...............................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X...........................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X.......................X.X.X.X.X.X.", ".X.X.X.X.X.........................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X.............................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X.................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.....................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.........................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "............................................."};
    int startRow = 19;
    int startCol = 11;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 332;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> maze = {"................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..............................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X..........................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X......................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X..................................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X..............................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X..........................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X......................X.X.X.X.X.X.X.", ".X.X.X.X.X.X........................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X............................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X................................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X....................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X........................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X............................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "................................................"};
    int startRow = 14;
    int startCol = 26;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 684;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> maze = {".......................", "XXXXXXXXXXXXXXXXXXXXXX.", ".....................X.", ".XXXXXXXXXXXXXXXXXXX.X.", ".X.................X.X.", ".X.XXXXXXXXXXXXXXX.X.X.", ".X.X.............X.X.X.", ".X.X.XXXXXXXXXXX.X.X.X.", ".X.X.X.........X.X.X.X.", ".X.X.X.XXXXXXX.X.X.X.X.", ".X.X.X.X.....X.X.X.X.X.", ".X.X.X.X.XXX.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X...X.X.X.X.X.", ".X.X.X.X.XXXXX.X.X.X.X.", ".X.X.X.X.......X.X.X.X.", ".X.X.X.XXXXXXXXX.X.X.X.", ".X.X.X...........X.X.X.", ".X.X.XXXXXXXXXXXXX.X.X.", ".X.X...............X.X.", ".X.XXXXXXXXXXXXXXXXX.X.", ".X...................X.", ".XXXXXXXXXXXXXXXXXXXXX.", "......................."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 298;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> maze = {"...............", "XXXXXXXXXXXXXX.", ".............X.", ".XXXXXXXXXXX.X.", ".X.........X.X.", ".X.XXXXXXX.X.X.", ".X.X.....X.X.X.", ".X.X.X...X.X.X.", ".X.X.XXXXX.X.X.", ".X.X.......X.X.", ".X.XXXXXXXXX.X.", ".X...........X.", ".XXXXXXXXXXXXX.", "..............."};
    int startRow = 12;
    int startCol = 0;
    vector<int> moveRow = {0, 1, 0, -1, 1, -1, -1, 1};
    vector<int> moveCol = {1, 0, -1, 0, 1, -1, 1, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> maze = {".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".......................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X...................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X...............................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X...........................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X.......................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X...................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X...............X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X...........X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.........X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.............X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X.................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X.....................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X.........................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X.............................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.....................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "........................................."};
    int startRow = 27;
    int startCol = 13;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 460;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> maze = {".............", "XXXXXXXXXXXX.", "...........X.", ".XXXXXXXXX.X.", ".X.......X.X.", ".X.XXXXX.X.X.", ".X.X...X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.XXX.X.X.", ".X.X.....X.X.", ".X.XXXXXXX.X.", ".X.........X.", ".XXXXXXXXXXX.", "............."};
    int startRow = 16;
    int startCol = 9;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> maze = {".....................", "XXXXXXXXXXXXXXXXXXXX.", "...................X.", ".XXXXXXXXXXXXXXXXX.X.", ".X...............X.X.", ".X.XXXXXXXXXXXXX.X.X.", ".X.X...........X.X.X.", ".X.X.XXXXXXXXX.X.X.X.", ".X.X.X.......X.X.X.X.", ".X.X.X.XXXXX.X.X.X.X.", ".X.X.X.X...X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.XXX.X.X.X.X.", ".X.X.X.X.....X.X.X.X.", ".X.X.X.XXXXXXX.X.X.X.", ".X.X.X.........X.X.X.", ".X.X.XXXXXXXXXXX.X.X.", ".X.X.............X.X.", ".X.XXXXXXXXXXXXXXX.X.", ".X.................X.", ".XXXXXXXXXXXXXXXXXXX.", "....................."};
    int startRow = 31;
    int startCol = 20;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 409;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> maze = {"......................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "....................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X............................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X........................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X....................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X............X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X........X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXX.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X....X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.XXXX.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X......X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X..........X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X..............X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X..................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X......................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X..........................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X..............................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X..................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "......................................"};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 778;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> maze = {"....................", "XXXXXXXXXXXXXXXXXXX.", "..................X.", ".XXXXXXXXXXXXXXXX.X.", ".X..............X.X.", ".X.XXXXXXXXXXXX.X.X.", ".X.X..........X.X.X.", ".X.X.XXXXXXXX.X.X.X.", ".X.X.X......X.X.X.X.", ".X.X.X.XXXX.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X.XX.X.X.X.X.", ".X.X.X.X....X.X.X.X.", ".X.X.X.XXXXXX.X.X.X.", ".X.X.X........X.X.X.", ".X.X.XXXXXXXXXX.X.X.", ".X.X............X.X.", ".X.XXXXXXXXXXXXXX.X.", ".X................X.", ".XXXXXXXXXXXXXXXXXX.", "...................."};
    int startRow = 17;
    int startCol = 15;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 212;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> maze = {"...............", "XXXXXXXXXXXXXX.", ".............X.", ".XXXXXXXXXXX.X.", ".X.........X.X.", ".X.XXXXXXX.X.X.", ".X.X.....X.X.X.", ".X.X.XXX.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X...X.X.X.", ".X.X.XXXXX.X.X.", ".X.X.......X.X.", ".X.XXXXXXXXX.X.", ".X...........X.", ".XXXXXXXXXXXXX.", "..............."};
    int startRow = 27;
    int startCol = 1;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> maze = {"...................", "XXXXXXXXXXXXXXXXXX.", ".................X.", ".XXXXXXXXXXXXXXX.X.", ".X.............X.X.", ".X.XXXXXXXXXXX.X.X.", ".X.X.........X.X.X.", ".X.X.XXXXXXX.X.X.X.", ".X.X.X.....X.X.X.X.", ".X.X.X.XXX.X.X.X.X.", ".X.X.X.X...X.X.X.X.", ".X.X.X.XXXXX.X.X.X.", ".X.X.X.......X.X.X.", ".X.X.XXXXXXXXX.X.X.", ".X.X...........X.X.", ".X.XXXXXXXXXXXXX.X.", ".X...............X.", ".XXXXXXXXXXXXXXXXX.", "..................."};
    int startRow = 12;
    int startCol = 11;
    vector<int> moveRow = {0, 1, 0, -1, 1, -1, -1, 1};
    vector<int> moveCol = {1, 0, -1, 0, 1, -1, 1, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 167;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> maze = {"...................", "XXXXXXXXXXXXXXXXXX.", ".................X.", ".XXXXXXXXXXXXXXX.X.", ".X.............X.X.", ".X.XXXXXXXXXXX.X.X.", ".X.X.........X.X.X.", ".X.X.XXXXXXX.X.X.X.", ".X.X.X.....X.X.X.X.", ".X.X.X.XXX.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.", ".X.X.X.X...X.X.X.X.", ".X.X.X.XXXXX.X.X.X.", ".X.X.X.......X.X.X.", ".X.X.XXXXXXXXX.X.X.", ".X.X...........X.X.", ".X.XXXXXXXXXXXXX.X.", ".X...............X.", ".XXXXXXXXXXXXXXXXX.", "..................."};
    int startRow = 6;
    int startCol = 7;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 307;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> maze = {".....................", "XXXXXXXXXXXXXXXXXXXX.", "...................X.", ".XXXXXXXXXXXXXXXXX.X.", ".X...............X.X.", ".X.XXXXXXXXXXXXX.X.X.", ".X.X...........X.X.X.", ".X.X.XXXXXXXXX.X.X.X.", ".X.X.X.......X.X.X.X.", ".X.X.X.XXXXX.X.X.X.X.", ".X.X.X.X...X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.XXX.X.X.X.X.", ".X.X.X.X.....X.X.X.X.", ".X.X.X.XXXXXXX.X.X.X.", ".X.X.X.........X.X.X.", ".X.X.XXXXXXXXXXX.X.X.", ".X.X.............X.X.", ".X.XXXXXXXXXXXXXXX.X.", ".X.................X.", ".XXXXXXXXXXXXXXXXXXX.", "....................."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 438;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> maze = {"....................", "XXXXXXXXXXXXXXXXXXX.", "..................X.", ".XXXXXXXXXXXXXXXX.X.", ".X..............X.X.", ".X.XXXXXXXXXXXX.X.X.", ".X.X..........X.X.X.", ".X.X.XXXXXXXX.X.X.X.", ".X.X.X......X.X.X.X.", ".X.X.X.XXXX.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X..X.X.X.X.X.", ".X.X.X.X.XX.X.X.X.X.", ".X.X.X.X....X.X.X.X.", ".X.X.X.XXXXXX.X.X.X.", ".X.X.X........X.X.X.", ".X.X.XXXXXXXXXX.X.X.", ".X.X............X.X.", ".X.XXXXXXXXXXXXXX.X.", ".X................X.", ".XXXXXXXXXXXXXXXXXX.", "...................."};
    int startRow = 13;
    int startCol = 13;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 260;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> maze = {".............................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "...........................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.......................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X...................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X...............................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X...........................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X.......................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X...................X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X...............X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXXXXXXXX.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X...........X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.........X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.XXXXXXXXXXX.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.............X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXXXXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.................X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X.....................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X.........................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X.............................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X.................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.....................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.........................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "............................................."};
    int startRow = 4;
    int startCol = 35;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 552;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> maze = {"...............................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".............................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.........................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.....................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X.................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X.............X.X.X.X.X.", ".X.X.X.X...............X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X...................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.......................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X...........................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..............................."};
    int startRow = 12;
    int startCol = 2;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "................................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X............................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X........................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X....................................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X................................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X............................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X........................X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X....................X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X................X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.XXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X............X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.XXXXXXXXXX.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X........X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.XXXXXX.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X....X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.XXXX.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X......X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.XXXXXXXX.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X..........X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.XXXXXXXXXXXX.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X..............X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.XXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X..................X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X......................X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X..........................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X..............................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X..................................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X......................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X..........................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X..............................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................."};
    int startRow = 37;
    int startCol = 14;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 1009;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "................................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X............................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X........................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X....................................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X................................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X............................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X........................X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X....................X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X................X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.XXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X............X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.XXXXXXXXXX.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X........X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.XXXXXX.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X....X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.XXXX.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X......X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.XXXXXXXX.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X..........X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.XXXXXXXXXXXX.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X..............X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.XXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X..................X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X......................X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X..........................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X..............................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X..................................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X......................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X..........................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X..............................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {0, 1, 0, -1, 1, -1, -1, 1};
    vector<int> moveCol = {1, 0, -1, 0, 1, -1, 1, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 1249;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> maze = {".X...........", ".X.XXXXXXXXX.", ".X.X.......X.", ".X.X.XXXXX.X.", ".X.X.X...X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.X.X.X.X.", ".X.X.XXX.X.X.", ".X.X.....X.X.", ".X.XXXXXXX.X.", ".X.........X.", ".XXXXXXXXXXX.", "............."};
    int startRow = 23;
    int startCol = 6;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 317;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> maze = {".X...................................", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X...............................X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.X.X...........................X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.X.X.......................X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X.X.X...................X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X.X.X...............X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X.X.X...........X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.......X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.....X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.........X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X.............X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X.................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X.....................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X.........................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.............................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "....................................."};
    int startRow = 10;
    int startCol = 17;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 557;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> maze = {".X.............", ".X.XXXXXXXXXXX.", ".X.X.........X.", ".X.X.XXXXXXX.X.", ".X.X.X.....X.X.", ".X.X.X.XXX.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X...X.X.X.", ".X.X.XXXXX.X.X.", ".X.X.......X.X.", ".X.XXXXXXXXX.X.", ".X...........X.", ".XXXXXXXXXXXXX.", "..............."};
    int startRow = 12;
    int startCol = 0;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 266;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> maze = {".X........................", ".X.XXXXXXXXXXXXXXXXXXXXXX.", ".X.X....................X.", ".X.X.XXXXXXXXXXXXXXXXXX.X.", ".X.X.X................X.X.", ".X.X.X.XXXXXXXXXXXXXX.X.X.", ".X.X.X.X............X.X.X.", ".X.X.X.X.XXXXXXXXXX.X.X.X.", ".X.X.X.X.X........X.X.X.X.", ".X.X.X.X.X.XXXXXX.X.X.X.X.", ".X.X.X.X.X.X....X.X.X.X.X.", ".X.X.X.X.X.X.XX.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.X..X.X.X.X.X.X.", ".X.X.X.X.X.XXXX.X.X.X.X.X.", ".X.X.X.X.X......X.X.X.X.X.", ".X.X.X.X.XXXXXXXX.X.X.X.X.", ".X.X.X.X..........X.X.X.X.", ".X.X.X.XXXXXXXXXXXX.X.X.X.", ".X.X.X..............X.X.X.", ".X.X.XXXXXXXXXXXXXXXX.X.X.", ".X.X..................X.X.", ".X.XXXXXXXXXXXXXXXXXXXX.X.", ".X......................X.", ".XXXXXXXXXXXXXXXXXXXXXXXX.", ".........................."};
    int startRow = 4;
    int startCol = 4;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 313;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> maze = {".X................", ".X.XXXXXXXXXXXXXX.", ".X.X............X.", ".X.X.XXXXXXXXXX.X.", ".X.X.X........X.X.", ".X.X.X......X.X.X.", ".X.X.XXXXXXXX.X.X.", ".X.X..........X.X.", ".X.XXXXXXXXXXXX.X.", ".X..............X.", ".XXXXXXXXXXXXXXXX.", ".................."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> maze = {".X.............", ".X.XXXXXXXXXXX.", ".X.X.........X.", ".X.X.XXXXXXX.X.", ".X.X.X.....X.X.", ".X.X.X.XXX.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X...X.X.X.", ".X.X.XXXXX.X.X.", ".X.X.......X.X.", ".X.XXXXXXXXX.X.", ".X...........X.", ".XXXXXXXXXXXXX.", "..............."};
    int startRow = 24;
    int startCol = 10;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 208;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> maze = {".X.......................", ".X.XXXXXXXXXXXXXXXXXXXXX.", ".X.X...................X.", ".X.X.XXXXXXXXXXXXXXXXX.X.", ".X.X.X...............X.X.", ".X.X.X.XXXXXXXXXXXXX.X.X.", ".X.X.X.X...........X.X.X.", ".X.X.X.X.XXXXXXXXX.X.X.X.", ".X.X.X.X.X.......X.X.X.X.", ".X.X.X.X.X.XXXXX.X.X.X.X.", ".X.X.X.X.X.X...X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.XXX.X.X.X.X.X.", ".X.X.X.X.X.....X.X.X.X.X.", ".X.X.X.X.XXXXXXX.X.X.X.X.", ".X.X.X.X.........X.X.X.X.", ".X.X.X.XXXXXXXXXXX.X.X.X.", ".X.X.X.............X.X.X.", ".X.X.XXXXXXXXXXXXXXX.X.X.", ".X.X.................X.X.", ".X.XXXXXXXXXXXXXXXXXXX.X.", ".X.....................X.", ".XXXXXXXXXXXXXXXXXXXXXXX.", "........................."};
    int startRow = 18;
    int startCol = 24;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 370;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> maze = {".X.................................", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.............................X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.X.X.........................X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.X.X.....................X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X.X.X.................X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X.X.X.............X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X.X.X.........X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.....X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.XXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.......X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X...........X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X...............X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X...................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X.......................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X...........................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X...............................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................."};
    int startRow = 15;
    int startCol = 2;
    vector<int> moveRow = {0, 1, 0, -1, 1, -1, -1, 1};
    vector<int> moveCol = {1, 0, -1, 0, 1, -1, 1, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 643;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> maze = {".X.............", ".X.XXXXXXXXXXX.", ".X.X.........X.", ".X.X.XXXXXXX.X.", ".X.X.X.....X.X.", ".X.X.X.XXX.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.", ".X.X.X...X.X.X.", ".X.X.XXXXX.X.X.", ".X.X.......X.X.", ".X.XXXXXXXXX.X.", ".X...........X.", ".XXXXXXXXXXXXX.", "..............."};
    int startRow = 35;
    int startCol = 8;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 361;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> maze = {".X..................................", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X..............................X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.X.X..........................X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.X.X......................X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X.X.X..................X.X.X.X.", ".X.X.X.X.X................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X....................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X........................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X............................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "...................................."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 379;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> maze = {".X..........................................", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X......................................X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.X.X..................................X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.X.X..............................X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X.X.X..........................X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X.X.X......................X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X.X.X..................X.X.X.X.X.X.", ".X.X.X.X.X.X.X................X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X....................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X........................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X............................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X....................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X........................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "............................................"};
    int startRow = 27;
    int startCol = 36;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 580;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> maze = {".X........................................", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X....................................X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.X.X................................X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.X.X............................X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X.X.X........................X.X.X.X.", ".X.X.X.X..........................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X..............................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X..................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X......................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".........................................."};
    int startRow = 13;
    int startCol = 4;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 225;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> maze = {".X............................................", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X........................................X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.X.X....................................X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.X.X................................X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X.X.X............................X.X.X.X.", ".X.X.X.X..............................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X..................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X......................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X..........................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".............................................."};
    int startRow = 9;
    int startCol = 9;
    vector<int> moveRow = {0, 1, 0, -1, 1, -1, -1, 1};
    vector<int> moveCol = {1, 0, -1, 0, 1, -1, 1, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 385;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> maze = {".X................................................", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X............................................X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.X.X........................................X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.X.X....................................X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X.X.X................................X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X.X.X............................X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X.X.X........................X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X....................X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.XXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X................X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.XXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X............X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.XXXXXXXXXX.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X........X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.XXXXXX.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X....X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.XXXX.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X......X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.XXXXXXXX.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X..........X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.XXXXXXXXXXXX.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X..............X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.XXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X..................X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X......................X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X..........................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X..............................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X..................................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X......................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X..........................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X..............................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................."};
    int startRow = 49;
    int startCol = 7;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 1242;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> maze = {".X................................................", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X............................................X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X.X.X........................................X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X.X.X....................................X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X.X.X................................X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X.X.X............................X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X.X.X........................X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X....................X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.XXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X................X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.XXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X............X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.XXXXXXXXXX.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X........X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.XXXXXX.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X....X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X.XXXX.X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.X......X.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X.XXXXXXXX.X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.X..........X.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X.XXXXXXXXXXXX.X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.X..............X.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X.XXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.X..................X.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.", ".X.X.X.X.X.X.X......................X.X.X.X.X.X.X.", ".X.X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.", ".X.X.X.X.X.X..........................X.X.X.X.X.X.", ".X.X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.X.", ".X.X.X.X.X..............................X.X.X.X.X.", ".X.X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.X.", ".X.X.X.X..................................X.X.X.X.", ".X.X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.X.", ".X.X.X......................................X.X.X.", ".X.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X.", ".X.X..........................................X.X.", ".X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", ".X..............................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 1298;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> maze = {".......", "X.X.X..", "XXX...X", "....X..", "X....X.", "......."};
    int startRow = 5;
    int startCol = 0;
    vector<int> moveRow = {1, 0, -1, 0, -2, 1};
    vector<int> moveCol = {0, -1, 0, 1, 3, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> maze = {"...", "...", "..."};
    int startRow = 0;
    int startCol = 1;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> maze = {"..X.X.X.X.X.X."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {2, 0, -2, 0};
    vector<int> moveCol = {0, 2, 0, -2};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> maze = {".......", "..X.X..", ".XX...X", "....X..", "X....X.", "......."};
    int startRow = 5;
    int startCol = 0;
    vector<int> moveRow = {1, 0, -1, 0, -2, 1};
    vector<int> moveCol = {0, -1, 0, 1, 3, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> maze = {"...", "...", "..."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {0, 1, 0, -1};
    vector<int> moveCol = {1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> maze = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int startRow = 49;
    int startCol = 49;
    vector<int> moveRow = {0, 0, -1, 1};
    vector<int> moveCol = {1, -1, 0, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> maze = {"...", "...", "..."};
    int startRow = 0;
    int startCol = 1;
    vector<int> moveRow = {50, 0, -50, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> maze = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int startRow = 2;
    int startCol = 0;
    vector<int> moveRow = {1, 0, -1, 0, 0, -1};
    vector<int> moveCol = {0, -1, 0, 1, 3, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> maze = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {0, 1};
    vector<int> moveCol = {1, -49};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 2449;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> maze = {"...X..............X........................X......", "......X......X.X.....X.........XX.......X...X....X", "....X..XX..X.X....X....XX......X............X..X.X", "......X.X.X....X.X..............X..............X..", "...X................................XX............", "............X................XX........XX........X", "XX.X...X..............X............X..............", "............X.............X....X...X.........X....", "...........X.....XX.............X....X............", ".......X....................X....X................", "...X.............XX....................X..........", ".......................X.......X.......X.....X....", "...X................X...X...........X.X.X......X..", "...X.............X.X....X...X...XX..X.........X..X", "....X......X.....XX....X.........X........X.......", "............X.X............X............X.........", "...............X......X.....X....X................", "................X................X..X..X..........", "...........X...........X..X......XX..X............", "X.X.X......X............................X.........", "....X.............X......X........................", "...X..X.....X.....X...................X......X....", "..........X.......X.X.........X...X.X......X..X...", "...........X..X.........................X..X......", "..........X..X.........X..........................", "..........X.....X....................X.....X......", "..........X....X....X.......X......X..............", "...X..X....X...............X....................X.", ".......X......X...X...............................", ".X.....X.......X.X................................", "................X.X.......X..X......XX......XX..X.", "..X.................X.............................", "..................X........................X......", ".......X....X.....................X...X.......XX..", ".....X..........X...........X....................X", "........XX.....X...............X...X..........X...", "...XX............X......X.........X...............", "...X.....X......X....XXX......X......X..XX.....X..", "X.....X...X..............................X......X.", "......X.X...........X.X......X....................", "....X.............................X.........X.....", "X.....X.........X...............X.................", ".X.......X..........X....X........................", ".........................X...X.......X..X......X..", "......X..........X.......X...........X............", "..........X..........X....X...........X..X....X...", ".X..X.X......X.X....X.....................X..X....", "..X.X.............X.XX..X....X.X.....X............", "....X............X..............................X.", "..X...............X.....XX.......X................"};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {1, -12, 43, 41, -16, 37, -15, 23, -49, 46, 5, 21, 38, 36, 46, -7, -6, 1, 37, 37, -26, 24, 8, 25, -23, 5, -16, 8, -23, -21, 25, -47, -45, 30, 20, 25, -39, 0, -9, 12, 9, 16, 5, 22, 6, -5, -21, 33, 11, 41};
    vector<int> moveCol = {-12, -37, -8, 13, 32, 3, -5, -6, 9, 41, 41, 7, -40, 42, 20, 0, -27, 34, -33, -23, 13, 16, 42, 33, 4, 17, 16, -39, 10, 8, -1, -46, 5, 19, 13, 45, 22, -41, 38, -34, 47, 2, -33, 37, -10, 17, -30, -42, -12, 36};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> maze = {"XXX", "X.X", "X.X", "XXX"};
    int startRow = 1;
    int startCol = 1;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> maze = {"XXX", "..X", "XXX"};
    int startRow = 1;
    int startCol = 0;
    vector<int> moveRow = {0};
    vector<int> moveCol = {1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> maze = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5};
    vector<int> moveCol = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> maze = {".X.", "XX.", "..."};
    int startRow = 0;
    int startCol = 2;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> maze = {".", ".", ".", "X", "."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {1};
    vector<int> moveCol = {0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> maze = {"...", "...", ".X."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {-1, 1, 0, 0};
    vector<int> moveCol = {0, 0, -1, 1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> maze = {".", "."};
    int startRow = 1;
    int startCol = 0;
    vector<int> moveRow = {1};
    vector<int> moveCol = {1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> maze = {".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", "X....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X", ".....................X"};
    int startRow = 9;
    int startCol = 3;
    vector<int> moveRow = {1, 2, 4, -1, 34, 0, 0, 0, 1, 0, -1, 0};
    vector<int> moveCol = {0, 0, 0, 0, 1, -1, 1, 0, 1, 0, -1, 6};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> maze = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int startRow = 25;
    int startCol = 25;
    vector<int> moveRow = {1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 1};
    vector<int> moveCol = {0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 1, 1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> maze = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> maze = {"X.X", "...", "XXX", "X.X"};
    int startRow = 0;
    int startCol = 1;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> maze = {"..X.X....", ".X.X..X.X", "X.X..X.X."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {1, 1, 1, 0, -1, -1, -1, 0, 2, 2, -2, -2};
    vector<int> moveCol = {-1, 0, 1, 1, 1, 0, -1, -1, 1, -1, 1, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> maze = {".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", "................................................."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {1, 0, -1, 0};
    vector<int> moveCol = {0, 1, 0, -1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> maze = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1};
    vector<int> moveCol = {1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> maze = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {-50, -40, -30, -20, -10, -25, -45, -49, -44, -1};
    vector<int> moveCol = {-50, -40, -30, -20, -10, -1, -1, -49, -49, -49};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> maze = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {1, 0};
    vector<int> moveCol = {0, 1};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> maze = {"...", "...", "..."};
    int startRow = 0;
    int startCol = 0;
    vector<int> moveRow = {0, 0, 1, 0, -1};
    vector<int> moveCol = {0, 1, 0, -1, 0};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> maze = {"X.....X......X....XXX.................X......X....", ".X.....X........X............X..........X........X", "..........X.......X..X....X..X...X.........X......", "..X....X....X............X...X.............X......", "........X...X...XX...........X....................", "........XX.....X.....X...........................X", "......X...................X..X....X.........X.....", "............X...X........X.X..X..X...........X...X", "............................X.X................X..", "..........X......X......X............X.......X...X", "...................X...........X..X.......X.......", "..X...........X.....X.............................", "X.................X.......X.X.................X...", "..........X.......X....X.............X.....X......", "......X.......X..............X........X.X.........", "......X.X...............X................X....X...", ".........X......X....................X............", "...X.................X............................", "....X.....XX..........X.........X.................", "....X...................X...............X...X.....", "............X..X.XX........XX..X.X..XX......X..X..", "...............X...X..X...........X.........X.....", ".............X.........XX....X....................", "...X.....................X.......................X", "........X.X....................X..X.X.............", ".......................X....X.....X..X.....X......", "...............X.......X.................X...X....", "............X..X.X...X......X.....................", "..................................................", ".....X......XX.........X.X............X..........X", ".......X.............X...........X.....X...X...X..", ".........X......X...X................XXX..........", ".XX......XX......X..XX...........................X", "................XX..........X.......X.....X.......", "........................................X.....X...", "......X.....................XX................X.X.", "...X.................X...............X...........X", "..X..........X...............X..X.XX..............", "XX...X............................................", "....................X...............X.X..X........", ".X................................XX.......X......", ".............X....X.....X....X.X..................", ".......................X..........................", ".....X......X.X.X..X...............X......X.......", "............XX......................X..X.........X", ".......X...........X...X.......X..................", "..X...X..X.X.........X........X...................", "...........X......X...............................", ".......X..X......X..X...........X..........X......", ".X.X............X........X...........XX..X........"};
    int startRow = 2;
    int startCol = 0;
    vector<int> moveRow = {1, -12, 43, 41, -16, 37, -15, 23, -49, 46, 5, 21, 38, 36, 46, -7, -6, 1, 37, 37, -26, 24, 8, 25, -23, 5, -16, 8, -23, -21, 25, -47, -45, 30, 20, 25, -39, 0, -9, 12, 9, 16, 5, 22, 6, -5, -21, 33, 11, 41};
    vector<int> moveCol = {-12, -37, -8, 13, 32, 3, -5, -6, 9, 41, 41, 7, -40, 42, 20, 0, -27, 34, -33, -23, 13, 16, 42, 33, 4, 17, 16, -39, 10, 8, -1, -46, 5, 19, 13, 45, 22, -41, 38, -34, 47, 2, -33, 37, -10, 17, -30, -42, -12, 36};
    MazeMaker* pObj = new MazeMaker();
    clock_t start = clock();
    int result = pObj->longestPath(maze, startRow, startCol, moveRow, moveCol);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8394868&rd=14174&pm=10451
********************************************************************************
#include <map> 
#include <set> 
#include <cmath> 
#include <queue> 
#include <vector> 
#include <string> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cassert> 
#include <numeric> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include "float.h" 
#include <ctime> 
using namespace std; 
 
class MazeMaker { 
public: 
  int longestPath(vector <string> maze, int startRow, int startCol, vector <int> moveRow, vector <int> moveCol); 
}; 
 
#define FOR(i, a, b) for (int i(a), _b(b); i <= _b; ++i) 
#define FORD(i,a,b) for (int i(a),_b(b); i >= _b; --i) 
#define REP(i,n) for (int i(0),_n(n); i < _n; ++i) 
#define REPD(i,n) for (int i((n)-1); i >= 0; --i) 
 
template<typename T> inline int size(const T& c) { return (int)c.size(); } 
 
int MazeMaker::longestPath(vector <string> maze, int startRow, int startCol, vector <int> moveRow, vector <int> moveCol) {     
  int r = size(maze), c = size(maze[0]); 
  vector<vector<int> > dist(r, vector<int>(c, -1)); 
  queue<int> que; 
  dist[startRow][startCol] = 0; 
  que.push(startRow); que.push(startCol); 
  while (!que.empty()) { 
    int i = que.front(); que.pop(); 
    int j = que.front(); que.pop(); 
    REP(dir, size(moveRow)) { 
      int ni = i+moveRow[dir], nj = j+moveCol[dir]; 
      if (0 <= ni && ni < r && 0 <= nj && nj < c && maze[ni][nj] == '.' && dist[ni][nj] == -1) { 
        dist[ni][nj] = dist[i][j]+1; 
        que.push(ni); que.push(nj); 
      } 
    } 
  } 
  int res = 0; 
  REP(i, r) REP(j, c) 
    if (maze[i][j] == '.') 
      if (dist[i][j] == -1) 
        return -1; 
      else 
        res = max(res, dist[i][j]); 
  return res; 
} 
 
 
 
// Powered by FileEdit
// Powered by moj 4.12 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/