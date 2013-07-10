/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6827
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

class FenceRepairing {
public:
    double calculateCost(vector<string> boards);
};

double FenceRepairing::calculateCost(vector<string> boards) {
    double ret;
    return ret;
}


int test0() {
    vector<string> boards = {"X.X...X.X"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> boards = {"X.X.....X"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.732050807568877;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> boards = {"X.......", "......XX", ".X......", ".X...X.."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> boards = {"..X.......", "X.........", "..........", "......X..X"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> boards = {".....", ".X.X.", "....."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7320508075688772;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> boards = {"X...XX"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.414213562373095;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> boards = {".X..", "...."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> boards = {"X.....X.", ".X......", "........", "........", "X......X", "X......X", "X....X.."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 7.3484692283495345;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> boards = {"..X", ".X.", "...", "..."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7320508075688772;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> boards = {"...X", "...X", "....", "..X.", "....", "....", "....", "...."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> boards = {".X.......X", "..........", "...X......", "...X..X...", "..........", "..........", "..X....XX.", ".........X"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 8.414213562373096;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> boards = {"..X...", "X.....", "X....."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> boards = {"X.......", "......XX", ".X......", ".X...X.."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> boards = {"..X.......", "X.........", "..........", "......X..X"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> boards = {".....", ".X.X.", "....."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7320508075688772;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> boards = {"X...XX"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.414213562373095;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> boards = {".X..", "...."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> boards = {"X.....X.", ".X......", "........", "........", "X......X", "X......X", "X....X.."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 7.3484692283495345;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> boards = {"..X", ".X.", "...", "..."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7320508075688772;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> boards = {"...X", "...X", "....", "..X.", "....", "....", "....", "...."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> boards = {".X.......X", "..........", "...X......", "...X..X...", "..........", "..........", "..X....XX.", ".........X", "XXX", ".XXX.....X"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 9.591663046625438;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> boards = {"..X...", "X.....", "X....."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> boards = {".X....X", "...X...", ".......", ".......", "....X..", ".X....X", ".......", "X......", ".....X.", ".......", ".....X.", ".......", ".......", "X......", "......X", ".......", ".......", ".......", ".......", ".......", "......X"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 11.198039027185569;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> boards = {"X.....", ".X....", "...X..", "X....X", "......", ".X..X."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 5.916079783099616;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> boards = {".X........X..............XXX.....X..............", "....X......XX......X.........X.........X........", "....X.......XX........X....X...........X........", "X.............................X....X............", ".............................X.................X", "........X....X..................................", "............................X...................", "........................X.......................", "...............X.....................X..........", ".X......XX...........X....XX.............X......", "......X.........................................", ".........X.......X..XX...........X....X.........", ".............................X................X.", "................X.........X.X.........X.........", "........X................X..XX....X.............", ".....X....X.....................................", "........................................X.......", ".....X.....X....X.......XX......................", "X...........X.....X.............X...............", "....................X.......X......X..X......XX.", "...............X................................", "..........X......X.......X.................XX...", ".X.................................X....X.......", ".XX..X......X.................................X.", "................X..........X...........X.....X..", "...XX..................................X..X.....", "....................X..................X.......X"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 35.98610843089316;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> boards = {"...X........", "............", "....X.......", "............", "............", "..X.........", ".XX....X...."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 5.414213562373095;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> boards = {"X..........................", "......X............X...X...", "...........................", "...................X.......", "...........................", "...........................", "..X...........XX.....X.....", "......X..X...........X.....", "........X...........X......", ".........X.................", "...........................", "............X..............", ".....X.....................", "..................X........", "....X....XX.........X..X..X", "..X..X.........X...........", "....................X......", "X.....X...X................", ".........X...X...XX....X..X", ".......X.X.................", ".X....................X....", ".......X...................", "..........X................", ".X.X................X..XX..", ".......X....X.....X........", "X..........................", "...........X.........X..X..", "..........X................", "...X..........X............", "..X............X...........", ".....X...XX................", ".X........X................", "....................X......", ".......X....X.X..........X."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 30.28200785945344;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> boards = {".X..............XXX............", "..........X....................", ".....X......X..................", ".......X.....X.X..........X....", ".....X.........................", "...............................", ".....................XX........", ".X.............................", ".............................X.", "........XX.........X...X.......", ".............X.....X...........", "..X....................X.......", "............................XX.", ".....X.........................", "X.....................X........", "......................X........", "X.............X...........X....", "..........X.....X..X......X....", ".........X.X.....X.............", "....X.....X....................", "........X.....................X", "..................X......X.....", ".......................X.X.....", "........................XXX...X", "............X.X................", ".........X.....................", ".........X...X...............X.", "X.....X...X..........X.X.......", "..............X.X.......X......", "..X.........X..................", ".....X.........................", "..X.X..........X...............", "...X...X.......X...............", ".................X...X.X.......", "....................X........X."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 32.90896534380867;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> boards = {"....X.............X....................", "..........X....XXX.....X....X..........", "..X........X...........................", "..........X......................X..X..", "X........X......X.......X........X...X.", "X....X......X................X....XX...", "..................X...........X........", ".......................X...............", "X..................................X...", ".......XX..........X...................", "........X...............X..............", "......................................X", "..........X..........X...X....X........", ".......................................", ".X...X...........X...........XX........", "........XX.......................X.....", ".....X.............X.X.......X.........", "..X..XX................X...............", "...........................X.X..X......", "....................X.......X.XX..X....", "X....X............X.......X............", "............X..........................", "..X........................X...........", "........X...............X..X........X..", ".....X..X..X...........................", ".X.....X.X.....X....X...X............X.", ".......................................", "X......X...................X...........", "............X....................X.X...", "...........X....X..X...................", "................................X......", "..........X...............X.....X......", ".....................X.................", "....................X..................", "..X...........................XXX.....X", ".X.......X.X........X..................", "..X....................................", ".......X..X.................X.......X..", "...................X...................", "............X..........................", "....X.....X....................X..X...."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 39.88734135035826;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> boards = {".X...........", "X............", "...X.X....X..", ".........X...", ".............", ".............", ".............", ".....X.......", ".............", "X............", "....X........", "...X........X", ".............", "....X.....X..", "......X......", ".............", "......X......", ".X...........", ".X...........", ".............", ".............", "......X...X..", ".............", "........X....", ".............", ".............", ".....X.......", "......X......", ".............", "..X..........", ".............", ".X...........", "............X"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 20.688160865577203;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> boards = {".X................................", "..........X....X.......X....X.....", ".............................X...X", ".......................X..........", ".........X......X.......X.....X...", ".......X..........XX..............", "X.....................X.X.........", ".X........................X..X....", "..X.X......X.......X..............", "..........X.X.....................", "........X...X..........XXX........", "..................................", "........X.........X...X..........X", ".....X............................", "..................................", "..................................", ".X....X.X...X.....X.XX............", ".X...X.................X.........X", "X..............X...........X......", "X......X...................X......", "...............XX...X.............", ".....................X...X......X.", ".............X....................", ".............X..........X.........", ".X...............................X", "..........X.......................", ".X..X.....................X.......", "....X.................X..X........", "..X.....X.....X................X..", "....X.X.......X.........XX........", "....................X.............", "......X.........X............X....", "........X..X....X.................", "..................................", "........X..............X.X......X.", "..X...X...............X........X..", ".....................X........X...", "....X.X....XX.X.........X.........", "..................................", "...............X...........X...X..", ".........XX......X......X.........", ".........X......X.................", ".......X........X.........X.......", "..................................", "..................X.........X.....", "X...........X...................X.", "........X.........................", "...............X.............X....", ".........X....................X..."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 40.76763422127902;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> boards = {"X.............X....X....X..", "...............X...........", ".....X......X......X...XXX.", "..X.........X..X.........X."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 10.344080432788601;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> boards = {"X.................................................", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 49.98979485566356;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> boards = {"."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> boards = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> boards = {"X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 49.98999899979995;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> boards = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 49.49747468305833;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> boards = {"XXXXXXXXXXXXXXXXXXXX", "..................................", "XXXXXXXXXXXXXXXXXXXX", "..................................", "..................................", "XXXXXXXXXXXXXXXXXXXX", "..................................", "X", "..................................", "X", "..................................", "X", "..................................", "X"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 16.727922061357855;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> boards = {"X..XXXXXXXXXXXXX.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXX.XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXX.X.XX.X.XX.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXX.XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXX..........XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.XXXXXXXXXXXXX"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> boards = {"............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X...", "............................................X..."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 48.507731342539614;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> boards = {".............."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> boards = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 41.23105625617661;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> boards = {"XXXX.XXXXXX.XX.X.X..XXXX.XXX.XXX.XXXX.XXXXXXXXXXXX", "XXXXX.XXXXX.XXXXXXX.XXXXXXXXXXX.XXXXX.XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXX.XXXXXXXXXXXXX", "XXXX.XXXXXXXXXXXX.XXXXXXXXX.XXXXXXXXX.XXXXXXXXXXXX", "XXXX.XXXXX.XXXXXXX.XXXXXX.XXXXX.XXXX.XXX.XX.XXXXXX", "XXXXX.XX.XX.XX.XXX.XXX.X.XX..XXXX.XXXXXXX.XXXXXXXX", "XXXXXX.X..X.XXX.XXX.XXX.XXX.XXXX.XXX.XXX.XX.XXX.XX", "XX.X.XX.XX.XXXX.XXX.XXX.X.XX.X.XXXXX.X.XXXXXXXXX.X", "XXX.XX.XXX.XXX.XXX.XX.XXX.XXXX.XXX.XXX.XXX.XX.XXXX", "X.X.XX.XX.XX.X.X...XX.X.XXX.XX.XX.X.X.XX.X.X.XX..X", "XXXX.XXXXXX.XX.X.X..XXXX.XXX.XXX.XXXX.XXXXXXXXXXXX", "XXXXX.XXXXX.XXXXXXX.XXXXXXXXXXX.XXXXX.XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXX.XXXXXXXXXXXXX", "XXXX.XXXXXXXXXXXX.XXXXXXXXX.XXXXXXXXX.XXXXXXXXXXXX", "XXXX.XXXXX.XXXXXXX.XXXXXX.XXXXX.XXXX.XXX.XX.XXXXXX", "XXXXX.XX.XX.XX.XXX.XXX.X.XX..XXXX.XXXXXXX.XXXXXXXX", "XXXXXX.X..X.XXX.XXX.XXX.XXX.XXXX.XXX.XXX.XX.XXX.XX", "XX.X.XX.XX.XXXX.XXX.XXX.X.XX.X.XXXXX.X.XXXXXXXXX.X", "XXX.XX.XXX.XXX.XXX.XX.XXX.XXXX.XXX.XXX.XXX.XX.XXXX", "X.X.XX.XX.XX.X.X...XX.X.XXX.XX.XX.X.X.XX.X.X.XX..X", "XXXX.XXXXXX.XX.X.X..XXXX.XXX.XXX.XXXX.XXXXXXXXXXXX", "XXXXX.XXXXX.XXXXXXX.XXXXXXXXXXX.XXXXX.XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXX.XXXXXXXXXXXXX", "XXXX.XXXXXXXXXXXX.XXXXXXXXX.XXXXXXXXX.XXXXXXXXXXXX", "XXXX.XXXXX.XXXXXXX.XXXXXX.XXXXX.XXXX.XXX.XX.XXXXXX", "XXXXX.XX.XX.XX.XXX.XXX.X.XX..XXXX.XXXXXXX.XXXXXXXX", "XXXXXX.X..X.XXX.XXX.XXX.XXX.XXXX.XXX.XXX.XX.XXX.XX", "XX.X.XX.XX...........................X.XXXXXXXXX.X", "XXX.XX...........................................X", "X.X.X............................................X", "..................................................", "X.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................XXXXXXX.........................", "..................................................", "..................................................", "..................................................", ".................................................."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 42.02848864609503;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> boards = {"XXXX.XXXXXX.XX.X.X..XXXX.XXX.XXX.XXXX.XXXXXXXXXXXX", "XXXXX.XXXXX.XXXXXXX.XXXXXXXXXXX.XXXXX.XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXX.XXXXXXXXXXXXX", "XXXX.XXXXXXXXXXXX.XXXXXXXXX.XXXXXXXXX.XXXXXXXXXXXX", "XXXX.XXXXX.XXXXXXX.XXXXXX.XXXXX.XXXX.XXX.XX.XXXXXX", "XXXXX.XX.XX.XX.XXX.XXX.X.XX..XXXX.XXXXXXX.XXXXXXXX", "XXXXXX.X..X.XXX.XXX.XXX.XXX.XXXX.XXX.XXX.XX.XXX.XX", "XX.X.XX.XX.XXXX.XXX.XXX.X.XX.X.XXXXX.X.XXXXXXXXX.X", "XXX.XX.XXX.XXX.XXX.XX.XXX.XXXX.XXX.XXX.XXX.XX.XXXX", "X.X.XX.XX.XX.X.X...XX.X.XXX.XX.XX.X.X.XX.X.X.XX..X", "XXXX.XXXXXX.XX.X.X..XXXX.XXX.XXX.XXXX.XXXXXXXXXXXX", "XXXXX.XXXXX.XXXXXXX.XXXXXXXXXXX.XXXXX.XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXX.XXXXXXXXXXXXX", "XXXX.XXXXXXXXXXXX.XXXXXXXXX.XXXXXXXXX.XXXXXXXXXXXX", "XXXX.XXXXX.XXXXXXX.XXXXXX.XXXXX.XXXX.XXX.XX.XXXXXX", "XXXXX.XX.XX.XX.XXX.XXX.X.XX..XXXX.XXXXXXX.XXXXXXXX", "XXXXXX.X..X.XXX.XXX.XXX.XXX.XXXX.XXX.XXX.XX.XXX.XX", "XX.X.XX.XX.XXXX.XXX.XXX.X.XX.X.XXXXX.X.XXXXXXXXX.X", "XXX.XX.XXX.XXX.XXX.XX.XXX.XXXX.XXX.XXX.XXX.XX.XXXX", "X.X.XX.XX.XX.X.X...XX.X.XXX.XX.XX.X.X.XX.X.X.XX..X", "XXXX.XXXXXX.XX.X.X..XXXX.XXX.XXX.XXXX.XXXXXXXXXXXX", "XXXXX.XXXXX.XXXXXXX.XXXXXXXXXXX.XXXXX.XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXX.XXXXXXXXXXXXX", "XXXX.XXXXXXXXXXXX.XXXXXXXXX.XXXXXXXXX.XXXXXXXXXXXX", "XXXX.XXXXX.XXXXXXX.XXXXXX.XXXXX.XXXX.XXX.XX.XXXXXX", "XXXXX.XX.XX.XX.XXX.XXX.X.XX..XXXX.XXXXXXX.XXXXXXXX", "XXXXXX.X..X.XXX.XXX.XXX.XXX.XXXX.XXX.XXX.XX.XXX.XX", "XX.X.XX.XX...........................X.XXXXXXXXX.X", "XXX.XX...........................................X", "X.X.X............................................X", "..................................................", "X.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "XXXXXXXXXXXXXXXXXXXXX", "..................................................", "..................................................", "..................XXXXXXX.........................", "..................................................", "..................................................", "..................................................", ".................................................."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 46.61106434105086;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> boards = {"X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 48.979587585033826;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> boards = {"XX.XX.XXXXXXX.XX.X.X...XXXXX.XXX.X..X..XXX.X.X....", ".X.....X.XX.X.....XX....XX.....XX.X.XX..XXXX.XXX..", ".XXXX..X.X.XX..XXXXX.X.XX.XX...XXX....X....XXXXX..", "X....X..X.XX.XX.XXX...X.XX..XX.XXXX..X.XX.XX..X...", "XXXX.....X.XX..X.XXXXXXXXX.X...XX...X...XX..XX....", "X.XX.X.XXX.X...XX.XXX.XXX.XX.XXXX.X....XX..XXXXXXX", "...X.XXXX.X..XX.XXXX..XX..XX............XXXX.X..X.", ".X.XX..X...X.X.X.....XX.XXX..X..XX.X...XXX..XX....", ".XX..XX..XXX..X..XXX...XX.XXXXX..XXX..XX.XXX..XXXX", ".X...X..XXX..X.XX.X...X.X.XXX..XXXXX...XX.XXXX..X.", "X...X...X..XX....X.XXXX.....XXXX.XXX...XXX...XX...", "...XX.X.X.XXX.X...X.X.XXXX.XXXX.X.X.XX.X.X.X..X.X.", "XXX.X..XXXXXXXXX..X...XX..X..X.XX..X...X.XXX..XXXX", ".X..X...X.X.........XX.X..X...XXX.X....XXX..X...XX", "X.XXXXXXXXXXX.XX.XXXX.XX..X.XXX...X.XXX..XX.XX...X", "...X...XX...XXX.XX...XXX.XXXX.X.X.XX..X.X..XX.X...", "..X..XXXXXX.XX.XXXX.XXX.XX...X...XXX.XXXX..XX.X...", "X.X.XX..XX..XXXX..X..X..X....XXX...XX.XXX.X.X.X...", ".XXXX...X.X..XX.X..XX.XX.X..XX..XX.X...XXX.XXX.X..", "...X..XXXXX...X..XX.X..X.X..XX.X..XX...XX...XX..XX", "..XX.XX...XX.X.XX.X.XXXXX.X...X.X.X.XX..XXX....XXX", ".X......XXXXX.XXX.X.......XXXX.XX...XX....X..XX.XX", "X...XX...XXXXXX.X.XXXX...XX.X..X..X.X.XXX..XX.....", "X.X...X.X.X..XXX...X.XX.XX.XX.XXXXX.XX..XXXXX....X", "X.XX..X...XXXXXX....XX.XXXX.XX..XX.X.X.XXXX..XX.X.", "XX.X.XX.XXXXXX.X.....X...X...XX.X.X...XX.XX..X..XX", "...X.X...X..XXX..XXX.X.XX.XX.X.XXXXX.XX...X....XXX", "X...XX.XXXX.X..X.X..XXX...X.XXXX...XXX....X.XX.X.X", "X....X.XX..X.....X.XX.X....XX..X...XXX..X....XX..X", "XX...XXX.X.X.X.X...XXX.X.X...X.XX..XX.XX.XXXXX..XX", "..X..XX.X..X.XX...X....X.X...XXX.X..XX...XX.X.XX.X", "XXX..XXX......X.XX...X.X.XX...XX.XX....XXXX...X.XX", "X.XX....XX.X.XXXX.XXXX..X.X....X.X.X.XX....XXXX.XX", "X.XX..X.X.X.X..X.X...X.XX....XXX.XX...XX.X...XXX.X", ".XXX.X...X..X.XX..XXXX....X..X..XX.X.XXX.XXXXX.X..", "X...XX.XXXX.XXXXXXXXX.X.X.XXX..X.X....XX..XXXX.X..", "X.....XX..X..XX.X.X...X...XX..X.X....X..X.XX....XX", "X....X.....XXXXX.X.XX.X....X....XX...X.X..XXX..X.X", "......XX..X....X...X.XXX.XX...X.X..X..X........XX.", ".XX..X.XXX.XX..XXXXXXXX.X.X....X...XX.XX.XXXXXXX.X", "X.XXXX.XXXX...XX..XXX..XX.XX.XX..XXX.XXXX.XX.X...X", ".XXXXX.XXX.X.X...X..X.X..XXXX.X.....XX...XXXXX...X", "...XX..X...X..X..XXX.X....XX.X.XXX...XX...XXX.....", ".XX..X.XXXXX...X.X.XXXXXX.XX.XXXXX.X.X.X.X.XX.....", "......XX..XXXX.X.XXX.XXX.XX.XXX..X.XXX..X.XX.X....", "XX.X.X.XX.....XXXX..XXX...X.X.X.X.XXX..X..XX..XXX.", "XX...XX....X.XXXXX...XXX..X..XXXX..X....XX.XX..X..", ".XXX......X.X....XX..XXX.XXX.X.X.......XX...XXXXXX", "..X..X...XXX..X..X.XXX.XXXX.........X..XXXXX.XXX..", "X..XX.X.X...XX...XXX..XX.X..X..X.XXX.XXX...XXXXXX."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 49.98999899979995;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> boards = {"X...............X"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> boards = {"....."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> boards = {"XX...XX.....XX"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7416573867739413;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> boards = {"X.XX.XX.XX.X....XXXXX....XX.XX.......XXX..XX...XX.", ".XXX.X.X.XXX.X....XX.X.XX.X...X.XXX..XXX.XXX.XX..X", ".X....XXX.X..X.XXXXX.XX......XXXX..X.XXXX.X.....XX", ".XXXXX..XXXX.X..XXX...XXXX.X.XXX..XX.X.X.XX...XX..", "XXXX..XX..X.XXXXXX..XX.X.X.XX..X..XX.X...X..XX..XX", ".XX..X.......X.X..X......X.XX.XXXX...XXXXXXXX.X..X", "XX.X......X......XX..X..XX.XX.XX..XXX.X..X..XXXXX.", ".XXX.X.X.XX.X.X.XXXX.XX..X.XXX..XXXX...XX.X.XX..X.", "XXX.XXXX..X.X...XXXXXX.X...X..XXX.X....XX.......X.", "..XX..XX..X.....XXX.X.X.X..X.X..XX.....X.....X....", "XX.....XXX.XXXX..XX.X...XX.XXXX..XX.....X...XX.X..", "..X..X..XX.X.XXXXXXXX..XX.XX...X.XX....X..X..X.X.X", "...XX.XXX.....X.XXX.X..XX.XXX...XXXX.XXX.XX....X.X", "XX.XX.......X.X.XXX..X.XXX.X....XXXX.XXXXXXX.XXXX.", "X.X.XX.X.X..X.XXX.XX.XXX..XXX.X...XXX.X..XX.X.....", ".XX.X.XXX.X.X......X.XX..X.XX....X....XX..X..XX.XX", ".X.XX....XX.XX..XXX...XXX..XX..XX...XX.XX.XXXX..X.", ".X..XX...XXX.XX.XX..X.X..XX......XX.X..XX..XXXX..X", ".XX.X.XX.XXXXXXXX....X......X...X.X.X..X...X.XX..X", "X......X.XX..XXX..X....XXX.XX..XXXXX.X.XX.XX.X.XXX", "XXXX..X.XX......X.XX....XXX.XXX.XXX....X.X.XXXXX.X", "....X.XXXX.XXXXXX.....X.XXX.X.XXXX..X.XX..XX.XXX..", "..XXX...XXX...XX...X.XX..X.X.X..X..X.XXXX....XX.X.", "X.X.X.X..X..X.X.XXX.XXX.X....XX.XX......XXX...X.XX", "...XX.XX.XXXXXXX...XXX..X.XX.X...X..X...XXXX....X.", ".....X..XX..XX.X....XX..XX.XXXX..XX..X..X.XXX.X.XX", "...X.XXXX.XX.XX.XXXXXX..X.X..XX..X.X...XXX..XXXX.X", ".XXXX.....X...X.XX.X.X.XXX....XX.X..X.X.X.XXXXXX..", "XX.XXXX....XXXX.XXX.XXXX.X.....XX....XX...X..X.X.X", "X..X.XX....XX....X.X...X.X.X...X.XX.XX.X.XXX.X...X", "XXX..X.......X........X...XXX.X..XXX..X..XX.XXX.XX", "X..X....XXX.X.X.......X....X.X.XX..X.XX....X...XXX", "..XXXX.XXX.XX.X.X..X..X..X.X...X.X.XX.X.X.XXXXXXXX", ".XXXXXXX..XXXXXX.XX..XX.X..XX.X.X..X.X.XXX.XXXX..X", "XXX.XXXXX...XX.XX.XXXX....XX....XX...XX.X..X.X.XXX", ".X...XX.X...XX.X...X.X...XX......XX.X.X.XXX.X....X", "XXX...X.X.X.X.XX.XXX...XX........XXXX...X....X....", "X..X.X.XXXXX.XX.X.XX.XX..X.X....XXXX.X..X.X.X.XX..", ".X....XXXX.X.X..X.XX.XX..XX...X...X..X.XXXXXXXX.XX", ".....X..X.XX.X.XX..XX....XX.X.X..X.X..XX...X.X..X.", ".X........XXXX....X.XXXXX..X....XX...XXX...XXXX..X", ".X.XX...XX.XXX.X.X....XXXXX.X...XXXXXXX....XX.X..X", "XX.XXX.XX.X..XXX.X.XX..X.XX.X.X.X..X...XX.XXX.XXXX", ".XX....X....XXXXXXXX.XXX.XXX.X...XXXX.XXX.X.XXXX.X", "..X..X.XXXXXX..X.X.XX.....XX.X..XX....X.XX...X....", "X.XX.X.X...XXX.X.X..X..X..X.XXXXX...X..XX..X..X...", "XXX..XX.X..XXXXX.XXXX.XX.XX.....XXXX...X.XXX....X.", "X..XX.X.X.X.XX..XX..X.XX.XX.X..X..X.X.XX..XXX.XXXX", "XXXXXX.X.XXX.X.XXX.XX.XXX..X.X..X.X..XX...X.XX.X.X", "X..XX.X.XX.XX.XXXX.X.X.XX..X...XX.X..X..XXXXX.X..."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 49.969990994595946;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> boards = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 41.255302689472536;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> boards = {"..X..X.......X...X...X...X.....X..XX.............X", "......X....X.....X.X..X............X....X..X...X..", "...X...X................X.X.X...X.X...X...........", "X.....X...........XXXXX..X.X.....X..X..XXX...X..XX", "X......XXX....X.....X................X..........X.", ".........X...X..X.X...........X...............XX..", "....XX.....X..X......X..X.....XX......X.X.X.X...X.", "..X....X.X..X........X..X..XX....XX.......XX...XX.", ".......X...X......X..............X.XX.....X...XX..", "..X....XX..X......X.X....X...........X.....XX.....", "..X..XX......X.X.............X..X.....XXXX...X...X", "..X..X..X.X.......X....................XX.........", ".X......X....XXX.X..........X.....X.X.X..X........", "X.....X...X....XX.X..XX.XX.............X.X.X......", "XX...XXX...XXXX.X....X...X.X...XXXX......X.X......", "..X.........X..........X.XX.X.X...XXX.......X.X...", "..X..X.XX.X..X..X..........X........X....X...X.X.X", "...............................XX.......X.X.X.....", ".X.X..XXX..XX..X...X......X......X.X............X.", "X..X.XX.XX.X.......XX.....X....X........XX.X..XX.X", "............XX......X...X.X....X...............X..", "......X...X.X......X...X...X...........X.......X..", "......X..X.X.X.X..........................X.......", "X..X.............X.....X...XX.......X.XXX.XXX...X.", ".X.X...X......X....XX.X......X.XX......X.X...X.X..", "...X............X...........X......X...XX....XXX..", "XXXX...X.....X..X...XXXX....X.X..XX........X......", "...............X.......................XX.........", "X....XX.........X........XX.......X.......X...XX..", "X.....X.X.......X....X...X.............X.X.XX.XXXX", "..........X...X....X...X.X.X.X......XX..X......X..", ".................X.....XX.X.X....X.........X......", "..............X..........X.X..X.....X.......XX....", "........X....X......X........X....X.............X.", "..........XX....X..........X.........XXX..X.X.....", ".....................X.XXX....X.....X.X..XX.X..X..", "...X.X...X...X.............X....X....X.X..XX...X..", "........XX....X....X..X..X..............X......XXX", "....X..XX..X..X..XXXX......X...X....X.........X...", ".XX.................XXX....XX....X..X...X......X..", "........X.....X..X..X.X.X..X.......X....X......XXX", "XX..X....X.X......X..X....X.......X...X....X....X.", "X..X..X...X....X...X......X.X...XX.X...X.........X", "XX.X.X...X....X......X...........X.....X..XX.....X", "........XXXX....X............X...XX.X.....X......X", "....XX....X.....X.....X...X........X....X.X.......", ".......X............X..X.X....XX..XX.X.XX.........", ".......X..........X.........X.X.X..XX.............", "..X...X.X......X............X..X..X.X.X....X......", ".X.....X........X..X.XXX.X.XX.X..X.......X..XX...."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 49.93996395673509;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> boards = {"X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 49.48737212663449;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> boards = {".X.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX.....X..", "XX.....X..XX.....X..XX.....X..XX.....X..XX........", "..................................................", "..................................................", "...............................................X.."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 49.38388161361178;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> boards = {"X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX.", "X..X...X..XX.XXXX...XXXX.X..X...X..XX.XXXX...XXXX."};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 49.98999899979995;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> boards = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 49.98999899979995;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> boards = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXX.XXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXX.XXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXX.XXXXXXXX.XXXXXXXXXXX.XXXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "X.XXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXX.XXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXX.XXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX.XXXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXX.XXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXX.XXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX.XXXXXX.X", "XXXXXXXXXXXXXXXXXX.XXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXXXX.X"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 48.49742261192856;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> boards = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 35.34119409414458;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> boards = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    FenceRepairing* pObj = new FenceRepairing();
    clock_t start = clock();
    double result = pObj->calculateCost(boards);
    clock_t end = clock();
    delete pObj;
    double expected = 38.72983346207417;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10005&pm=6827
********************************************************************************
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
 
double f[3000];
 
class FenceRepairing {
public:
  double calculateCost(vector <string> vs)
  {
    string s="";
    for (int i=0;i<vs.size();i++)
      s+=vs[i];
    int n=s.length();
    s=" "+s;
    f[0]=0;
    for (int i=1;i<=n;i++)
    {
      f[i]=1e100;
      if (s[i]=='.')
        f[i]=f[i-1];
      for (int j=0;j<i;j++)
        if (f[j]+sqrt((double)(i-j))<f[i])
          f[i]=f[j]+sqrt((double)(i-j));
    }
    return f[n];
  }
};

********************************************************************************
*******************************************************************************/