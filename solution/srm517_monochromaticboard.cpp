/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11534
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

class MonochromaticBoard {
public:
    int theMin(vector<string> board);
};

int MonochromaticBoard::theMin(vector<string> board) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"WBWBW", "BBBBB", "WBWBW", "WBWBW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"BBBB", "BBBB", "BBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"BBBBB", "BBBBB", "BBBBB", "BBBBB", "BBBBB", "BBBBB", "BBBBB", "BBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"WW", "WW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"BBBBBBBB", "BBBBBBBB", "BBBBBBBB", "WBWBBBWB", "BBBBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"B"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"W"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {"BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"BBBB", "BBBB", "BBBB", "BBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW", "WWWWWWWWWWWWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"WBWBBWWWWWWWWWWWWWWWWWWWW", "WBWBBWWWWWWWWWWWWWWWWWWWW", "WBWBBWWWWWWWWWWWWWWWWWWWW", "WBWBBWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBB", "WBWBBWWWWWWWWWWWWWWWWWWWW", "WBWBBWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBB", "WBWBBWWWWWWWWWWWWWWWWWWWW", "WBWBBWWWWWWWWWWWWWWWWWWWW", "WBWBBWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBB", "WBWBBWWWWWWWWWWWWWWWWWWWW", "WBWBBWWWWWWWWWWWWWWWWWWWW", "WBWBBWWWWWWWWWWWWWWWWWWWW", "WBWBBWWWWWWWWWWWWWWWWWWWW", "WBWBBWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBB", "WBWBBWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBB", "WBWBBWWWWWWWWWWWWWWWWWWWW", "WBWBBWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"BBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBB", "BBWWBBBBWWBBWWWWBBBBB", "BBWWBBBBWWBBWWWWBBBBB", "BBWWBBBBWWBBWWWWBBBBB", "BBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBB", "BBWWBBBBWWBBWWWWBBBBB", "BBBBBBBBBBBBBBBBBBBBB", "BBWWBBBBWWBBWWWWBBBBB", "BBBBBBBBBBBBBBBBBBBBB", "BBWWBBBBWWBBWWWWBBBBB", "BBBBBBBBBBBBBBBBBBBBB", "BBWWBBBBWWBBWWWWBBBBB", "BBBBBBBBBBBBBBBBBBBBB", "BBWWBBBBWWBBWWWWBBBBB", "BBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBB", "BBWWBBBBWWBBWWWWBBBBB", "BBWWBBBBWWBBWWWWBBBBB", "BBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBB", "BBWWBBBBWWBBWWWWBBBBB", "BBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB", "WWWBBBBWWBBBBBWWWWWWBBWWBBWB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"WBBBBBBWWWWBBWBBWBBBBBWWBWBBWBBBBBBBWBBBBBWBBBB", "WBBBBBBWWWWBBWBBWBBBBBWWBWBBWBBBBBBBWBBBBBWBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBBBBWWWWBBWBBWBBBBBWWBWBBWBBBBBBBWBBBBBWBBBB", "WBBBBBBWWWWBBWBBWBBBBBWWBWBBWBBBBBBBWBBBBBWBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBBBBWWWWBBWBBWBBBBBWWBWBBWBBBBBBBWBBBBBWBBBB", "WBBBBBBWWWWBBWBBWBBBBBWWBWBBWBBBBBBBWBBBBBWBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBBBBWWWWBBWBBWBBBBBWWBWBBWBBBBBBBWBBBBBWBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBBBBWWWWBBWBBWBBBBBWWBWBBWBBBBBBBWBBBBBWBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBBBBWWWWBBWBBWBBBBBWWBWBBWBBBBBBBWBBBBBWBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"BBWWB", "BBWWB", "BBWWB", "BBWWB", "BBWWB", "BBWWB", "BBBBB", "BBBBB", "BBWWB", "BBWWB", "BBWWB", "BBWWB", "BBWWB", "BBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"BWWWBWBBW", "BBBBBBBBB", "BWWWBWBBW", "BWWWBWBBW", "BWWWBWBBW", "BWWWBWBBW", "BWWWBWBBW", "BWWWBWBBW", "BWWWBWBBW", "BWWWBWBBW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBWBBWBBWWBBBBBWBWWWBBBB", "BBBBBBBBBWBBWBBWWBBBBBWBWWWBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBWBBWBBWWBBBBBWBWWWBBBB", "BBBBBBBBBWBBWBBWWBBBBBWBWWWBBBB", "BBBBBBBBBWBBWBBWWBBBBBWBWWWBBBB", "BBBBBBBBBWBBWBBWWBBBBBWBWWWBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBWBBWBBWWBBBBBWBWWWBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBWBBWBBWWBBBBBWBWWWBBBB", "BBBBBBBBBWBBWBBWWBBBBBWBWWWBBBB", "BBBBBBBBBWBBWBBWWBBBBBWBWWWBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBWBBWBBWWBBBBBWBWWWBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBWBBWBBWWBBBBBWBWWWBBBB", "BBBBBBBBBWBBWBBWWBBBBBWBWWWBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBWBBWBBWWBBBBBWBWWWBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"WBWBBBBB", "BBBBBBBB", "BBBBBBBB", "WBWBBBBB", "WBWBBBBB", "BBBBBBBB", "WBWBBBBB", "WBWBBBBB", "WBWBBBBB", "WBWBBBBB", "WBWBBBBB", "WBWBBBBB", "WBWBBBBB", "WBWBBBBB", "WBWBBBBB", "WBWBBBBB", "BBBBBBBB", "WBWBBBBB", "BBBBBBBB", "BBBBBBBB", "WBWBBBBB", "BBBBBBBB", "BBBBBBBB", "WBWBBBBB", "WBWBBBBB", "WBWBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"B", "B", "W", "B", "B", "W", "B", "B", "W", "B", "B", "W", "B", "W", "B", "W", "B", "B", "W", "W", "B", "B", "B", "W", "B", "W", "W", "B", "B", "B", "W", "B", "W", "W", "B", "B", "B", "B", "W", "B"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW", "WWWWWBWWBBBBWWWWBW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"BBBBBBBWBBBBBBBBBBBBBBBBBBBW", "BBBBBBBWBBBBBBBBBBBBBBBBBBBW", "BBBBBBBWBBBBBBBBBBBBBBBBBBBW", "BBBBBBBWBBBBBBBBBBBBBBBBBBBW", "BBBBBBBWBBBBBBBBBBBBBBBBBBBW", "BBBBBBBWBBBBBBBBBBBBBBBBBBBW", "BBBBBBBWBBBBBBBBBBBBBBBBBBBW", "BBBBBBBWBBBBBBBBBBBBBBBBBBBW", "BBBBBBBWBBBBBBBBBBBBBBBBBBBW", "BBBBBBBWBBBBBBBBBBBBBBBBBBBW", "BBBBBBBWBBBBBBBBBBBBBBBBBBBW", "BBBBBBBWBBBBBBBBBBBBBBBBBBBW", "BBBBBBBWBBBBBBBBBBBBBBBBBBBW", "BBBBBBBWBBBBBBBBBBBBBBBBBBBW", "BBBBBBBWBBBBBBBBBBBBBBBBBBBW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB", "WBWWWBBWWBWWWBBWBWWWBWWWWBWWWWWB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWBBWWBWWBWWWWWWWWWWWWWBBBWWBWWWWWWWWWBWWWWWWWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBWBBBBBBWWBWBBBBBBBBBBBBBBBBBBBBBBBBBWB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWBWWBWWBWWWWWWWWWWWBWWWWWWWWBWWBBWWBBWWWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW", "WBBBWBWWBWWWWWWWWWWWWWWBBWBWWWWBBWWWWWBWBWWWWWWWWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB", "WWWBWWWWWWWWWWBWBWBWWWWBWWWWWWWWWWWWWWWWBWWBWWWWBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWBBBBBBWBBBWWWBWBBWWWBBWBBWBBBBBBBWBWWBWWWWWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"WWWWWWWWWWWWWWWWWWBWWBWWWBWWWWWWWWWWWBWWWWWBWBWWWW", "WWWWWWWWWWWWWWWWWWBWWBWWWBWWWWWWWWWWWBWWWWWBWBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWBWWBWWWBWWWWWWWWWWWBWWWWWBWBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWBWWBWWWBWWWWWWWWWWWBWWWWWBWBWWWW", "WWWWWWWWWWWWWWWWWWBWWBWWWBWWWWWWWWWWWBWWWWWBWBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWBWWBWWWBWWWWWWWWWWWBWWWWWBWBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWBWWBWWWBWWWWWWWWWWWBWWWWWBWBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWBWWBWWWBWWWWWWWWWWWBWWWWWBWBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWBWWBWWWBWWWWWWWWWWWBWWWWWBWBWWWW", "WWWWWWWWWWWWWWWWWWBWWBWWWBWWWWWWWWWWWBWWWWWBWBWWWW", "WWWWWWWWWWWWWWWWWWBWWBWWWBWWWWWWWWWWWBWWWWWBWBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWBWWBWWWBWWWWWWWWWWWBWWWWWBWBWWWW", "WWWWWWWWWWWWWWWWWWBWWBWWWBWWWWWWWWWWWBWWWWWBWBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWBWWBWWWBWWWWWWWWWWWBWWWWWBWBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWBWWBWWWBWWWWWWWWWWWBWWWWWBWBWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW", "WWWWWWWWWWWWBWWWWWBWWWWWWWWBWBBWWWWWWWBWWWWWWBBWWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"W", "B", "B", "W", "W", "B", "B", "B", "B", "B", "W", "W", "W", "W", "B", "W", "W", "W", "W", "W", "B", "B", "B", "W", "W", "W", "B", "B", "W", "B", "B", "W", "W", "B", "W", "W", "W", "W", "W", "W", "W", "B", "W", "W", "B", "W", "W", "B", "W", "B"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"WWWWWBWWWWWWWWWWWWWWWBWWWWWWBWBWWWWWWWWWWWWWWWWWWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"BBBB", "BBBB", "BBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {"BBBBB", "BBBBB", "BBBBB", "BBBBB", "BBBBB", "BBBBB", "BBBBB", "BBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"W"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"BBB", "BBB", "BBB", "BBB", "BBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {"BBBBBBBB", "BBBBBBBB", "BBBBBBBB", "WBWBBBWB", "BBBBBBBB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"BWWW", "BBBB", "BWWW", "BWWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
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
    vector<string> board = {"WBWBW", "BBBBB", "WBWBW", "WBWBW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {"WW", "BB", "BB", "BB", "BB", "BB", "BB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {"WWW", "WWW", "WWW", "WWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {"WWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {"BBB", "BBB", "BWB"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"BWWW", "BWWW", "BWWW", "BWWW"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {"B", "B", "B", "W"};
    MonochromaticBoard* pObj = new MonochromaticBoard();
    clock_t start = clock();
    int result = pObj->theMin(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22865337&rd=14542&pm=11534
********************************************************************************
#include<string> 
#include<algorithm> 
#include<vector> 
#include<set> 
#include<map> 
 
  using namespace std; 
class MonochromaticBoard 
{ 
  public : int theMin(vector <string> a) 
  { 
     int i,j,s=0,y,r,n=0,t; 
     for(i=0;i<a.size();i++) 
       for(j=0;j<a[0].size();j++) 
         if(a[i][j]=='B')s++; 
      if(s==a.size()*a[0].size()) 
      { 
        if(a.size()>a[0].size())return a[0].size(); 
          else return a.size(); 
      }    
     s=0;  
     for(i=0;i<a.size();i++) 
         if(a[i][0]=='B') 
         { 
           r=0; 
           for(y=0;y<a[0].size();y++) 
             if(a[i][y]=='W'){r=1;break;} 
           if(r==0) 
           {s++; 
           for(y=0;y<a[0].size();y++) 
             if(a[i][y]=='B'){a[i][y]='Q';} 
           } 
         } 
     for(j=0;j<a[0].size();j++) 
     for(i=0;i<a.size();i++) 
         if(a[i][j]=='B') 
         { 
           r=0; 
           for(y=0;y<a.size();y++) 
             if(a[y][j]=='W'){r=1;break;} 
           if(r==0) 
           { 
           n=0; 
           for(y=0;y<a.size();y++) 
             if(a[y][j]=='B' || a[y][j]=='Q')n++; 
           t=0;   
           for(y=0;y<a.size();y++) 
             if(a[y][j]=='B')t++; 
           if(t>0) 
           {s++;           for(y=0;y<a.size();y++) 
             if(a[y][j]=='B'){a[y][j]='Q';} 
} 
           } 
         } 
     return s;   
  } 
};

********************************************************************************
*******************************************************************************/