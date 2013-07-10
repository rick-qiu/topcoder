/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6062
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

class FourBears {
public:
    int clearPassages(vector<string> field);
};

int FourBears::clearPassages(vector<string> field) {
    int ret;
    return ret;
}


int test0() {
    vector<string> field = {"B.X...............", "..X..XXXXXXXXXX..B", "B.X..X........X...", ".....X........X...", "..XXXX........X..B"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> field = {"..................", "B..........XXXX..B", "..........X.......", "....XXXXXX........", "..........XX......", "B............XX..B", ".................."};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> field = {".......X.XX.......", "B....XXX..XXX....B", "....X.......XX....", ".............XX...", "....XX......XX....", "B....XXX..XX......", ".......XXXX......B"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> field = {"B.B", "...", "B.B"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> field = {"..B", "B.B", "B.."};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> field = {"B..................XX.................XX.XXX.....B", "...XXXXX.....XXXX......XXXXX.....XXXX..XXX.XXXX...", "............XX..................XX................", ".......XXX........XX..X....XXX...........XXX......", "............XXX......X.XXX......XXX.XXX..X.XXX....", "....XXXX......XXX...X...XXXX......XXX.XXXX........", "B..XX..............XX............................B"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> field = {"....XXXXXXXXXXXXX.", "B...X...........XB", "....XXXXXXXXXXX...", "..............X...", "....XXXXXXXXXXX...", "B...X.............", "....XXXXXXXXXXXXXB"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> field = {".....................B", "......XX.X......X.....", ".........XXX....X.....", "...........XX...X.....", ".....X......XXXXX.....", "B.....................", "B....................B"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> field = {"...........B", "B.......XX..", "...XXXXXX...", "B...........", "...........B"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> field = {"...........B", "B.......XX..", "...XXXXXXXX.", "B........XX.", ".........X.B"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> field = {"B...X.......X...XXX......X.....X....X....X....X..B", ".X.X.....XX.....X...X....XX.X....XX.......X.......", "......X...X.X...................X.X.XXXX..X..X..X.", ".X.XX......X.X......X.....XXXXX.X.X...............", "...X.......X.........X......XXX.....X..XXXX.......", "B...........X.X.......X.......XX......X..........B", "...X..X..XXXX.......XX.XX...X........XX.....X....."};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> field = {"B.X......X...............X.X.........X............", "..X....XXXX.X....X....X.X........X.......X....X.X.", "...XX..XX..X...X.......X.........X........X.X.X...", "....X...XX.X..X.........X..X..X....X..X.......X..B", "....X...X..X.....X.....XX...X...X......X....X.X.X.", ".........X.XX...X.............XXX......X.........B", "B.X.....X.X...X...X....XX....X..........X...X....."};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> field = {"....X..X..........XXX..X..XX....X..X...XX....XXX.B", "B.....X....X....X.X....X...X.......XXX........X.X.", "B.X....X.XX..........X.XX..X.....X.X..............", "...X.....X..................X....X.........X......", ".......X.......X....X...........XX....X...X..X...B", ".........X.XX......X...X....XX..X..X....X.......X.", ".X..X.....X.X...X.XXXXX..X......XX........X......."};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> field = {"..X.X.X.......X........X......X.X......XXX.X.X.X.B", "....X..X....X....X......X.......X....XX......X.X..", "...XX.XX....X....X.X......X....XX.X............X..", ".....X.XXX...X...XX.X.............X...X..X.XX..X..", "B...XX.......XX.X.X......X..XX.XX.............X...", "..X...X......X..XXXX.....XXX...........X...X......", "B..X.........X.X.X.......X...X....X......X..X...XB"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> field = {"......X...X.............................X.........", "B.............X....X.............................B", "...................................X........X.....", "..................................................", "B..........X...........X.........................B", "..................X.............X.................", "................X...............X................."};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> field = {"........X..........X.............................B", "............................X........X......X.....", ".............X.................................X..", "...............X..................................", "B.........................................X.......", ".......X..............X..........................B", "B.....X..........................................."};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> field = {"..................................................", ".............................X..............X.....", "...X........................X..........X....X....B", "..........................X.......................", "B....................................X............", "..............................X...XX..............", "B............X.................X..X..............B"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> field = {".X...................................X............", "....................X..............X..............", ".....X....................................X.......", ".......................X.........X................", "B...X.................X........X..................", "B....................................X...........B", "..X.X....X.X......X......................X.......B"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> field = {"B.X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX..B", "..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...", "..XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XX..", "..................................................", "..................................................", "..................................................", "B................................................B"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> field = {"B.X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX..B", "..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...", "..XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XX..", "..................................................", "..................................................", "..................................................", "B................................................B"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> field = {"B...XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX..B", "....X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "..................................................", "..XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "....X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "B...XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX..B"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
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
    vector<string> field = {"BXXXXXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XB", "....X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "..X...............................................", "..XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "....X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "BXXXXXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XB"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> field = {"BXXXXXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XB", "....X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "................................................X.", "..XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.", "....X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "BXXXXXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XB"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> field = {"B.X.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXXX.B", "..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X...", "..XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XXX.XX..", "...............................................X..", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "..X..............................................B", "B.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> field = {"BXXX...", "...X...", ".......", "BX...XB", ".......", "...X...", "...XXXB"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> field = {".XXX.XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXX.B", "B..X.X.....................X.X....................", "...XXX..XXXXXXXX...XXXXXXXXX.X.XXXXXXXXXXXXXX.....", "........X......X...X.........X.X..................", "...XXX..XXXXXX.X...XXXXXXXXXXX.XXXX...............", "B..X.X.......X.X..................X...............", ".XXX.XXXXXXXXX.XXXXXXXXXXXXXXXXXXXX..............B"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> field = {".XXX.XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXX.B", "B..X.X.....................X.X....................", "...XXX..XXXXXXXX...XXXXXXXXX.X.XXXXXXXXXXXXXX.....", "........X......X...X.........X.X............X.....", "...XXX..XXXXXX.X...XXXXXXXXXXX.XXXX.........X.....", "B..X.X.......X.X..................X.........XXX...", ".XXX.XXXXXXXXX.XXXXXXXXXXXXXXXXXXXX..............B"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> field = {".........XXX...............................X.....B", ".........X.X.........XXXXXXXXXX......XXXXXX.......", "..XXXXXXXX.X.........X..X.X.X.X......X............", ".....................X..X.X.X.X......X......XXX...", "....XXXXXXXX.........XXXXXXXXXX......X............", "B...X................X..X...X.X......X............", "B...XXXXXXXXXXXXXXXXXXXXXXXXXXX......XX.X.X.X.X.XB"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> field = {"BXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXB", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "BXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXB"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> field = {".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXB", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXB", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "BXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "BXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
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
    vector<string> field = {".............XXXXXB", "...................", ".................XB", "B....X.XX........X.", ".....X..X........X.", "BXXXXX..XXXXXXXXXX."};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
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
    vector<string> field = {"..................", "B..........XXXX..B", "..........X.......", "....XXXXXX........", "..........XX......", "B............XX..B", ".................."};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> field = {"..B", "B.B", "B.."};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> field = {"BXXXXXXXXXXXXXXXXB", "................X.", ".XXXXXXXXXXXXXXXX.", ".X................", ".XXXXXXXXXXXXXXXX.", "................X.", "BXXXXXXXXXXXXXXXXB"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
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
    vector<string> field = {"B...............................................B", ".................................................", ".....................X...........................", ".................................................", ".................................................", ".................................................", "B...............................................B"};
    FourBears* pObj = new FourBears();
    clock_t start = clock();
    int result = pObj->clearPassages(field);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=9824&pm=6062
********************************************************************************
// I think it is good to submit wrong solutions sometimes to give others challenging opportunities. 
 
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
#define LS < 
#define Size(x) (int(x.size())) 
#define LET(k,val) typeof(val) k = (val) 
// execute "act", and return "val" as an expression result 
#define CLC(act,val) (*({act; static typeof(val) CLCR; CLCR = (val); &CLCR;})) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
// find the first k in [a,b) that satisfies cond, or b if none 
#define FIRST(k,a,b,cond) CLC(LET(k, a); for(; k LS (b); ++k) if(cond) break, k) 
 
#line 3 "FourBears.cc" 
 
int dist[10][60][10][60]; 
 
#define DO(yy, xx) \ 
  { int ndist = field[yy][xx] == '.' ? 1 : 0; \ 
    if(ndist == 1 && ((xx) == 0 || (xx) == X-1)) ndist = 60; \ 
    dist[y][x][yy][xx] <?= ndist + dist[y][x][y2][x2]; } 
 
#define obs(y, x) \ 
  (field[y][x] == '.' ? 1 : 0) 
 
class FourBears { 
  public: 
  int clearPassages(vector <string> field) { 
    // !FDI 
    int Y = Size(field); 
    int X = Size(field[0]); 
//  printf(".\n"); fflush(stdout); 
    FOR(y,0,Y) FOR(x,0,X) { 
      FOR(y2,0,Y) FOR(x2,0,X) dist[y][x][y2][x2] = 80; 
      dist[y][x][y][x] = 0; 
      FOR(t,0,60) { 
        FOR(y2,0,Y) FOR(x2,0,X) { 
          if(y2 > 0)   DO(y2-1, x2); 
          if(y2 < Y-1) DO(y2+1, x2); 
          if(x2 > 0)   DO(y2, x2-1); 
          if(x2 < X-1) DO(y2, x2+1); 
          } 
        } 
      } 
//  printf(".\n"); fflush(stdout); 
    int besttime = 500; 
    int bear0 = FIRST(y,0,Y, field[y][0] == 'B'); 
    int bear1 = FIRST(y,bear0+1,Y, field[y][0] == 'B'); 
    int bear2 = FIRST(y,0,Y, field[y][X-1] == 'B'); 
    int bear3 = FIRST(y,bear2+1,Y, field[y][X-1] == 'B'); 
    FOR(y1,0,Y) FOR(x1,0,X) FOR(y2,0,Y) FOR(x2,0,X) { 
      besttime <?= 
        dist[bear0][0][y1][x1] + dist[bear1][0][y1][x1] 
      + dist[bear2][X-1][y2][x2] + dist[bear3][X-1][y2][x2] 
      + dist[y1][x1][y2][x2] - obs(y1,x1) - obs(y2,x2) - obs(y1,x1) * obs(y2,x2); 
      besttime <?= 
        dist[bear0][0][y1][x1] + dist[bear1][0][y2][x2] 
      + dist[bear2][X-1][y2][x2] + dist[bear3][X-1][y1][x1] 
      + dist[y1][x1][y2][x2]  - obs(y1,x1) - obs(y2,x2) - obs(y1,x1) * obs(y2,x2); 
      besttime <?= 
        dist[bear0][0][y2][x2] + dist[bear1][0][y1][x1] 
      + dist[bear2][X-1][y2][x2] + dist[bear3][X-1][y1][x1] 
      + dist[y1][x1][y2][x2] - obs(y1,x1) - obs(y2,x2) - obs(y1,x1) * obs(y2,x2); 
/*    if(X == 3 && Y == 3 && field[1][2] == 'B') { 
        printf("%d %d %d %d %d\n",  
          dist[1][0][1][0], dist[2][0][1][0], 
          dist[1][2][1][2], dist[2][2][1][2], 
          dist[1][0][1][2]); 
        fflush(stdout); return 15; 
        } 
*/    } 
    return besttime; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/