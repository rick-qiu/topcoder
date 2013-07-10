/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12527
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

class EllysChessboard {
public:
    int minCost(vector<string> board);
};

int EllysChessboard::minCost(vector<string> board) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"........", "........", "...#....", ".#......", ".......#", "........", "........", "........"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"........", "........", "........", "........", "........", "........", "........", "........"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
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
    vector<string> board = {"........", "........", "........", "........", "........", "........", "........", "......#."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
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
    vector<string> board = {"........", "........", "........", ".......#", "....#...", "........", "........", "........"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"........", "........", "........", "........", "........", "........", "...#....", "......##"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"........", "........", ".#......", "........", "#.......", "......#.", "........", ".#......"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"........", ".......#", "........", "........", ".#......", ".....#.#", "........", ".#......"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"#.#.....", "..#.....", "........", ".....#..", "........", "........", "...#....", "....#..."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"........", "....#...", "........", "........", "...#.#..", "#.......", "...#..#.", "......#."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"....#...", "......#.", ".......#", "........", "....#.#.", "......#.", "....#...", ".......#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"........", "....#...", "......##", "........", "#.#...#.", "........", "#.......", "#.#....."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {".#......", "........", "..#..#.#", "...#..#.", "........", "...#...#", "...#...#", "........"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {".......#", "#..#....", "....#.#.", "........", "........", "....#...", "###.....", ".#..#..."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {".#......", "........", ".##....#", "..##.#.#", "........", "......#.", "..#.....", "....#.#."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"........", "......#.", "....##..", "#.##....", "......##", "..#.....", ".##.....", "...#...#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"#...#...", "........", "#...#.#.", "...#....", "..#..##.", "##......", "##......", "....#..."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {".#......", "......#.", ".....#..", "#..#....", "#.#.....", ".#....#.", ".#.#....", "#.#..#.#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"#...#...", "#...#...", "......##", "##.#...#", "#..#..#.", ".#...#..", "........", "..#....."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"..#.#...", "#.......", "...##...", ".#...#..", "..#..##.", ".#..###.", "......#.", "#......#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"..#....#", ".#..#...", "##...##.", "....##..", "........", "...#.#.#", ".###..#.", ".......#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 114;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"...##...", "##..#.##", "....#...", ".......#", "#..#....", ".#..#...", "#.#.....", "##.#..#."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"...#.#..", "#....###", ".#......", "#.#....#", "..###...", "#.......", "##....#.", ".#...#.#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"##....#.", "##....#.", "..#.##..", "....#..#", "#..#..##", "...#....", "#......#", "#..#..#."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"...#....", ".#.#####", ".###.#..", "#.#....#", "#......#", ".#......", "....#...", "##.#...#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 141;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {".##.....", "..##.###", ".#..#..#", "#.....#.", "...#....", "..#.....", "#....###", "####...#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 174;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"...###.#", ".#..#...", ".###....", "..##...#", "..##..#.", "...#.#.#", "#.#..#..", "..##..#."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 154;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {".##.#.#.", "....###.", "#...##..", "##.#..##", ".#....#.", "##.#.#..", ".#..#.#.", "#......."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 161;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"##..####", "....##..", "#.......", ".###.#.#", ".#......", "....##..", "####.#.#", "..#.#..#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 191;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {".#.##...", "..#..#..", "..#..#..", "...###..", "..#..###", "#.###.#.", "#.#.#.##", "#..##..."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 166;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"...#..#.", "..##.###", "..####..", ".....##.", "##...#..", "##...#.#", "##.#.#..", ".#..##.#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 189;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {".###.#..", "##.#####", "#..#...#", "........", ".#####..", "..###..#", "##.....#", "....#.##"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"#.##.##.", "#.##...#", "...#.#..", "###...#.", "#..#.#..", "#...##.#", ".#.###..", "#....###"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 220;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"#.###.#.", "#.#.##..", "#.###...", "#.....#.", "##.##..#", "#.#.#...", "#.#.#..#", ".#.##.#."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 212;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"#.##.##.", "##.####.", "..##.#.#", "#....#.#", ".#......", "...###.#", ".###.#.#", "....####"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 229;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {".#.#..#.", "##.##...", "###...#.", "#####.#.", "###.....", "#.######", "#.....#.", "..##.#.#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 214;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"#..#.#.#", "####.###", "#...##..", "...#####", ".#......", "##.#.###", ".##..##.", "..##..##"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 248;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"..#.#..#", "#.##.#.#", ".###..#.", "##..##.#", "###.#..#", "###.....", "##..##.#", "#...####"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 246;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"##..##..", "#..#..##", "####...#", "###.####", "##.#...#", ".##.###.", ".#..#.##", ".#..##.."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 249;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"##..####", "#####..#", "..#.#...", "#..##.##", ".#.###.#", "####.###", "#.#...#.", "##....#."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 275;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"###.#.#.", "#.####.#", "###.#.##", "#..##.#.", "....#.##", "#.#.###.", "#..#.###", ".##.#..#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 274;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {".#####..", "#######.", "#.####..", "##.#.###", "#..##..#", ".#...#.#", "#####.#.", "..#..##."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 257;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {".##..###", ".##.###.", "##.#.##.", "########", ".###.#.#", ".##.##..", ".####.#.", ".#....##"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 267;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {".####.##", "..#....#", "#####..#", "..###.##", "###.###.", "###.####", "..##..##", "##.##..#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 288;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"#####.#.", "##..####", ".###.###", "###..#..", "##.#..##", "#######.", ".##..##.", "..##..##"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 295;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {".#..####", "###..###", "#.###...", "#.#..###", "..####.#", "####.###", ".#..####", "###.###."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 311;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"..#..###", ".######.", "#..##.##", "###.####", ".#.#..##", "..##.###", "#..#####", "#####.##"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 312;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {".#####..", "##.#####", "#.###.#.", "#...####", ".######.", ".#####.#", ".#.###.#", "####.##."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 306;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"##.###.#", ".#######", "##.#####", "###.##.#", "..###.##", "####.#.#", "####.##.", ".#.#..#."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 320;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {".#######", ".###.###", "####.#.#", "#.#####.", ".#.#####", "#..##.#.", "##..##.#", "####.###"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 341;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"##.#####", ".#..####", "##.####.", "#######.", ".#####.#", "######.#", "###.#.#.", ".###.#.#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 337;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"#####.##", "..#####.", ".#######", "#..#####", "######.#", "#..#####", "#....#.#", "########"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 349;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {".#######", "#..####.", ".#######", "###.#.##", "#.###.##", "#..#####", "####.#.#", "#######."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 357;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"###.###.", "########", "###.####", "##.##.#.", "######..", "###.##.#", "##.#.###", ".#######"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 377;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {"###.##.#", "####..##", "####.#.#", "##..####", "########", "#.######", "##.###.#", "######.#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 381;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {"#####.##", "#....###", "###.####", ".#####..", "########", "####.###", "####.###", "########"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 393;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {".#####.#", "#####.##", "##.#####", ".#.#####", "########", "########", "#.##..##", "#######."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 389;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {"#####.#.", ".#######", "#.######", "########", "###.####", "##.##.##", "########", "#.#####."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 388;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {"###..###", "#.######", "###.####", "########", "########", "####.###", "##.##.#.", "########"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 415;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"########", "########", "#.######", "####...#", "########", "########", "########", ".##.###."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 416;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {"########", "########", "####.###", "#######.", "##..###.", "#.######", "########", "########"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 439;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {"########", "####.###", "########", "########", "####.###", ".#.#####", "##.#####", "########"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 442;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {"########", "##.#####", "#.######", "###.####", "########", "######.#", "########", "########"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 448;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> board = {"####.###", "########", "########", "#.######", "###.####", "########", "########", "########"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 457;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {"########", "###.####", "########", "########", "#.######", "########", "########", "########"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 463;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> board = {"########", "########", "########", "########", "########", "########", "########", "#####.##"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 466;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {"########", "########", "########", "########", "########", "########", "########", "########"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 476;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {"#.#.####", "#.#.####", "#.#..###", "#.#...##", "#.#.##.#", "#.#.####", "#.#.#..#", "#.#.####"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 316;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {"........", "........", "........", "........", "........", "........", "........", "........"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
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
    vector<string> board = {"####....", "####....", "####....", "####...#", "####..##", "####...#", "####....", "####...."};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 217;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {"##.#.#..", "######.#", "#####.##", "#####..#", "#######.", "#####..#", "##..####", "#.#.####"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 349;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {"########", "########", "########", "###..###", "###..###", "########", "########", "########"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 459;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {"........", "#......#", "........", "........", "........", "........", "#......#", "#......#"};
    EllysChessboard* pObj = new EllysChessboard();
    clock_t start = clock();
    int result = pObj->minCost(board);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22864195&rd=15497&pm=12527
********************************************************************************
#include<vector> 
#include<string> 
#include<algorithm> 
using namespace std; 
 
class EllysChessboard 
{ 
  int peb[15][15]; 
  int dp[15][15][15][15]; 
   
  int mx(int a, int b, int c=0, int d=0) 
  { 
    return max(max(a, b), max(c, d)); 
  } 
   
  int solve(int x1, int x2, int y1, int y2) 
  { 
    //printf("%d %d %d %d\n", x1, x2, y1, y2); 
    if(x1 > x2 || y1 > y2) return 100000; 
    if(x1 == x2 && y1 == y2) return dp[x1][x2][y1][y2] = 0; 
    if(dp[x1][x2][y1][y2] != -1) return dp[x1][x2][y1][y2]; 
     
    dp[x1][x2][y1][y2] = 100000; 
    int tmp; 
     
    tmp = solve(x1+1, x2, y1, y2); 
    for(int i=y1;i<=y2;i++) if(peb[x1][i]) tmp += mx(i-y1, y2-i, x2-x1); 
    dp[x1][x2][y1][y2] = min(dp[x1][x2][y1][y2], tmp); 
 
    tmp = solve(x1, x2-1, y1, y2); 
    for(int i=y1;i<=y2;i++) if(peb[x2][i]) tmp += mx(i-y1, y2-i, x2-x1); 
    dp[x1][x2][y1][y2] = min(dp[x1][x2][y1][y2], tmp); 
     
    tmp = solve(x1, x2, y1+1, y2); 
    for(int i=x1;i<=x2;i++) if(peb[i][y1]) tmp += mx(y2-y1, i-x1, x2-i); 
    dp[x1][x2][y1][y2] = min(dp[x1][x2][y1][y2], tmp); 
 
    tmp = solve(x1, x2, y1, y2-1); 
    for(int i=x1;i<=x2;i++) if(peb[i][y2]) tmp += mx(y2-y1, i-x1, x2-i); 
    dp[x1][x2][y1][y2] = min(dp[x1][x2][y1][y2], tmp); 
 
    return dp[x1][x2][y1][y2]; 
  } 
   
public: 
  int minCost(vector<string> B) 
  { 
    for(int i=0;i<15;i++) for(int j=0;j<15;j++) peb[i][j] = 0; 
    for(int i=0;i<8;i++) for(int j=0;j<8;j++) if(B[i][j]=='#'){ 
      peb[i+j][i-j+7] = 1; 
    } 
     
    for(int i=0;i<15;i++) for(int j=0;j<15;j++) for(int k=0;k<15;k++) for(int l=0;l<15;l++) dp[i][j][k][l] = -1; 
     
    return solve(0, 14, 0, 14); 
     
  } 
};

********************************************************************************
*******************************************************************************/