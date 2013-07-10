/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9770
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

class HappyCells {
public:
    vector<int> getHappy(vector<string> grid);
};

vector<int> HappyCells::getHappy(vector<string> grid) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> grid = {"XXX", "X.X", "XXX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> grid = {"X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> grid = {"."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> grid = {"....XX.XX......XXXXX.XXXXX..X.XX.XXXX.X.X.XXX..XX.", "XX.X...X..XXX.XX.X.X......X.XX.X....X.XX..X.....XX", "X.X..X.XX...X...XXXX..XX.X..XX....XX.XX.X...X.X.X.", "..XX..X.XXX.XXXX..X.X.X...XXX.X..XX....X.XX..X....", "..XXX..XXXXX.X..XXX...XXX...X..XXX.X....X....X..X.", "XX.XXX.X...X...X...XX..........XX..X..X...XX.X..XX", "XX.XX.X.X...XX.XX....X...XXX..XX.X..X.XXX.X...XXX.", "...XXXX......X..XX.XX.X..XXXX.XX.X..X.X.XXX.X.X.X.", "..XX.XX.X.XX.X.X....X..X.XX..X..XXXX.X.XX.....XX.X", "X...X....X....X..XXX.X.XX....XXX.X..XXXX..XXXX.X..", ".XX.XXX.......X.X...X.XXXXX....X.XX..X..X.X...XX..", "..X..XX..XXX.X..XXXX.X..X.XX.X...X.X.X.X..X..XX.X.", "X.XXX..XX.XX.X..X.X.X...X.X.X.XXX..XX..X.X..XXX..X", "XXXXXX.XXX...XX.XXX..XXXXXXXX..X......XXX.XXX.....", "X..X.XXX...XX.X...X...X.XXXXX..X....XX.XX.X....X.X", "..X.X....X...XXX...XXXXX...XX.X..XXX.XX..X...X.XX.", ".....X.XX.XXX..XXX..XXX..X.X.XXXXXX...X..XXXXXXX.X", "X...XX.XX.X...X.XX.XX.XXXX.XXX.X..X.XXXXXX........", "..X.X.XX....X....XX.XX.X.XX.XX...XXXXXX.....XX.X..", "XXX...X..XXX.X.XX.X.X.XXX...X..XX........XX..XX...", ".XX.XXXX.X.....X.XXXXX.XX..X.X.XXXX.XX.XXX..XXXX..", "XXX...XXXXXXX..XXX.X.XXX.X...X.X.XXX.X..X.X..X.XX.", ".XXX.XX.X.XXXX.XX.XXXXX.XX....X.XX..X.X..X.X.....X", "XX.XXXX.X......X..X...X....X..X....XXX..X..XX..X..", "XX..X.X.X..X.XX..X...X..XX.X.X.XXX.X.XX.XXX.X....X", ".X.X....XXX...X....XXX........XX.XX.XX..XXX.X.....", "X....XXX.XXX.X.XX.XX.X.X...XXX......XX.XX.XXX..XXX", ".X.X..XX..XX..X.X....XX.XXXXX..X...X.XXXXX.XX..XXX", ".XXXXXX.X.XX.XXXXX....XX.X.XXX.X..X..XX.X..XXX.X..", "..X...XX.XXX.X...X.X..XX.X.X.XXXXX.X.X.XXXXXX..XXX", "X.X..X.X.XX.XXX...XX.XX..XXXXXXX..XXX.X..XXXXXXX.X", "X..XXX.X.X.X..X..XXXX.XXX.XXXX...XXXXXXX.X.X.X...X", "X...XXX...XXXX..X.XX......X.X.X.X.X..XXXXX......X.", ".X..XX....X.X.XX.XX.XX...X.XXX.X....X.....X.XX..X.", "X..XX.XXX...X....X..X..XX.X.XXXX.XX.XX.XXXX......X", "XX..X.XXXX....XX..XX.XX..........XX...XXXX....X.X.", ".......XXXXX..XXX....X.X...X.....X.X.X.XXXX..XX..X", "........X.XX.....X..XX...XX...XXXXX.XX.XX.X.XXX..X", "X.XXXXXX....XXXX.XXXXX....X.X...XX.......X...X.X.X", ".X...XXX..X.XXXX..X.XXX..XX.XXX.X...X.....XXX..XX.", "X.X..XXXX...XXX..X...X.......XXXX.X.X.XXXXXXXXX..X", "....X.X......XX.X.XX..X.X.X.XX..X..X.X...XX..XXXXX", "X.XXXX..XXX.X.XXXXXXX.X.X.XX.XX.XX.X.X.XX....X..X.", ".XXXX......XXX.X..X....X....X.XX...X..X...XXXX..XX", ".XXX..XXXXX..XXX...XX...X.X..XX...XX.X..X..X..XXX.", "X.XX.XX..XXXXX.X.XXXXX.X...XX..X.XXX...XX.X.XX...X", "..XX..XXXXXX.X.XXXX...X.X.XXXXXXXX..XX.XXXX.X.XXX.", ".XXX....X..X..XX......X...X.X.....XXX..X.XX...X...", "...X..XX..XX.XXXX..X.XX.X.X.X..X.X........XXXXXXXX", "XXXX.X..XXXX.X.X.X..X.X.XXX...X.XXXXXXX.X..XXXX..."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 72, 83};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> grid = {"...X..XXX..X.X...X.....XX..X.X.XX..XXXXXXX..XXX.X.", "X.XX.XXXXX........X.XX.X..X..XXXXX....X.....XXX.X.", ".XXXX..X.X...XX.XX.XXX..X.X.X.X.X.X.X..X.XXX..XXX.", "XX..X.XX.XX....X..XX....XX..XXXXX.XX..XXX.X.....XX", "XX...XX.....X..X..XX.X..XX...X.XXXX....XX.XX.XX...", "...XX...X...XX.X...X.X.X...XX.XX..XXX..XXXX..XX.XX", "X.XX.......X.XX..XXXXX.XXXX..X.X.X..XX..XX.X..X..X", ".XX..XX.X.....X.X.XXXX.XX.X.XX.XX.X.....X..XXX....", ".XX.X.XX.X.X..X..XX..XXX..XXXXX...XX.....XXXX.XX.X", "XX.XX.XXX.X.X.XXXX.X.XX.XX.....X.XXX...X.....X..XX", ".X..X.X.XXXXXX..X.X.XXX..X......XXX....XXX.XX.XXX.", "XXXX...X.X.X.XXX..X.X...XXXX.....XX.XXX.X..XXXXXXX", ".XX.XX.XX......XX...X.X.X..X....X..X.X.X.XXXX.XXXX", "X....XX.X....XXX.....XX.XX..XX.X..XXX.XX.XXX....XX", ".X.X.XXX....X.XX.X.X.X...XX.X..X......X....XXX..XX", "X...X..X.XX..XXX.XXXX.......XX.XX......X....X...X.", ".X.XX.XX..XX.X....XX.X..XXXX.X.......XXXX.XX.X..X.", "....X.XX.XX..XX..XXX..X....X.........XX.XXXX.X.X.X", "X.XX...X...XX.X..XXXX..XX.X..X.X...X...X..XXX....X", ".XXXX.......X.XXXXX..X..XXXXXX..XX.XXX.X....XXXXX.", "XX.XXX..X..X.XX.XX.X.......X...XXXX..XXX.X.X.X..XX", "XXX..XX.XX.X.X.XX.X..X.XXXX.....X.X....XXX....XX..", "..XX..X..X.X.XXXXX.XX.X..X.X.....XX.X.XX..XXX.X..X", "X.XXX...XXX..X....XXX.XXX.XXX..X.XX.XX.XXXXXX..X..", "XXX.X..X.XX...X.X.X.X...X.XXXX.X...XXXX..X.XX.....", "X.XXXX.X.X..X....X....XXX.X.X.X..XX..XXX...XX.X..X", "X.X.X.X...X..X.X.XXX...XX...X..XXX.XX...X.XXXXXXXX", "XXXX..XXXX...X.....XXXXX.XX.XX..X.X...XX.X..XX....", "XX..XXX.X.X.X.X.XXX...XXX.X..X....XXXXX..XXX.XXXX.", "..XX.XX...XX.XX.XXXXXXXXXXXXX..XX....X..X.X..XXX.X", "X......X..X..X.XX.X..XX...XXXX..X.XXX.X.X..X...X.X", "XXX..XX...XXXXXX.XX..X..X.XXXXXXX.XX....XX.X.XXXXX", "X.X.X..XX.X..X.XXXX.XX.XX..XX..XX.X.X.XXX..XX..X..", "X..XXXXXXXXX.X...XX....XXX..X.X.XX.X....X.XX.XX..X", "...XXXXXX..X.X...X...XX.X..X..X....X.X..X.X.X..X.X", "...XXXXX......X..XXX.XXX.XXXXXX...X.X....X.X......", "X.X..X.XXX.X.....X..XXX..XXX....X.....XXX.X.X.XXX.", ".X......X.XXX.X.XXX.XX.X.XXXX.X.XX.X.XXX.X.XX....X", "..XXX..X.X.X.X.X...X..XX....X.....X..XXXX.X.XXXX..", "X..XXXX.XX..........XXX...X...XX.......XX......X..", ".XX..X.X.X.XX......X.X...X.X.XXX.X..XXX.X..XX....X", "XXX....XX.....X.XXX.XX...X.X.XX..X.X..XXXX..X...X.", ".XX......X...XXX....XX.X.X..X.X...XX..XX.X.XXX..XX", ".XX..X.X.X...X.XX..XX.X.X.XX.XXX.X......XX..XXX...", "X...X...XXXXX.XX.XXX.XXX..XX.X.....XX.X.XX.X......", "XXX.X.XX.X..X.X..XX.....X.XX...X.X.X.XXX..XX.XX..X", "..X.X..XX..XXX.X...XX.X.X..XXX..X.XX...X.XX.....XX", "XX.X.XX.X.XX....XXX.XX.X.X.XXXX.X......XXXX..X...X", "XX.X...XX..XXX...XX....X..X...X.XXX.XX.XXX.X......", "XX....XX.X..XX...XXX.X....XXX.XX.XXX.XXX.X.XXXX..X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 69, 79};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> grid = {"XXXXXX", "X.XXXX", "XXX.XX", "X..XXX", "XXXXXX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> grid = {"X.", ".X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> grid = {"X.", "X."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> grid = {"..", "X."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> grid = {"..", ".."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> grid = {"X.X", "XX."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> grid = {"X..", "XXX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> grid = {"XX", ".X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> grid = {"X.XX..XXXX.X.X..XXX...XXXXXX....X.XX.XXXXX.XX.X", "X.XXX....XXXXX..XX.XX..X.XX....X.X...X..X..X...", "XX....X...XX....X..X........XXXXXX.X.XXXX...X.X", "X.XX.XXX.XX.X..X.X...X.XX..X..X.X.X..X.XXX...X.", "X....X.......X.....X..X.XX..X.X....XX..X...XXX.", ".X....XXXXX.X.X..X..XX.XXXX..XXXX..XX.XX.XXX.X.", "XXX..XX..X..X.X..X..X...XX....X.XXX.XXXXXX.XXXX", "X.X..X..XX......X.XXX.....X...XXXXX..X.XX...X..", ".X..XXXX.XXX..X.XXXXX.XX..X.X.X.X..X.XXX.XX.XXX", ".X...XX.XX..X.XXXX.XX.XX....X.XXX..XXX...X..XX.", ".XX...XXX.XX.X.X..X..XXXXX.X..XXX.X.XX.XX..X.X.", "X..XXX.X..X..XX.XXX...XX.X.X.X.XXXXXX.....XX..X", "XXXXX....XXX.XX..XX..X.X.XX.....XXX..XXX.X.X.X.", "XXXX..XXX.XXX....X.X.X..XX.....X.X...X..XXXXX.X", ".X.X..XX.....XXX.XX.XXXXXX.XXXXX.XX.XXXXXX....X", "XX.XXX.XX.......X.XX..XXXXXX.XXX.XX...XXX..X.XX", "...X.XX..X...X..X.XXXXX.XX.X.X.X.X.X.XXX....X.X", "XX.X.....XX....X.XX...XXXXX...X.X.X.XXX.X.XX..X", ".X.XX.XX...XX......XXX.X..X....X.XXXX..X.XXXXX.", "X.XXX.XX.....XXX.....XX....X....XX.XXX.XX.X.XX.", "XX.....X.XXXX....XXX..X...XXX..X.XXXXXXX.X..X.X", "X...X.X...XXX...XXXXX.X.X.XX.X.X.X.X.X....X.X..", "X..XX.XXXX....XX..X.X..XX.....X....XX.XX..XX.X.", "....X.XX..XX.X.XX.X..X..X.X.XX....XX.XX..XX.XXX", "X..X.X.X..XX........X...X..XX.X.XX..X.XX.X.XXX.", "X.XX.X...........XX.XXXXXX.X.XX....XX..XXXX.X..", ".X..X...XX...XXXX.XXX.X.XXXXXXX.X...XX.X..XX...", ".XXX.X.X.XX..XX..X.X.XXXX...X...XX..X.XXX.X.XX.", "XXXX..X........X...XX.X.XX.X.XXX.XXX..XX.XXX...", ".....X.X..XXX........XX..XXXX.X.XX.X.X..X...XXX", "XX..XXXX..XXX...XX.XX..XX..X..X...XXXX.X.XXXXX.", "...XXXX.XXX....XXX.X.XXX.X..X.X....XX.X.X..X...", "XX.XXXX..X...XXXX.X..X..XX......XXXXX......X...", "XXXXXXXX.X..XX...X.XXX..XXXX...XXX......X.X.X..", "...X.X.XX..XX..XX.XXX.XX.XXX.X....XX..X...XXX.X", "..XX.XXX.X..XX.X..XXXX..X..X..X.XXX.X.X..XX.X..", "X....X.XX.X..XXXX....XXXX.XXX.X....X.X....X...X", ".XXX.X.X.XX.XX..XX.X.XX....X..XXX.XX...XX.XX...", "X..X.X..XX...XX.X.....XXX.XX..X.XXXX...XX.X.XXX", "X.XXXX.XX..XX.XXX.X.XX...X.......X..XXX......X.", ".....XX.X.XXXXXX.XX.X...XX.X..XXXX.XX..X.X...XX", ".XX..XXXXX....XX....X.XXX..X..X..X.X.XX..XXXXXX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 63, 70};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> grid = {"X........X.X...XXXX.X...XX..X.XX..XXXX.X.XXXX.", "...X.X..XX.XXXXXXX..X.XXX....XX.XX...XXX.X..XX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 15};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> grid = {"....XXX....X......X.XX.X.X..X.X.X..XXXX..X...X.XX", "..XX..X.XX....XXX.XX.XXX.X.XXXX.....XXXX..XX.....", "X.X..XX..XXX.XXX...X.XX...X.X.X......X...XXXXXXXX", ".XX.XXX.X..X.X.XX..XX.XX...XXX.X.X....XX..XXXXX..", "X.XXX.X.X.X..XX.X...XX.X.....XXX.X..XX....X..X.XX", "XX....XXX.X.XX..XX.X.XX...X.XX...XX..XX....X...X.", "X..XXXXX..X.XX.X.XX...XXXX....X.XX.XXX.XX...X...X", "X.XXXXX..X..XXX...XXXX..X.X.XXX....XX..X.XXX..X.X", "....XX..X..X.X..X.XX...XX.XXXX.XX.X..XX...XXXXXX.", "XXXXXX...XXX.X....X.X...XX.XXX....XXX.X..X.X...XX", "....XX...XX.....XX....XXX..XX.XXXXXX..XX.X...XX.X", "X.....XXX..X.X.XX.X....XXX..XXX.XX.X.X.XXX.X..XXX", "X..XX.......XX...X.X.XX.X.XXX...XX.X.....XXX..X.X", ".X..X...XXX.X....XX.X.X..XXXXXX.XX.....X..X.XX.X.", "XX.XX.X..........X.XXX.X.X.X.X.X..X.XX.......X.X.", "XX....XXXXXXXX..XX.XXX..XX.XX.XXX.X...XX..X..XX.X", "XXX..X...X.X....XX.X.X..XX..XXXXX.XXXXX..X.XXXX.X", "XXX...XXXXXXXXXXXXXX...XX.X.......XXX.XX.XX......", ".X..X.XX..XXXX..X...XXX.XX...XX.....XX....X.XXXX.", "XX.X...X.X.XX..X...X...XXX...XX..XXXX.X....X..XXX", "..X..X....XX.XX.X..XX..XXX..XXXXX.XX.....X.X.X.XX", "....X.X....X..XX.X..XXX.......X.X..XXX.X...X..XX.", "XX...XXX.X.X...XX..XXX.XXXXX..XX..XX.X.XXXX..XXX.", ".X..X.....XX..XX.XX.X.X..X...XX.X.....X...X....XX", "...XXXX.X.XX.X..X....X.X...X...XX...XX.X...XX.X..", "XXXXXX...X.X.XX.....X.XXX.X..X...X.XX.XXX.XXXX.X.", ".X..XXXXX..XXX..XX...X.XXXXXX...X.XXXX.XX.X.....X", "XXX.XX.XXXXX...X.XXX....XX.X.X.XXXX...X...X.XXX..", "...X.XXX.X...XXXX..X..XX.X....XX..XXX.XXXX..X.X..", "...X..X.X...X....X...X.X....X.XX...X.XX....XXXXXX", "XX..XX....X......XXX..X..X..X..XX.XX.X.X.X.X.....", ".XXXX...XXX.XX...X...X.X..XXX......X.X.XXX.X..XX.", "X..XX.X.......X.X......X...XX....XX.XX.X.X..X.X..", "X.XXX.X....XXX..XXXX..X.XX....XX..X.X..XXX...X..X", "XXX.....XXXX...XX.X.XX...X.XX..XX.XXX.X..X.X.X.X.", "..X..X...XXX.....XX.XX..XX.XX..X.X....XXXXXXXXX.X", "XXXX....X...XX.XX.X..XX..X..XXXX..X..XX..X.XX.XX.", "..XX.......XX...X.X.X..XX..X...XXXXX.X....XXX.XXX", ".X..X...X..XX.XX.XX..XX.X..XXX..XX.XX.X.XXXXXXXXX", "XXXXXXX.XX.XXX.XXX.X.XX.X..XXXXX.X..XXXX..X.XX..X", "...X......X..X..X.XXXXX....X....XX.XX....X.XX.X.X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 60, 73};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> grid = {"X.XX....X..X.X....X.", "..X.X..XXX..XXX...X.", "X.XXXX.X..XXXXXXXX.X", "X....X....X...XXX.XX", ".X...XX.X..X.XXX...X", ".X.X..XXX...XX..XX.X", "X.X...XX..XX.X..X..X", ".X.XX.X....X.....X..", "..X.XX.XX.X...XXX.XX", "..X...X..XX......X..", "X.XXXXXXX.X.X.XX.X.X", ".X.XXXX..X.X.X..X.X.", "X.XX...XX..XXX.X.XXX", "..X....XXX..XX...X..", ".X.X...X.X.XXX.X.X.X", ".XX...XX.X.XXXXX....", ".X.X..X.XXX.........", "X..X....X.XX.XXXX...", ".XXXXX.XXXXX..X.XXX.", "...X.X..XXX....X.X..", ".XX.X.X...X..XX.X..X", "..XX..X.X...X..X.XXX", "XX.X..X.X.XX.X.X.XXX", "XXX.X.XX....XXXX.XX.", "XXX.XXX.X.X..XX.XX..", "XX.....X.X.X..XXX.XX", ".....XX.X.XXX.X.XX.X", "..X..X.X.X..X.X..XX.", "XX.X..XXX.X.X.X.X.XX", "..X..X.X.....XX..X..", "X.......X...X....XXX", "...XX...XX.X..X.X...", ".XX.....XX.X.XX..XX.", ".XX.XX.XXXX.XXX..XXX", "XX.....XXXX.XX...X.X", ".XXX.X.X..XXXXXXX...", ".X..XXX..XXX.X..XXXX", "X..XX.X.X.X.......X.", "......X...XXXX.XX.XX", ".X..X.....XXX....X.X", "X..X....X..X.X.XXX.X", "XXXXX.XXXXXX...XX...", "XXX..XX.X..X..XXXX.X", ".XXX....X.XXXXXX....", ".X...X.XXXX.X.X...XX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 34, 35};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> grid = {".X.XX.XX.X..X.XXX", ".XXX.X..XXX.XX.X.", "..XX....X.X.X..X.", "X.X.XXX...XXXX..X", "X.XXX.X.X.XX..XX.", "..XXXXX.XXX.....X", "X..X.X.XXX..XX.X.", "...X.X.....XXXX.X", ".XXXX...XX..X....", "XX.X.XXXX..X...X.", "XX.XX......XXXXXX", "X..X..XXX.XXX.XX.", "X.XX.XXXXX.....X.", "XXX.....XX.XXXXX.", "XXX..X.XX.XX..XX.", ".XXXXX..XX..XXXX.", "XXX.X.X.X.X.X..XX", "XXX.XXX.X.X.X.X..", "...X..XXXX.....XX", "....XX.XXX..X....", "X....X.XX.X.X.X.X", "XXX.X.XXX.......X", "XXXXXXXX..XXX.X.X", "X.....XX..XXXXXXX", ".X..XXXX...X.X.X.", "XX.X....X.XXXX..X", "XXXXXX.XXX.XX.XX.", ".XXX.X...XX.X...X", "X.XX.X..X....XXXX", "......XX...X.XXXX", "X.XX....XXXXXX...", "XX..XXXXX..XX...X", "..X.XXXXXXX.X..X.", "X...XX.X.X.XX.X..", "XX.X.X.X.X....XXX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 17, 35};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> grid = {"..XXX", "XX.X.", ".XX.X", "X.XXX", ".XXXX", ".X...", ".X...", ".XX.X", "...XX", "XXX.X", "XXXX.", ".X.XX", "..XXX", ".X.X.", "..XX.", "X..X.", "X..XX", "..XX.", ".....", ".XX.X", "XXX.X", "XXX.X", "XX.XX", "X.XX.", "XXX.X", "..XX.", "X.X.X", ".XXX.", "X....", "..XX.", ".XX.X", "X.XXX", "..XXX", "XX..X", ".XX.."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 17, 11};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> grid = {"XX......X..X.XX.", "X....XXX.XX.XXXX", "X.XX..XXX.X..X.X", "X.XXX..X.XXXXX.X", "....X...XX.XXX..", "XX.XX..XX.XX.X.X", "X..X.X.......X.X", "XX.XX.XX.XXXX.X.", "X...X.....XX.XX.", "..XX..X....XX..X", ".......XX.XXX.XX", "....XX...X.....X", "X.X...X.X....X..", ".........X...X..", "..XXX..X........", ".X.X..XXXXX.XXXX", "XX..X..X......X.", "XXX..XXXXX.X.XX.", "..XXX.XX.XX.XXXX", "X.XX.....X.X..X.", "XX.X...XX..X.X.X", "XX..XX.XX..X...X", "......XXX.......", ".X.....XX.XXX.X.", "..X.X.....XX.XX.", "...XXX...X...XXX", ".......X.XXXX...", "X..XX..X..XXXX..", ".XX.X.XXX....XXX", "XX.XX.XXX.XXX.XX", ".....X.X.XXX...X", ".XXXX.X.X..XXX..", ".X.X.XXX..XX...X", "XXX....X.X..XX..", "X.XX..X..X...XX.", "XX.XX..X.X.XX..X", "XX...XXXXXXXXXXX", "X.X.X.X.XXXX.XX.", ".X..XX....XX.X..", "X.X..XXXXXXX.X..", "XXXXXXXX...XX.XX", "..X.X..XXXX..X.X", ".XXXX..XX..XXXX.", "XX.XX.X.X....XXX", "..X..X..X.XXX.X.", "X.....X....X....", "X.X....X....X.X.", "X.X.X.XX.X...X.X", ".XX.....X.XXXX..", "X..X.X..XX...XXX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 28, 28};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> grid = {"X.X..XXXXX.XX.X.X....XX.X.XXXX.XX..X.XXXX..XX", "..X.XXXXX..X..XX.XX.XXX.X..X.X.XX..XX.XX..X..", ".X.XX....XXX.XXX....X..X.X..XXXXXX....XXXX.X.", "XX..XXX......XX.XXXXXXX....X....X.X....X..X.X", "..XX..XXX.XXX.....XX..XX..XX.X..XXXXX.X.XXX.X", "..X.XXX.XX....X...XX..X.X.XX..XXXXX.XXXX....X", ".....X.X...XX.....XX.X.X..X..X.....XX..XX.X.X", "XX.XXXX..X.X..XXX........X...X..X...X.XX.X..X", "XXX.XXXXXXXX....XXX...X.XXXXX..X..XXX.X.XXXXX", "XX..X..X.XXX.....X..XX...X.X..XX.X....X......", "..X.XX.X....X.XX.X.XX.XX...X..X..X.XXXXXX.XXX", "X.X..XX.XX...XXXXX....XXXXXXX.XX.X..X..XX...X", "..XX.XX.X..X....X...XXX.X.X...X.X..XX.XXX..XX", "X.X..XXX..XXX..XX..X.X.XXX.XX.X.X.XXX.X..XX..", "XXXXXXXXXXXX.XXX.X.XX...X.XX.XX....X..XX....."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 19, 33};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> grid = {"X.XXX..X.XX..X.X..XX.XXX.", "..XX...XX.XXXXXX.X..X....", "XXX.X.XXX.XXX...XX.X..X..", "...XX.X..X..X....XX..X...", "XXXX.X...X.X..XXX....X.XX", ".X..X.XX.XX...XX..XX..XXX", "XX...XXX...XX..XXX..XX.X.", "XXXXX.XX.XXXX..XX..XXXXXX", "XXXXXX.X...XX.XX..X.XX...", "X...X..XX.XX.XXXX.X...X..", ".XXX.X.XX.XXX.XX.X.XX.XXX", "..XXX.XXX....XXXXXXX..X.X", ".X.X.X.......XXX.X.X.X..X", "X..X.XXXX.X...XX.XXXXX..X", "X..XX..X.XX.X..XX...X...X", ".XX.X..X.X...X....XX..X.."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 15, 14};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> grid = {"X.....XXX.XXX.XXXX..XX.XXXXXX....XXX....", "..XXXXXX....XX..XXX....XXXX.X.X....XXX..", "X...XXXXX.XX....X.XXXXXX...X.X.XX..X.XXX", ".X.X......X.XXXX.X.X.XXXX.X.XX.....XX.XX", "XXXX.X....X.XXX.X.X.X.XXX.XX.X.X..X.X.XX", "XXX.X.X.XXX.X..X.X..XXX.X..XXX.XXXXXXXXX", "X.X.X.X..XXXX.XX.XX....XXXXXX.XX.XX.XX..", "...X..X.XXX.....X.XX....XX.X.XXXX.....XX", "..XX...X.XXX.XX.X..XX.....X....XX.X.XX..", "..XXXXX..X.X.XX...X.XX.X.X.XXXX.X...X...", "XX.XX...XXXXXXX..X.XX.XX..XXXX..X....X..", "..X.....XX.XX.X..XX....X.X.XXXXXXX.X.XX.", "XXX...XXXX..XXX.X.XX.XX...XX.X.XXXX.X..X", "..XX.....XX.XX.XXXXX..X.XX.XX.XX.XX..XXX", "X..XXXX.X.XX.X.XXX...X.X..XX..XXXX...X..", "X..XXX.XX..XX.XXXXX.XX.XXXXXXXXX..X.XXX.", "....X......X.....XX....X..X.XXXXXX...XXX", "X.XXXX.X....X.XXXX......XXXX.XX.XXXXX.XX", "XXX..XXX....X.XX......X...X...X.....XXXX", "..X.XX..X....X.X..X.X.X..XX......XX...XX", "XX..XX.XX.X.X.XXXXXX..XX.....X...XX.X...", ".XXXXX.X........XX...XXX..XX..XXXXX.X.X.", "X....X..XX.....X..XX.X..XXXX.XX.XX..XXX.", "....X.XXX.XX.XXXXXX..X.X.X..XX.X.XXXX.XX", "XX..XX..X.XXX...XX.....XXX..X...XXXX.X.X", "X.X.X..X.XXXXXXX.XX....X.X.X..XXX.X..X..", "X...XX.....XX.X.X....XXX..XX...XX.X.XXX.", ".XX...X.XX..XX...XXXX...XX....X.XXX..XX.", "X.....XXX.X.XXX.X......X..X..XX.XXXXXXXX", "X.XXX..XXX.XX.X.XX.X...X.XXX..XX.X..XX.X", "..XX....X...XX.X...XX..X.X...XXX.X...X.X", "XXXX...X..XX..XX..XX.X.X.XX...X.X.XXXX.X", "....XXXX...XXXXX........X...X..XX.XX.XX."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 46, 57};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> grid = {"X..XX.XX.X..X.", "X..XX.X..XX.XX", "X...XX...XX.X.", "XXXX.....X.XX.", "...X...XX.X.XX", ".X...X.X.X....", "..X.X....X.XXX", "XX.XX..X.XX...", ".XXX.XX.X...X.", ".X..X.X.X..X.X", "X...X..XXXX..X", "X...XX.X......", "........X.XXX.", "XX..X...XXXX.X", "....XX.XX.X.XX", "X..X.XXX.X...X", ".X...X.X..X.XX", "XXXXX.X...X.XX", "XXXX.X...XX.XX", ".XXX...XX..XX.", "XX...X..X...XX", "..X...X.X..XXX", "..XX.XXXXX..XX", ".X...XX.X..X.X", "XX.XXX...X.XX.", "XXXXX...X.X.XX", "..XX..X...XX.X", "XXXXXX....X...", "XX..X.X.......", "X.....XXXX..XX", ".X.XXX.XX...X.", "XXXX..XX.X..X.", "....XX....XX.X", "X....X..XXXXXX", "X.X......XX..X", "XXX.X.X.XXX.XX", ".XXXXXX..XXX.X", "X.....XXXXX.XX", "X.XXX...X...XX", "XX.XX.X..X.XX.", "XX.X....XX....", ".XX.XX...X.X.X", "X.XXXX......XX", "XXX.X.XX..X...", "X...X..X.X...X", "..XX.XXX...X.X", "XX........XX.X", "...XX...X...X.", "XX.X.XX.XXX.XX", ".XX...XX.X..X."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 22, 24};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> grid = {"XXX..X.XXX.X.X..X.", "XX...XX..XXX..X..X", "XXX.......X......X", "X.XXX.XX.XX..X..X.", "X.X..X.XX.X.X.XX.X", ".X..X.X.X.XXX.XXXX", "XX.XX..X.XX.XXX.XX", ".X...X..XXX.XX.X.X", ".X...XX.X..X......", "XX..XX.X..X.XX.X.X", "XXXXX.XXXX.X.XXXX.", ".XXX.X.X.XX....XX.", "XX..XX.X...X...X..", ".X...X..X.XX.X.XXX", "XXX.X.XXXX.XXX....", "X..XX...X.X...XX..", "X.XX....X...X..X..", ".X..XXXX..X.XXX.XX", ".XX.XX.X....X.X.X.", "....XXXXXXXXX.....", ".XXXXXXX..XXX....X", ".XXXX...X.XXX.XX.X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 15, 16};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> grid = {"X.XX.X.X.X..", "X....X.X..XX", "X....XXXX...", "X.X.XX..X.XX", ".XXX..X..X..", "X.X....XX.XX", "..XXXX.XXX..", "...X.X.XXXX.", "........X.X.", ".XXXXXX.XXX.", "XXXX.X...X.X", "XXX..X.X.XX.", "X...XX..X.XX", ".X.XXXXX.XXX", "X..X.X.X.X..", "X.X..XXXXX.X", ".XX.X.XX.X..", ".XXX.XXXXXX.", ".X...X.X..XX", ".X.X..X..XXX", "...XXX.X..XX", ".X......XXXX", "XX.X.X.X..X.", "XX.X.XX.XXX.", "X.X.X.X.....", "X.....XXXX..", "XX.XX..XX.XX", "XX..XXXXXXX.", "XX.X.X...XXX", ".X...X.X.X..", "X...XXXXX...", "...X..XX.X..", "X.XX...X....", "...X.XXXXX.X", "XXX.XX...XX.", ".XXXXXX..XXX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 12, 25};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> grid = {"XXX..XX....X.XXX...X.X.X.XXXXX....XX", ".X..X..XXX.X.X..XXX...XX.X......XX.X", "X..XX....XX...XXX.X...X.XXXX...X...X", "X...XXXXX..X..XX...XXX..XXXXX..X.XX.", "....XX.......XX.X.X....X....XXXXXX.X", "...X..X.X...X...X.X...X.X.XX.X..X...", "....X....XX....X...X..X...XX...X.XXX", "X.XXXX...X.X...X...XX..XXX.XX.X..X..", "XX...XX.XX..XX.XXX.X.X.XX...X.XX.X.X", "XXXXX.XXX.XX........X..XX...X..X..X.", "XX..XXX.....XX.XX..XX..XXX..X.X.XXXX", "..XX.X.X...X.X.XXXXXXXXXXX....XXXX.X", "X.......X.X.X.X.X..X.X.X.X.XX.X.XXXX", ".XXX.XXXX....XX.XX...X.X.X.XXX...XXX", ".....XX.XX.X.XX.X.X.X.XXXX...X.XXXX.", "XXX.XXX....XX......X.XX..X.X.....XX."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 11, 34};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> grid = {".X..X..X.X..XX......X.", "..X.X.X...XXXX..X.XX.X", "XX.XXX..X...XX..XXXXX.", ".X.X..XX..X.X....X.X.X", ".....XX...X.X.XXX..X.X", ".XX.X.XXX.X.....XX...X", "X.XXX.X.X.XX.XX....X..", "X..X......X.XX..X.XXX.", "X.XXXX.XX.X...XXX.X.XX", "X...XX.X.X..XXX...XXXX", ".....X....X...X..XX..X", "XXXX..X....X......X.X.", "...XXXX.X.XXXXXXX.....", "XX.XXX.XXX.X.XX.X....X", "..X.XXXX.X...XX..XXX.X", ".XX.XXX.XX......X.....", ".XX.XXX.X.X..XXX.XXX.X", "..XX.X..XXXX..X....XX.", "X..X..X.X.XX....XXX.XX", "X.XXX.....X..XX.XX...X", ".X.XX.XXXXX..X...X.X..", "X.....XX..XX.XXXXXXX.X", "...XX...XX.X...X.XX..X", "...X...XXXX...X.X...X.", "X.X.XX.X.X.X....XX..XX", "X.X.XX.XXX..X.....XXXX", "X..X.XXXXXXX....X...XX", "..X..XX.X...X.X.X...X.", "X..XX.XXX..X.X.XXXX.XX", "XX..X.....XX.X.X.....X", ".XX..X..XXX.X.XXXXXX..", "......XX.X.XX...X..XXX", ".XX...XXXXXXXX....XXX."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 14, 25};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> grid = {"X.X..XX..X.X...XX...X..X.X..X.XX.X...X.X..XXXX..XX", "XX....X...X.X.XXX.XX..........X......XX....X..XXXX", "X.X.X...X.XX.X.X.X.X...XXXXX..XXX..X...XX...XXXX.X", ".X.XXX.XX..XXXXX.XXX.XX.XXX..X.X.XX..XX..X.XXX.XXX", "X.X..XX.XXX.X..X.X.XXX....X.X......XXXXXXX.XXX....", ".X.......X.X...XX.......XX...XXX.XX..XXX..XXXX.X..", ".X.XX.X...X.X.XX..XX.XX..XXXX.X.XXX.XX.XXXX.XXXX.X", ".X.X.X.X....XXXXX.X.X..XX.X.X.X...XX..X.XX...XX.XX", ".XX.XX.X..XXX.XX...XX.X....X.X.XX...X.....XXX.X..X", "XXXXX.X...XX..XXX..XXX..XXXXX.X....X....X...X....X", ".XXX....X..X.XX..XX..X.X.X.XX....XXXX...X..XX.X.XX", "XXXX.XXXX.X.XXX.......X.XXXXX..X.X.X.....X..XX.X..", "XX.X.X.X.X.X.X.....X.X...X..XXX.X...XX.X.XX.XXX.X.", ".XXXXXX..X.X.XX...X.X.XX.X....XXXX..XXXXX..XX..X..", ".XXX.XX......XXX...XXXX.X..XX..X...XXXXXX.XX....XX", "..X..X..XXXXX........X.X.X.XXXXX.XXX..XX...X.X.XX.", "...X....X.XXXX..XX.X..XX...XX..XX..XXX.XX..XXXXXX.", ".X.XX.X.X....XXX..XX.XXXX.XX.X...XX.XXX..XXXXXX.XX", "X...X.X...XX.XXX.X.XXXX.....X....X.XX....XX.XXX.X.", "XXXX..XXXX.X.XXX....XX...X..XX.XXXX.X.XX..X.X.XX.X", "XX.XX.XXX..X.X.....XXXX.XXX.X..XXXX.X.X.X..XX.XX..", "..X...X.X......X...X.XX.XX.XX.XXX..X.XXX.X.XX...XX", ".X....X.XX....X.X..X..X.XXXXX..XX..XXXX..X...X....", ".XXXX..X..XX..XX.X..XXX.X....X.X..XX.XX.XX.X...XX.", "...X.XXX.X..X.XX.X.X..XX..X..X.....X...XXX.X.XX.X.", "X...X.X.X.XXX.X.X.X...X...X..XX..X......X.XXX.XX..", "XXXXX...X..X.XXXXXXXXX.XX...XXXX.XXX..X..X.XX.X.X.", "X.XXXX.X..X.X..X.......X..XXXXX..XXXXX..X......XXX", "XX.X..X.....XX.XX.XX...X.X.X...X.XX....X.X...X..XX", "XX.X..X..XXXXXX.X.XX...XXXXX...XX.XX..X..X.XXX..XX", ".X.XXX.XXX.X....X..X.X.XX.X...XXXX.X...X........XX", ".X..X.X..XX.X.XXX.X.X.X.X.X.X.XX.XX.XX..X....XX..X", "X.XXXX.XXXXXXX...XX.X.XX.XX.XXX..XX.XXXXXXXXX.X..X", ".XX..X..XXXXXXXX...XX..XXX.X...XXX.X.X..XXX.X.XXXX", "XX.X..XXXX.XXXX.X.XX.XXX.X..XXX..XX...X.X.X.X.XXXX", "...XX.X.X.X.X..XXXX...X...X..X.X.XXX..X...XXXXX.X.", "..X..XXXX..XX..XXXX...X...XXXXX.XXX.XX..XX.......X", "X.XX..X.X...XXXX.......X...XX..X.X..X....XX...XX..", "XXX.XXX.XX.X.XX..XXX.XXXXX.XX.X....XXXX.....XXX...", "..XX......XXXXX.X..XX.XXXX.XXX.XX..X.XXX.XX...X..X", "....X..X...XX.X..X.X.X.X.....XXX....X.X.XXX.X..XXX", ".XX..XX.XXX..XX..XXX....X.X.X..XXXXX..XXX.XX.XXXXX", "X...X.X...X.X..X.X.XX.X.X.XX..XX..XXXXX......XX..X", ".XXX.XXXX.XXXX..X..X.X..X.X..X..XXX..X.X.XX..XXX..", "....XXXXXX..X.XX.X...X..X..XXXXXX.XXXXXXX...X.XX.X", ".X..X.XXX..X........X.X..X...XXX..XX...XX...XX.XXX", ".X.XXX.XXX.XXX.X.XXX...XXX.XX.X..XXX..XXXX.X..X.X.", "....XX...XX..XX.....XX.....X.XXXXXXX....X..XX...X."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 81, 89};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> grid = {"XX.X....XXXX.X...X.XX.X..X.X........", "XX..X...XX..X.XX.X..XX..XX...X.XX.X.", "..XXXXX.XXX.XX.XX...X.X.......X.XX..", "X.X.X..XX.XX......XX...XXX...XXXXX.X", "XXXX.X..X.XX.X.X.X.XXXXXX.XX.XXXX.X.", "..XX.XXX.X.X...X.X.X.X..XX.X...XXX.X", "X.X.X..XXXXXXXX..X.XXXXXX.X..XX.XXX.", "X.X........XX...X......X.X.X...X.XX.", "XXXXX..XXX.X.X.XX.X..XX..XX.X.X.XXXX", "..XX..X.XXXXX.....X.XXX.XX.....X....", "XXX..XX.X.XXXXXXX......X....XX.X....", ".X..XX..X.X...XXXXX..XXX.X..X...XX.X", "XXX.X.XX...XX.XX.X.XX..X.X..X.XX..XX", ".XX.XXXX..X..XXX....X.X.XX.X.XXX.XXX", "XX..X...X.X..XX.XXX..X..X.XX.X.XXXX.", "XXXX.X...X..X.X.X.XXX....X..X.X.XXXX", "XXX..X....X...X.XXX...XXX..XX..X.X.X", "..XXXX.X...X..X.X.X..X....XXX..XXXX.", "....X....X.XXX...XXXXX.XX.X.XX.X...X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 26, 30};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> grid = {"XXX..XX..XX.X.XXXXX..X.XX.XX.XX..X.X", ".XX.X..XX.XX.X...X..XX.X..X.X..XXX.X", "XX.XXX...XX...XX.X.X.X.....X.X......", "XXXX.XXX.X...XX....XXX..XX...XX.X..X", "..XXXXX.XXX.XX..X.X..X.XXXX.X.X...X.", "XX...XX.XXXXXXX..X.X.XX..X...X.X....", "XXXX.XXX.XXXX.X..XX.XX.X..XXXX.X.XX.", "XXX.XX..XXX.XX.X....X.XXX...XXXX.XXX", "XX.X....XXX.XXX..XXXX.XX.X..XXX.X.X.", "XX....X.XXXX.XXX.XXX.XX...X.X.XXXX.X", "XXX..XX.XX.X..XXX....X.......XXX..X.", "XX...X.XX......XXX.X....X.XX.X.X.X.X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 22, 16};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> grid = {".XXX...XX.XXX..XXX.X.X..X.XX..X.X.XXXX...X..", "X..X.XXXX.XXX..X...XX.X....XXXX.X.XXX..XX..X", "....X.XXXXX....XX.XX..XXX..X..X.XX.....X...X", "XXXXXXX..XX..X.X.XX..X.XX.X..X...XX..XX.XX..", "...XXXXXXXXXXX...X...XX..XXXXX....XXX..XXX..", "....X.XXXX.XX..X....X..XXX...X...XX....X...X", ".X..X.XX....X.XX...X.X..X...X.X..XX.XX..X.XX", ".XX..XXX.XX.XX..XX.X...XX..X.XXXXX.X.XX..XXX", ".XX..X.X...XXX.XXXXXX..X..X....XXXX.X.X...XX", "X....XXX..XX..XX..XXX.X.X.XX.X.XXXXX..XXXXX.", "X.XXX.....XXXXX...XX.X..XXXX.X.X...XXXXXX.XX", "..XXX....X..XXXXX..X.X..XX.XX...X.X...XX.X..", "X.XXXXX......XXX.XX.XXXXX...XX..XXXX...X..X.", "X.X.XXX.X...X..XX..X..X...XX..X.XXX.X.X..X.X", "XX.X.X..XXX.....X......XXXX.X...XX....XX...X", "X.XXXXXXX.........XX.X.XXXXX.XX.X....X.XXXX.", ".XX.X...XXX..XX.X...X..X...XX..X.X..XXX.XX..", "X....XXXX...X..X..X...X.XX.X.XXXXXXXXXXX..XX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 24, 31};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> grid = {"XXX....X.X.XXXX...XX.X.X.XX..X...XXXX", "....X.XX..X......XXX.X..XXXX....XX...", "X..XX.XX.X.X.....XX...X.......X..X.X.", "X...X....XX.X....X.X.X.XXX.XX.X.X..X.", ".XX.XXX......X...X.XX...X.X.....X.X..", ".....X..X.X.X....XXX..X..X.XXX..X.X..", "XX..X.XXXX.X.XXX.X.XXX...X..X.X.XX.X.", "..X.XXXXX.XXX....XX..X.X....XXX.XX..X", "X..X.X.XXXXX......X..XX....X.XXX.XXX.", "..X...X..X..X.X..XX.X.XX..XX.X.X.XXXX", "...XXXXXXXX..XX.XX.XX...XXXX.X.XXXX..", ".XXX....XXXXXX...X...X.XXXXX..XXX.X..", "..X.X.....X.XXX.X....XXXXX....XX..XX.", "XX..X.XX.....X...X..X..XXXXXXX.XXXX..", "XXXXX.X.X.XX..XXX...XXX..X.X.X.XXX.X.", "X..XXXXXXXX..X..X.XXXXX.X.......X..XX", "..XXXX.X.XXX..X..X.......X..XXX.X.X..", "X...XX..XX.XXXX.X.X.........XXX.X...X", ".X.X.XXXXXX.XXXX.X..X.X.....X.XXX..XX", "X.XX.X..XXXXXXXXX..X..XX.X..XX...X...", ".XX.XX.X.XXXXXX...XXX...X...X.X...X..", "X..XXXX.........X.XXX.XXX.XXXX.X.X.X.", "...X.X..X.XXXXXX...X.XXXX..X.XX.X....", "..X.X..X..XXX..XX..XXX.X..X.XX.XX.X..", ".X..XX.X..........X.X..XX.XX.X.XX.X.X", "..X.XXX.....X...XXXXX.X.XX.XX...XXXX.", "XXXXX....XXX..XXXXX.X.X...XXX.XX.X...", "X.X.....X..X.XX...X.X.XXXXX..XX...XX."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 33, 47};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> grid = {".....X.XX.", "...XXXX..X", "..X..X..XX", ".X.X.XXXX.", "XXXX.XX.X.", "XXXX.XXXXX", "XX.XXXX..X", "XX..XX.X..", ".XXXXX..XX", "X.XXXX.X.X", "X.XX......", "X..X.XXXX.", ".XX.X..X..", "X....X..X.", "..X.XXXX..", ".X.X..X.XX", "..XX....XX", "XX..X.XX.."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 6, 15};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> grid = {"..X...X.X..X.XXX.X.XXXX.X..XXX.X.XXX.X....", "..X.XX..X.XXX.X.XX.X..XXXX.........X.X....", "XX...XX.XX...X....XXX.X..XXX.XXXXX.XXX....", ".X..X..XXXX..X..X.XXX.....XX.XX.....XXXX.X", ".XX.X...X.X.X.X.X...X...XXXX.XXX....XXX...", ".XXX.XXXXX.......X.X.XXX..XX.....XXX.XX...", "XX......XX.XXX.XXX.XX..X.XXX.XX.X..XX.X.XX", "XX.......XX.XXX.....X.XXX..XXXXXXX.X.X...X", "...XX.XXXX.X....XX...X.XXXXXXX.XX...XX.XXX", "XX.X.XX.....X.X.X..XXX....X..XX.XX....XX..", "X..XXX.XX..X....XXXXXX.XXXX.X..XXXX...X.X.", ".XXXXX....XX..X..X..XXX......X.X...X.X.XX.", "..X.X.X.XXXX.XXX.X..XX.X.XX..X.X.XXX.XX.XX", "...XXX...XXX.X.XX.X.XX...X.XXXX.X.X.XXXXXX", "X.XX.X.X...X..XXX..XXXX.X.X.X......XXXX.X.", "..X.....X...X.X..XX..X....XXXX......XX.X.X", "XXXXXX.XX..X..X.X.XXXXX...X...XXX.X..XX.XX", ".X.XX..XX...XXX..X..XX.X.X....X....X.XX..X", "XXX...XX.X.X.X.XXX..XXXX....XX.X.XX.X.X.XX", "XXXXX.X..X..XXX.X....X.XX...X.X.X....X...X", ".XX.XX.X.XX..X.XXX.XXX..X....XXX.XXX.XX...", "X.XX.X..XX.XX.......XX..X.X.....XXX.X....X", "X..XXX.XXXX..X..X.X......X..XX..X.XX...XX.", ".X.XXX.X...X.XX..X...X.XXX.X...XX.X...X.X.", "..XXXX.X..XX...X.XXXX....XX.X..X.X.XXXXXXX", "X....XXX..X.XXXXX.X.X.X.XXXXX...X.X.....X.", "X..X.X...X....XX.............X.XX.X.XXX.X.", ".XXXX.X.X..X...XXXX..X.X..X.X...XX.XX.X.X.", "..XX.X.XX....X..XXXXX....XX..XX...X...X..X", "X.XXX..XX.XXX.XXXX.X...X.XX...X...X.X.XXX.", "XXXX.X.XXX..XXX.X.XX.XXX.XX.XXX.XXXX.XXXXX", "...X.X.X.X.XX.XX....XX......X..X.XX..XXXX.", "XXXXX..X.XX.X.XXX.X.X..XXXX..X.......XX.X.", "XXXX.X.XXXX.X.XXXX.X.X.XXX.X..XXXXX..XXXXX", "..X.XX..XXXXXX..X.XXXX..X..XX..X..XXX.....", ".X...XX......X.X.X..X.X.XX...X.X..X...XX..", ".X....X....XX.XX.X.X.X.XXX...X.X.X.XX.X.XX", "X.X..XX..XXX.X..XXXXXX..XXXX..X....XX.XXXX", "XXXX.X..XX..X....XX..XXXXXXX........X..X..", "X.XXXXXXXXX.XX.XXXX..X.XX.XX.X...XXXXX.X..", "X.X.X.X.X.X.X.X..X.X.X.X.X..X.X...XX..X.XX", "XXXX.XX...XX..XXXXXXX...XXX.X..XXXXXX..X.."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 69, 78};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> grid = {".X..X.X..XX..XX.X", "X.X....X.X....X.X", "...X..XX.X.XX.XX.", "...X.XXXX.XX.....", ".X.XXXXX...XXXXXX", "XX.XXX.XXX.XX.XXX", "XXXX.XXXXX....XX.", "........XXX..X.XX", "X..XX..XX.X.XXX..", "X...X....X.XXX..X", "..XX.XX..X.X..X.X", ".....X...X.....XX", "X.XXX......XXXX.X", "...X....XX.XX..XX", "....X.XXXXX.XX.XX", "XXX.XXXXXXX.....X", "....XXXXX...XX.X.", "X.X.XX.....X.....", ".XXX..X.XX..X....", "X.X.X....XX..X...", ".X..XXX...X....X.", "XXX.X..X..XXX.XXX", "XX.......X.X...X.", ".X..XXX.X..X.XXXX", ".........X..XX.X.", ".X.X......XXX.XXX", "X.XX.X..XX...XX.."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 10, 14};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> grid = {"X.", "X.", ".X", "..", "..", "X.", "X.", ".X", "XX", "XX", "XX", "XX", "X.", "XX", "XX", "X.", "XX", ".X", "..", "X.", "..", ".X", ".X", "XX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> grid = {"X..XX.XXXX...XX...X.XX", ".XX..X.X...XXX.....X.X", ".XXXX.XXXX...XX...XXXX", "...XXX......X.X.XX.XXX", "X....XXX.XX........X.X", "..X..XXX...X.XX....XXX", "..XX..XXXXX.X...X..XXX", ".XXXX.XX..XXX.X...XX.X", ".X......XX..X..X..XXXX", "XX.XXXX...XX.XXXX.....", "X.X...XX...X....XXXXX.", "XX.XXXXX...X...XX..X..", "XXXX.XX.XXXX.X...XXXXX", "...X....X.XXX...X...XX", ".....X..XX...X.X...XX.", "XXX...X...XXXX....X..X", ".XX.X..X..XXXXX..XXX..", "...X....XX.X.X....X...", "....XX..X..XX.XX.....X", ".X...XXXX.X....XX.X...", "X.XXX....XXX.XX..XXX..", "......X.XXXX..XX.XX..X", "X..XX.XXX.XXX.X...XX..", "X.X..XXX.X.X...X.X..X.", "XX.X.XX.X.....X..X.X.X", ".........X....X.X..X..", "XXXX.XXXXX.X.XXX.X..XX", ".XX....X.XX.X......X..", ".X..XX...X...X..XXX...", "..X...XX...X.X..XXX.X.", "XX.X.X.....XX.X..XX.X.", "XXXX.XX..XX...XX....XX", "...XX.XX.XXXXX.X.X..XX", ".X...XX.XX.X.....XX...", "..XXXXXX......X.X..XX.", "XX.XXXX.....XX...XXX..", "XXX.....XX.XXX...X..XX", ".X.XXX...X..X.X.X.XXX.", "...XXXXX...X..X.X.X.XX", "....X..X..XX.XX.....X.", ".X.X..XX...X.X.....X.X", "..XXX.X...XX..XX.X.XXX", "XXXX..X.XXXX.XX.X.X.XX", ".X..XX....X.XX.XX..X..", "XXX.....XX....XXXX.XXX", ".X.XXX..X.....XXXXXXX.", "..X.X...XXXX.XXX.XXXXX", "X.XXXX.X......XXX..XX.", "XXX....X.X....XXX.XXX.", "..XX..X....XX..X..XX.."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 25, 37};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> grid = {".XX.X...X.X..XXXXXXXXXX...X..X", "X..XXX......X..X..XXX..X....XX", "X.XX.XXX.XXX..X....XX.XX..XX..", "X.XX....XXX..X.X..X.....XXXX..", "..X..XX..XX..XXXXXXXX.XXX.X.XX", "XXXX....XX..XXX......X.X...X.X", ".XXX.X.X..XX.XX..X...XX.X.X..X", "X.X..X...X....X.XXXXX...XX..X.", "..XXX...X..X...XX.XXX.X.XXXX.X", ".X..X.X........XX...XXXX....X.", "....XXX.X.XX.X...XX.XX...XXX.X", "XXX..XX.XX.XXX.X....X..X.....X", "XXX..XXXX.....XXXX..XXX..X.XXX", "X.X...XXXXXXXX.X...XXX.....X.X", "....XX.....X..XXX...X.X.XX..X.", "X..XX..X.X.X..X.X.X......X....", "XX.X.X..XX...XXXX...XX.XXX..XX", ".XX.X.XXXXX......XXXXXXX.X.X.X", "XXX.XXXXX.X...X..XXX..X..XX.XX", ".XX.XX.X.....X.XXXXXXXX.X...XX", "XX.....X.X...XXX.XX.XX..XXX.X.", ".X.XX.X.X..X......XX.XX...XX..", "XXXXX.XX..XXXX....XX.XX.XX.X.X", "...X.X...X.XX.XX.X...X.XXX.XXX", ".XX.X.XX..X...X.XXXX.XXXXXX.XX", ".XXX..XX.XXX..X..XXX...X.X.XXX", "..XX.XX.X.XXXX.X.X.XX.XXX.X.XX", ".X..X.X.XX...X..XX.X..X...XX.X", "X.X.X..XXX.XX.....X.XX.X..X...", "X...XX..XXX...XX.X...X.X....X.", "XX.XX...XXXXXXXX..XXXX......X.", "XX..X.XX..XX.X.X.....X.X.XX.X.", ".......XX...XXXXX.....XX.XXX.X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 28, 30};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> grid = {"X....X.XX.....XX.....XX.XX...X...XXXXX.X.XX..", "..XXX..XXXX...XXX...X.XX...X.X.....X........X", "X.XXX.......X.XXXX.....XX...X.X....X......XXX", "...XXXX.X......X.X......XX.......XXXXX..XXX..", "XX.X.XXXX...X.......X......XX.X..X..XXX.XXX..", "XX.X.X..X.XXX....X...XXXXX.X..XX...XXX...XXXX", "..XX...XXX.XXXXXX.X.X...X..X.X.X.XX.XXX..XX.X", "X..XXXX..X....XX.XXXXX..X..XXXXX..XXXX...XX.X", "XX.....XXX.X.XXXXXXXX....X..X.X.....XXX..XX..", "..XXX..X.XX..XX.X.X.X.XX..X......X....X.X...X", "X.X...X..X..XX.XX.XXXX....X.XX.X.XXXX.X..XXX.", "X..XX.XXXX.XX.XXXX....X.XXXXXX.XX...X..XXXX..", "X.X.X...XX.XX..X..X.XX.XXX.X.XXX..X...X......", "...X...X..XXXX.X..XX...XX.X...XXX..XX.X.XX..X", ".X.X..X.XX.X...XXX..X.XXXXX....X.X...X......X", "X....XX.X.XXXX..X.XX..XXXX...XX.X.XX...X..XX.", "XXX....X..XX.XX..XX.XXXX.XX.X.X...X...X.XXX..", "...X.XX..XX........XXXX..XX.XXX...X.XXX..X.X.", ".XXX.XXX.X.X..XXX.X.XX..XXXXX.X..X..XX.XX.XX.", ".X..XX.XXXXX.X.X.XXXXX..XX.X.X.X.XXX.XX.....X", "XX.XXX.....XXXX..XX......XXX.X.XXX.....XX..X.", "X..X..XX..XX..XX.X...XXX..X.XXXXXXXXXXXX.X.X.", "..X..X..XX.XX.XXXXX...X.X.XX.XX..........XX..", "..XX..XX.X.X..XXXXX.XX..X...X.XX.XX..XXX.XXXX", "..X.X.XXX..XXX....XX.X.X...XX.........X...X.X", "X..X...XX.X...XXX.X.X.X...X.XXXX.XXX...XXXXXX", ".X.X.XXXXX...X....X...XX..XX..XX.XX...XX..XX.", "XX.X.....XX.X..XX.XXX..XXXXXXX.XXXX..X.X...XX", "XX..X.XXX..X....XX.XX...X.X.X.X.X...XX..X.XX.", "X..X..XX..X....XXXXX.X..X.....X.XX.XXXXXXX.X.", ".XX.XXX.X..XX.XX..X....X.X.X.X.X...X.X..X...X", ".X.X.XX.XX..XXX..XXXXX...XXXX..XXX..X..X.XXXX", "X..XX.XX...X.XX.XX..XXX.XXXX..XXXXXX.XXX.XX..", "..XXXX...XX...XXX.X...X.X.XXXX......XX...XX.X", "XX..X......X.XXX....XXX.X..X.XX.XX.X.X..XXXX.", "X.....X...XX.XXXX.XX.XXX..XX.X.X....X.XXX.X.X", ".X.X.XXXX.XXX.XXXXX...X..X.XXXXXX..XX.X...XXX", ".XXX..X..XX.XX...XX.XXXXX..XXXXXX..XX....XXX."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 40, 62};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> grid = {"XXXXXXXX..X...X...XX", ".XX.XX.X....XX.X..X.", "..XXX..XXX.X....X.X.", "XX..XX.XX.XX.....X.X", "X..XXXX.........X.XX", "....XX...X..XXXX...X", "X...XX.XXX..X.X..XX.", "..XX...X.XX.X.XX.X..", "X.X.XXX...XXX..X.XX.", "XXX.XX..X.X.XXX.X.X.", "X.X.XX..XXXXXXXXX.XX", "XX.XX.X.X....XX..X..", ".....XX...XX.X...XXX", ".XXX...XX...X..X.XXX", ".XX.X.X.XX..X.X..X.X", "X.XXXX..X.XX.....X.X", "X..X.X.XXXX.XX..XXXX", "X....X.XXXXXXX..X.XX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 7, 16};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> grid = {"X.XXX.XX..XX...XXX.X", "XX...XX.X..XXX..XXX.", ".XXXX.X.....X.XXXXX."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 4};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> grid = {"..XX...X....X.X.X.XXX...XX", ".X.X.X.X.X.X.X.XXX.XX...XX", "..X..XX...XX..X..X..X..XXX", "..X.X....XXXX...X.....X...", "X.XXXX.X.X..X.XXX..XX.X.X.", "XX.XXX........X..X.XXX...X", "..XX.....XXX........X..XX.", "X..XX....XXX.XX....XX.XXXX", ".X....X.X..XX.X...X..X.XX.", "X...XXX..X.X..XXX..XX.XX..", "XX...X..X.XX.X..X..XXXX.X.", ".X.X.....XXX..X.XX..X..XX.", "...X..XXXX.XXXXX..XX.X.X..", "X.X..XX..XXXXXXX.X........", ".XX...X.XX..XXX....X..X...", "X.X.XX.X..XXXXXX.....XX..X", "..XXX.XXX.XXXXX.XX..X.XXX.", "XX..XX.XX...XX.XXXXXXX.XXX", "X..XX...X..X.XX.X.....X.XX", "..XX...XXX..X.XX.XX.X.XXX.", "..X.XX.X..X..X.XXXXX.X..X.", ".X.X...XX.X....XXXX.XX.X..", "..XXX.X..X.XXXXXX..XX..X.X", "X...XX...X.XX.XXX..XXX..XX", "....XXX...X.XX.XXXXX...XXX", "X...XXX..X.X.....XX.XXX..X", "XXX...XX...XX.X..X.XXX.X.X", ".X..X.XXX.X.XXXXX.XXX.XXXX", "XXX.X..X..XX.X.XX.XX.XX.X.", "XX.X...XXX.X.X.X..X.....XX", "X.X.XXXX.....XX..XX..X..X.", ".XX.XX.XXX...X..XX..X.X...", ".XXXX...X.X..X.XX...XX..XX", "X..X..XX.XX....X....X...X.", "...X.XX..XX.XXXX........XX", "..XXXXX.X...XXXXXXX..X....", "X.XX.XXXXX.XXX..XXX.X.X..X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 41, 24};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> grid = {".X..XX.X.....XX..XX..X.XXXX", ".X.....X.X..XX.XXX.XX..XX.X", ".X.X.......X.X...X.......X.", ".X.XX.XX...XXXX.X.X.XXX..XX", "XXXXXX.X...XX....X.X.......", "X..XX...X.XXXX.XX..XX.X.XXX", "..XX.X.X...X...XX.X.XX.X...", "X.X...X..X.X..XXXX.X.XXX.X.", ".X..XX.XXX...X.X...X.XXXXX.", ".X.X.XXXX.X..XX.X.XXX.X...X", "XX..XX..X.XX..XX....XXX..XX", "..XX.XXX..XXXX.XX.X.XXX....", ".X...X..X.X..........X.XXX.", "XXX..X.XX.XX..X.XXXX.XXX...", "XX..X...X....X...X.X....XXX", "X.XXX.XX.XXXXX.X.X..X...XXX", ".X.XXX....X..X.XXXXX..X.X.X", "XX.XX..XXX...X.X.X...XX.XX.", ".XX.XX.X........XXX....XX..", "X..XXX..XXXX..XX..XXXXX.XXX", "..XXX.XX....XXXX.XX.XX...X.", ".X....X.....X.X.X.......X..", "XX.XXX.....XXX.X..XX..X..XX", "...XXX.X....XXX.XXXX...X...", "..XX.XXXXXXXXXXXX..X.XXX.X.", "XXXXX.XX.XXXXXXX...XX.X.X..", "X.X.XX..XX..X..XX...XX.....", ".X.X.XXXXX...X..XXXX..X.X.X", "...X..XX.XXXXX.....X..X.XXX", ".X.XX.XX..X.X.XXXX.XX..X.XX", ".X.X.X..XX....XXXX.X..XXX..", "...X.XXXXX..XX.XXXX....X.XX", ".X.XXX..X....X...XXX.X.X.X."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 29, 40};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> grid = {"..X...XX....X...XXX.", ".X.XXXX..X..X..X.XX.", "XXXXX.X..X..XXXX..XX", ".X.XXXX......XXXX...", "XX.XXXX....XXXXX.XX.", "X...X.XX.....XX...X.", "X..X.XXXXXXXX..X.X.X", "X.X.X...XXXXX..XXX..", "X..XX....X.XXXXX..XX", ".XX.X.XXXX...XX..X.X", "X......XXX.XXX...X.X", "XXX.XX.XX.XX.X......", ".X...XXXX.XXXX.....X", ".XX.X.....X.XX.X.XX.", ".X.X.X.X..XX.X.X.XX.", "X...X..XX...X.X...XX", ".X..XX.XX..X....X.XX", "X.XX.X.X.XX.....XX.X", "X...XX..XX.X.X..X..X", "X.X..X..X.X.X.X.X.X.", "X...X.XX..XX..XX...X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 15, 22};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> grid = {"..XX...XXXX.X..XXXX..X", "..X..XXX.X...XXXX..X.X", "X.X..XX......XX.XXXX.X", "X..X.XX.XX.X...XXX.X..", "X.XXX.X.....XXXX.XXX.X", "..XXX..X.XX..XXXXX....", ".XXXX...X.X.XXXX..X.XX", "..X....XX.X....X...X..", "..XX..XXX...X..XX..X.X", ".XXX...XX.XX.XXX.XXX.X", "X..X.XXX.XXXXXXX..XX.."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 10};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> grid = {"X...XXX..X.XXXX..XX...XX..X.XX.X", ".XX.X.X.X.XXXXXXXX.....XX..X.XX.", ".XXX..XXXX.XXX........X..XXX..XX", ".XXXXX..XX...X....X.XXX.X.XX....", "..X..XX.X.XXXX.XX..XXXX.XX.XXX.X", "X.XX....XXXXX...XXX.X.XXXX..XXXX", ".......X...XX.X..X..X..X.X...X..", "X...XXX...XXXX.XXX.X..X...XX.X.X", "XXXX..X.X.X.XX.XX.XX....XXX.....", "XXXXXX......XX.X...X.X.X.XX.XXXX", "..XX.XXX..XXXX.XX.XX.X.XXX.X.X..", ".XXXX.XX....XXXXX.X.....X.......", "X.....XXXX..XX..X...X.X.XXX.XXXX", "X.....X..XXX.X..XX..X.XX.XX..XX.", "X....XXXXXX..XX.......X..X.XX.X.", "X.X..X.XXXXXXX.X.X.XX.XXX.XX....", "XX..X.XXXXXX...XXXXX...X.XXXX...", "..XX...X..X...XX..X.X...XX..XXXX", "XXXXXX....X.XXX.X.X.XX.X.X.X.XX.", ".X.XXX..XXXX.X..XXXXX...XX.X....", "X.....X.XX.X.X.XXXX..XX.X...XXX.", ".....X.XX...XXX...X......XXX.XX.", "......XXX.XX.X..X.XXXX...XX.XX..", "XX.XXXXXX.X..XX..XXX.X.XX.XX..X.", "XXXXX...X.X..XX.XXXXXXXX.X.X...."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 21, 35};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> grid = {"..X..X..XX..X..X.XX..XXXX...", "X.XX.XX.X.X.X.XX...X.X.XX.XX", ".XX.XXX.XX...X.X.X.X...X....", "X.XXXXXXX.....X.XX.X....XX.X", "X......X.X.X...XXX.XX..XX...", ".X.X.XX.....X..XXX..X..XXXXX", "...X.XX...XX.X..X.XX.X.XX...", "XXXXX..X....X..X.X..X..XX...", "X.X.X.......X.XX.XXXX.XX...X", "....X..X.XX.X..X...X....XX..", "X.XX..X...XX..X.X.X.XX.X...X", "..X.XXX....XX..X..XX.XX..X..", "..X.X.X.XXXX.XX..XX..XX.XX.X", "XX.XXXX.XX..XX.X.....X.XXX.X", ".X.......X.X.X...X....X.XX.X", "...XXXXX.X...X.X...XXXX..XXX", ".XXX..XXX........X.XXX.X.XXX", "XX.X..X..........XX...XXXXX.", "......XX.X..XX...X..X..XX.XX", "X.XX.XXX.XX.XX...XX....X.X..", "...X.X....X.X..XXX...XX..X..", "..XXX.XXX.XX.XXX.X.XX.X.X.XX", "X..........XX.X.XXX.X.X.XXXX", "..X..X..X.X...X..X...X...XXX", ".X...XXXX...X..X.X..XXXXX.XX", "X.XXX..X.X..XXXX.....X....X.", ".X....XXXXX.X.X.X.X.X...X.XX", ".X..XX.XX.XXXX..X.X.X.X.XX.X", "XXX..X.XX......X.XXX...XXXX.", ".X.....X.XX....X.XX.X..XX.X.", ".XX.X.XX..X..X.XXXX....X.X.X", "......XX.....XXX.XX.X..XXX..", "X..X.XXX...XXX..XX...X..X..X", "X.XX.XXX...X.XX.XXXX.X.X.XX.", ".X.X.XX....XX.....X...X.X.X.", "....X.........X.X..X..XXX..X", ".X.......XX.X.XX......X.XXX.", "...XXXX.X.X.X.......X.X..X..", "..X..XXXX....X....XXX.X...XX", "XXX.XXXXXXX.XXXXXXX.X..X..XX", ".X..X..XX..X........X...X..X", "...X.X..X.XX.X.XXX....X.X.XX", ".XX.....XX.X.X.XX.XX.XX.XX.X", "XX..X...X...X..XXX...X..X.XX", "XXXX.X..XX.X...XXX..XXX.X...", ".X.XX....XXX...XXX.X...X.XXX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 31, 45};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> grid = {"XXX.X...X.XX..XXX..X.X.X.X..X.XXX....X.XXX...X", "XXXXX.....X...X.....X......X...XXXXXX.....XXXX", "XXX..XX.X.XX.XXX...X.X..X.X.XXXX.X.X.XX....XXX", "XXX.XX.XX.XXX..X..XXX..X..XXX..X..X.X.X..X..XX", "X.XXX.X..X..XX.XX.XXXXXX..XXXX.XX.X..X...X.XX.", ".XX..X.X.XXX.XX..X..........XX..X.XX.X.XX.....", "...XX.XXXXXX.X.X...XXXXXX..XX.X.XX.XXXX.XXXXX.", "..XX..X...XXX.XXX..........XX..X...XX.X.X.X.X.", ".XXX.XX.X.XXX.......XX.XX.X.XX..X..X....XXX.X.", "X...X..X.XX.X.X.XXXX.X..X.XXXXXXX.X.XXX.X.X...", "XXX.X..XX.XXXXX....X..XXXX.XXX....X.X....X.XXX", ".XXXX.X.X.X..XXX....X..X.X.XX.XX..X..XXX.XX..X", "XX.X.......X.X.....X..XXXX.X.X.X..X.XX.X.X..X.", "X.XX...XX.XXXXX.XXX..XX....XXX...XX.X..X.X.XXX", "X...X.X.XX..XXX.X..X..X..X.XXX...X..X...XXXXXX", "X..XXX..X.......X.XX.XX.XX.X.X..XXX..X.XX.XXX.", ".X.X..X..X.XX.XX.X...X.....XXXXX.X..XXX.XXX...", ".XX....XX.XX.XX.XX.X.XX.XX....XX.X.XXX..XXXXX.", "XX.XX.XXX..X.XXXX.....XXX.XXXX..X.XXXX...X...X", "XX.X.XX.....X..XX.X..X.XXXX..XX..X.XX.X.X.X.X.", "....XXX.XXX.XX....XX.X...X...X.X.X....XXX.XX..", "X.XXX.X.X.X.XX....XX.X....X....X...X.X...X.X..", "X...X.X..XXXX.X....X..XX..XX..XXXX.XXX....X...", "XX.....XX...XXX.X...XX..X..X...X...X.XXX.X....", ".X..XXX.X.XXX.XX.XXXXXXX.XXX.X....X..X..X.X.X.", ".X.XXXX..X.....XX..X..XX.X..X.XXX..X.X..X.XXXX", "..X.XX....XX..XXX..X..XX..X..XX.X..X.X.XX..XX.", "..XX...X....X.XXX...X.XX..X...X.X...X.XXXX...."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 31, 51};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> grid = {"..X...XX...X.X..", "XXX.X.X..XX..XXX", "X...XXX..X.XXXXX", "...XXX...X.X....", "X.X..XX.XXX.X.XX", "X.....X.XXX.X.X.", ".X..X.XX.X...XX.", "X...XXXX.XX..XX.", "X.X.X.XXXXXXX.X.", ".XX..X.X....X.X.", ".X..X.XXX.X.X.X.", ".XXX.XX....X...X", "XX..X.X.XX.X.X.X", ".X.XX.XX.XXXX.X.", ".XXX.XXXX.XX.XXX", "X.XXX.X..XXXX...", ".X...X.X...X..X.", "..XXX..XXX....X.", "X.X...XX.X...X.X", "XXX..X....X.....", "....XXXXXXXXX.X.", ".XX..XXXXX..XXXX", ".X.X..X.XXXX.X..", ".X..X..XXXX..X..", ".X....X.XXX.XX.X", "..XX..X..X..XX..", "X.X.X.X..X.XX.XX", ".X..X..XX.X.X..X", ".X.......XXXXXX.", "XXX.XXX.........", "X....XXXX.X....X", "...XXXXXX...XXX.", "XXXX..X....X....", "X.X..XXXXX.XXXXX", "XX.X.XX.X.XXX..X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 19, 37};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> grid = {"..X..XX.", "X..X...X", "..X.....", ".XXX.XX.", "X..XX.X.", "X.....X.", "X....XXX", ".XXXX..X", "X..XX..X", "X.X.XXX.", "X..X....", "..XX....", "....XXXX", ".XXXX.XX", "...X....", "..XX..X.", "XXXX.X..", "XX.X...X", "X..X.X.X", "X.X.XX.X", "XX......", "XX.XX...", "...X....", ".X.XXX..", "X..X....", "XXX.X..X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 6};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> grid = {"..X....", "XXX.XXX", ".X.X.XX", ".X.X.XX", "X...XXX", "XX...XX", "XXX...X", "X.X..XX", "...X.XX", ".X..XXX", "XX.XX.X", "X.XXX.X", "X..XXX.", "XX.XXXX", "X..X.XX", ".XX.X.X", "...X..X", "XXX...X", "X..X.X."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 9};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> grid = {"..X...X..XX.X...XXX", "XXXX......X..X.X..X", "XX....XXXXX..X.XXXX", "XX.X.X........X.XXX", ".X.X.XXXX.X.X..X.X.", "...X..X.......XX.XX", ".X.XXXX....XX.XX.X.", "XX.XX..X.X...XXX.X.", "XX..XXXXX...XX..XX.", "X.X.X..X.X.XX...X.X", "XX...XX.X.....XX...", "XXXX..X.X....X.X.XX", "XX....XXXX..XX.XXX.", ".XX.....X..X.XX..X.", "X..XXX.XX..X.X.....", "XXX..X...XXX.XX.X.X", "X.XXXX.XX..XXXXX.XX", "..X..X..XX...X.XXX.", ".........XX.X.X.XX.", ".XX.XXX..XX...XXXX.", ".X.XX..X....XX.X..X", "X....XX...XX.....X.", "X..X.XX.X..X..X.X.X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 9, 23};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> grid = {"..XX.", "..X..", "XX.XX", "XX.XX", "XX.XX", "XXX..", "XXXX.", "..X.X", "XX...", ".XX.X", "X.XX.", "...X.", "XX.X.", ".XXX.", "X....", "XX...", ".X.XX", "X.X.X", ".....", "....X", "XX.XX", "X..XX", "..XXX", ".XX..", "XXX.X", "...X.", ".XXX."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 10};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> grid = {".X........XX.XXX.X.X..X", "X..XXXXXX.X.X....X.XX.X", "...XXXX.X..XX..X..X.X.X", "X.XX.XX.XXX.XX..XXX.X..", "XXXX.X..XX....X.X.X..XX", "X.X.XXX...XX.X.X...XXXX", "X....XXX.X....X...X...X", "X...XX..XX......XX.X.X.", "..XXXXXXX..X..X.XXXXXX.", "X..XXXX.XX.XXXXX..X.X.X", "X...XX..XX..X..XXXX.X..", "XXXXXXXX....X.X..XX...X", ".XXX..XXXX...X....X....", "..X.X..X....XX.XX.XXX.X", "..XX.XX........XX......", ".X..X.X.XXX..X.XXX..X.."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 8, 16};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> grid = {".XXX...XXXX.X.X.X..XX.XX.XX.X....XXX...X...X.XX..X", ".X...X...XXXX.XXXXXXXXX..XXXX......X..XX.XXXX.X.XX", "....X.X....XXX.XX.X..X..X..XXXX.X...XXXXXXX.XX.X..", "XXX..X..XXXXXXXX.XX.XXXXXXX.X..XXX.XX..X.XX...X...", "XX..X.X.XXX.X..X.XX.......XX.XXX..XXX.XXXX.XXXXXX.", ".XX....XX.X.XXXXX.XX.XXX....XX.......X...XXX.XX...", "....XXXX.X.XX.XXXXX.XXXXX.X.XXX...XX..........XX..", "....X...XXXXX.X.XX.X...XXXXX..XX.......X..XX.XXXXX", "XXX..X.XXX.XX.XX...XXXXXX.X.XXXX...XXXXXX..XX....X", "..X...X.......XX.X.X...XXXX.XXXX.X.XX....XXX...X.X", "...X.X....XXX...XXXX.XX.X..X...X..X.XXXX...X.X...X", "..XX.XX.XXXXX.XX......X.X..X.XX.XX.X....X.......XX", "X.XXXX..X..X.X.X..XX.X...XXXXXX..X.....X.X.X.XXXXX", "X.XX.X.X.X.X.X.X.X.X.XXX.X.....XX..XX..X..XX.XXXXX", "..X.X...X..X.X..XX.X.XX.....XX.XXX..X...XXX.XX..X.", "X.X.X.X......XXXX......X.XX.XX..XXX..X..XXXX.X...X", "X.X.X.X....XX..X.X.X..X.X.X.X...XXX..X.XXX.X..X..X", "XXXXXX..X.X.X.X...XXX.XXX.X..X.X..XXX......X.XX.XX", "X....X...XXXXX....XXX.X.XXX..X.XX.X.XXX.XX.X..X...", "XXXXX.XX..X.XXX..X...X..X.X.XX.XX...X.X.X.X.XX.X.X", "..X.X.X...X.X...X..X.X.XXXXXX.XX..XXXXX..XX.X...XX", ".........XX.X.......XXX.X..X...X.X...X..X.X.XX.XXX", "X..XX.X.XX..XX.XXX....XXX.XX.XX..XX...XXXX....XX..", "XXX.X..XXXX.....XXXX....X.....X.XX.XX...X...X.X.X.", "XX..XXXX..X.XXXX..XXXXXXX...X...X.......X......XXX", ".X....XXX.X.XXXXXXXXXX..XXX..XX..X.XX.X...XX...XX.", ".XX.XXXX..XXX..XX.XXX..XX.X...XXXXXX.X..X...X..XXX", "X.X..X...XXX.XX.....XXXX.X..X.X..XXX.X...X..X...X.", ".XXXXX..X.XX........XXX.X....X.X.X....XXXX..X..XX.", "X.XX.XX.X..XX.XX.X...XXX.X.XX.X.XXXXX.X...X..XXX..", "XX..XXXXX.XXXX.....XX..X..X.X..X..X....XX.X..XXXX.", "XX..X.X.X...XX..XX.....X.XXXXXXXX.....XXX..X.X....", "X......XXXXXX.X.X..X.X..XX...X..XXXX....XX.XX...X.", "..X.X.X.X....XXX.X.X.X.XXX.X..XXX..XXXXX...XX.XXXX", "..XX...X.X..XXX.XXXXX.XX.......X..X....XXX...X..XX", "X.XXX.XX...XXX.XXX.X.X..XX..XXX..X.XXX.X....X.XXXX", "X.X.XXXXX..X.....X..X...X...XX.X.XX....X.X.XXXXX.X", ".XXX.XXX....XX..X.X.XXXXX...X....XX...XX...XX..X..", "XXX.XXXXXX....X.X...XXXXXX....X.......XX.....X.XXX", ".X...XXXX.XXXX.XXXX.XXX.X.X...X..XXXX.XXXX..XX..X.", "X....X.XX..XX.....XXX.XX...X.XX.XXXX.XX....X.X.X.X", ".X.X.X..XX....X.XXXX..X..X..X.XXX....XX....X.XXXXX", ".....X.XX....X..X.X.XX......X....XXX..XX....XXX...", ".XXX..XX..X.XX.X.XXX..XX.X.XX.X.XX.X.XXXX.XXXX.XXX", "XXX.XX.X.XXX..X..X..XX.XX.XXX..XX...XXX.XX..XXX.XX", ".X...XXX.XX..X...X.XX..X..X..XXXX.X.XXXXX.XX.X...X", "..XX..XX.X..XXXX...X.XX..XXX...XXXX.X....X.X.X.X..", ".......XXXX.X..XX.......XXXXX...X.XX...XX.X.....XX", "XX...X.XXXX.X.XX.X.X.XX......XXXXX.XXXXX......XX..", "XX.X..X.X...X...XX..XXX.XXXX.X...X.X.XXXX..X.X..X."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 61, 115};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> grid = {".XXXXX.X.XX..XXX.X..X..X...XXX..X..X.X.XX.X...X.XX", ".X..XXXX.X..XXX.X.X.XXXXX....X.XX.X..X....X.X...X.", ".XXX.XXXXX..XXXXX.X..X...X...X.X....X.XXX....XXX..", "X.XX..X.XXXX..X...X..X.XXXXXX..X....XXX...X..XX.X.", "..X...XXX.X.XX.X....X........X.XXXX.X.XXX....X..XX", "XXX..XX..XXXX.X...XXX.X.....XXX.X..X.X.XX...XX.X..", "XX.XXX.XXXX.X.X.X...XXXX.....XX.X...X...XX...X..X.", "XX.X......XX.X..XX..XX.....X..XXX.....XX.XX..XX.X.", "..XX.X.X....XX.X...X...X..X...X.XXXX.XX.X.XXX.X.X.", "..XX..X.XX.XXXXXX....XX...XX..XX..XX..XXX..X...XXX", ".X..X....XXXXXX.XXXX...X.X..XX.XXXX.X.XXX.XXX.XX.X", "X.X..XX..XX.X..XX.XX.XXX...X..X.XXXX.X..XX.XX....X", "XX..X.X.XXX.X.XX...XXX.XXXXXXXX....XXXX..XX....X.X", "..X...X..XXXXXXX.XX....X..XXXXX.X.XXXXXXXXX..XXXXX", "...X.X..X..X...X...X....XX.X.X...X.X...X.X...X.X..", "..X.XXX...XXX..X.XXXX..XX..X.X..XX.XX.X.X.XXX.XXX.", "..XX.XX.X.X..XX.....XXX..X...XXX.XX.XXX.X..XXXX..X", "..X.......XXXX..XXXXXXX.X..X.X.........X....XXXXXX", "XX..X.X..X..X.X......X.X..X..X..X......XX.X.XXXX.X", "...X...XXX.X....XX.....X..X..X.XXXXXXXXX...X....XX", "XXX.X.X.X.XX...X.XXX...XX..XX.XXXXXX...XX..X.X..X.", "..XX..XX.X......X.XXXX..X.............XX..XXXXX.X.", "....XX.X.XXX......X.XX..X..X...XX....X..X.X..X..XX", "X.XX..XXXXXX..XX....XXX..X.XX...X.XXXX.....XX.XXX.", ".XXXXXX.X.X..X.XX.XX...X..XXX..X.XXX.X.X..XXXXX..X", "X.X.X.XXX...XXXX.X...X.X....X.X...XXX.XX.XXXXXX.XX", "..X.X.X.X.....X...X...X..XXXXX......X.XX....XXX.XX", "X..X.XX.X....XX..XX..X.X.....XXX.X.....X..XXX....X", "..X.X..X..X..XXX.X.XXX......XXXXXX.X.XXX.XXXX.XXXX", "XXXX.XXXXXXX...XXXXXXX.X.X.XX.XX......XX.X...XX.X.", "...XX......X..XXXXXXXX..XXXX.X..XX.X...X.XX.XXX..X", "....X...X.XX....XXXX...X.XX...XX.X.XX.XXX.X.XXXX..", "..XXX...XX.X.X.X.X...XX......X.XXX..XX..X...XXX.XX", "XX...XX...XXX.XXX..X.X.....XX.XX..XX.XX......X.XX.", "XX..X.X.X.X.X...XX..XX.X...XX...X.X..X....X.X..X..", "X..XXXXXX....X.XX..XX.XX..XX.....X.XX..XX..XX.X..X", "......X..XX.X.X.XX...X.X.....XX..XX...X.X.X...X...", ".X.X..X.XX.X....XXXX.X.XXX.X...XXX..XX..X..X.....X", "X..X.X.X.X..X.X.XXX..XX.X.XX.X....XX..X..XX.X..XX.", "XX..X...X..X.XX..X.X........XXXX.XXX.X.XXX.X.X...X", ".XX...X..XX.X...X....XXXX....XX..X..X.XX.X.X..X...", ".X.XXX..XXXXX..X....XX.XX.X...XXXX..XX...XX..X.XXX", "..XXXXX....X.XXXXX.XX.....XXX...XXXXXXXXX..X.XXXX.", "X....XX...X..XX.X.XX...XXXXX...X......XXXX.X.X.XX.", ".X.XXX.XXX....XXX..X.X..X.XX..XXXX.X.XXXX.XX.....X", ".X.X..X.X.XX.X.....XX.....X.X....X.X..X.X..X......", "X.X..X..X.XX.XX.....XXXX..XXX...X......X.X.....XX.", "X.XX.X.......XX.X..XX..X.X...XX..XXXXX.XXXX.XX.XX.", ".X...XXX...X....XXX..XXXX.XXXX..XX..XX.XXXX.XXX.X.", "..X.XX.....XXXX..XX.XX..X....XX.....X..XXX..XX.X.X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 64, 86};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> grid = {"X.XXX.XX....XX.X.XX..XXXXXX..XX...XXX..X.XX..XX.X.", "XX....XX.X..XX....XX.X.X.XXX........XXX.XXX..X..X.", ".XXXXXXX.XX...X..X..X..X.........XXX.X.XXXX.XXX..X", "....XX...XX...X..X.X..X..XXXX..XXX..XX.X..X.X.X...", "..XX.XX.XX....XXX...XX..X..XX.X.XXX..XXX..X..X.XX.", ".X..X...X...X...X...X.XX...XXXXX.X.X.X.XX.XXX.X.XX", "XX..X....X..X.X.XX..XX.X.X.XX..X.X.X.XXX....XX.XX.", "XX.X..X...X.X.....XX.XX.X.X.X.X.XXX..X.X.XXXX....X", "...XX..XXX.X.XXX......X.X..XX.X..XXX......XXXX.XXX", "X.......XX....XXX.X..XX..X.XX.X...X.....XX....X.X.", "X.XX..X.X.XXX..XX.X..X...XX..X.XX.XXX......X.XXX..", "X..XX..X....XX.XX..........XXX.XX.XX..XXX..X.XX.X.", "XXX..XX..XXX..XXXX.X.XX.XXX.XXXXXX..X.X.X.....X..X", "X...X....X...X....XX..X.XX.XX.X...XXX..XX..XXXX..X", "XX.XXX.XXX..XX.XXX..XX.XX...X.XX..XX.X.X.XXX...X.X", ".XXX.X.XX..XXXXX..XXXXXXXX...XX.X.XXXXXX.X.XXXXXX.", "...X..XX....X.XXXXX..X.X..X.X....X.X.XX.XX...X....", ".......XX..X...X..XXX....X.X...XXXX.X...XXXX..X.XX", ".X.XXX...X.XX...X......XXX...XXXXXXX...X..XX..X...", ".XXXXXXXXX.X....X.XXX.X.X..X.XXXX.X..X...X.XX.XX.X", "..XX...XX..X..XXXX.XXX.X.XXX.XXXX.XX..X.XX.XXXX.XX", "..X.XXXX..XXX..XXXX.X.XX.XX.XXX.XX..X..XXXX.X..XX.", "XXXX.XXXX..X.....X.XX...X..X..X...X.XXX.XXX.X.XXXX", "..XXXX..X..X...X.XX...XXX.X....XX..XX.........XX..", "..X.....X.XXXXXXXXXX.XXXX.XX.....XX...XX.XX.X.X.X.", ".XX...XXX..X........XX.X....XXX.X....XXX...XXXXX..", ".X..X..X..XX.X..XXX..X.X.XXXXX..X.XX.XXX.XXX...XX.", ".....X.....X.XX.XX.X.......X.XX.X..XXXXX.XXXX.X...", "X...XXXXXXXX...X.X.X...XXXXX.....XX..X.X..XXX...XX", "XX......XXX.X.XXXX..XX...XXX..X..XX..XXX..XXX...X.", "XX.X..X.XXXXX...XX.......XX.XXX..XX..X.XXXXXXX..X.", "...X.X.XXXXX...X....X..XX.X...X..XX...XXX.X..XXX.X", "XX.XX...X..XX.XX..XXX...X.XX.XXX.XX.XX.XX.X...XX.X", "XX.....XX.X...X.XXX.XX.XXXXX.XXXX...XXX..XX.X..XXX", ".XX....XX.X...XXXX..XXX.XXX...X.X.X.XX...X.X.XX.XX", "..XX.XX..X...XXXXXX...X.X..X.X.X..XXXXX......XXX.X", "......X...X.X..X...XXXX....XXXX..X.XXXXXX.XX.X.X..", ".XXXX.XXX..X.XX.X..X.X.X.X.XX..XX..XXX..X.....XXXX", "XXXXX..X.XXXXXXXXXXXXX.X.X.XX.XXX.XX.XXX.XX.XXXXX.", "X.X.XXXX..X.X.X.X.X..X.X.X.XX..X.XX.XX.XX...XX.XXX", "....XXXX..X..X.X.....XXXX..X.X..X.X.X.XXX.X.X....X", "X.....X..XXXX..XXX.X.X..X..X..XX..X.X.XXX...XX.XXX", "XXXXXX.XXX.X...X.XXXXXX.XX....X.XXXXXX...X.XXXX.X.", "..X...X...X.X..XX..XX.XX..XXXX.XXX.XXXXX.XX.X.XX.X", "XX....X..XXX.X..XX....XX..X.XXX...XX...X.XX.XX....", ".XXXXX.XXXXXX...XXXXXXXX.X.....X.....XXXX...X...X.", "XX.X.X...XXX.X...X..X..XX..XXX.X.X.X.....XX.X..XX.", ".X.XX..XXX...XX...XX.XX.XX.XXXX.XXXXXXX...XX....XX", ".X.XX...XX..XXXX.X.X.X.XXX..XX..XXXX.....XXX.X.XX.", "..XX.XXXXX.X..X...X..X..XXXX...XXX.X...X.XX...X..."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 64, 92};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> grid = {"X.X.X.X.XXXX...XXX..X.X.XX.X..X.XXX.XXXXX.XXX..XXX", "..XXXXXXX.X.XX.XXX...X.X..XXX.X..XXXXXX.X.X.X...X.", "XXX.X.X.X..X..X...XXXX...XXX.X.XXXXXXX.X.XX.X..XX.", ".X.XXX.X..XXXX.XXX..XX.XXXXX.XX.XXXXX..XX.XXX....X", ".XX.XX...X.XX....XXX.XX....X.X...X..XX.....XXXXXXX", "XXX.XX.XXX..X.XX..XXX..XXX.XX.X.XX.XX.X.XXX...X..X", "X.XXXXXX.X..XX...XXX.XXXXXXXX...X..XXX.XXXX.XXXXX.", "X.X.X.X.XXXXXX......XXX..XX..XXXXX.XXX..X..X...X..", "X.X.X..X..XX..X..X.X.XXXXXX...X.XX..X...XX.X.XX.X.", "..XXX...XXXXX.XXXXXX....XXX....XXXXXX..XX...XXXXX.", ".X..XXX.X....XX.XX.X.XX.XXX....XX.X..X.X...XX..XXX", "....XX..XXXX...X.....X.....X..X..XXX......XX.X.X..", "X.X..XXXXX.XX...X.X.XXXXXXXX.X.X.XX.XX...XXX..XXX.", "XX...XX...XXXX.X.X..X.XXX..X..X.X..XXX..XXXXX..XXX", ".X...XX...X.....X.X.X..X...X.XXX..X.X.XXX.XX.XX...", "X.X..X.XX.XXX..XX.XX.XXXXX.X.X..X.......X.XX..X..X", "....X.X....XX.X.X.XX.XXXX.XX.XX.X........XXX.X.XX.", "XXX.XX.XX.X.X.X..X..X.......X...X....X.X.X.X..X.X.", "..X..XXXXXX.XXX.....X..XXXX.XXXX....XX..X......X.X", "..X.XX.XX.....XX.X.X.X..XXXX..XX.X.XX...X...XX..X.", "XXX....X.X.XXXX.XXX....XXXX.X..XX..X.XXXX..XXX..X.", "...X..XX...X..X.X.XXX.X..X..X..X.XXXXXXX...XXX.X.X", ".X.X.X.X.X.....X...XX.....XXX...X..X.XXXX.XX...X.X", ".XX..X.X....X..X.X.XX.X..X..XXXX..XXX.X..XX..X..X.", "..X..X..X..........X.X......X..XX.XXX..X.X.X.X.XX.", "X...XX....XXXX...XX.XX.X.X...X..X.X.....XXXX.XX.XX", "X.XXXX.X.X.X..XX...X.X..XXX...X.X...XX.X.X...X.XX.", "X..X.XX.XX...X.X.X.X.X..X..X.XX..XX.XX.X.X.....XX.", ".XX.X...X.XXX..XXX.XXX.X.X..X....X..XXX....X.....X", "XX...X.XX...X..XXX..X..XXX..X..XX..XXXXX...X.XXXXX", "XXX...X.XXXX.XXXXXX.X...X.........X.X.X..XX....X.X", "XX.XXX.XX.XXXXXXX.X..XX.XX.XXXX.XX...X.......X..XX", "..XXXXXX..XX.X.X.XX.....X.X..XXX..XXX.XX....XX..XX", "XXX.XXXXX.X..X.XXXX....XX.XXXXX.X.XX.X....XX..X.XX", ".XX.....X.X......X.X.XX..X..XXX..X.XXX..X...XX....", ".XXX..XXX..XX...X..X.X....XX.X.XX.X.XX.X.X.XXX..XX", "X.XXX.XX.XXXX..X..XXX.XXX.XX.XXX...XX.X...X.XXX.X.", ".X.XXX..X..X.XX......XXX.X...XXX.XXXX....XXX...X..", "..XX...XXXX.X..X...XXX...X..XXXXX..X..XXX...XXXXX.", "XX....XXXXX.X...X.X.XX.XX.X.XXXXXXXX.XX...XXX.X.X.", ".X..XXXX...X.XX.XXXX.X...XX.X..X..XX.X....XX...X..", "XXXX.XXXX.X..XX...X.X.X.X.....XX.X....XX...X.XX.X.", "........X.X..XXX.XX..X...XXXXXXX...XX.XXXX.XXXX.XX", "XX.X.XXX..XX..XX....X.XX.X.X.X..XX.X.......XXX...X", "XXX.X.X....X.X.X..XXXXXXX.....XX.X.X.XX......X..XX", "XX.X.....X.X.X...X.X..XX...X.X.XX.XX......XXXX.XX.", "XX....X..X.XXXXX..XXXXX...XX...XX.X..X....X......X", "XXX..X....XXX..X..XX..X..XXXX.XXXXXXX..X.X...XX..X", "X....X.X...X.XXX...X.XXX.XXX..X.XX......XX..XXXX.X", "...XXX...X..XX..X.XXXX.X....X.XXXX.X.X.XX.....XXX."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 73, 102};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> grid = {"....X....XX.X.XX.XX.XXX.X.X.X.....XX..XXXXXX..X..X", "XXX.XX....X.X.XXXXX..XXX.....X...X..XX.......XXXX.", "..X..XXXXXX.XXX..XX.X.X..X.X..X.XXXX..X.X..XXXXX..", "XXXX..X.XXXXXXX..X.X..XXX.X.XXXX...X.XX.XXX.......", "XX.XX..XXXX.X...XX.X.X.X.XXXXX...XXX.X....XXX.X..X", ".X.X....X...XX.XXX.....X.X....XXX.X.XXX..XXX.X.XX.", ".XXXXXX...X..X.XXXX..X.X.X..XXXX.X.X.....XX.X.X.X.", "XX.X.XX....X...XXXXXX.X.X....XXX..XXXXX....X...XX.", ".X.XXXX.X....X...XXX..X.X.XXX..XXXX..X.XXXX...XX.X", "....X.X..X...X..X..X.XX..X.XXXX......X..XXX.X.....", "XX.XXXXXXXXXX..XX....XXXX.X.....X.XX.XXX........XX", "...X.X.XXX...X...XXX..XX.XXX.XXXX..XXX...X..X....X", "...XX.XXXXX.X.X.X..X..XX...X.X.XXXXXXXX.X.X.X.....", "...X..X.....XXXX..XX.X..XX.XXXXX.XX.X..X.XX.XXXX..", "X..X.....XX.XX...X.XXXXX..XX.X...XX...X..X.X.XX..X", ".XXX.XXXXX....X.X.....X.......XXXXXX..X.........X.", ".XX.X.X......XX.XXX.XX..X..X....X.....X..XXX..X...", "..X.XX.X.X.X.X.XX...XXXX.....XXXX......X.XXX...XXX", "XX.X.X.XX....X.X...X.X.X...XXX...XX.XX.X.X....X..X", "XXX.X..X..XXXX...X....XX...X.X.XX.XXX.X.XXX.XXXX.X", "XX.XXX.X.X.X.X.X.X.X.X...XXXXX.X.XXX..X..XXX.XXX..", "X....XXXXX.XX..X.XX...XX.XX...XXX.XX..X.XX.X.X..XX", ".XXXXX....XXX.XX....XX..X.XX.XXX.X.....X..X..XX.X.", "XX.XX.XXXXXXXXX.XXX...XXX.....XXX...XX....XX.XX...", "XXXXXXX.XXX.X..X..XX.X.X...X.XXX.......X.X.XXX....", ".XX.....X......XXX..X....XX.X..XXXXXX...XXXXXX..X.", "X.XXX..X...X....XXXXX....XXX.X.X.X.XX.XXX....X.X.X", "XXX.X..XXX...X.XXXXX.XX..X...XX.XX..X..XX..XXXX...", "X.X..XX......XXXXX.X...X.X.XX..X.....XX...XX....X.", "XXX...X.XX..XX..XX.XXXX.XX.XX.X...X..XX.....XX..X.", ".XX.XX.XXX.XXXXX.XX.X.......XXX..X..XXX...XXXXXXXX", "...X..XX...X.XX..XX.XX...X..XX.X..X.XX...XXXXXX..X", "..XX.XX.XXXX..X.X.XXXX..X.X.X.X.XX..X..X....X.X...", "...X.X...X...X.XX.XXX..XXX.X...X...XXX.......X....", "..XXX.X.X.X...X.XXX.X.X.XXXXXXX.XX..X.X.X..X.X..X.", ".XX.X..X.X..XXX.XX...XX.XXXXX.X.....XX.X.X..X.XXX.", ".XXXX.XX.XX.XX..XXXX...XXXX..XX.......XXXX..XX.X..", ".X..X....X...X.X.X.X.XX.XXX..XX.......X..XX.....X.", ".X.XXXXX.XXXXX.XXXXXXXX..XX.......XX..X...XXX.XX..", "XX.XX.X.X.XX..XXX.XXXX.XXXX.XX...X.XXX...XX.......", "XXXX.....X.X.X.XXX.XXXX..XXX..XXX.X.XX.XXX....X...", ".....XX..X..XX.XXX.X.XX.XX.XX.X.X...X.....XX.X.XX.", ".XXXX..XXX.X..X.XXXX.X....X......XX......XXX..X.X.", "X....X..X.XXXX..X.X.XX...X.X..XXX..XX..X...X..XX..", "XXXX....XX....X..X...X...XX...XXX..XXX.XX.X.XXXX.X", "X.XX..X.XXX....XX.....X..X.X.XX...X.XX..XXX.......", ".XXXX.....X.XX.X.XX.XXX..XXXXXX......XX..XXX...XXX", "..XX.X....X.XXX..X....X.XX..X...X..XXXXX..XX..X.XX", "XXXX.XX.X.XXXXXXX.XXXXX...X..X.X.X....XX.X.X.X.XXX", ".X.X.X.X.X..XXXX..X......X..X..X..X.....X.X.....X."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 68, 104};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> grid = {"X......X..X.....X.X.XXX.XXX....X.X.....XX..XXX.X..", "..X..X..X......XX...X..XX.X.XX...XX....XXXX..X.XX.", "X.XXX....XXX.......XX....X...XXX..X.X.X.XXXXX.XX..", "XX.X..X.XXX.X..XX.XXXX...X...XXXX.X.X.X.X.X...X.X.", "XXX..XX...XXX..XXX.X.XX.XXX..XX..XXXX..X.X.XX..X..", "X.XX..XXX.XX..X.X..XX.XXXX.X..XXXX.X.XXXX..X..XX.X", "X.XXXX..XXX...XX.....X...X....X.X.X...X.....X.XXXX", "XXXXX.......XX..XXXX.X..XXX..X...X.......XXXXX....", "...X......X.XXX.XX.XXX.XXX.X..X.XX....X.XX...X..XX", ".X.XX.XX...X...XX..XX.....XXXX...XXXXX..X.X.X.XXXX", "..X....XX.XXXXX.X....XX.X....XXX..XXX.....X..X.X..", ".XX.X..X.XXX.XX..X..X.XXXX.XXX..X..X....XX...X...X", ".X.X.X..XXXX..X..XXXXXX..X...X.X.X.X...X...X.X..XX", "X.X.X.......X..X......XX.X.X..X....XX.X......XXXXX", ".X.X....X.XX.XXXX.X..XX.X.XXXX.X..X.X..XXX.....X..", ".X.....X.XX.XXX...X.X.XX.XXXX...X..XXXXXXX.XX...XX", "XX.....X..X.X...X..XX.X..XX...X.XXXXX.X...XX...XX.", ".X.XX.XXXX..X.X..XXX...X..X.....X.X...XXXX.X...XXX", "..X...X.XXX....X..XXX...XX.XXX.XX.XX.X...XXXXX.XXX", ".X..XXXX.XXX.X...X...X.XXX....XX.XX.XXX...X..XXX..", "XX..X..XX.XX.X.XX....X..XX...XXX.XXXX.X.XX...X..X.", "XX.XX...X.X.......X.XX.XX.XX..XXXX.XX..X.XX...X.XX", "XX.XX.XXX.XXXXX.........X.XXX....X.X.....XXXX....X", ".XX.....X..XXXXX.X..XX..X..X.XX..........XXXXXX.XX", "XX.X...X.XXXX......X.XXXXXXXXX.XXXX....XX.XXXXXXXX", "..X..XX..XX.X......XXXXXX.X.X..X..X..XX.X.XX..XX.X", "..X...X.XXXXX.XXXXXXXXX.....X.XXX..XXXXXX.X...X.X.", "XX..X....XXXXXX.X.....X.XX...XXX..X.X...X...XXXXX.", "..X..XX..X...XX...XXXXXXXX.XX..X..XX.X.X..XX...X.X", "......XX.X.X.XXXXXX.....X.XXXX.X...XXX.X..X.X.X...", ".XXXXXXX..XX..XXXXX.....X..X.XXX..X...X....XX.X.X.", ".X....XX..XX.X.XXXXX...X.X.XX.XXX.X..........XX.XX", "..XXX.X.X.X..XXX..XXXX....XXX...XXX.X..X.X.X..XX.X", "X..XX.X.XX.X.XX...X..XXX.XX.XX.XX....X.XXXXXXXX.XX", "XX.XXXXX....XX...XX...X.XXX..X..X..XX..X.X..X...XX", "..X..XXX...XXXX..XXX......XX...........XX.X.X.X...", "...X....X.X.XX...XXXX.X.XXXXXXX.XXX...XXX...X.XX.X", "..XX.XXXX..XX.XX..XX..X......X.....X.........XX...", ".XXX.XX.XXX.X..XX..XXXXX..X.X..X..XXXX..XXXX..XX..", "..XX.X.X.X.X....XXXXXX..X.......XX.X..XX.XX..X...X", "XX..XXXX.XX..X.X..X.X...X.XXX...X...XX.X....XX.X.X", "X.X.....X..XX...........X..XXXX.XXXX.XXX.X.X.XX.XX", "X.X.XX.X........X.XX.XXXXX.XX..X...XXXX.XXXXXX.XXX", ".X...X...XXX.XXXXX.X.....X.XX.X.XX.XX..XX.X....XX.", "XXX..X.XXXX..X.XX..XXXX.X..X.X.X.X.X.XX.X....XX...", "XXX...XX..XX...X.X.XX.X.XXXXX...XXX..X.X.X.X.....X", "X..XXX...XX.X..XX.X.X...XX.XX.....X..XX...XXXXX..X", "XX.X...X.X.XX.X.X...X.XX.XXXXX.X.XX..X.X..X.XXXX..", "...XXXX.XX..X...X.X.XX.X.XX..X...XX...X.X..XX.XX.X", "X.XX.X.XXX.XXXX..XXX.X.....X......XX.X....X.....XX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 64, 89};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> grid = {"X.XXXXXX.XX...X...X.X..XX...XX..X.XXXX....X.X.XXX.", "XXX.X.XX.X.X.X.XXXX.....X..XX.X...XXX..X.XXXXXX.XX", "...XX.XX..X.X..XXXX.X.XX..XXXXXX.XXXXXXX.XXXXX.XXX", "X.X....X.X.X.XX..XXXXXXX.XX.XXX.X.....X.X..X.X..XX", ".X.XXX.XX.XX.XXX.XX.X.....X.XX..X.....XX.X...X....", "XX...XXX..XXXX..X....XXX..X.X.XX...XX.X.XXXX..X.XX", "X..X...X.....XX...X.X..X..XXXX.XXX.X.XXXXX.XXX...X", ".X.XXXX..XX.X.X.X.X..X..XXXX....X.XX.X...X..XXXXXX", ".....X..XX..X.XX..XX.X....X.X..XX....XXXX.XX.X..X.", "X...X..X...XX.X.XXXX...X...XX..XX.XXX.X.X..X..XXX.", "....XX.XXX.X.X..XX...XXX.XX..XXXXXX..X.....X.....X", "XX.X.X...XXX..X...X...X.X.XX.XXXX.XX.X..X.....XXX.", "XX...X.X...X.XX..X..XX...XX.XX.X..XXXXX..XXX.XX..X", "XX.XXXXXXX..X.......XX.X.XXX.X.XX.X.XXX.X..X.X..X.", "X.X.XXXXX..XXX....XX.XX..XXX..XXXX.XX.X........X.X", "..X...X.X.X..XX.XXXXXX.X.XX.XX..XX.X..XX.XXXX.XXX.", "....XX.XXXX..XX.X..X.XXX....X.X.X..X...XX..XX.X.XX", "XXX...X..X.X...X.X...X..X.X.XXX.XX.X.XXX.X.X..XXX.", "XXXX..X...XX...X.X.X.X.X..XX.X.X.XXXXX.X.....X..X.", "X......XX...XX.XX.XX.X..X...X.XX.XXXX...X...X.....", ".XX.XX.X.XXXX.XXX....X..X....XXX..X...X.XX.XXXXX..", "X..X..XXX.XX..XXX..XX.X...XX...X.....XX.XXX.X.....", ".X.XXX..X..XX.XX.XX..X.XX...X...X....X.XX.....X.XX", "...XXX.X.XX.XX..X..XXXXXXXX.X.XX.XX......X.X..X...", "X.XXXX...X.XX...X..XX.XXX.XXXX.X..XXX.XXXX.X..X.XX", ".....XX.X...X.XX..XXXX.XXX...X.XXX.XX.XX.XXXXXX.XX", ".X...X..XX.XXX.XXXX.X.XXX.XXX.XX..X..X.XX.X..XXXX.", "..XX..XX....X.....XX...XXX.X...XXXXXXX.X..XX.XXX..", ".X....X..X..XXX..XX.XX..X..X..X.XX.XXXXX.XXX...X..", ".XX.X....X..X...XX..XX.XX...XX..X....X..X.XX.X....", "..X.XX.....XX.XX..X...XX...XX..XXX.X.X.X.XXX..X...", "X.XX..XX.X..X.XXX.......XXXX.XXX.XX.X..XX.X...X..X", ".X..XX..XX.XXXXX.XXX.XXXXXX...X.XX...XXX....X.X...", ".....X..X......X..X.X.XXXX...XXX.X..X..XXX..XX.X.X", ".X..X....X.XX.XX....X..X......X.....XX...XX..X.XX.", "XXX.XX.X.X...X.XXX...X.X.XXXX.X.....XXX....XXXXX.X", "....XXX.X...XXXXXX.XX.XX.XX.X.X...XX.XXXX.X.X.X..X", "XXXXXXXX.XX.X.XX.XX.X.XXX.X.XXX.XX.X..XX...X.X.XXX", ".XXX..X.X.X.X..X.X...X.XX.X.X..X.X.XX.X....XX...XX", "X.X..XX.XXXX...X.X..X...X.XX....XX..X..XX....X..X.", "..XX.XX..X.XXX..X..XX.XX...X.XX.XX.X..XX.X...X....", ".XXXXX...XXXX..X.X..X.XXX...X.XXXXXX..X...........", "..XXX....X.X.X..X....XXX....XX...XXX.XX..XXX....X.", "XXX.XXXX....X....X..XX.XX.X.X.XX....X..X.XX..X.XXX", ".XXX.X.......X...X...X.X..X..XX...XX...XX.XX.XX.X.", "...XXXXX..X..X.X.XXXX.XX..X...XXX.X..X.....XXX...X", "....X..X.X.XX.X.X.....XX.....X.X..XXX.XXXXXX....XX", ".XX....XX.XXX...X.X....XX....XX.X.X..XXX...X...X.X", "XX..X..XX..XX...XXXXX......X..X.XX.XXX.X.XX.X..XXX", ".XX..XXX...X...XXX...X..X..X...XXXX.XXXXXXX.X..X.."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 69, 87};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> grid = {"XXX......X.XX.X.XX.XX.....X.X...X.XXX.XXXXXXX..XX.", "...X.XX...XX.XX..X.X.XX.X.XX....XXXXXXX....XXX...X", "XXX.XX..X.XX..X..XXXX.X.X.X..X...X..X.XX.XX.X..X..", "XXX..X.....XXXX..X...XXXX...XX..X.XX.X.....X.X..X.", ".....X..X.X.XXX.....X..XX.XXX...XXXXX.XXXX........", "XX.X.X.X.X......XXX.XX..XXXX.XXXXXXX.X.XX.XXXXX...", ".X.XXXX..XX..XX..X...XX...X.XXX.X...XX.X..XXXX...X", "X.X...X.X.X.X..XXX..XX.X.X.XX....XX....XX.X...XXXX", "X..XX..XXXX.XXX.XXXXX..X...XXX..XXX..X..X..XX.XXX.", "X.XXX..XXX.XX.XXX......XX..X.XXXXXXX..XXX..X..X..X", "XX..X...XX.XXXXX..X.X.X...X.XX...X.XX..X.XX..X.X..", ".XXX.XXX.XXX..XXX.X.X.XXX..X.XXXX.XX.X.XXX..X.X.X.", ".X..XX...X.X.X..X...XX.X....X...XX.X.XXXXX...XXX..", "XXX..XX..X.X.XXX...X.X.........X..XXX...X.X...X..X", ".....XX.X.XX....X.....XX.X...X..XX..XXX.XXXX....XX", "XXX.XX...X.XXXX.XX.X..X..XX.....X....X..XX...XXXX.", "XX..X.X.XXXXX.XX.X.X.X..X....XXX.X.XXX.XXX.XX....X", ".XXXX......X.X....XXX.XXX.XXX.X..XXXX.XX......X.XX", "....XXXXXXX..X.X...XXX..XXX...X.X..XX..X...X..X..X", "X.X.X.XXX.XX...XXX...XX...X.XXX..XX.......XX..XXX.", ".XX....X.XX.X..XXXX.X..XXXXXX..XXX.X.X.X..XX.X....", "XXXX.XX.X..XXXXX........XXX....XXX...XX.XX....XX.X", "..X.....X.X.....XXX.X.XXXXX...X.X.XXXX.X.X..X..X.X", "..X..XX..XX.XXX.XXXXX.X.X..XXX...XXX.XXXXXXX..XX..", "X........X...XX..X.XXXXXX.XX....XXXX...XX.XX.XXXXX", "XXX.XX.X.X..XX...XX...XXX...XX.X..X..XX....X..X.XX", ".XX...XXXX.X...X..X.....XXXX.X..X..X.X.XX.XXXXX.X.", "....XXX..X.XXX.XXXX.XX..X.XX..XXXX.X.XXXX.....XXXX", "..X..XXX...X..X.X.XX..XX.X......XXXXX.X.......XXXX", "X.X.XXXXX...XXXXXX.X.....X...X.XXX..X..XXX.X.XX.XX", "XX.X..XX.XXX.X.XXXX.XXX..X....X.....XXX.XXX.X..XX.", ".XXX...X..X...X.XX.X.XXXX.XXXXX..XX....X.XXXX.XX..", "XX..XX..X..XX.XXX..X.XXX..X..X......XXXXXX..XXX.X.", "...XX....XXXX.XX.XXXX..X.X.XXXX..XXXX.XX..XXX..XX.", "XX.XX...X...XX..XXX....XX.X..XXXXX.XXXX.X........X", "XX...XX..XXXX.X.X.XX...XXXXXX....XX.XX.XXXXXXX..XX", "..XX..XXX.X.XX.XX.X.XX...XX.X.XXXXX....XX....XXX..", ".X..X....X.X.XX.X....XX.XXXX..X...X.X.X.X..XX..X.X", "XXXXXXX.X....X...XXX...XXXXXX..X..X.X..X...XXX..X.", "...XXX.X.XX.XX..X.XX...XX.XXX....XX.XXXXXXX..XXXXX", "X.XXXXX.X.XXX....XXX...X.X.X.....X....XX..X..X..X.", "XXXX..XXXX..X.X.XXX.XX.X....XX...XX.XX.X.XX..XX.X.", ".XX.XXXX..XX...X..X.XX..XXXX.XX.XX.X.X..XX.......X", "X.XX.X..XXXXXX..X...X.X.X.XX.XX....XX.XXX.XX.X...X", "XX..XX.X...XXXX.X..X.X...X...XX...X..XX.XXX...X.X.", "X...XXXX...XX...X.X..XXX...XXXXX..XXXXXX...X.XX.XX", ".....XXX.XXX...XXXXXX..X.X.XXXX.X.XXX.XX....X.XX..", "XX..X..X......XX.XX.X..XX..X.XXX.X....XXXXXXX.X.XX", ".XXXX..X.X..X...XXXXXXX...XXX....XXXX.XXX.....X.X.", ".....X.X.X..X.XX...X.X..XXXXXX.X..XX.XX...XXX....."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 91, 96};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> grid = {"X.X.XX...X.X.XX..XXX.X..........XX..X.X.XX.....X.X", "X.XXXXX..XXX.X.X..X..XXXXXXX.X...XXX.X....XXX...XX", "..X.XXX.X...XXXX..XX..X...XX...X..XXX..X.XXX....XX", "XX.X.X...XX..XXXXX..XXX.XXX...X..XXXX.....XX...X..", "..X...XXX.XX.X.X..XXXX.XXX..X.X.X.XXX.XX.XX....X.X", "...X.XX..XXXX....X.X.X....XX.XX..X..X.X...XXXXX.XX", "XXX.XX.XX.X.XXXXXX.XX.XX..XX.X...XXXXX..X.XX..XX..", "...X..XX...XX.X.XXXXXXX.XX..........XX.X.X..X...XX", ".X.XX.X...X..XXX..X..XX.XXXXXXX.X.X...X..X.X.XX..X", "XXXXXXXX.XXXX.XXXXXX..X.X.XX.XXX.....X...XXXXXX.XX", "X....X...XXX.X.X...........X....X.X..X.X.XX.X.X...", ".XX..X.XX...XXX..X..X.XX..XX....X......XX.X.XXX..X", "....X.XXXXX.X.X..XX.XX..X.XXXX......X.....X...XX..", ".XX.XXX....X......X..X.XXXXXXXX.XX.X...X..XXX.X.X.", "..XX..XX..XX..X..XXXX..X..XXXX.XXX.X.XXX.XX.XXX...", ".X.X.X.XX.......X.XXXX...X....X...XXX.XX.XX.X.X..X", "...X.XX.....XX...XXXXX.......X.....X.XX.XXXX..X.XX", "X.XX.XX..X.XXXX....XXXX.X.XX.XXX.XXXXX..XXXX.XXX.X", ".X.X...X..X.X.X.X.XXX.X.XX..XX.X.XXXXX.X.XX.XX.XXX", "X.XX.XX...XXX.X..XXX..X..X...XXX..X.X....XXXX.XXXX", "X.XX.XX.XX.X.X.X....XX.XXX..XX..XXXX.X.XX.XX....XX", "X..X.XX.X....XX.XXX..XX.XX.XX.X....X.X.X..XXX.X.XX", ".X.X...XX...XXXX..X..X.X......XXXX..XX..X...XX.X.X", ".XX......X.X.XX.X.X.XXX.......XX.XX....X..X.X..XX.", "XXX.X..XX...X.X.XX.XXXXX....XXX.X..X.X....XXXXXX..", "XXXXXXXX..X.X.....X.XXXX..XXX.XXXX.X..XXX...X...X.", "..X.XX.XX...XX...XXX.X....XXX.XX..XX.X.XXX..XXX.X.", "X.....X...XXXX....XX.....XX...X.XX..XX..X.XXX..XXX", "......X.XX.XXX.XXXX..XX....XX..XXX..........XX...X", ".XX......XX.XX..XX........XX.XXX.X..XXX..X.X...XXX", "XX.XX.X..X.X.X...XX.X.X.X..XX.XX..X.X.XXX....X.X.X", "X...X..X....X....X.XX.....X..XXX.X.XX.X.X.XX..XXX.", "X.X.X.X.....X...XX.X.XXXX.XXX.X.XXX..XXX..XX.X.XX.", ".XXX.X.X.X..XX..X.....XXXXXX.X.X......X..XXX.X.XXX", "....X.XX.X....X..XX...X.X...XXX..XXXXX..XX...XX..X", ".XX.XX.XX..XX.XX.XXX....XX.XX..X......X.X..XXX..XX", "X..XXXXX...XX.X.X.X.X.X..X..X.X.X.....X.XXX.XX.XXX", "XXXX.XX.X...XXX.X....X..X..X.X.....X.XX.X.XXX.XXX.", "..XXXX....X.X......X.X..XX.X...XXXX.XX.XX..XX.X...", "....X.....X....X.XXXX.XXXX....XXXX.XXXXX...XXXX..X", "X.XXX..X...XX...XXX..X..X.XXX.X..XX...X.X..XX.X..X", ".....X.XX.XX.X....XXXX.X.X.XX.XXXX.XXXX.XX...XXXXX", ".XXXXX......X.XX..X.X.X.XXX.....XXX.....X..XX.X.XX", ".X...XX.X.XX.XX...XX.XXX.XXXX.XX.X.X.X...XXX....XX", ".X.XXXXX..XXXXXXXX.X..X..X..X.X.XX..XX.XXXXXXXX..X", ".XX.X...XXX..X..XXX.XXXX.X.XXXXXX..X..XX.XX.XXXX.X", ".X.XX..XX.X.X.X.X.XX.X....XX...XXX.X.X..X.XXX..XX.", "X..X.X..X.XX.XX.XXX.....X.X..X.X..XXX..X...X.X.XX.", "X....X.X.XX.X....X.....XX..X.........XXXXX..X....X", "X...XXXX....X..X.XX.X.X..XXX..XXX.X...X.XX...X..XX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 87, 89};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> grid = {"X.X...XXX...X.X..XXX.XXXX.X.XXXX..XX.XX.X.XX.XX.X.", "XXX.XX.....X..XXXX..XX...X..X.XX.X.XXXX.......X..X", "............XX...X.X..X..X..X..XXXX.X..XX.XXX.X.X.", "XX..XX.X.XXX....XX.XXXX.XXX.XXXXXXXXXXX.XX..X..X..", "X.X..XX.X.XXXXX.X.XXXXX.X...X..XX..X...X..X.....X.", "XXXX..XXX.X.X....XX..X....XXXXX..X...XX...XX....X.", "....XX..X.X......XX....X..X..XX..X...X..X.X.....XX", "XXXX..X.XXX.XXX.X.X...XXXX..X...XXXXXXX.X......X..", "X...X.X......XXX.X.XX..X.X..XX.X....X...XXXX..XXX.", "X.X.......XXX.X.X...X....XXX..X..X.X..XX.XXXX..XX.", "XXX..XXX...XXX..X...X...XX..XX..XXX.X.XX.XXX..XXXX", ".X..X..XXXXX.X...X.XXX.XX.X..X.XXXX......X..X....X", "..XXX..X..X.X..X.X...XX......X..X.X.XXX..XXX......", "XX.XXX.X..X...XXX...X.X.XX.....XX..XX..X.XX.XXX.XX", "...X....X..X..X.XXXXX.....XX..X...XX.XX.XXX.XXXXXX", "X.X.X.X.XX.XX.XX..XX...XX..XX.X.X.X...X..XXXX.X...", "..XX.X.X..X.......X..X.X....X..XX.XXXXX..X.X..XX.X", "XX...X...X..XX..XX..X.X.X....XXX..X.X.XX.X....XX.X", "......X.X...XX...X.XXXXXXX....XXX..XX..XX...XXXX..", ".X...XXXXXX..X.X...XX..X.X..X.X..X.XX.XXXX..X..X.X", "XX.X.X.XX.X..X.XX.X.XX.X.X.X.X.X.XX.XXX....X..XXXX", "XXX.XXXX..X.X.X..X.XX.X...XXX....X.X...X..XX.XX..X", ".X..X.X.XX.X.X.XX...X..X...X..XXX.X.XXXX..X..X...X", "XX.XXXXXX..XX.X..X...X.....XXX....XX.XXX....XX.XXX", ".X.....X.XXXXX.XXX.X......X..X...X...XX..XXX..XXX.", "..X.XXXXX...X....XXXX.X.....XXX.XXXX...XX..X..X..X", "X.X.XXXXX...XX..X....XX.XX.XX..XXXXX.XXXXX..XXX..X", "X..X.X.XX.....XXX...XXXX....X.XXXX..XXXXX..XXX...X", "..XXXXXX.X....X....X.X.....X.X....XX...X.X..X.XXX.", "X..X.XXXX..X.....X...X..X.XX.XXXXXX.XXX.X.X....X.X", "XX.X..X.X.XX.....X..X..X..X..X.XX...X..X..X.X...XX", ".XX.X.XX.X.X..XXXX.XX.XX...XX.XX..XX.X..XXXX..X.X.", "XX.XX...XX....X..X.XXX..X.X....XX.X.XX..X..X....XX", "XX..X.XX.XX.XX..XXXX.XX.XX.X...XXX...X.XX.....XXXX", "XX.....X.XXX..XX...XXXX..XXX.X.XX.XXX...X.XX.XX.XX", "XXX.XX..X.....X.X.XX...X.XX..X....XXX.XXX.XX.XX.X.", ".XXX...XX......XXX...X...X...XXXX.X..XXX.X...X.XX.", ".XXXXX.X..X...X...XX..XXX.XX....X.X.XXXXXXXX..X.XX", ".....X.X.XXXX...XX.XXX..XX..X.X.XX...X.X.X.....X.X", "X..X.X.XX..X...XX......X.X...XXX..X..X.XXX..X...XX", "...XX..X..X....X..XX.XXXX..X..XX...X.X...X..XXX.X.", "XX...X...X..X..XX..XXX..XXXXX.XX..X..X.XXXXX.XXX.X", "XX..X..X..XX.XX...X.X.XX.X.X.XX.....X...X....XX.X.", ".X.XXXX.X.XXX...X...XX.XXX..XXXX......X...X..X.XX.", ".XX.XX...XX.XXX.X..XXX.XXX.X..X.X.....XXX.XXX.XXX.", ".XXX..X..X....X.X...X...XXXXX....X...X.XX.X.X.XXXX", "...XX.X.X.X..XXXX....X.X.X.X..XX.X.X..X.XXX..XXXX.", ".....X.XXX.XX..X..X.X..XX.XX.XXXXX..X....XX....XXX", "..XXX.X....X.X...X.X.X.XXXXX...X.X.XX..X...X...XXX", "....XXXXX..X..X.X...X.XXXXX....X.XX.XX.X...X...XXX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 68, 82};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> grid = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> grid = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> grid = {"..."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 3};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> grid = {"X", ".", "X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> grid = {"X", ".", "."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> grid = {".", "X", "."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 0};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> grid = {".X."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 0};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> grid = {".X", ".."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> grid = {"...................................."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 36};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> grid = {"....."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 5};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> grid = {"....", ".XX.", "...."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 4};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> grid = {".X.", "XXX", "X.X", ".X.", "..."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> grid = {"..."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 3};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> grid = {"XXX.XX", "X.X.XX", "XXX.XX", "X..XXX", ".XX.XX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> grid = {"XXXXX..XX.", "....XXXX..", "XXXXXXXXXX", "XXXXXXXXXX", "X..XXX..XX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", ".........."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 21};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> grid = {"XXXXXX.", "X.XXXX.", "XXX.XX.", "X..XXX.", "XXXXXX."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 6};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> grid = {"."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> grid = {".X", "X.", ".X", "X.", ".X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 0};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> grid = {".."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> grid = {"..X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> grid = {"X", ".", ".", ".", "X", "X"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 3};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> grid = {"...", "...", "..."};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> grid = {"XX", "X.", "XX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> grid = {"XX", "X.", ".X", "..", "XX"};
    HappyCells* pObj = new HappyCells();
    clock_t start = clock();
    vector<int> result = pObj->getHappy(grid);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21187686&rd=12178&pm=9770
********************************************************************************
#include<algorithm>
#include<cstdlib>
#include<sstream>
#include<set>
#include<queue>
#include<string>
#include<vector>
#include<math.h>
#define FOR(i,v) for(int i=0;i<(v).size();i++)
#define len length()
#define si size()
#define whole(x) x.begin(),x.end()
#define pb push_back
using namespace std;
typedef vector<int> vi; typedef vector<string> vs; 
 
vs t;
 
bool onboard(int x, int y){
 if(x>=0 && x<t.si && y>=0 && y<t[0].len)return 1; else return 0;
};
 
int getoth(int x, int y){
 int k=0,ok=0;
 if(onboard(x+1,y)){ k++; if(t[x+1][y]=='X')ok++; };
 if(onboard(x-1,y)){ k++; if(t[x-1][y]=='X')ok++; };
 if(onboard(x,y+1)){ k++; if(t[x][y+1]=='X')ok++; };
 if(onboard(x,y-1)){ k++; if(t[x][y-1]=='X')ok++; };
 if(ok==k)return 1; else return 0;
};
 
int getdia(int x, int y){
 int k=0,ok=0;
 if(onboard(x+1,y+1)){ k++; if(t[x+1][y+1]=='X')ok++; };
 if(onboard(x-1,y-1)){ k++; if(t[x-1][y-1]=='X')ok++; };
 if(onboard(x-1,y+1)){ k++; if(t[x-1][y+1]=='X')ok++; };
 if(onboard(x+1,y-1)){ k++; if(t[x+1][y-1]=='X')ok++; };
 if(ok==k)return 1; else return 0;
};
 
class HappyCells{
 public:
    vector <int> getHappy(vector <string> grid){
     int a=0,b=0,c=0;
     t=grid;
     FOR(i,t) for(int j=0; j<t[0].len; j++){
      if(t[i][j]=='.' && getoth(i,j) && getdia(i,j))a++;
      if(t[i][j]=='.' && getoth(i,j) && !getdia(i,j))b++;
      if(t[i][j]=='.' && !getoth(i,j) && getdia(i,j))c++;   
     };
     vi ret; ret.pb(a); ret.pb(b); ret.pb(c); 
   return ret;
    };
};

********************************************************************************
*******************************************************************************/