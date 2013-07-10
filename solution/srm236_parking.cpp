/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3530
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

class Parking {
public:
    int minTime(vector<string> park);
};

int Parking::minTime(vector<string> park) {
    int ret;
    return ret;
}


int test0() {
    vector<string> park = {"C.....P", "C.....P", "C.....P"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> park = {"C.X.....", "..X..X..", "..X..X..", ".....X.P"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> park = {"XXXXXXXXXXX", "X......XPPX", "XC...P.XPPX", "X......X..X", "X....C....X", "XXXXXXXXXXX"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
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
    vector<string> park = {".C.", "...", "C.C", "X.X", "PPP"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
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
    vector<string> park = {"CCCCC", ".....", "PXPXP"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> park = {"..X..", "C.X.P", "..X.."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> park = {"P.................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXC"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 1274;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> park = {"PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> park = {"PPPPPPPPPPCCCCCCCCCC", "PPPPPPPPPPCCCCCCCCCC", "PPPPPPPPPPCCCCCCCCCC", "PPPPPPPPPPCCCCCCCCCC", "PPPPPPPPPPCCCCCCCCCC", "PPPPPPPPPPCCCCCCCCCC", "PPPPPPPPPPCCCCCCCCCC", "PPPPPPPPPPCCCCCCCCCC", "PPPPPPPPPPCCCCCCCCCC", "PPPPPPPPPPCCCCCCCCCC"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> park = {"CPCPCPCPCPCPCPCPCPCP", "PCPCPCPCPCPCPCPCPCPC", "CPCPCPCPCPCPCPCPCPCP", "PCPCPCPCPCPCPCPCPCPC", "CPCPCPCPCPCPCPCPCPCP", "PCPCPCPCPCPCPCPCPCPC", "CPCPCPCPCPCPCPCPCPCP", "PCPCPCPCPCPCPCPCPCPC", "CPCPCPCPCPCPCPCPCPCP", "PCPCPCPCPCPCPCPCPCPC"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
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
    vector<string> park = {".PPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "PPPPPPPPPP........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC", "........................................CCCCCCCCCC"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
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
    vector<string> park = {"CX...X...X...X...X...X...X...X...X...X...X...XPPP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CXCX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XPXP", "CCCX...X...X...X...X...X...X...X...X...X...X...XP"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 1174;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> park = {"CCCCCXCCCPPPX", "PPPPPXPPPCCCX", "XXXXXXXXXXXXX", "CCCCCPPPPPCCP"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
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
    vector<string> park = {"PPPPP.....CCCCC"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> park = {"C", "P"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
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
    vector<string> park = {"PC"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> park = {"CX", "XP"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
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
    vector<string> park = {"P....CP....C"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> park = {"PXC..............................................P"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> park = {"..C....X......X.....X..XXX.....C...XX.............", "XXC.XX..XX.X.....XX.......P.C........XX..XX.X..P..", ".X.X.P...X.P.X.X.X......X........XX......C........", "..XX.X.....P.X..X..................C..X...........", ".X..P......P......PC...P..X.X......XP...X......P..", "P.C.P.......X..XP..XX..X.............X...X.X..X..X", "....PP...X...X..C..C....X..PX....X........P.......", "........X...X...........X..X..X........X.X.....C.X", "...X...........X....X..X...X......P...XX..........", "..X......X..........C.P.....X.XX...X.....XP..P....", "X..XXC....C....X...XX.P....X.C.......C.CX...X..X.C", "..............X..XC.X..X..XX..P.....P..C.....X....", "..X.......X.X.....XP.C...............P.........XX.", "X....P.X.P...X....X........P.C.X..C.C...X..P..PPX.", "...X..X.X............X..X..............XPP....X...", "......X....X......C.X.CX..X...CX...XX....C.X....X.", "..........X....X.........PX......X..C....X...X..P.", "..XX...X.CCP.X...........XC.P.XXP..XP.P....XXX...C", "...CXP...X.....XX..CX.X....C...........X..C.....P.", ".P.X....P....X......X..XP..........X........P.X...", "X.X.X..XX..X..........X..C...C..C.....P.X.........", "..P..X...X....P...X.X......P.....P...C...XX....X..", ".X.XP...X.....X...XXX..X.X...X.XX.......X...X...X.", ".......X.....XXX.CX......P...X.X...X.....PX..C....", "...X.................XC....PX..CX.........X...C..X", "X......XXX..C......X....X....X.CXC.X.CX.......P...", ".X..........X..XCX..X..XXX....P...XX.XCXC.........", "X...........P..P..X.X.......XXXX.........P...X....", ".......XX...P.X.C.....X...X........X.....XX.......", "..X.C..P...C..........XX..X.P............X..X.....", ".....X.....C........X..X..........X....X.X.XX....X", ".XX...XXCX.....X................X...XP.......XX.P.", "...X..................X...X.......XP.....CX.C.C...", ".......C.X......P.X....X..X.XX....XC...XX.........", "..X.....C...P.X.X..X.....C.....C...X..C....XP.X.X.", "....C.....X..........X....X.X..X......XCX........X", "..P..C.X..X.X....X.X....X....X.P..........XX.XX...", ".X....X.......X..P.....XCX....C.X....X.X...X...X.X", ".X....XX...X.XX..X........P...XC.P..X.X.....X...X.", "..X.XX.....X................X.....X..........P....", "......XX.......X...X..P....P...PX..C.X....X.......", ".....X............C.XXXPCP..X...X......X.X......P.", "..............X.P..X....P.C.P.....P.........P.....", "..XX....XPX...X.........PX..CCX.....XX..X.XXX.....", ".....PXC.X.................C....X.X........X.C....", "..........X..............P....X..X..X......XXC....", "........X...X.X.X....X.X...X.P.X........C.....P.C.", ".........XX....P......CCX..C.X....XXX...PX.....C..", "XX.X..C.X...PXX...X...X.XC..X....X.C.C.XC.......X.", "C.C.X...PC....X..X..P......................X..X..."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> park = {"XX.XX.X.X.XX.XX.XXXXC...X.XX.XXXX...XX.XX.XXP...XX", ".XXXX..X....XP.X.CX.PXX.C....XXXX.XXX.X.XX.XX.XXXC", "PXX..XC.X.XC.X.XX..XX.XX..XX..XCX.......XC...X.X..", "XPXXX.......X..P.X.XX.P.X.X.X.CX.X....XX.....X.X..", "X..X..X..XX..X.XC.CX.X.XXXX..X.CX.XXX.XX.X.PXX.PP.", ".P.C.X..X.P..XX....PX....PXC..XXX......X..X.XX.X..", "....XXXXXCC..XX..X..X.P.X..XX....X...X.X...XXXX.X.", "XXXX.PP.XPX.XCX..XX.X.P.X.XXX.....XXX.X..P.XXXX.XX", "X..X.X.XXXX...PXX.PX.PX..XXX.C.XXX.X..XXXXXX.C..XX", ".CX.X.P.XXXX....X..XP.XX.CXC.X...X.X..X..XX.X....X", "C.PX.X...XX.XCX..X..X.X.XXXX...X..X.XXX.X.XX..XX.X", ".X..X....X...X.XX....XX.P.X.XPX..X.X......XX.....X", "...XXX...X.PXXXXX..XX.PPP.X.XX.X.X...XXX.XXX.X..X.", "C.X..XX....XP.P.XC..X.X....P..X..X...XXXXXX.X.XXXX", "...PX..XXXXX..X..X.X..X.XP.XXX..CXP.XX.X....X.X...", "CX.XX.XP.CX..XXXP.X.XX.XXXPX.X.X..XCX..XX...XX..XX", "XXXX.X...X...X.....XX.X.XX...X.X.C.X..XX..X.XPCXX.", "P..XXXX..XX.C..X.X...XX.X.X.P.P.XC.XXX.XC..PX..X.X", "XXX..X.XXX....XX...CXX....X...X.XXX...XPX...X.C.X.", ".X.XX.X..X.....X..X..XX.X.....X.XX.X.X..X.XXX..X..", "XXX.....X...X..XXPXX..XX.....PXXXXX.........XX.CX.", ".......X......X.CX...XX.XX..XXXX..X..CXXXX.P..X..C", "XX..XX.XX..X..XX.XX..X..XX...PP..X.X.X..XXP..XXCX.", ".XX.XXX..X.XXX..XXX..X.X..X.XX.X..X...XXX.PXXX.X.X", ".XXXC..X......XX.X...XXXX.P.XX...XX..XXX.XX..X.X.X", "..X...C..XXX.....XX....XX....XXXXX.X..PXC.X.X.XX..", "....X..XX.PCX...PXXC.X..X..X.X.X..X.X.XX..X.X.XX..", ".CXX...XX...X..XP.X..XX..XX...XXC...XX.X.X.X...X..", "C..XX....X..X..PX.XXX.X..C.XXC.X.XX.XXX..X..XPX.XX", "XXX...X...X.XXC.X.....X....XX.X..X..XPX.XXX.....X.", "XX..XXX.X..X.CX..X..XXPXXX......XX.XPP...XX..C...X", "..XX.X..X.XXXX.X.....XX.XXX....XXXXXXCX.X.X....X..", "XXX.X.XXXXP.C..PXX..XXXXXPXXXXCXXXCX.X..XXX..P..P.", "X.XXXC..P.XX..XX..XXXX..XXX..C..X..P.XX..XX....PXX", "XP.X.X..XXCX..X.X.X.......XXXX.X...X.X.XXXXX...X.X", "...XX...PX....XX..X.X..XX....CXXX..XXX.X....XXX.X.", ".X....X...X.X.XC.X..XC....XPXX.P.X.XX.XX......XXX.", "XPX..X..XX..C..XXXX...CXP.X..XX.XXX..C..X.X.X.....", "X..XXXXX..X.X..XXCX.XX.XXX.XX..XP.X....XCXX.X.P.X.", "..X...XXXC.X.....PX.X.XXP..XX.X.XP..X.XXX..XXXXX..", "X.C.X.CX....C.X..PX...X..XX.PXP..XXC..X......P.XXP", ".X.XX.XX.X.XPXX......XX.X.C....CXX..X..X...X..XXX.", "XXXXX.XX.X.X...PXXX.....X...XX.X...C...P..XXX.X..X", ".XXX.X.......X..XXX..X.XXXXX.X..XXX.X.CCXXX......X", ".P....X.X..X.XXX.X.X...X.CXX.....X...XPX....X.X..X", ".XXC.X.XXXP.XC.P.X.X....X...CXX.X..XX.........X...", "XXXX.X..X.XXCCX....X.X..XXXX..XX..XXC...XXC..XX...", ".XXX.X.X..XX....XXX.X.X....X...X.XXX..X.XXXXXX..X.", "XXX.PXX..C...X...XX.X...XX.XX..X.X.PX.........C...", "..X...X..X...X..X....XCX.XP..X.X......X.XC.....X.X"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
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
    vector<string> park = {"P.....P...X.XX.X.X..X...XXXX.....X..P......X.P....", "...XX..P..X...X.X..X..X..X..XX.X.XX....XXX....X...", "X.X..XX..XX..XP.......X....X.X.....PX...........XX", "..XXX..X...X.......X....X..X.X..X.XX.X.XX..P.XX...", ".XX.X.PXP......XX.XXXX......XX.....XXXXXX..X..X...", ".XX.......X...X..XXXX.X.XX..........X...XX......X.", ".PX......XXX.XX.XPX..X....XX.X.X...XXP..XX...XX...", "..X..........X..X...X.X.X.X....X.XP....X..PX......", ".X...X.X.........X..........X.XXXXXX.X....X...XXXX", ".X.P..........XX......X.P..P.X.....X..XPX.P..P..XX", "....X......X.XX.XXX.X..PX.XX......X......C.X....XX", ".......X...XX.XPX.X.XX.XC.XX..X...X..X....PXXX....", ".XX..X..X.....X....X...........X.X..XX...X...X....", "X......C...X.X..X....XX.X..........P......X...XP..", ".X.XXXP.XX.X.X..XX.PPX....X.....X..XX......XXCXXX.", "X.XX..........XXXX.......X....X.....P.X.X...X.XP.P", ".XX.X.....X.PXX.XC.X.XXP.....PX.P.........X..X...X", "X........PXX......X......XXPX..P...X..X....X..XP..", "...X.PX....XX...XX....X.X.P......XX.X.X...X...X...", "....X.XX......PX.X.PX..X..XXX.C..X.XPX.X.X....P.XX", ".XXP.XXX.XX.XX...XX.XX.X..XX...X.X.....PX...X..X..", ".X.....X.XXP...X.....X...XXXXX.X.X........X..X.X.X", "X..X...X..XX..P.X.XXX..XXXPX.X...XX...X.X.......X.", ".XXXXXXXX..X....X.X.X.X..........XP.....X.......X.", ".....X.XXXXX..........XP...X....PXX.X...........XX", ".XXX....X......X.....X.XX..X......XXX......XXX..XX", "......X....XX...X.XXX...X..X.P...X.XX...XX.X.X..XX", "X..P..XX.XP.....X.XXXX.X......X...P..X.PXX.XX.....", ".XX...X..X...X......P...X...PXPX.XX....X......X...", "X......X.XX..XXX.X.......XX..X....X.X.X.X.P..XXX.X", "....X.X.X.XX...X.X.XXPX.XX.P.X..X.X.XX.XXX...X....", ".XX.X..X....X....X..XX.XX..P.XX.....XX..XP.X.XXXXX", ".....XXXX..P.XP...X...X...X.XPX.XX........X....XXX", "..X.....XX...X.........X.X.X.....X.X.XX.XXX.......", "X...X......P..P.P..X....P...XX..X.......X.....X.X.", "XX.X....X.X.X.PXX.X..X..XX........X.......XXXX...X", ".X.X..X..X.X.....X.........X..P.X.....X..XX.X.....", ".XX.........X.XX....XX.....XX..XX.XXXXXXXX....XP.X", "X.P...X..XX.XP...X..P.X.X....XP....PXX...X.X...X..", "......XX.XXX...X.....XX.X....XX..P...C.XX.X...X.X.", "..X.....X......X.XC..XXXX......X....X.X......X.XCX", "..XXX..X....X....X..XXXX.X.P...XP.X.X.X.X....X....", "X.....X.X....X..........X..X.XPXXXX.X..X..XX.X.X.X", ".....X..XX..X..XX....X...XX.X.....X.X..XXX.......X", "XXX...XXXX.....X.......XX.X.X.X.X......X.XXXXP....", "..XX..XX.XX..........C...XXPP..XX...X..........XXX", "XP........X..X..X......X.P....XXX.X..P............", "XXX..X.XXX.X...X.X..X...X...X.P...PX..XXXX..X.....", "XX.X.....X..X.XX..X.X..XPXXX...X.P.X.X.X..X.....XX", ".P.........PX........P..X..X.X.X..XX..XX...X..X..."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> park = {"."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
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
    vector<string> park = {"P"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> park = {"C"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> park = {"X"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> park = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> park = {"..................................................", "..................................................", "..........P.......................................", ".......P..........................................", ".............P....................................", "....................P.............................", "..................................................", ".................................P................", "..................P.......P.......................", "......P...........................................", ".............................P....................", "..............P...................................", "..................................................", ".........................P........................", "..................................................", "..................................................", ".....................P............................", "..................................................", "..................................................", "...................P..............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................P...............................", "...............................P..................", "..................................................", "...........P......................................", "...................P..............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................P......P..........................", "..................P...............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................P...............", "......................P...........................", "..................................................", "..................................................", "..............P...................................", "..................................................", "..................................................", ".................................................."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> park = {"..................................................", "..................................................", "..........C.......................................", ".......C..........................................", ".............C....................................", "....................C.............................", "..................................................", ".................................C................", "..................C.......C.......................", "......C...........................................", ".............................C....................", "..............C...................................", "..................................................", ".........................C........................", "..................................................", "..................................................", ".....................C............................", "..................................................", "..................................................", "...................C..............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................C...............................", "...............................C..................", "..................................................", "...........C......................................", "...................C..............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................C......C..........................", "..................C...............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................C...............", "......................C...........................", "..................................................", "..................................................", "..............C...................................", "..................................................", "..................................................", ".................................................."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
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
    vector<string> park = {".C.", "...", "C.C", "X.X", "PPP"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> park = {"."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> park = {"..."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> park = {"C....X....P..X.....X..........X......XP..C......XP", "X..X...................X...X......X....PXX........", "C..C.......XX...X......X.P....X...PP.X.....X.....X", "......X...XC..X...CPX.X.P.X..X..XCX..........X...P", "...X.X....PX..........X.......C.......X...X..X....", ".X...X.........X.C.....PC........XP.....X..X.C....", ".CX........P.X..X.X...........C........XC..X......", ".......X........X..X.P..X.P......X...C...C........", "X.X.......XXX.....PX........X..........X.P......X.", ".......PC....X.XP........X..X...X..........X....X.", ".......X.C.......P...X....X.X...................X.", "....X.....X...X......X...X.X...X..XXC.P..C.....X..", ".....C.CP.....C..............X....X.P.X......X..X.", ".....PP.X.....P...C.....XX.X.........X...XX.......", "XP.P.....XX.............X......X..........X.X...C.", ".......X.......X...X.........X.X.X..XXP.X.........", "..X..................P....C...C....C.X...........P", ".......P....XX.X............X...X........X....X.XC", "..XP....X.X...X.X.P.X....XXX....C.P...P...P..C....", "..X.P.P....XCX..........CX...X.X...X......P.......", "C............X.X....X.......XC....................", "...X.X..P...XXX.CXXXX..............X..CP.....C...P", "XP..XP...X..........X.P..........C..X.X.......C...", ".........X...XC.P...X.X....X.X.X...XCPX..CX...X...", ".X......P...........CXC.....X........C...X......X.", ".....P..X..XPX.......XX....X...X.P..X.XX...X......", ".....XXX....X...X....X.C...X.P....X.........X.....", "X.....C.X.....P..P...X.CXX......X.X.C.............", "X.......CX...........X............X........P..P...", ".X.........P..XX.....X.C....C...........XC....P...", "...............X....XX....X.....XXXXXXXX.X....P...", "X.C.....C...X.X....X.X.....C...XX.P.........P...P.", "...XXX.......X.......XXXXXXXXXXXP..PX........P....", "....X..........C.X..X.............................", "C...C.X........X........X.........X.............XP", "PP.P..X..XX..X............X......X....X.XX..C.....", ".....P.......P................X..X....X.CX........", ".....P...CXX.......X.X.......P....X.X.C........X..", "......C......X.........X..P..P..P.........P.......", "..P.....C..............P................X...X...P.", "XX.....P.....X..........X....C......X.X...CXXX....", "....C......CP....C......CX..........C...X.........", ".....X...X..X...................C..X...P..X...XX..", "...X....XX..............X.........X..X.....P.P..C.", ".....X..XP......P......................C..........", "..X.....XCP.X...........XX.....X...P.....CC......P", "..X..C...........X...CPX....X...P.......X.........", "..X.........C...P.........C...........XX....C.....", "P.XP.............X..X.X.X......P.C.....X.......X.P", "..X...X........................X.....P.....X..X..."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> park = {"....................................C...", "...........C............P.......P.......", "....C..........P....C......C........P...", ".........X.....................XX.......", "...C........P....X.....P........X.......", ".........X.......X......C...............", "........X...C....X..C.........X.....C...", "..P.........................X....X....P.", "..................X.......X......X......", "C.....X..P...P..X......C.....P..........", "..P...X.......X..........X.........X....", "............X............X.....X.X....P.", "......X...........C......X..C...........", "........X..X.....P................P.....", "......P...XX............X.....P.X.......", "...C..................X.......P.X....C..", ".....P..C...XX......X....C......X.......", "............X..X..X.............X.......", "......X...X..............C....X.........", "....X...X.........X.........X.......P...", "...X............X....X..................", "..X......XX.X.X........X..X......C......", "......C.........P........X.............C", "...................P........P..........."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> park = {"....P.."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> park = {".C.", "...", "C.C", "X.X", "PPP"};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
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
    vector<string> park = {"."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> park = {"..."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> park = {"C....X....P..X.....X..........X......XP..C......XP", "X..X...................X...X......X....PXX........", "C..C.......XX...X......X.P....X...PP.X.....X.....X", "......X...XC..X...CPX.X.P.X..X..XCX..........X...P", "...X.X....PX..........X.......C.......X...X..X....", ".X...X.........X.C.....PC........XP.....X..X.C....", ".CX........P.X..X.X...........C........XC..X......", ".......X........X..X.P..X.P......X...C...C........", "X.X.......XXX.....PX........X..........X.P......X.", ".......PC....X.XP........X..X...X..........X....X.", ".......X.C.......P...X....X.X...................X.", "....X.....X...X......X...X.X...X..XXC.P..C.....X..", ".....C.CP.....C..............X....X.P.X......X..X.", ".....PP.X.....P...C.....XX.X.........X...XX.......", "XP.P.....XX.............X......X..........X.X...C.", ".......X.......X...X.........X.X.X..XXP.X.........", "..X..................P....C...C....C.X...........P", ".......P....XX.X............X...X........X....X.XC", "..XP....X.X...X.X.P.X....XXX....C.P...P...P..C....", "..X.P.P....XCX..........CX...X.X...X......P.......", "C............X.X....X.......XC....................", "...X.X..P...XXX.CXXXX..............X..CP.....C...P", "XP..XP...X..........X.P..........C..X.X.......C...", ".........X...XC.P...X.X....X.X.X...XCPX..CX...X...", ".X......P...........CXC.....X........C...X......X.", ".....P..X..XPX.......XX....X...X.P..X.XX...X......", ".....XXX....X...X....X.C...X.P....X.........X.....", "X.....C.X.....P..P...X.CXX......X.X.C.............", "X.......CX...........X............X........P..P...", ".X.........P..XX.....X.C....C...........XC....P...", "...............X....XX....X.....XXXXXXXX.X....P...", "X.C.....C...X.X....X.X.....C...XX.P.........P...P.", "...XXX.......X.......XXXXXXXXXXXP..PX........P....", "....X..........C.X..X.............................", "C...C.X........X........X.........X.............XP", "PP.P..X..XX..X............X......X....X.XX..C.....", ".....P.......P................X..X....X.CX........", ".....P...CXX.......X.X.......P....X.X.C........X..", "......C......X.........X..P..P..P.........P.......", "..P.....C..............P................X...X...P.", "XX.....P.....X..........X....C......X.X...CXXX....", "....C......CP....C......CX..........C...X.........", ".....X...X..X...................C..X...P..X...XX..", "...X....XX..............X.........X..X.....P.P..C.", ".....X..XP......P......................C..........", "..X.....XCP.X...........XX.....X...P.....CC......P", "..X..C...........X...CPX....X...P.......X.........", "..X.........C...P.........C...........XX....C.....", "P.XP.............X..X.X.X......P.C.....X.......X.P", "..X...X........................X.....P.....X..X..."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> park = {"....................................C...", "...........C............P.......P.......", "....C..........P....C......C........P...", ".........X.....................XX.......", "...C........P....X.....P........X.......", ".........X.......X......C...............", "........X...C....X..C.........X.....C...", "..P.........................X....X....P.", "..................X.......X......X......", "C.....X..P...P..X......C.....P..........", "..P...X.......X..........X.........X....", "............X............X.....X.X....P.", "......X...........C......X..C...........", "........X..X.....P................P.....", "......P...XX............X.....P.X.......", "...C..................X.......P.X....C..", ".....P..C...XX......X....C......X.......", "............X..X..X.............X.......", "......X...X..............C....X.........", "....X...X.........X.........X.......P...", "...X............X....X..................", "..X......XX.X.X........X..X......C......", "......C.........P........X.............C", "...................P........P..........."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> park = {"....P.."};
    Parking* pObj = new Parking();
    clock_t start = clock();
    int result = pObj->minTime(park);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=6535&pm=3530
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <queue>
using namespace std;
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i)
const int INF = 1000000000;
template<class T> inline int size(const T&c) { return c.size(); }
 
int sx,sy;
char board[64][64];
 
int parknr[64][64];
 
int ncars;
int npark;
int dist[128][128]; // INF
int edge[128][128];
 
int ddd[64][64];
 
void bfs(int startx,int starty,int d[]) {
  FOR(x,0,sx+1) FOR(y,0,sy+1) ddd[x][y]=INF;
  ddd[startx][starty] = 0;
  queue<int> q; q.push(startx*100 + starty);
  while(!q.empty()) {
    int qf = q.front(); q.pop();
    int x = qf / 100; int y = qf%100;
    int d = ddd[x][y];
#define AAA(x2,y2) { \
  if(board[x2][y2]!='X' && ddd[x2][y2]==INF) {\
    ddd[x2][y2] = d+1; q.push((x2)*100 + (y2)); \
  } \
}
    AAA(x-1,y); AAA(x,y-1); AAA(x+1,y); AAA(x,y+1);
#undef AAA
  }
  FOR(x,1,sx) FOR(y,1,sy) if(board[x][y]=='P') d[parknr[x][y]] = ddd[x][y];
}
 
int match1[128],match2[128];
int vis1[128], vis2[128];
int nmatch = 0;
 
bool dfs(int c) {
  vis1[c] = 1;
  REP(p,npark) if(edge[c][p] && !vis2[p]) {
    vis2[p] = true;
    int c2 = match2[p];
    if(c2==-1) {
      match2[p] = c; match1[c]=p; return true;
    }
    else {
      if(!vis1[c2] && dfs(c2)) {
        match2[p] = c; match1[c]=p; return true;
      }
    }
  }
  return false;
}
 
bool pushflow() {
  REP(c,ncars) vis1[c]=0;
  REP(p,npark) vis2[p]=0;
  REP(c,ncars) if(match1[c]==-1 && !vis1[c] && dfs(c)) return true;
  return false;
}
 
int calc() {
  vector<int> edges;
  REP(c,ncars) REP(p,npark) if(dist[c][p]<INF)
    edges.push_back((dist[c][p]<<16) + (c<<8) + p);
  sort(edges.begin(),edges.end());
 
  REP(c,ncars) REP(p,npark) edge[c][p]=0;
  REP(c,ncars) match1[c]=-1;
  REP(p,npark) match2[p]=-1;
  nmatch = 0;
  
  int poz = 0;
  while(poz < size(edges)) {
    int d = edges[poz]>>16;
    int q = poz;
    while(q<size(edges) && (edges[q]>>16)==d) ++q;
    for(int i=poz;i<q;++i) {
      int a = edges[i]&0xFFFF;
      edge[a>>8][a&255] = 1;
    }
    while(pushflow()) ++nmatch;
    if(nmatch==ncars) return d;
    poz = q;
  }
  return -1;
}
 
struct Parking {
 
  // MAIN
  int minTime(vector <string> parkmap) {
    sy = size(parkmap); sx = size(parkmap[0]);
    FOR(x,0,sx+1) FOR(y,0,sy+1) board[x][y]='X';
    FOR(x,1,sx) FOR(y,1,sy) board[x][y] = parkmap[y-1][x-1];
    npark = 0;
    FOR(x,1,sx) FOR(y,1,sy) if(board[x][y]=='P') parknr[x][y]=npark++;
    ncars = 0;
    FOR(x,1,sx) FOR(y,1,sy) if(board[x][y]=='C') {
      bfs(x,y,dist[ncars]);
      ++ncars;
    }
    if(ncars==0) return 0;
    if(ncars>npark) return -1;
    return calc();
  }
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/