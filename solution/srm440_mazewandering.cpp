/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10005
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

class MazeWandering {
public:
    double expectedTime(vector<string> maze);
};

double MazeWandering::expectedTime(vector<string> maze) {
    double ret;
    return ret;
}


int test0() {
    vector<string> maze = {"*", "."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> maze = {"*.."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3333333333333335;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> maze = {"...", "X*X", "..."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 4.857142857142857;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> maze = {".*.", ".XX", "..."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 13.714285714285714;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> maze = {"*........", "XXX.XXXX.", ".XX.X....", ".....XX.X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 167.2608695652174;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> maze = {"*..", ".X."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 4.6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> maze = {"...", "X.X", "..*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 16.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> maze = {".X.X......X", ".X*.X.XXX.X", ".XX.X.X....", "......XXXX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 227.40740740740742;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> maze = {"..........*", ".XXXXXXXXXX", "...........", "XXXXXXXXXX.", "..........."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 765.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> maze = {"..........*", ".XXXX.XXXXX", "....X.X....", "XXX.XXXXXX.", "..........."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 642.0857142857143;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> maze = {"..", "X*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3333333333333335;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> maze = {"...", "X*X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 4.25;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> maze = {"X*X", "..."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 4.25;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> maze = {"X*X", "..."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 4.25;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> maze = {"X*X", "...", "X.X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 6.2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> maze = {"X.*", "..X", "X.X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> maze = {".......X.X*X.X", "X.XXXX.X.X.X.X", "..X..........."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 221.42857142857142;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> maze = {".X..*X.X", ".X.XXX.X", "........"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 106.375;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> maze = {"....*X.X", "XX.XXX.X", "........"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 92.875;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> maze = {"XXXXXXXX", "XX.XXX*X", "........", ".X.XXX.X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 56.30769230769231;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> maze = {"XXXXXXXX", "XX.XXX*X", "........", ".X.XXX.X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 56.30769230769231;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> maze = {"XX.XXXXX", "X.*....X", "XX.XXX.X", "XX.XXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 10.4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXX", "XXX.XX.XXXXXXXXXX", "XX.*....XXXXXXXXX", "XXX.XX.XXXXXXXXXX", "XXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 14.5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXX", "XXX.XX.XX.XX.XXXX", "XX.*..........XXX", "XXX.XX.XX.XX.XXXX", "XXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 101.6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> maze = {"*..", ".X.", "..X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 6.285714285714286;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> maze = {"*..X.X.X.X.X", ".X.X.X.X.X.X", "..XX........", "X....XXX.X.X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 300.2068965517241;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> maze = {"...X.X.X.X.X", ".X.X.X.X.X.X", ".*XX........", "X....XXX.X.X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 188.17241379310346;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> maze = {"X.X", "...", ".X*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 13.5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> maze = {"X.X", "...", ".X*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 13.5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> maze = {"XXXXXXX.XXXXXXX", "...............", ".XX.XX.X.XX.XX.", ".XXXXX.X.XXXX..", ".XX*XX.XXX...XX", ".....X.....X..."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 922.3260869565217;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> maze = {"XXX.X.X.XXXXXXX", "...............", ".XX.XX.X.XX.XX.", ".XXXXX.X.XXXX..", ".XX*XX.XXX...XX", ".....X.....X..."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 962.2708333333334;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> maze = {"XXX.X.X.XXXXXXX", "...............", ".XX*XX.X.XX.XX.", ".XXXXX.X.XXXX..", ".XX.XX.XXX...XX", ".....X.....X..."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 309.1458333333333;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> maze = {"XXX.X.X.XXXXXXX", "...............", ".XX*XX.X.XX.XX.", ".XXXXX.X.XXXX..", ".XX.XX.XXX...XX", ".....X.....X..."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 309.1458333333333;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> maze = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "........................................*", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 2153.5180722891564;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> maze = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".*......................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 349139.6628830874;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> maze = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X*X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "........................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 349147.6583427923;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> maze = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..............*..........................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "........................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 326804.34619750286;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> maze = {"*X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "........................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 352571.7139614075;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> maze = {"XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".....................*...................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X......................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 89202.34886363636;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> maze = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", "*X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "........................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 465791.94592198584;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> maze = {".X.X.X.X*X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "........................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 425741.70656028367;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> maze = {".X.X.X.X*X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.XX.X.XX.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.XXX.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.......................................", "..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.......................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "........................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 405272.43238434166;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> maze = {".X.XXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.X.", "...XXXXXXXXXXXXXXXXXXX...................", ".X..X.X.X.X.X.X.X..XXXX*X.X.X.X.X.X.X.XX.", ".XXXX.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.XX.X.XX.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.XXX.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.XX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X....................................X..", "..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X...................................X...", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.XX.XXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "........................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 384269.03489439853;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> maze = {".............................................X....", "XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1060942.8006279436;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> maze = {"..X.X..", "X.....X", "..XXXXX", ".X....X", ".X.XXXX", ".X...*.", "...X.XX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 262.6896551724138;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> maze = {"..X.X", "X..*.", "XXX.X", "X...X", "X.XXX", "X.X.X", "X...X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 45.11764705882353;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> maze = {"X.X...X..", "X...XX..X", "..X....X.", ".X.X*X.X.", "...XX...."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 131.43333333333334;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> maze = {"*XXX", ".XXX", ".X.X", "....", "X.X."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 46.7;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> maze = {"X*X.XX.X", "X......X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 36.44444444444444;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> maze = {"X", "X", ".", "*", ".", ".", ".", ".", ".", "X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 13.714285714285714;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> maze = {"*XXX..", ".....X", "X.XX.X", "XXXX..", "X....X", "..XXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 137.72222222222223;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> maze = {".X..XXX", "...XXXX", "X.XX.XX", "X*.....", "XXXX.XX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 26.466666666666665;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> maze = {"X.X...X", "*..XX.X", "XX..X..", "XXX.X.X", "XX..X.X", "..X...X", "X...X.."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 283.14814814814815;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> maze = {".*.X.XX", "X.XX...", "X...XX.", "X.X.X..", "..X...X", ".XX.X..", "XX..X.X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 199.75;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> maze = {".......", "*X.X.XX", ".X..XX.", "..XX.X.", ".XX....", "....X.X", "X.XXX..", "..XXXX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 165.1764705882353;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> maze = {".XX.XX..", "....X.X.", "X.X.....", ".X..X*XX", "..XX....", "X.X.X.XX", "........"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 87.21621621621621;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> maze = {".X.*....", "...X.XXX", "X.XX...."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 26.0625;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> maze = {".*....XX", "X.XXX.X.", "X..X....", "X.X..XX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 74.10526315789474;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> maze = {"XXXX.....", "...X.XX.X", "XX..XXX.X", "XXX....*."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 44.94736842105263;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> maze = {"..........", ".X.XXXXXX.", "XX...X.*..", "X..X.X.XX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 242.32;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> maze = {".X...*X.X.", ".XX.X...X.", "..X.XXX.X.", "X...XX...."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 81.52;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> maze = {"......*.XXX", "X.XXX.X....", "..X.X.XX.X.", ".XX...XX.X."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 59.96153846153846;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> maze = {"XXXX.XXXXX", ".XXX.XXX.X", ".X*....X.X", "..XXXX...X", "X......X.."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 196.75;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> maze = {"X..XX..*.X..", "..X.XXX.X.X.", "X..........."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 111.92;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> maze = {"XX.X", ".X.X", "....", ".X.X", ".X.*", "XX.X", "X...", "X.XX", "...X", "XX.X", "...X", "XX.X", "XX.."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 132.44444444444446;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> maze = {"....XX", "X.X..X", ".X.X.X", "......", ".X.X.X", "X.X...", "X...X.", ".XX.X.", "..X.*X", "X..X.X", "XX...."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 237.1951219512195;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> maze = {"X.XXXX", "..X.X.", "X.X.X.", "......", ".XX.X.", "..XXXX", "X..XX.", "X.X.*.", "X...X."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 328.03333333333336;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> maze = {"..X.....X", ".X..X.XX.", "...XXX.X.", ".X..X....", "..X..X.XX", "X..X....*", ".XX..X.XX", "....X....", ".X.X..X.X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 397.39622641509436;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> maze = {".X.X..X..X.XX..", "...X.X.X.....X.", ".X.X.X...XX.X..", "X..X..X.X..X..X", ".X.X.X...X...X.", ".X....X.X..XX..", "...X.X..X.XX..X", "X.X...X...X..X.", ".X.XX...XX.X...", "......X......X.", "XX.XX.X.XXX.X..", ".....X.....X..X", "XXXXX..XX.X*XX.", "......X........", "XXX.X..X.X.X.X.", ".....X.X.X..X..", "X.XX.XX.X..X.X.", "XX.......X....X", "XXX.X.XX.X.X.XX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 2507.169491525424;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> maze = {"...X..X...X.X......X......", "X.X.X...XX....X.X.XXX.X.XX", "..X..XX...XXX.XX.X.X.XX...", ".X.X..X.XX.......X...X..XX", ".X..X.....XXXX.XX.X.X..X..", ".X.X.XXX.X...X.X....X.X..X", ".X.....X..XX...X.X.X...X.X", ".XX.X.X..X..X.X..XX..XX...", ".....X.X.X.X...X..X.X...XX", ".XX.X..X....X.X..XX.X.XXX.", "X....X...X.X..X.XX..X.X...", "XX.X..X.X...X...X..X....X.", "XXX..X.X.XX...XX.X...XXX.X", "XX.X........X......X......", "X....XXX.XX.X.XXX.X.X.X.X.", "..X.X......X.....X...X...X", ".X.X.XXXXXX..XX.X.X.X.XX..", "X..X.X......X...........X.", "..X...XXX.X..X.X.X.XX.X..X", "X..XX......XXX.X.X...X.X..", ".X....X.XX.X..X..X.X.X.X.X", "...XX..X.....XXX..X.X...X.", ".X..X.XXX.X*XXXX.XX.X.X.X.", ".X.X..XX...X.XX.......XXX.", "X..X.X...X.....XX.X.X.....", "..X..X.X.X.X.X.X...X..X.X."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 9758.550970873786;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> maze = {"...X.....X.X...X.X..", "X.X..XXX.....X.X..X.", "...XX..X.X.XX.X.X.X.", ".X.X..X.X...........", "X...X...XX.XX.X.XX.X", ".XX..XX......X.X.X..", ".X.X...X.X.XX..X..XX", "....X.XXX...X.X.X...", "XXX.X.XX.XX.......X.", ".........X..XXX.XX.X", "X.X.X.XX...X...XX...", "..X..X...X...XXX..X.", "X..XX.XX.X.X.....X..", "..X.......XX.X.XX.XX", "X..X.XXX.XX..X......", ".XX.X......X..X.X.X.", ".X....X.X.X.X.X..X..", "...XX..X.....XXX..XX", "XXX...X.X.X.X.X.X...", "*...X...X..X......X."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 8064.035856573705;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> maze = {".X..X....XX.......X.", "...X.X.X...X.X.XXX..", ".X...X..X.XXX..X..X.", ".X.X...X.XXX.X..X...", "X.X..X....X..X.X..X.", "X..XX.X.XX.X.....X.X", "..XX..X..X..X.X.X..X", "X...X..X..X..X...X..", "X.XX.X.X.X.X.XX.X.X.", "....................", ".X.X.X.X.X.X.X.X.X.X", "..X...X..X.XX.XX..X.", "XX.X.XXX.X......X...", ".....XX..X.XX.X.X.X.", ".X.XX...X....XX.X.X.", "X.XXXXX..X.X...X.X..", "...XX...X...X.X...X.", ".X....X..X.XX.X.XX..", ".X.XXX..XX.X.X..*.X.", "..X....X.......X.X.."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 7849.505976095617;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> maze = {".X....XXX.", ".X.X.X.X..", "...XX...X*", "XX..XX.XX.", ".XX.......", "..X.X.X.X.", "X...X.XX..", "XX.X....X.", "X..XX.XXX.", "..X....X.."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 560.6229508196722;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> maze = {"X.X.X.X.X.X*...X", "..........X.XX..", "XX.XX.X.X....XXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 203.72413793103448;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> maze = {"XXXXXXXXX.....X.XX.X.X.X.X.X.X.XX*XX....XXXX", "XXXXXXXXXX.XX........................X.XXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 534.5681818181819;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> maze = {"XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XX.", ".X.", ".X.", ".X.", ".X.", ".X.", "...", ".X.", "..X", "X..", ".X.", "...", "X.X", "*..", "XX.", "...", ".X.", "X..", "XX.", "X..", "..X", "X..", "XX.", "...", "XX.", "XX.", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 363.06;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> maze = {"XXX..", "XXX.X", "XX..X", "X.X..", "..X.X", ".XX..", "...X.", ".XX..", ".X.X.", ".X...", "..X.X", "X...X", "..XX.", "X..X.", "X.X..", "..X.X", "X...X", "..X..", "XX..X", "...X.", ".X.X.", "X....", ".XX.X", ".....", ".X.X.", "X...X", "..X..", ".X.X.", "....X", "X.XX.", ".....", ".X.X.", ".X.*X", ".X.X.", "X....", "..XX.", "X.X..", "...XX", "X.X..", "....X", "X.X..", "X.X.X", "..X..", "X.X.X", "...X.", ".XX..", "....X", ".X.XX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 2450.9533333333334;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> maze = {"XX.X.X.X", "X.......", ".XX.X.X.", "...X...X", "X.X..XX.", "....XX..", ".X.X...X", "X..XX.X.", "..X.....", ".X.X.X.X", ".X..X...", "...X.XX.", ".X.X....", "..X..X.X", "X..XX...", "..X..X.X", "X...X...", ".X.X.X.X", "*..X.X..", ".X.X...X", "X...X.X.", "..X.....", "X..X.XXX", "X.XX....", "..X..X.X", ".X.X.X..", "X....X.X", ".X.X.X..", "..X...X.", "X...X.X.", "..X.XX..", "XX....XX", "...XX...", ".X.X..X.", "X...X..X", "X.X..X..", "..XX..X.", "X...XXX.", "..X....X", "X..X.X..", "..XX..X.", ".X..X..X", ".X.X.XXX", "...X.X.X", ".X......"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 3365.71615720524;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> maze = {"..XXXXX.XXXX", "X..XXX....XX", "..XXX..X.XX.", ".X.X.X..X...", ".X...X.X.X.X", "..XX...X....", "X.X.X.X.X.XX", "X.......X.X.", ".X.XX.XXX...", ".X.X..X...X.", "..X.X..XX..X", ".X..X.XXX.X.", "..X.X..X....", "X.X.X.X.X.X.", "........X..X", ".X.X.X.XXX..", "..X*X...X..X", ".X....XX.X.X", "X.XX.X...X..", "......X.X..X", ".X.XX.....X.", ".X...X.XXX..", "X..X.X....X.", "X.X.X..XX...", ".X....X.XX.X", ".XX.X....X..", "....X.X.X..X", ".XXX..X..X..", "X....X..X.X.", ".X.X.XXX....", ".XX.....X.X.", "....XX.X.X..", "X.X.X.....X.", "XX...X.X.X..", "X..X.X.X..X.", "..X..X..XXX.", ".XXX.X.XX...", "XXX..X...XX.", ".X..X..X..X.", "...XXX.X.X..", "X.X.X..X..X.", ".....X..X.XX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 4047.1809210526317;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> maze = {"XXXXXXXXX.X...XX.....X", "XXXXXXXXX..XX..XXXX.XX", "XXXXXXXXX.X.X.XXX....X", "XXXX.XXX..X.X..XXXX.X.", "XXXX..X..X..X.X.X...X.", ".XX..X.X..X...X.X.X...", ".X.X.....X..X.X..X..XX", ".....X.X..X..X..X..X..", "X.X.X..X.X..X*X..X..X.", ".X.X.XX....XX.X.XX.XX.", ".....X.XX.X...X.......", "XXX.X......X.X..XXX.X.", "X.....X.XX.....X...X.X", "..X.XX..X.X.XXX..XX...", ".XXX..XX..X....X...X.X", ".XXXX..X.X..XX...XX...", "XXXX.X.....X.XX.X...XX", "..X...XX.X....X...XX..", "X.X.XX....XX.X..X....X", "X......X.X.XX..XXX.XX.", ".X.X.XX......X..X.....", "...X...X.X.XX..XX.X.X.", ".X..X.X..X...X...X...X", "..X.X.XXX..X.X.X..X.X.", "X.X.XXX...XX.X.X.XX.X.", "X..X...XX.X...XXX.....", "..XX.X.....XX...X.X.X."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 5241.119402985075;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> maze = {"..X.XX..XXXX.X....X.XXXXX.", ".X..XX.X.XX....X.X...XXX..", ".XX.........X.X.XX.X..XXX.", ".XXX.XX.XXXX.X..XXXX.X.X..", ".X...X..X.....X..XX......X", "..XXX.X..X.XX...X..X.X.X..", "X..X...X..X...XX.X.X.XX.XX", "..X.XX.XX.X.X..X.X.X.....X", "X...X...X..X..X..X...X.XX.", ".XX.X.X...X.X..X...X..X.X.", "..X..X.XX.....X..X.XXX....", "X...X...X.XX.X.X..XX..X.X.", ".XX..XX..X.X...X.X..X..X..", "...X.X..X....XX...X...X.X.", ".X.....X.XXX...X.X.XX.....", "X.XXXX...X..XX........X.X.", "......XX.X.X.X.XX.X.X.X.X.", "XXXXX........X...X.X.X.X..", ".....X.X.X.X...XX....X.XX.", "X.XX....X.X..X.X.XX.XX..X.", "..X.XX.X....X..........X.X", "XX....X..X.X..X.XX.X.XX...", "...XX...X...XX...X.X....X.", "XXXX.X.X..X...X.XX.X.X.XX.", "........XXX.XX..X..XX....X", "X.XX.XXX....X..X.X...X.X..", "XX.XX....X.XXX...X.X..X.X.", "XX...X*X.X..X..X..X.X.X...", "...X...X.XX..X..X....X.X.X", "X.X.X.X...X.X..X.X.X...X..", "XX...X.XXXX..X....X..X..X.", "...X........XX.XXX.XX.XX..", "XX.X.X.X.X.XX.........XXX.", "...XX...X....X.X.X.XX..XX.", ".XX...X.XX.X.X..XX..XX.X..", "X...X..X....X..XX..X....X.", "XX.XXX..X.X.XX..XX..XX.XX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 17604.17944250871;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> maze = {"X.XXXX.XX....X.XX...X.XXXXXXXXX", "X.XXX...XXX.X..XXX.XX..XXXXXXXX", "...X.XX..X...X..XX.X..XXXXXXXXX", "X.X..X..X.X.X..X.....XX.XXXXXXX", "...X..X.X....X.X.X.X.X..XXXXXXX", ".X..X....X.X.....XX....XXXXXXXX", "..X..XX.X.X..XX.X..XX.XXXXXXXXX", ".XXX.X.....X.X.X*.X.XX.XXXXXXXX", "X..X..X.X.X.....X....X..XXXXXXX", "..X.X....X..XXXX..XXX..XXXXXXXX", "X....XXX..X.....X...X.XXXXXXXXX", "..XX.....X.X.X.X..X.X..XXXXXXXX", "XX.X.X.X...X.XX.X..X..X..XXXXXX", ".....XXXX.X.....X.X.X...XXXXXXX", "X.XXX..X...X.X.X..X..X.XXXXXXXX", ".XX...X.XX..X..X.X.X....XXXXXXX", "....X......X..X......XXX.XXXXXX", "X.X.XX.XXX..X.X.XX.XX.....XXXXX", "X..X..X....XX.....X...X.X..XXXX", "..X.X...XX....X.XX..X.X..XX.XXX", ".X..X.X.X.X.XX...X.X.X.XX...XXX", "XX.X...X....X..X........XX.X.XX", ".....XX..X.X.XX..XX.X.X......XX", "X.X.XX..X.XX....X..XXXXX.XXXX.X", "XX..X.XX....XXX...X.X.X........", ".XXXX...XXX.....X......XX.XX.XX", "......XX....X.X..XX.XX...XX.XXX", "X.X.X....X.X...X...X...X.....X.", "XX...X.X..X..X.XXXX.XX.X.X.X...", "XXXX..X..XXX.X......X.X...X..XX", "XXX..XXX..X..XX.X.X....XX..X..X", "X.XX..XX.X..X...X..X.X.XX.X..XX", "...XXXX..X.X..X..X..XXX...XXXXX", "XX...X..XX.XX..X..X.XX..X..XXXX", "XX.XX..XXXXX.X.X.X...X.XXXXXXXX", "X.....X.XXX..X.X..X.XXXXXXXXXXX", "..X.X......X...X.X..XXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 18400.809106830122;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> maze = {"XXXX......X.X...X...X.XXX..X.X..XX.XXXXXXXXXXXXX", "XXXX.X.XX.X..X.X.XX.X..X..X....X......XXXXXXXXXX", "XXXXXXX...X.X..X..X...X.X...XXX.X.XX.XXXXXXXXXXX", "X...XX.XX....X..X..X.X..X.XX........XXXXXXXXXXXX", "X.X....X.XX.XX.X..X...X.X....X.X.X.XXXXXXXXXXXXX", "XX.XX.X..XX.X....X..X.....X.X...X....XXXXXXXXXXX", "...X....X...XX.X.XXX..XX.X.X.X.X.X.XXXXXXXXXXXXX", "XX...X.X.XX...X.....X.X.X..X..X...XXX.XXXXXXXXXX", "...X.X....X.X..X.X.X.....X..X...X..X...XXXXXXXXX", "X.X.X.XX.X.X.X....X..XXXX..X.XX..X.X.X.XXXXXXXXX", ".X............XXX..X.....X......X.X..XX..XXXXXXX", "..X.X.X.XX.XX.....X.X.X.X..XX.X...X.X.X.X.XXXXXX", "X..X.X.X..X.X.X.X...X.XX.X..XX.XXX..X.....XXXXXX", "X.X.....X.....XXXX.X.....X.X.X....X...XX.XXXXXXX", "...XX.X.XX.XXX..X...X.X.X..X..X.X.X.XX..X.XXXXXX", "X.X.XX....XX...X.XX..X..X.X.X....XX.X.X.....XXXX", ".......XX....X......X..X......XXX.......XX.XXXXX", "X.X.X.X..X.X.XX.XXX..X.X.XX.XX....X.X.X...XXXXXX", "...X...X.X.XX..X....XX.....X...X.X..X.X.X....XXX", ".X..XXX......X...XX....X.XX..X.X..XX.XX..X.XXXXX", ".X.X...X.XXX.X.X.X.X.XX...X.X.X.XX.....X.X.XXXXX", "XX.XX.X.X...X...X....X..X........X.XX.XX.XXXXXXX", "..XX.....XX...XX..X.X.XX..XX.X.X...XXX.....XXXXX", ".XX.XX.XX.XX.XX..X.XX....X..XXXXX.X.X.XXX.XXXXXX", ".X.........XX..XX....XXX.*.X.X.X.......X.XXXXXXX", "...X.X.X.X...X...XXX.....X......XX.X.X...XXXXXXX", "X.X...XXX.XX...XX....X.X..XX.XX.X.X.X.XX.XXXXXXX", ".X..X.XX...X.X....X.X...X...XX........XX...XXXXX", "...XXX..X.X...X.X..X..X.XXXX..XXX.X.X...XX.XXXXX", ".X..XXX.....XXXX..X.X.X......XX.XX.X.XX..XXXXXXX", "X..X....X.X.X.X.X.X.X.XX.X.X..........XX..XXXXXX", "..XXXX.X...X....X....X...X..X.XX.XXXXXXXXXXXXXXX", "X..XX.X.XXX.X.XX..X.X..X..X.X...X..X.XXXXXXXXXXX", "X.XXX.......X.X..XXX..XXX..XX.XX.X....XXXXXXXXXX", "XXX..X.X.XX.....X.XXX..XX.X........XXXXXXXXXXXXX", "XX.X.XX.X.XXXXX....X..X....XX.XXXX.....XXXXXXXXX", "XX..............X.X..X..X.X.......X.X.XXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 10716.20782122905;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXXXXX.X..X..XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX...X..XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX.X...X.XXXXX.XXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX.XX....XXX..X.X.XXXXXXXXXXX", "XXXXXXXXXXXXX.X.X..X..X..XXX.X.X.X...XXXXXXXXXXX", "XXXXXXXXXXXXX.X.XX..X..X...X.X...X.XXXXXXXXXXXXX", "XXXXXXXXXXXXX.X...X.XX...XX..X.XX...X..XXXXXXXXX", "XXXXXXXXX.X...XX.X....XX..XX....X.XX..XXXXXXXXXX", "XXXXXXXX..X.X.....X.XX...X...X.X....X...XXXXXXXX", "XXXXXX..X.X..XXX.X..X.X.X..XXX..X.XXX.XXXXXXXXXX", "XXXXXXX....XX..X.X.X....X.X..XXXX.X.....XXXXXXXX", "XXXXXXXXXX...X......X.XX...X..XX...X.X.XXXXXXXXX", "XXXXXX.X.X.X...X.XX...X.X.X..X.X.XX..X.X.XXXXXXX", "XXXX...X..X.X.X.XX.X.X..X..X...X....X.X...XXXXXX", "XXXXXX...X...X.......X.XXX.X.XX..X.X...X.X.XXXXX", "XXXXXX.X.X.X...XX.XX.X..XX.X..XX.XX..XXX...XXXXX", "XXXXX.XX..XXX.X...XX...X....X..X....X....XXXXXXX", "XXXX....X..XXX.X.X..XX..XX.X..X..XX.X.X.X.XXXXXX", "XXXXXXX...X.X..XXXX..XX.X...X.XX..XX...X....XXXX", "XXXX....X.....X..X.X....XX.X.....X.XX.X*X.XXXXXX", "XXXX.X.X.XXXX...X..XX.X......X.X..........XX.XXX", "XXXXXXX.......X.XX.....X.XX.X.X..XX.X.X.X..X.XXX", "XXXXXX..XX.X.X.....X.XX...X....X.X...X...X....XX", "XXXX...X...X.XX.XXX.XX.X.X..X.XX..XX.XXX..X.XXXX", "XXXX.X.XX.XX.X.X..........X.X.X..XX....X.X...XXX", "XXXXXXX.XXX.XX..XX.XX.X.X.X..X..X..XX.XXXX.XXXXX", "XXXXXX.........X.X.X...X.X..X.X.X.XX...XXXXXXXXX", "XXXXXXXX.X.X.X.....X.X.X...X..X.....X.X.XXXXXXXX", "XXXXXXXX.X..X..X.X..X..X.X...X..X.X.X....XXXXXXX", "XXXXXXXXX..X..X...X..X..X..X.X.X.XX..X.XXXXXXXXX", "XXXXXXXXXXX..X.X.X..X..X..X..X.....XXXXXXXXXXXXX", "XXXXXXXXXXXXX....XX.XX..XX.X..X.XX.XXXXXXXXXXXXX", "XXXXXXXXXXXX..X.X....X.X.X...X....XXXXXXXXXXXXXX", "XXXXXXXXXXXXX..X..XX.X...XX.XXX.XXXXXXXXXXXXXXXX", "XXXXXXXXXXXX..XXX...X..X..X....XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXX.XXXX.X..X..XXX.XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXX.XX....X.X.X.XX.XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XX.X...XX.XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX..XXX.XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 17597.65620328849;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> maze = {"XXXXXXXXXXX.....XX..X..X..X.XX...X.X.X.X..XXXXXX", "XXXXXXXXXX.X.XX....X.X..X....XXX...X.....XX.XXXX", "XXXXXXXXXX..X..X.X.....X..XXXX..XX.X.XX.XXX.XXXX", "XXXXXXX.X.X.X.X.XXX.XX..X.....X.X..X...X.X..XXXX", "XXXXX.....X.X.X..X.X...X..X.XXX..X...X.X...XXXXX", "XXXX..X.X.....X.X....X...X.X....X..XX.X..XX..XXX", "XXXXXX..X.X.X.X.X.X.X.XX....X.X..X.XX..X....XXXX", "XXXX.XXXXX.X.....X.X..X..XXX.X.X.X....X..X.XXXXX", "XXXX.X..X..X.XX.XX..X..X...X.X...X.XXX..XX.XXXXX", "X.....X...X.X.X...X.XX...XX..X.XX....XX..XX.XXXX", "XX.X.X.XX.X...XX.X....XX..XX....X.XXX.X.X.X.XXXX", "XXX....X..X.X.....X.XX...X...X.X....X...X....XXX", "X..XX.X.X.X..XXX.X..X.X.X..XX..XX.XXX.XX..X.XXXX", "XX.........XX..X.X.X....X.X..XX.X.X......X.XXXXX", ".X.XX.X.XX...X......X.XX...X..X....X.X.XX...X..X", "...X.X.X.X.X...X.XX...X.X.X..X.X.XX..X.X..XX..X.", ".X.X...X..X.X.X.XX.X.X..X..X...X....X.X..X...X..", "X..X.X...X...X.......X.XXX.X.XX..X.X...X.X.XX.X.", ".XX.XX.X.X.X...XX.XX.X..XX.X..XX.XX..XXX....X.X.", "....X.XX..XXX.X...XX...X....X..X....X....XX.....", ".XX..*..X..XXX.X.X..XX..XX.X..X..XX.X.X.X.X.XX.X", "..XX.XX...X.X..XXXX..XX.X...X.XX..XX...X...X..XX", ".X..X...X.....X..X.X....XX.X.....X.XX.X.X.X..X.X", "XXX..X.X.XXXX...X..XX.X......X.X..........XX....", ".X.X..X.......X.XX.....X.XX.X.X..XX.X.X.X..X.XX.", "...X.X..XX.X.X.....X.XX...X....X.X...X...X....X.", "XX.....X...X..X.XXX.XX.X.X..X.XX..XX.XXX..X.X.X.", "...X.X.XX.XX.X.X..........X.X.X..XX....X.X...X.X", ".X..XXX.XXX.XX..XX.XX.X.X.X..X..X..XX.X.X..X....", "X..XXX.........X.X.X...X.X..X.X.X.XX....X.X..X.X", "XX..X.XX.X.X.X.....X.X.X...X..X.....X.X.X..XX...", "X..X...X.X..X..X.X..X..X.X...X..X.X.XXX.X.XXXX.X", "XX.XX.XX.X.X..X...X..X..X..X.X.X.XX....XX...X...", "XXX.......X..X.X.X..X..X..X..X.....X.X...X.XXXXX", "XXX.X.XX.X..X....XX.XX..XX.X..X.X.XX..X.XXXXXXXX", "XX..XX....XX..X.X....X.X.X...X...X...X..XXXXXXXX", "XXX.XXX.X.X.X..X..XX.X...XX.X.X.X.XX..XX.XXXXXXX", "XXXXXX..X....X..X...X..X..X...X.....X.......XXXX", "XXXXXXX..X.XXX.X.X.X..X..X.X.X.X.XX.X.XX.XXXXXXX", "XXXXXX..X..XX.XX....X.X.X..X...X..X..XXX.XXXXXXX", "XXXXXXXXX.X......X.X..X..X...X..X..XXXXXXXXXXXXX", "XXXXXXXXXXX.X.X.X...X..X.X.X.X.XXX.XXXXXXXXXXXXX", "XXXXXXXXXXXX..XXX.X.X.X.X..XX..XX.XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX....X.X....X...X.....XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX.X..X.XX..X.X.XX.X.XXXXXXXXXXXXX", "XXXXXXXXXXXXXX....X.X.X..X.....X.XXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 58366.692170818504;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> maze = {".X..XXXX.X.XXX...X..XX.X..X.........XXXX.XXXXXXXXX", "..X..XXX.X.XXXXX..X......X.XX.X.XXXXXXXX.XX.XXXXXX", ".X..XX.....XXXXX.X.X.XX.XX..X..XX..XXXXX..X.XXXXXX", ".X.X.XXXXX..XXX..X..X...X..X..X.XX..XXX..XX.*XXXXX", "......XXX..X.X..XXX..X.X..X.X.....X..X.X..X.X.XXXX", "X.X.X..X.X.X..X..X.X.X...X..X.XX.X..X..X.X....XXXX", ".X...X.X.....X.X......XX...X....XXX...X..X.XXXXXXX", "..X.X.X.X.XX.X...X.XX....XXXX.X.XX..XXXX.....XXXXX", "X...X.X..X....XX..X..X.X...X...X...X..X..X.X.XXXXX", "XXX....X..XX.X.X.X.X..X..XX..X..XX..X...X...X.XXXX", "X.X.X.X.X.X..X..X....X..XX..XXX....X..X..XX...XXXX", ".....X....XX..X.XX.X..X.X.X.XXX.XX..XX..X.XXXXXXXX", "X.X.XXXX.X...XX...X.X...X....X.X...X..X......X..XX", ".X...X.X..XX.X..XX...X.X.X.XX..X.X..X...X.X.XXX..X", "..XX.X..X.....X...XX..........X.X..X.X.X.XXX.X..XX", ".X.....XXXXX.X.X.XX.XX.X.X.XXX...XX.......XX...X.X", "...X.X..X..X.X.X.X....X..XX....X...X.XX.XX...X....", ".X..XXX..X........XX.X.X..X.X.X.X.XX...XX.X.X.X.XX", "..XX.X.X...X.X.XX....X...X..XX...X...X.........XX.", "XX.X...X.X.X.X.X.X.X...XX..X.XX.X.XX..X.XX.X.X....", "....XX....X...X..XX.XX...X...........X.X..XX.XXX.X", "XXX....XX.X.X.XX......X.XX.X.X.X.X.XX..X.X..X...X.", "....X.X...X..X.XX.X.X.......X...X.X..X.X.XX.XX.XX.", "X.XX.X..X..XX...X.X.XX.XX.X.X.X....X...X..........", "XX.....X..X..X.X.X.X.XX...XX.X.XXXX.X.XX.XX.X.XX.X", "X.XX.XX..X.X.X.........XX..................X.X.XX.", "......X.X.....XX.X.X.X....X.X.X.X.X.X.X.X.XX......", "X.X.X..X.XX.X..XX..X..X.X..XX..XXX.X...XX....X.XX.", "..XX.XX....X.X...XX..X.XX.XX.XXXX..XX.XX.X.X..XX.X", ".X......XX.....X....X.....X..X.X..X......X..XX....", "XX.XXX.X.X.X.XX..XXX.XXX.X.X.....X..X.XX..X....X.X", "....X..X..X.X...X............XX.X.X..X...X..XX.X..", ".X.X..XXX.....X..XXXX.X.X.XX.X.X..X.X..X..XXX.XXX.", "X...XX.X..X.X.X.X.....X.XX...X.XX.X..X..X.....X...", "XXXX.....XX.X.XX..X.X.X..X.X.......XX..X..X.X.XXX.", "X.X.X.X.X....X..X..X...X..X.X.XX.X...XX.X..X...XXX", "X.....XXXX.XX.X...XX.XXX.XX.....X.X.X...X.X.XX.XXX", "..XX.X.....X....X...X....X.X.X.XX.XX..X.X.....XXXX", "XX.X..X.XX..XX.X.X.XX.XX...X.X.......X.XX.X.X..XXX", "XX.XXX.XX..X.X.X..XX..X..X.X..XX.X.X.....X.X..XXXX", "XX........X......X..XX.X..XXX...X...X.XX.X..X.XXXX", ".X.X.X.X.X..XX.X..X......X.X..X..X.XX..X...XX.XXXX", "....X.XX.XXX....XX.XXXX.XX...X.X.X...XXX.X..XXXXXX", "X.XX.......XX.XX..........XX....X.X.XX..X.XX.XXXXX", "X.XXX.XX.XX..XXX.XX.XX.X.X..X.XXX.XXX..XX.....XXXX", "XXXX...XXXXX..X.XX.X...X..X.XX.......X..XX.X.XXXXX", "XXXXXX.X.XX.X........X..X......XX.X.XX.X.XX...XXXX", "XXXXX.X.......X.X.X.X..XXX.XXX...X..........XXXXXX", "XXXX....XX.X.X.X..XX..X.XX....XX..XX.XX.X.X...X.XX", "XXXXXX.X...X....X...X.....X.X..X.X....X.X..XX....X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 104223.21975662133;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> maze = {".X......X.XX....X.X...X...X....XXXXX....X.X...X.XX", "...X.X.X....XXX.X...XX..XX.XXX..XXX..XX....XX...XX", "XX.X..X.X.XXX....XX..X.X...X...X.X..X..XX.X...XXXX", "..XX.X....X..XX.X.XX...X.XX.XX....X..X.X.X..X.X..X", ".X....X.X...XX..X..X.XX.....X..X.XX.X.....X.X...X.", "..X.X..X..X.X.X.X.X..X..X.XX..X.X....X.XXX...X.XX.", "X.XX.X.XX..X.......X..X.X.X..X....X.X......XX.X...", "...X.....X.X.XX.X.X.X.X..X..X..X.X.X..X.XX......X.", ".X..XX.X.X..X....XX....X...X..X.XX.XX..X..X.XXX.X.", "XXX...XX...X.X.X.X.XX.X.XX..X.......X.XX.X.XX..X.X", ".X..X...XX.X....X..X.....X.XXX.XX.X.X......X..X..X", "..XX..X....XX.X...XXX.X.X...XX.XXX.X*.X.X.XXX...X.", "X....XX.XX..XX.XX..X...X.XX.....XX.XX..X.X.X..X.X.", "..X.X...X.X......X.XX.X...X.XXX.......X....X.XXX..", "X.XX.X.X....X.XX......X.XX.....X.X.XX...X.X...XXX.", ".X.....X.XX.XX...X.XX.X.X.X.X.X...X..XX..X..XX.X..", "...X.X..X.X..X.XX.X.....X....X..X.X.X..X.XX.XX.X.X", "X.X...XX....XXXXX..XXXX.X.XX..X..X....XX..X.......", ".X.XXXX..X.XXX.X.X.X.......XXX.XX..X.X..XXX.X.XXX.", ".X......X..XX....X.XX.X.X.X......X..XX.X....X.X..X", "..XXXX.XXXX..XXX.....XXXX...X.XXX..X....X.X..X.X.X", "X.X.....X..X....XXX.X.X...X..XX.XX.X.X.X.X..X.....", "X.X.XX.X..X..XX........X.X.X..........X..XX...XXX.", "...XX.X.X...X..XXXXX.XX....X.XX.XX.XXX..X...X....X", ".X........XXX.X.......X.X.XX.X...X.....X.X.X.XXXXX", "..X.X.XX.X.....X.X.XX.XX....X.XX.X.X.X...X...X...X", ".XX.X.X..XX.XX....X.X...X.X.....X...X..X...X..X.X.", "X..X.X..X.XX.X.XXX....X....X.X.X.XXX.X..X.X.X.....", ".X....XXX.....X....X.XX.X.X.XX........XX.X..X.X.XX", "..XXX.....XX.X..X.X.X...X.....X.X.X.XX.X...X.X..X.", "X.X..X.XXX.X...XXX..X.X..X.X.X...XX......X....X...", "X.XX...X.....X.XXXX...X.XX..X.XX.X.XX.X.XX.X.X..XX", ".....X.XX.X.X...XX.X.X.X...X..X.X...X.X...X.XX.XXX", ".X.X.XX...X.XX.X....X....X...X....X.X.XX.X....XXX.", ".X..X...X..X....XX.X..X.X..X...XX.XX....X..XXX.X..", "..X.X.X.X.X.X.XX.....X..XX..X.X....XX.X..X.X.....X", ".X.X..X..X..XX.XXXXX.X.X...X..XX.X...X.X.....X.X..", "X...X..XX.X..........X.X.X..X...XX.X....X.X.X.X.X.", ".XX..XX....XXXX.XX.X.X.X..X..X.X....X.X.X..XX.X..X", "....X..XX.XX..X.X..X.X..X..X.X..XX.XX.XX.XX.X...X.", "X.X..X.X....X....X..XXX..X.X.X.X...X.X.......X.XX.", "...XX....XX...XXX..XXXX.XXX..X.X.X.....X.XXX...X..", ".X....XX.X..X.X...X.XX..XX..X..X..XX.X..XX.X.X...X", ".X.X.X...X.X.X..X.....XX...X..X..X.X..X.X.....XX..", "X...X..X.X.X..X..X.XX.X..X..X..X.X..XX...X.XXXXX.X", "..X..X..X..XX...X...X..X.X.X.X.X..X.X.X.XX....X..X", ".X..X..X.X..X.X..X.X..X.X....X.XX......X..X.X..X..", ".X.X..X....X...X.X.XXX....X.X....X.XX.X.X.X..XX..X", "X.XX.X.XX.X.X.X..X...XXXX.XX..X.XX..X......X..X.X.", ".........X.....X.X.XX.......XX..X..XXX.X.X.X.X...."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 69507.26925653048;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> maze = {"...X..X.X.X.....X..X.X.X.X..X..X..X.X.X..X.X.XX..X", ".XX..X..X.X.X.X..X.X...X..X..X...X.....X.......X..", "....X.X.X..X..X.XX...XX..X..X..XX..XX.X.XX.XX.XXX.", "X.XX.....X..X..XX.XX...X...X.X..X.X..X..X....X.X..", "X.X..XX.X.X..X....XXX.X..XX...X.....X.X...XX.X..X.", "...XX.......XXXXX..X....X..X.X..XXXX...XX.X.XX.X..", "XX...XX.X.X.XX....X..XXX..X..XX.....X.X...X......X", "..XX.X.X.X....X.X..X...X.X..X..X.X.XX..XX...X.XX..", ".X.X.X...X.X.XXX.X..XX...X.X.X....X...X...X.X...X.", "......XX..X...X...X.X..X.X.X...XXX.X.X..X..X.X.X.X", "X.X.X.X.X.XX.X.X.XX.X.X..X.X.X.........X.XXX..XX..", "..XX...........X.X....X.X...X.X.XX.X.XX..X...X..X.", ".X...XXXX.XXXX...X.XX..X..XX..X.X.X..X..X..X...X..", "X..XX...X.X...XX..X..X.XX...X......XXXX...X.XX...X", ".XX..XX.XXXXX...X.X.X...X.X..X.XX.X..X..X.X...XX..", ".X.X.X....X..X.XX.X.XX.X...XX..X.XX.X..XX.X.X..XX.", "......XX.X..X...........X.X...X..X..X.X..X...X...X", ".X.XX..X.XX..XX.XX.XXX.XX..X.X..XXX....X...XX.XXX.", "XX.X..X.....X..X..X.......X..X.X.X..X.X.XX.X....X.", "..X..X.XXX.X.X.XX..XX.X.X..X.X...X.XXX.......XX.X.", ".X.X.....X.X.X..XX..X..X..X..X.XX...X.X.XXX.X..X..", ".....X.X.......X..X..XX.X...X.....X.......X..X..X.", "X.X.XX..X.X.XX..X.X.X.....X...X.X.XX.XXX.X.XX.X...", ".X.X...XXX.X..X......X.X.X..X..XX...X...X...X...X.", "....X.X.X...X...X.XX..X.X..X.X...XX...XX..XX..X.XX", "X.X...X..XX..XX.X.X.X.....XX...X.X..XX.X.X.X.X.X..", ".XXXXX.X.X.X.X.X..X.XX.X.X..X.X.XXX..............X", "..X..............X.....X..X..X...X.X.X.X.X.X.XXX.X", ".XX.X.XXXX.X.X.XX.X.XX..X...XX.XXX.XX.X.XX..XX.X..", ".X.X.XX.....X...X...XX.XX.X...............X....X.X", ".X.....XX.X.XX.X..XX...X.X..X.X.X.XX.X.X.X.X.X..X.", "...X.X..X..X...X.XXXX.X..X.XX..X.XX.X.X.X..X..X...", ".XX..XX...X..X.X..XX...X.....X............X.X..X.X", "X...X.XXX..X..X..X...X.XX.XX..XX.XXX.X.X.X...XX.X.", ".X.X......XXX..X..X.X.X...X..XX....X..X.XXX.X.X...", "..X..X.XX..X..X.X..X....X..X...X.X..X....XX.....X.", "X...XXX...X.X.X.X.X..X.X.X.X.X..X..X.X.X....X.X..X", "XX.X.X.X.XX.....XX.X.X.X.X.XXXX..X....X..X.XX..X..", "X.X........XX*XX.X...X...X...XX.X.X.XX.XX....X.X.X", "....X.X.X.X..XX....X.X.X.X.XX.....X......X.X.XX.X.", ".XX..X..X..X....XX.X.X.X..X.X.X.XX..XX.X.X.X......", "XX.X..XX..X..XX.X...X..XX....X..X.X..X.X..X..X.X.X", ".....X.XX.XXX..X.X.X.X...X.X..XX....X...XX.XXX..X.", ".X.X.X.......X........X.XX..X.X..X.X..X.......X...", "X.XX..X.X.X.X.X.XX.X.X....XX..XX.X.XX.X.X.XX.X..X.", ".....X.X..X.X...X...X.XX.X..XX...X...X..X.X.X.X.XX", "XXXXX....X..X.X.X.X....X.XX.X..X.X.X..XX....X.....", "....XXXX..X..XX..X..X.X......XX.X...X...X.X..XXX.X", ".XX......XXX.X..X.X.X..X.X.X.....X.X..X..X.X....X.", "..X.X.XX..X..X.X....X.X...X..X.XX...X..X....X.X..."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 83950.9012508229;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXXXXXXX.XX..XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX...X.X...XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXX.X...XXX..XXX.XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXX..X.XXX.X...X.X.XXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXXX....XX...XX....XXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.X..X..XX...XX....XX..XXXXXXXXXX", "XXXXXXXXXXXXXXXXXX..X..XX...X.X..XXX..X.XXXXXXXXXX", "XXXXXXXXXXX...XXX..X.X...XX..X.X..X..X.X.X...XXXXX", "XXXXXXXXXXXXX..XXX.X..XX.X..X..X.X.X...X..X.X.XXXX", "XXXXXXXX...X..X..X.XX.X..XX..X.....X.XX..XX...XXXX", "XXXXXXXX.X.XX.XX.X..X..X..X.X..X.X.X.X.X....XX.XXX", "XXX.XXX.X......X..X...XXX...X.X...X......XX..X.XXX", "XXX.XX....X.XX..X..X.X.X..X....X.X..X.X.X..X...XXX", "XXX.X.X.XX.X..X...X....X.X..XXX.X.X..XXX..X.XXXXXX", "XXX...XXXX.X.X..X..X.XX.X.X...X...XX..X..X..X.X.XX", "X..X.X..X.....X..X....X....X.X..XX...X..X.X.X.X.XX", "X.X....X.XXX.X..X..X.XX.X.X...X.XXXX...XX.X.....XX", "....X.XX.X....XXXXX..X.X..XX.X...X...X......X.XX..", "X.X..XX..X.X.X..X..X....X..X.X.X..X.X.XXXXXX.XXX.X", "...X...X..X....X.X...XX..X...XX..X..X.........X...", "X.X..X.X.X..XXX....XX..X..XX...X..X...XXX.XXXX..X.", ".X.XX..X..X....XX.X..X..X.X..X.X.X..X.X..X...X.X.X", "......X.X.X.X.X.X.X.X..X..X.X..X..X..X..X.XX......", "X.X.X........X...X..XX...X...XX.X.X.XX.XX....XXX.X", "XX.X.XXXXXX.X.X.X.X...XX..X.X.............X.X...XX", "..............X.....X.X.X.....X.X.X.XX.X.XX...X..X", ".XX.XX.XX.X.X...X.XX......X.XX.X.X.X..X..X..XX.X..", "X..X.X.X..XXX.X.XX.X.X.X.XX..........X.XX..X....X.", ".X.X..X..X...X.X......X....X.X.X.X.X.....X.X.X.X.X", ".....X..XXXX....X.XX.X..XX.X.X..X..X.XXX..XXX..X..", ".X.X..XX.X.XX.X...X.X..X..X..X.X.X.XX...XX.X.X.X.X", "X.X.X.XX......XX.XX...X.X..X.X...X....X...........", ".........XX.X..X.X.XX.....X...X.X..X.X.X.X.XX.X.X.", "X.XXX.X.X..X.X.X.X....X.X.X.X..X.X..X.....X....XX.", ".X....X..X......X..X.XX.XX...X...X.X.XXX.XX.X.X...", "...X.X..X.XX.X.X..X..X...X.X.X.XX......X.X.XX.X.X.", ".X..X..XX.X.X...XXXX.X.X..X.X...X.XXX.X......X..X.", ".X.X.XX.......X.X.X...X..X...X.X.X...X..X.X.XX.X..", ".XX.....X.X.X..X....X..X.XX.X......X..X.X.X.X.X..X", "X.X.XX.X..X.X.X..X.X.X.X.....X.XX.XX.X...XX....X.X", ".....X.XX.XX...X.X.X...XX.XX.X.X....XXX.X...X.XX..", "XXX.X.X.....X.X..X.X.XX....X.X..X.X.XXX.XXX..XXXX.", "XXXX....X.X..XXX.X..X..X.X.X.X.X...X.X..XXX.XXXXXX", "X.X..X.XX..XX.X...X...XX.X..XX.X.X...XX.XXX...XXXX", "X...XXX...XX....X.XX.XX..XXX....X..XX.XX.X..XXXXXX", "XXX.XX..X...XXX.X.X..X.X...X.X.XXX.......XX..XXXXX", "XX*.X..X..X..X...X..X....X..XX...X.X.X.XXXX.XXXXXX", "XXX.X.XXX.X.X..X..X.X.XX.X.X...XXXXX.X.XXXXXXXXXXX", "XXXXXXX...X..X..XX.X...X.X..XX.X.XXXXXXXXXXXXXXXXX", "XXXXXXXX.XX.X..XXX...X.X.X.XXX...XXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 101559.55913113436;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXX..XXX.XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX..XXX..XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXX..X.X..XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX..X..X.X.X.XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXX.XX..X.....X.XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXX.X.XX..X.X..X.XXX.X.X.XXXXXXXXX", "XXXXXXXXXXXXX..XXXX...XXX...X.XXXXX......XXXXXXXXX", "XXXXXXXXXXXXXX..XXXX.X.X..X....XXX..X.X.XXXXXXXXXX", "XXXXXXXXXXXXXXX...X....XXX..XXX.X.X..XXXXXXXXXXXXX", "XXXXXXXXXXXXXXX.X..X.XX.X.X...X...XX..X..XXXXXXXXX", "XXXXXXXXXXXX.XX.XX....X....X.X..XX...X..X.X.XXXXXX", "XXX.XXXXXXXX.X..X..X.XX.X.X...X.XXXX...XX.X.XXXXXX", "XX..XXXXXXX...XXXXX..X.X..XX.X...X...X......XXXXXX", "XXX..XXX.XXX.XXXX..X....X..X.X.X..X.X.XXXXXX.XXXXX", "XXXX...X..X....X.X...XX..X...XX..X..X.........XXXX", "XXXX.X.X.X..XXX....XX..X..XX...X..X...XXX.XXXX..XX", "XX.XX..X..X....XX.X..X..X.X..X.X.X..X.X..X...X.XXX", "X.....X.X.X.X.X.X.X.X..X..X.X..X..X..X..X.XX......", "XXX.X........X...X..XX...X...XX.X.X.XX.XX....XXX.X", "XXXXXXXXXXX.X.X.X.X...XX..X.X.............X.X...XX", "XXX...........X.....X.X.X.....X.X.X.XX.X.XX...X..X", "XXX.XX.XX.X.X...X.XX......X.XX.X.X.X..X..X..XXXX..", "XXXX.X.X..XXX.X.XX.X.X.X.XX..........X.XX..XX...X.", "XXXX..X..X...X.X......X....X.X.X.X.X.....XXXXX.X.X", "XX...X..XXXX....X.XX.X..XX.X.X..X..X.XXX..XXX..X..", "XXXX..XX.X.XX.X...X.X..X..X..X.X.X.XX...XX.X.X.X.X", "XXX.X.XX......XX.XX...X.X..X.X...X....X...........", "X........XX.X..X.X.XX.....X...X.X..X.X.X.X.XX.X.X.", "XXXXX.X.XX.X.X.X.X....X.X.X.X..X.X..X.....X....XX.", ".X....X..X......X..X.XX.XX...X...X.X.XXX.XX.X.X...", "...X.XX.X.XX.X.X..X..X...X.X.X.XX......X.X.XXXXXX.", ".XXXXXXXX.XXX...XXXX.X.X..X.X...X.XXX.X......XXXX.", "XXXXXXX.......X.X.X...X..X..XX.X.X...X..X.X.XXXXXX", "XXX..*..X.X.X..X....X..X.XX.X......X..X.X.XXXXXXXX", "XXXXXX.X..X.X.X..X.X.X.X.....X.XX.XX.XXXXXXXXXXXXX", "XXXXXXXXX.XX...X.X.X...XX.XX.X.X....XXXXXXXXXXXXXX", "XXXXXXX....XX.X..X.X.XX....X.X.XX.XXXXXXXXXXXXXXXX", "XXXXXX..X.XXXXXX.X..XXXX.X.X.X.X...XXXXXXXXXXXXXXX", "XXXXXXXXX..XXXX...X..XXX.X..XX.XXX..XXXXXXXXXXXXXX", "XXXXXXX...XXXX..XXXX.XX..XXX....X..XXXXXXXXXXXXXXX", "XXXXXXXXX...XXX.XXXX.X.X...XXX.XXX..XXXXXXXXXXXXXX", "XXXXXXXXX.X.XX..XXXXX....X..XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXX.X.XXXXXXXXXXXX.X.XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 52505.09101516919;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> maze = {".XX.X..X....XX..X..X..XX.....X..X..X.X........X...", ".X..X.X.X.X...X.XX..X...X.X.XX.XX.XX..X.X.X.XX.X.X", "...XX...XX.X.X....X.XX.X..X....X.....X..X.X.X.....", "XX....XX.....X.XX....X.X.X..XX.X.X.X..X..X...XX.X.", "X.X.X...XXXX..X..XXX.X..X.X.X.X..X..X..X..X.X..X..", "..X..XXXX....X.X...X..X*.......XX.X..XX..X.X..X..X", "X...XX..XX.X.X.X.X...X.X.X.XXXX...X.X...X....X.X..", "..X.X..X..X....XX..X...XX......XX....XX..X.X...X.X", ".XX.XX..X..X.X..XXX.XX...XX.X.X...XX..XX....X.X...", "XX.....XXX.X.X.X..X..X.X..X..X.XX.X.XX...XX..X.X.X", "X.XXXX..X..XX...X..X..X..X.X....X.....XX...XX..X..", "X......XXX....XX.X.XX..X.....XX...XX.XX.X.XX..XXX.", ".X.X.X..X..XX.X......X..X.XX..XX.X...X..X....X.X..", "..XX..X..X.X...XX.X.X.X..X.X.X..X.X.X.X...X.X....X", "X.X..X..X.X..XX..X.....X.....X.X...X....XXX..X.X.X", "...XX.X.X..X.X..X..X.X..X.XX.X...XX..XX....XX...X.", "XX.X......X...X..XX.X..X.X.....X.X.X..XX.X.X..X...", ".....X.X.X.X.X.X.....X....XX.XX.XX..X...X.X..X.X.X", "X.X.X..X.X.X.X.X.X.XX.X.X.........X...X.X.XX....XX", ".XXX..X......X..X..X...XXX.X.X.X.X.X.X.X.....XX..X", "..X..X.X.X.X.X.X.X..XX..X.XX..X.X........X.X.XXX..", "X..X.X..X.X....X..X....X.....X...X.XXX.X..X...XX.X", ".X.XX..X....XX..X..X.X...X.X...XXX...X.X.XX.X...X.", ".X...X...X.X...X..XXX..XX..XX.X....XX.XX.X.X..X...", ".X.XX..XX.XX.X..X..XX.XX..X.XX..XX....X.X...X.X.X.", ".....XXX......X...X...X.X......X.XX.X...X.XX.XX.X.", ".X.X.....X.X.X.XX..X.X....X.XX.....X.XXXX......X..", "X.X.X.X.X.X.X.....X.X..X.XX...X.XX.X......XX.X..X.", "....XX.XX.....XXX.....X....X.X...X...XXXXX..X.XX..", "X.X....X.X.X.X..X.X.XX..X.X...XXX..X......X....XX.", "XX.X.X....X..XX....X...X..X.X....X..X.X.X...X.X.X.", "X....XX.X...X...XXX..X..X..X..XX.X.X...X..X.X....X", "..X.X..X..XX.XX....X.X.XXX..X..X.XX.X.X.X..XX.X.XX", "X..X.X...X....X.X.X..X.XX..XX.XX....X.X.X.X....XXX", ".XX...X.XXX.X....X..XXX...X.....X.XX.....X.XX.X.XX", "...XX....X...X.XX..XXX.X.X..X.X.X...X.XX....X....X", ".X....XXX..XX...XX.XX....X.X...X..X..X...X.X.X.XX.", "X..XX.X...XX..X...X...X.X...X.XX.X..XXX.X.XX.X....", ".X..XX..X.X.X..X.X..X..X..X..X..XXX..X........X.XX", ".X.X..X..X....X...X..XX..X..X.X.XX..X.X.X.XXXX.XX.", "....X...X.XXX.X.X..X...X..X.......X....X..........", ".X.X..X.X......XX.X..X.X.XXX.XXX.X..X.XXX.XX.X.XX.", "..X.X.X.X.XX.X...XXX..X..XX.....XX.X...X..X..X.X..", ".X.....X.X...X.X..X..XX.X...XX.X..XX.X.X.X.XX...X.", ".X.XX.X..X.X.X..X.X.XX.X..X...X.X.X..X.X.X...XX.X.", "..X...XX....XX.X.X..X....X..XXX.X..XX..X...XX.X.X.", "XXXX.X.X.XXX...X.X.XXX.XX.X.......X.X.X..X..X...X.", "XXXXX....X...X...X..X..X....X.X.X....X..XXX.X.X.X.", "XXXX..XXX.X.X..X.XXX..X..XX.X..X..XX.XX..XX..XXX..", "XXXXX.X.....X.X.....X..X.X...X..X..X...X.X..XXX..X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 77418.54963357761;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> maze = {"XXXXXXXXXXXXXX..X..X.XX.X..X.X.X.XX..X.X.XXXXXXXXX", "XXXXXXXXXXXXXX.XXX......X.X..X.....X.X.X...XXXXXXX", "XXXXXXXXXXX....X..X.XXX....X..XX.X.X.....X.XXX.XXX", "XXXXXXXXXXXXXX...X..X...XX.X.XX...X..X.XXXX..X.XXX", "XXXXXXXXXXXXX..XXXX.XXX...XX...X.X..X.X..XX.XX.XXX", "XXXXXXXXX.X..X..XX.X...XX.X..XX...X.X...X...X...XX", "XXXXXXXX....X..XXX..X.X.X..X...XX.X...X...XX.*XXXX", "XXXXXXXXXX.X.X..X.X.....X.XX.XX.....XX.XXX.X.XX.XX", "XXX.XXX......X.XX.X.X.X...X...X.X.XX.X...........X", "XX..XX.X.X.X...X...X.XXXX...XX.X..XX.X.X.X.X.X.XXX", "X.X....XX.XX.XX.X.XX..X..XX..X..X.......XXX...XXXX", "X...XX............X.X..X.X.X.X.X..X.X.X..X.X.XXXXX", "X.XXXXX.X.XX.X.X.X..X.X..X.X.X...XX.X.X.X...XXXXXX", "XXXXXX.XXX.X..XX..X....X.......XXX.X.X.XX.XXXXXXXX", "XXXX........XXX..X.X.X.X.X.X.XX....X.......X.XXXXX", "XXXXXXXX.X.XX..X...X.X.X..X.....XXX.X.XX.X...XXXXX", "XXXXXX.XXX.X..XXX.XXX..X.X..XX.X..X....XXXX.XXXXXX", "XXX.X...X....X.X...X.X..X.X...X.X.X.XX..XX.X.XXXXX", "..X..X.X.XX.XX.X.XX..X.XX...XX..X.....X......X..X.", "X.XX...X.XX......XXX.....XX.X..XXX.XX.X.X.X.XX.X..", ".....X......XX.X..X.XXX.X...X.X.XX.X.X.XX..XXX...X", ".X.XX.X.XX.XX.X.X.....X..X.X.............XX.X..XXX", "XXX.......X...X..XX.X..X...X.X.XX.X.X.XX..X...XXX.", ".X.XXX.XXX..X..X....XX..X.X...XX.X.X...XX.X.X..XX.", "......X..X.X.X..X.XX..X.X...X.......XXX..X...XX.X.", "X.X.X..X..X...X..X.XX.....XXX.X.X.X...X.X.X.X.....", "...X.X...X.X.XX.X.....X.X....XX..X..X.........XXX.", ".XXX...X.........X.X.X..X.X.X..X..X..XX.X.X.X....X", ".X...X.XX.X.XXXX..X.X..X.X....XX.X..XXX.XX...X.X..", "..XX..X..XXX...X.XX.X.X....X.X....X.XX....X.X.X.X.", "XXX.XX..X.XX.X.........XXX..X.XX.X....X.XX.......X", "XXX..XX.......X.X.X.X.X..XX.....X.X.X.X...XXXX.XXX", ".X.X...X.XX.XXXX..XX....X.X.X.X...X..X.X.X...X.XXX", "...X.XX..X..X.X..X.XXX.X..X..X.XX..X...XX..XXXXXXX", "XX......X..X...X.X.....X.X.X....X.XX.X....XXXXXXXX", "X.X.X.X.XXX..X...XX.XX......XX.X....X..X.XXXXXXXXX", "X....XX....X..X.X...XX.X.XX..X..X.X.XX.X....XXXXXX", "XX.X.X..X.X..X.X..XX...X..XXX..X.X...X..X.XXXXXXXX", ".XX..X.XX.X.X....X..X.X.X....XX...X.XXX.XXXXXXXXXX", "....X..X..XX.XXX...XX.X..X.XX...XX...XX...XXXXXXXX", "XX.X..XX.X.....X.XX....X......XX.XX.X...XX.X.XXXXX", "XXXX.XX..X.XXX.....X.X.XX.X.X.....X.X.X......XXXXX", "XXX..X..X..X...X.XX..X..X.X..XX.X..XXX..X.X.XXXXXX", "XXX.XXXXXXX..X.X...XX.XX..X.X.X..X.XXXXXX.X.XXXXXX", "XXXXXXXXX...X...X.X......X....X.XXXXXXXXXXXXXXXXXX", "XXXXXX....X.X.X..XXX.X.X..X.XXX.XXXXXXXXXXXXXXXXXX", "XXXXXXX.X.XX..XX...X.X.XX..XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXX...XX...X.X..X...X.XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXX.XXXXX..X..X..X.X.XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXX...X..XX.X..XXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 80813.42964196503;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> maze = {"..XXX.X.X..X.....X....X....X.X.X.X...XX...X..XX..", ".X......X.X.X.XX...XX...X.X..X...X.XX..X.X..X...X", ".XXX.XX...X..X..XXX...X..X.X..XX.X...X.X.XX.XX.X.", "..XXX.X.XX..X..X..X.XX.X.....XX...X.X..X.....X.X.", ".X.X..X..XX..X..X.XX...X.X.X....X.X...X..X.X.....", "....X..X...X..X....X.XX.X.X..XXX...XX..X.XX.X.XX.", "X.X...X..XX.X..XXX...X....X.X....X.X..X.....XX..X", ".X..X.XX.X...X....X.X..X.X...X.X..X..X.X.XX....X.", "...X.....XX.X.XX.X...XX...XX.X.X.X.X.....X.XXX...", "X.XXX.XX.......X..XX...XX..XX.X......X.X...X.X.X.", "...X..X..X.X.X...X.X.X..X.X.X..X.X.XX.XXX.X..XX.X", "X.X..XXX.X..X.XX.X..X..X..X..X..X...X..X...X.....", "XX.XX.X...XX.....X.X.X..X..X...X..XX..X..X...X.X.", "X..X...X.X...X.X...X.X.XXX..XX..X....XXX.X.X..XXX", "..X.X.X.X.X.X.XXXX.....XXXX.X.X...X.X.X.X.X.XX.X.", "X.........XX...X..X.XX..XX..X..X.X...............", "XX.XX.X.X...X.XX.X.X...X..X..X.X.X.X.X.XX.X.X.X.X", "X.X..XXX..X.X.X......X..X..X.X.X..XXXXX.XX.X.XX..", "...X.XX.X..X..X.X.X.X.X.X.X....X.X.X.X.....X...XX", "XX........X.X....X....X.X..X.XX........X.XX..XX..", ".X.X.X.XX.....X.XXX.XX...X......X.X.XXX...X.X.XX.", ".XX.X.X..X.X.X.X.X.XX.X.XXX.XXXXX.X....X.X.......", ".......X....X..X.X.X.....X.......X..XXX.X..X.XX.X", "X.X.X.XXX.XXXX.X.....XX.X.X.X.X.X.X.......X.X...X", "..X.X..X..X.X...XX.XX........XXX..X.X.X.XXX.XX.X.", ".X.X.X..XX...X.X..X.XX.X.XXX..X..X...X........XX.", "X....X.XX.XX....X......X....X...X.X.X..X.XXX.X...", "..XX.........XX...XX.XX..X.XX.X....XX.X.....X.XX.", "X..XX.XX.X.X.X..X..X.X.X.X.X..XX.X.X.XXX.XX......", "..X..X....XX.X.X..X.X.....X.X..XX.X...X..XX.XX.XX", "X.XX..X.XX...X..XX....XX.XX..X....X.X.XX...XX....", "XX..X.....XX.X.X..X.X.X.....X.X.X....X.XXX...XX.X", "X.X...XXXX....XX.X.XX.X.X.X...X.X.XX......X.X....", "...X*X....XX.X.........X...XXX...XX..XX.X.X..X.X.", "X.XX..X.X...X.XXX.X.X.X..X.X...X...X..X.X..XX..X.", ".....X.XX.X.......XX.X.X..X.X.X..X..XX...XX.XXX..", ".XX.X......X.X.X.X.......X.....X.XX..X.X.XX...X.X", ".X..X.X.X.X..X.X..XX.X.XX.X.X.X....X.X.X....XX...", "XX.XX..X..X.X.X..X...XXX..X..X..X.X..XX..X.X..X.X", ".....X..XX.....X.X.X.....X..X.X.X.XX...X..X..X...", ".X.X..X..XX.XXXXX...X.X.XXX.X.X..X..X.X.X.XX.XX.X", ".X..X.X.X..X...X.X.X...X.X.....X...X....X......X.", ".X.X.X..XX..X.X.....X.X....X.XX..X..XX.X.X.X.X...", "..XX...X...X...XXX.X..X.X.X...XX.X.X.XX....X.X.X.", "X..XX.XX.X...X....X.X..X...X.X...X.....X.X.XX.X..", "XXXX.X..XXX.X.X.X...X.XXX.X...X.XX.XX.XX.X....XX.", "XXX....X.XXX...X..X....X...X.XXX.....X..X..XX...X", "XXXXXX....X.XX.X.XXX.XX..X.XX.XXX.X.X..XX.X...X.X", "XXXXXXXX.X........X....XX......X..X...X....X.XX..", "XXXXXX.....X.X.X.X..X.XXXX.X.X..X..X.XXX.X..X...X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 86966.20465434634;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> maze = {"XXXXXXXXXXXXX.X...X.XXXXXXXXX....X..X.X.XXXXXXXXXX", "XXXXXXXXX.X.X.XXX.X..XX.XXXXXXXX...X..X.....XXXXXX", "XXXXXXXXX......X..X.X....XXX...X.XX.X.X.XX.XXXXXXX", "XXXXXXXX..XXX.X.X.X...X.X...XX....X......XXXXXXXXX", "XXXXXXXXX.X.X...X..X.X.X..XX..X.XX.X.X.X..XXX.XXXX", "XXXXXXXX.X...XX.X.X.....X...X....X.X.XX.X.XX..X.XX", "XXXXXXXX.XXX.X....X.X.XX..XX..XX.X.X..X..X..X.X..X", "XXXXXXX........X.X..X.X..X...XX.X...X..X...X....XX", "XXXXXX..XXX.XXX...X..X.X.X.X.X..X.XX..X..XX..XX.XX", "XXXXXXX.X.XX...X.X..X..X..X....X..X..X.X....XX..XX", "XXXXXXXX.....X...XX..X.X.X..XXXXX..X.....XX...X.X.", "XXXXXXXXX.X.X.XX....X..X...X...X..XX.X.X...XXX.XX.", "XXXXXXXX.X.X...X.X.X..XXXX.X.X..X.....X.XX...X....", "XXXXXXX......X..X..XX..X....XXX.X.X.X.....X.XXXX.X", "XXXXX..X.X.XX..X.X...X..X.X.XXX.X..X.X.X.X.X..X...", "XXXXXX..X.X..X...X.XX.X..X...X....X..XX.X....X.X.X", "XXXXX.X.X...X.XX.......X.X.X...XX..X..X..XX.X..X..", "XX....X.XX.X...X.XX.XX.X.X..X.X.X.X.X...X.....X..X", "XXX.X........X..X.X...X...X.X....X....X...XX.X.X.X", "XXX.XX.X.X.X..X...*.XX.X.X.X..X.X.X.X..X.X........", "XXXXXXX..X.X.XXXX.X........X.X.XX....X..X.X.XX.X.X", "XXXXXX.X.X..X.X....X.XXXXX........XX..XX..X..X.X..", "XX......X.XX....X.X.X......XXX.XX.X.XX...X.XX.XX.X", "X..XXX.X.....XX.X.X..X.XX.XX..XX.X....X.X..X...X.X", "XXX......XX.X....X.X..XX.....XX....XX...X.X..X..X.", "XX..XX.X...XXX.XX..X.X..XX.X....X.X..XX....X..X.X.", "XXX.XXX.X.X.X.XX.X.....X...X.X.X.X..X.XX.X...X.X..", "XXXXXX...X..X......X.X...X..X.X..X.X....X..X....X.", "XX.XX.XX..X..XX.XX.X.X.X.XX.X..X.....X.X.XXXXXXX..", "...X...XX..X.X..X.X..X..X.....XX.XX.X.X....X.....X", "XX...X....X....X...X.X.X..X.X.....X.....XX...X.X..", "XXX.XXX.X...X.XX.X...X..X.X..X.X.X..X.X.X.XXX.XXX.", "XX..XX...X.X.X...X.X.X.X..X.X.X..XX..X.........XX.", "XXX.XXX.X.X....XX...X...XX....XX..X.X.X.XX.XX.X..X", "XX.XXX.XX...XX.X..X..X.X...X.X..XX.....X...XX.X.XX", "X...XX.X.XX.X...X..X.X..X.X....X..X.X.XXX.X.......", "XXX.......XX..X.X.X.X..XXX..X.XXX.X.X..X.X..XX.X.X", "XXXX.XX.X....XXX..X..XXXXX.X...X..XX.X....XX...X.X", "XXXXXXXX.XXX.XXXX..X...XX.X.X.X.X..X.XX.X..X.X.X..", "XXXXXXXX......XX..XXXX....X.......XX...X..XX.XXXXX", "XXXXXX...X.XX...X..X...XX.XXXX.XX....X..X.X..XXXXX", "XXXXXX.X..X...X.X.X..X.X.........X.X..XXXXXX.XXXXX", "XXXXXXXXXXXX.X..X..XX..X.X.X.X.X..XX.X.XXXXXXXXXXX", "XXXXXXXX.XXX.XX..XXXXXX.XX.X.X.XX.X.....XXXXXXXXXX", "XXXXXXX........XX...X.X....X.X...X.X.XXX...XXXXXXX", "XXXXXX..XX.X.X..XXX.....XX.X..XXX..X..XX.XXXXXXXXX", "XXXXXXX.XXXXXXXXXXXX.XX.X...X.....X.XX....XXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX...XXXXXX.X.X...X.XXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXX...X.....X..X...X.......XXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 24209.295230263157;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> maze = {"XXXXX.XXXXXXX.X..X..X....X..X.XXX..XXX.XXXXXXXXXX", "XXXXX.XX.X.X....X.X..X.X.XX....X..XXXX.XXXXXXXXXX", "XXXXX.XX.X..XXX...XX....X.X.X.X.X.XXX..XXXXXXXXXX", "X.X.X.XX..X.X.X.X..X.XX.X.X..XX.X..X..X.X.XXXXXXX", "X.......X...X.X.X.X..X.X...X....X.X.X...X..XXXXXX", ".XXX.X.X.X.X..XX..X.X..X.X.X.X.X....X.X...XXXXXXX", ".X....X.....X.X.X.X...X...XX..X..XX.X..X.XXXXXXXX", ".XX.X..X.XX.X.X....X.X.X.X..X...XX...X.XXXXXXXXXX", ".X.X.X..X.....X.X.X..X....X.X.X...XXXX..XXXXXXXXX", ".X...X.X..XX.X.X....X..X.X..X..XXXXX.X.X..XXXXXXX", "...X....XX.X.X.X.X.XX.X.XX.X..X....X.....XXXXXXXX", ".XX..XX.........X..X.........X..X.X..X.X.XXXXXXXX", "...X..XX.X.XX.XX.X...X.X.X.X.XXX...XX..XX..XXXXXX", ".XX.XX.X.X.X.....X.X.XXX..X...X.X.X..X....XXXXXXX", "X...X...X.X.XX.XX.X.....XX.XX.X....X.X.X.XX.XXXXX", "..X.XX.X....XX....X.X.X.X....XX.X.X..X..XX...XXXX", "X.X....X.XX...X.X..X...XXX.X.X.XX.X.X..X...XX.XX.", ".X..XX...X.XX..X.X..XX..X...X..X.....X...X.......", "..X..XXXXX.X.X.....X.X.X..X.X.X..X.XX..XXXX.XX.X.", "X...X..........X.X...X.XX..X...X..X.X.X..X...XX.X", "XX.X..XX.X.XX.X.X..X.X....X..X..X......X..X.X....", "X..XX...X..XXX....X..XXXX.X.X.XX..XX.XXX.X.X..X.X", "XX.X..XXXX..X.X.X..X.............X.XXX.......XX.X", "XX.XXXX.X..X...X..XX.X.XX.XX.X.X.......X.X.X...XX", "XXX...X.XXX.X.XX.X..X....X.X..X..X.X.X..XX.X.X.XX", "XXX.X...........X.X.X.XXXX...XX.X..XX..X..X..X.XX", "XXXXXX.X.XX.X.X.X.........X.XX..XX...X...X.XXXXXX", "XXXXXXXXX....X....X.X.X.XX..X.XX.X.XXXXXXX...XXXX", "XXXXXXXXX.XX..X.X..X...X.XX.......X........XXXXXX", "XXXXXXXX.XX.XX..XXXX.X....X.X.X.X..XX.X.XX.XXXXXX", "XXXXXXX.......XX.....X.XX.X.XX..XX.....XXXX.XXXXX", "XXXXXX..X.XXX....X.X.X..X.X...X..X.X.X..XXX..XXXX", "XXXX...XXX...X.XX.XX.X.XXX..X.X.X...X.XX.X.X.XXXX", "XXXXXX.XXXXX...X.....X..X.X.X..X..X...........XXX", "XXXXXXXXXX..X.XXX.XX..XXX....X.XX.X.XXX.X.X.XX...", "XXXXXXXXXXX...X...X.X.X...X.X...X.X.X....X.....XX", "XXXXXXXXXXX.X..XXX.....X.X...XXX.X..XX*X..XX.X..X", "XXXXXXXXXXXX..X....X.X.X..X.X....X.X....XX.X..X.X", "XXXXXXXXXXX..XXXXX.X.X.X.X....XX.XXXX.XXXX...XX.X", "XXXXXXXXXXXX.X.....X..X.X..X.XX.X.XXX.XXXXXX..XXX", "XXXXXXXXXXXXXXXX.X..X.X...X........X....XXXXXXXXX", "XXXXXXXXXXXXXX...X.XXX..X.XX.X.XX.XXX.XXXXXXXXXXX", "XXXXXXXXXXXXXXXX.X.XX..X...X.XX.XXXX..XXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXX.XX.X.......XXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 52949.13685239492;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> maze = {"XXXXX.X.XX...X....XXX.X.XX.........X.X........XX.", "XX.XX......X..XX.X.X.......XXX.XX.X...X.X.X.X..X.", "....XXX.XX.X.X.X.X..XXXX.X...XXX.X..XX...X.X.XX..", ".XX..X.X.XX..X.X..X.X..X.X.XX....XX.X..X...X.XXX.", "XXXX.......X.X...X..X.XXX...XX.X....XX.XXXX...X..", "XXX.XX.X.X.....X.XX.X..X..XX..X..XX.......X.X..X.", "XX....XXX.XXX.X.X....X..X..X.X.X...XX.XX.XX..XXX.", "X.X.XX.X......X.X.X.X..X.X.......XXX.X..XX..XX...", ".....X..XX.XX....X..XX.X...X.XX.XX....X.X.X...X.X", ".XX.X.X.XXX..X.XX..X....X.X..XXX..X.X...X.X.XX...", "X........XX.X....X..XX.XXX.X..X..X...X.X.......X.", "..X.X.XX......X.X..X.X..X..X.X..X.X.X....XX.X.X..", ".XXX.X..X.X.X.XX.X.....XXX.....X...X..X.X...XXXX.", "X.X...X.XX.X.......XX.X.X.X.XXX.XX...X...XX...X..", "X...X.......X.XXX.X..X......X......X.XX.X..X.X.XX", "..X.X.XX.XX.XX......X.X.X.X..XX.X.X.X.X..X.....X.", ".X.X.X..X......XX.X....XXX.X.....X.....X..X.X.X..", ".X.....X..XX.XX....XXX..X...X.XX.X.X.XX.X..X.X..X", "X.XXX.X.XX..X..XX.X....XXX.X...XX...XXX.X.X...X..", "....X.X....X..X..X.X.X..X..XX.X.X.XX.X...XXX.XX.X", ".X.X....XX...XX.XX....X..X.........X...XX.X..X...", ".XX..X.XX.XX......XX.XXX.X.X.XX.XXX..X..X..X...X.", "....X.X......XXX.X.X..X.....XX.....X.XXX..X.X.XX.", "X.X.X.XXX.XXXX.X....XX..X.X...X.X.X....X.X....X..", "XX.X.....X.......XX....XXX..X..X....X.XX...X.X.X.", "XX...XX.XXX.XXXX...XX.X.X.X.X.XX.X.X.X...X.XX...X", "X..X...XXX.XX...X.X.....X.X.X...X......X..X.XX.X.", "..X..X..X.....XX.X..X.X.X....XXXXX.X.X..X........", "X.XXX..X.XX.X.X...X.X.X.XX.X....X..X.X.X..X.X.X.X", ".....X....X.X..X.X...X...X.X.X.X..X...X.XX.XX..XX", ".X.XX.XX.X.X.X.....X..XXX...X...XX..X........XX.X", "X.XX...........XX.X.X.X...X..XX.X..X..X.X.XX.....", "..X.X.XX.X.X.X..X....X.XX..XX....X.XX..X...X.XX.X", ".X...X.X..XX..XX..XX.....X...XX.XXX...X.XX.X..XX.", "...X.....XX..X..X..*X.X.XX.XX.XX.X.X.X..X.XXXX...", "XX..XXXX...XX.X...X..XX.X......X......X.X.XX.X.X.", "...X.....X.X....X..X...X..XX.X.XX.X.X...........X", ".X.X.XX.XX.X.X.X.X.X.X..X.X...X...X.X.X.X.X.X.XX.", "..X.X.X.X.XX.X...XX...X.X..XX.X.XXX..X..XX..X....", ".X......X.X..X.X...X.X...X..XXXX....XX.X..X..X.X.", "X..XX.X....XX...XX..X..X.X.X..X.X.X.X....X..X..X.", ".X...X..X.X...X...X..X.X.X.XX.X....XXX.XX..X.X..X", "...X..X.X.XXX..X.XX.X.X.X.X.....X.XXX...XXXX..X..", "X.X..X...X....X..X.........X.XX.X..X..X.....X...X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 45152.72649572649;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> maze = {"X..X.X.X...X...X..X....X..X..XX..XXX", "..X..X..XX..X.X..X.XX.X..X.X....X.XX", ".X..XXX.X..X...X.X..X...XX..XX.XX..X", "..X.XX....X..XX..X.X.X.X..X......X..", ".X.....XX...X..X...X.X..X.X.X.XX.XX.", "..XX.XX...X.X.X.X.X....X..X..XXXX...", ".X..X..XX.X...X.X.X.XX...X..X.XXXX.X", "..X..X.XXX.X.X..X..X...XX.X....XXX..", "X..X....XX.X..X.X.X..X......X.X.X..X", ".X..X.X.....X.X.X..XX..XX.XX.X...X..", "..X..XX.X.XX......X..X...X....XX.X.X", "X...X..XX...XX.XX.X.XXX.X..X.XXX.X..", "..X...X..XX.X.X.X....X..X.X.X.X....X", ".XXXX..X.X....X...XXX.X.X.*.X..X.X..", "X.X..X.X..X.X...X.X.....X.XXX.X..XX.", "X...X....XXX.XX.X.X.XXX.X.X.....X..X", ".X.X.X.X..X..XXX.......X...X.X.XX.XX", ".X....XX.X.X..X.XX.XX.X.X.X.X......X", "...XX......X.X.......X..X.....XX.X..", ".X..XX.X.X.....X.X.XX.X...X.X...X.XX", "X..X.X..X..XX.XXX......X.X.X.XX.....", "..X....X.X.X...XX.X.XX.........X.XX.", ".X.XX.X.....X.X..XX..X.XX.XX.XX.X.XX", "XX.XX.XX.X.X..XX....X...X..X........", "........X..X.X...XX..X.X..X..X.X.X.X", ".X.X.XXX.X..X..XX.X.X...X..X..X...X.", "..X..X.....X..X.X...X.X..X.XX.X.X...", "X.X.X.X.X.XX.X....X.X..X.X..X..XX.XX", ".X.X.....X..X..XX.X..X.X..XXX.X.....", "....X.X.X.X.X.X...XX..X.X....X.X.X.X", "X.XX.X..X...XX.XXX...XX..X.X.X...X..", "X.X...X.X.X.......XX....X.X...XX..X.", "....X....XXX.XXXX....X.X..X.X.X..X..", "X.X..X.X.XX.X.....XX.X..X..X.X..XXX.", "..X.X..XX.....XXX.X...XX..X...X..X..", ".X.X.X..X.X.XX....XXX....X..X.X.X..X", "X......X...X...XX...X.X.X..X.....X.."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 23756.6604708798;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> maze = {".X.....X.X..X..X.X...XXX", "..X.X.X....X..X...XX..XX", "X....X..XXX..X.X.X...X.X", "X.X.X.X.X...X....X.X.X..", "..X.......XX..XXX.X....X", ".XX.XX.XXX..X.X....X.X..", ".X.X.....X.X..XX.XX...XX", "X....X.X.X.X.X.....X.X..", "..XX.X.X.X...*.XX.X....X", "X.X...X..X.XX.X...X.XX..", ".X.X.X.X.X...X.X.X....X.", ".X..X......XX...XXX.X..X", "..X..XX.XX....XXXXX..X..", "X.X.X..X...X.X..XX..X.XX", "X.X...X..X.X...X..X.....", "...XX...X...X.X.X.XX.XX.", "X.X.XX.X..X..X.....X.X.X", ".......XX..X..X.X.X.....", "X.X.X.X...X..X.X....XXXX", "..X.XX.X.X.X.....XX.....", "X..X....X....X.X...X.X.X", ".XX.X.X...XX.X..X.X..X..", ".....X.XX.X...X.X..X.X.X", "XX.X...X.X.X.X.XX.X.X.X.", "..XXXX...........X..X.X.", "X.XX.XXXX.X.X.XXX..X....", "..........X.X...X.X.X.XX", ".X.X.XX.X.X.X.X.........", ".XX..X.X..X.X.X.X.XX.X.X", "...X.X...X..X..X..X.XX..", "XX.X..XX.X.X..X.X...X..X", ".XX..XX..X..X.X..XX..X..", "....X...X.X.X...XX.XX..X", "X.X.X.X...XX..X.....X.X.", ".X...X..X..XX..X.XX..XX.", ".X.X.XX.X.X..X..X..X....", "...X...XX..X.XX..X..X.XX", "X.XXX.X..XX.....X.X.X...", "...X...X....X.X.....X.X."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 13489.872600349041;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> maze = {"XXXX.XXXXXXXXXXXXXXXXXXXX", "XX.X.XXXXXXXXXXXXXXXXXXXX", "XX....X.X.XXXXXXXXXXXXXXX", "XXX.X.....X.XXXXXXXXXXXXX", "XXXX.X.XXX..XXXXXXXXXXXXX", "X.......X.X.XXXXXXXXXXXXX", "XX.XXX.X.....XXXXXXXXXXXX", "XXX......X.XXXXXXXXXXXXXX", "XX..X.XX..X..XXXXXXXXXXXX", "XXX.X.X..X..XXXXXXXXXXXXX", "XX..X..X...X.XXXXXXXXXXXX", "XXX..XXX.X.....XXXX.X.XXX", "XXXXXXXXXX.X.XXX.XX.X..XX", "XXXXXXXXXX.XXXXX....X.XXX", "XXXXXXXXX...XX..XXX....XX", "XXXXXXXXXX.XX.X..X..XXXXX", "XXXXXXXXX.......XXX..XXXX", "XXXXXXXXXXXXXX.X..X.XXXXX", "XXXXXXXXXX.X.X.X.X...XXXX", "XXXXXXXX...........XXXXXX", "XXXXXXXX.XX.X.X.XX....XXX", "XXXXXXXXXX..X.X.XXX.X.XXX", "XXXXXXXXXXX.X.X..X...XXXX", "XXXXXXXXXXXXX.*XX..X.XXXX", "XXXXXXXXXXXXXX..XX..XXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 3229.8395061728397;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> maze = {".X.X....XX....X...X.X.X.X", ".X...X.X...X.X..XX..X....", ".XXX..XXX.X.X.X.X..X..X.X", ".....X.X..........X.X.X.X", ".X.X.....X.X.XX.X......XX", "X.X..X.X.X..X.X.X.XX.X...", "....X...X..XX....X...X.X.", "X.X..X.X*XX..XX.X.XX..X..", "XX..X..X...X..X...X.XXXX.", "X..X.X...X...X..X...X..X.", "..X....X.X.X..X..XX...XXX", "X.X.X.X...X.X.X.XXX.XXXXX", "XX.X...X.X..X.X.XX....XXX", "X...X.X....XX..X...X.XXXX", "XXX....X.X...X..XX..XXXXX", "XX..X.X..X.X..X...XXXXXXX", "X..X..XX.X..X.X.X..XXXXXX", "XX..X...X..X.X..XXXXXXXXX", "X..X..XXXX....X....XXXXXX", "XX.X.XX.X..XX.XXX.XXXXXXX", "XXXXXX....X...XXXXXXXXXXX", "XXXXX..X.XXXX.XXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 3503.68085106383;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X................XXXXXXXXXXXXXXXXXXXXXXXX", "X.XXXXXX.X.X.X.X...........XXXXXXXXXXXXXX", "X......XXXXX.X..X.X.XX.X.X..XXXXXXXXXXXXX", "X.X.XX......XXXXXXXXXX..XXX...XXXXXXXXXXX", "X.X...X.X.X.........XXXXXXX.X.........XXX", "X.X.XXX.X..X.X.XX.X........XXXXX.X.X.XXXX", "X.X....XXX..XX.XXXXXXXXX.X......XXXXXXXXX", "X.X.XX....XXXX..........XXX.X.X..........", "X.X.XX.XX....X.X.X.XXXX....XX..XX.XX.X.X.", "X.X..X..X.X.XX.X.X.....XXX..XXXXXXXXXXXXX", "X..X.X.XX..XXX.X.X.X.X....X..............", "X.XX..XXX.XXXX.X.X..XX.XXXXXXXXXXXXXXXXX.", "X.XX.XXXX.XXXX.X.X.XXX..................X", "X..X.XXXX...XX.X.X.XXX.XX.X.X.X.XX.XX.X..", "XX.X....X.X...XX.X..XX...XXXX..XXX.XX..XX", "XX.XX.X.X.XXXXXX..X..X.X....X.XXXX...X...", "XX..X.X.X......XX.X.XX.X.XXXX.....XX.XXXX", "XX.XX..XX.X.XX...XXXXX.X.....XX.X..X.....", "XX..X.XXX.X.XX.X.....XXXX.X.XXXXX.XXX.X.X", "XX.XX.XXX.X...XX.XXX.....XX......XXXX.X..", "XX..X...X.XX.XXX....XXXXXXXX.XXX....XXX.X", "XX.XX.X.X..X.XXX.XX.......XX....XXX...X..", "XX.XX.XXXXXX....XXX.X.X.X...X.X....XXXXX.", "XX..X......X.X.XXXX..XX.X.XXXXXXXX.....X.", "XX.XXX.X.XXX..XXXXX.XXX.X.........XX.X..X", "XX.XXX.X...X.XXXXXX....XXX.X.XXXXXXXXXXXX", "XX...X.X.X.X.XXXXXXX.X...X.X.............", "XX.X.X.X..XX..XXXXXX..XX.X.X.X.XX.X.X.XX.", "XX..XX.X.XXXX......X.XXX.X..XX..X.XXX..X.", "XX.XXX..XXXXX.X*XX.X.XXX..X..XXXX...X.XX.", "XX....X.....X.X...XX....X.XX.....X.XX...X", "XX.XXXXX.XXXX.X.X...X.X.X..X.XXX..XXX.X..", "XX.XXXXX....X.X.XXX..XX..X.X...X.XXXX.X.X", "XX.XXXXXX.X.X.X....X...X.X.X.X.X....X.X..", "XXXXXXXXX..XX..X.X.X.X.X.X.X..XX.X.XXXXX.", "XXXXXXXXX.XXXX.X..XX..XX.X..X..X.X.....X.", "XXXXXXXXX....X.X.XXX.XXXXXX.X.XX..X.X.XX.", "XXXXXXXXX.XXXX..XXXX......X.X..XXXX..XXX.", "XXXXXXXXX....X.XXXXXX.XXX..XXX.....X.XXXX", "XXXXXXXXXX.X.X......X....XXXXX.X.X.X.....", "XXXXXXXXXX..XXX.X.X.X.XX.....X.X.XXX.XXX.", "XXXXXXXXXX.XXXX.X.X.X...XX.X.X.X...X....X", "XXXXXXXXXX....X..XX..X.XXX.X..XX.X..X.X.."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 37245.68710888611;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> maze = {"..X.X..X.XX..X.XXX.X..XX..X....XXXXXXXXXX", "X....X...X.X.X.XX...X*X.X.XXXX.XXXXXXXXXX", ".XXX.XXX.X.X.....XX.X.X.X.XXX..XXXXXXXXXX", ".....X.X.X.XXXXX....X......X.X.XXXXXXXXXX", "XXXX.X.....XXX..XXX.XXXXXX.X....XXXX.XXXX", ".XXX..XXXX..X.X......XXXX..XXXX.XX.X.XXXX", ".XX.X.X..XX.X.XXXXXX.XXX.X.X....X....XXXX", ".X.....X.X..X..X.XX..XX..X.XXXX.XXXX.X.XX", ".XXXXX.X.XX..X.X.X.X.X.X.X..XX..XX.....XX", "..X.X....X.X.X.X.X...X....X.X.X.XXXXXX.XX", "X.X.XXXX.X...X.X..XX..XXX.X.X....XXXX..XX", "..X.XXX..XXX.X..X.X.X...X.X.XXXX.XXX.X.XX", "X...XX.X.....XX.X....XX...X.X.....X....XX", ".XX.X...XXXX..X..XXX.X.XX.X.XXXXX..XXX.XX", ".X..XXX.X..XX..X.XXX.X......XXXX.X.XX..XX", ".XX.X.X.XX.X.X.X.XX..XXXXXX..XX..X.X.X.XX", ".............X.X...X.XXXXXXX.X.X.X.X...XX", "XXXXXXXXXXXX.X.XXX....XXXXXX.X...X.XXX.XX", "X..X.XX.........X.XXX.XXXXX..XXX.X.XXX.XX", ".X.....XXXXXXXX.X.XX..XXXX.X.X......X..XX", ".XXXXX....X.X...X.X.X.XXX....XXXXXX.XX.XX", "..X...XXX....XX.......XX.XXX.X..X.X.XX.XX", "X.XXX....XXX.XXXXXXXX....XXX.XX.X...X..XX", "..X.XXXX......XX.....XXX.XX...X.XXX.XX.XX", "X.X.XXX.XXXXX.X.XXXX.....X.XX.X.XXX.X..XX", ".....X..X.XX.....X.XXXXX...XX.X.XX..XX.XX", "XXXX.XX.....XXXX.X.XX.X.XX......X.X.X..XX", "...X...XXXX.X....X.X..X..XXXXXX.X.X.XX.XX", "XX..XX.XXX..XXXX...XX..X.XX...X.X....X.XX", "..X.XX.XX.X.X.X.XX.XXX.X.X.XX...XXXX.X..X", "X..................XXX.X.X.XXXX.XXXX.XX.X", ".XXXXXXXXXXXXXXXXX.XX..X.X.XXXX.XXX..XX.X", "..............X....X.X.X.X.XXX..XX.X.X..X", "XXXXXXXXXXXXX..XXX.....X.X.XX.X.X..X..X.X", ".X.X.XX.XX..XX....XXXX.X.X.X....XX.XX.X.X", "..........X.X.XXX..........XXXX....XX.X.X", "XXXXXXXXX......X.XXXXXXXXX.XX..XXX....X.X", ".X.X.X.X.XXXXX........X.XX.X.X..X.XXX.X.X", "............X.XXXXXXX.........X.X.X...X.X", "XXXXXXXXXXX...XXX..XXXXXXXXXX......XX.X.X", "XXXXXXXXXXXXX..X.X.XX.X.X..X.XXXXX......X", "XXXXXXXXXXXXXX...........X.X.X.X.XXXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXX................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 64344.24512195122;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> maze = {".X....X...XX.X.....XX.X.X.X.XX.X..X.X..X.XXXXX", ".XXXX.XXX.X...XXXX....X...X.X..XX...XX.X..XXXX", ".XX....X..XXX.X.X.XXX.XXX.X..X...XX.XX.XX.XXXX", ".X.XXX.XX.X...........X.X.XX.XXX.X..X.....XXXX", ".X.XX..X..XXXXXXXXXXX............XX.XXXXX.XXXX", ".X.X.X.XX.XX.XX..X.X.XXXXXXXXXXX.....XXX..XXXX", ".....X.X..X..X.X.X......X.X..X..XXXX..X.X..XXX", "XXXX.X..X.XX.X.X..XXXXX.X.XX..X...XXX.X..X.XXX", "XX.X.XX...XX.X.XX.X.XX..X.X.X..XX.XXX..X...XXX", "X......XX.X..X.X..X.X.X*X....X.X...X.X..XX.XXX", ".XXXXX.X...X.X..X.X.....XXXX....XX....X.X..XXX", "........XX.X..X.X.XXXXX.X.X.XXX.XXXXX...XX.XXX", "XXXXXXX..X.XX.X...XXX.....X..X..XXX..XX.X..XXX", "..X..X.X...X...XX.XX.XXXX.XX..X.XX.X.X..XX.XXX", "X.XX...XXX..XX.X..X...X...X.X...X..X.XX.XX.XXX", "..X.XX.XX.X.XX.XX.XXX.XXX...XXX..X.X.X.....XXX", "X..............XX.XXX....XX.X.XX.X.X.XXXXX.XXX", ".XXXXXXXXXXXXX.....X.XXX....X.X..X...XXXXX..XX", ".XX.X.......XXXXXX.X.X.XXXX.X..X..XX.XXXX.X.XX", ".X..XXXXXXX.XX.XX..X.X.XX....X..X.X..XXX.....X", "..X.XX.XX......X.X.X...X.XXX..X.X.XX..X.XXXX.X", "X......X.XXXXX......XX.X.X.XX.....X.X.X..X...X", ".XXXXX.X.X.X.XXXXXX.X..X.X.XXXXXX......X..XX.X", ".............X.XX.X.XX.X....X.XX.XXXXX.XX....X", "XXXXXXXXXXXX...........XXXX.X.X..XXXX..X.XXX.X", ".X.......XX.XXXXXXXXXX.XX.X.X.XX.XXX.X.X.X.X.X", ".XXXXXXX.......XX.............X..XX....X.....X", ".X...X.XXXXXXX...XXXXXXXXXXXX..X.X.XXX.XXXXX.X", "..XX.X.X.X.X.XXX.......XX.X.XX..........XXX..X", "X.X..........XX.XXXXXX.X....XXXXXXXXXXX.XX.X.X", "..XXXXXXXXXX............XXX.XXX..X..XXX.X..X.X", "X..XX.XX....XXXXXXXXXXX.....XX.X.XX.XX..XX.X.X", ".X....X.XXX.X.XXXXXX.X.XXXX.X....X..X.X.X....X", ".XXXX.X.XXX.X.XXXXX..X.X.....XXX.XX......XXX.X", "........XX.....XXX.X.X..XXXX.XX..X.XXXXX..X..X", "XXXXXXX.X.XXXX.XX.....X.XX.X.X.X.X....X.X..X.X", ".X.............X.XXXX............XXXX.X.XX...X", "..XXXXXXXXXXXX.....X.XXXXXXXXXXX..XXX...X.XX.X", "X..X.X..X.....XXXX....XX..X.X..XX.XX.XX.X.X..X", "XX....X.XXXXX.X.X.XXX.X.X.X.XX..........X.XX.X", "XXXXX.....................X.X.XXXXXXXXX......X", "XXXXXXXXXXXXXXXXXXXXXXXXX..............XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.......X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 72043.74790794979;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> maze = {".............................................X....", "XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1060942.8006279436;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> maze = {"..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "*X.X.X.X.X.X.X.X.X.XX.XX.XXX.XX.X.XX.X.X.X.X.X.X.X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1042049.3294753087;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> maze = {"*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "...............................................*X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "................................................X.", "XXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "................................................X.", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "................................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "................................................X.", "XXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "................................................X.", "XXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "................................................X.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "................................................X.", "XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".........X........................................", ".XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "...........X......................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 418198.8610675039;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> maze = {"..X.....X.....X.....X.....X.....X.....X.....X.....", ".X..X.XX..X.XX..X.XX..X.XX..X.XX..X.XX..X.XX..X.XX", "...X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".XX..X..X..X..X..X..X..X..X..X..X..X..X..X..X..XX.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X...", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "...X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".XX..X..X..X..X..X..X..X..X..X..X..X..X..X..X..XX.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X...", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "...X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".XX..X..X..X..X..X..X..X..X..X..X..X..X..X..X..XX.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X...", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "...X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".XX..X..X..X..X..X..X..X..X..X..X..X..X..X..X..XX.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X...", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "...X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".XX..X..X..X..X..X..X..X..X..X..X..X..X..X..X..XX.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X...", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "...X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".XX..X..X..X..X..X..X..X..X..X..X..X..X..X..X..XX.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X...", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "...X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".XX..X..X..X..X..X..X..X..X..X..X..X..X..X..X..XX.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X...", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", "..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X", "...X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", ".XX..X..X..X..X..X..X..X..X..X..X..X..X..X..X..XX.", ".X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X...", "X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X..X.", "X.X..XX.X..XX.X..XX.X..XX.X..XX.X..XX.X..XX.X..X..", "....X.....X.....X.....X.....X.....X.....X.....X*.X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1771460.147570486;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> maze = {"X.X.X.X.X.X.X.X.X.X.X.X.X.X.XXXX.XXXX.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XXXX.XXXX.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XXXX.XXXX.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XXXX.XXXX.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XXXX.XXXX.XXX.XXX.XXX.", "....X...X...X.X.X.X.X.X.X.X...XX.X.XX.XXX.XXX.X.X.", "XXX.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.XX.XXX.XXX.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX...XX.X.X.XXX...X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.XXXX.X.X.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.XX...X.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.XX.X.X.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX...XX.X.X.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.XXXX.X.X.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.XXXX.X.X.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.XX.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.XX.X.X.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.XX.X...XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X.XX.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.XX.XX..XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X...XX.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.XX.XX....X.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X.XX.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.XX.X.....X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X.XX.XXX.XXX...X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.X.X.XX.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.X..X.XXX.X.....X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.XX.X.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.XX.X.XXX.X...XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.XX.X.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.XX.X.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.XX.X.X.....X.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.XX.X.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.XX.X.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XXXX.XXXX.X.....X.XXX.", "X.X.X.X.X.X.X.X...X.X.X.X.X.X......XX.XXX.XXX.XXX.", "X.X.X.X.X.X.X.XXX.X.X.X.X.X...XXXX.XX.X.....X.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.XXXX.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.XXXX.X.....X.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X...XX.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X.XXXX.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X...XX.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..X.XXXX.XXX.XXX.XXX.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.XXXX.XXX.XXX...X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.XXXX.X..X.XXX.XXX.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.XX.X.XXX.XXX.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.X..X.XXX.XXX.X.X.", "X.X.X.X.X.X.X.X...X.X.X.X.X.X.XX.X.XX.XXX.XXX.X.X.", "X.X...X...X...XXX.X.X.X.X.X.X....X.XX.XXX.XXX.X...", "X.XXXXXXXXXXX.X.X.X.X.X.X.X.XXXX.X.XX.XXX.XXX.XXXX", "*................................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 50213.89603524229;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1081838.3333333333;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> maze = {"X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..................................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..................................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..................................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..................................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..................................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..................................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..................................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..................................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..................................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".......................*..........................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..................................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..................................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 20306.98184818482;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1080140.5;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> maze = {"*.................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX", "..............X...................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1081629.1709803923;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> maze = {"..............................*..................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "................................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 670977.1134413728;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1064376.0331023864;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> maze = {"*.................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1080464.9741176472;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "X.X.X.X.X.X.X.X.X.X.X.X.X*X.X.X.X.X.X.X.X.X.X.X.X."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1003778.2317167051;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> maze = {"................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", ".......................*........................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "................................................"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 10723.867647058823;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> maze = {"*.................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 961835.4117647059;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..............................*...................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 313819.6352941177;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X...*............................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXX", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXX", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X................................................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 168832.39829787234;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> maze = {".X...X...X...X...X...X...X...X...X...X...X...X...X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X*X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "...X...X...X...X...X...X...X...X...X...X...X...X.."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 380087.6376470588;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> maze = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X", "..*X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X", ".X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X", ".X.X.X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X...X...X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X...X.X.X.X.X.X.X...X.X.X.X...X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X...X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 288173.9835294118;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> maze = {".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................*..............................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 107070.9096;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 853302.0909803922;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "*.................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 132159.75450980393;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> maze = {"*", "."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "........................*.........................", "XXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX.XXXX.XXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...XXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 850887.856779661;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> maze = {"*.................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1081838.3333333333;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> maze = {"*X...X...X...X...X...X...X...X...X...X...X...X...X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "...X...X...X...X...X...X...X...X...X...X...X...X.."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1122916.3564280216;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 961835.4117647059;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> maze = {"..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "....*.............................................", ".XXX.XXXX.XXX.X.XXXXX.XXX.XXXXX.XX.XXXXX.XXXX.XXX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1060954.332037325;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "...................*..............................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 462784.928627451;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXXX", "XXXXXXXXXXXXXX........XXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXXXXXXXXX", "XXXXX.XXXXXX.XXXXX.XXXXXXXXXXX", "XXXXX.XXXXXX.XXXXX.XXXXXXXXXXX", "XXXXX.XXXXXX..*....XXXXXXXXXXX", "XXXXX.XXXXXXXX.XXXXXXXXXXXXXXX", "XXXXX.....XXXX.XXXXXXXXXXXXXXX", "XXXXX.XXX.XXXX.XXXXXXXXXXXXXXX", "XXXXX.XXX.XXXX.XXXXXXXXXXXXXXX", "XXXXX.XXX......XXXXXXXXXXXXXXX", "XXXXX.XXXXXXXX.XXXXXXXXXXXXXXX", "XXXXX.XXXXXXXX.XXXXXXXXXXXXXXX", "XXXXX.XXXXXXXX.....XXXXXXXXXXX", "XXXXX.XXXXXXXX.XXX.XXXXXXXXXXX", "XXXXX.XXXXXXXX.XXX.XXXXXXXXXXX", "XXXXX....XXXXX.XXX.XXXXXXXXXXX", "XXXXXXXX.XXXXXXXXX....XXXXXXXX", "XXXXXXXX.XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXX.XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 655.5394736842105;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> maze = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".........................*........................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 452470.5180908391;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> maze = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", "*................................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 41569.294117647056;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "....................*.............................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", ".................................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 69210.22980392157;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 303373.73333333334;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1013571.5333333333;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1033945.7333333333;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> maze = {"*.................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 161572.21568627452;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> maze = {"...X...X...X...X...X...X...X...X...X...X...X.....X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X*X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X...X...X...X...X...X...X...X...X...X...X...X.X.X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 274502.3846153846;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> maze = {"..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1081838.3333333333;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> maze = {"*..X...X...X...X...X...X...X...X...X...X...X...X..", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X...X...X...X...X...X...X...X...X...X...X...X...X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 961835.4117647059;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".........................*........................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 228638.0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> maze = {"*.................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1122529.3964588144;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> maze = {"..................................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X*X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 77301.27607843137;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> maze = {"*.................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 42630.5;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> maze = {".......................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".......................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".......................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".......................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".......................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".......................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".......................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".......................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".......................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".......................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".......................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".......................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".......................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".......................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "......................................*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 238303.0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> maze = {"*................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXX.XXXXXX", "....................X............................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXX.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "...............X.................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".................................................", ".XXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX.XXXXXXXXXXXXXXXX", ".......................X.........................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1012233.4988028731;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> maze = {"*.................................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 44018.333333333336;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> maze = {"..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..............................................*...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 48544.55764705882;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> maze = {"*.."};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3333333333333335;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> maze = {"..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "............................*.....................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 80378.06901960785;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> maze = {"..................................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X*X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 155875.38;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> maze = {"..X...X...X...X...X...X...X...X...X...X...X...X...", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X...X...X...X...X...X...X...X...X...X...X...X...X*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 1081838.3333333333;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> maze = {"X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".................................................*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 41569.294117647056;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> maze = {"*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> maze = {"..................................................", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "...X...X...X...X...X...X...X...X...X...X...X...X..", "X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX*"};
    MazeWandering* pObj = new MazeWandering();
    clock_t start = clock();
    double result = pObj->expectedTime(maze);
    clock_t end = clock();
    delete pObj;
    double expected = 163008.24164724164;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8527113&rd=13748&pm=10005
********************************************************************************
#include <cassert> 
#include <cctype> 
#include <cfloat> 
#include <cmath> 
#include <cstdarg> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
 
#include <sys/resource.h> 
#include <sys/time.h> 
#include <unistd.h> 
 
#include <algorithm> 
#include <bitset> 
#include <complex> 
#include <deque> 
#include <functional> 
#include <iostream> 
#include <iomanip> 
#include <iterator> 
#include <limits> 
#include <list> 
#include <map> 
#include <memory> 
#include <new> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <utility> 
#include <valarray> 
#include <vector> 
 
#include <ext/algorithm> 
#include <ext/hash_map> 
#include <ext/hash_set> 
#include <ext/numeric> 
 
using namespace std; 
using namespace __gnu_cxx; 
 
template<class T, class V> 
vector<T> operator,(vector<T> v, V t) { 
    v.push_back(t); 
    return v; 
} 
 
#define FORI(p, x) for (int i = p; i < (int)(x); ++i) 
#define FORJ(p, x) for (int j = p; j < (int)(x); ++j) 
#define FORK(p, x) for (int k = p; k < (int)(x); ++k) 
#define X first 
#define S size() 
 
#define VD vector<double> 
#define VVD vector<vector<double> > 
#define PI pair<int,int> 
 
struct MazeWandering{ 
    double expectedTime(vector <string> maze); 
}; 
 
int dx[] = {0,1,0,-1}; 
int dy[] = {1,0,-1,0}; 
 
double MazeWandering::expectedTime(vector <string> maze) { 
    map<PI, int> ids; 
    int next_id = 0; 
    FORI (0, maze.S) FORJ (0, maze[i].S) if (maze[i][j] != 'X') ids[PI(i, j)] = next_id++; 
 
    VVD vvd(next_id, VD(next_id, 0)); 
    VD vd(next_id, 0); 
 
    FORI (0, maze.S) FORJ (0, maze[i].S) { 
        if (maze[i][j] == 'X') continue; 
        int id = ids[PI(i,j)]; 
        if (maze[i][j] == '*') { 
            vvd[id][id] = 1; 
            vd[id] = 0; 
            continue; 
        } 
        double ngh = 0; 
        FORK (0, 4) { 
            PI npi(i + dx[k], j + dy[k]); 
            if (ids.count(npi)) ++ngh; 
        } 
 
        FORK (0, 4) { 
            PI npi(i + dx[k], j + dy[k]); 
            if (!ids.count(npi)) continue; 
            int nid = ids[npi]; 
            vvd[id][nid] = 1.0 / ngh; 
        } 
        vvd[id][id] = -1.0; 
        vd[id] = -1; 
    } 
    double res = 0; 
    FORI (0, next_id) { 
        FORJ (i + 1, next_id) vvd[i][j] /= vvd[i][i]; 
        vd[i] /= vvd[i][i]; 
        vvd[i][i] = 1.0; 
 
        FORJ (0, next_id) if (i != j && vvd[j][i]) { 
            double c = vvd[j][i]; 
            FORK (i, next_id) { 
                vvd[j][k] -= c * vvd[i][k]; 
            } 
            vd[j] -= c * vd[i]; 
        } 
    } 
 
    FORI (0, next_id) res += vd[i]; 
 
    return res / next_id; 
} 
// Powered by Krzysan's Cleaner 1.4-6a 
 
 
// Powered by FileEdit
// Powered by moj 4.1 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/