/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12539
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

class GooseInZooDivOne {
public:
    int count(vector<string> field, int dist);
};

int GooseInZooDivOne::count(vector<string> field, int dist) {
    int ret;
    return ret;
}


int test0() {
    vector<string> field = {"vvv"};
    int dist = 0;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
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
    vector<string> field = {"."};
    int dist = 100;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
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
    vector<string> field = {"vvv"};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
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
    vector<string> field = {"v..", "..v", ".v."};
    int dist = 2;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
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
    vector<string> field = {"v.v..................v............................", ".v......v..................v.....................v", "..v.....v....v.........v...............v......v...", ".........vvv...vv.v.........v.v..................v", ".....v..........v......v..v...v.......v...........", "...................vv...............v.v..v.v..v...", ".v.vv.................v..............v............", "..vv.......v...vv.v............vv.....v.....v.....", "....v..........v....v........v.......v.v.v........", ".v.......v.............v.v..........vv......v.....", "....v.v.......v........v.....v.................v..", "....v..v..v.v..............v.v.v....v..........v..", "..........v...v...................v..............v", "..v........v..........................v....v..v...", "....................v..v.........vv........v......", "..v......v...............................v.v......", "..v.v..............v........v...............vv.vv.", "...vv......v...............v.v..............v.....", "............................v..v.................v", ".v.............v.......v..........................", "......v...v........................v..............", ".........v.....v..............vv..................", "................v..v..v.........v....v.......v....", "........v.....v.............v......v.v............", "...........v....................v.v....v.v.v...v..", "...........v......................v...v...........", "..........vv...........v.v.....................v..", ".....................v......v............v...v....", ".....vv..........................vv.v.....v.v.....", ".vv.......v...............v.......v..v.....v......", "............v................v..........v....v....", "................vv...v............................", "................v...........v........v...v....v...", "..v...v...v.............v...v........v....v..v....", "......v..v.......v........v..v....vv..............", "...........v..........v........v.v................", "v.v......v................v....................v..", ".v........v................................v......", "............................v...v.......v.........", "........................vv.v..............v...vv..", ".......................vv........v.............v..", "...v.............v.........................v......", "....v......vv...........................v.........", "....vv....v................v...vv..............v..", "..................................................", "vv........v...v..v.....v..v..................v....", ".........v..............v.vv.v.............v......", ".......v.....v......v...............v.............", "..v..................v................v....v......", ".....v.....v.....................v.v......v......."};
    int dist = 3;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 898961330;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> field = {".", ".", "."};
    int dist = 4;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> field = {".v...", "v.v.v", ".....", "....."};
    int dist = 2;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> field = {"..vv...v.", ".........", "...v.....", ".........", ".........", "..v......", "....v....", "......v.."};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> field = {"..........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", ".........."};
    int dist = 5;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
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
    vector<string> field = {".v..v.v........", "..v....vvv.v.v.", "...v.v.v.......", "....v.v.....v..", ".v.vv....v....v", "........v......", "..v....vvv.v...", "........v......", "............v.v", "...v.....vv.v..", ".......vv.v..v.", "v...vv..v....vv", ".v....v...v..v.", ".....v.....v.v.", "v.v....v......v"};
    int dist = 3;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> field = {"....v.......vv...", "...v......v......", "v...v.......v....", ".vv..............", ".v.v....vv.......", ".v..v...........v", "....v...v...v....", "..v.....v........", "....v.....v......", "......v.........v", "..v.....v.v......", ".................", ".v...v........v..", "........v........", "...........v.....", ".......v.........", "......v.....v...."};
    int dist = 2;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 262143;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> field = {".vv..v.........v....", "....v.......vv...vvv", "...vv.v....v..vv....", "v......v....vv...v..", "..v..v..vv.v..vv....", "..v....v.v.....v...v", ".v......v..vv...v...", "vv..............v...", "..v..v.....vv.v.v..v", "v.........vv...v....", "......v..v.v.....v..", ".....v.....v....v..v", "..v.v....v.v.....v..", "..v.......vvv.....v.", "....v....v.vv.....v.", ".v...v.............v", "..vv.....v.........v", "..v.................", "v.........v.........", "v...........v....v..", "v.......v..........."};
    int dist = 0;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 280261901;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> field = {"vv.........v...v......", "........vv...v........", "..v.v.v....v..........", "..v.vv.v....v.....v...", ".........v....vv......", "....v...v..v.......v..", "...........vv.........", "v...v.................", ".....v....v.....v.....", ".........v...v........", ".v..........v.........", ".....v.............v..", "......................", "...........vv.........", "......................", "..........v...........", "..............v.vv....", "...vv........v........", ".....v................", "...................vv.", "v.................v...", ".....v.....v.........v", "....v.................", ".v.....v.....v........"};
    int dist = 3;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 16383;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> field = {"...................v......", ".vv.....v...v.............", "..........................", "v..........vv.............", "...v......v...............", "..v.......................", ".....v...v................", "..........v.v...v.........", ".....vvv..v......v.v......", "..........................", ".......vv.................", "..........................", ".........v..v.............", "..........................", "..........................", "......v...................", "..................v.......", ".....v............v.......", "................v.......v.", ".v.......................v", "........v........v........", "..........................", "..........v...............", "........v...........v.....", "....v................v....", ".........................."};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 589934535;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> field = {".........................v..", "...........................v", "......vv................v...", "............v.v.v...........", "......v..............v......", "....v..............v......v.", ".....v..vv..................", ".v.................v........", ".............v..v.vv........", "............v...............", "..v..v..............v.......", "............v..............v", ".......v.v............vv....", ".......v...............v...v", ".v...v.v.......v..........v.", "........v......v.vv....v..v.", ".v...........v.vv.v.v.vv....", "...........v............vv..", ".....v......v...........v...", "...................v.vv.....", ".......v.........v....v.v...", "....v....vv....v......vv....", "...........................v", ".....v..v.....v.............", "......v..v....v..vv.....v...", "...v.....v......v...........", "v....v.......v......v.......", "............v.......v...v...", "....v....v..........v..v...."};
    int dist = 4;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> field = {"..........v........v...v.......", "..vv.vv........v..v..v....v....", "..........v...vv.v.v..v........", "v........v.............v.v.....", ".v....v..v..v..........v.......", "........v.v...............vvvvv", "..v...v..v...........v....v....", "v....v.v......v......v.v.......", "....v.vv....vv.................", "......v.v..........v...........", "....v......v......vv........v..", ".v...vv.vv.....v.v...........v.", "........v.v.v...........v.vvv.v", "...v....vvv....v..vv......v...v", "......v.vv.v.....v..v..v....vv.", "v.v..............v...v....v....", ".v..vvvv................v...vv.", ".....v.vv......vv.....v........", "............vv......v....v.vv..", ".......v.v....v..............v.", "......v.........v..vv..........", "vv.....v...........v..v....v...", "v.........v.vv...vv.v.....v....", "v.v....v..v....v.vv.....vv.v.v.", "..v..v..........v........v.....", "...............v...............", ".v.........vvv..vv.........v...", ".v..............v......v..v..v.", "....v.......v..v....v..........", "..vv....................v......", "...vvv.....v............v......", "v...v..vv.........v.v...v...v..", "v.......v..vvvv...v....v.v....."};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 872343396;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> field = {".v..v..v....v.v.vvv..vvv.v..v.v..vv", ".........v.vv..v.......v.v.......v.", ".....v.v.vvvv.v.vv.v.v.v...v...v...", "v.v.vv..vvv.v.v.v.v....v..vv......v", "..v.vv...vv.v..vv...vv.v...vv......", "..v.....v.vvv.v...v.v..vv.vv....v..", ".....vvv.....v.v...v.....v.v..v..vv", ".v....vv..v.vv......vvv..v...vvvv..", "..vvv........vv...vvvv....v...vv...", ".vv..vvv.....v...vv.v..vv.v..v.v..v", "v.v..v..vv..v....v.v.v....v....v...", "..v.v....v...vv.v..v.....vvv.vv.v..", "........v..v.v..v....v........v..v.", "...v....v......v....vv..........vv.", "....v.......vv...........v.....v...", ".vv..vv..v..vv..v.v.v.vvv.v.v......", "vvv....v.v..vvv....v......v..v..v..", "...vv...vv..v..v.......vv.vv....vv.", ".v..v.......v.vv.v.v...v..vv....v..", ".....v...........v.v.vv......vvv...", "....vvv.vv....vv....vv.v......vvv..", "..vv....v.....vvv.vvvvvvvvv.v...v.v", ".v....v..vv.....v.v...v....v.v.....", ".vv.v....v.v..vv....vv...vvv..vv..v", ".vvv..v..v..v..v.v..v.....vv..v..vv", ".....v..v.vv...vv..vv.v....v..vvv..", ".........v.v.v..vv.v.v...v.....vv..", "...v..vv.vv.v...v.....v.v..v.vvv...", ".vvv....v..v.v....v.vvvvvv.........", ".....vvvvvv..v....v.vvv.v.v.vvv..v.", "..v.v..v.........vv...v...v.v..v.v.", ".v..........v.v...v.v..v.vvvv.....v", "vv....v....vv..v.v.vvv.v...v...v.v.", ".v..vv..v...v.....v..vv.v.....v...."};
    int dist = 2;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 2047;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> field = {".......................................", ".......................................", ".......................................", ".......................v.............v.", "...v...v................v..............", ".......................................", "..........................v............", "..............................v.......v", "...v.............v.....................", "..v...........................v........", ".......................................", ".......................................", ".......................................", ".......................................", "......................v................", ".......................................", ".....................v.................", ".......................................", "........................v..............", "................................v...v..", ".......v.........................v.....", "..........................v............", "..v....................................", ".......................................", ".......................................", "..v..v........v........................", ".............v.........................", ".......................................", "....................v..................", ".................v.....................", "............v..........................", "................v.v...v................", ".......v...v...........................", ".....................................v.", ".......................................", "............v..........................", ".......................................", "...................v..........v........"};
    int dist = 8;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> field = {"........v..v.v....vvv.......v.............", "...vv.....v.....v........................v", "...............vv................vvv....v.", ".........v...v..v..........v..............", "...................................v......", ".vvv.v....v.....vv.....vv.v...........vv..", "v...........v...v.v...vvv..vv....vv.....v.", ".......vvv......vv...........vvv.v........", "......v......v....v........v.v.........v..", "..v......v.....v.....v....v............v..", "..v..v...v.v......v.............v..vv.....", "....v..............v.....v......vv....v...", ".v................v...........vv.v.vv.....", ".v...........v................v..v...v....", "...v.......v......v....v..vv..vv....v...vv", "v..v.v.v...v........v......vvv......vv...v", "..vv.......v.v.v.........v............v..v", "...v........v..........vv.....v.....v.....", "...............v.v..v..v.....v............", ".v..v....v....vv...vv.v....v...v..v...v...", ".........v......v.v....vv.......v.........", "....v..v...v.....v...v....vvv.........v...", ".v..v.v..v.......vv.v...vvv..........v....", ".v...vvv.............................v....", ".v...vv......v..v..vv...vv..........vv....", "......................v....v............v.", "............vv....v...v...................", "..v...................v..........v........", ".v..v..v.....v.v.vv...v...v...v.......v...", "...............v.v.v..................v...", "..v.v.........v..........v..v....v...v....", ".v......v.v...v..vv...........v...........", "v............vv....v.........v...vv.v.....", "..v.........v....v.......v......v.........", ".....vv................v............v....v", ".......v......v..............v............", "........v............v.v..................", "....v.v......v................v...........", ".vv......v.....v.v..........vv..vv..v...v.", "v.v...........vv.........v.v.v.....vv...v.", ".....v.......v...v......v.................", "............v.......v...v................."};
    int dist = 4;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
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
    vector<string> field = {"v.v.vv.......v....v....v.vvv......v........vv", "v....v.v.......vv....v..........v.v..vv...vv.", ".........vvv.v.v.v.......v.....v...........v.", "vv..vv.............v....v........vv..........", "...vvv..vvv.....................v.......vvv..", "....v.....v...vv......vvvv.........vv...vv.v.", "...v..v...vv.v.v......v.......v.v...vv..vv...", "v.....v.v....vvv....v.v..v........v....vv....", "....v.vv........v......vv...vv.v..v..........", "..v...v.v....vvvvv..vvvv.v..v.v.vvvv.........", "...v.v.....v.......vv.v...v.v...vv....v...vv.", "v.vv...........v..v...........vv.........v.vv", ".v...vvv.....v.v......v.vv......v....v..v....", ".v.v.v....vvvv.v...vv.v.vv...vv.....vv......v", "v...v.v.........vv.......vv........v...v.v..v", "v....v.........v..vvv...vv.vv..v...v........v", "...v.....v.v.v.v..vv.vv.v..vv.v...v.....v....", "..vv......vv.v..v..........vvv...v.vv.....v.v", "..v................v...v....v.......v..v.v.v.", "...v.v.v.....vv...v.vv..vv.v...v..vvv.....v..", ".......v....vv..v.v.......v....v......vv....v", ".v.v......vv.vv.v.....v....v...vvv...v.v.....", "...v.............vv..v....v...v...v.v........", ".v..v.....v..vv......v....v.v....v.v.vv...v..", ".......v...............v....v.......v..v.....", "....v......v.....v....v...v......v.vvvv...v..", "v.v...v...vv......v...v.vv.....v.............", ".v.v...v......v.........vv..v...v......v..v..", "..v.vv.v......vv.v........v.vv......v.....v..", "......v.v..v.......v.....vv...v...v.v.v.v.v.v", ".v.............v..........v.....v...v........", "...vv.v...vv....v....v...vv...v.v..v..v.....v", "v.vv.vv...v.....................v.v.vv...v.v.", ".v..v............vvv.v.....v.....vv....vv...v", ".v.....vv.vv......v.v....v.vv..v..v..........", ".......vv.......vv.......vv.v...........v.v..", "..v.vv..v..v..vv....v.......v..v..v......vv.v", "..vv.........v...v.v..v.v.vvv..v...v......v.v", "..v......v...vv.....v..vv..v.v...v........v..", "v..v.....v....vv...vv.v..v...v.v.v.v.....v..v", ".v...v....v...v...v.....v..vvv.vv.....v...v..", "v.v.......v...v........v..v...v......v......v", "..vv.....v...vv.v........v.vv.v......v..v...v", "........v......vv.....vv.v.....v...v........."};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 792845265;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> field = {"...v...vv.........v.......v.vv......v..v.......", "..v.....v.....v......vv.............v......v...", "....v.........v..v...vv.v.............vv.......", "..v.....v..v............v...................vvv", "v........v...v....vv......vv..v.............v..", ".................................vv............", "...........vv...........................vv.v.v.", "....v.v................v.......v...v....v......", "...v............................v.......vv.....", ".....v......v..........vv.......v....v......v..", "v.v......v......vv.v.vv.v........v.............", ".........v.......v........v...v........v.....v.", "v...vv.............................v...........", ".....v.v....v.v...v.........v.v..vv.....vvvv.v.", "vv..v......v..v......v.v..vvv..v........v......", "...v....v...v....v......v...................v..", "...v.v...v.v.v.v...v....v........v.........v...", "...................................vv..vv.v.v.v", "...v.......v..............vv..v................", ".v...........v..............v......v...........", ".....v.........vv.....v................v.vv....", "..........v.......v.........v...v..............", "..v.....v....v...v..v......v...v.v......v....v.", "v..............v....v.....v..v..v..............", "...........vv..v.....v...vv.......v.....v......", "v.v....................v.......v...v..........v", ".....vv....................v......v.v..vv..v...", "v...........................vv......vvv......v.", "....v.v.......v..........v.....v..v......v...v.", ".......v.....vv....v...vv........v.v.vv........", ".......v....v........vvv.........v......v.v....", "..................vv.....v.v.....v...v.........", "............v.................................v", ".....vv...v.........vv......v.........vv.......", "....v.............v.......v............v..v....", ".v..............vvvvv............v...v...v.....", ".....vvv.................v..v.v..............v.", "...v...v.......vv....v...............vvv...v...", "......v.......v.........v..........v...........", ".........v........vv.........v.v.....v..vv.v.v.", "...............v.v.....v..vvv.v..v.......v.....", ".......v...v...........vv.v....v......v.v..v...", "........v............v....v.v..v...............", ".........v..v...vv...v............vv....v......", "v...v.v..........v.vv.......v.......v....v.....", "..................v........v...................", "v...vv.v...v.v.v.v........v..v...v......v.....v", ".vv...........v..........vvv....vv...........v."};
    int dist = 3;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 134217727;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> field = {"vvvvv..vvvv.vvv..v..v.....v...v..v.vvv....v.vvv.vv", "v.vvv.vvvv.....vv.vvv.vvv...vvvvvv.....v.v..v..v.v", "v.v..v.....v..vv.v...v..vvvv..v.v..vvv.v.vv.vv....", "v.vvv.vv.vv..v.vvv.vvvv..v...v...v...v..vvv...vv.v", "vvvv...vv....vv..vvvvv....v...v..vvvvvv.....v..vv.", ".vv.v.vv.v.v...v.v...v.vv...v.v.v.vvvv...v..v.v.v.", "....v..v...vvv..v.....v.vvvv.v...v.v..vv..vvvvv.v.", ".vvvv.v.vvvv...vv.vvv........vv..v.vv.v.v...v..vvv", ".vvv.v..vvv...vvv.vvv.vvv.vvvvv...vvvv.v.v.....v.v", ".v.vv.vv..v.v.vvv.vv.v....vvv.vv.vv.vvvv...v.v...v", "....v..v.vvv.v..vvvvvv.....v..vv...v...v.vvvv.v..v", "..v.vv.vvv..v..vv.vv.vv...vv.v....vv.v.v....vvvvv.", "v...v..vv..vvvv.vvvvv..v.v.v..vv.v.vvvv..vvvvvv..v", "....vv..v.v.v...vvvvvvv....vvv.vvv.v.v.v.v.vvvvv..", "vvvv.vvv.vvv.vvvvvv....v.vv...v..v.vv....vv.vv.v..", ".vv.v..vv.......v...v..vvvvv.v.v..vv..vvvv.v.vv..v", "vvv..v.vv...v...vv.vv..v...v.vvv..vvv.....v....v.v", "....v.v..vv..vv...v.v.v.vvv...v.vvvvvv..vvvvvv..vv", ".v.v.v.vv.v..vvvvv.v.vvvv....vv..v.vv...vv.v..v..v", "...v.v...v........vv..v.vv...vvvv.v...vv..v...vv..", ".v.vvvv.v...vv....v.vvvvvv.v.vvvvvvv..vv.....vv.v.", "..vv..v......vvvvvvvvv...vvvvvvvvv..vvvvv.v....v..", "..v.v.v...vvv.v.v.vv.vv.vv.v.vvv.vv.v.vvv.v....v..", "vvvvvvvvvvv..v.vvv.vv.v.v.vv.vvvvvv.v...v...vvv.vv", "v..v.vv.v.vvv...vv.v..v.vv....v.vv.v.vvvv..vvv.vvv", ".v..vv...v.v.vvvvv.v...vv.vv.v.....v...vvvvv.v....", "...vvvvvv.v.vv.vv.v..v.vvv.v....v.v..v.v..vvvvv...", "vv..vvvvv...vvv..v...vv.v.v.vvvv....vvvvvvvv...v..", "vv..vv..vv.vvv.v.v..v.v.......vvv.vvv..vvv.v.v.v..", "vvv.v.v....vv.v.v.v.vv..vv..vvvvv.v...vvvvvv.....v", ".vv.v.v.vv...v...vv..v.v.v..vvvv.vv..vv...vv...vv.", ".vvvvv..v.....v.vv.vvv...vv...v...vvv.vvvv.v.v.vv.", "vvvvvv.vv.v..v....v.vvvvvvvvvvvvvvvv.vvv..vv.v...v", "..v.vv..vvvv.vv.vv..vv..vvvv.vv.vv..vv.vv....v.vv.", "..v..vv......vvvvv...vv.v....vv..v..v..vvv.vv.v...", ".v..v...v.v.vv.vv.v..vvv.v.v.vvvvv.vvvvvv....vv.vv", ".v.vvv..vvv.vvvv..vvv.vvv.v..v.vvv.vvvvv.vv....v.v", ".vvv.v..v...v..v..vvv.v.....vvvvvvvvvv.v...vv.vvvv", "vvvvv..v...v.v...vv..vv..v.vv..v...vv..v.vvvvv..vv", ".v..v.v...v.vv..vvvv....vv...v....v..vv.vvvvvvv..v", "v.vvvvvv.v.vvvvvvv...v.v.vvvvvvv.vvvv.vv..v..v..vv", "vvvv..v.v.v...v.v..v..v..v.vvvvvv.v...vv.v.vv.vv..", ".vv.v..vvv.v...vvvv..vvv.vv...vvv..v.vv.....v.v...", ".vvv.vv...vvvv....vv...v.v....v.v..v..vvv.v..vv.vv", ".vv...v.vvv.....v..vv.v.v...v.vv...vvv.v...v.vv.v.", "vv.vv....vvv.vv..vvvv..vvv.....vv.v...vvvvv.v..v.v", ".vv.....vv.v.vvv...v..vv.v...vvvv..v.v.vvvv..vvvvv", "v.v.vv...vv..vvvv..v..vv...vv...vvv.vvvvvvvvvv.v.v", "vvvv..v.vvv...vvvvvv...vv....vvvv....vv..vvvv..v.v", "v.v....vv.vv.v.v.v...v.....vvv.vvv.v...v.vvvvv.vv."};
    int dist = 0;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 136521846;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> field = {"v.vv.....v...vvv..v...v.v.....v...v..v.v..v.....v.", ".v...vv...vvv.v.....v.v...v..vv...vvv.....vvv.....", "..v.v........v..v.v.vvv.vv...vv.vvv...vvvv....vv..", ".....vv...........vv....vvvvv.v..vv.vvv...vvvv....", "...vvvvvvv..v..v.........v.v..v.vv.v.v...v.v...v.v", "....v.v.v.v.......vvv..v..v...v........v...v.....v", "v....v..v.vvv....v.v..v..vv......vv....vv....v.v..", "v.v...vv...vv...v.v...vvvv.v.......v.v..v..vvv..vv", "..vv...v.v.vv......v...v...v...v....vv.v.....vv.v.", ".v..v.....v...vv.v.vvv...v.vv..v.v....v....v.v...v", ".v.vv.vv...v.v...vv...v.......v..v.v.vv.v.....v...", "v...vv.vv..v.v..........v.v.v..v.v...v.v...v....v.", ".v.v..v..v..v...v....v.vv.vvv.....v..vvvv.v..v.v.v", "vv.....v.....v..vv.v...v..vvv.vv.v...v..vv.v...vv.", ".........vv.vvv..v...v.vv.v.vv.vv..vv.vv....v...v.", "v...vvv..vvvv.v..vvv.v...v..v.v.v......vv..vv.v.v.", "v..v.....v.vvvv..v...vv....v.v.v...v.v...vv......v", ".vv.vv...v.vvvv...v....vvv.vvv..v....v..v...vv.v.v", ".....vvv..v..vv..v.v.vv.....vvv.vvv..v...vvv.vvv..", "vv..vv.v.v.v..v.v....v.v.vvv..vv.vvv......vv.vvv..", "......v.....v.v.........v.v..v...v.v..v.......v...", "v.....v...v......vvv.vvvv.v.v....vvv.vv...vv.v....", "v...v....v....vv..vv.v.......vv.v..v...v.vv.vv..vv", "v..v......vv.vv..v.vvv.vvvvvvv.....v.v.vvv.v...vv.", "vvv.......vv....v...v....v..vvvv....v.vv..v..v.vv.", "vv.........v..v...vv...v.v...v.....vv.vv.vv..v...v", ".v.v.v..vv..vvvv..vvv...v.vv...v.v.v.v....vv...v..", "...vvvv..v..v...vv.v..v.v..vvv....v...v.........vv", "v...v.v..vvvvv....v.vv..v.....v....vvvv.v...vv.v..", "v.vvv......v...v.....vvvv...vvv...v.vvv....vvvv..v", "vv...vvvv.v...v...vv.v......vv.vv...v.vvv.v.......", ".......v.v....v.v.v............v....vv..v.vv....v.", "v.....vv...vv.vv........v...vvv..v...vv......vv...", "vvv.....vv..vvvv.v.v.vvv..v.......v.v.vvv.v.vv.v..", ".v..v..vv..v.v.vv.v..vv.v..v...v.v..v.v....vv.....", ".........vv.vv.v..v.v.v.v......v.v.v.v.vv.vvv...v.", "...v.vv.v.vvv.v..v.v.vv.v.vvv...v..vvvv.v......vv.", "v.v.v..vvv...v.v...vv...vv..v.v.v....vvv.v.v...v..", "..v..v.......v..vv...v..v.....v.....v...v...v..v.v", ".vv.........vvvv.v.v...vv....vv.v.vv..v.v.v.vvv...", "..v.....vvv....v.v..........v...v.v.v...v.v.....vv", "..v..v.vv......v..vv.............v.v....v...v.v.v.", "......vv.......vv....v.v....v.......vvv.vv..vv..vv", "v.v....v.v..vv......vv......vvv.vv.v..v......v..v.", "v.vv.......v....vv.v...v...vvv.v.v.vv....v..v..v..", ".v.v...v......v.v.v.....v.vvv.v.vv..vv.v.vv.v.v.vv", ".vv.vv.....v....vvv..vv.vvv..vvvvv...v....v..v..v.", "v.vv..vv...v....v....v..v...v.v......v....v....v..", "...v.v.v.v...vvvvvv..vv...v...v....v.....v.v..v.v.", "...v....vv...vvv.vv.v.v...vv..v..v....v..v...v.v.."};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 830512694;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> field = {"..................v..v..vv...v.....v......v.......", "..v....v....v............v...v...v............v...", "..v....v...........v....v.v..v..........v..v.....v", ".v.v..vv.vvv.v.....v.v................v..........v", "..v...vv.....v....v....v.....v...v.....v...v...v.v", "....v.v.........v..................v...vv...v.....", "........................v......................v..", ".............v...vv..v...v..v..vvv.....v..v......v", "........vv.v..........v..v..........v..v.....v....", "........................v.............v...........", "...v........v..v..v...........vv.......v..........", "v.vv......v...vvv........vv...................v...", "vv.v......v.......v.....v......vvv....v.v.v.......", "....v.....v...........vv......v..v....v...........", "v.....vv..........v.............v......vvv.vv...vv", ".......v.........v............vv.............v.v..", "v.....v...........v..........v.....v.vv..v..v.v.v.", "..v......v.......v.v.v..vv.....v.....v.v..v.......", "...........v.v.....v...v............v.....v..v....", ".....................v..............v...v....v.vv.", "......v.v......v.................v.vv..v..vv......", "v.v......v.....v.vv....v.v...v.....vv..v.........v", "v.............v.v.v...v......v..v.....v..vv.......", "...v.....v....v..........vv..v.v.............v.vv.", ".....v...vvv....vv.....v...........v..........vvv.", ".....v.v..........v..v..............v....v.v......", ".v.......v.....v..........v...v.v.v..............v", "....v..v........v.v...........................v...", "...vv..............v.................v............", ".v.......v....v..v....v..v..........vv............", ".......v.....v....v.....v..............vv.vv......", "....v.v.v..........v..........v.v.v.v.vv...v....v.", "v..v.v...........v......v.......vv....v...v.....v.", ".....v.......v....vv.v........vv.v....vv........v.", "vvv.......v..v........v............v..............", ".......v.v............v.....vv............v.......", "..v..v.v.v......v....v........v.v......v..v.v.....", ".v......v..vv............vv.......v........v..vv.v", "v.........vvv.............v.vvv..........v.....v..", "..v....v..v.......................v.........vv....", "........v..v.vv.....v.............vv.v..........v.", "...........vv..v..............v..vvv........v..v..", "..v...vv.v..v..........v.......vv........v...vvv..", "....vv.vv.....v..v..v......v.....v........v.......", ".......................v................v.........", "..v...........v..........v....v....v.........v....", "...........v.....v..v....v...v...v.......v..v...v.", "v...v.....v.v......v............v..v......v.....v.", ".vv...v..vv...................vv.................v", ".vv...v........vv...................v....v........"};
    int dist = 0;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 338647360;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> field = {".....v..vv...........v...v.......v..v..........v..", "..............v........v......v....v...vv.........", "..v.......................v.............v...v.vv..", ".vvvv.......v..............v.......vv............v", "..................................v...............", "......................v.......vv....v.......vv....", ".........................v................v.......", "...v..v....v...v....v.........vv..v.v....v.......v", "........v..v.............v...v........v.......v..v", "..................v............................v..", "....................v.............................", "..........v...............v..v....v..............v", ".........vvv...................v.....v............", "............v...............v.....................", "......v........v.................v...v.vv.........", "v..v...........v.............v............v..v....", "...........................v....v.v...v...........", ".....................v...................vv.v.....", "..............v..................v....vv...vv.v...", "...........vv......v...........v...v....v........v", "..........v.........v.v.v......v.....v..v.v....v..", ".v..........v.v.....vv............................", "....v...v............vv....v..........v........vv.", ".v..........v.....v.......v....v..v...............", "..........v...................v.............v.v...", "v..........v...........v..................v....v..", "..v...v...........v....v..........................", "...v..........................v..............v....", ".......v..........v....v..........................", "................vv..............vv...v............", "...v...vv...............................v.....v...", "..v.................v......v.v......v.........v...", "....v....v.........v..vv...v..v....v..v...........", "........v...v..v..v...v.....................v.....", "......v.........v..v..v.......v....v.........v....", "....................................v.v...........", "v...v...............................v.......v.....", "..............................v.....v........vv...", ".................................v..v............v", "..................v...v....v...........v.v........", "..v...v................v.....................v....", "............v........v...........vv...............", ".......v...v.v...............v.........v....v..v..", "............................v.v....v...........v..", "....v.......v...............v................v...v", ".v............................v..v................", "v..v.v....v.....v.v.v....vv.....v...............v.", ".......v.......v...v.......v..v.v.vv.....v........", "..v..v.....................v....v.................", ".vv....v............v.......................v....."};
    int dist = 4;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> field = {".v.v..v.v...v..v.v.v.v...v.v.v..v..v..v.v.v.v.v.v.", "v.v.v..v..v..v..v.v.v..v..v....v.v..v..v.v.v.v.v.v", ".v...v..v..v..v..v.v.v...v..v.v.v.v...v.v.v.v.v.v.", "v..v..v...v.v..v..v.v..v...v.v.v.v.v...v.v...v.v.v", "..v.v...v..v..v..v.v..v.v.v.v.v.v....v..v..v..v.v.", ".v.v..v...v..v.v..v..v.v.v...v....v.v.v...v..v.v.v", "v...v..v...v..v..v..v.v.v..v...v.v.v.v.v.v.v....v.", "..v..v...v...v..v.v..v.v..v...v.v.v.v.v.v.v.v.v..v", ".v..v..v..v.v..v....v.v..v..v..v.v...v.v...v.v.v..", "v..v..v..v.v..v..v.v....v..v.v.....v..v..v..v.v.v.", "..v..v..v.v.v..v..v..v.v.v..v.v.v...v...v.v..v.v.v", "v...v.v....v.v...v.v....v.v....v..v..v.v.v.v..v.v.", "..v....v.v..v.v.v.v.v.v....v.v..v...v.v...v.v....v", "v..v.v..v..v.v.v.v.v.v.v.v..v.v..v.v.v..v..v.v.v..", ".v.....v.v..v.v.v.....v....v.v..v...v.v..v..v.v.v.", "v...v.v.v..v.v.v..v.v...v.v.v.v...v..v.v..v..v.v.v", "..v..v.v.v..v.v.v..v.v.v.v.v...v.v..v...v..v......", "v...v.v.v..v.v.v.v..v.v.v.v..v..v..v..v...v.v.v.v.", "...v.v.v..v.v.v.v..v.v.v.v.v...v.v...v..v..v.v.v.v", ".v..v...v....v.v..v.......v.v.v....v...v.v..v.v.v.", "v..v..v..v.v..v..v..v.v.v..v.v..v.v.v.v.v..v.v.v..", "..v..v..v.v.v..v...v.v.v..v.v.v..v.v.v.v.v..v.v..v", "v...v.v..v.v.v..v.v.v...v..v.v..v.v.v.v.v..v.v.v..", ".v.v.v.v..v.v..v.v....v...v.v..v.v.v.v.v..v.v.v..v", "v.v.v....v.v..v.v..v....v..v..v.v.v...v.v..v.v.v..", ".v.v..v.....v..v.v...v.v..v..v.v.v..v..v.v....v..v", "v.v..v..v.v..v....v.v.v..v..v.v.v.v..v....v.v...v.", ".v..v.v..v..v...v....v..v.v..v.v...v..v.v..v..v...", "...v.v.v...v..v....v..v..v.v..v..v...v...v..v..v.v", "v.v.v...v....v.v.v..v..v..v..v..v.v.v..v..v...v.v.", "...v..v...v...v.v.v..v..v..v..v..v.v.v..v...v..v.v", ".v...v...v..v..v.v..v.v..v...v.v..v.v.v..v.v..v.v.", "v..v...v..v..v..v.v..v.v...v..v.v..v.v.v..v.v..v.v", ".v..v.v..v.v...v.v.v..v.v.v.v..v..v.v.v..v.v.v..v.", "...v...v..v..v....v..v.v.v.v.v...v......v.v.v.v...", "v.v..v..v...v.v.v..v..v.v.v.v.v.v..v.v.v.v.v.v.v.v", ".v..v..v..v..v.v..v.v..v.v.v.v.v..v.v.v.v.v.v...v.", "v..v.v...v..v.v..v.v..v.v.v...v.v..v...v.v.v..v...", "..v.v.v.v.v..v..v.v.v..v.v..v..v..v..v..v.v..v.v.v", ".v.v.v.v...v..v..v.v..v.v.v..v...v.v..v..v..v.v.v.", "v.v.v.v..v...v..v.v.v..v.v.v..v.v.v.v..v...v.v.v.v", ".v.v....v.v.v.v..v.v.v..v.v.v..v...v.v..v.......v.", "..v..v.v.v.v.v..v.v....v.v.v..v..v..v..v..v.v.v..v", "v..v..v.v.v.v.v.....v.v...v..v.v..v..v...v.v.v.v..", ".v..v..v.v.v...v.v.v.v..v..v..v..v.v..v...v...v..v", "...v..v.v.v..v..v.v.v..v.v..v...v.v.v...v...v..v..", "v.v..v.v.v..v..v......v...v..v.v.v...v.v...v.v...v", ".v..v.v.v.v..v...v.v.v..v..v....v..v..v..v..v..v..", "v..v.v.v.v.v..v.v.v.v..v.v..v.v..v...v..v.v..v...v", ".v..v.v.v.v..v.v.v.v..v.v.v..v..v.v.v..v.v..v.v.v."};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 477560566;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> field = {".v..v..v...v....v...v....v.......v....v...v..v..v.", ".........v....v...v........v...v...v..............", "......v.....v..........v.....v.........v...v..v..v", "..v.................v....v......v........v........", "v........v......v.....v.....v........v.......v....", "....v..v...v.......v......v...v....v...v..v......v", "..v..........v...v...v......................v.....", "........v..............v....v..v..v..v.........v..", "v..v..v....v...v..v......v................v..v....", ".........v...v......v........v..v.......v........v", ".v.....v...............v...v......v...v.....v..v..", "...v........v..v..v..v...v..........v.............", "........v....................v...v......v..v....v.", "v...v...............v...v......v...v.........v....", "......v....v..v...v........v...........v..v....v..", "..v.............v....v...v........v..v............", ".......v....v.................v.........v.......v.", ".v..v....v.......v..........v...v..v..v.....v.....", "......v......v.....v...v..v..............v....v...", "v.........v.....v............v....v....v...v....v.", "...v...v..........v........v...v..................", ".....v...v.....v.....v...v.......v..v....v..v.....", "..v.........v...............v.........v.........v.", "v.....v...v...v...v....v......v....v......v...v...", "...v............v...v......v.....v......v........v", ".v...v...v..v...........v............v.......v....", "..............v...v..v....v..v..v.........v....v..", "v.......v..v....v......v............v..v....v....v", "...v..v......v.............v...v..v...............", "..........v....v..v..v...v...........v..v..v...v..", ".....v......................v....................v", ".v.........v..v........v.......v..v...v..v....v...", "...v....v..........v.........v....................", ".....v....v..v...v........v..........v..v...v..v..", ".v.............v.....v..........v.........v......v", ".........v..v......v...v...v..................v...", "v...v..v......v..v...........v.....v....v...v...v.", "..........v..........v...v......v.....v...........", "...v..v......v.........v......v.....v........v....", "........v.......v..v........v....v.....v..v......v", ".v........v..........v..v......v...............v..", "....v.......v..v.............v.....v..v......v....", "v.....v..........v..v....v.......v.......v........", "..v.....v..................v................v..v..", "....v......v..v.......v........v.....v....v......v", "v......v...........v......v.......v....v.....v....", ".....v....v.....v......v.....v.............v....v.", ".v..........v.....v.............v.....v...........", "...v..v..v.....v....v......v..v.....v.....v....v..", "v..........v.....v....v..v........v.....v...v....v"};
    int dist = 2;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 14459117;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> field = {"v...v.......v...v.....v......v.....v......v.......", "........v.................v..................v...v", "..v...........v.....v..........v........v.........", "......v..........v.........................v......", "v...........v..........v..........................", "....v..............v.......v.........v.........v..", ".......v......v...............v...v.....v...v.....", "........................v.........................", ".v........v..........v................v..........v", "....v...........v..........v...v...v.....v........", "............v......v...........................v..", "..v......v...............v.......v................", "......v..........v....................v...........", "v....................v........v............v......", "....v...v.....v.........................v........v", "...........v..............v.......v...............", ".v....v............v......................v....v..", ".........v.....v......v......v......v.............", "...v.....................v.......v.....v..........", "v..........v........v......................v....v.", ".....v..........v......v......v......v............", "........v....v.............v......v...............", ".v.................v...................v.......v..", "......v........v........v......v....v.............", "...v..............................................", "v.........v..........v.......v.............v....v.", ".....v........v...................................", "..v..............v...............v....v.......v...", ".......v.................v....v...........v.......", "...........v....................................v.", "v....v..........v....v..............v.............", "........v....v............v.....v.................", ".......................v................v...v.....", ".v.............v....v................v............", "....v....v...................v...v...............v", ".............v............v.......................", "......v...........v....v.................v.....v..", "v...........................v......v..............", "....v......v....................v............v....", "....................v....v............v...........", "...............v.............v....v.......v.......", "..v....v....v.....v..............................v", ".......................v........v...v...v....v....", ".....v....v...............v.......................", "v...............v.................v.......v....v..", "...v.........v......v...v.............v...........", "......v......................v..............v.....", ".v.........v...v..................................", "....v...v..........v..............v......v....v...", ".............v........v....v...v......v..........v"};
    int dist = 3;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 928968774;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> field = {".v....v......v.........v...........v...........v..", "...................v.......v..............v.......", "................................v.....v...........", ".................................................v", ".......v.................v...................v....", "...........v....v.......................v.........", "..v.................................v.............", ".......................v......v...................", "......v......v....v.........................v.....", "v..........................v...........v..........", ".....................v..........v................v", "..................................................", "........................v....v...............v....", "..v.......v....v......................v...........", "....................v.....................v.......", "...................................v..............", "........v........v........v...................v...", "................................v......v..........", "..v...............................................", "..............v.........v.................v......v", "..................v...............................", "....v..............................v..........v...", "...........v..........v...........................", "...............v.............v....................", "......v............v.................v..........v.", "v........................................v........", "............v..............v....v.................", "........v........v..........................v.....", ".......................v.........................v", "....v.................................v...........", "v............v....................v...............", "............................v..............v......", "........................v.......................v.", "..v......v.........v..............................", "................................v.......v.........", "...............v..................................", ".....v.................v..........................", ".v.........v................v.......v........v....", "....................v.............................", "........v......................v..........v.......", ".................v......v........................v", "....v.................................v...........", "...........................v.................v....", "v...........v........v...........v................", ".......v................................v.........", ".................v..............................v.", "...v......v............v....v.....................", "..............v...................................", "...................v.................v.......v....", "v.....v...................v....v.........v.......v"};
    int dist = 4;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 559264553;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> field = {".................v.....v...........v..............", ".v........v.................v.....................", ".......................................v......v...", "....................v.............................", ".....v.........v................v.................", ".................................................v", ".........v.................v......................", "..v...................................v......v....", "..................v...............................", "........................v......v..................", "...........v......................................", ".....v..............................v............v", "................v..........v......................", "v.................................................", "......................v...................v.......", "........v.......................v.................", ".............v....................................", "...................v...........................v..", "..v.................................v.............", "..........v.............v..................v......", "..................................................", "...............v............v.....................", "v......v...............................v..........", ".....................v.........................v..", "...................................v..............", "...........v.............v........................", "...v..............................................", "..................................................", "........v......v...............v.........v........", "....................v...........................v.", ".v.........................v........v.............", "............v.....................................", "............................................v.....", "......v.........v.................................", ".........................v........v...............", "..v......................................v........", "....................v........v...................v", ".............v....................................", "........v.........................................", "v...............................v...........v.....", "...........................v.........v............", ".....v..........................................v.", "...............v.......v..........................", "..............................v...................", "........v..........v.......................v......", "..........................v.......................", "v.................................v...............", "..............................................v...", "............v................v..........v.........", "...v..............v.....v........................."};
    int dist = 5;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 936761608;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> field = {"..v.......v.................................v.....", "..................v..............v................", "..................................................", "......v..................v........................", ".............v...........................v........", "v................................................v", "....................................v.............", "....................v.............................", "..........v................v......................", "..................................................", "................v..............................v..", "..................................................", "...v....................v.........................", "...........................................v......", "..................................v...............", "..........v.......................................", ".......................................v..........", ".....v................v.......v...................", ".................................................v", "..................................................", "...............v..................................", "v.......v..................v................v.....", "..................................................", "......................................v...........", ".......................v.......v..................", ".....v............................................", "..............................................v...", "...............v...................v..............", "..........................v.......................", "..................................................", ".....................v............................", ".......v..............................v...........", ".v................................................", "................................................v.", "...............v..........................v.......", ".............................v....................", "..................................................", ".........v........................................", "v........................v........v...............", ".................v................................", ".........................................v......v.", "............v.....................................", "......v...........................................", ".....................v.......v....................", "..................................................", "..v...............................................", ".................................................v", "..................v...............................", ".....................................v............", "......v......v..........v......v.............v...."};
    int dist = 6;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 658752035;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> field = {".........v.............v..........................", "..............................v.........v.........", "..................................................", "...v..........v...............................v...", "..................................................", "..................................................", ".....................v............................", "............................v.......v.............", "..................................................", "........v.................................v.......", ".................................................v", "................................v.................", "..v...............................................", ".......................v..........................", ".............................................v....", "................v.................................", "............................v.......v.............", "......v...........................................", "..................................................", "............v.....................................", ".v..................v.............................", "................................v.................", "................................................v.", "........v.................v.......................", "........................................v.........", "..................................................", "..................................................", ".............v.......v............................", "...v...............................v..............", "..................................................", ".............................v..................v.", ".................v................................", ".......v..........................................", ".......................................v..........", "..................................................", "............v........v...........v................", ".v................................................", "..............................................v...", "..................................................", "..................................................", "..................v...............................", "....v.............................................", ".........................v.........v..............", "............v.....................................", "................................................v.", "........................................v.........", ".....................v............................", "................................v.................", "v.................................................", ".......v.......v..........v.................v....."};
    int dist = 7;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 533524784;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> field = {"..........v.......................................", "...................................v..............", "............................................v.....", "...................v..............................", "...........................v......................", "..................................................", "..v...............................................", "..................................................", ".................................................v", "......................................v...........", "........................v.........................", "...........v......................................", "..................................................", "..................................................", "..............................v............v......", "....................v.............................", "......v...........................................", "..................................................", "....................................v............v", ".............v....................................", ".v................................................", "........................v.........................", "..................................................", "........v.................................v.......", "..............................v...................", "..................................................", "................v...............................v.", "....................................v.............", "v.................................................", "..................................................", ".....................v............................", "...........................................v......", "............................v.....................", ".....v............................................", ".................................................v", "..................................................", "..................................................", "...........v.......................v..............", "..................................................", "..................................................", "...v.....................v........................", "..................................................", ".............................................v....", "..................................................", "...............................v..................", "..................................................", "..................................................", ".....v..........v.................................", "..........................v.......................", "...................................v............v."};
    int dist = 8;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 23240158;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> field = {"...........v......................................", "...........................................v......", "..................................................", "........................v.........................", "...................................v..............", ".v................................................", ".................v................................", "..................................................", "..................................................", "..................................................", "..........................................v.......", "..................................................", ".........v........................................", ".................................................v", "..................................................", "..................v...............................", "............................v.........v...........", "...v..............................................", "..................................................", "..................................................", "............................................v.....", ".......................v..........................", "..................................v...............", "..................................................", "..........v.......................................", "..................................................", "..................................................", "................................................v.", "..................................................", ".....................v............................", "..v.............................v.................", "..................................................", "..................................................", "..................................................", "............v.....................................", "..................................................", ".......................................v.........v", "..................................................", "...........................v......................", ".v................................................", "..................................................", "..................................................", "...................................v..............", ".......v.............v........................v...", "..................................................", "..................................................", "..................................................", ".............v...............v....................", "v......................................v..........", ".................................................."};
    int dist = 9;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 589934535;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> field = {"...............v..................................", ".................................................v", "......................................v...........", "....v.......................v.....................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".v...............v................................", "........................................v.........", "..................................................", "..................................................", ".........v......................v.................", "..................................................", "......................v...........................", "..................................................", "..................................................", ".............................................v....", "...............v..................................", ".....v......................v.....................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................v...............", ".......................v..........................", ".........v........................................", "..................................................", "..................................................", "............................................v.....", "..................................................", "v.................................................", "..................................................", "...............v................v.................", "..................................................", ".................................................v", "..................................................", "..................................................", ".......................................v..........", ".....v............................................", "..................................................", "...................v..............................", "..................................................", "..................................................", "...........v......................................", "..........................v....................v..", ".v..................................v............."};
    int dist = 10;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 73741816;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> field = {"vv.v.vv.vv.v.v.vv.v.vv.v.v.vvv.v.vv.vv.vv.v.vv.v.v", "v..v.v..v..v.v.v..v.v..v.v.v...v.v..v..v..v.v..v.v", "v.vv.v.vv.vv.v...vv...vv.v.v.vvv.v..v.vv..v.v.vv.v", "v.v..v.v..v..v.vvv...vv..v.v.v......v.v...v.v.v..v", "v.v.vv.v..v..v.v....vv..vv.v.v.v..v.v.v..vv.v.v..v", "v...v..v.vv..v.v.v.vv...v..v.v.v.vv.v.v.vv..v.v..v", "v..vv.vv.v...v.v.v.v....v..v.v...v..v.v....vv....v", "v.vv..v..v...v.v.v....vvv..v.v..vv..v.v..vvv...v.v", "v.v..vv..v..vv.v....v.v....v.v..v...v.v.vv...v.v.v", "v.v.v....v..v..v..vvv.v..vvv.v..v.vvv.v.v..vvv.v.v", "v.v.v.vv.v..v.vv..v...v..v...v..v.v.....v..v...v.v", "v.v.v.v..v..v.v...v.v...vv.vv...v.v..v.v...v.v.v.v", "v.v...v.vv.vv...v.v...vvv..v..v.v.v..v.v.v.v.v.v.v", "v.v..vv.v..v...vv.v.vvv...vv..v.v.v.vv.v.v.v.v.v.v", "v.v..v..v..v..vv....v...v.v...v.v.v.v..v.v.v.v.v.v", "v.v..v.vv..v..v..vvvv..vv.v.vvv.v.v.v..v.v.v.v.v.v", "v.v..v.v...v.vv.vv.....v..v.v...v.v.v.vv.v.v.v.v.v", "v.v.vv.v.v.v....v..vv.vv.vv.v.vv..v.v.v..v...v.v.v", "v.v.v..v...v..vvv.vv..v..v..v.v..vv.v.v..v..vv.v.v", "v.v.v..v..vv..v...v...v..v..v.v..v..v.v.vv..v..v.v", "v.v.v..v..v...v.vvv..vv..v..v....v.vv.v.v..vv..v.v", "v.v....v.vv..vv.v...vv...v.vv.vv.v.v....v.v....v.v", "..v.vvvv.v..vv..v.v.v..v.v.v..v..v.v...vv.v.vv.v.v", ".vv......v.vv...v...v..v.v.v..v..v.v.vvv..v.v..v.v", "vv...v.vvv.v..vvv..vv.vv.v...vv..v.v.v....v.v..v.v", "v..v.v.v...v.vv....v..v..v..vv..vv.v.v..v.v.v..v.v", "v.v..v.v.v.v.v..v.vv..v.vv.vv..vv..v.v..v.v.v.vv.v", "v.v.vv.v.v.v.v..v.v...v.v..v..v...v....vv.v.v.v..v", "v.v.v..v.v.....vv.v.v.v.v..v.vv.vvv.v.vv..v.v.v..v", "v.v.v..v.v.vv.vv..v.v.v.v..v....v...v.v...v.v.v..v", "v...v..v.v.v..v...v.....v..v..v.v..vv.v..vv.v.v..v", "v..vv..v.v.v.v..v.v..v.vv..v..v.v.vv..v..v..v.v..v", "v..v..vv.v.v.v.vv.v..v.v..vv..v.v.v...v..v..v.v..v", "v..v.vv..v.v.v.v..v..v.v..v...v...v.v.v..v..v.v..v", "v..v.v...v.v.v.v..v.vv.v.vv.vvv..vv.v.v.vv..v.v..v", "v..v.v.v.v.v.v.v..v.v..v.v..v....v..v.......v.v..v", "v..v...v.v.v.v.v..v.v..v.v..v..vvv.vv.vv.v.vv.v..v", "v.vv.vvv.v.v.v....v.v..v.v..v..v...v..v..v.v..v..v", "v.v..v...v.v....v.v.v..v.v.vv..v..vv..v..v....v..v", "v.v..v.v.v....vvv.v.v..v.v.v..vv..v...v..v..v.v..v", "v.v..v.v.v..vvv...v.v..v.v.v.vv..vv.v.v.vv..v.v..v", "v.v.vv.v....v....vv.v.vv.v.v.v...v..v.v.v..vv.v..v", "v.v.v..v.vv.v..v.v..v.v..v...v.v.v..v...v.vv..v..v", "v.v.v.vv.v..v..v.v.vv.v..v..vv.v.v.vv.vvv.v...v..v", "v.v.v.v..v..v..v.v.v.....v..v..v.v.v..v...v.v.v..v", "v.v.v.v.vv..v.vv.v.v..vv.v..v.vv...v..v.vvv.v.v..v", "v.v...v.v...v.v..v.v.vv..v.vv.v...v..vv.v...v.v..v", "v.v..vv.v.vvv.v.vv.v.v...v.v..v.v.v.vv..v...v.v..v", "v.v.vv..v.v...v.v..v.v.v.v.v..v.v.v.v...v..vv.v..v", "v.v.v..vv.v.vvv.v.vv.v.v.v.v.vv.v.v.v.vvv.vv..v.vv"};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 640520039;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> field = {".v.vvvv.v.v.vvv.vv.vvv.v.vv.v.vvvv.v..vv....vv.v.v", ".v.v....v.v.v...v..v...v.v..v.v....v.vv..vvvv..v.v", "vv...vv.v.v.v...v..v..vv.v..v.v..v.v.....v.....v.v", "...vvv..v.v.v.vvv..v..v..v..v.v..v.v.vv.vv...vvv.v", ".v.v...vv.v.v.v...vv..v..v.vv.v.vv.v.v..v...vv...v", ".v.v.vvv..v.v....v....v.vv.v..v.v..v.v.v...vv...vv", ".v.v.v....v.v..v.v.v.vv.v.....v...vv.v.v.v.v..v.v.", "vv.v.v..v.v.v.vv.v.v.v..v.v.vvv..vv..v.v...v.v..v.", "v..v.v..v.v.v.v..v.v.v..v.v.v....v..vv.v..vv.v.vv.", "v.vv.v.vv.v.v.v.vv.v.v..v...v..v.v.vv..v..v..v.v..", "v.v..v.v..v.v.v.v..v.v..v..vv..v.v.v..vv..v..v.v.v", "..v.vv....v.v.v.v..v.v.vv..v..vv.v.v..v..vv.vv.v.v", "vvv.....vvv.v.v.v.vv...v..vv.vv..v.v..v..v..v..v.v", "v....vv.v...v.v.v.v...vv..v..v..v..v.vv..v.v..vv.v", "....vv..v.vvv.v...v.v.v..vv..v..v.vv.v...v.v.vv..v", "vv.vv...v.v...v.vvv.v.v.vv..vv..v.v..v...v.v.v..vv", "v..v...vv.v.vvv.v...v.v.v...v...v.v..v.vvv...v.vv.", "v.vv.v.v..v.v...v.vvv.v.v.v.v.vvv.v..v.v...vvv.v..", "v.v..v.v.vv.v.v.v.v...v.v...v.v...v..v.v...v...v.v", "v.v.vv.v.v..v.v.v.v.v.v.v.vvv.v.v.v..v...vvv.v.v.v", "....v..v...vv.v.v.v.v.v.v.v...v.v.v..v..v....v.v.v", ".v.vv.vv..vv..v.v.v.v.v.v.v..v..v.v..v.vv.vv.v.v.v", "vv.v..v...v..v..v.v.v.v.v.v..v.vv.v.vv.v..v..v.v.v", "v..v.v...vv..v.v..v.v.v.v.v.vv.v..v.v..v..v..v...v", "v.vv.v.vvv...v.v.vv.v.v.v...v..v.vv.v.vv..v.vv..vv", "v.v..v.v.....v.v.v..v.v...vvv.v..v..v.v...v.v...v.", "v.v.vv.v.v..vv.v.v.v..v.vvv...v.vv.v..v.v.v.v..vv.", "v.v.v..v.v.vv..v...v.vv.v...v.v.v....vv.v.v.v..v..", "v.v.v..v.v.v...v..vv.v..v.v.v.v...v.vv....v.v..v.v", "v.v.v.vv.v.v.vvv..v..v.vv.v.v.v..vv.v..v.vv.v..v.v", "v.v.v.v..v.v.v....v.vv....v.v.v..v..v.v..v..v.vv.v", "v.v.v.v..v.v.v.v.vv.v..vv.v.....vv.vv.v.vv..v....v", "v.v.v.v.vv...v...v..v.vv..v.vvvvv..v..v.v...v..vvv", "v.v.v.v.v...vv..v..vv.....v.v......v.vv.v...v..v..", "v.v.v.v.v..vv...v.vv...vv.v.v..v.v.v.v..v..vv.vv.v", "v.v.v.v.v.vv....v......v..v.v..v.v.v...vv..v..v..v", "v.v.v.v.v.v....vv.vv.vvv..v.v..v.v.v..vv...v.vv.vv", "v.v.v.v.v.v.v.vv..v..v....v.v..v.v.v..v..vvv.v..v.", "v.v...v.v...v.v...v..v..vvv.v.vv.v.v.vv..v...v.vv.", "v.v.vvv.v..vv.v.v.v.vv..v...v.v..v.v.v...v..vv.v..", "v.v.v...v.vv..v.v.v.v...v.v.v.v..v.v.v..vv..v..v.v", "v.v.v..vv.v...v.v.v.v...v.v.v.v..v.v.v..v...v..v.v", "v.v.v.vv..v.v.v.v.v.v.vvv.v.v...vv.v.v..v...v..v.v", "v.v.v.v...v.v.v.v.v.v.v...v.v.vvv..v.v.vv..vv..v.v", "v.v.v.v.v.v.v.v.v.v.v.v..vv.v.v....v.v.v...v...v.v", "v.v.v.v.v.v...v.v.v.v.v..v..v.....vv.v....vv..vv.v", "v.v.v.v.v....vv.v...v.v..v.vv.vv.vv..v..vvv...v..v", "v.v.v...v..v.v..v.vvv.v..v.v..v..v...v..v....vv..v", "v.v.v..v..vv.v..v.v.....vv.v..v.v...vv..v..vvv...v", "v.v.v.vv.vv..v.vv.v.vvvvv..v.vv.v.vvv..vv.vv...vvv"};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 124160284;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> field = {".vv.v.vv.vv..vv.vv..v..vv..vv.v.v.vv....vvvv....vv", "v..vv......v...v..v.vvvvv.vv..vvv.v.vv.vv.v...v.v.", "..v.v..v..v.vvv..v..v.v.v..vv....v.....v......vvv.", "v...vv...vv.v.v.v.v........vv.vv.....v.....v.vvvv.", "vvvv.v.vv...........v....v.v.....vv.v..vv...vv.v.v", "v.v..v..v.v..v.....v..vvv...v..v...v.v..v.vv..v...", "...v..v.v...v...v..v.v...v..v.vvv.v...vvv....v....", ".v.v.vv.v..v..v.v..v...v...v.....vv.v.v....v..v..v", "...v.....v.v.v..v..vv.v.vvv....v.....vv.....v...vv", "..v......vv....v....v...v.....v...v..vv..v.vv.vv..", "v.v.v.vvvv..v...vv.vv..v......vvv.vvvv.......v.v.v", "v.v.....v.v.....v.v.v..v.v.vvvv......v......v..v..", "...v.....v..vv.vv...v.....vvv..v...v..v.vv.vv.....", "v..v.v..vv.v...v.......vv..........vvv....vvv...v.", "v.vv...v.v..........vv.v.vvv...vv..v..vv.v...v.vv.", "v..v..v.vv....v...vv...v......vvv..v......v....v..", "v..v..vvv....v...vv..v....v...vv.v....vv...v.vv.v.", "v..v..v.....vv...vv.......v...vv....v..v..vv.v..vv", "v..v..v......vv.v.v..v..v.vv..vv......v...vv.....v", ".v.vv.v..v..vv....v..v....v...v.....vv..v.vv.....v", "....vvv..vv.v.v..v...v..v..v..v...vvv..v.v.v....vv", ".vv..v...v..vv.vvv.v.v..v.v..vv...v......v.vv.vvv.", "vv...v...v.....v......v.vv.v...v.vv....v..v..vv...", "vv...v..vvv.vv..v...v...v..vvvv.vv....vv.vv...v...", ".v..v...vv..v..vv.....vv.v....v.v....v..v....vv..v", ".vv.v.v..v...v..v...vv.v.v..v........vvv.....vv..v", "vv..v..vv......v....v..v.......v...vvv..vv...vv..v", ".vv..v.v..v..vv.vv..vv.......v...vv..v......vv...v", "vv...vvv....v..vv..vv..vv..vv...v...v...vv..v....v", "v.....v....v..v.v.............v..vv.....v..v....vv", "vv..v.v...vv....vv.vv..vv...v..v.v.....v.......vv.", "v..vv.v....vv.v.v..v.v.v..vvv.vv.v.........vv.vv.v", ".........v......v...v...v...v.......vvvv..vv..vv..", "...vv..v.vvvv.v..v.v....v..v...v..v.v....vvv...v..", "..vv..v.vv...vv.vv..v...v..vv....vv.v.........vv..", "..vv..........v..v..v.v.v..v..vv..v.....vvvv..v...", ".vv......v..v.v..v..v......v.....vv....vv.....vv..", "...v.....v.v..v..v..vv...v..v.vv...v..vv...v..v..v", "..v..v..vv.....v....vv.....v.vv..vv..vv.....vvv...", "..vvv.v.v.v...v..vv.v....vv.vvvv..v.v..v..v..vv..v", "v.v...v.v...vvv.v....v...v..v.vv.vv........vvvv..v", "v.vv.....v.v.....v...v.v.v........v..v.v..v..v...v", "...v...v..v........v.vv..v..vv.v..v..vvv.v..v....v", "v..vv....vv...vv.vv..v.v.....vvv..vv.v.v...v..v.vv", "..v...vvv....vv..v..v....vv...v...vv.v.......v.vv.", "vv..v...v.v..v....v...v...vv.vv...v...v.v..vv..v.v", "...v..v.......v....vv..vv........vv.....v.vv......", "vv...v...v...vv.....v..v..v...v...v...vv...v......", "vv.v..v..vvvvv...vvvv..v....vvv.v.v..vv..v....v.vv", "v.v.vvv.vv..v.v..v..vv.v..vv...v.vv..v....vvv.vvv."};
    int dist = 2;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> field = {"..vv..vv...v.vv....vvvv..vvv...v.v.vv..v..v..vvv.v", "v...vvv.vv.v.vv.......v..v.v...v...v..v...v.vv...v", "..vv.v...vvvv......vv....v....v...v.....v.v.v.v...", ".v..v....vv.......vvv..........vv..........v..v...", "v.....v..vv.......vv......vv.v.v.......v...v...v.v", "..v........v.....vv.v.....v....v.........vv......v", "......v..vv.....v..v....v..vv.v.....v..vv...v...v.", "..v..v..v.....v...v.......vv.......v..v.v.........", "v.v.v..v.........v...............v.....vvv......vv", "v.v...v....v.....v.....v.v.........v..v.v.....v...", "v.......v....v.v....v.v..v.vv..v.v...v...vv...v.vv", "v.....v........v.vv...v.v......v...v...v.v....v...", "v..........v.v.......v............v..v........vv..", "v...vv.v.....v.v.....vv.........v.........v.....v.", "v...v......vv....v........v...v.v..v.....v.....v..", ".v..v.....vvv.v...v.v.v...v.vv..v..v.....v.v.v....", ".v..v....v..vv......v.....v.........v..vvvv....v..", ".v....v.vv........v......vv.....v.......v.....v..v", "v.v.....v...v...........v.........v.vv..v.........", "v....vv...........v...v.......vv....vv...v.....v.v", "v..v.v.......v.v..v.v.v..v.v..v.........v...vv....", "....v..v.v...v......v.v..v.........vv.....v....vv.", "....v.v....v.vv.v.vv..vv.......v...v.....v...v.v..", "....v..............v....v.v.....v.v.v..vvv...v...v", "..vv..........v..v....v.........v.v.v...v.....v...", "..v.....v....v......v......v..vv.......vv........v", "........vvvvvv.v.........v....v..................v", ".vvv...vv....v.........v....v.v...v.....v...v..vv.", ".vv...v.v.....vv..v.vv....v............vv...v..v..", "v.v.....v......v....v..v..v..v.....v..vv....v...vv", "v.v....v....vvv...vv............v.v....vv...v...v.", ".v....vvv...v.v.v.............v.v......v....v...v.", "......v...v.....v.....v....v..v......v.vv..vv...v.", ".......v.....v..............v.......v..v........vv", "...v..v.v.......vv..v.v.......v.......v.....v...v.", ".v.v.vv..v......vv....v...vvv...v.v..v......v.....", ".v.v.....v..v.vv....vv........v.....vv.......v.vvv", "v.......v...v.............vv....v..v.......vv.....", ".......v.v.....v........v.........v.v....v.v.vv.v.", "...v.....v.v.........v....v...v....v.......v..v..v", "vv.v..vv.....v..v...v...vv........vv...v.........v", "...v..v..v......v..vv.v.v.v..v....v..v....vv...v..", "v...v...........v..v..v.....v.....vv..vv..v.......", "v.v....v.....vv..........v....v.....vv..........v.", "....v.....vv....v...............vvvv.v....v....v..", "v.....v...v...v...v...............vv...vv...v..v.v", "v.....v.......v......vvvv.....vvvvv.vv...v.v...v..", ".v.vv.v..vv.....vv...v.......v.......vvv.......v..", ".v...vv....vv.vv..vvv.v.v..vvv.v.....v..vv..v.v...", "vvv.v.....v...v.vv...vvv.....v.........v...v....v."};
    int dist = 3;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> field = {"...v.....vvv.v...v.vv.v..v...........v...v.vvvv..v", "..v.....vvv.....v.vv.v..v..v....v.vvv...vvvv.....v", "....v..v........vvv..v.v.vv...vv..v.v...v........v", "...v...vvv.....v.v........v...v.vv.....v.v........", "v..vv.........v.vv........v..v..................vv", "...v....v......vvv.....v.......v........v...v...v.", "v..vv...v....v.........v.v.v..v...v.....v.....v..v", "........v....v.vv....vvv...v......v...v.v...v..v.v", "...vv..v.......v.....vv.......vv.v...v......v...vv", "..v.........vv.v....vv..........v.....vv.v..v..vv.", "vv......v.v....v....v......v...v..v.....v....v..v.", "...v........vv..v..vv.......v.........vv.vv.v...v.", ".v....v.v....v.....v......vvv.v.v.v...vv........vv", ".v..v.vv..v....vvv.v......v.....v...v.vv.v.....v.v", "....v.vv.v....vvv.v.....vvv......v....vv...v.....v", ".v..v........vv.v......vv.v...................vvv.", "v..v..........v...........v......vv.v.v....v.....v", "..v..........vv........v.vv...vv.v....v....vv..v..", "...v..v.v....v.v..v..vvv.v.......v.......v.v..v..v", "vv......v...v.v.....vv....v...v.......v....v.....v", "...v...v.v.v..v.................v....vv.v.v......v", ".v...v.v.....v.....v...........v..v..v....v.....vv", "vv......v.v..........vv..vv...v......v.....v......", ".....v...v...v....vv....vv......v.v.......v.....vv", "v....v.....v.vvv.vv.....v....vvv...v..v..vv.v....v", ".....v....v.v...vv....v..........v.v.vv..v......vv", "v..vvv...vv......v...........vv...................", ".v..v.v..v...v.v.........v..vvv.....v............v", "...vv.....v...........vv.........vv........v..v..v", "vvv.......v.....v....v...v..vv....v....v..v...v..v", "....v...v.v..v.........v..........v..v....vv.....v", "v.......v.v....v.v.vvvv......v..vvv.......v..v.v..", "........v.v...v..v....v...v..v..........v.......v.", "v..v..v...v....v.......v........v.....vv..vv......", ".v.....vv......v...v.v....v................v...v.v", ".vvvv....vv.....v.......v.v.v.v..v.vvv....v.....vv", "...v.v.vv...v..vv.....v.v.......vv.....vv...v...v.", ".vv....v......vv...vv..........v....v......v...v..", ".v.............v.....vv.v.....v............vv....v", ".vv..v......v.v.....v...v......v.....v........v...", "vvv......v..v......v..........v....v.....vv.v....v", ".vv..v...v.v...v.......v....v.v....v....vv..v....v", "v........v.........v.....v..vv...v.v..v...v....vvv", "v.............v...vv.v.v.......v...v....vv......v.", "v..v..vv.vv....vv......v.....v......v..v........v.", "vv...vv..v....v...vv.........v.....v.v.v....v..vv.", "......vv.....vv.v......v...v.....v.v.v.........v.v", "v.............v.......v....v.vv..v.vv......v....v.", "vvv..vvv..vv.vv....v....v.vv.....v.v.v...v.v....v.", "vvv.vv.v...v.v....v..vvv...v.....vvv...v.vvvv.vvv."};
    int dist = 3;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> field = {".....v.v...v....v.v...vvv......vv....v.........v.v", ".v...v..v..vv.v..vv..v....v..v....v..v......vv.v.v", "v..v....v.v....vvv.....v.......v....vv....v.......", "v....vv...v.v..v..............v......v.....v....v.", "v......................v......v...v.......vv.vv...", "....v......................vvv............v.......", "......v....v............v.v....v.....vv...vv.....v", "v.v..v..v..v...v....vv..v...v......vv.....v.......", "vv.............v..vv...v...........v.....vv.....v.", "v....vv....v......vv.....v..vv..................vv", "....v........v..v..v......v.........v...v.......vv", "v...............v......v.....v....v.v......v....v.", "v.v....v....vv...........vv...v...v.v...........vv", "v....vv.....vv...v...................v..v...v.vvv.", "...........vv...v.......v...vvvv...v...........v.v", ".v...................v......v..v................v.", "v....v.v..v.............vv.vv.......v.....v.vv...v", ".v....v.....v.....v.v.v.v...........v..v.......v.v", "v..v....v.....v..v....v....................v.v...v", "v.v....v....v...vv...v.......v.......v..v..v......", "v......v..v.v....................v...v.....v......", ".......v......vv...........v.......vvv....v......v", ".v....v....v.....v....v..v.....v..........v.v...v.", "...v....v..........v..v....v.......v......v.....v.", "..v...v.....v.........v......v..v.vv..........v.v.", "...v..v..v......v.....v...vv..........v....v....vv", ".v.....v....vv..v..v.......v....vv......v...v.....", "...vv.....v...v.v...........v...............v.....", ".vv.....vv.v.v......v.vv....v..vv....v.....v....vv", "...v.....vvv........v.v....v.................v..vv", "........vvv...............vv.v..v.......v.v.......", "..vv..v..vv......v.v..........v......vv...v.v.v..v", "..v....v..v..........vv........v........v.....v..v", "...v..v..v........v..............v....v.........v.", "v.vv...........vv.v..v...v.........v..v...........", ".vv.............v.v...v..v.....v.v......v......v..", "vv...........v..vv....vv......v........v.vv...v..v", "vv......v...v...v..v...vv....vv.v....v.v......v.v.", "v.v.....v..vv......v....v.v........v..v......v....", "v..............v.v......v.....v..................v", "v.....v.v...v.....v.........vv.......v...v.....v..", "v.......vv.........................v.v.vv...v.vv.v", "...........v.v........v......v..............v.....", "v.....vv.....vv.....v....v.v.v...v..v.........vv..", ".....v...v...........v.v.v.v.......vv..v....v.v...", "...v.vvvv..........vv.........v..v............v.v.", "v....v.v..........vv..v.vv........................", "..v....vv.....v.....v.....vv......v........vvv..v.", ".vv.vv.v........vv.v...v......v...v...v..vv....v..", "vv..v........vvv.v.vv.....v.v.v.vv....v.vv..vv...v"};
    int dist = 4;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
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

int test41() {
    vector<string> field = {"...v......v.v..vvv.............vvv.v...v....v...vv", "......vv.v..........v..v.....v.v................vv", ".vv.v.....v...........v.v....v.v......v.v...v..vv.", "vvv.v...v........v......v..v................v.....", ".v....vvv......v.vv...v....v...................v..", "............v.v...............vv.......v..v..v....", "......................v...............v...........", "........v.................................v...v...", "....v...............v....v...........v.v....v.v...", ".v.vv...vv....vv...v........v.vv.v...v.v...v......", "...v...v.....v.........v......v............v......", ".vv......v...v...........vv..v....................", ".v..................vv.v.v..v.........vv.........v", ".v.....v......vv....v...v..vv...................v.", ".v.v.................................v.....v......", ".v.v...v...........v.v..........v.v....vv..v.....v", "v...........vv.v...vv............v...v.......v.vvv", "v.v....v.........v................vv...v........vv", ".........v.....vv..........vv.....v..........v..v.", "........v...........vv..v...v.vvv......v..........", "v.v..........vvv...........v.......v..........v...", "........v.....v..............v.....v........v.v..v", "......v.v.v...v..........v..v.......v....v.v......", "........................................v...vv....", "v....v.v.v..........v.v.....v.............v.......", "v...v......................v.......vv............v", "v...v.v.v......v.......vv.................v.v.v...", ".v..v.v..........v......vvv..v....v.v...v.v.......", ".v.............v............v..v............v...v.", "....................v.v............v..............", "................v.......vv.....v...v..v...v.v....v", "......v....................v..............v.......", "v..vv.........v..v......v...v....................v", ".......v.....v...v...vv.......v....v.......v..v...", ".v.v......v.v........v............v...v....v.....v", ".v...v......v.v.v.v.......v.......vv.....v........", "......v.....v.........vv....v..........v...vv...v.", "..v....v....v..............v..............v.v....v", ".v....v..vv.........v...v......v.vv.v............v", ".v..........v...........v..v....v.......vv.......v", "....v....v....v..........v...v....v..............v", "..v....vv..........v.....v..............vv........", "vvv......................vv..v....................", ".....v............vv....v.........v.....v.......vv", ".....................v..v.v............vv......v..", "..v..............v......v..........v.............v", ".vv.......v...v..v..v...........v..v...vv.v.v..v.v", ".v.v............vv.......v......v...v..v....v.v..v", ".v.....vv....v.v.v...v.........vv...vv..........v.", "vv.....v..vvv..v........vv....v..v..v...v........."};
    int dist = 5;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> field = {"vvv...vvv...vvv...vvv...vvv...vvv...vvv...vvv", "v.v..vv.v..vv.v..vv.v..vv.v..vv.v..vv.v..vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv..", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv...", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "..vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv..", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv...", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "..vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv..", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv...", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "..vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv..", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv...", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "..vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv..", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv...", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "..vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv..", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv...", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "..vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv..", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv...", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "...v.vv..v.vv..v.vv..v.vv..v.vv..v.vv..v.vv.v", "...vvv...vvv...vvv...vvv...vvv...vvv...vvv.vv"};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> field = {"vvv.v.vvv.v.vvv.v.vvv.v.vvv.v.vvv.v.vvv.v.vvv", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v.", ".v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v.", ".v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v.", ".v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v.", ".v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v.", ".v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v.", ".v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v.", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", ".v.v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "v..vvv.v.vvv.v.vvv.v.vvv.v.vvv.v.vvv.v.vvv.vv"};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 268435455;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> field = {".....v..v......v..v.v...vv...v.......v...v..vvvvv."};
    int dist = 6;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> field = {".....v.......................v..vv.v...v.......v..", "...v.vv.....v..............v..v.....v......v......"};
    int dist = 2;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> field = {".", ".", ".", ".", ".", ".", "v", ".", ".", "v", ".", ".", ".", ".", ".", ".", ".", ".", ".", "v", ".", "v", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "v", ".", ".", ".", ".", ".", "v", ".", ".", "v"};
    int dist = 5;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> field = {".....", "v....", ".v..v", "v.v..", ".....", "..v..", ".v.v.", "..v..", ".....", "..v..", ".v..v", "v....", ".v...", "...v.", "v....", ".....", "v....", "...vv", "...v.", ".....", "v....", ".....", ".....", ".....", ".....", ".....", ".....", "...v.", "v.v..", "..v.v", ".....", ".vv..", ".....", ".....", ".....", ".....", ".vv.v", ".....", "..v..", ".....", "v.v.v", ".....", ".v...", ".....", "v...v", "..v..", "v....", ".....", "..v..", "....."};
    int dist = 3;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> field = {"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
    int dist = 0;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 489928969;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> field = {"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
    int dist = 100;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> field = {"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvv.vvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
    int dist = 100;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> field = {"v.v..................v............................", ".v......v..................v.....................v", "..v.....v....v.........v...............v......v...", ".........vvv...vv.v.........v.v..................v", ".....v..........v......v..v...v.......v...........", "...................vv...............v.v..v.v..v...", ".v.vv.................v..............v............", "..vv.......v...vv.v............vv.....v.....v.....", "....v..........v....v........v.......v.v.v........", ".v.......v.............v.v..........vv......v.....", "....v.v.......v........v.....v.................v..", "....v..v..v.v..............v.v.v....v..........v..", "..........v...v...................v..............v", "..v........v..........................v....v..v...", "....................v..v.........vv........v......", "..v......v...............................v.v......", "..v.v..............v........v...............vv.vv.", "...vv......v...............v.v..............v.....", "............................v..v.................v", ".v.............v.......v..........................", "......v...v........................v..............", ".........v.....v..............vv..................", "................v..v..v.........v....v.......v....", "........v.....v.............v......v.v............", "...........v....................v.v....v.v.v...v..", "...........v......................v...v...........", "..........vv...........v.v.....................v..", ".....................v......v............v...v....", ".....vv..........................vv.v.....v.v.....", ".vv.......v...............v.......v..v.....v......", "............v................v..........v....v....", "................vv...v............................", "................v...........v........v...v....v...", "..v...v...v.............v...v........v....v..v....", "......v..v.......v........v..v....vv..............", "...........v..........v........v.v................", "v.v......v................v....................v..", ".v........v................................v......", "............................v...v.......v.........", "........................vv.v..............v...vv..", ".......................vv........v.............v..", "...v.............v.........................v......", "....v......vv...........................v.........", "....vv....v................v...vv..............v..", "..................................................", "vv........v...v..v.....v..v..................v....", ".........v..............v.vv.v.............v......", ".......v.....v......v...............v.............", "..v..................v................v....v......", ".....v.....v.....................v.v......v......."};
    int dist = 3;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 898961330;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> field = {"vv"};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> field = {"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
    int dist = 0;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 489928969;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> field = {"vv.vv.vv"};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> field = {"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
    int dist = 0;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 819287759;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> field = {"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
    int dist = 0;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 733214156;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> field = {"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
    int dist = 100;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> field = {"vvv"};
    int dist = 3;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> field = {"vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "..................................................", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", ".................................................."};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 677294721;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> field = {"vvvv"};
    int dist = 2;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> field = {"vv...", ".....", "vv...", ".....", "vv...", "....."};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> field = {"vv"};
    int dist = 0;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> field = {"vv"};
    int dist = 13;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> field = {"vv......vv"};
    int dist = 2;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> field = {"vv....", "....vv", "......", "vv...."};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> field = {"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv.v.v.v.vv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
    int dist = 0;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 655620564;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> field = {"vv...vv......vv......vv.....vv.....vv...."};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> field = {"vv"};
    int dist = 10;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> field = {"v.v..................v............................", ".v......v..................v.....................v", "..v.....v....v.........v...............v......v...", ".........vvv...vv.v.........v.v..................v", ".....v..........v......v..v...v.......v...........", "...................vv...............v.v..v.v..v...", ".v.vv.................v..............v............", "..vv.......v...vv.v............vv.....v.....v.....", "....v..........v....v........v.......v.v.v........", ".v.......v.............v.v..........vv......v.....", "....v.v.......v........v.....v.................v..", "....v..v..v.v..............v.v.v....v..........v..", "..........v...v...................v..............v", "..v........v..........................v....v..v...", "....................v..v.........vv........v......", "..v......v...............................v.v......", "..v.v..............v........v...............vv.vv.", "...vv......v...............v.v..............v.....", "............................v..v.................v", ".v.............v.......v..........................", "......v...v........................v..............", ".........v.....v..............vv..................", "................v..v..v.........v....v.......v....", "........v.....v.............v......v.v............", "...........v....................v.v....v.v.v...v..", "...........v......................v...v...........", "..........vv...........v.v.....................v..", ".....................v......v............v...v....", ".....vv..........................vv.v.....v.v.....", ".vv.......v...............v.......v..v.....v......", "............v................v..........v....v....", "................vv...v............................", "................v...........v........v...v....v...", "..v...v...v.............v...v........v....v..v....", "......v..v.......v........v..v....vv..............", "...........v..........v........v.v................", "v.v......v................v....................v..", ".v........v................................v......", "............................v...v.......v.........", "........................vv.v..............v...vv..", ".......................vv........v.............v..", "...v.............v.........................v......", "....v......vv...........................v.........", "....vv....v................v...vv..............v..", "..................................................", "vv........v...v..v.....v..v..................v....", ".........v..............v.vv.v.............v......", ".......v.....v......v...............v.............", "..v..................v................v....v......", ".....v.....v.....................v.v......v......."};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 997780280;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> field = {"vvvv"};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> field = {"vv..vv..vv..vv"};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> field = {"v..........v"};
    int dist = 1;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> field = {"vv"};
    int dist = 100;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> field = {"v.v....v.v"};
    int dist = 2;
    GooseInZooDivOne* pObj = new GooseInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=15498&pm=12539
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
 
class GooseInZooDivOne {
public:
  int count(vector <string>, int);
};
 
const int md = 1000000007;
 
int mabs(int x) {
  return (x < 0 ? -x : x);
}
 
int x[77777], y[77777];
 
int GooseInZooDivOne::count(vector <string> g, int dist) {
  int n = g.size(), m = g[0].length();
  int odd = 0, even = 0;
  for (int ii=0;ii<n;ii++)
    for (int jj=0;jj<m;jj++)
      if (g[ii][jj] == 'v') {
        int i = 1, e = 1;
        x[1] = ii;
        y[1] = jj;
        g[ii][jj] = '.';
        while (i <= e) {
          for (int xx=0;xx<n;xx++)
            for (int yy=0;yy<m;yy++)
              if (g[xx][yy] == 'v') {
                int cur = mabs(xx-x[i])+mabs(yy-y[i]);
                if (cur <= dist) {
                  e++;
                  x[e] = xx;
                  y[e] = yy;
                  g[xx][yy] = '.';
                }
              }
          i++;
        }
        if (e & 1) odd++;
        else even++;
      }
  int ans = 1;
  for (int i=0;i<even;i++) ans = ans*2 % md;
  if (odd > 0)
    for (int i=1;i<odd;i++) ans = ans*2 % md;
  ans = (ans+md-1) % md;
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/