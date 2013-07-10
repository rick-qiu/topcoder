/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1778
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

class BombSweeper {
public:
    double winPercentage(vector<string> board);
};

double BombSweeper::winPercentage(vector<string> board) {
    double ret;
    return ret;
}


int test0() {
    vector<string> board = {".....", ".....", "..B..", ".....", "....."};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 94.11764705882354;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"BBBBB", "B...B", "B...B", "B...B", "BBBBB"};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 5.882352941176471;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {".........", ".B..B..B.", ".........", ".........", ".B..B..B.", ".........", ".........", ".B..B..B.", "........."};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {".........................", ".........................", ".........................", "........................."};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"......B.......B..B...........................B....", "..............B..................BB..B............", "B.B.B.............B.....B..............B..........", "...................B...B....................BB....", "...B.....B.........................B.......B.....B", "B.B.........B.....B.......B..B......B.B...B.BB....", "..B...................BB...............B..........", ".........B...B................B..B................", ".......BB.......B....B................B.....BBB...", ".......BB..........B..............B......BB.......", "...................BB.....................B.......", "...B.B.B......B..............B...B......B.........", "B................B................................", "....B..........B.....B..BB....B...............BB..", "..B....B.....B.............B.....B............B...", "...................B.B........B..B.........B.B....", ".....B.....B......................................", "...........BB......BB...B.B........B...B..........", ".....BBB..........................................", ".B...........B....B...BB......B......B...B.B......", "..................B........BB................B....", "...............................B..B....BBB.B....B.", "..........B.......................................", ".....B..........B....BB......B.B......B......B....", ".....B..................B........B................", "............B.....B..B....BB...B....BB........B...", "..B.................B.........B...................", ".BB..............B................................", "...B....B..................B.................B....", "......B...B......B......................B.B.......", "..............B..................B.......B........", ".....B........BB...B.....B........................", ".......B......B.B..B..........B...........B....B..", "B...B...........B...B...B......B.B...B..B......B..", "....B..B.....B.B.......BB..B............B.B....B..", "B.......B..........B.........B...B.BB......B......", "....B...............................B.............", ".....B.B..........................................", "..........B............B......B.B..B....B.........", "....B...B.......................B.................", "B.................B...........B..B....B...........", "...B.....B........................................", "...B..B......................................BBB..", ".B...B....................................B....B..", "...B...B..........B...B.B.........................", ".....B.............B...BB..........B..BBB.BB......", "....................B.....B.......................", "........B..BB..........B.B....B...........B......B", ".........B.....BB..B.............B....BB..........", "....B..B..............B...B..B..........B........."};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 77.67558528428094;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"B.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 99.9599519423308;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 0.040048057669203045;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"..B...B.BB.B..B...B.......B.........B.B..B...", ".......B...B..B...B..B.B..B.B..B.......B.....", "...B.B..B.B.B.B.....B.....B...B......BBB.....", ".B....B....B..........B.BB.....B.BB....B..B.B", "B...BB..BBBB....B....B..B.B....B.....BB......", "B.....BBB.B.B...BB.B.B....B..B.B.B....B.B.BB.", "B...B.BB......B....B........B.B.B.BB.B....B..", "...B......B...B...B.BB...B....B..B....BBB....", ".........BB.....BB..B.BB.B..BBBB...B.....B..B", "..BBBB......BBB...BB............B.BB...B.B...", "...B...BB..B...B.....B.B..B..B...B.......B...", "...B..B....B...B.....B..BB.B....B..B....B....", ".B.....B......B.B...B.......BBB.B.....B.BBB..", "........B....B.B....B.B.BB.......B....B...B..", ".B............B.BBBB.B..BB.BB....B.........B.", "...B......B....B.......BB.B.B.B..............", "B.B............BB......B.B..B.........BBB..B.", "..BB...B....B...B..B........B.....B.B..B.....", "..B...BB......B.B.B....B....B.BB...B.....B...", "...BB......B............B...BB..B.B.....B..B.", "...B.B....BBB.....B...BB...B....BB.B.......B.", "B.B.B...BB.B.B...B..BBB........B......B..B...", "B..BBBBB..B..B......B.......B...B............", "....B..B.....B.B..B..B..B..B.B.......B.B.....", "B.....B.B.....BB................BB....B..B.B.", "....BB.BBB.B.B.B..........B.B..B..B..B..B....", "..B.BB.......B.....B..B....B..B..BB.B...B..BB", "......B..BB..B...B........B.B..B..B...BBB...B", ".....B.....BBB......B...........B.B.BB......B", "....B.....B...B.B.B.B.B.....B...B.B.B...BB...", ".B.B....BBB....................B......B..B...", "..B..BB.BBBBB..B.BBBB..BB........BBB.BB......", "B...B..B....B.................B.B........B.B.", ".....B..........B....B......BBB.B....B..BB..B", "B.B.BB.B.B....BB............B.....BBB.B.....B", "B...B......B...B..B..B.B...B...B.....B.......", "......BB......B.B...B......BB......B.B..B.B.B", "BB..B........B.......BB.B................BBBB", "BB......B.B.....B.B..........BB......B..B....", "B...B..B..BB.BB.B......B.B.B.B...BB...B...B..", "B...BBB.BB.B......BB..B.BB.............B....B"};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 18.12191103789127;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"BBBB.B.BB..B....BB.B.BB..B.B....B..B"};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 19.047619047619047;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {".B.BB.....B.B..B..B..B..B..B.BB.....B.B.B..B.BB.B"};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 24.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"BBBBB.BBBB...BBBBB.B.BBBB.BB", "B..BBBB.BBB.BBB.B..B.B.BB.BB"};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"..B..B..B..B...B.", "....BBB.........."};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 33.333333333333336;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"B", "B", "B", "B", "B", ".", "B", "B", ".", ".", "B", ".", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "."};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {"B", "B", "B", ".", ".", "B", ".", "B", ".", "B", ".", ".", ".", "B", "B", "B", ".", ".", ".", "B", ".", ".", ".", "B", ".", "B", ".", "B", ".", ".", ".", "B", ".", ".", ".", "B", "B", ".", "B", ".", ".", "."};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 29.166666666666668;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"..", "B.", "BB", "..", "BB", "..", ".B", "B.", ".B", "BB", "..", ".B", ".B", ".B", ".B", "BB", "..", "B.", "BB", ".B", "BB", "BB", "..", ".B", "BB"};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"BB", "BB", ".B", "B.", "BB", "..", "..", "BB", "B.", ".B", "BB", "BB", "B.", "B.", "..", "B.", "B.", ".B", "BB", "..", "..", "BB", ".B", ".B", "BB", "..", "BB", ".B", "B.", "B.", ".B", "BB", ".B", "BB", "..", "..", "B.", "BB", ".B", ".B", ".B", "B.", "BB", "BB"};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"B.......B..B...B.B.....B.B.B...B.......BB.", "BB...........BBBB........B...BBBBB........", "..B.B..B..B.B.B...............B.BB.B.B.B.B", ".......B..B..B......B....B....B...B..B...B", "BBBBB..B..BB..B...B..B.B......B......BB.B.", "B......B.BB..B....B..B......B.........B..B", "......B...B........BB...B.BB.......BB..BBB", "..B..B..BB.BB..B.....B..............B..BB.", ".B...B..B...BB.....B.....BB.........B.B...", "...B......B..B.B......BBB...B.B.....B.B.B.", "...B..........BB..B.B..........B.....B.BB.", "BB.B..B..B..B...B...B....B...BBB.....BB..B", "....B.....B...BBB..B......BBBB.......B....", "....B..B.B......B..B..BBBB...B....BB....B.", ".BB..BBBB.B...B....B....B.B..B.B...BB..B..", ".B........B.B..B.....BBB.B.BB.BBB...B.....", "....BB.......BB.....B.........B....B.BB...", "....BB......B....BB.........B.B....B.B.B..", "BB.BBBBBBBB........B......B..B..BB........", "B......BBB.BBB......B..B......B...........", "...B......BB.B..B..BBBB..B..B....BB....B..", "B....BBB.....B...B........BBB..BB.B...BB..", "....B...B..B.B....B...BB.B..BB..BB...B...B", "..B....B..............B.............B.....", "BBBB...B...........B...BB..B..........B.B.", ".........B.B.B.B.B..........B...B....B.BB.", ".BB..B.....B......B....BB....B.BB...B.B..B", "B...B..B.BB..B...B.B....B..BB..BB.BBB.B.B.", ".....BBBB.......B.......B..B......BB......", "B........B...B.B..BB...B...B..B.B......B..", ".....BBB....B..B.B..B..B....BB.B..B...BB..", "...BBBBB...B.B..B...BB..B......BBBB..B.B..", "...B...B.....BBBB.......B.B...B...BBB.BBB.", "....BB..B.B.B.B..BB......BB..B..........B.", ".B..B......B...B.BB..BB..B.BB.........BBB.", "........B..B...B...BBB...B.......B..B..B..", "..BB.B......B...BB...B..BB......B.B..B.B.B"};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 17.36745886654479;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"BBBBBBB..BBBBBBBBBBBBB..BBBBB.BB.B.BBBBBBBBBB", ".BBBB.B.B.BBBBBBBBBBBBB.BB.BBBBBBBBBBBBBBBB.B", "BBBBBBBB.BBBBB....B.BBBBBBBBBBBBBBBBBB.BBBB.B", "BBBBBB.BBB.BBBB.BBBB.BBB.BBB.BBBBBBBBBBBBBB..", "BBBBBBBBBBBBB.BBBBBBB.BBBBBBBBBBB.BBBBB.BBBBB", "BBBBB...BB.BBBB.BB.BBBBBBBB.BBBBBB.BBBBB..BBB", "BBBBBBBBBBBB.BBBBBBBBBBBBBBB...B.B...BBBBBB.B", ".B..B..BBBBBBBBB.BB.BBBBB.BBBB.BBBB..BBBBBBBB", ".B.BBBB..B.BBBBBBBBB.BB.BB.B.B.BBB.BBBB.BBB.B", ".BB.B..BBBBBBBBBBBBBB.BBBBBBBBBBBB.BBB.B.BBBB", "BBBBBBB..BBB..BBBBBBB.BB.BBBB.BBB.BBBBBBB.B..", "BBBBBBBBBBBBBBBBB.BBBB.B.BB.BB..BBB.BB.BBB...", "..BBBBBBBBBB.BBB.BBBBBB.BBB.BBBB.B.BBBBBBBBBB", ".BBBBBBBBB.B..BBBB.BB.B.BBBB..BB.BBB..BBBBBBB", ".BBB..BBBB.BBBBBBBBB.BBBBBBBBBBBBBBBBB.BB.BBB", "BB.B.BBBBBB.B..BBB.BB.BB.BB.BBBBBB.B..BBBBBBB", "BBBB.BBBBBB.BBBB.BBBBBBBBB..BBBB.B.B..B.BBBBB", "BBB.BBB.BB.B...BBBBBBBBBB.BBBBBBB.BB.BB.BBBBB", "BBBBBBBBBBBBBBB.BBBBBBBBBB.BBBBBBBBBBBBBBBBB.", ".B.BBBB.BBBB.BBBB.B.B.BBBBBB.BBBBBBBBBBBB.B.B", "B.BBBBBBBBBB.BBBBBBB.BBBBBBBBBB.BBBBBBB.BB..B", "BBBBBBBBB.BBBB.B..BBBB.BBBBBBBBBBBBBBB..BB...", "BBBBBBBBBB.BBBBBBBBB.B.BBBBB.BBBBBB.B.BBBBBBB", "BBBBBBB.BBBBB.B.BBBBBBB.BBBB.BBBBBBBBB.B.BB.B", "BBB..BBBBBBBBBB.BBB.B.B.BBBB.B.BBBB.BBB.BBBBB", ".B.BBB.BBBBBBB..B.BBBB.BBBBBBBBBBBBBBBB.BBBB.", "..BBBB.BBBBBBBB.B.BBBB.B...BB.BB.BBB.B.BBBBBB", "BBB.B.BB..BBBB.BBBBBBBBBBB..BB.B.BBBBBBBBBBBB", "BB..BBB.BBBBBBBBBBBBBBBB.BBBB.BBBBBBBB.BBB.BB", "BBBBBBBBB.BBBBBBBBBBB..BBBBBBBBB..BBBBBB..BB.", "B.BBBB.BB.BBB.BBBB.BBBBB.B.BBBB.B.BBBBBBBBBB.", "B.BBBB...B.B.BB...BBBBB.B.BBBBB.BBBBBBBBB..BB", "BBBBBBBBBBBB.BB.B.BB.BBBBBBBBBB.B..BBBBBB.BBB", "BBBBBBBBBB..BBBB..B.BBBBBBBBBBBB.BBBBBBBBB.BB", "B...B.BBBBB.BBBBBBBBBBBB.BB.BBB.BBBBBBBBBBBBB", "BBBBBB.BB.BBBBBBBBBBBBBBBBBBBBBBBBBBB.BB..BBB", "B.BBBBBBBBBB..BBBBBBBBBB.BBBB.BB...BB...BB.BB", "BBBBBBBBBBBBBBBBBB.B..BBBBBBBBBBBBBBBBBBBBB.B", "BBBB.BBBB..BB.BB.BB.BBBB.BB.B.BBB.B.BB.BBBB.B", ".BB.BBBB.BBBBB.B.BBBB.BBB.BBBBBB.BB.BB.BBB.BB", ".BBB.BBB..BBB.B.BBBBBB.BBB.B.B.BB.BBBBBBBB.BB", "BB.B..BBBBBBBBBB..BBB..BBBBB.B.BBB.BB.BB.BB.B"};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {".B..........B.B....BB..B.BBB...B.BB...BB...B", "...B...B.BB....BB..B.B.B.B...B..B.....BBB..B", ".BB.BBB.BB...BB.B.BBB.B.B......B.B..........", "B..B.B.B.BB...B.BB.....B.B.B................", "B..BB..BB.......B.B......B.....B...........B", "B...B..B.B.B.B.B.B..B.BB.B...B.BB....B..BB.B", ".B.....B.BB...BB..B..B.B.BBB......B......B.B", ".BBB.B.B..BB...B.B..BB.BB.............BBBB.B", "...B........B.B.......B.......B....BB....B.B", ".B..BBBB...B..BB.....B..B..BB.B.....BB...B..", "B.B..B.B.B..B..B....BB.B..............B.....", ".B..BB..B..B.BB..B.......B.......B..BBBB...B", ".B..B......B.B...BBBB....B.B...BBBBB.......B", "B...BBB.....BBBBBB...B...B.....B.B..........", ".B.........B...B.B.BB.B.....BBBB.B..B....B..", ".B.BB.B.B..B....B.BBBB.B.BB..B.B......B...BB", "BB.....BB.....B..B....B...B..B.BB.....BBB.B.", "B.....B....BBBBBB......B..B....B.B.....BB.BB", "..BBB.BB.B.B.B.B..B....B.B..BBB...B.B..B....", "B.....B..B....BB..B...B.B...B.......B.....B.", ".BB..BB.BB..BB....B....BB.B.B.BB.....B....B.", "B............B.B.....B..BBBB.B....BBB..BBB.B", ".....B.....B...B..BB...BBBBBB..B.BB.........", ".....B..BBBB.B..BBB.B.B...B......B...BBB..BB", ".BB.B.BB.........B..B.B.BB.BB.....BBB..BB...", "...B.B.B....B.....B..B.........B.B..........", "..B.B..BBB...B...B..BBBB..B..BBB..B..B....B.", "B....B........BB.......B.B.....B..BB...B....", "B....B...B.B..B....BB.BB.B....BB...BBB...BB.", ".........BB....BB....B.BB....BBB.B.B..B..B..", ".B....BB...B....BB.BBBBB.B.....BB...B.B.B...", ".....BBB....B............B..B.......BB.B..B."};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 9.578544061302683;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {".BBBBB.B.BBBBBBBBB.B.BB.BBBB.B..BBBBB....B.BB.BBB", "BB.B.BB.BBB.BBBBBBB.BB.BBBBBBB.BBBBBBBBBBBBBB.BBB", "BBBBBB.BBBBB.BB.BBB.BBBBBBBBBBBBB.BB.B.BBB.BBB.BB", "BBBBB.BBBBBBBBBBBBBBBBBBBBBBB.BBBBBBB.BBBBB.B...B", "B.BBBBBBBBBB.BBBBBB.BBBBBBB.BBBBBBBBB..BBBBBBBBBB", "BBBBBBBBBBBBBBBBB.BBB..BB..BBBBBBBBBBBB.BBBB.BBBB", "BB.BBBBBBBBBBBBBBB.BBBBBBBBBBBBBBBBBBBB.BBBBBBBBB", "BB...BBBBBB.BBB.BBBBBBBBBBBBBBBBBBB.BBBBBB.BBB.BB", ".BBBBBBBBB.BBBBBB.BBBBBB.BBBBBBBBBBBBBBBB...BBBBB", "BBBBBBB.BBB.BBBBBB.BBB.BB.BBBBBBB.B.BB.BBBBBBBBBB", "BBBB.B.BBBB.BBB..BBBB..BBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBB.BB.BBBB.BBBBBB..BBBBBBBBBBBBB.BBBBBBB.BBB", "BBB.BBBBBBBBBBBBB.BBBBB.BB..BBBBBBBB.BBBBB.BBBBBB", ".B.BBBBBBB..BBBBBB.B.BBBBB..BBBBBBBBBBBBBBBBBBBB.", "BBBBBBB.B.BBBBBBBBBBBBBBBBBBBB.BB.BBBBB.BBBBBBBBB", ".BBBBBBBBBBBBB..BBBBBBBBB.BB.BBBBBBBBBBBBBBBBBB.B", "BBBBBBBBBBBB.B.BBB.B.BBBB.BBBB.BBBBBBBBBBBBB.BBBB", "BBBBBB...B.BBBBBBBBBBBBBBB.BBBBB.BBBBBBBBBB.B.BBB", "B.BBBBBBBBB.BB.BB.BBBBBBBB.BBBBBBB.BBB.BBBBBBBBBB", "BBBBBBBB.B.BBBBBBBBBBBB..B.BBBBBBBBBBB.BBBBB.B..B", "BBBBBB.BBBB.BB.BBBBBBB.BBBB.BBBBBBBB.BBBBBBBBBBBB", "BB.BB.BBBBBBBBBBB.BBBBBBB.BBBBBBBBBBBBBBBBBBBB.BB", "..BBB.B.BBBBBBBBBBBBBBBBBBBBBBBB..BBBB.B.B.BBB.B.", "BBBBBBBBBBBBB.BBBB.BBB.B.BBBBBBBBBBBBBB..BBBBBBBB", ".BBB.BBBBBBBBBBBBB.BBBBB.BBB.BBBB.BBB.BBBBBBBB..B", "BB.BB.BBB.BBBBBB.BBBBBBB..BBBBBB..B.BBBBBBBBBBBB.", "BB.BBB.BBBBBBB.BBBB.BBBBBBBBBBBBBBBBBBBBBBBBB.BBB", "B.BBBB.BBBBBB..BBBBBBB.BBBBBBBBBBBB..B.B.BB.B.BBB", ".B.BBBBBBBBBBBBBBBBBBBB.BBBBBBBBBBBBBBBBBBBBBB.BB", "BB.BBBBBBBBBBBBBBBB.BBBBBBBB.BBBBBBBB..BBBBBBBBBB", "BB.BBBBBBBBBBBBBB.BBBBBBBBBBBBBBBB.B.B.BBB..B.BB.", ".BB.BB..B.BBBBBBBBBBBB.BBBBB.B..BB..BBBBBB.BB.BBB", "BBBB..BBBBBBBBB..BBBBBBBBBBBBBB.BB.BBBBBBBBBBBBBB", "BBBBB.BBBBBBBBBBBBBBBBBBBBBB..BBBBB.BBB.B.BBBBBBB", "BB.BBBBBBB.B..BBBBBBBBBBBBBBB.BBB.BBBBBBBBB.BBBBB", "BBBBBBB.BB.BBBB..BBBBBBBBBBBBBBBBBBBBBB.BBBBBBB.B", "BBB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..BBB.B.", "BBBBBBBB.BBBBBBBBBBBBB..BBBBBBBB.BBBBBBBBBBBBBBBB", "BBBBBBBBBBBB.BB.BB..BBBBBBBBBBBBBBB.BBBBB.BBB.BBB", "BBBBBBBBBBBBBBBBBBBBB.BBBBBBBBBBBBBBBBBBBBB.BBB..", "..B.BBBBBBBBB.BB.BBBBB..BBBBBB.BBBBBBBBBBBBBBB.BB", "BBBBB..BBB.BBB.BB.BBBBBBBB.B.BBBBBBB.BBBBBB.BBBBB", "BBBBBBBB..BBBBBBBBBBBBBBBB.BBBB..BBBBBBBBBB.BBBB.", "BBBBBBBBB.BBBBBBBBBBBBBBBB.BBBBB.BBBBB.BBB..B.BBB", "BBBBBBBBBBBBBBBBB.BBB.BBBBBBBBBBB.BBB.BBBBBBBBBBB"};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"B..", "...", "..B"};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {".....", ".....", "..B..", ".....", "....."};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 94.11764705882354;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {".........", ".B..B..B.", ".........", ".........", ".B..B..B.", ".........", ".........", ".B..B..B.", "........."};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"......B.......B..B...........................B....", "..............B..................BB..B............", "B.B.B.............B.....B..............B..........", "...................B...B....................BB....", "...B.....B.........................B.......B.....B", "B.B.........B.....B.......B..B......B.B...B.BB....", "..B...................BB...............B..........", ".........B...B................B..B................", ".......BB.......B....B................B.....BBB...", ".......BB..........B..............B......BB.......", "...................BB.....................B.......", "...B.B.B......B..............B...B......B.........", "B................B................................", "....B..........B.....B..BB....B...............BB..", "..B....B.....B.............B.....B............B...", "...................B.B........B..B.........B.B....", ".....B.....B......................................", "...........BB......BB...B.B........B...B..........", ".....BBB..........................................", ".B...........B....B...BB......B......B...B.B......", "..................B........BB................B....", "...............................B..B....BBB.B....B.", "..........B.......................................", ".....B..........B....BB......B.B......B......B....", ".....B..................B........B................", "............B.....B..B....BB...B....BB........B...", "..B.................B.........B...................", ".BB..............B................................", "...B....B..................B.................B....", "......B...B......B......................B.B.......", "..............B..................B.......B........", ".....B........BB...B.....B........................", ".......B......B.B..B..........B...........B....B..", "B...B...........B...B...B......B.B...B..B......B..", "....B..B.....B.B.......BB..B............B.B....B..", "B.......B..........B.........B...B.BB......B......", "....B...............................B.............", ".....B.B..........................................", "..........B............B......B.B..B....B.........", "....B...B.......................B.................", "B.................B...........B..B....B...........", "...B.....B........................................", "...B..B......................................BBB..", ".B...B....................................B....B..", "...B...B..........B...B.B.........................", ".....B.............B...BB..........B..BBB.BB......", "....................B.....B.......................", "........B..BB..........B.B....B...........B......B", ".........B.....BB..B.............B....BB..........", "....B..B..............B...B..B..........B........."};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 77.67558528428094;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {".BBBBBBBBBBBBB"};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {".......BB"};
    BombSweeper* pObj = new BombSweeper();
    clock_t start = clock();
    double result = pObj->winPercentage(board);
    clock_t end = clock();
    delete pObj;
    double expected = 75.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4585&pm=1778
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
class BombSweeper { 
public: 
double winPercentage(vector <string> a) { 
  int i, j, k, x, y, z, n; 
  double ret; 
   
  for( x = 0; x < a.size(); x++ ) 
  for( y = 0; y < a[0].size(); y++ ) if( a[x][y] == 'B' ) { 
    for( i = -1; i <= 1; i++ ) 
    for( j = -1; j <= 1; j++ ) 
      if( x+i >= 0 && x+i < a.size() ) 
      if( y+j >= 0 && y+j < a[0].size() ) 
      if( a[x+i][y+j] == '.' ) a[x+i][y+j] = ','; 
  } 
  i = j = 0; 
  for( x = 0; x < a.size(); x++ ) 
  for( y = 0; y < a[0].size(); y++ ) if( a[x][y] == '.' ) 
    i++; 
  for( x = 0; x < a.size(); x++ ) 
  for( y = 0; y < a[0].size(); y++ ) if( a[x][y] == 'B' ) 
    j++; 
  return i*100/(double)(i+j); 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/