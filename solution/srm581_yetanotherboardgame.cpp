/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12585
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

class YetAnotherBoardGame {
public:
    int minimumMoves(vector<string> board);
};

int YetAnotherBoardGame::minimumMoves(vector<string> board) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"WWWWWWWWWW", "WWWWWWWWWW", "WWWWWWWWWW", "WWWWWWWWWW", "WWWWWWWWWW", "WWWWWWWWWW", "WWWWWWWWWW", "WWWWWWWWWW", "WWWWWWWWWW", "WWWWWWWWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"WWWWWWWWWWW", "WWWWWWWWWWW", "WWWWWWWWWWW", "WWWWWWWWWWW", "WWWWWWWWWWW", "WWWWWWWWWWW", "WWWWWWWWWWW", "WWWWWWWWWWW", "WWWWWWWWWWW", "WWWWWWWWWWW", "WWWWWWWWWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"WWWWWWWWWWWW", "WWWWWWWWWWWW", "WWWWWWWWWWWW", "WWWWWWWWWWWW", "WWWWWWWWWWWW", "WWWWWWWWWWWW", "WWWWWWWWWWWW", "WWWWWWWWWWWW", "WWWWWWWWWWWW", "WWWWWWWWWWWW", "WWWWWWWWWWWW", "WWWWWWWWWWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"BWBWBWBWBWBW", "WBWBWBWBWBWB", "BWBWBWBWBWBW", "WBWBWBWBWBWB", "BWBWBWBWBWBW", "WBWBWBWBWBWB", "BWBWBWBWBWBW", "WBWBWBWBWBWB", "BWBWBWBWBWBW", "WBWBWBWBWBWB", "BWBWBWBWBWBW", "WBWBWBWBWBWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"BBBBBBBBBBBW", "BBBBBBBBBBBW", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "WBBBBWWBBWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"BBBBBBBBBBWBB", "BBBBBBBBBBWWW", "BBBBBBBBBBBBB", "BBBBBBBBBBBWB", "BBBBBBBBBBWWW", "BBBBBBBBBBBBB", "BBBBBBBBBBBBB", "BBBBBBBBBWWWB", "BBBBBBBBBBBBB", "BBBBBBBBBBBBW", "BBBBBBBBBBBBB", "BBBBBBBBBBBWB", "WBBBBWWBBWWBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"BBBBBBBBB", "BBWBBBBBB", "BWWWBBBBB", "BBWBBBWBB", "BBBBBWBWB", "BBBBBBWBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"BBW", "WWW", "BWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"WBW", "BBW", "WBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"BBBB", "WBWB", "BBBB", "BBBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"WWWWWBW", "WBWBWBW", "BBWBBWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"W"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"B"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"WW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"WBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"WB", "WB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"BWWBW", "BBBWW", "BWWBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"BBBBB", "BBBBB", "BBBBB", "BBBBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"W", "B", "B"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"BBWWWBWB", "BWWBBWWW", "BWBWWWBW", "WWBWWBBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"BBWWBWBWWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"WBWBWWWWWBB", "BBWWWBWWBWW", "WBBWWWWWBWW", "BBBBWWBWWBB", "WWBWWWWWBWW", "WBWWWBWBWWB", "BBBWWBBBWBB", "BBWWWBWWWBB", "BBBBWWWWBWW", "BBBWBBWBWBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"BWWWBWBW", "BBBBBWBW", "BBWBWWWB", "BWBBWBBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"W", "W", "B", "W", "B", "B", "B", "W", "B", "B", "W"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"BWWWBBWWWWWWW", "WWBWBWWBWWBWB", "WWBWBWWBBWWWW", "WWWWWWBWBBWBB", "BWBBWWWBWWBWW", "WWWBWBWBBWBBB", "WBWBBWBWWWBBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"BWWBBWBB", "WBWBBBBW", "BWWWWBWW", "BBBWWBBW", "WWBBBWWB", "WBBWBWBB", "BBBWBWBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"WBBBBWWBB", "WWWWBBWWW", "WWBBWWWBW", "WBWBBBBWB", "BBBBWWBBB", "WWBBBBWWB", "WBBBWWBWW", "WBWWWWBWW", "BWWBWBWBW", "BBBWWBWBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"WWBWWB", "BBBBWB", "BWWWWW", "BWBWBW", "BWWWWW", "BWBWWB", "WBBWWB", "BWBWBB", "WBBBWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"WWWB", "WBWW", "WWBW", "WWWB", "WWWW", "BWBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"B", "W", "B", "W", "B"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"WBBBBWBWWW", "WBBWBWWWWB", "WWBWBWBBWB", "WWBWWWWWBB", "WBBBWBWWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"WWWWBWBWBWW", "BWWWWBWWWWB", "BBBWWWWWBBB", "WBBBWWBWWWB", "BWBBBWBWBWW", "WBBBBBBWWWB", "WBBWWWBBWWB", "WBBBWWBWBWW", "WBBBWWBBWWW", "WBBBBBBBBWW", "BBBBWBWBWWB", "BBWBWWWBWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"WBWWBWBBWBBBW", "WBBWBBBWBWBWW", "BBWBWBWBBBWWW", "WBWBWWBBWBBWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"BW", "WW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"W", "W", "B", "B", "W", "B", "B", "W", "W", "W"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"BBB", "WBB", "BWW", "WBW", "BWW", "BWB", "BWB", "BWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"WBBWWBBWBWWWW", "BBBWBBWBWBWWW", "BWWBBBWWWWBWB", "WBBBBBBBBWWBB", "WBBWWBBWBBWWB", "BWBBBBBBWWBBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"WWWBBWB", "WBBBWBB", "WWBBWBW", "BWBWWBB", "BBWBBBW", "WBWWWWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"WBWWB", "WWBBW", "WBBWW", "BBBWW", "BBWWW", "WBWBB", "BBBBW", "BWBWB", "BWBBW", "BWBWB", "WWWWW", "BBWBW", "BWWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"WWWBWWWBWWBWB", "WWWWWWWWWWWWW", "BBWWWWBWBWBWB", "BWWWWWWBWWWBW", "BWBBBBWBWWWWW", "WWBWBWBWBWBBW", "BBBBBBBBWBBBB", "BBBWWWWBWWBBB", "WBBBBWBWBWWWW", "WWBWBBWBWWWBB", "BWBWBBWWBBBWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"WBBBBBWWWW", "BBBBWBWWWB", "BWWWWBWWWB", "WBBWBBWWBB", "WBWBWBBBBB", "WBWWWBBBWB", "WBWWBBBWWW", "WBBBBWBWBW", "WWWBBBBBBW", "WWWBBBWWBB", "WBWWBBWBBW", "BWBWWWWWWW", "WBBWWBWWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"WWWBBW", "WBBWBW", "BBWBWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"WBBBBBBWW", "BWBBBWWWB", "WWWBBWWWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"BWWBWWBWBW", "BWWWBBBBBW", "BWBBBBWBWW", "BBWWBBBBWB", "BBBBWBBBBB", "WBBBWWWWWB", "WBBBBBBWWB", "BBWBWWWWBW", "BBWBBWBWBB", "WWWWBWBWBW", "WWBBWWWBWW", "WWWBBWWBWB", "WWBWBWWWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"WBBBBBBWB", "WWWWBBBBW", "WBWBBWWBB", "WWBWWWWWB", "WBBWWWBBW", "BWBBBBBBB", "BBWBWWBWW", "WBBBWBWWB", "BBWBBBWWW", "BBWBBWWBW", "WBBBBBWBB", "WWBBWWBBB", "BWWBBWBBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"WBWWBB", "BBWBWB", "BWBBBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"BBWBBWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {"WWBWWBBBW", "WBBWBBBBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"BBWB", "BBWW", "BBBB", "BBBB", "WWBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"BBBWBBBWB", "WBBBWWBBW", "WWBWWBWWW", "WWWBWBWWW", "WBBWBBWBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
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
    vector<string> board = {"BBWBWWWWBWWW", "BWWWWWBBBWBB", "BBWWWWBBWWBW", "BWBBBWBBWWWB", "BWWBWBBBWBBB", "BWWWWWBBWWBW", "BWBWBWWBWBBW", "WBWWWWBWBWBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"WBWBW", "BWWWB", "WWWWW", "WBBBB", "WBWBB", "BBBBB", "BBWBB", "BBWBB", "WWBBB", "BWBBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {"B", "B", "B", "B", "W", "W", "W", "W"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {"BWW", "WWW", "BWB", "BBB", "WWW", "BBB", "BBW", "WWW", "WWB", "BWB", "WWW", "BBB", "BWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {"WBBWWBWBWBBBB", "WBWWWWWBWBWBW", "WBWWWWWWBWWWB", "BBBBBBBWWBWBW", "WWBWBWBWBBBBW", "WBBBWBBWWWWBW", "WBBBBBBBBBWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {"WWW", "BBB", "BBW", "BBB", "BWB", "WBW", "BBB", "BWB", "WWB", "BBB", "WBB", "BBW", "WBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {"WBW", "BWW", "BWB", "WWW", "WWW", "WWB", "BWB", "WWW", "WBW", "WBW", "BWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"BWB", "WBW", "WWB", "WBW", "WBW", "WBW", "WWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {"WWBBBWBWBWBWW", "WWWBWBWWWBWWW", "BBWBBBBBWBWBW", "BBBWBWBWWWBBW", "WBWWWBBBWWWWW", "BWBBBBWWWWWBB", "BBBWWWWBBBWWW", "BBBBBWWWBWWWB", "BBWBBBWWBBWBW", "WWWBWWBBBBWBW", "BWWBBWWBWBBWB", "WBWWBWBBWWBWW", "BWWWBBBWWBBBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {"BBBWBBWBBWBBB", "BWBBBWBBBBWBW", "BBWBBWWBBWWBW", "BBBWBBBBBBWBB", "WWWWWWBWWWBBB", "WBWWWBBBBBWBB", "BWBWWBWWWBBBW", "BWBBBBWBWBWWW", "WWBWWBBBBWBWB", "WBBBBBWBWBWWB", "BBWWWBBBBWBBW", "WBBWWBWBBBBBW", "BWBWWBBWWBWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {"WWBWBBBWBBWWB", "BBWWWWWBWWWWW", "WBWBWWBBWWWBW", "WBWBBWWBBBBBW", "WWWBWBWWBBBBB", "BWWBWBWWBBWBB", "WBBBBWBBBBWBW", "BWBWBBBBBWWBW", "WBBBBWWBWBBBW", "BWWWBWWWWWBWB", "WBWBBBWWBWWBW", "WBBWWBWBBWWWW", "WWWWWWWBBWWBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> board = {"BBBBWWWWWWBWW", "WWBWWWWWWWBWB", "BBBBWWBBWWBBW", "WBWWBWBBWWWBW", "BWBBWBBWBWWBB", "BBBWWBWBBWWBW", "WWBWWBBWBBWBW", "WBWWWWBBBWBBB", "BBBWBWBWWWBWB", "BBWBWWBWWWBWW", "BWBBBBBBWWBBB", "BWBBBWBBWBBWB", "WWBBBBWBWBBWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {"WBBBWBWWBWWBB", "WWBBWBBWBBBBB", "WWBBBBWBBWBBW", "WWBBWWBWWWBWW", "WBWWWBBWBBWWB", "BWBBWBWWBBBBW", "WWBBWWBWBWBBB", "BBWWBBWWBBBBB", "BBBWBWWBBWBWW", "WWWBWWBWWBBWW", "BWBBBBWBBBWWB", "BBWBWWBBBWBBW", "BBBBWBBBBBBWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> board = {"WWBBBBBWBWWWW", "WBBWWWBWWBWWB", "BWBBWBWWWWWBB", "BBWWBWWWWBBBB", "BWBBBBBWWWWWW", "WBWWWBBWWWBWW", "BWWWBBBWWBWWW", "WWWWBBBWBBBBB", "BBWBBWBWWBBWB", "BBBBWBWWBBBBB", "WWWWBWWWBBBWW", "WWBWWBWBBWWBB", "WWBWWBWBBWWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {"WBBBBBWBWWWWB", "BBWWWWWBBBWWW", "BWWBWBBBBBWBB", "WWBBWBBBWBBWB", "BWBWWBWBWWWBB", "WWBBWBWBWWWBB", "BWWWBWWWWBBWW", "WBWBBBBBBWBBB", "WBBWWWBBWBBBW", "BBWWWWWBWBBBB", "BBWWWBWBBBBWB", "BBBBWBBWBBBWW", "WBWWWBBBBBBWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {"WBWWBBBWWWWBB", "BBWBWWWWBWWBB", "BWWBWBWBWBWWW", "BWBWBWWBWBBWW", "WWBBBBWBBBBBB", "WBBWWBWBBBWWB", "BBWBWWBWWBBBB", "BWWBBBBWBBBBW", "BWBWWWBWBBWBB", "WWWWBBWBWWWWB", "WBBBBWWWBBBBW", "WBWBBBWBBBWBW", "WWBWBWWWBWWWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {"BBWWBBBBBWWBB", "WWBBBBWWWBWBB", "WWWWBWWWBWWWB", "WBBWWWBBWWWWB", "WWBWBWBBBWWBB", "BBBBBWBBBWWWB", "BBWBWWWBWWWWW", "WWWBWBBBWBBBB", "BWWBBBBBBBBBB", "BWBBWWBBBWWWB", "BWWBBBBBBWWBW", "WWWBWWWWWWWWW", "BWWBBWBBWWWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> board = {"WWBBWWWBBBBWW", "WWWWBWBBWBBWB", "BWBWWBBBBWWWW", "WBWWWBBBBWBBB", "WBBWWBWWBBBWW", "BBWBWBBWBWWBB", "WWWBWWWWWWBWW", "WWBWBBWWWWWBB", "BBBWBWBWBBWBW", "WWWBWBWWWWWWB", "WWBWWBWBWWBWB", "WWWBWBWWWBWBW", "BWWBWWBWBBBWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {"BBWBBBWWBBWWW", "WBBBBWBBWWBBW", "BWWBBWBWWWWBW", "BWWWWWBWBWBWW", "BWBBWBBWBBBWW", "BBWWWWBWBWBBW", "BWWWBBWWBBBBW", "WWWBBBBWBBWBB", "BWBBBBWWWBWBW", "WBBWBWWBBWWBB", "BBBBBBWWBWWWW", "BWBWWBWBBBBBW", "WBWBWBBBWWWWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {"BWBWWBWWBWBBW", "WWWWBBBBWBWBB", "WBBBBBWBBWBWW", "WBWWWBWWBWBBW", "WBWWWWBBBBBWW", "BBBBWBBBWWBWB", "WWBWWBWBBBWWW", "WBWWWWBWBBBWB", "WBWBBWBWWWWBW", "WWBBWBBWBWWBB", "WBWWWWBBWWWBB", "BBBBBBWWWBBBB", "BBBBWBWBWBBWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {"WWBBBWBWBWWWB", "WWWBWBWBBBWWW", "BWWBBWBWBBBBB", "BWBBWBWWWWWBB", "BWWWBBBWWWWBB", "WBWBBWBWBWWBW", "WBBBWBBBWBWWW", "WBWWBBBBBBBWW", "WWWBBWWBBWWWB", "BBBWBWWWBWBWB", "WBBBBWBBWWWWW", "BWWBWWBWBWBWW", "WBBBBBWWWBWBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> board = {"BBWWBBWBBWBWB", "BWWBWBWBBBWWW", "WWBWBBWBWWBBB", "BWBBBBBBBWWBB", "BBBWBBBWWWWBW", "WBBBBBBWWWWWW", "BBBBBWBWWWWWW", "BWWBWBBBBWBBB", "BBWBWWWWWWBBW", "WWWWWBWWBBWWB", "WWBBBWWWBBBWW", "BWBBBWBBWBWWW", "WWBBBBBWBBBBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> board = {"WWWWWBBWWWBWW", "WBBWWWWWWBWBB", "WWBWWBBWBWBBW", "WWBWBWBWBBBWW", "WBWWWWBWWWWWW", "BBBWWBBBWWBBW", "WWWWWBWBWWWBW", "WBWBWBBWWBWBW", "WWWBWWBWWBWBW", "BBWBBBBWBBWWW", "WWWWBBWWBBBBW", "BWBWBBWWWBWBW", "WBWBWBBBWWWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> board = {"BWWWWWBWBWBWB", "WWWBWBBBBWBWW", "BWBBWBBWWWBWW", "WWBWWBWWBBWWW", "WBBWWBBBWBWBW", "WWBWBBBWWBWWW", "BBWBBWWBBBWBW", "WBBBWBWBWWWWW", "BWWBWWBBBBWWB", "WWWWBBBBWBWBW", "WWWBWBBBBWBBW", "WBBBBWBBWBWWB", "WBBBBBWWBWBBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> board = {"BBBBBWBBWBBWB", "WBWBWBBBBBWBB", "BBWWWWWBWWWWW", "BWBBWBWBWBWBB", "WWWBBBWBBWBBW", "WWWBWBBBBBWWB", "BWWBBWBWBBWWB", "WBBWWBBBBBWWB", "BWBWWWBWBWWWB", "BWBWBWWWBBWWB", "WWBWBBBBWBWWW", "WBWBWBBWWBBWW", "WBWWWWWWBBWBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> board = {"WWWBWWWWBBBBW", "WBWWBWBBBWWWB", "BWBBWBBBWWBBB", "WWWWBBWWWWBBW", "BWBWWWBWBWWWB", "WBBWWWBWBBBWW", "WBWBBBWBWBWBW", "WWBWBBBBBWBBB", "BBBBBWWWWWBWW", "BWBWWBWBWBWWB", "WBWBWBBWWBWWW", "WBWWBBWBBBBWW", "BBBBWWWBBWWWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> board = {"BBBBBBWWWWWWW", "BWWBBBBBWBBWB", "BWBBBWBBWWBWW", "WWBWWBWWWWBWW", "BWBBBBWBWBBBW", "BBBBWWWWBBBBB", "WWBWWBWBWBWWB", "WWWWWWBWWBBBB", "BBBBWWWBBBWWB", "BBWBWWBBBBWBB", "WBWWWBBWWWBBW", "WWBWWWBBBBWWB", "WBWWBBBBWWWWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> board = {"WBBWWWWBBBWWB", "BBBBBBWBBWWBB", "WBWWWWBBBWBBB", "WBBWWWBBBWBBB", "WWBBBWBWWWBWB", "WWBWWBBBBBWBB", "BWBWWWBWBWBWW", "BBBBBBWWBWWWW", "BWWWBWBWWBBWW", "WBWWWWBWWWWBW", "BWBWBBWWBWWBW", "BBWBWWBWWBWWW", "WWBWBWBBWBBWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> board = {"WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "BBBBBBBBBBBBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> board = {"BBBBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> board = {"WBWBWBWBBWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> board = {"WBWWW", "WWBBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> board = {"WBBWWWWBWBW", "WWBBWBBBBWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> board = {"WWWBB", "BBBBW", "WBBBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> board = {"WWBBWBBBBWB", "WWBWWBWWWWW", "BBBWBBWBBBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> board = {"BWWW", "WBWW", "WBWB", "WWBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> board = {"BBBWWBBWW", "BWWBBWWBW", "BBBWWBWBB", "WBBWBBWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> board = {"B", "W", "B", "W", "W"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> board = {"BW", "WW", "WW", "WW", "BB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> board = {"BWB", "WBB", "BBB", "WWB", "WBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> board = {"WBBBB", "BWWBB", "BWWBW", "BBBBB", "WWBWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> board = {"WBWBWBW", "WBBBWBW", "WBBWWWW", "WWBBWBW", "WWWBWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> board = {"BBBBBBBB", "BWBBWBWB", "BBWBWWWW", "WBWBBWWB", "WWWWBWWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> board = {"BBWBBWWBW", "BWWBWBBWW", "BBBWBWBBW", "WWBWWWBBB", "BWBBWBBBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> board = {"WBWBBBBWBBB", "WWWWBBBWBWB", "WBWWBBBWBWB", "BBWBWWWBBWW", "BBWBBWBBBWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> board = {"BWBBWBWWWBWBB", "BBWWWBBBWWBWB", "WBBWBWWWWWWWB", "WWWWWBBWWWBBW", "WWWBBWWBBWWBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> board = {"BWBWW", "WBWBW", "BBBBW", "BBBBW", "WWBBB", "BBWBB", "BBBBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> board = {"WWWBWBWBBBB", "BWBBWBWWWBW", "BWBWBWWWWWW", "BWWWBWBBWBB", "WWWBBWWWWWW", "WBWWBBBBWWB", "WBBBBWWBWBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> board = {"WWBWW", "BWBBW", "BBWBB", "BBBWB", "WBWBB", "WWBWB", "WBBWB", "BBBWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> board = {"BBBWWWBBWBB", "WWBBBWWBWWB", "BWBWWWBWBWW", "BBBBBWWBBBB", "BBWWWBWWBWB", "BWWWWWWBBWB", "WWBWBBWBWWB", "BWBBWWBBBWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> board = {"WBBW", "BBBB", "WBWW", "BBWW", "BBBB", "WBBB", "BWWW", "WBWB", "BWBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> board = {"WBWBB", "WWWWW", "WBWBB", "WBWBB", "BBBWB", "BWBBB", "WWBWB", "BBWWW", "WBWBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> board = {"WWBWBWWWB", "BWWWWBWBB", "WWBBBWWBB", "BWBBBBBBW", "BBWWBBBWW", "BWBBWBBWW", "WBWBWBBWB", "BWWWWBWBW", "BBWWWBWWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> board = {"BWWWBBWWBWB", "WWWWBWWBBBB", "BWBWBWWBWBB", "BWWBBBWBBBB", "BBBWBBWBBBW", "WBBBBBBWWWB", "WBBBBWBBBWB", "BBBBWBWBBBW", "WWBWBBBWBWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> board = {"B", "B", "B", "W", "W", "W", "W", "B", "B", "W", "W"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> board = {"BB", "WB", "WB", "WB", "BB", "WB", "WW", "BB", "BB", "WB", "BB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> board = {"WBW", "WWB", "WBW", "WWB", "BWB", "WBB", "BBW", "BBW", "BBB", "BBB", "WWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> board = {"WBBWW", "WWBBW", "WWWWB", "WBBBW", "WWWWB", "BBBWB", "BWWWW", "BWBWW", "WBBBW", "WWWBB", "BBWWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> board = {"BBWBWWW", "BWBBBWW", "BWWWBBB", "BBBWBBW", "BBWWWWW", "BBWWWWB", "WBBWBBW", "WBBWBBB", "BBBBWBW", "WBBBWWW", "BWWWWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> board = {"WWWBWWBB", "BWBBWBWW", "WBWWBBBB", "BBBWBBWW", "WBWWWWBB", "BWBBBWBW", "WBWBWWWW", "BBBWWWWB", "WWBWWWBB", "WBWBWBWB", "WBBWBWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> board = {"BWBWBBBWB", "BWWWBWBBB", "WBBWWWWBB", "BWBBWWWWW", "BWWBBWBBB", "BWWBWBWWW", "WWBBWBWBB", "WWBBWBBBB", "BBBWBBWWW", "BBWWBWWBW", "WBWWBWWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> board = {"WBBBWWBWBWW", "WWBWBBBBBWW", "BWBBBWWWWWB", "WWBWWBWWWWW", "WWBBWWBBWWB", "WBBBBBBBBWB", "WBBBWBWWWWB", "WBBBWBBWWBW", "BBWBBWBBBBW", "WWWBWBWWWBW", "WBBBBWBBBWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> board = {"BBBBBWBWWWWWW", "BBBWBBWBWBWWB", "WWWBBBBBWBBBB", "WBBWWBWWWBWWW", "BBBWWBBBBBWBB", "BBBBBWWBBBBWW", "WWWWBWBBBWBWW", "WBWWWWWBWWBWB", "WWWBWBBBWWBWB", "BBBBBBWWWWBBW", "WWBWWBBBWWWWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> board = {"WWWBW", "BWWWB", "WWBWW", "WBWWW", "WBWBW", "BBWBB", "WWBWW", "WBWBW", "BWWBW", "WWBWB", "WBWWW", "WBBWW", "WBWBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> board = {"WBBBWBWWBWB", "BWBBWWBWWBB", "BWWWWBBBBBW", "BBBWWWWWWBB", "WWBBWBBWWWB", "BBBBBBWWBBW", "BBBWWWBWWWW", "WWWBWWBBWWW", "BBBBWBBWBWW", "BBBWBBBWWBB", "BWWWBBWWBWB", "WWWWWBWBBBW", "WBWWBWWBWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> board = {"WBW", "BBW", "WBW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> board = {"WWWWWWWWWWWWW", "WWWWWWWWWWBWW", "WWWWBWWWWWWWW", "WWWWWWWWWWBWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWBWWWWWWWWW", "WWWWWWWWWWBWW", "WWWWWWWWWWWWW", "WWWWWWBWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> board = {"WBWBWWBWBWWBB", "BWBWBWBWWBWWW", "WWBBWWWWWBBBW", "WWBBBWBBWWWBB", "WWWBBBWWBWBWB", "BBBWBBWWWBWBB", "BWBWWWBWBBWWW", "WWWWBWWWBWBBB", "WBBWBWBWWBWBW", "WWBWBBWBWBBWW", "BWBWWBWWBBWWB", "WWBWBWBWWWWWW", "WWWWBBWBWBWBB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> board = {"BBWWWWBBWBWBB", "WBWBBWWWBWBWB", "WWBWBWBWWWBWW", "BBWBWBBWWBWBW", "WBWWWWBWWWBWW", "WWWBWWWBBBBBB", "WBWBBBBBBBBWW", "WBWWBBBBBBWBW", "BWWWBWWWWWWWB", "BBBWBBBBWBBBB", "BBBBBWBBBWBBW", "BBWBWWBBBWBWW", "BWWBWWWBWBBWB"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> board = {"W"};
    YetAnotherBoardGame* pObj = new YetAnotherBoardGame();
    clock_t start = clock();
    int result = pObj->minimumMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22663117&rd=15501&pm=12585
********************************************************************************
#define NDEBUG
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
 
const int RC_MAX = 15, SUB_MAX = (1 << 13) + 5, INF = 1000000005;
 
int R, C;
bool cell[RC_MAX][RC_MAX], save[RC_MAX][RC_MAX];
 
void flip(int r, int c)
{
    cell[r][c] = !cell[r][c];
}
 
void type1(int r, int c)
{
    flip(r - 1, c);
    flip(r + 1, c);
    flip(r, c - 1);
    flip(r, c + 1);
}
 
void type2(int r, int c)
{
    flip(r, c);
    type1(r, c);
}
 
void move(int type, int r, int c)
{
    if (type == 1)
        type1(r, c);
    else
        type2(r, c);
}
 
int solve(int mask, int on_mask)
{
    memcpy(cell, save, sizeof(cell));
    int moves = 0;
 
    for (int r = 1; r <= R; r++)
        for (int c = 1, types = 0; c <= C; c++)
        {
            int type = (mask & 1 << (c - 1)) == 0 ? 1 : 2;
 
            if (r == 1)
            {
                if (on_mask & 1 << (c - 1))
                {
                    move(type, r, c);
                    moves++;
                    types |= type;
                }
            }
            else if (cell[r - 1][c])
            {
                move(type, r, c);
                moves++;
                types |= type;
            }
 
            if (types == 3)
                return INF;
        }
 
    for (int c = 1; c <= C; c++)
        if (cell[R][c])
            return INF;
 
    return moves;
}
 
// 0 bits: type 1; 1 bits: type 2
int column_mask(int mask)
{
    int best = INF;
 
    for (int on_mask = mask; ; on_mask = (on_mask - 1) & mask)
    {
        best = min(best, solve(mask, on_mask));
 
        if (on_mask == 0)
            break;
    }
 
    int other_mask = (1 << C) - 1 - mask;
 
    for (int on_mask = other_mask; ; on_mask = (on_mask - 1) & other_mask)
    {
        best = min(best, solve(mask, on_mask));
 
        if (on_mask == 0)
            break;
    }
 
    return best;
}
 
struct YetAnotherBoardGame
{
    int minimumMoves(vector<string> board)
    {
        R = board.size();
        C = board[0].length();
 
        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++)
                cell[i + 1][j + 1] = board[i][j] == 'W';
 
        memcpy(save, cell, sizeof(cell));
        int best = INF;
 
        for (int mask = 0; mask < 1 << C; mask++)
            best = min(best, column_mask(mask));
 
        return best < INF ? best : -1;
    }
};
 
 
 
// Powered by FileEdit
// Powered by moj 4.17pre2 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/