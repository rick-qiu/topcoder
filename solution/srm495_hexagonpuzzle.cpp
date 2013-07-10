/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11303
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

class HexagonPuzzle {
public:
    int theCount(vector<string> board);
};

int HexagonPuzzle::theCount(vector<string> board) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {".", ".X", "X..", ".X.X"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
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
    vector<string> board = {".", "..", ".XX", "...."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"X"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {".", "..", "...", ".X.."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20160;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {".", "..", "XXX", "..X.", ".X..X", "XXXX..", "..X.X.X", "..X.XX.."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {".", "..", "...", "....", ".....", "......", ".......", "........"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 261547992;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {".", ".X"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {".", "..", ".XX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"X", "XX", ".XX", "XXX."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
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
    vector<string> board = {"X", ".X", ".XX", "...X", ".XXXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"X", "..", "X.X", "XX.X", "XXXXX", "XX.X.X"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"X", "XX", "XXX", "XXXX", "XXXXX", "XXXXXX", "XXXXXXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
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
    vector<string> board = {".", "..", "X..", "X..X", "X....", "X.....", "....X..", "...XXX.."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 697067110;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"X", "XX", "XXX", "XXXX", "XXXXX", "XXXXXX", "X.XXXXX", ".XXX.XXX", "XXXXXXXXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {".", "..", "...", "....", ".....", "...X..", ".X..X..", "........", ".......X.", ".....X...."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 769595906;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {".", "XX", "XXX", "X.XX", "XX.XX", "XXXXX.", "XXXX..X", "X.XX..X.", ".XXXXXXX.", "XXXX.XXXXX", "XXXXXX.XXXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"X", "XX", ".X.", "XXXX", "...XX", ".X..X.", "XX.XXX.", "X....XX.", ".....X...", "X..X..X.XX", ".X...X.....", "..X.X.XXX.X."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 761580755;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"X", "XX", "XXX", "XXXX", "XXXXX", "XXXXXX", "XXXXXXX", "XXXXXXXX", "XXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXXX", "XXXXXXXXXXXX", ".XXXXXXXXXXXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
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
    vector<string> board = {"X", ".X", ".XX", "X...", "....X", "XX....", "X..X.X.", "X..X..X.", "XX...X..X", ".....X.XXX", "XX...XX..XX", "XXXXXXX....X", "XXXXXX....X..", ".XXXXXXXXX.XXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 921688770;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {".", "..", "...", "....", "..X..", "......", "......X", "........", ".........", "..........", ".X...X.....", "............", ".X........X..", "....X..X......", ".............X."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 324852642;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"X", "XX", "X.X", "XX.X", "XXXXX", "XXXXX.", "XXX.XXX", "XXXXXXXX", "X.XXXXXXX", "XXX..XXXXX", "XXXXXX.XXXX", "XXXX.XXXXX.X", "XXXXXXXXX.XXX", "XX..XX.XXXXX.X", "XXX.X..X.XX..XX", "XXXX.XXXXXXX.XXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"X", "XX", "XXX", ".XXX", "..X..", ".XXXXX", ".X.XXXX", ".X.X.XXX", "..XXXXX.X", "XXXXXX.XX.", ".XXXXX.XXXX", "X..XXXXXXX..", "XXXXX.XXXXXXX", "XXXXXX.XXXX..X", ".XXXXX..XXX..XX", "XXX.X.XX..XXX.XX", "XXXXXXXX..X.XXX.X"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3888;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"X", ".X", "XXX", "XXXX", "XXXXX", "XXXXXX", "XXXXXXX", "XXXXXXX.", "XXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXXX", "XXXXXXXXXXXX", "XXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXX.XXXXXXXX", "XXXXXX.XXXXXXXXX", "XXXXXXXXXXX.XXXXX", "XXXXXXXXXXX.XXXX.."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {".", "XX", "X..", "XXX.", "X..X.", ".X.XXX", "X.X...X", "X.XXX.XX", "..X....X.", "XXX..X.XXX", "..X.X.X.XX.", ".....XX.X.X.", "X.X....X..XX.", "X......X..XX..", "X....XXX.XX....", "..XXX.X..X.XXXXX", "..X........XXXX.X", "..XX....XXXX.....X", "..XXXX...X....XX..."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 607228433;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"X", "..", "XX.", "..XX", "XXX.X", "..X.XX", ".XXXXX.", "XX..X..X", "....XX...", "XXX..X.X..", "X....X.XX..", ".XXX...XXX..", "...X....X..XX", "...X.X....XX.X", ".X...XX......X.", "X..XX.XX.X..XXX.", ".X...X........XX.", "..X..X..X.X....X.X", "X......X....XX.X.X.", "X.X.X.....X..XX..X.."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 697080940;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"X", "XX", ".XX", "....", "..X.X", "..XXXX", "XX..XXX", "X.X...XX", "..XX..XXX", "..X...XXXX", "...X.XXXXXX", "..XX..XXXXX.", "X....XX..XXX.", ".XX.XXXXXXX.XX", ".XX.XX.XXXX....", "XXX.XXXX.XX....X", "XXX.XXX..XXX..X.X", "X.........XXXX.XXX", ".XXXXX.XXX.XX.XXXXX", "X...XX.XX.X.X...XXXX", "XXXXX....XXXXXXXX.XXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 888661612;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {".", "XX", ".XX", "XXXX", "XXXXX", ".X.XXX", "X..XXXX", "XXXXXXXX", "XXXXXXXXX", "XXXXXXXXXX", "XXXXXXXX.XX", "XXX.XXX.XXXX", "XX.XX.XXXXXXX", "X..X...X.XXXXX", "XXXX.XXXXXXX.X.", "XXX.XX.X.XXXX.XX", "XXXXXXXXX.XXXXXXX", ".XXXXXXXX.X.XXXXXX", "XXXXXXXXX.XXX.XXXXX", "XX.XXXXXX.XX..XXXXXX", "XXXXXXXXXXXXX..XXXXXX", "X...XXX.XXXXXXXXXXXXX."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"X", "XX", "XXX", "XXXX", "XXXXX", "XXXXXX", "X.XXXX.", "XXX.X..X", "XXXXXXXXX", "XXXXXXXXXX", ".XXXX.XXX.X", "XXXXXXXXXXXX", "XX.XXXXXXXXXX", "XXXXXXXXXXX.XX", ".XXXXXXXXX.XXXX", "XX.XXXXX.XXXXXXX", "XXX.X.XXXXXXXX.XX", "XX.XXXXXXXX.XXXXXX", "XXXXXXXXXXXX.XXXXXX", "XXXXXX.XXXXXXXXXXXXX", "XXXXXXXX.XXXXXXXXXXXX", "XXXXXX.XXXXXXXXXXXXXXX", "XXXXXXXXXXXXX.X.XXXX.X."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"X", "..", "X..", "XXXX", "XXXXX", "XXX...", "X.XXXXX", "X.XX.XX.", "XXXXXXXXX", "XXXXX..XX.", "XXX.XX.XXXX", "XXXXXXX....X", "XXXX.XXXXXX.X", "XX.XX.XXXXXX.X", "XXX..XXXXXXX..X", "XXXXXXXXXXXXXXXX", ".X.X.XXXX..XXXX..", "X.XXXX.X.XXXX.XXXX", "..XXXX.X.XXX.XX.XXX", "XX..XXXXXXXX.XXXXXXX", "XXXX.XX.X.XXXXXXXXXXX", ".X.XXX.XXXX.XXXXXXXXXX", "XXXXXXXXXXXX..X.XX.XXX.", "XX.XXXXXXXXXXXX.X.XXXXX."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {".", "..", "...", "....", ".....", "......", ".......", "........", ".....X...", "..........", "...X.X.....", "..X.X.......", ".........X...", ".....X..X.....", "....X..........", "...X...X........", "......X.X...X....", "..........X.......", "...X...X.XX........", ".......X.........XX.", ".......X.........XX..", "XX......X..X......X...", "..................X....", ".....X..X....X..........", "X..X.........X..X.......X"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 581326951;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {".", "..", "X..", "....", ".....", ".X....", "X......", "....X...", "......X..", "..........", ".....X....X", ".....XX.....", "........X.X..", "...X....X....X", ".X.X..XX...X...", "..............X.", ".......X.....X...", "..XXX.........X.X.", "..............XXX..", "....................", ".X...............X.X.", "............X.........", ".......X.............X.", "......X.....X...........", "X.......X.......XX....X..", ".XXXX..X.X......XX....X..."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 945828967;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"X", ".X", "XXX", "XXX.", "X..X.", ".X.XXX", ".X..XXX", "..X.XX.X", ".XX.XXX..", "..X.XXX...", "X.X.XXX.XXX", "..X.XXXXXX..", ".XX..X.XXXX..", "..XXX...XX.X.X", "X.X.XX..X..XX..", "XXXXX..XXXX.XXX.", ".XXX.X.X.XX....X.", "..XX...XXXXX...XXX", ".X..XX.X.XXXXX.XXXX", "XXXXX...XX.X.X.X...X", "XXX..XXXX..X.X..X.X..", ".XXX.X....XX.XXXXXXXXX", ".X.X.XXXXX...XXXXX.X.XX", "X...XX.X.XXX..X..X..XX.X", ".X.XX.X..XXX.X.X.XXXX....", "...XX..X...XXX.X.X.XX...XX", ".X...X.X.XXXXXX.XX.X.XXX.XX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 814908484;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"X", "XX", ".X.", ".XXX", "..XXX", ".X....", "X.X...X", "..XXX.X.", "X.XX.XX..", ".XXXXXXXXX", "XXXXXXX.XXX", "X.XXXX....XX", ".XX.XXXX.XXXX", ".X.XXX.XXXX...", "XX.X.XX...XX...", ".XX..X.XXXX.X...", ".XXXX.XX.XXXXX..X", "XXX.X.X.X.XX.XXX..", "XX..X..XXX..X.XXXXX", "XX..X.XXXXX.XXXX.XXX", "XXXXXXXX.XXXXXXXX....", "XX.XXX.X.XX....X.XXXXX", "X..X..X.XXXXX..XX.X.XXX", ".X.XXX.X..X....XX.XXXX..", "X.XX..XXXX...XXXXXXXXXXXX", "XX.X..XX.XXXX.X..X.XXXXXXX", "XXXXX...XXX.XXX.XXX...XXXX.", "XXXXX....X...XXXXXXXX.XXX..X"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 73207811;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {".", "X.", "...", ".XXX", "XX.XX", "..XXX.", "X...X.X", ".X.XX.X.", "X...XX...", "XX.X.XXXX.", "XXXX..X..XX", "XX.XX...X.X.", ".X.XX..X.XX..", "X.XXXX..X.XXXX", "XXX.X..X..XXX.X", ".X.XXXX.XXXXX.X.", "X.XXX..X.X.X....X", "....X..XX.X..XXX..", ".X.X.X.XX.....XX...", "..XXXXXXXX..XXXXXXXX", ".X.X.X.XXX.X..XX.X...", "XX.XX...XX.XXXX..X.X.X", "X.X.XX..XXX..X......XX.", "...XXXX..X..X.XX.X.XX.XX", "...X.XX.X.X.X.X..XX.X....", ".X.X..XXXX.XXX...XX.X.XXXX", "X.XX.....XX..XX.XX..XX.X..X", "XXXXX.X.XX..XX..X.X.X.X.XXXX", "XXXXX.XX..X.XXX.X.X...XXX...X"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 165302245;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {".", "..", "...", "....", "XX..X", "..X...", "XXX....", "......XX", "X..X..X..", "....XXXX..", "..XXXXX.X..", ".X.X...X....", "X...X..X....X", "...X..X.X.....", "X.X............", ".....X....X.....", "...X..........X..", ".............XX...", "X............XX...X", ".....X......X.X....X", "X...........X........", "..X.X..X......X.X.X...", ".XX..X....XX......X....", "X......X......X....X..X.", ".....XX.X.XX......X.....X", ".......X.....X.XX.X..XX..X", "X..X....X...X...XX...X.XX..", "..........X.X.........X.X.X.", "X.......X....X.....XX.....XX.", "..X.X...........XX..X......XX."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 736295450;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"X", "..", "...", ".X..", ".X...", "...X..", ".XX....", ".XXX.X..", "..X.....X", "..X.......", "XX.X.XX.X..", "X.........X.", "X..X....XXX..", "XX.X.XXX......", "..XX.XXX.XXXXXX", "........X.......", "XX......X....X...", ".X..X....X..X....X", "XX..X.....X...X...X", "..X.XX.X..........X.", "..XX..XX...X..X..X.X.", "X...X.XX..X....XX.X..X", "..X..X.X..X........XXX.", "....X............X.XX.X.", ".X.X.X.XXXXXXX..XX.X.....", "X.XXX.......X....X....XX..", "X..X.....XXXX....XXX.X.X..X", "X....XX..X.X.......X...XXX..", "..X......X....X.X...X..XX....", "X.X.X....XX.XX..X.X..X...X....", ".....XXX.X..XX....X..X.XX..X..."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 460746115;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"X", "X.", "...", "X..X", "XXXX.", "...X..", ".XXXXX.", "X.X.....", ".....XX..", ".X.X.X..XX", ".X.XX...XX.", ".XX.X.X.....", "XX.......X...", ".XXX...XX.X..X", "....X....XX...X", ".X.X..X.XX......", "XX.XXX.XXX......X", "...X..XX..X...XX..", ".X...XX....XX.X...X", "..XXX...X..XX.X...XX", "X..XX....X.X....XX..X", "X.....X.X..XX...XX....", "....X..X.X..........XX.", "......XX.XX.XXXX......X.", "X.X...X..X......XX.X..XXX", "X..XX.....XXX....X...XX.X.", ".....X...XX.X......X.X.XX.X", "...X..X....XX..X..XX..X.X...", "XX........X...XXX...X.XX.....", "XX.X..XXXX.......XX........X..", "....X.X.......X.X.XX....X......", "......X..XX.XX.X.X.X.......XX..."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 865786372;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"X", "XX", "X.X", ".X..", "XX.X.", "XXXXXX", "XX.XX.X", "XXXXXXX.", "XXX.XXX..", "XXX.XXXX.X", "X..X.X.X..X", "X.X.XXXXXXXX", "XXX.XX.XXX.X.", "XX.XX....XX..X", "XXXX.XX.XX.X.XX", ".XXXXXXXX.X.XXX.", "XXXXXXXXX.XXXXXXX", ".X.XX....XXXX.XX..", "X.X.XX..XX..XX...XX", ".XXXXXX..XX.X....XXX", "XX.XX.X.XXX.XX.X.XXX.", ".X..XXXX...XXX.XXXXXXX", "XXX.X....XXXXX.XXX..XXX", ".XX.X.X....X.XXXXX.XXXX.", "XXXXXX..XXX.XX.XXX..X.XXX", "XXX.X.XXXX..X...X.XXXXX.XX", "...XX.X.XXXXXXXXXX....X.X..", "XX....XXXXXX.XX..X.X.XXXXX.X", ".XXXXXXXXXX.XXXXX.X.XX.XXX.XX", "..X.XX..X..XXXX..X.XXX..X..X.X", "X.XXX.X.XX.XX..XXXXXX.X.XXXX..X", "..XX.XXX..X.X.XX.XX.XXXX.XX.XXXX", "...XXXX.XXXX.XXXXXX.XX.X...X...XX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 53221257;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {".", "..", "...", "....", ".....", "......", "......X", "........", ".........", "..........", "........X..", "...X....X...", ".......X.....", "..............", ".....X.........", "................", "..............X..", "..................", "....X..X.......X...", "..X.......X....X....", ".......X..........X..", "......................", ".......................", "......X.................", "..X.................X....", ".......................X..", "..X....X....X.......X......", "......X.X..................X", "...............X..X..........", "....XX...........X....X.X...X.", "......X.X......................", "........X.......................", ".X...X...X.........X.............", "....X......X.....X............X..."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 387804303;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"X", "XX", "XXX", "XXXX", "XXXXX", "XXXXX.", ".XXXXXX", "XXXXXXXX", "XXXXXXXX.", "XXXXX..XXX", "XXXXX.XXXXX", "XXXXXXXXXXXX", ".XXXXXXXXX.XX", ".XXXXXXXXXXXXX", "XXXXX..X.XXXXXX", "XXXXXX.X.XXXXXXX", ".XX.XX.XX.XXXXXXX", "XXXXX.XXXXXX.XXXXX", "X.XXXXXXXXXXXXXXXXX", "XX.XXX..XXXX.XXXXXXX", "XXXXXXXXXXXXXXXXXXX.X", "X.X.XXXXX.XXXX.XXXXX.X", "X.XXX.XX.XXXXXXXXX.XXXX", "XXXXXXX.XXXXXXXXXXXX.X.X", "X.XXXXX.XXXXXX.XXXXX..XXX", "XXXX.XXXXXXXXXXXXXXXXXXXX.", "XXXX.X.XXXXXXXXXX.XXXX.XX.X", "XX.XXXXXXXXXXXXXXXXXX.XXXX.X", "X.XXXXX..X.X..XXXXXX.X.XXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXX.XXX.XXXXX.XXXXXXXXXXXX", "XX.XXXXXXXXXXXXX.XXXXXXXXXXXX.XX", "XXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXX.", "XXXXX.X.XX.XXXXXX.X.XXXXXXXXXXX.XX", "XXXXXXXXXXXXXXXXXXXXXX.XXXX.XXX.XXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {".", "..", "...", "....", ".....", "......", ".......", "........", ".........", "..........", "...........", "............", ".............", "..............", "...............", "................", ".................", "..................", "...................", "....................", ".....................", "......................", ".......................", "........................", ".........................", "..........................", "...........................", "............................", ".............................", "..............................", "...............................", "................................", ".................................", "..................................", "...................................", "...................................."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 233646912;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"X", "..", "...", "....", "XX..X", "...X..", "...X...", "..X.X..X", ".X.......", "...X....XX", "...........", "......X..X..", "X..........X.", ".X.....X.X....", ".X...X.X....X..", "X............XX.", "..........X......", "X.................", "...X.............X.", "..X..X..X....X...X..", "....X..........X.....", "...........X.X........", ".......................", "..........XX.........X..", "...XX..X.X.......X.......", "..X.X...X........X........", ".XX..............X....XX..X", "X...X...X........X.....X....", "X.X.................X........", ".X...X.X....X.....X........X..", ".....X...X...X.X...............", ".......X.........X..............", ".......X...XXX....X.X.......X....", "............X.......XX...XX.....X.", "X.......X.X.....X................X.", "..................X.............X...", ".X.................X.....XX.........X"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 640985981;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {".", "X.", "XX.", "XXXX", ".X.X.", ".X.X.X", "X.XXXX.", "..XX.XX.", ".X.X.XX.X", "XX.X..XX..", ".XXX.XX.X..", ".XX.X.X....X", ".X.XXX.XX.XX.", ".XXXXX...XXXX.", "...X.....X.X.XX", "XX..X.X.XXXXX..X", ".X..X.XXXXX.XXX..", "X..X.XX.XXXXX...XX", "...X.XXXXXX.X.X.X..", "XXX.X...XX.XXXX.XXXX", ".X.X...XX.XXXX.....XX", "XXXXXXX.XXX.X.XXX..X.X", "X.XX.....X..X.X..XXXX..", "X.....XX....X.XXX.X..X..", ".X....XXXXX.....XX.XXXX..", ".XX....X.XX.XXX..XX..XXX.X", "X...XX.XX.XX.X..XX..XX..XXX", ".X.XX.XX...XXXX.....X.XXXXX.", "..XXX..XX....X....XX..X..XXX.", "XX.XXXXX....X.X.X..XXX..XXXX..", "X..XX.XX......XX..XXX....X.X.XX", "...XXXX...XXXX.X.....XX....X...X", "X.XXX.XX.XXX.X.X....X.XX.X..XX..X", "XXXXXXXXX......X..XX..X...X.X.XXX.", ".X..X..X..XXX.XX.XXXXX..XX.X...X.XX", "X.X.XXXXXXXX.XXXXXX..X..XX..X.XX...X", "X.....XX.XX..X.XX..X...XX....X....X.X", ".X........X.XX...X.....X.XX..X.XX.XXXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 392018217;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {".", "XX", "XXX", "XX.X", "XX.XX", "XXXXXX", "XXXXXXX", "XXXXX.XX", "XX.XXXXXX", "XXXXXXX..X", "XXXXXXXXXXX", "XXXXXX.XXXXX", "XXXXXXXXXXXXX", "XXXXXXX.XXXX.X", "XXXXX.XX.XXXXXX", "XXXXXXXXXXXX.XXX", ".X.X..XXX.XX.XXXX", "XXXXX.XXX.XXXXXXXX", "XXXXXXXXXXXXX.X.XX.", "XXXXXX..XXX.XX.X.XXX", "XXXXX.XXXXXX.XXX..XX.", "X..XXXXXX.XXXXXX.XXXXX", "XXXX..XXXXX.XXXXXXXX.X.", ".XXXXX..XX...XX.XXXXXX..", "XXXXX.XXXXXXXXXXXXXXXXXXX", "XX.XX.XX..X.XXX..XX.XXXXXX", "XXX.XX.X.XXXX.XXXXXXXXX.XX.", "..X.XXXX.XX.X.XXXXXXXXXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXX...XXX.XXX.XX..XXXXXXXX.X", "XXX.X.XXXXXXX.XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXXXXXXX..XX", "X.XX.XXXXXXXXXXX.XXX.X.XXXXX.XXX.", ".XXXXXXXX.XXXXXXXXXXXXXX.XXXXXXXXX", "XX.XXX.XXXXXX.XXXXX.XXXXXX.XXXXXX.X", "X.XXXXXXXXXXXX..XXXXXXX..XXXXXXXXXXX", "XXXXX.XXXX.XXXXXX.X.XXXXXXX.XX.XXXXXX", "XXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX.XXX", "..XXX.XX.XXXXXXX.XXXXXX.XXXX.XXXXXX.XXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {".", "..", "X..", "....", "...X.", "......", ".......", "X.X.....", ".........", "X.........", "X.......X.X", "...X......XX", "....X...X....", "..X..X..X.....", "..X....XX......", "...X.......X....", "..XX.............", "..X...XX..X.......", "......X............", ".....X..X.XX......X.", "....................X", "..............X.X.....", "X.X........X..XX.......", "...XX.....XX......X.....", ".XX.X.........X.XX.......", "......X.X..X.....X........", ".............X.............", ".................X.XX....XX.", "....X.........X.X.......X.X.X", ".....X......X..X..............", "..........XX.............X.....", "....X.....................X.....", "...........X..XX......X........X.", ".X..................X......XX...X.", ".....X...X.X.....X.XX.X..X..X.....X", "..X........X.........X......X..XXX..", "....X..X.........X............X.....X", ".X.X.......X..X..X..X................X", "..X............X.....XX.X....X.........", "...X........X.X.......XX................"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 721906264;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"X", ".X", "..X", "XXX.", "X.XXX", "..XX..", "X.X.XXX", "XXXX...X", "...XX.XX.", "XXX.XXXXXX", ".XXXXX..XXX", "X.XXXX..X.XX", "X.XXXXXXX..X.", "XX.XX..XXXXXXX", "XX......XX..XXX", ".X.X..X.XX.XXX.X", "XXXXXXXX.X..X.XXX", ".....XXXXXX.XXXX.X", "X.X.XXXX.X..XXXX...", "XX.XXXX..XX.XXXXXXXX", "XXXXXXXX.XX.XX.XXXXXX", "XXXX.X.XXXX.X....XXXXX", "X.....X.XX.X.XX.X.XX.XX", "XX.X..XXXX.X.XXX....XXX.", "XXXXXXX.XXXXXXXXXX..X.XXX", "X..X.X.X..X.X.XX.XXX.X.XX.", "XXX.....XXX...X..X..XXX..X.", "...X.XXXX.XX.XXX.XXXX...XX..", "X..XXX.X.X.X.XXX..X.X..XXXX.X", "XXX.XXXXX.X.XXX.XXX..XXXX.XXXX", "X.XX.XXXXX.X.XXXX...X....X.X.X.", "XXXX........XXXX.XX.XX..X.XXX.XX", "X.X.....XX.XX.XX.X.XXXXX..XXXX.XX", "XXXXXXXX.XXXXXXX.X.XXXX..XX..XX.X.", "XX.XX.XXXX.XXX.X.XXXXX.XXXXXXXXXXX.", "X.XXXXXXX.XX.X.....XXX..X.....XXX.XX", ".XXXXX.X..XXXXX...XX..XXXXXXX...XX..X", ".XXX.XX.XXX..XXXXXXX.XXXX.XXX.XXXX.XXX", "X.XXXX..XXXXX.XXXXXX...X.XXX..X...X..XX", ".XX.XX.XXXXX.XXXX..XXXXXXXXXXX...X.X.XXX", ".XXXXXX.XXXXX..X.XX..XXXXXX..X.X.X.X.X..."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 434413970;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {".", "X.", "...", "X...", "XXX.X", "...XX.", "X..X.X.", "XXX.XX..", "X.X..XX.X", "X.XX.X...X", "X.XX.....X.", ".X.X.X...XX.", "..X.XXXXX..XX", "XXXXXX.XXXX.X.", "X..X..XXX.XX..X", "..XX.XX.X..X.XXX", "XXX..XXX......X..", "XX.XX......X.....X", "..X.X...XX...X..XXX", "X..X.X...X...XXX...X", "....XX..X.X....XX..XX", "X.X....X...X.X.....X..", "..XX.X....X.X..X.XXX.XX", "X.X.X..X..X...XX.X.X..X.", "XX.X.X...X.X..X..X..X.XX.", "X.XX....X.X.XX.X....X..XXX", ".....X.XX..X...XX.X.XX..X.X", "......X.X....X...XXX...X...X", "...X.X.XX...XX..X........X..X", "....XX...XX....XX..X.X..XX..XX", "...XX.XXX...X.XX.....X.......XX", ".XXXX..X.XX..X..XX.....XXX.XX...", ".....XX.......XXXX.XX..XXX.X.XX.X", "XXX.X.XX...X........X.X...X..XX...", ".X.XXXXX.X.....XX.X....XX..X.X.X.X.", "...XXXX...XXX.XXXXX...XX..X.X..XXXXX", "XX..X...X..X..X...X.X.......X..XX....", "X.XXXX..X...X.X..XX.X..X.X....X.....XX", "..XX.X..XXX......XX..X.X.X....X....XXX.", "...XXXX..XXX.X..XX.XXX....X..XXX......X.", ".X.X.XXX...XX..X...X.X.....X.XX..XX..X..X", "..X.......X..X...XXX.X.X..XXX......X...X.X"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 904626746;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {".", "XX", "...", ".X..", "...X.", "X.....", "X.X..XX", "X.XXXXXX", "XXXX.XX..", "X.X.X.XXXX", "..XXXXXX.XX", "XX.X.X.X.X..", "..X.XXXXXX...", "X.XX.X.XX..XX.", "X.XXX.XX.X..XXX", "XXXX.X....X.XXX.", "..X.XX.XXXXX..XX.", "X.XXXXX.XX.XX.X.XX", "XX.X.XX.XX.XXXXXX.X", "X...XXX...XX.X.XXXXX", "XXXX.XXXXX...X..XXX..", "XX.X.X..XXX...X.XXXX..", ".XXX.X.X..X.X.X.XXXX.XX", "XXX..X.X.XX..X..X.X...XX", ".X.XXXX..X.X..X.XX.X..X.X", "X.X.X..X.X..XXXXXX.XX..XXX", "XXX.X........X...XX.XX..X.X", "XX.XXXXXXXXXXX.X.XXX...XX..X", "XXX.X..XX..XX.....XX..X...XX.", ".XXXX....XX....XX....X.XX.XXXX", ".XXXX..XXXXXX..X.XXX...XXXXXXX.", "..X.XXX..X.X.XX..XXXX.XXXX..XXX.", ".XX..XXXXX.X...XXXX.XXXXX..X..XXX", "XX...XX...XXXXX....X.XX.X.XXXXX..X", "X..X.X..X.XXX.XX.XXXX..XX.....X.XX.", "X.X..XXX.X.X.XXXX..XX..XXXX.X.X.X.XX", ".XX.X.X..X.XXXX..XX.X.XXXXXX..XXXX.X.", "..X.XX.XXXX.XXXXXXX.XXXXXXXXX.XXXXX.XX", ".XX.X.XXX.XXXXX.XXXXXXXXX.XXXXXXX.X.XXX", "..XX..X.XXX.XXXXXX..X.XX...X.XX.X.X.XXXX", ".X..X.X...XX.XXXXXX.X.XXXXXX...XXXX.XX..X", ".XX.XX.XXX..XXXXXX...XX.XXXX.....X.XXXXXX.", ".XX.XX.X..X.X..X.XX.X.XXXX..X.XX.XXXXXXXXXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 493101474;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {".", "X.", "...", "....", "...X.", "...X.X", "..X....", "....X...", "......X..", ".X..X.....", "...X.......", "X...........", "...........X.", "....XX...X....", ".X.............", "..............X.", "........X........", "..................", "......X.X..........", "...........X....X...", ".....X..........X....", ".......X...X.....X....", "......X...........X....", ".X.....X......X.........", "....X..X...X....X....X...", ".......X...........X......", "..........X.X....X.........", "...X......X...X...X........X", ".XX...XX.....................", "...X.......X....X...X.........", "..X.X.........X................", ".........X......X...X...........", "................X.X....X.....X...", ".......X.................X........", "..............X..X............X.XX.", ".....X............XX.X.............X", "..X............X................X....", ".X..................X.X..X............", "..X..X...........X......X....XX........", ".............................X.X......XX", "X.............XX.....X................X..", "...XX..........X.X.........X.....XXX......", "X..X.........X..X............X...X.....X.X.", "....X..X..XX..X...X..X.....................X"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 540477249;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {".", "..", "...", "....", "X..X.", "......", "......X", "........", ".........", "........X.", "...........", "............", ".............", ".............X", "....X..........", "................", ".................", "....X.........X...", "............X......", ".X................X.", "..........X..........", "......................", "........X..............", ".X......................", ".................X.......", "X.........................", "....X......................", "............................", ".............................", "X.........................X...", "........X......................", "...............................X", "...........X........X............", ".........X..X........X...........X", "..................X......X....X....", ".............................X......", ".......................X.X..X.......X", "X.......X.............................", "......X................................", "....................X...X...............", "..........................X...........X..", "...X.....................X..XX....XX..X...", "......................................X....", "..........X......X.............X..X.........", "........................X...................."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 326716765;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {".", "..", "X..", "XXXX", ".X.X.", ".XX..X", ".XXXXX.", ".XX.XXX.", "X...X.XX.", "XX...X.XX.", "X.X.XX.X.XX", ".X...XX.XX..", "XXXX.XX..XX.X", "X.XX.XXXX.X.XX", "XX.XXXX..X...XX", "X.X...XX...X..X.", ".X..XXXXX.XXX.XXX", "XX...XXX.XXXX..X.X", "...XXXXXXXXXX.XX.X.", "..X..X.X.X.X.XX...XX", "XXX.XX...X..X.XXXXXX.", ".XX...XX.XX..XX.X.X.XX", "..XX..X.X.X.XX.X.X..XXX", "XX...XX..XXXXXX...XX.XXX", "X...XX.XXX.....XX..X.X..X", ".XX...X..XX...XXX.X..X.XX.", "XX..XX.XX.XX.X..XX...X.X.X.", "X.XXXX...X.XX..XX...X.X.X.X.", ".XXX.XXX..XX.XXXX..XXXX.XX.XX", "X.XXXXXX.XXXXX...X.XX..XXXX.XX", "X.X....XX...XX...XX....XXXXX...", ".XXXXX..XX.X..XXXX...X....X..X.X", "..X..X.X.XXXX.XX.X....X.X..X...X.", ".X.X..X.XXXXX.X.XXX..XX..XXXXXXX..", "XXX.X..XXXX...X.XXXXX.X.XXX.XX...X.", "X..XXXXX..XX.XXXXX.XXX.X...XXXXX.XX.", ".....XXXX.X..XX...X..XX...X..XX.XXX..", ".XX....XXX.X..X.X..X.X.X....X.X.......", "X.X...XXX.X..XXX.X..XX.X.XXX....X.X.X..", "..XX.XXXXX.XXXX........XXX.XX.XXX.X...X.", "XXXXXX...X..X.X.X..XX.X..XXX.......X.X.XX", "X..........X.X...X.X.XXXXXXX.XXX.XXX...XXX", "XXXXXX..XXXXXX.......XXXX..X.XXXX..X..X..XX", "XXXXXXXX.X.XXXX...XX.XXXX..X..X..XX...XXX.X.", ".XXX.X.XXX..XX..XXX.X.X..XXXX..XX...X..XX..X.", "XXXX......XXX.XX.X.XXX.XXXX.X.XXX...X.XX.X...X"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 32952036;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {".", "X.", "...", "....", ".....", "......", ".......", "..X.....", "X........", "..X.......", "...........", "............", ".....X.......", "..............", "..X............", "................", ".............X..X", "..........XX......", "..X....XX..........", "...X.......X........", "..........XX.....X.X.", "....................X.", "XX..X..................", "........................", "..XX........X............", ".....X.......X............", "............X....X..X....X.", "....X........X..X...........", ".............................", "........X..............X...X..", "X....X........X....X......X....", ".............X..................", "...........................X.....", ".......X........................X.", "......X.........X.............X...X", "...XX..X...................X..X.X...", "...................................X.", "...........................X.....X....", ".......X..X......X...X.X..X.X.....X....", ".X.....X..X.....................X.......", "....X.X...X............X.................", "...XX..X............X.......X.............", "...................X..........X............", "..X..X.X...................X.....X....X.....", "X...X..X.........X.....X....X................", ".....................X.............X..........", ".......................X......................."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 676243708;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {"X", "..", "...", "X..X", "XXXX.", "X.X.XX", ".XX.XXX", "X..X...X", "X....X...", "X.XX.XX...", "...X..XXXX.", "XXX.XXXXX.X.", ".....X.X.....", "....X..XXX.X..", "X...X.X.XX.XXX.", ".XXX...X.X....XX", "XX...X..X.XX....X", "...XXXXXX.X..XX..X", ".X.....X.XXX...XXXX", ".XXX....X.XXXX.XXXXX", ".X.XXX..XXX.X...X.X..", "XX.XX.....XXXX.XX.....", "X.X.XX.X.X...X...XX...X", "XX......XXXX.XXX..XX.XX.", "X.XX....XXX.......X.X..XX", ".XXXX.XX..X..XXX.XX.....XX", ".X.XX.XX..X...XX..XX.XXX.XX", "...XXX.XXXX.XXX.X..X.X.X.X..", "...X.XX.X..X...XXX.X.XX.XXXX.", ".....X..XXXX....X.XXX...XXXXXX", "...X..X..XX.X.XXX.X...XX..X...X", "XX....XX.XXX.XXXX.X.X.XXX.XX.X.X", "..XX.X..XX...XXXXX.X....X...XXX.X", ".X.XXXXX.XXXX..X.XXXXX.X.XX....X.X", "XXXX.X.XX....XXX.X...X..X.X..X.XX.X", "X..X..XXXX....X..X.XXXXXX.XX...X..X.", "..XXX.XXX..X..XXXXXXX.X.....X..X.....", "...X.XXXXX.X.X.X..XX..XXXX..XXXXX.XXXX", ".X.X.X..X..XX.XXX.X.X.X.X.X.XXX.XXXXX..", "XX...XX.X...XX.X....X.XXXX.X..XX.X..XXX.", ".X..XXX..X...XX..X...XX..X..X.X.X..X.X...", ".XX.....X.XXXX..............XX.XX.X.X.X..X", "X..X.XX....X....XXX...X..XX...XXX...X..X.X.", "XXXX...X.X........XX..X..X..X.XX..X......XX.", "....X..X..X..XXX.X.XX..XXXXXXX....XXX.XXX....", ".X.X..XX...X.X.X........X.XXXXXXXXXXXX.X..X...", ".XX..X.....XXX.X.XX...XXX.....X..XX....X..X....", "..XX.....XXXXX...X..XX..XXX.XX.XXXXXXX.XXXX.XXXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 754071351;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {".", ".X", "..X", "....", "....X", ".XX...", "X....X.", "........", ".X.X.....", "X.......XX", "...X..XX...", "..X.X.X...X.", "XX...........", "..XXX........X", "...........X...", "XXXX..X.X....X..", "X.X..........XXX.", ".............X..X.", "X..XX...X..X.X..X..", ".......XX.X......X.X", "X.X.XXX..............", "....X.X..X.XX.....X..X", "...X...XX...XX..X..X.X.", ".......X...X....X...XX..", "..X..XXX.XXX..X.......X.X", "...X.XX.XX.X.X..X...X...X.", "XX....XX.XXX...X..X..X.....", "..X.....X....X..X.....X.X...", "..X....X.X.....X...X...X.....", "...X...X......X...X....X..X...", "X....XX..XXX..X.X.X...X.X..XX..", "..XX..............XX.....X..X...", ".....X.X...XXX.X...X.....X....X..", "......XX..X..X...........X.XX.X...", "..........X.X....X.XX.....XXX..X.XX", "..XXX....X.....X.X....X.XX..........", "X..X...X...X..XX.....X.X.X.X.........", "..X.X....X.X.X..X...XX.....X..X....X..", "XX....XX.X....X.X.X.....X..X..X.X...X..", "......X....XX.X..X...XX..X....XX.......X", "..XX.X.X.X..X...X........X..X.X.XX..X.X.X", "X..........X..X..XX.X.X..X.X.X..X....XXX..", ".....X...X.X.XX.X..X..X...X.X...XX......XX.", "XX.X..X.XX..X...X...XX..X..X.X.X......X.....", "..X.......XXXX.......XX..X...X..X........X...", "..X.......XX...X....X..X.X.X.X...XX..X....X.XX", "X...........XXXX........X.X....X..X....X.......", "...X.....X..XXX.X...XXXXX....X..X....X.X.X...XX.", "....X....X...XX.X............X.X.XX.X........X.X."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 893528064;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {".", "..", "...", "....", ".....", "......", ".......", "........", ".........", "..........", "...........", "............", ".............", "..............", "...............", "................", ".................", "..................", "...................", "....................", ".....................", "......................", ".......................", "........................", ".........................", "..........................", "...........................", "............................", ".............................", "..............................", "...............................", "................................", ".................................", "..................................", "...................................", "....................................", ".....................................", "......................................", ".......................................", "........................................", ".........................................", "..........................................", "...........................................", "............................................", ".............................................", "..............................................", "...............................................", "................................................", ".................................................", ".................................................."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 108011382;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {".", "..", "...", "...X", ".....", "......", ".......", "........", "..X......", "..........", "...........", "............", ".........X...", "..............", "...X.......X...", "................", "X................", "....X.............", ".....X..X..........", "......X.............", "..............X......", "................X.....", ".........X.............", "........................", ".......X...........X.....", "........XX................", ".............X.............", "...................X........", "........X....................", "..............................", "...............................", "....X.........X.................", "......X..........................", "..X................X..X...........", ".....................X....X........", "....................................", "...........................X.........", "...........X..........................", ".........X..............X...X.X........", "X..................................X....", "..X...X...........X.....X................", "........X...............................X.", "........X.....X............................", "....X..................X...............XX...", ".............................................", ".........X....................................", "...............................X...........X...", "....X.......................X...................", "....XX.........X..........X....X.........X.......", "...................X........X..................X.."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 373819940;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {".", "X.", "...", ".X..", ".....", "......", ".......", "..X.....", ".........", "..........", "...........", "..........X.", ".....X.......", ".X....X.......", "...........X...", "....X.........X.", ".................", "....X...X......X..", "..........X......X.", "....X...............", "....X.......X........", "........X...X....X....", "....X..X.........X.X...", ".......X................", "..........X.X.........X..", "..XXX.X.XX....X.X.........", ".....................X.....", "XX.....X....................", "X..XX........................", "..........X..............X....", "X.................X....X.......", ".......................X........", ".....X........X.........X....X...", "..X.........X....X......X.........", ".X..................X...XX.........", "......X..............X...X..........", ".X..X...XX.X...X...X.........X.X.....", "..X....X................X..X.....X....", "X..........X.........X.......X....X....", "..............X...................X.....", "...............X.....X........X........X.", "..X..X.............X...X...X.X.......X....", "X....X..................................X..", "................X.............X...X.........", "......X...X......................X...........", "..X........................................X.X", "...........X...X..X..........X..X..........X.X.", "......................................X.........", ".X......................X........................", "..................X..............X............X..."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 871768074;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {".", "..", "...", "...X", ".....", ".X....", ".......", "XX......", ".........", "..XX.....X", ".X.....X...", ".X.......XX.", ".......X.X.X.", ".....X.X......", "..........XX...", "................", "....X........X...", "...............XX.", ".X....X.X.....X....", "..XX......X...X.....", ".....X.......X.......", "...X.X..X..........X.X", "...........X...X.XX....", ".........X..XX..X....X..", "X.......................X", "...............X..........", "..X........X....X....X...X.", ".X....X....X.............X..", "X.X........X..X.X.....X..XX..", "X....X.X.X........XXX....X....", ".................X.....X.....X.", "........................X.......", ".....X.X..........X.......X.....X", "X.................................", "......XX....X..............X....XX.", ".....X.XX.X.........................", "...X..X..X.............X..X..........", "..........X......X.XX..X..............", "..........XX.....X...X........X.X...X.X", ".X...X.....X..........X.X...............", "...X.......X.......XX..........X.........", ".......X.X........X.....X...X.X..XX.......", ".......X...X...X............X..............", "...XX...X.........XX...XXX..X......XX.......", "..X.......X..X....X...............X...X......", "XXX..............XX.......X..............X....", ".X.............X.......X...X...X.X.............", "...............X.X....X.X.......................", "..X.........X......XX.....X....................X.", "........XX.....X...X.......X.X.........X...X.X...."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 353963159;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {"X", "..", "...", "X...", "..X.X", "X.....", ".......", ".....X.X", "......X..", "..X.X....X", "X....X.X...", "......X.....", ".....X....X..", "....X......X.X", "..............X", "...X.....XX...XX", "............X...X", "..........XX.X....", ".....X......X.....X", "....................", "......X.....X........", "X.......X.............", ".........X...X.........", "..X.......X......X......", ".....X.X..X..X...X.X..X..", ".X.....X.X.X..........XX..", ".X.......X.....X..X..XX....", "................XXX.X.......", ".X.X..X...X...X....X.......X.", "X...........XXXX.....X.X......", "XX...X..............X...X..X..X", "...........X.X...XX..X......X...", "....X.........X.XX........XX....X", ".....X.X....X...............X..X..", "...X.X....X..X..X........X.........", "..........X...XX....XX....X.X.X.X...", "......X..X.........X...........X..X.X", "..X.....X.X......XX.......X.X.......X.", "...X.......X....XX...X..X....X....XX...", "X.X.....X.....X.X..X.X.....XXX.....X....", "......X......X...X.........X.........X..X", "..X.....X...X.X...X...X...X.....X.........", "........X..XX..XX..X.........XXX.X...X.X...", "X...XX.................X.X........X....X.X..", ".X.......X........X...X...X....X....X........", ".XX...X....X..........X....XX..XXX..XX...X...X", "..XXX.........X.XX....X......X..XX...X.....XX..", "..XX..X.X......X....X...X......X.X...X.XX..X.XX.", "..XX..XX..........XX...X.X....XXXX..X....X..X....", ".....XX.................X...XX....X.X....X........"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 308568894;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {".", "XX", ".X.", "....", "X.X..", "....X.", ".X.....", "...X....", "...X.....", "..X..XX..X", "X.X.....X..", "X......XXX.X", "X.X.....XX...", "....X..X..XX..", "..X........X.X.", ".X.X..X.........", "...XXXX...X.X..X.", ".X..X...........XX", "..X...X...X...X....", "........X.X.........", "X.....X....X....X....", ".........X.X...X.XX...", ".X....X....XXXX....XXXX", "X..............XX.X.X...", "X.X.XX.X.X...X...........", ".X...X......X.............", "..X....X.X.....X..X........", ".........X.XX.XX...X........", "X.............X...XX.XX.X....", "..X.X......X....X....X........", "X...X.........X.....X........X.", "X...XX...XX.X.....X.....X..XX...", ".X..X........X.XXX...X.X....X....", ".X...X..X.......X...X.....X......X", ".....X...X.....XX...XX...X..X......", ".X..X...X.XX...X..XXXX.........X...X", "................X...XX............X.X", ".......X.XX...X.......X.....XX....X.X.", "..X.....X....X...X.X..X......X.X.X.....", "..X....X.X.....X.X.XXXX..X..X.....XX...X", "........X.......X..X.......X...X.......XX", "....XX.X..XX.X.X.XX..X....X...X....X.X.XX.", ".X.......X....X.X.X.X..X................X..", "....X..XX...X........XXX...X...........X.XX.", "..XXX.X.X.......X.X...XX.X..X...XXXX....X....", "......X.....X.....X...X......X.X.....X....X..X", "..................X.X.XX.X.....X........X...XXX", "...........X..........X.XXX..XX.....X.X.........", ".......X.......X..............X..X.X..XX.........", "..X.........X...X......XX.XXX.....X..X..X........."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 338882155;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {".", "..", "X..", "....", ".X.X.", "XXXX..", "......X", "..X.X...", "..X......", ".X....X..X", "X....X.....", "X.....X.X...", "..XX..X......", ".X.X..XX....X.", "......XX....X..", "..X.....XX...X..", "XX...............", "X..X.....X..X.X...", "......X.X..X.....X.", "XX......X.X.....X..X", ".....X....X.XXX..X..X", "..XX..XXX.X..X.......X", "..X....XX..X.....X.....", ".X..X.....X...X..X.XXXXX", "..XXX.....X..X...XX.X....", "X.X.X..X......X....X.....X", "..X.X..X.XX...XX.......X.X.", "X.........XXX.XXX...X.X..X..", "..X.XXXX.X.X..X.....X......X.", ".......X..XX.....X..XXXX.XXX.X", ".X...XXX...X.X....X......XX.XXX", "...X....X.X.XX...X.....XXX..XX..", "X..X.XX..X.X...XX.X..X.X.X.X..XX.", "..X......XX..X.XXX......XX.X..X.XX", "..X...XX......X.X.X.XXX.....X..X...", "XX.XX.....X.X........X....X.X.XXXX..", "...X......X.X.XX.XX..........X......X", "X........XX.X........X.X.....X...XX...", ".X....X........X..X.XX..X...XXX...X..X.", "...X......XXX.XXXX.X..XX..X..XXX.X..X...", "....X.X...XX......X..X.XX...XX..........X", ".....X.XX.....X.X.....X........XX.........", ".....XX..X.X..XX.X.XX...X........X.XX.....X", "..XX..X...X.X...X..X.....X...X.X....X......X", "X..X..XX......XXX.X....X..X.X.......X..X.....", ".X.XX..XX....X.XX...XXX..X.XX.X..........X....", "......X.X..XX...X..XXXXX......X.......X.....X..", ".X..X.X..X.X.X.X....X..X.X..X..XX..X....X.X..X..", ".X..........X.XX.......X...X.XX....X...XX........", "X.X.....X........X.X...X..X..X.X.X..X.X...X......."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 906840936;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> board = {".", ".X", "X..", "....", "XX.XX", "..XXX.", "...XXX.", "X..X...X", "X..XXX...", "X.....X.X.", "XX.X......X", "....XXX.X.X.", "....X....XX..", ".XXXX.X...XX..", "....X..X...X.XX", ".X.X.XX.XX......", "X.........XX...X.", "..X...XXXX....X..X", ".X.X.X.X..X....X...", "X.XX.XXX.X..........", "XX.X.X..XXXX...X.XX..", "..X.X.XX..............", "..X.....XX.XX......XX..", "...X.X..X...X.X.X...X..X", ".X.X......X.X..X.X.X.X..X", "X....X.XXX..XX...X..XXX...", ".X.X.XXXXX..X.X...XX..X..X.", ".....X..X....X..X....XX.....", ".......XXX.X..X.......X...X.X", "..XXXX.XX...X....X...........X", "XXX.X...XX.XXXXX.X....X...X.XX.", ".....X.X.XX..X.XX...X..XX.XX....", "...X.X......X.X..X.X..XXX.X.X.X..", ".X...XX..X.X.....XX..X....X..X..XX", ".X..X..X.X.XX.X.....X..XXX.X...X.XX", ".....XXXX..X.X....X....X.XX...XXXXX.", "X.X.XX..X....X.X.....XX..X...X.XXXX..", ".XX.X.XX..X......X..XXX.XXX.X..XXX....", "X..XX....X.XXXXXX..XXXX.X.X...X.X...XX.", "..XXX..X.XX..X.........X....X....X..X...", "X...X..X.....X......XXX..X..X....X.X.X...", ".X.XXX.X...X.XXX.X.......XX.....X.X.X.XXXX", "...X...X...X....X...X.X.XX..X..X...XXX.....", "X.X.X...X...X..........X.X..XXX..XX...X.X..X", "X..X.......XX...XX...X....X.....X..X....X...X", "...X.XXX.X....X..........X.X.X....X.......XX..", "X.XX..XXX.X.XX.....XXX...X....X.....X.X.X.X....", "....X...XX..XXX...X......X.XXX.XXXXX............", "XX.X...XX.X.XX....XXXX...XXX.XX........X....X....", "..XX...X.....X......X..X....X.X..........XXXX.X.X."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8539660;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {"X", "..", "..X", "....", ".....", "XX.X..", ".X....X", ".....X.X", "..XX..XXX", ".XX.XX.X..", "XXX.XX.X.XX", "XXXX..X.X..X", "X.....X.X...X", "X..X...X.....X", "...XXXXXX.X..XX", "X.......X.X.X.X.", "X..XXXXX...X...XX", "XXX..XX.X....X..X.", "X.X.XX.XX..XXXXX...", "X.X..X..X.XX.X......", "XX.X.X...X.X..X.X..XX", "XXXX..X.X.X..X.X.....X", "....XX.XX..X...X.......", "........XX...XX..X..X...", "X.XXX.XX.XX.X..X..XXX..XX", "X..XX..X..X.....XX........", "X.XXX..X...XXX...XX.X..X.XX", "XXX..X..X.....X..X...XXXX.XX", "..X.X.XXX..XX..X.....XXX....X", ".XXX.XXXX.......XXX.X.X...X..X", "XX..XX.X...X.......XXX.X..X....", ".XX...XX.XX..X....X...XXXXX...X.", "X.X..XXX.X.X...X.XXX..XXX...X....", "X..XX....XX......X...XX...X.XXX..X", "XXXXX..X....X........X..XX.XXX....X", "XX.XXX..XX.XX.....X...X...X..XXXXX.X", "X..X....XXXX.......X...XX.......XXX..", ".X.........X.XXX...X....X.XXX..X.XX...", ".XX....XX.X..X....XX...X.XXX......X..XX", "X..XX.X..XXX..XXXX.XX.......XX.X.....XX.", "..X..X..XX......XX.XXXXX..X.XXXX.X.....XX", ".XX...XX......XXXX..XX...X..XX.XX.XXX.XXX.", "...XX...X...X.X....XXX...X.X.X......XX....X", "...XX..XXXX..XXX......X...X.XX..XX..X..XXX..", "...XX.X..XXXX..XX.......XX..X..XXX...X..X....", "XXXX...XX....XX..XX..X...XXX.....X..X........X", "...XXX...X.X...X.X.XX.X....X.X....X......XX..XX", "..X.XX...X......XXX....XXX.X..X.X....X..XX.XXXXX", "..X.X.X.X.X.X....X....X..X.XXXXX...XX...X..XXX.XX", "....X.X...XX..X..X..XX..XX.X...X.X..XXXX..XX..XXXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 742325241;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> board = {".", "..", ".X.", ".XX.", "XXX..", "X.X...", "X.XXXX.", "..X..X.X", "....X.XXX", "..X.X..X.X", "..XX..XX.XX", ".X.XX.X.XX..", "..X.....X..XX", "X........X.X..", ".XXX.X.X...X...", ".XX..XX...XX.XXX", ".XXX.XX..X.X.XXXX", "XXXX..X.....X..X.X", "....XXX..X...X..XX.", "X..X.XXX..XXX...XX..", "X.X.X..X.X.X...X.XXXX", ".X....XX..XX..XX.X.XXX", "...XXXX.X..X.X.XX...XXX", ".X.XX..XXX.XXX.XXXXXXX..", ".....X.XXXX....X.........", "XXX.X.XXX.X.XXXXXX..X..XX.", "X.XX......XX...X..X.X.X...X", "...X...X....X.X.XXXXX.X...XX", "XX.X..X.XX..X.XXXXX........XX", "XX.....XX..XXX......X.X.XX.X.X", "X.XX..XXXX.......X...X...XXX.XX", ".X..XXXX.X.X.XX.X.XXX.XXXX...X.X", "XX..XXXX....X.XX...X..XX.X..XX...", ".X..X...X....X..XX.X...XXX.X..X.XX", "X.XX..XXXX..X...XX...XX.XXXXX...X.X", "X.XX.X...........X....XX.XX..XXX...X", "X..X.X.........X.X......X..X..XX..X..", "X.XXXX.X.XX.X..X....XX...X.XX...X.X...", "X....X..X.XX....XX.XX.XX....XX..XXXXX.X", "..X...XX.X......X...XX.X....XX..XX...X..", "....X.....XXX.X.XXXX.X.X.XX...........XXX", "X.X.X.XX....X....X...X..XXX....XX.X.X.X...", ".X.X..X.XX..XX..X........X.X.X.X......XXX..", ".XX....X...XXX.X.XXX...X..XXX........X......", ".X..X..XX..XXX.X.....XX.X...XX...X.XX.X.X...X", ".X.X.X..XX....X.X..XX.XX.XXX..X......X.X..X.XX", "..X.XX.XX..XX.....XXXX..X..XXXXX..X..X..XX....X", ".XX.X.XXX.X.......XXXX.X....X...XXX.X.X...X.XXXX", ".XX.X.XX.X...X..XXXX..XX.XX....X.XX..X..X..X...XX", "...X..X.X...XXX.X...X..XX.......X...X..X.XX.X.X.X."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 221259548;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {"X", "..", "X.X", "XX.X", "XX.XX", "....X.", "....X.X", "X.XXXXXX", "....X.X.X", "XX..X.X.X.", "X.X....X.XX", ".X....XX.X..", ".XX.X.XX..X..", ".X..X....XXXXX", "X..XXXXX.XX.X.X", "X...X...XXX.X.XX", ".X..X.XXX.X.X.XXX", ".X.X.XXX..XXXX.X.X", ".X..XXX....XXX.XXX.", "XX.XX..XX..XX...XX..", "..X.X...XXXXX....X.XX", ".X.X.XX..XXX.XXXXX.X..", "X..X.X...XX.XXX.X..XX.X", ".XXXX..XX.X.XX.......XX.", "..XX....X.XX.X....XX.XX.X", "X.XX..XXX.X.XXXXXXX.X..XX.", "..XX.XX.XX..X.....XXX.X.X.X", ".X.X..X.......XX..X..X..XX..", "X.......XX...X.........X.X..X", "..X.XXX.XX.......XX......X..X.", ".XXXXXX.XXXXX..X.XX...XXXX.XX..", "X..XX..X..XX.....XX.XXXX.X..XXXX", "...X..X....XX.X.....X..XX..XXXXXX", "X..X.XXX..XX.XX.X...XX.X.X.X.X.X..", "XX.X..XX.XXXX..XXXXX...X..XX..XXXXX", ".XXX..XXX...XXXXXX.XXX..X.X.X..X...X", "XX...XXXXX..X.XXXXXX.X.....X.XXX.X..X", "XXX.X...X.XXXX...X...X...XX.XX..XXXX.X", "XX...X.XX.XXX...X.XXXXXXX..X..X.......X", "..XXXXXXXXXX.....X..XXX.XX...X...XX.XX.X", "X.XX.XX.XX.X.X..XXX.XXX.X..X.....XXXXX.XX", ".XXXX..X...X..XX...XX..X.X.X...X.XX..XX...", "XX.XXX.....X.XXXXXXX...X.XXX.X...XXX..X.X..", "...XXXX.X.XX...X.XX.XX.X..XXXX.X.X..X..X.X..", "XXX..XX.XXXXX....X..X.XXXX..XXX..X.XXXXXXX.X.", ".X.X...X..XXXXXXXX.XX.X..X..XX..X..XXX.X......", "XX.XXX...XXXXX.X..X...XXXXX.XXXXXX..X.X.XXXXXX.", "XX..XXXX.X.X.XX..X.......XX......X......XXX..XX.", "..XX....XX....X.XXXXX.X....X.XX..X.XX..X.XX.XXXXX", ".XXX.X..X...XXX...X..X.XX.XXXX...XXX......XXX....X"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 254642171;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {"X", "XX", "XXX", "X..X", "XX...", "XXX.XX", "...XXXX", "...XX.X.", "XXX..XX.X", "XXXX.XXX.X", ".XXXXX..XX.", ".X..XXX.XX..", "X.X.XX.X..X.X", "..X.XX.X..X.XX", "X..X.X.XX....X.", "...X.X...XX.X.XX", "..XXXX..XX.XX.XX.", "X...XXX..X.XX.X.XX", "X.XX.X...X.XX.XXXX.", "X.XX...XXXXX.XXXXXX.", "X.XXX..XXXXXXX..X.XXX", "XXX.X....XXX.XXXX.X.XX", ".X.X...XXXX..X.X.XX..XX", "..X.XX.X.X...XX.XXX.X...", "XX.X.XXX..XXXXXX.XXX.XXXX", "X..X..X.XXX..X..X.XX.XXXXX", ".XXX..X...X....XX.X....X.XX", "X.XXXXXX..XXXXXXX.XXXXXXX.X.", ".X.XX.X.X..XX.XX..X.XXXX...XX", "XXXX.XXXX.....XX.XXX.XXXX.XXX.", "XX.XXXX.XX.XXXXXX.X.....X..X.XX", "X..XXX..XX.X.X..X.....XXXX...XXX", ".XX.X..X..XXXX.X.....XX....XX..X.", "XXX...XXXX..XXXXXXXXX.XXX.X......X", "...X...XXX...X.XXXX.XXXX..XX.XXXXXX", "X...X.X.X.XX...X.XXX.X...XXX...X...X", ".X.XXX.XXXXXX.X..XX.....X.X...XX..X.X", "X....X.XXX...X.X....X.XXXX.X.X..XX..X.", ".X.XXX.X....XX....XX..X.X.X.X.XXX.XXX..", ".XXXX.XX.XXX...XX.X..X..X...X..X....X..X", ".XX.XXX..XXXX.X...XX.X.X...XXXX..X.X.X.X.", "....X.X....XX.X..XX..X..XXXX.....XX...XXXX", "...XX.XXX...XXXX.XX..XXXXX..XXXX.XX.XXXXXXX", ".X....X.X...X....XXXX.XXX.XX.XXX.XX....XXXX.", "XXXX...X.XXXX.XXXX..X.X..X.......X...XXXX.XXX", "..XX...X...X.XXXX.X.XX.XX..XX.XXX.XXX..XX.XXXX", "X.X...XXXXXXXXX.X.X.XXX..........XXXXX.X...XX..", ".XX.XX......XXXXXX.XX.XXXXX.X...X..XX.XX.X.XX.X.", "X..X.XX.X.X.XX..X.X..XXX.XX.X.XX.XX...XX.XX....XX", "X.XXXX.XX...XXX..XXXX.X..XX..X.X.X..XX..XXXXXXXX.X"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8853139;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {"X", "XX", "X..", "X.XX", "XXX.X", "..XXXX", "X.XX.X.", "XXX.X..X", ".XXXXX.X.", "X..XX.XX..", "XXXX...X..X", "..XX.XX...XX", "XX.XX..XX.XXX", ".X..XXX.XXX.XX", "X..XX..XX.X.X.X", "X..X..XXXXXX.XXX", "X.XXX....XX..XX..", ".XXX...X.XXXX.XXXX", "X..X.X.....XXXX.X.X", "X..XX...XX.XXXXXX.X.", "XX...XXX..X.XXXXX.XXX", "..X.XXXXXX.XX.X.XXX.XX", "XXXXXX..XX.....X.X.XXXX", ".XX.XXX.XXX...XX..X.XXXX", "XXXXX.XX....XX.X.XX.XXXX.", "XXX..XX.XX.XXXXXXX...XXXX.", "XX.XXXX..X.X...XXX...XX.XXX", "X.XXXXX...X....X..X.X.X.X.X.", ".XXXXXXX.X.XX.XXXX....XX..XX.", "XXXX.XX.X..XX.X..XXX...XXXXXX.", "XXXX.X.XX.XX.XX..XX.....XX.X..X", ".X.XX.X.XXXXXX.XXXX....X.X....XX", "X...X.XXXX..X.X..XXX.XXX.X.X.X.X.", "XX.X.XX.XXXXXX.XXX.XXX.XXXX...X...", ".X...XXX.X.X..XXXXX..XXXXX...XXXXX.", "XXXXXXX.XXX....X.XXXXXX.XXXX..X..X.X", ".X..X..XXXXXXXX...XXX...X.XX.X.XXX.XX", ".X.X.XX...XX.XX..XXX....X..XX.X.XX.X..", "..X..XXXXXXX.XXXX.XX..XXX..XXX.XXXXX.XX", "XX.X.XX...X...XXXX.XXXXXXXX...XX...XX.XX", "XXXXXX.X..XXX.XXXX..X.X.XXX......X..XXX.X", "X.XXXXXXXX...XXX.XXXX..XXXXXXXX.XXXXX.XXX.", "XXX.XXXXXXXX.XXXXXX...X.XX.XX.XXX..X..X.XX.", ".X.XX.X.X.XXXXXXXX.X.X.XXX...X...XXXX.XX....", ".X.X..XX.XXXXX.XX.XXXXX.XX..XX.XXX.XXX.XX.XX.", ".XXXX.XX..XXX.XXX....XX.XXXX..X.XXX.XXX.XX....", "X..XX..XX..XX....X.X.X.X.XXXXXXX..X.XXX.XXXXX.X", ".X.XX..XX.X.XXXXX.X..XXX.XX.XX.X...XX..X...X.XXX", "XXX.X.XXX.XXXXXX.XX.X...X.XX.XXXX..XXX.XX.XXXXXXX", "..XX.XXX.X...XX.X...X.X.XXXXX.XX.XXXXXXXX..XXX.XX."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 208433838;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> board = {".", "X.", "XXX", "..XX", "..XXX", "XXX.X.", "X...XX.", "X..XXXXX", ".XXXXXXX.", "..XXXXX..X", "XXXXXXXXXX.", "X..X.XXX..X.", "XXXXXXXXX.XX.", "XX.X.X..XX.XX.", "...X.XX...X.X.X", ".XX.X..XXX.X.X.X", "XXXX...X..X..XX.X", "XX.XX....X..XXXXXX", "XX..X..XXXXX.X..X.X", ".XX.X.XX.XXX.XX.XX..", "XXXXX.X..XXXXXXXXXX.X", "X.XXXXX.XXXXXXXXXXXX.X", "X...XXXX..X.XX.X.X.X..X", "XX..XX.X..XXXXX.X.XXX.X.", "...XXXX.X...XXXXX.X.XX..X", "XX.X.X..XXX.X.XXX.X.X.XXXX", "XX.X...XXXXXX...XXXX.XX.X.X", "XX.XXXXXX...XXXXXXXX...XXXXX", ".X.XXX.X.XXXX.XXX..XXXXXXX..X", "X.XX..XXX.XXXX.XX.XXXXX.XXXXX.", ".XXX.X..XX.XXX.XXXXXXXXXX.XXX.X", ".X..XXXX..XXXXX.XXXX.X.X.X....X.", "XXXXXXX..XXXX.XX.XXXXXXX..X.XX..X", ".XXX.XXXXXX.X.XXX.XXX.XXXX.X..XX.X", "XXXXX...XXX.XXXX.X..X.X.X.XX.X...XX", "XXXXX.X.XXXXXXXX.XXX.XXXX.X.XX.X.XXX", ".XX.....XXX.XX..XXX.X..XX...XXX.X...X", "X.XX.X..XXXXX.X.XXX.XX..XXXX..X.XXXXX.", "XXXXXXXXX.X.XXX.XXX.XX..XXXX..XXX..XX.X", "XXXXX...XXX.XXXX.XX.X...X...XXXXX.XXXXXX", "XXXX..X.XXXX.XXXX...XXX.XX.X.X.X..XXX.XXX", "XXXX.XXX...X..X..X.XX..XX.X.XXXXXX..XXXXX.", ".XXXXXXXXXX..X.XX....XXX.XX..XXXX..X.X.XXXX", "XXX.XX.X.XXXXX..XXX..XXX.XX.XX..XX.X.XX.XXXX", "..X...XX.......XXX.XXXX.X.XXXXX..X.XXXXXXX.XX", "XXXXXX.XXXX.X.X..X.X.XXX...X.XXX.XXX.XXXXXX..X", ".XXXX..XXX..XXXX.XXX.XXX.XXXXX.XX.XXX.X.XXXX...", ".XXXXXX.XXXX...XXXXXXX...XX..XXXX..XXXX.XX.XX.XX", "XXX.XXXX.XXX....XXXXXX.X.XXX.X.XX.XXXXXX...X...X.", ".XX...XXXX.X.X..X.X..X.XX.X.X.XXXXXXX.XXXXXX.XXXXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 714446672;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {"X", "X.", "XXX", ".X.X", "XXXXX", "XXXXXX", "..XXX.X", ".X.XXXX.", "XXXX.XXXX", ".X...XXXXX", ".X.X.X.XXXX", ".X..X.XX..X.", "XXX..XXXX.XXX", ".XX...XX.X.XXX", "XXXXXX.XXXX.XX.", "X..XX.X.XXXX.XX.", ".XXXXXXXXX.X.XXXX", "X.XXXXX...X.XXXX.X", "XX.XX.X.XXXXX.XXXXX", "XXXXXX.XX.XXX..X.XXX", "XX.XXX.X..XX.XXXXX..X", "X.XX.XXXXX.XXXXXXXXXXX", ".XX.XXXXXXXXX.XXXXXX.X.", "X.X...XXXXXX..XXX..XXX.X", "..XXXX.XXXXX..XXXXXXXXX.X", "XXXXXXXXXXXXXXXXXXX.X.XXXX", "...X..XXXXX.XXXXXXXXXXXX..X", "XXXX.XXXX...XX..XXXX..XXXX.X", "..XX.X.XXXXX.X...XXXXX..X..XX", "XXX.XXX.XX.XX.X.XXXXXXX....XXX", "XX.XXXXX.XX.XXXXXXXXXXXXX.XXXX.", "XXXXX...XXXXXX.X.XXX.XXXXX.X.XX.", "X.XXXXX..XXX.X.X.XX..X.XX.XXXXXX.", ".XXXX.XXXXXX.XXXXXXXXXXXXX.XXXXXXX", "XXX...XXXXX.XXXX.XXXXXXX.XXX.XXXXXX", "XXX..X.X.XX.XXXX.XXXXXXXX..XXXXXXXXX", ".XXXXXXXXXXX.X.XX..XXX.XXXX..XXXXX...", "XX.XXXXXXXXXXX.XX..X.XXXXX...XXXXXXXX.", "XX.XXXX.XXX.XXXX.X.XXXXXXXXXXXXXXXXXXXX", "XXXX.X.XXXXXX.XXXXX..XXX.XX..XXXXX..XXXX", "X.X.X...XX..XXXXXX..XXXX..XX.X..XXXXXX..X", "X.X.XX..XX.XXX..X.XXXXX..X.XX.XXXX..XXXX..", "X.XXX.XX..X.XX.XXXXXX.XXXXX.XX.XXXXX.XXX.XX", "XX..X..XXX.XXX.XXXX.XX.XXXX.X..XX.XXX.XXXX..", "XXXX.XX.XXX..X.XXXXXXXXX....X.X.XXXX.X.X.XX.X", ".X...XXX.XXXX..XX.XX...X.XXXXXXXXXX.X..XXXX.XX", "XXXXXXXX.X.X.XXXXXXXXXXXXX...X.....X.XXXX..XXXX", "XXXXXXX.XXXXX.X.XXXXXXXXXXX.XXXXX.XX.XXX.XXX..XX", "X.XXXXXXXX.....X.X.X.XX.XXX.X.XXXX.XXXXX.X.X..XXX", "XX.XXXXX..XXXXXXX.XXX.XX.XX.X...XXXXXX.XXXXXX.XXXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 159652387;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {"X", "XX", "..X", ".XXX", "X.XXX", "XXXXX.", "XXXXXXX", "XXXX...X", ".XX.XXX.X", ".XX..XXXXX", "..XX.XXXXXX", "XX.X..XXXX.X", "XXX.XXX.XXXXX", "X.XXXX.XXXX.XX", "XXXXXXXXXXXXXXX", "XXXX.XXX..XXXXXX", "XX.XXXXX.X.XXXX..", "X...X.X.X.X.XXXX.X", "XXXXX.XXX.XXXXXXXX.", "X.XX.XX.XX.XXXXX.XXX", "X.X...XX.XXX.XXX.XXXX", "XXXX.X.X.XXXXXX.XXX..X", "XXXXX.XX.XXXX..XX..X.XX", ".XXXXXXXXX.X..XXXXX..XX.", "..X.XXXXX.XXXXXXX.XXXXXXX", ".XXXXXXX.XXXX..XXX..XXXXXX", "X..X.XXXXXX.XX..XXXXXXX.XXX", "XXXXXXXXXXXXXXXXX..XXXXXX.XX", "XX.XXXXXXXXX.XXXXXXXXXXX.XXXX", "X.XXXX.XXXXX...XX...XX..XXXXXX", "XX..XX.XXXX.XXX.XX.XXXXXX.XXXXX", "XX.XXXXX.XXX..XXX.XX.X.XX.X.X..X", "X...XXXX.XX.XX...X..XXX.XXXX.XXX.", "XXXXX.XXXXXXXXXXXXXXXXXXXXX..XX.XX", "XXXXXX..XXXXX.XXXXXXX..X.XX.XXXXXXX", "XXXXX.XX..XXXXXXXXX.XXXXXXXXXX.X.XXX", ".XXXX..XXXXXX.XXXXXXX.XX.XXX.XX.XXX.X", "XX.XX..X.XXX.XXXX.X..XXXXXXXXXXXXX.XXX", "..XXXX.XXXXX.X.X.XXXX.XXXXXX.XXXXXX..XX", ".X..X.XXXX.XX...XXX.XXXXXXXXXX.XX.XXXXXX", "X..XXXX.XX.XXX.XXXXXXXX.XXXXXX..XXXXXXXXX", ".XX.XXXX.XXX.XXXXXXXXXXX..XXXXXXXX..XXXXXX", "XX.X.XXX.XXXX..X.X.X..X.XXXXX..XXXX.....XXX", "XXXXXXXX.X.XXXX.XXXXXX..XXX.XX.XXXXXXX.XXXX.", ".XXXXXX..XXXXX.XX.X.XX.XX.X.X.XXXX.X.....XX.X", "XXXX...XXXX...X....X....XXXXXXXXX.XXXXX.XXXX.X", "X.XXXXXXXXXXXXXX.XXX.X..XX.XXX.XX.XXXXXXXXXX..X", "XXXXX..XXXX...X.X.XXXXXXXXXXXXX..XXX.XXXXXXXX..X", ".XXXXXXX.XX.X...XX.XX..X.XXXX.XX...XXXXXXXXXXXX..", "XXXXXX.XXXXX..XXXXXXXXXXX.X.XXX..XXXXXX.X.XX.X..XX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 724404028;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {".", "XX", "..X", "XXXX", ".XX.X", "X..XX.", "X.XXXXX", ".XXXXX.X", "XXXXXXXX.", ".XXXXXXXX.", ".XXX.XXX...", "XXXXXX.XXXXX", "...XXXXXXX..X", "XX.XXXXXXXXX.X", "XXXXXXXXXXX.XXX", "XXXXXXXXX..XXXXX", "XXXX.XX.XX..XXXX.", "XX.XXX.XXXXXXXXXXX", "XXX.XXXXXXXXXXXXXXX", "XXXXX.XXXXXXXX.XXXXX", "XX.XXX.XX.XXXXXXXX.X.", "XX.XXXX.X..XXXX.XXX..X", "XX..XXX..XXXXXXXXXXXXXX", "XX..XXXXXX.XX.X.X.XXXX..", "X.XXX.XX.X.XXXXX.XXX.XX.X", "XXXXXXXXXX.XXX.X.XXXXXXXX.", ".XXXXXXX.XX.XXXX.XX.XX..XXX", "XXXXXXXXXXXXX.XXXXXXXXXXXX.X", "XXXXXXX.XXXXXXXXX.XXX.XXXXXXX", "XXX.XXXXXX..XXX.X..XXX.XX....X", "XXX.XXXXXXXXXX.XXXXXX.XXXXXXXXX", "XX.XXX..XXXX.XXXXXXXX.XXX.XX.X.X", "XXXXX.XXX.XXXXXXX.XXX.XXXX..XXXXX", "XXX..XXX.XXXXXXX..XXXX..XXXXXX.XXX", "X.XXX.XXXXXXX.XXXXX.XXXX...XXXXXXXX", "XXXXXXXXXXX..XXX.X.XX.XXXXXXXXXXX.XX", ".X..XXX.XXX.XXXXX..XXX.X.XXXXXXXXX.XX", ".XXXXXXXXXXXXXXXXXXX.XX.XXXXXXX.XXX..X", "XXX.X..XXXXXXXXXXXXXXXXX.XX.XXXX.XXXXXX", "XXXXXX.X.XXXXXXXXXXXXX.X.XXXXX.XXXXX.XXX", "XXX.XXXXXXXX..X.XXXXXXXXXXXXX.X.XXX..X.XX", ".XX.XXXXXX.XXXXXXXXXX..XXXXXXXXX.X..XX.XXX", "X..XX.XXXXXX.XXXXXXXX.XXXXXX.X.XXXXXXXX.XXX", "XXXX.XXXXX.X.XXXX.X..XXXX.XXXXXXXX..XXXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXX.XXXXXXXXXX", "XXXXXXXXXXXX.XXXXXXXXXXXXXXX.X.XXXXXXXXXXXXXXX", "XXXXX.XXX..XXX.XXXXXXXX.XXX.X...X...XXXXXXXXX.X", "XX...XXXXXXXXXXXXXXXXXXXXXXXXXXX.XX..X.XXXXXX.XX", "XXXXXXXXXXXX.XXXX.XXXXXXX.XXX.XXXXX.XXXXXX...XXXX", "XXXXXXXXXXXXX.XX.XXXX.XXXXXXXXXXXXX.XXXXXXX.XX.XX."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 170061120;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> board = {"X", "XX", "X..", "XXXX", ".X.XX", ".XXXXX", "XXXXXXX", "XXXX.X.X", "XXXXXXXXX", "XXXXXXXXX.", "X.XXXXXXXXX", "XXX.XXXX.XXX", "XXXXXXX.XX.XX", "XXXXXX.XX..XXX", "XXXXXXXXX.XXXXX", "XXXXX.XXXXXXX.XX", "XXXXXXX.XXXXXX.X.", "XX.XX.XXXXXXXXXXXX", "XXXXXXXX.XXXXXXXXX.", "XXXXXXXXXXXXXXX.XXXX", ".XX.XXXXXXXXXXXXXX.XX", "XXXX.X.XXXXXXXXX.XXXX.", "X.XX.XXXXXXXXXXXXXXXXXX", "XXXXXXXXX.XX..XXXXXX.XXX", "X.XXXX.XXXXXX.XXXXXXXXXXX", "XXXXXX...XXXX.X.XXXX.XXXXX", "..XX.XXXXX.XXXXXXXXXXX.XXXX", "XXXX.X.X.XXXXXXXXX.XXXXXXXXX", "XXXXXXXXXXXXXXXXX.XXXXXX.XX.X", "XXXXX.XXXXXXXXX.X..X.XXXXXXXX.", "XXXXXXXXX.XXX.XXXXXXXXXXX.XXX.X", "XXXX.X.X.X..XXXXXXXXX.XXX.XXXXXX", "XXXXXXXX.XXX.XX.XXXXXXX.X.X..XXXX", "XX.XXX.XXXXXXX..XXXX..XXXXXX.XXXXX", ".XXXXXXXXXXXXXXXXXX.XXXXXXXXXX.XXXX", "XXX.X.XXXXXXXXXXXXXXXXXXXXXXXXX.XXXX", "XXXX.XXXXX.X.XXXX.XXX.XXXXXXX.XXXXXXX", "..XXX.XX.XXXXXXXXXXXXXX.XXXXXXXXXXXXXX", "XXXX.XXXXXXXXX.XXXXXXXX.XXXXXXXXXXXXXXX", "XXXXXXXX.X.XXXXXXXX...X.X..XXXXXXX.XX.XX", "XXXXXX.XXXXXX.X.XXX.X..X.X.XXXXXXX.XXXXXX", "XXXX...XXX.XXXX.XXXXXX.XXXXX.X..X.XX.XXXX.", ".XXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXX.XXXX.XXXXXXXXXXXXXXXXX.XXXX.XX.XXXXXXXX", "XXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX", "XX.XXXXX.XXXXXXXXX..XXXXX.XXXXXXXXX.XX.XXXXXX.", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXX.XXX.XXXX", "XXXXXXXXXXXX.XXXXXXXX....X..XX..XXXX..XXXXXXXX.X", "XXXXXXX.X..X.XXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX", ".X.XXXXXXXXXXX.XXX.XX.XXXXXXXXXXXXXXXX.XXXX.XXXXXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14580;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> board = {"X", "XX", "XXX", "XXXX", "XXXXX", "XXXXXX", ".XX.XXX", "XXXXXXXX", "XXXXXXXXX", "X.XXXXXXXX", "XXX.X.XXXXX", "XXXXXXXXXXXX", "XXXXXXXXXXXXX", "X.XXXXX.XXXXXX", "XXXX.XXXXXXXXXX", "X.XXXXX.XXXXXXXX", "XXXXXXXXXX.XXXXXX", "XXXX.XXXXXXXX.XXXX", ".XX.XXXXXXXXXXXX.XX", "XXXXXXXXXXXXXX.XXXXX", "XX.X.XXXXXXXXXXXXXXXX", "X.XXXXXXXXXXXXX.XXXXXX", "XXXXXX.XXXXXXXXXXXXXXXX", ".XXXXXX.XXXXXXXXXXXXXX.X", "XXXXXXXXXXXXXXX.XXXX.X.XX", "XXX.XXXX.XXXXXXXXXXX.XXXXX", "XXXX.XXXXXXXXXX..XXXXXXXXXX", "XXXXXXXXXXXX.XXXXXXXXXX.XXXX", "XXXXXXXXXXXXXXXXXXXXXXXXX.XXX", "XXX.XXXXX.XXXXXXXXXXXXXXXXXXXX", "X.X..XXX.XXX.XXXX.XXXXXXXXXXXXX", "XXXXXXXXXX.XXXXXXXXXXXXXXXXXX.XX", "XXXXX...X.XXXXXXXXXXXX..XXXXXXXX.", "XX.X.XXXXXXXX..XXXX.XXXXXXXXXX..XX", "X.XXXXXXXXXXXXXXXXX.XX..XXXXXX.XXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXX", "XXXXX.XXXX.XXX.XXXXX...XXXXXXXXXXXXXX", "X.XXXXXXXXXXXXX.X.XXXXXXXXXX.XXXXXXX.X", "XXXXX.XXX.XXXXX.XXXXXXXXXX.XXXXXXXXXXXX", "XXXXX.XXXXX..XXXXXXXXXXXXXXXXXXXX.XXXXXX", "XX.X.XXXXXXXXX..XXXXXXXXXXXXXXXXXXXX.XXXX", "XXXXXX.XXXX.XXXX.X.XXXXXXXXX.XXXXXXXXXXXXX", "XXXXXX.XXXX.XXXXXX.XXX.XXXXXXXX.XXXXXXXXXXX", "XXXXXXXXXX.X.XXXXXXXXXXX.XXXXXXX.XXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXX..XXXXXXXXX.XXXXXXXXXXXXXX.XXXXXXXXX.", "XXXXXXXXXXXX..XXXXXXXXXXXXXXXXXX.XXXXXXXX.XXXXX", "XXXXXXXXXXXXXXXXX..XXXXXXXXXXXXX.X.XXXXXXXXXXX.X", "XXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXX.XXXXXX.X", ".XXXXXXX..X..XXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> board = {"X", "XX", "XXX", "XXXX", ".XXXX", "XXXXXX", "XXXXXXX", "XXXXXXXX", "XXXXX.XXX", "XXXXXXX.XX", "XXXXXXXXXX.", "XXXX.XXX.XXX", "XXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXXX.XXXXXXX", "XXXX.XXXXX.X.XXX", "XXXX.XXXXXXXXXXXX", "XXXXXXXXXX.X.XXX.X", "XXXXXXXX.XX.XXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXX.XXXX.XX.XXX", "XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXX", "X.XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX.XXXXXXXXXXXXX.XXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXX", "XXXXXXXXXX.XX.XXXXXXXXXXXXXXXXXX", ".XXX..XXXXXX.XXXXXXXXXXXXX.XXXXXX", "XXXXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXX.XXXXXXXXXXXX.XXXXXXXXXXXXXXX", "XX.XXX.XXXXXXXXXXXX.XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXX.XXXXXXXXXXXXX.XXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXX.XXXXXXXXXXXXXXXXXXX.XXXXXXXXXX", "XXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "XX.XXXX.X.XXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX", ".X.XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXX.XXXXXXX.XXXXXXXXXXXXX", "X.XXXXXXXXXXXXXXX.XXXXXXXXXXXXXX.XX.XXXXXXXXXXXXX", "XXXXXXX.XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXX.XXXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
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
    vector<string> board = {"X", "XX", "XXX", "XXXX", "XXXXX", "XXXXXX", "XXXXXXX", "XXXXXXXX", "XXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXXX", "XXXXXXXXXXXX", "XXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> board = {".", "..", "...", ".X..", ".....", "X.....", "...X...", "......XX", "X.X...XX."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7265222;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> board = {".", "..", "XXX", "..X.", ".X..X", "XXXX..", "..X.X.X", "..X.XX.."};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> board = {".", "..", "...", "....", ".....", "......", ".......", "........"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 261547992;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> board = {".", "..", "...", "....", ".....", "......", ".......", "........", ".........", "..........", "...........", "............", ".............", "..............", "...............", "................"};
    HexagonPuzzle* pObj = new HexagonPuzzle();
    clock_t start = clock();
    int result = pObj->theCount(board);
    clock_t end = clock();
    delete pObj;
    int expected = 376605894;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22867079&rd=14424&pm=11303
********************************************************************************
#include <vector>  
#include <list>  
#include <map>  
#include <set>  
#include <deque>  
#include <queue>  
#include <stack>  
#include <bitset>  
#include <algorithm>  
#include <functional>  
#include <numeric>  
#include <utility>  
#include <complex>  
#include <sstream>  
#include <iostream>  
#include <iomanip>  
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
#include <cstring>  
#include <ctime>  
#include <cassert>  
using namespace std; 
 
#define ME(s,a) memset((s),(a),sizeof((s))) 
#define MM(s) memset((s),-1,sizeof((s))) 
#define MCP(s,a) memcpy((s), (a), sizeof(s)) 
#define LL long long 
#define PII pair<int, int> 
#define mkp(a,b) make_pair((a),(b)) 
#define x first 
#define y second 
 
int n; 
 
int f[55][55][55][55]; 
bool v[55][55]; 
 
const int p[8]={0,0,1,1,1,-1,-1,-1}; 
const int q[8]={1,-1,1,0,-1,1,0,-1}; 
 
void add(int X1,int Y1,int X2,int Y2,int X3,int Y3){ 
  f[X1][Y1][X2][Y2]=f[X2][Y2][X1][Y1]=1; 
  f[X1][Y1][X3][Y3]=f[X3][Y3][X1][Y1]=1; 
  f[X3][Y3][X2][Y2]=f[X2][Y2][X3][Y3]=1; 
} 
int cnt; 
 
void dfs(int x,int y){ 
  cnt++;v[x][y]=1; 
  for (int i=0;i<8;i++){ 
    int t1=x+q[i],t2=y+p[i]; 
    if (f[x][y][t1][t2]&&!v[t1][t2]) 
      dfs(t1,t2); 
  } 
  return; 
} 
 
class HexagonPuzzle{ 
public: 
  int theCount(vector <string> a){ 
    memset(f,0,sizeof(f)); 
    n=a.size(); 
    for (int i=0;i<n;i++) 
      for (int j=0;j<=i;j++) 
        if (a[i][j]=='.'){ 
          if (i+1<n) 
            if (a[i+1][j]=='.'&&a[i+1][j+1]=='.') 
              add(i,j,i+1,j,i+1,j+1); 
          if (i+1<n&&j+1<=i) 
            if (a[i+1][j+1]=='.'&&a[i][j+1]=='.') 
              add(i,j,i,j+1,i+1,j+1); 
        } 
    memset(v,0,sizeof(v)); 
    long long ret=1; 
    for (int i=0;i<n;i++) 
      for (int j=0;j<=i;j++) 
        if (a[i][j]=='.'&&!v[i][j]){ 
          cnt=0; 
          dfs(i,j); 
          for (int k=cnt;k>2;k--) 
            ret=(ret*(long long)(k))%1000000007ll; 
        } 
    return (int)(ret%1000000007ll); 
     
  } 
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/