/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12545
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

class GooseInZooDivTwo {
public:
    int count(vector<string> field, int dist);
};

int GooseInZooDivTwo::count(vector<string> field, int dist) {
    int ret;
    return ret;
}


int test0() {
    vector<string> field = {"vvv"};
    int dist = 0;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
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
    vector<string> field = {"."};
    int dist = 100;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
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
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
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
    vector<string> field = {".", ".", "."};
    int dist = 4;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
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
    vector<string> field = {".v...", "v.v.v", ".....", "....."};
    int dist = 2;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
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
    vector<string> field = {"..vv...v.", ".........", "...v.....", ".........", ".........", "..v......", "....v....", "......v.."};
    int dist = 1;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> field = {"..........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", ".........."};
    int dist = 5;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
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
    vector<string> field = {".v..v.v........", "..v....vvv.v.v.", "...v.v.v.......", "....v.v.....v..", ".v.vv....v....v", "........v......", "..v....vvv.v...", "........v......", "............v.v", "...v.....vv.v..", ".......vv.v..v.", "v...vv..v....vv", ".v....v...v..v.", ".....v.....v.v.", "v.v....v......v"};
    int dist = 3;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> field = {"....v.......vv...", "...v......v......", "v...v.......v....", ".vv..............", ".v.v....vv.......", ".v..v...........v", "....v...v...v....", "..v.....v........", "....v.....v......", "......v.........v", "..v.....v.v......", ".................", ".v...v........v..", "........v........", "...........v.....", ".......v.........", "......v.....v...."};
    int dist = 2;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 524287;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> field = {".vv..v.........v....", "....v.......vv...vvv", "...vv.v....v..vv....", "v......v....vv...v..", "..v..v..vv.v..vv....", "..v....v.v.....v...v", ".v......v..vv...v...", "vv..............v...", "..v..v.....vv.v.v..v", "v.........vv...v....", "......v..v.v.....v..", ".....v.....v....v..v", "..v.v....v.v.....v..", "..v.......vvv.....v.", "....v....v.vv.....v.", ".v...v.............v", "..vv.....v.........v", "..v.................", "v.........v.........", "v...........v....v..", "v.......v..........."};
    int dist = 0;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 560523803;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> field = {"vv.........v...v......", "........vv...v........", "..v.v.v....v..........", "..v.vv.v....v.....v...", ".........v....vv......", "....v...v..v.......v..", "...........vv.........", "v...v.................", ".....v....v.....v.....", ".........v...v........", ".v..........v.........", ".....v.............v..", "......................", "...........vv.........", "......................", "..........v...........", "..............v.vv....", "...vv........v........", ".....v................", "...................vv.", "v.................v...", ".....v.....v.........v", "....v.................", ".v.....v.....v........"};
    int dist = 3;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 32767;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> field = {"...................v......", ".vv.....v...v.............", "..........................", "v..........vv.............", "...v......v...............", "..v.......................", ".....v...v................", "..........v.v...v.........", ".....vvv..v......v.v......", "..........................", ".......vv.................", "..........................", ".........v..v.............", "..........................", "..........................", "......v...................", "..................v.......", ".....v............v.......", "................v.......v.", ".v.......................v", "........v........v........", "..........................", "..........v...............", "........v...........v.....", "....v................v....", ".........................."};
    int dist = 1;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 179869064;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> field = {".........................v..", "...........................v", "......vv................v...", "............v.v.v...........", "......v..............v......", "....v..............v......v.", ".....v..vv..................", ".v.................v........", ".............v..v.vv........", "............v...............", "..v..v..............v.......", "............v..............v", ".......v.v............vv....", ".......v...............v...v", ".v...v.v.......v..........v.", "........v......v.vv....v..v.", ".v...........v.vv.v.v.vv....", "...........v............vv..", ".....v......v...........v...", "...................v.vv.....", ".......v.........v....v.v...", "....v....vv....v......vv....", "...........................v", ".....v..v.....v.............", "......v..v....v..vv.....v...", "...v.....v......v...........", "v....v.......v......v.......", "............v.......v...v...", "....v....v..........v..v...."};
    int dist = 4;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> field = {"..........v........v...v.......", "..vv.vv........v..v..v....v....", "..........v...vv.v.v..v........", "v........v.............v.v.....", ".v....v..v..v..........v.......", "........v.v...............vvvvv", "..v...v..v...........v....v....", "v....v.v......v......v.v.......", "....v.vv....vv.................", "......v.v..........v...........", "....v......v......vv........v..", ".v...vv.vv.....v.v...........v.", "........v.v.v...........v.vvv.v", "...v....vvv....v..vv......v...v", "......v.vv.v.....v..v..v....vv.", "v.v..............v...v....v....", ".v..vvvv................v...vv.", ".....v.vv......vv.....v........", "............vv......v....v.vv..", ".......v.v....v..............v.", "......v.........v..vv..........", "vv.....v...........v..v....v...", "v.........v.vv...vv.v.....v....", "v.v....v..v....v.vv.....vv.v.v.", "..v..v..........v........v.....", "...............v...............", ".v.........vvv..vv.........v...", ".v..............v......v..v..v.", "....v.......v..v....v..........", "..vv....................v......", "...vvv.....v............v......", "v...v..vv.........v.v...v...v..", "v.......v..vvvv...v....v.v....."};
    int dist = 1;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 744686786;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> field = {".v..v..v....v.v.vvv..vvv.v..v.v..vv", ".........v.vv..v.......v.v.......v.", ".....v.v.vvvv.v.vv.v.v.v...v...v...", "v.v.vv..vvv.v.v.v.v....v..vv......v", "..v.vv...vv.v..vv...vv.v...vv......", "..v.....v.vvv.v...v.v..vv.vv....v..", ".....vvv.....v.v...v.....v.v..v..vv", ".v....vv..v.vv......vvv..v...vvvv..", "..vvv........vv...vvvv....v...vv...", ".vv..vvv.....v...vv.v..vv.v..v.v..v", "v.v..v..vv..v....v.v.v....v....v...", "..v.v....v...vv.v..v.....vvv.vv.v..", "........v..v.v..v....v........v..v.", "...v....v......v....vv..........vv.", "....v.......vv...........v.....v...", ".vv..vv..v..vv..v.v.v.vvv.v.v......", "vvv....v.v..vvv....v......v..v..v..", "...vv...vv..v..v.......vv.vv....vv.", ".v..v.......v.vv.v.v...v..vv....v..", ".....v...........v.v.vv......vvv...", "....vvv.vv....vv....vv.v......vvv..", "..vv....v.....vvv.vvvvvvvvv.v...v.v", ".v....v..vv.....v.v...v....v.v.....", ".vv.v....v.v..vv....vv...vvv..vv..v", ".vvv..v..v..v..v.v..v.....vv..v..vv", ".....v..v.vv...vv..vv.v....v..vvv..", ".........v.v.v..vv.v.v...v.....vv..", "...v..vv.vv.v...v.....v.v..v.vvv...", ".vvv....v..v.v....v.vvvvvv.........", ".....vvvvvv..v....v.vvv.v.v.vvv..v.", "..v.v..v.........vv...v...v.v..v.v.", ".v..........v.v...v.v..v.vvvv.....v", "vv....v....vv..v.v.vvv.v...v...v.v.", ".v..vv..v...v.....v..vv.v.....v...."};
    int dist = 2;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 4095;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> field = {".......................................", ".......................................", ".......................................", ".......................v.............v.", "...v...v................v..............", ".......................................", "..........................v............", "..............................v.......v", "...v.............v.....................", "..v...........................v........", ".......................................", ".......................................", ".......................................", ".......................................", "......................v................", ".......................................", ".....................v.................", ".......................................", "........................v..............", "................................v...v..", ".......v.........................v.....", "..........................v............", "..v....................................", ".......................................", ".......................................", "..v..v........v........................", ".............v.........................", ".......................................", "....................v..................", ".................v.....................", "............v..........................", "................v.v...v................", ".......v...v...........................", ".....................................v.", ".......................................", "............v..........................", ".......................................", "...................v..........v........"};
    int dist = 8;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 255;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> field = {"........v..v.v....vvv.......v.............", "...vv.....v.....v........................v", "...............vv................vvv....v.", ".........v...v..v..........v..............", "...................................v......", ".vvv.v....v.....vv.....vv.v...........vv..", "v...........v...v.v...vvv..vv....vv.....v.", ".......vvv......vv...........vvv.v........", "......v......v....v........v.v.........v..", "..v......v.....v.....v....v............v..", "..v..v...v.v......v.............v..vv.....", "....v..............v.....v......vv....v...", ".v................v...........vv.v.vv.....", ".v...........v................v..v...v....", "...v.......v......v....v..vv..vv....v...vv", "v..v.v.v...v........v......vvv......vv...v", "..vv.......v.v.v.........v............v..v", "...v........v..........vv.....v.....v.....", "...............v.v..v..v.....v............", ".v..v....v....vv...vv.v....v...v..v...v...", ".........v......v.v....vv.......v.........", "....v..v...v.....v...v....vvv.........v...", ".v..v.v..v.......vv.v...vvv..........v....", ".v...vvv.............................v....", ".v...vv......v..v..vv...vv..........vv....", "......................v....v............v.", "............vv....v...v...................", "..v...................v..........v........", ".v..v..v.....v.v.vv...v...v...v.......v...", "...............v.v.v..................v...", "..v.v.........v..........v..v....v...v....", ".v......v.v...v..vv...........v...........", "v............vv....v.........v...vv.v.....", "..v.........v....v.......v......v.........", ".....vv................v............v....v", ".......v......v..............v............", "........v............v.v..................", "....v.v......v................v...........", ".vv......v.....v.v..........vv..vv..v...v.", "v.v...........vv.........v.v.v.....vv...v.", ".....v.......v...v......v.................", "............v.......v...v................."};
    int dist = 4;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> field = {"v.v.vv.......v....v....v.vvv......v........vv", "v....v.v.......vv....v..........v.v..vv...vv.", ".........vvv.v.v.v.......v.....v...........v.", "vv..vv.............v....v........vv..........", "...vvv..vvv.....................v.......vvv..", "....v.....v...vv......vvvv.........vv...vv.v.", "...v..v...vv.v.v......v.......v.v...vv..vv...", "v.....v.v....vvv....v.v..v........v....vv....", "....v.vv........v......vv...vv.v..v..........", "..v...v.v....vvvvv..vvvv.v..v.v.vvvv.........", "...v.v.....v.......vv.v...v.v...vv....v...vv.", "v.vv...........v..v...........vv.........v.vv", ".v...vvv.....v.v......v.vv......v....v..v....", ".v.v.v....vvvv.v...vv.v.vv...vv.....vv......v", "v...v.v.........vv.......vv........v...v.v..v", "v....v.........v..vvv...vv.vv..v...v........v", "...v.....v.v.v.v..vv.vv.v..vv.v...v.....v....", "..vv......vv.v..v..........vvv...v.vv.....v.v", "..v................v...v....v.......v..v.v.v.", "...v.v.v.....vv...v.vv..vv.v...v..vvv.....v..", ".......v....vv..v.v.......v....v......vv....v", ".v.v......vv.vv.v.....v....v...vvv...v.v.....", "...v.............vv..v....v...v...v.v........", ".v..v.....v..vv......v....v.v....v.v.vv...v..", ".......v...............v....v.......v..v.....", "....v......v.....v....v...v......v.vvvv...v..", "v.v...v...vv......v...v.vv.....v.............", ".v.v...v......v.........vv..v...v......v..v..", "..v.vv.v......vv.v........v.vv......v.....v..", "......v.v..v.......v.....vv...v...v.v.v.v.v.v", ".v.............v..........v.....v...v........", "...vv.v...vv....v....v...vv...v.v..v..v.....v", "v.vv.vv...v.....................v.v.vv...v.v.", ".v..v............vvv.v.....v.....vv....vv...v", ".v.....vv.vv......v.v....v.vv..v..v..........", ".......vv.......vv.......vv.v...........v.v..", "..v.vv..v..v..vv....v.......v..v..v......vv.v", "..vv.........v...v.v..v.v.vvv..v...v......v.v", "..v......v...vv.....v..vv..v.v...v........v..", "v..v.....v....vv...vv.v..v...v.v.v.v.....v..v", ".v...v....v...v...v.....v..vvv.vv.....v...v..", "v.v.......v...v........v..v...v......v......v", "..vv.....v...vv.v........v.vv.v......v..v...v", "........v......vv.....vv.v.....v...v........."};
    int dist = 1;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 585690524;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> field = {"...v...vv.........v.......v.vv......v..v.......", "..v.....v.....v......vv.............v......v...", "....v.........v..v...vv.v.............vv.......", "..v.....v..v............v...................vvv", "v........v...v....vv......vv..v.............v..", ".................................vv............", "...........vv...........................vv.v.v.", "....v.v................v.......v...v....v......", "...v............................v.......vv.....", ".....v......v..........vv.......v....v......v..", "v.v......v......vv.v.vv.v........v.............", ".........v.......v........v...v........v.....v.", "v...vv.............................v...........", ".....v.v....v.v...v.........v.v..vv.....vvvv.v.", "vv..v......v..v......v.v..vvv..v........v......", "...v....v...v....v......v...................v..", "...v.v...v.v.v.v...v....v........v.........v...", "...................................vv..vv.v.v.v", "...v.......v..............vv..v................", ".v...........v..............v......v...........", ".....v.........vv.....v................v.vv....", "..........v.......v.........v...v..............", "..v.....v....v...v..v......v...v.v......v....v.", "v..............v....v.....v..v..v..............", "...........vv..v.....v...vv.......v.....v......", "v.v....................v.......v...v..........v", ".....vv....................v......v.v..vv..v...", "v...........................vv......vvv......v.", "....v.v.......v..........v.....v..v......v...v.", ".......v.....vv....v...vv........v.v.vv........", ".......v....v........vvv.........v......v.v....", "..................vv.....v.v.....v...v.........", "............v.................................v", ".....vv...v.........vv......v.........vv.......", "....v.............v.......v............v..v....", ".v..............vvvvv............v...v...v.....", ".....vvv.................v..v.v..............v.", "...v...v.......vv....v...............vvv...v...", "......v.......v.........v..........v...........", ".........v........vv.........v.v.....v..vv.v.v.", "...............v.v.....v..vvv.v..v.......v.....", ".......v...v...........vv.v....v......v.v..v...", "........v............v....v.v..v...............", ".........v..v...vv...v............vv....v......", "v...v.v..........v.vv.......v.......v....v.....", "..................v........v...................", "v...vv.v...v.v.v.v........v..v...v......v.....v", ".vv...........v..........vvv....vv...........v."};
    int dist = 3;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 268435455;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> field = {"vvvvv..vvvv.vvv..v..v.....v...v..v.vvv....v.vvv.vv", "v.vvv.vvvv.....vv.vvv.vvv...vvvvvv.....v.v..v..v.v", "v.v..v.....v..vv.v...v..vvvv..v.v..vvv.v.vv.vv....", "v.vvv.vv.vv..v.vvv.vvvv..v...v...v...v..vvv...vv.v", "vvvv...vv....vv..vvvvv....v...v..vvvvvv.....v..vv.", ".vv.v.vv.v.v...v.v...v.vv...v.v.v.vvvv...v..v.v.v.", "....v..v...vvv..v.....v.vvvv.v...v.v..vv..vvvvv.v.", ".vvvv.v.vvvv...vv.vvv........vv..v.vv.v.v...v..vvv", ".vvv.v..vvv...vvv.vvv.vvv.vvvvv...vvvv.v.v.....v.v", ".v.vv.vv..v.v.vvv.vv.v....vvv.vv.vv.vvvv...v.v...v", "....v..v.vvv.v..vvvvvv.....v..vv...v...v.vvvv.v..v", "..v.vv.vvv..v..vv.vv.vv...vv.v....vv.v.v....vvvvv.", "v...v..vv..vvvv.vvvvv..v.v.v..vv.v.vvvv..vvvvvv..v", "....vv..v.v.v...vvvvvvv....vvv.vvv.v.v.v.v.vvvvv..", "vvvv.vvv.vvv.vvvvvv....v.vv...v..v.vv....vv.vv.v..", ".vv.v..vv.......v...v..vvvvv.v.v..vv..vvvv.v.vv..v", "vvv..v.vv...v...vv.vv..v...v.vvv..vvv.....v....v.v", "....v.v..vv..vv...v.v.v.vvv...v.vvvvvv..vvvvvv..vv", ".v.v.v.vv.v..vvvvv.v.vvvv....vv..v.vv...vv.v..v..v", "...v.v...v........vv..v.vv...vvvv.v...vv..v...vv..", ".v.vvvv.v...vv....v.vvvvvv.v.vvvvvvv..vv.....vv.v.", "..vv..v......vvvvvvvvv...vvvvvvvvv..vvvvv.v....v..", "..v.v.v...vvv.v.v.vv.vv.vv.v.vvv.vv.v.vvv.v....v..", "vvvvvvvvvvv..v.vvv.vv.v.v.vv.vvvvvv.v...v...vvv.vv", "v..v.vv.v.vvv...vv.v..v.vv....v.vv.v.vvvv..vvv.vvv", ".v..vv...v.v.vvvvv.v...vv.vv.v.....v...vvvvv.v....", "...vvvvvv.v.vv.vv.v..v.vvv.v....v.v..v.v..vvvvv...", "vv..vvvvv...vvv..v...vv.v.v.vvvv....vvvvvvvv...v..", "vv..vv..vv.vvv.v.v..v.v.......vvv.vvv..vvv.v.v.v..", "vvv.v.v....vv.v.v.v.vv..vv..vvvvv.v...vvvvvv.....v", ".vv.v.v.vv...v...vv..v.v.v..vvvv.vv..vv...vv...vv.", ".vvvvv..v.....v.vv.vvv...vv...v...vvv.vvvv.v.v.vv.", "vvvvvv.vv.v..v....v.vvvvvvvvvvvvvvvv.vvv..vv.v...v", "..v.vv..vvvv.vv.vv..vv..vvvv.vv.vv..vv.vv....v.vv.", "..v..vv......vvvvv...vv.v....vv..v..v..vvv.vv.v...", ".v..v...v.v.vv.vv.v..vvv.v.v.vvvvv.vvvvvv....vv.vv", ".v.vvv..vvv.vvvv..vvv.vvv.v..v.vvv.vvvvv.vv....v.v", ".vvv.v..v...v..v..vvv.v.....vvvvvvvvvv.v...vv.vvvv", "vvvvv..v...v.v...vv..vv..v.vv..v...vv..v.vvvvv..vv", ".v..v.v...v.vv..vvvv....vv...v....v..vv.vvvvvvv..v", "v.vvvvvv.v.vvvvvvv...v.v.vvvvvvv.vvvv.vv..v..v..vv", "vvvv..v.v.v...v.v..v..v..v.vvvvvv.v...vv.v.vv.vv..", ".vv.v..vvv.v...vvvv..vvv.vv...vvv..v.vv.....v.v...", ".vvv.vv...vvvv....vv...v.v....v.v..v..vvv.v..vv.vv", ".vv...v.vvv.....v..vv.v.v...v.vv...vvv.v...v.vv.v.", "vv.vv....vvv.vv..vvvv..vvv.....vv.v...vvvvv.v..v.v", ".vv.....vv.v.vvv...v..vv.v...vvvv..v.v.vvvv..vvvvv", "v.v.vv...vv..vvvv..v..vv...vv...vvv.vvvvvvvvvv.v.v", "vvvv..v.vvv...vvvvvv...vv....vvvv....vv..vvvv..v.v", "v.v....vv.vv.v.v.v...v.....vvv.vvv.v...v.vvvvv.vv."};
    int dist = 0;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 273043693;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> field = {"v.vv.....v...vvv..v...v.v.....v...v..v.v..v.....v.", ".v...vv...vvv.v.....v.v...v..vv...vvv.....vvv.....", "..v.v........v..v.v.vvv.vv...vv.vvv...vvvv....vv..", ".....vv...........vv....vvvvv.v..vv.vvv...vvvv....", "...vvvvvvv..v..v.........v.v..v.vv.v.v...v.v...v.v", "....v.v.v.v.......vvv..v..v...v........v...v.....v", "v....v..v.vvv....v.v..v..vv......vv....vv....v.v..", "v.v...vv...vv...v.v...vvvv.v.......v.v..v..vvv..vv", "..vv...v.v.vv......v...v...v...v....vv.v.....vv.v.", ".v..v.....v...vv.v.vvv...v.vv..v.v....v....v.v...v", ".v.vv.vv...v.v...vv...v.......v..v.v.vv.v.....v...", "v...vv.vv..v.v..........v.v.v..v.v...v.v...v....v.", ".v.v..v..v..v...v....v.vv.vvv.....v..vvvv.v..v.v.v", "vv.....v.....v..vv.v...v..vvv.vv.v...v..vv.v...vv.", ".........vv.vvv..v...v.vv.v.vv.vv..vv.vv....v...v.", "v...vvv..vvvv.v..vvv.v...v..v.v.v......vv..vv.v.v.", "v..v.....v.vvvv..v...vv....v.v.v...v.v...vv......v", ".vv.vv...v.vvvv...v....vvv.vvv..v....v..v...vv.v.v", ".....vvv..v..vv..v.v.vv.....vvv.vvv..v...vvv.vvv..", "vv..vv.v.v.v..v.v....v.v.vvv..vv.vvv......vv.vvv..", "......v.....v.v.........v.v..v...v.v..v.......v...", "v.....v...v......vvv.vvvv.v.v....vvv.vv...vv.v....", "v...v....v....vv..vv.v.......vv.v..v...v.vv.vv..vv", "v..v......vv.vv..v.vvv.vvvvvvv.....v.v.vvv.v...vv.", "vvv.......vv....v...v....v..vvvv....v.vv..v..v.vv.", "vv.........v..v...vv...v.v...v.....vv.vv.vv..v...v", ".v.v.v..vv..vvvv..vvv...v.vv...v.v.v.v....vv...v..", "...vvvv..v..v...vv.v..v.v..vvv....v...v.........vv", "v...v.v..vvvvv....v.vv..v.....v....vvvv.v...vv.v..", "v.vvv......v...v.....vvvv...vvv...v.vvv....vvvv..v", "vv...vvvv.v...v...vv.v......vv.vv...v.vvv.v.......", ".......v.v....v.v.v............v....vv..v.vv....v.", "v.....vv...vv.vv........v...vvv..v...vv......vv...", "vvv.....vv..vvvv.v.v.vvv..v.......v.v.vvv.v.vv.v..", ".v..v..vv..v.v.vv.v..vv.v..v...v.v..v.v....vv.....", ".........vv.vv.v..v.v.v.v......v.v.v.v.vv.vvv...v.", "...v.vv.v.vvv.v..v.v.vv.v.vvv...v..vvvv.v......vv.", "v.v.v..vvv...v.v...vv...vv..v.v.v....vvv.v.v...v..", "..v..v.......v..vv...v..v.....v.....v...v...v..v.v", ".vv.........vvvv.v.v...vv....vv.v.vv..v.v.v.vvv...", "..v.....vvv....v.v..........v...v.v.v...v.v.....vv", "..v..v.vv......v..vv.............v.v....v...v.v.v.", "......vv.......vv....v.v....v.......vvv.vv..vv..vv", "v.v....v.v..vv......vv......vvv.vv.v..v......v..v.", "v.vv.......v....vv.v...v...vvv.v.v.vv....v..v..v..", ".v.v...v......v.v.v.....v.vvv.v.vv..vv.v.vv.v.v.vv", ".vv.vv.....v....vvv..vv.vvv..vvvvv...v....v..v..v.", "v.vv..vv...v....v....v..v...v.v......v....v....v..", "...v.v.v.v...vvvvvv..vv...v...v....v.....v.v..v.v.", "...v....vv...vvv.vv.v.v...vv..v..v....v..v...v.v.."};
    int dist = 1;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 661025382;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> field = {"..................v..v..vv...v.....v......v.......", "..v....v....v............v...v...v............v...", "..v....v...........v....v.v..v..........v..v.....v", ".v.v..vv.vvv.v.....v.v................v..........v", "..v...vv.....v....v....v.....v...v.....v...v...v.v", "....v.v.........v..................v...vv...v.....", "........................v......................v..", ".............v...vv..v...v..v..vvv.....v..v......v", "........vv.v..........v..v..........v..v.....v....", "........................v.............v...........", "...v........v..v..v...........vv.......v..........", "v.vv......v...vvv........vv...................v...", "vv.v......v.......v.....v......vvv....v.v.v.......", "....v.....v...........vv......v..v....v...........", "v.....vv..........v.............v......vvv.vv...vv", ".......v.........v............vv.............v.v..", "v.....v...........v..........v.....v.vv..v..v.v.v.", "..v......v.......v.v.v..vv.....v.....v.v..v.......", "...........v.v.....v...v............v.....v..v....", ".....................v..............v...v....v.vv.", "......v.v......v.................v.vv..v..vv......", "v.v......v.....v.vv....v.v...v.....vv..v.........v", "v.............v.v.v...v......v..v.....v..vv.......", "...v.....v....v..........vv..v.v.............v.vv.", ".....v...vvv....vv.....v...........v..........vvv.", ".....v.v..........v..v..............v....v.v......", ".v.......v.....v..........v...v.v.v..............v", "....v..v........v.v...........................v...", "...vv..............v.................v............", ".v.......v....v..v....v..v..........vv............", ".......v.....v....v.....v..............vv.vv......", "....v.v.v..........v..........v.v.v.v.vv...v....v.", "v..v.v...........v......v.......vv....v...v.....v.", ".....v.......v....vv.v........vv.v....vv........v.", "vvv.......v..v........v............v..............", ".......v.v............v.....vv............v.......", "..v..v.v.v......v....v........v.v......v..v.v.....", ".v......v..vv............vv.......v........v..vv.v", "v.........vvv.............v.vvv..........v.....v..", "..v....v..v.......................v.........vv....", "........v..v.vv.....v.............vv.v..........v.", "...........vv..v..............v..vvv........v..v..", "..v...vv.v..v..........v.......vv........v...vvv..", "....vv.vv.....v..v..v......v.....v........v.......", ".......................v................v.........", "..v...........v..........v....v....v.........v....", "...........v.....v..v....v...v...v.......v..v...v.", "v...v.....v.v......v............v..v......v.....v.", ".vv...v..vv...................vv.................v", ".vv...v........vv...................v....v........"};
    int dist = 0;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 677294721;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> field = {".....v..vv...........v...v.......v..v..........v..", "..............v........v......v....v...vv.........", "..v.......................v.............v...v.vv..", ".vvvv.......v..............v.......vv............v", "..................................v...............", "......................v.......vv....v.......vv....", ".........................v................v.......", "...v..v....v...v....v.........vv..v.v....v.......v", "........v..v.............v...v........v.......v..v", "..................v............................v..", "....................v.............................", "..........v...............v..v....v..............v", ".........vvv...................v.....v............", "............v...............v.....................", "......v........v.................v...v.vv.........", "v..v...........v.............v............v..v....", "...........................v....v.v...v...........", ".....................v...................vv.v.....", "..............v..................v....vv...vv.v...", "...........vv......v...........v...v....v........v", "..........v.........v.v.v......v.....v..v.v....v..", ".v..........v.v.....vv............................", "....v...v............vv....v..........v........vv.", ".v..........v.....v.......v....v..v...............", "..........v...................v.............v.v...", "v..........v...........v..................v....v..", "..v...v...........v....v..........................", "...v..........................v..............v....", ".......v..........v....v..........................", "................vv..............vv...v............", "...v...vv...............................v.....v...", "..v.................v......v.v......v.........v...", "....v....v.........v..vv...v..v....v..v...........", "........v...v..v..v...v.....................v.....", "......v.........v..v..v.......v....v.........v....", "....................................v.v...........", "v...v...............................v.......v.....", "..............................v.....v........vv...", ".................................v..v............v", "..................v...v....v...........v.v........", "..v...v................v.....................v....", "............v........v...........vv...............", ".......v...v.v...............v.........v....v..v..", "............................v.v....v...........v..", "....v.......v...............v................v...v", ".v............................v..v................", "v..v.v....v.....v.v.v....vv.....v...............v.", ".......v.......v...v.......v..v.v.vv.....v........", "..v..v.....................v....v.................", ".vv....v............v.......................v....."};
    int dist = 4;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 2047;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> field = {".v.v..v.v...v..v.v.v.v...v.v.v..v..v..v.v.v.v.v.v.", "v.v.v..v..v..v..v.v.v..v..v....v.v..v..v.v.v.v.v.v", ".v...v..v..v..v..v.v.v...v..v.v.v.v...v.v.v.v.v.v.", "v..v..v...v.v..v..v.v..v...v.v.v.v.v...v.v...v.v.v", "..v.v...v..v..v..v.v..v.v.v.v.v.v....v..v..v..v.v.", ".v.v..v...v..v.v..v..v.v.v...v....v.v.v...v..v.v.v", "v...v..v...v..v..v..v.v.v..v...v.v.v.v.v.v.v....v.", "..v..v...v...v..v.v..v.v..v...v.v.v.v.v.v.v.v.v..v", ".v..v..v..v.v..v....v.v..v..v..v.v...v.v...v.v.v..", "v..v..v..v.v..v..v.v....v..v.v.....v..v..v..v.v.v.", "..v..v..v.v.v..v..v..v.v.v..v.v.v...v...v.v..v.v.v", "v...v.v....v.v...v.v....v.v....v..v..v.v.v.v..v.v.", "..v....v.v..v.v.v.v.v.v....v.v..v...v.v...v.v....v", "v..v.v..v..v.v.v.v.v.v.v.v..v.v..v.v.v..v..v.v.v..", ".v.....v.v..v.v.v.....v....v.v..v...v.v..v..v.v.v.", "v...v.v.v..v.v.v..v.v...v.v.v.v...v..v.v..v..v.v.v", "..v..v.v.v..v.v.v..v.v.v.v.v...v.v..v...v..v......", "v...v.v.v..v.v.v.v..v.v.v.v..v..v..v..v...v.v.v.v.", "...v.v.v..v.v.v.v..v.v.v.v.v...v.v...v..v..v.v.v.v", ".v..v...v....v.v..v.......v.v.v....v...v.v..v.v.v.", "v..v..v..v.v..v..v..v.v.v..v.v..v.v.v.v.v..v.v.v..", "..v..v..v.v.v..v...v.v.v..v.v.v..v.v.v.v.v..v.v..v", "v...v.v..v.v.v..v.v.v...v..v.v..v.v.v.v.v..v.v.v..", ".v.v.v.v..v.v..v.v....v...v.v..v.v.v.v.v..v.v.v..v", "v.v.v....v.v..v.v..v....v..v..v.v.v...v.v..v.v.v..", ".v.v..v.....v..v.v...v.v..v..v.v.v..v..v.v....v..v", "v.v..v..v.v..v....v.v.v..v..v.v.v.v..v....v.v...v.", ".v..v.v..v..v...v....v..v.v..v.v...v..v.v..v..v...", "...v.v.v...v..v....v..v..v.v..v..v...v...v..v..v.v", "v.v.v...v....v.v.v..v..v..v..v..v.v.v..v..v...v.v.", "...v..v...v...v.v.v..v..v..v..v..v.v.v..v...v..v.v", ".v...v...v..v..v.v..v.v..v...v.v..v.v.v..v.v..v.v.", "v..v...v..v..v..v.v..v.v...v..v.v..v.v.v..v.v..v.v", ".v..v.v..v.v...v.v.v..v.v.v.v..v..v.v.v..v.v.v..v.", "...v...v..v..v....v..v.v.v.v.v...v......v.v.v.v...", "v.v..v..v...v.v.v..v..v.v.v.v.v.v..v.v.v.v.v.v.v.v", ".v..v..v..v..v.v..v.v..v.v.v.v.v..v.v.v.v.v.v...v.", "v..v.v...v..v.v..v.v..v.v.v...v.v..v...v.v.v..v...", "..v.v.v.v.v..v..v.v.v..v.v..v..v..v..v..v.v..v.v.v", ".v.v.v.v...v..v..v.v..v.v.v..v...v.v..v..v..v.v.v.", "v.v.v.v..v...v..v.v.v..v.v.v..v.v.v.v..v...v.v.v.v", ".v.v....v.v.v.v..v.v.v..v.v.v..v...v.v..v.......v.", "..v..v.v.v.v.v..v.v....v.v.v..v..v..v..v..v.v.v..v", "v..v..v.v.v.v.v.....v.v...v..v.v..v..v...v.v.v.v..", ".v..v..v.v.v...v.v.v.v..v..v..v..v.v..v...v...v..v", "...v..v.v.v..v..v.v.v..v.v..v...v.v.v...v...v..v..", "v.v..v.v.v..v..v......v...v..v.v.v...v.v...v.v...v", ".v..v.v.v.v..v...v.v.v..v..v....v..v..v..v..v..v..", "v..v.v.v.v.v..v.v.v.v..v.v..v.v..v...v..v.v..v...v", ".v..v.v.v.v..v.v.v.v..v.v.v..v..v.v.v..v.v..v.v.v."};
    int dist = 1;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 955121133;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> field = {".v..v..v...v....v...v....v.......v....v...v..v..v.", ".........v....v...v........v...v...v..............", "......v.....v..........v.....v.........v...v..v..v", "..v.................v....v......v........v........", "v........v......v.....v.....v........v.......v....", "....v..v...v.......v......v...v....v...v..v......v", "..v..........v...v...v......................v.....", "........v..............v....v..v..v..v.........v..", "v..v..v....v...v..v......v................v..v....", ".........v...v......v........v..v.......v........v", ".v.....v...............v...v......v...v.....v..v..", "...v........v..v..v..v...v..........v.............", "........v....................v...v......v..v....v.", "v...v...............v...v......v...v.........v....", "......v....v..v...v........v...........v..v....v..", "..v.............v....v...v........v..v............", ".......v....v.................v.........v.......v.", ".v..v....v.......v..........v...v..v..v.....v.....", "......v......v.....v...v..v..............v....v...", "v.........v.....v............v....v....v...v....v.", "...v...v..........v........v...v..................", ".....v...v.....v.....v...v.......v..v....v..v.....", "..v.........v...............v.........v.........v.", "v.....v...v...v...v....v......v....v......v...v...", "...v............v...v......v.....v......v........v", ".v...v...v..v...........v............v.......v....", "..............v...v..v....v..v..v.........v....v..", "v.......v..v....v......v............v..v....v....v", "...v..v......v.............v...v..v...............", "..........v....v..v..v...v...........v..v..v...v..", ".....v......................v....................v", ".v.........v..v........v.......v..v...v..v....v...", "...v....v..........v.........v....................", ".....v....v..v...v........v..........v..v...v..v..", ".v.............v.....v..........v.........v......v", ".........v..v......v...v...v..................v...", "v...v..v......v..v...........v.....v....v...v...v.", "..........v..........v...v......v.....v...........", "...v..v......v.........v......v.....v........v....", "........v.......v..v........v....v.....v..v......v", ".v........v..........v..v......v...............v..", "....v.......v..v.............v.....v..v......v....", "v.....v..........v..v....v.......v.......v........", "..v.....v..................v................v..v..", "....v......v..v.......v........v.....v....v......v", "v......v...........v......v.......v....v.....v....", ".....v....v.....v......v.....v.............v....v.", ".v..........v.....v.............v.....v...........", "...v..v..v.....v....v......v..v.....v.....v....v..", "v..........v.....v....v..v........v.....v...v....v"};
    int dist = 2;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 28918235;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> field = {"v...v.......v...v.....v......v.....v......v.......", "........v.................v..................v...v", "..v...........v.....v..........v........v.........", "......v..........v.........................v......", "v...........v..........v..........................", "....v..............v.......v.........v.........v..", ".......v......v...............v...v.....v...v.....", "........................v.........................", ".v........v..........v................v..........v", "....v...........v..........v...v...v.....v........", "............v......v...........................v..", "..v......v...............v.......v................", "......v..........v....................v...........", "v....................v........v............v......", "....v...v.....v.........................v........v", "...........v..............v.......v...............", ".v....v............v......................v....v..", ".........v.....v......v......v......v.............", "...v.....................v.......v.....v..........", "v..........v........v......................v....v.", ".....v..........v......v......v......v............", "........v....v.............v......v...............", ".v.................v...................v.......v..", "......v........v........v......v....v.............", "...v..............................................", "v.........v..........v.......v.............v....v.", ".....v........v...................................", "..v..............v...............v....v.......v...", ".......v.................v....v...........v.......", "...........v....................................v.", "v....v..........v....v..............v.............", "........v....v............v.....v.................", ".......................v................v...v.....", ".v.............v....v................v............", "....v....v...................v...v...............v", ".............v............v.......................", "......v...........v....v.................v.....v..", "v...........................v......v..............", "....v......v....................v............v....", "....................v....v............v...........", "...............v.............v....v.......v.......", "..v....v....v.....v..............................v", ".......................v........v...v...v....v....", ".....v....v...............v.......................", "v...............v.................v.......v....v..", "...v.........v......v...v.............v...........", "......v......................v..............v.....", ".v.........v...v..................................", "....v...v..........v..............v......v....v...", ".............v........v....v...v......v..........v"};
    int dist = 3;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 857937542;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> field = {".v....v......v.........v...........v...........v..", "...................v.......v..............v.......", "................................v.....v...........", ".................................................v", ".......v.................v...................v....", "...........v....v.......................v.........", "..v.................................v.............", ".......................v......v...................", "......v......v....v.........................v.....", "v..........................v...........v..........", ".....................v..........v................v", "..................................................", "........................v....v...............v....", "..v.......v....v......................v...........", "....................v.....................v.......", "...................................v..............", "........v........v........v...................v...", "................................v......v..........", "..v...............................................", "..............v.........v.................v......v", "..................v...............................", "....v..............................v..........v...", "...........v..........v...........................", "...............v.............v....................", "......v............v.................v..........v.", "v........................................v........", "............v..............v....v.................", "........v........v..........................v.....", ".......................v.........................v", "....v.................................v...........", "v............v....................v...............", "............................v..............v......", "........................v.......................v.", "..v......v.........v..............................", "................................v.......v.........", "...............v..................................", ".....v.................v..........................", ".v.........v................v.......v........v....", "....................v.............................", "........v......................v..........v.......", ".................v......v........................v", "....v.................................v...........", "...........................v.................v....", "v...........v........v...........v................", ".......v................................v.........", ".................v..............................v.", "...v......v............v....v.....................", "..............v...................................", "...................v.................v.......v....", "v.....v...................v....v.........v.......v"};
    int dist = 4;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 118529100;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> field = {".................v.....v...........v..............", ".v........v.................v.....................", ".......................................v......v...", "....................v.............................", ".....v.........v................v.................", ".................................................v", ".........v.................v......................", "..v...................................v......v....", "..................v...............................", "........................v......v..................", "...........v......................................", ".....v..............................v............v", "................v..........v......................", "v.................................................", "......................v...................v.......", "........v.......................v.................", ".............v....................................", "...................v...........................v..", "..v.................................v.............", "..........v.............v..................v......", "..................................................", "...............v............v.....................", "v......v...............................v..........", ".....................v.........................v..", "...................................v..............", "...........v.............v........................", "...v..............................................", "..................................................", "........v......v...............v.........v........", "....................v...........................v.", ".v.........................v........v.............", "............v.....................................", "............................................v.....", "......v.........v.................................", ".........................v........v...............", "..v......................................v........", "....................v........v...................v", ".............v....................................", "........v.........................................", "v...............................v...........v.....", "...........................v.........v............", ".....v..........................................v.", "...............v.......v..........................", "..............................v...................", "........v..........v.......................v......", "..........................v.......................", "v.................................v...............", "..............................................v...", "............v................v..........v.........", "...v..............v.....v........................."};
    int dist = 5;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 873523210;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> field = {"..v.......v.................................v.....", "..................v..............v................", "..................................................", "......v..................v........................", ".............v...........................v........", "v................................................v", "....................................v.............", "....................v.............................", "..........v................v......................", "..................................................", "................v..............................v..", "..................................................", "...v....................v.........................", "...........................................v......", "..................................v...............", "..........v.......................................", ".......................................v..........", ".....v................v.......v...................", ".................................................v", "..................................................", "...............v..................................", "v.......v..................v................v.....", "..................................................", "......................................v...........", ".......................v.......v..................", ".....v............................................", "..............................................v...", "...............v...................v..............", "..........................v.......................", "..................................................", ".....................v............................", ".......v..............................v...........", ".v................................................", "................................................v.", "...............v..........................v.......", ".............................v....................", "..................................................", ".........v........................................", "v........................v........v...............", ".................v................................", ".........................................v......v.", "............v.....................................", "......v...........................................", ".....................v.......v....................", "..................................................", "..v...............................................", ".................................................v", "..................v...............................", ".....................................v............", "......v......v..........v......v.............v...."};
    int dist = 6;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 317504064;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> field = {".........v.............v..........................", "..............................v.........v.........", "..................................................", "...v..........v...............................v...", "..................................................", "..................................................", ".....................v............................", "............................v.......v.............", "..................................................", "........v.................................v.......", ".................................................v", "................................v.................", "..v...............................................", ".......................v..........................", ".............................................v....", "................v.................................", "............................v.......v.............", "......v...........................................", "..................................................", "............v.....................................", ".v..................v.............................", "................................v.................", "................................................v.", "........v.................v.......................", "........................................v.........", "..................................................", "..................................................", ".............v.......v............................", "...v...............................v..............", "..................................................", ".............................v..................v.", ".................v................................", ".......v..........................................", ".......................................v..........", "..................................................", "............v........v...........v................", ".v................................................", "..............................................v...", "..................................................", "..................................................", "..................v...............................", "....v.............................................", ".........................v.........v..............", "............v.....................................", "................................................v.", "........................................v.........", ".....................v............................", "................................v.................", "v.................................................", ".......v.......v..........v.................v....."};
    int dist = 7;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 67049562;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> field = {"..........v.......................................", "...................................v..............", "............................................v.....", "...................v..............................", "...........................v......................", "..................................................", "..v...............................................", "..................................................", ".................................................v", "......................................v...........", "........................v.........................", "...........v......................................", "..................................................", "..................................................", "..............................v............v......", "....................v.............................", "......v...........................................", "..................................................", "....................................v............v", ".............v....................................", ".v................................................", "........................v.........................", "..................................................", "........v.................................v.......", "..............................v...................", "..................................................", "................v...............................v.", "....................................v.............", "v.................................................", "..................................................", ".....................v............................", "...........................................v......", "............................v.....................", ".....v............................................", ".................................................v", "..................................................", "..................................................", "...........v.......................v..............", "..................................................", "..................................................", "...v.....................v........................", "..................................................", ".............................................v....", "..................................................", "...............................v..................", "..................................................", "..................................................", ".....v..........v.................................", "..........................v.......................", "...................................v............v."};
    int dist = 8;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 46480317;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> field = {"...........v......................................", "...........................................v......", "..................................................", "........................v.........................", "...................................v..............", ".v................................................", ".................v................................", "..................................................", "..................................................", "..................................................", "..........................................v.......", "..................................................", ".........v........................................", ".................................................v", "..................................................", "..................v...............................", "............................v.........v...........", "...v..............................................", "..................................................", "..................................................", "............................................v.....", ".......................v..........................", "..................................v...............", "..................................................", "..........v.......................................", "..................................................", "..................................................", "................................................v.", "..................................................", ".....................v............................", "..v.............................v.................", "..................................................", "..................................................", "..................................................", "............v.....................................", "..................................................", ".......................................v.........v", "..................................................", "...........................v......................", ".v................................................", "..................................................", "..................................................", "...................................v..............", ".......v.............v........................v...", "..................................................", "..................................................", "..................................................", ".............v...............v....................", "v......................................v..........", ".................................................."};
    int dist = 9;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 179869064;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> field = {"...............v..................................", ".................................................v", "......................................v...........", "....v.......................v.....................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".v...............v................................", "........................................v.........", "..................................................", "..................................................", ".........v......................v.................", "..................................................", "......................v...........................", "..................................................", "..................................................", ".............................................v....", "...............v..................................", ".....v......................v.....................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................v...............", ".......................v..........................", ".........v........................................", "..................................................", "..................................................", "............................................v.....", "..................................................", "v.................................................", "..................................................", "...............v................v.................", "..................................................", ".................................................v", "..................................................", "..................................................", ".......................................v..........", ".....v............................................", "..................................................", "...................v..............................", "..................................................", "..................................................", "...........v......................................", "..........................v....................v..", ".v..................................v............."};
    int dist = 10;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 147483633;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> field = {"vv.v.vv.vv.v.v.vv.v.vv.v.v.vvv.v.vv.vv.vv.v.vv.v.v", "v..v.v..v..v.v.v..v.v..v.v.v...v.v..v..v..v.v..v.v", "v.vv.v.vv.vv.v...vv...vv.v.v.vvv.v..v.vv..v.v.vv.v", "v.v..v.v..v..v.vvv...vv..v.v.v......v.v...v.v.v..v", "v.v.vv.v..v..v.v....vv..vv.v.v.v..v.v.v..vv.v.v..v", "v...v..v.vv..v.v.v.vv...v..v.v.v.vv.v.v.vv..v.v..v", "v..vv.vv.v...v.v.v.v....v..v.v...v..v.v....vv....v", "v.vv..v..v...v.v.v....vvv..v.v..vv..v.v..vvv...v.v", "v.v..vv..v..vv.v....v.v....v.v..v...v.v.vv...v.v.v", "v.v.v....v..v..v..vvv.v..vvv.v..v.vvv.v.v..vvv.v.v", "v.v.v.vv.v..v.vv..v...v..v...v..v.v.....v..v...v.v", "v.v.v.v..v..v.v...v.v...vv.vv...v.v..v.v...v.v.v.v", "v.v...v.vv.vv...v.v...vvv..v..v.v.v..v.v.v.v.v.v.v", "v.v..vv.v..v...vv.v.vvv...vv..v.v.v.vv.v.v.v.v.v.v", "v.v..v..v..v..vv....v...v.v...v.v.v.v..v.v.v.v.v.v", "v.v..v.vv..v..v..vvvv..vv.v.vvv.v.v.v..v.v.v.v.v.v", "v.v..v.v...v.vv.vv.....v..v.v...v.v.v.vv.v.v.v.v.v", "v.v.vv.v.v.v....v..vv.vv.vv.v.vv..v.v.v..v...v.v.v", "v.v.v..v...v..vvv.vv..v..v..v.v..vv.v.v..v..vv.v.v", "v.v.v..v..vv..v...v...v..v..v.v..v..v.v.vv..v..v.v", "v.v.v..v..v...v.vvv..vv..v..v....v.vv.v.v..vv..v.v", "v.v....v.vv..vv.v...vv...v.vv.vv.v.v....v.v....v.v", "..v.vvvv.v..vv..v.v.v..v.v.v..v..v.v...vv.v.vv.v.v", ".vv......v.vv...v...v..v.v.v..v..v.v.vvv..v.v..v.v", "vv...v.vvv.v..vvv..vv.vv.v...vv..v.v.v....v.v..v.v", "v..v.v.v...v.vv....v..v..v..vv..vv.v.v..v.v.v..v.v", "v.v..v.v.v.v.v..v.vv..v.vv.vv..vv..v.v..v.v.v.vv.v", "v.v.vv.v.v.v.v..v.v...v.v..v..v...v....vv.v.v.v..v", "v.v.v..v.v.....vv.v.v.v.v..v.vv.vvv.v.vv..v.v.v..v", "v.v.v..v.v.vv.vv..v.v.v.v..v....v...v.v...v.v.v..v", "v...v..v.v.v..v...v.....v..v..v.v..vv.v..vv.v.v..v", "v..vv..v.v.v.v..v.v..v.vv..v..v.v.vv..v..v..v.v..v", "v..v..vv.v.v.v.vv.v..v.v..vv..v.v.v...v..v..v.v..v", "v..v.vv..v.v.v.v..v..v.v..v...v...v.v.v..v..v.v..v", "v..v.v...v.v.v.v..v.vv.v.vv.vvv..vv.v.v.vv..v.v..v", "v..v.v.v.v.v.v.v..v.v..v.v..v....v..v.......v.v..v", "v..v...v.v.v.v.v..v.v..v.v..v..vvv.vv.vv.v.vv.v..v", "v.vv.vvv.v.v.v....v.v..v.v..v..v...v..v..v.v..v..v", "v.v..v...v.v....v.v.v..v.v.vv..v..vv..v..v....v..v", "v.v..v.v.v....vvv.v.v..v.v.v..vv..v...v..v..v.v..v", "v.v..v.v.v..vvv...v.v..v.v.v.vv..vv.v.v.vv..v.v..v", "v.v.vv.v....v....vv.v.vv.v.v.v...v..v.v.v..vv.v..v", "v.v.v..v.vv.v..v.v..v.v..v...v.v.v..v...v.vv..v..v", "v.v.v.vv.v..v..v.v.vv.v..v..vv.v.v.vv.vvv.v...v..v", "v.v.v.v..v..v..v.v.v.....v..v..v.v.v..v...v.v.v..v", "v.v.v.v.vv..v.vv.v.v..vv.v..v.vv...v..v.vvv.v.v..v", "v.v...v.v...v.v..v.v.vv..v.vv.v...v..vv.v...v.v..v", "v.v..vv.v.vvv.v.vv.v.v...v.v..v.v.v.vv..v...v.v..v", "v.v.vv..v.v...v.v..v.v.v.v.v..v.v.v.v...v..vv.v..v", "v.v.v..vv.v.vvv.v.vv.v.v.v.v.vv.v.v.v.vvv.vv..v.vv"};
    int dist = 1;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 281040072;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> field = {".v.vvvv.v.v.vvv.vv.vvv.v.vv.v.vvvv.v..vv....vv.v.v", ".v.v....v.v.v...v..v...v.v..v.v....v.vv..vvvv..v.v", "vv...vv.v.v.v...v..v..vv.v..v.v..v.v.....v.....v.v", "...vvv..v.v.v.vvv..v..v..v..v.v..v.v.vv.vv...vvv.v", ".v.v...vv.v.v.v...vv..v..v.vv.v.vv.v.v..v...vv...v", ".v.v.vvv..v.v....v....v.vv.v..v.v..v.v.v...vv...vv", ".v.v.v....v.v..v.v.v.vv.v.....v...vv.v.v.v.v..v.v.", "vv.v.v..v.v.v.vv.v.v.v..v.v.vvv..vv..v.v...v.v..v.", "v..v.v..v.v.v.v..v.v.v..v.v.v....v..vv.v..vv.v.vv.", "v.vv.v.vv.v.v.v.vv.v.v..v...v..v.v.vv..v..v..v.v..", "v.v..v.v..v.v.v.v..v.v..v..vv..v.v.v..vv..v..v.v.v", "..v.vv....v.v.v.v..v.v.vv..v..vv.v.v..v..vv.vv.v.v", "vvv.....vvv.v.v.v.vv...v..vv.vv..v.v..v..v..v..v.v", "v....vv.v...v.v.v.v...vv..v..v..v..v.vv..v.v..vv.v", "....vv..v.vvv.v...v.v.v..vv..v..v.vv.v...v.v.vv..v", "vv.vv...v.v...v.vvv.v.v.vv..vv..v.v..v...v.v.v..vv", "v..v...vv.v.vvv.v...v.v.v...v...v.v..v.vvv...v.vv.", "v.vv.v.v..v.v...v.vvv.v.v.v.v.vvv.v..v.v...vvv.v..", "v.v..v.v.vv.v.v.v.v...v.v...v.v...v..v.v...v...v.v", "v.v.vv.v.v..v.v.v.v.v.v.v.vvv.v.v.v..v...vvv.v.v.v", "....v..v...vv.v.v.v.v.v.v.v...v.v.v..v..v....v.v.v", ".v.vv.vv..vv..v.v.v.v.v.v.v..v..v.v..v.vv.vv.v.v.v", "vv.v..v...v..v..v.v.v.v.v.v..v.vv.v.vv.v..v..v.v.v", "v..v.v...vv..v.v..v.v.v.v.v.vv.v..v.v..v..v..v...v", "v.vv.v.vvv...v.v.vv.v.v.v...v..v.vv.v.vv..v.vv..vv", "v.v..v.v.....v.v.v..v.v...vvv.v..v..v.v...v.v...v.", "v.v.vv.v.v..vv.v.v.v..v.vvv...v.vv.v..v.v.v.v..vv.", "v.v.v..v.v.vv..v...v.vv.v...v.v.v....vv.v.v.v..v..", "v.v.v..v.v.v...v..vv.v..v.v.v.v...v.vv....v.v..v.v", "v.v.v.vv.v.v.vvv..v..v.vv.v.v.v..vv.v..v.vv.v..v.v", "v.v.v.v..v.v.v....v.vv....v.v.v..v..v.v..v..v.vv.v", "v.v.v.v..v.v.v.v.vv.v..vv.v.....vv.vv.v.vv..v....v", "v.v.v.v.vv...v...v..v.vv..v.vvvvv..v..v.v...v..vvv", "v.v.v.v.v...vv..v..vv.....v.v......v.vv.v...v..v..", "v.v.v.v.v..vv...v.vv...vv.v.v..v.v.v.v..v..vv.vv.v", "v.v.v.v.v.vv....v......v..v.v..v.v.v...vv..v..v..v", "v.v.v.v.v.v....vv.vv.vvv..v.v..v.v.v..vv...v.vv.vv", "v.v.v.v.v.v.v.vv..v..v....v.v..v.v.v..v..vvv.v..v.", "v.v...v.v...v.v...v..v..vvv.v.vv.v.v.vv..v...v.vv.", "v.v.vvv.v..vv.v.v.v.vv..v...v.v..v.v.v...v..vv.v..", "v.v.v...v.vv..v.v.v.v...v.v.v.v..v.v.v..vv..v..v.v", "v.v.v..vv.v...v.v.v.v...v.v.v.v..v.v.v..v...v..v.v", "v.v.v.vv..v.v.v.v.v.v.vvv.v.v...vv.v.v..v...v..v.v", "v.v.v.v...v.v.v.v.v.v.v...v.v.vvv..v.v.vv..vv..v.v", "v.v.v.v.v.v.v.v.v.v.v.v..vv.v.v....v.v.v...v...v.v", "v.v.v.v.v.v...v.v.v.v.v..v..v.....vv.v....vv..vv.v", "v.v.v.v.v....vv.v...v.v..v.vv.vv.vv..v..vvv...v..v", "v.v.v...v..v.v..v.vvv.v..v.v..v..v...v..v....vv..v", "v.v.v..v..vv.v..v.v.....vv.v..v.v...vv..v..vvv...v", "v.v.v.vv.vv..v.vv.v.vvvvv..v.vv.v.vvv..vv.vv...vvv"};
    int dist = 1;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 248320569;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> field = {".vv.v.vv.vv..vv.vv..v..vv..vv.v.v.vv....vvvv....vv", "v..vv......v...v..v.vvvvv.vv..vvv.v.vv.vv.v...v.v.", "..v.v..v..v.vvv..v..v.v.v..vv....v.....v......vvv.", "v...vv...vv.v.v.v.v........vv.vv.....v.....v.vvvv.", "vvvv.v.vv...........v....v.v.....vv.v..vv...vv.v.v", "v.v..v..v.v..v.....v..vvv...v..v...v.v..v.vv..v...", "...v..v.v...v...v..v.v...v..v.vvv.v...vvv....v....", ".v.v.vv.v..v..v.v..v...v...v.....vv.v.v....v..v..v", "...v.....v.v.v..v..vv.v.vvv....v.....vv.....v...vv", "..v......vv....v....v...v.....v...v..vv..v.vv.vv..", "v.v.v.vvvv..v...vv.vv..v......vvv.vvvv.......v.v.v", "v.v.....v.v.....v.v.v..v.v.vvvv......v......v..v..", "...v.....v..vv.vv...v.....vvv..v...v..v.vv.vv.....", "v..v.v..vv.v...v.......vv..........vvv....vvv...v.", "v.vv...v.v..........vv.v.vvv...vv..v..vv.v...v.vv.", "v..v..v.vv....v...vv...v......vvv..v......v....v..", "v..v..vvv....v...vv..v....v...vv.v....vv...v.vv.v.", "v..v..v.....vv...vv.......v...vv....v..v..vv.v..vv", "v..v..v......vv.v.v..v..v.vv..vv......v...vv.....v", ".v.vv.v..v..vv....v..v....v...v.....vv..v.vv.....v", "....vvv..vv.v.v..v...v..v..v..v...vvv..v.v.v....vv", ".vv..v...v..vv.vvv.v.v..v.v..vv...v......v.vv.vvv.", "vv...v...v.....v......v.vv.v...v.vv....v..v..vv...", "vv...v..vvv.vv..v...v...v..vvvv.vv....vv.vv...v...", ".v..v...vv..v..vv.....vv.v....v.v....v..v....vv..v", ".vv.v.v..v...v..v...vv.v.v..v........vvv.....vv..v", "vv..v..vv......v....v..v.......v...vvv..vv...vv..v", ".vv..v.v..v..vv.vv..vv.......v...vv..v......vv...v", "vv...vvv....v..vv..vv..vv..vv...v...v...vv..v....v", "v.....v....v..v.v.............v..vv.....v..v....vv", "vv..v.v...vv....vv.vv..vv...v..v.v.....v.......vv.", "v..vv.v....vv.v.v..v.v.v..vvv.vv.v.........vv.vv.v", ".........v......v...v...v...v.......vvvv..vv..vv..", "...vv..v.vvvv.v..v.v....v..v...v..v.v....vvv...v..", "..vv..v.vv...vv.vv..v...v..vv....vv.v.........vv..", "..vv..........v..v..v.v.v..v..vv..v.....vvvv..v...", ".vv......v..v.v..v..v......v.....vv....vv.....vv..", "...v.....v.v..v..v..vv...v..v.vv...v..vv...v..v..v", "..v..v..vv.....v....vv.....v.vv..vv..vv.....vvv...", "..vvv.v.v.v...v..vv.v....vv.vvvv..v.v..v..v..vv..v", "v.v...v.v...vvv.v....v...v..v.vv.vv........vvvv..v", "v.vv.....v.v.....v...v.v.v........v..v.v..v..v...v", "...v...v..v........v.vv..v..vv.v..v..vvv.v..v....v", "v..vv....vv...vv.vv..v.v.....vvv..vv.v.v...v..v.vv", "..v...vvv....vv..v..v....vv...v...vv.v.......v.vv.", "vv..v...v.v..v....v...v...vv.vv...v...v.v..vv..v.v", "...v..v.......v....vv..vv........vv.....v.vv......", "vv...v...v...vv.....v..v..v...v...v...vv...v......", "vv.v..v..vvvvv...vvvv..v....vvv.v.v..vv..v....v.vv", "v.v.vvv.vv..v.v..v..vv.v..vv...v.vv..v....vvv.vvv."};
    int dist = 2;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> field = {"..vv..vv...v.vv....vvvv..vvv...v.v.vv..v..v..vvv.v", "v...vvv.vv.v.vv.......v..v.v...v...v..v...v.vv...v", "..vv.v...vvvv......vv....v....v...v.....v.v.v.v...", ".v..v....vv.......vvv..........vv..........v..v...", "v.....v..vv.......vv......vv.v.v.......v...v...v.v", "..v........v.....vv.v.....v....v.........vv......v", "......v..vv.....v..v....v..vv.v.....v..vv...v...v.", "..v..v..v.....v...v.......vv.......v..v.v.........", "v.v.v..v.........v...............v.....vvv......vv", "v.v...v....v.....v.....v.v.........v..v.v.....v...", "v.......v....v.v....v.v..v.vv..v.v...v...vv...v.vv", "v.....v........v.vv...v.v......v...v...v.v....v...", "v..........v.v.......v............v..v........vv..", "v...vv.v.....v.v.....vv.........v.........v.....v.", "v...v......vv....v........v...v.v..v.....v.....v..", ".v..v.....vvv.v...v.v.v...v.vv..v..v.....v.v.v....", ".v..v....v..vv......v.....v.........v..vvvv....v..", ".v....v.vv........v......vv.....v.......v.....v..v", "v.v.....v...v...........v.........v.vv..v.........", "v....vv...........v...v.......vv....vv...v.....v.v", "v..v.v.......v.v..v.v.v..v.v..v.........v...vv....", "....v..v.v...v......v.v..v.........vv.....v....vv.", "....v.v....v.vv.v.vv..vv.......v...v.....v...v.v..", "....v..............v....v.v.....v.v.v..vvv...v...v", "..vv..........v..v....v.........v.v.v...v.....v...", "..v.....v....v......v......v..vv.......vv........v", "........vvvvvv.v.........v....v..................v", ".vvv...vv....v.........v....v.v...v.....v...v..vv.", ".vv...v.v.....vv..v.vv....v............vv...v..v..", "v.v.....v......v....v..v..v..v.....v..vv....v...vv", "v.v....v....vvv...vv............v.v....vv...v...v.", ".v....vvv...v.v.v.............v.v......v....v...v.", "......v...v.....v.....v....v..v......v.vv..vv...v.", ".......v.....v..............v.......v..v........vv", "...v..v.v.......vv..v.v.......v.......v.....v...v.", ".v.v.vv..v......vv....v...vvv...v.v..v......v.....", ".v.v.....v..v.vv....vv........v.....vv.......v.vvv", "v.......v...v.............vv....v..v.......vv.....", ".......v.v.....v........v.........v.v....v.v.vv.v.", "...v.....v.v.........v....v...v....v.......v..v..v", "vv.v..vv.....v..v...v...vv........vv...v.........v", "...v..v..v......v..vv.v.v.v..v....v..v....vv...v..", "v...v...........v..v..v.....v.....vv..vv..v.......", "v.v....v.....vv..........v....v.....vv..........v.", "....v.....vv....v...............vvvv.v....v....v..", "v.....v...v...v...v...............vv...vv...v..v.v", "v.....v.......v......vvvv.....vvvvv.vv...v.v...v..", ".v.vv.v..vv.....vv...v.......v.......vvv.......v..", ".v...vv....vv.vv..vvv.v.v..vvv.v.....v..vv..v.v...", "vvv.v.....v...v.vv...vvv.....v.........v...v....v."};
    int dist = 3;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> field = {"...v.....vvv.v...v.vv.v..v...........v...v.vvvv..v", "..v.....vvv.....v.vv.v..v..v....v.vvv...vvvv.....v", "....v..v........vvv..v.v.vv...vv..v.v...v........v", "...v...vvv.....v.v........v...v.vv.....v.v........", "v..vv.........v.vv........v..v..................vv", "...v....v......vvv.....v.......v........v...v...v.", "v..vv...v....v.........v.v.v..v...v.....v.....v..v", "........v....v.vv....vvv...v......v...v.v...v..v.v", "...vv..v.......v.....vv.......vv.v...v......v...vv", "..v.........vv.v....vv..........v.....vv.v..v..vv.", "vv......v.v....v....v......v...v..v.....v....v..v.", "...v........vv..v..vv.......v.........vv.vv.v...v.", ".v....v.v....v.....v......vvv.v.v.v...vv........vv", ".v..v.vv..v....vvv.v......v.....v...v.vv.v.....v.v", "....v.vv.v....vvv.v.....vvv......v....vv...v.....v", ".v..v........vv.v......vv.v...................vvv.", "v..v..........v...........v......vv.v.v....v.....v", "..v..........vv........v.vv...vv.v....v....vv..v..", "...v..v.v....v.v..v..vvv.v.......v.......v.v..v..v", "vv......v...v.v.....vv....v...v.......v....v.....v", "...v...v.v.v..v.................v....vv.v.v......v", ".v...v.v.....v.....v...........v..v..v....v.....vv", "vv......v.v..........vv..vv...v......v.....v......", ".....v...v...v....vv....vv......v.v.......v.....vv", "v....v.....v.vvv.vv.....v....vvv...v..v..vv.v....v", ".....v....v.v...vv....v..........v.v.vv..v......vv", "v..vvv...vv......v...........vv...................", ".v..v.v..v...v.v.........v..vvv.....v............v", "...vv.....v...........vv.........vv........v..v..v", "vvv.......v.....v....v...v..vv....v....v..v...v..v", "....v...v.v..v.........v..........v..v....vv.....v", "v.......v.v....v.v.vvvv......v..vvv.......v..v.v..", "........v.v...v..v....v...v..v..........v.......v.", "v..v..v...v....v.......v........v.....vv..vv......", ".v.....vv......v...v.v....v................v...v.v", ".vvvv....vv.....v.......v.v.v.v..v.vvv....v.....vv", "...v.v.vv...v..vv.....v.v.......vv.....vv...v...v.", ".vv....v......vv...vv..........v....v......v...v..", ".v.............v.....vv.v.....v............vv....v", ".vv..v......v.v.....v...v......v.....v........v...", "vvv......v..v......v..........v....v.....vv.v....v", ".vv..v...v.v...v.......v....v.v....v....vv..v....v", "v........v.........v.....v..vv...v.v..v...v....vvv", "v.............v...vv.v.v.......v...v....vv......v.", "v..v..vv.vv....vv......v.....v......v..v........v.", "vv...vv..v....v...vv.........v.....v.v.v....v..vv.", "......vv.....vv.v......v...v.....v.v.v.........v.v", "v.............v.......v....v.vv..v.vv......v....v.", "vvv..vvv..vv.vv....v....v.vv.....v.v.v...v.v....v.", "vvv.vv.v...v.v....v..vvv...v.....vvv...v.vvvv.vvv."};
    int dist = 3;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> field = {".....v.v...v....v.v...vvv......vv....v.........v.v", ".v...v..v..vv.v..vv..v....v..v....v..v......vv.v.v", "v..v....v.v....vvv.....v.......v....vv....v.......", "v....vv...v.v..v..............v......v.....v....v.", "v......................v......v...v.......vv.vv...", "....v......................vvv............v.......", "......v....v............v.v....v.....vv...vv.....v", "v.v..v..v..v...v....vv..v...v......vv.....v.......", "vv.............v..vv...v...........v.....vv.....v.", "v....vv....v......vv.....v..vv..................vv", "....v........v..v..v......v.........v...v.......vv", "v...............v......v.....v....v.v......v....v.", "v.v....v....vv...........vv...v...v.v...........vv", "v....vv.....vv...v...................v..v...v.vvv.", "...........vv...v.......v...vvvv...v...........v.v", ".v...................v......v..v................v.", "v....v.v..v.............vv.vv.......v.....v.vv...v", ".v....v.....v.....v.v.v.v...........v..v.......v.v", "v..v....v.....v..v....v....................v.v...v", "v.v....v....v...vv...v.......v.......v..v..v......", "v......v..v.v....................v...v.....v......", ".......v......vv...........v.......vvv....v......v", ".v....v....v.....v....v..v.....v..........v.v...v.", "...v....v..........v..v....v.......v......v.....v.", "..v...v.....v.........v......v..v.vv..........v.v.", "...v..v..v......v.....v...vv..........v....v....vv", ".v.....v....vv..v..v.......v....vv......v...v.....", "...vv.....v...v.v...........v...............v.....", ".vv.....vv.v.v......v.vv....v..vv....v.....v....vv", "...v.....vvv........v.v....v.................v..vv", "........vvv...............vv.v..v.......v.v.......", "..vv..v..vv......v.v..........v......vv...v.v.v..v", "..v....v..v..........vv........v........v.....v..v", "...v..v..v........v..............v....v.........v.", "v.vv...........vv.v..v...v.........v..v...........", ".vv.............v.v...v..v.....v.v......v......v..", "vv...........v..vv....vv......v........v.vv...v..v", "vv......v...v...v..v...vv....vv.v....v.v......v.v.", "v.v.....v..vv......v....v.v........v..v......v....", "v..............v.v......v.....v..................v", "v.....v.v...v.....v.........vv.......v...v.....v..", "v.......vv.........................v.v.vv...v.vv.v", "...........v.v........v......v..............v.....", "v.....vv.....vv.....v....v.v.v...v..v.........vv..", ".....v...v...........v.v.v.v.......vv..v....v.v...", "...v.vvvv..........vv.........v..v............v.v.", "v....v.v..........vv..v.vv........................", "..v....vv.....v.....v.....vv......v........vvv..v.", ".vv.vv.v........vv.v...v......v...v...v..vv....v..", "vv..v........vvv.v.vv.....v.v.v.vv....v.vv..vv...v"};
    int dist = 4;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
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
    vector<string> field = {"...v......v.v..vvv.............vvv.v...v....v...vv", "......vv.v..........v..v.....v.v................vv", ".vv.v.....v...........v.v....v.v......v.v...v..vv.", "vvv.v...v........v......v..v................v.....", ".v....vvv......v.vv...v....v...................v..", "............v.v...............vv.......v..v..v....", "......................v...............v...........", "........v.................................v...v...", "....v...............v....v...........v.v....v.v...", ".v.vv...vv....vv...v........v.vv.v...v.v...v......", "...v...v.....v.........v......v............v......", ".vv......v...v...........vv..v....................", ".v..................vv.v.v..v.........vv.........v", ".v.....v......vv....v...v..vv...................v.", ".v.v.................................v.....v......", ".v.v...v...........v.v..........v.v....vv..v.....v", "v...........vv.v...vv............v...v.......v.vvv", "v.v....v.........v................vv...v........vv", ".........v.....vv..........vv.....v..........v..v.", "........v...........vv..v...v.vvv......v..........", "v.v..........vvv...........v.......v..........v...", "........v.....v..............v.....v........v.v..v", "......v.v.v...v..........v..v.......v....v.v......", "........................................v...vv....", "v....v.v.v..........v.v.....v.............v.......", "v...v......................v.......vv............v", "v...v.v.v......v.......vv.................v.v.v...", ".v..v.v..........v......vvv..v....v.v...v.v.......", ".v.............v............v..v............v...v.", "....................v.v............v..............", "................v.......vv.....v...v..v...v.v....v", "......v....................v..............v.......", "v..vv.........v..v......v...v....................v", ".......v.....v...v...vv.......v....v.......v..v...", ".v.v......v.v........v............v...v....v.....v", ".v...v......v.v.v.v.......v.......vv.....v........", "......v.....v.........vv....v..........v...vv...v.", "..v....v....v..............v..............v.v....v", ".v....v..vv.........v...v......v.vv.v............v", ".v..........v...........v..v....v.......vv.......v", "....v....v....v..........v...v....v..............v", "..v....vv..........v.....v..............vv........", "vvv......................vv..v....................", ".....v............vv....v.........v.....v.......vv", ".....................v..v.v............vv......v..", "..v..............v......v..........v.............v", ".vv.......v...v..v..v...........v..v...vv.v.v..v.v", ".v.v............vv.......v......v...v..v....v.v..v", ".v.....vv....v.v.v...v.........vv...vv..........v.", "vv.....v..vvv..v........vv....v..v..v...v........."};
    int dist = 5;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> field = {"vv.v.vv.vv.v.v.vv.v.vv.v.v.vvv.v.vv.vv.vv.v.vv.v.v", "v..v.v..v..v.v.v..v.v..v.v.v...v.v..v..v..v.v..v.v", "v.vv.v.vv.vv.v...vv...vv.v.v.vvv.v..v.vv..v.v.vv.v", "v.v..v.v..v..v.vvv...vv..v.v.v......v.v...v.v.v..v", "v.v.vv.v..v..v.v....vv..vv.v.v.v..v.v.v..vv.v.v..v", "v...v..v.vv..v.v.v.vv...v..v.v.v.vv.v.v.vv..v.v..v", "v..vv.vv.v...v.v.v.v....v..v.v...v..v.v....vv....v", "v.vv..v..v...v.v.v....vvv..v.v..vv..v.v..vvv...v.v", "v.v..vv..v..vv.v....v.v....v.v..v...v.v.vv...v.v.v", "v.v.v....v..v..v..vvv.v..vvv.v..v.vvv.v.v..vvv.v.v", "v.v.v.vv.v..v.vv..v...v..v...v..v.v.....v..v...v.v", "v.v.v.v..v..v.v...v.v...vv.vv...v.v..v.v...v.v.v.v", "v.v...v.vv.vv...v.v...vvv..v..v.v.v..v.v.v.v.v.v.v", "v.v..vv.v..v...vv.v.vvv...vv..v.v.v.vv.v.v.v.v.v.v", "v.v..v..v..v..vv....v...v.v...v.v.v.v..v.v.v.v.v.v", "v.v..v.vv..v..v..vvvv..vv.v.vvv.v.v.v..v.v.v.v.v.v", "v.v..v.v...v.vv.vv.....v..v.v...v.v.v.vv.v.v.v.v.v", "v.v.vv.v.v.v....v..vv.vv.vv.v.vv..v.v.v..v...v.v.v", "v.v.v..v...v..vvv.vv..v..v..v.v..vv.v.v..v..vv.v.v", "v.v.v..v..vv..v...v...v..v..v.v..v..v.v.vv..v..v.v", "v.v.v..v..v...v.vvv..vv..v..v....v.vv.v.v..vv..v.v", "v.v....v.vv..vv.v...vv...v.vv.vv.v.v....v.v....v.v", "..v.vvvv.v..vv..v.v.v..v.v.v..v..v.v...vv.v.vv.v.v", ".vv......v.vv...v...v..v.v.v..v..v.v.vvv..v.v..v.v", "vv...v.vvv.v..vvv..vv.vv.v...vv..v.v.v....v.v..v.v", "v..v.v.v...v.vv....v..v..v..vv..vv.v.v..v.v.v..v.v", "v.v..v.v.v.v.v..v.vv..v.vv.vv..vv..v.v..v.v.v.vv.v", "v.v.vv.v.v.v.v..v.v...v.v..v..v...v....vv.v.v.v..v", "v.v.v..v.v.....vv.v.v.v.v..v.vv.vvv.v.vv..v.v.v..v", "v.v.v..v.v.vv.vv..v.v.v.v..v....v...v.v...v.v.v..v", "v...v..v.v.v..v...v.....v..v..v.v..vv.v..vv.v.v..v", "v..vv..v.v.v.v..v.v..v.vv..v..v.v.vv..v..v..v.v..v", "v..v..vv.v.v.v.vv.v..v.v..vv..v.v.v...v..v..v.v..v", "v..v.vv..v.v.v.v..v..v.v..v...v...v.v.v..v..v.v..v", "v..v.v...v.v.v.v..v.vv.v.vv.vvv..vv.v.v.vv..v.v..v", "v..v.v.v.v.v.v.v..v.v..v.v..v....v..v.......v.v..v", "v..v...v.v.v.v.v..v.v..v.v..v..vvv.vv.vv.v.vv.v..v", "v.vv.vvv.v.v.v....v.v..v.v..v..v...v..v..v.v..v..v", "v.v..v...v.v....v.v.v..v.v.vv..v..vv..v..v....v..v", "v.v..v.v.v....vvv.v.v..v.v.v..vv..v...v..v..v.v..v", "v.v..v.v.v..vvv...v.v..v.v.v.vv..vv.v.v.vv..v.v..v", "v.v.vv.v....v....vv.v.vv.v.v.v...v..v.v.v..vv.v..v", "v.v.v..v.vv.v..v.v..v.v..v...v.v.v..v...v.vv..v..v", "v.v.v.vv.v..v..v.v.vv.v..v..vv.v.v.vv.vvv.v...v..v", "v.v.v.v..v..v..v.v.v.....v..v..v.v.v..v...v.v.v..v", "v.v.v.v.vv..v.vv.v.v..vv.v..v.vv...v..v.vvv.v.v..v", "v.v...v.v...v.v..v.v.vv..v.vv.v...v..vv.v...v.v..v", "v.v..vv.v.vvv.v.vv.v.v...v.v..v.v.v.vv..v...v.v..v", "v.v.vv..v.v...v.v..v.v.v.v.v..v.v.v.v...v..vv.v..v", "v.v.v..vv.v.vvv.v.vv.v.v.v.v.vv.v.v.v.vvv.vv..v.vv"};
    int dist = 1;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 281040072;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> field = {".v.vvvv.v.v.vvv.vv.vvv.v.vv.v.vvvv.v..vv....vv.v.v", ".v.v....v.v.v...v..v...v.v..v.v....v.vv..vvvv..v.v", "vv...vv.v.v.v...v..v..vv.v..v.v..v.v.....v.....v.v", "...vvv..v.v.v.vvv..v..v..v..v.v..v.v.vv.vv...vvv.v", ".v.v...vv.v.v.v...vv..v..v.vv.v.vv.v.v..v...vv...v", ".v.v.vvv..v.v....v....v.vv.v..v.v..v.v.v...vv...vv", ".v.v.v....v.v..v.v.v.vv.v.....v...vv.v.v.v.v..v.v.", "vv.v.v..v.v.v.vv.v.v.v..v.v.vvv..vv..v.v...v.v..v.", "v..v.v..v.v.v.v..v.v.v..v.v.v....v..vv.v..vv.v.vv.", "v.vv.v.vv.v.v.v.vv.v.v..v...v..v.v.vv..v..v..v.v..", "v.v..v.v..v.v.v.v..v.v..v..vv..v.v.v..vv..v..v.v.v", "..v.vv....v.v.v.v..v.v.vv..v..vv.v.v..v..vv.vv.v.v", "vvv.....vvv.v.v.v.vv...v..vv.vv..v.v..v..v..v..v.v", "v....vv.v...v.v.v.v...vv..v..v..v..v.vv..v.v..vv.v", "....vv..v.vvv.v...v.v.v..vv..v..v.vv.v...v.v.vv..v", "vv.vv...v.v...v.vvv.v.v.vv..vv..v.v..v...v.v.v..vv", "v..v...vv.v.vvv.v...v.v.v...v...v.v..v.vvv...v.vv.", "v.vv.v.v..v.v...v.vvv.v.v.v.v.vvv.v..v.v...vvv.v..", "v.v..v.v.vv.v.v.v.v...v.v...v.v...v..v.v...v...v.v", "v.v.vv.v.v..v.v.v.v.v.v.v.vvv.v.v.v..v...vvv.v.v.v", "....v..v...vv.v.v.v.v.v.v.v...v.v.v..v..v....v.v.v", ".v.vv.vv..vv..v.v.v.v.v.v.v..v..v.v..v.vv.vv.v.v.v", "vv.v..v...v..v..v.v.v.v.v.v..v.vv.v.vv.v..v..v.v.v", "v..v.v...vv..v.v..v.v.v.v.v.vv.v..v.v..v..v..v...v", "v.vv.v.vvv...v.v.vv.v.v.v...v..v.vv.v.vv..v.vv..vv", "v.v..v.v.....v.v.v..v.v...vvv.v..v..v.v...v.v...v.", "v.v.vv.v.v..vv.v.v.v..v.vvv...v.vv.v..v.v.v.v..vv.", "v.v.v..v.v.vv..v...v.vv.v...v.v.v....vv.v.v.v..v..", "v.v.v..v.v.v...v..vv.v..v.v.v.v...v.vv....v.v..v.v", "v.v.v.vv.v.v.vvv..v..v.vv.v.v.v..vv.v..v.vv.v..v.v", "v.v.v.v..v.v.v....v.vv....v.v.v..v..v.v..v..v.vv.v", "v.v.v.v..v.v.v.v.vv.v..vv.v.....vv.vv.v.vv..v....v", "v.v.v.v.vv...v...v..v.vv..v.vvvvv..v..v.v...v..vvv", "v.v.v.v.v...vv..v..vv.....v.v......v.vv.v...v..v..", "v.v.v.v.v..vv...v.vv...vv.v.v..v.v.v.v..v..vv.vv.v", "v.v.v.v.v.vv....v......v..v.v..v.v.v...vv..v..v..v", "v.v.v.v.v.v....vv.vv.vvv..v.v..v.v.v..vv...v.vv.vv", "v.v.v.v.v.v.v.vv..v..v....v.v..v.v.v..v..vvv.v..v.", "v.v...v.v...v.v...v..v..vvv.v.vv.v.v.vv..v...v.vv.", "v.v.vvv.v..vv.v.v.v.vv..v...v.v..v.v.v...v..vv.v..", "v.v.v...v.vv..v.v.v.v...v.v.v.v..v.v.v..vv..v..v.v", "v.v.v..vv.v...v.v.v.v...v.v.v.v..v.v.v..v...v..v.v", "v.v.v.vv..v.v.v.v.v.v.vvv.v.v...vv.v.v..v...v..v.v", "v.v.v.v...v.v.v.v.v.v.v...v.v.vvv..v.v.vv..vv..v.v", "v.v.v.v.v.v.v.v.v.v.v.v..vv.v.v....v.v.v...v...v.v", "v.v.v.v.v.v...v.v.v.v.v..v..v.....vv.v....vv..vv.v", "v.v.v.v.v....vv.v...v.v..v.vv.vv.vv..v..vvv...v..v", "v.v.v...v..v.v..v.vvv.v..v.v..v..v...v..v....vv..v", "v.v.v..v..vv.v..v.v.....vv.v..v.v...vv..v..vvv...v", "v.v.v.vv.vv..v.vv.v.vvvvv..v.vv.v.vvv..vv.vv...vvv"};
    int dist = 1;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 248320569;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> field = {".vv.v.vv.vv..vv.vv..v..vv..vv.v.v.vv....vvvv....vv", "v..vv......v...v..v.vvvvv.vv..vvv.v.vv.vv.v...v.v.", "..v.v..v..v.vvv..v..v.v.v..vv....v.....v......vvv.", "v...vv...vv.v.v.v.v........vv.vv.....v.....v.vvvv.", "vvvv.v.vv...........v....v.v.....vv.v..vv...vv.v.v", "v.v..v..v.v..v.....v..vvv...v..v...v.v..v.vv..v...", "...v..v.v...v...v..v.v...v..v.vvv.v...vvv....v....", ".v.v.vv.v..v..v.v..v...v...v.....vv.v.v....v..v..v", "...v.....v.v.v..v..vv.v.vvv....v.....vv.....v...vv", "..v......vv....v....v...v.....v...v..vv..v.vv.vv..", "v.v.v.vvvv..v...vv.vv..v......vvv.vvvv.......v.v.v", "v.v.....v.v.....v.v.v..v.v.vvvv......v......v..v..", "...v.....v..vv.vv...v.....vvv..v...v..v.vv.vv.....", "v..v.v..vv.v...v.......vv..........vvv....vvv...v.", "v.vv...v.v..........vv.v.vvv...vv..v..vv.v...v.vv.", "v..v..v.vv....v...vv...v......vvv..v......v....v..", "v..v..vvv....v...vv..v....v...vv.v....vv...v.vv.v.", "v..v..v.....vv...vv.......v...vv....v..v..vv.v..vv", "v..v..v......vv.v.v..v..v.vv..vv......v...vv.....v", ".v.vv.v..v..vv....v..v....v...v.....vv..v.vv.....v", "....vvv..vv.v.v..v...v..v..v..v...vvv..v.v.v....vv", ".vv..v...v..vv.vvv.v.v..v.v..vv...v......v.vv.vvv.", "vv...v...v.....v......v.vv.v...v.vv....v..v..vv...", "vv...v..vvv.vv..v...v...v..vvvv.vv....vv.vv...v...", ".v..v...vv..v..vv.....vv.v....v.v....v..v....vv..v", ".vv.v.v..v...v..v...vv.v.v..v........vvv.....vv..v", "vv..v..vv......v....v..v.......v...vvv..vv...vv..v", ".vv..v.v..v..vv.vv..vv.......v...vv..v......vv...v", "vv...vvv....v..vv..vv..vv..vv...v...v...vv..v....v", "v.....v....v..v.v.............v..vv.....v..v....vv", "vv..v.v...vv....vv.vv..vv...v..v.v.....v.......vv.", "v..vv.v....vv.v.v..v.v.v..vvv.vv.v.........vv.vv.v", ".........v......v...v...v...v.......vvvv..vv..vv..", "...vv..v.vvvv.v..v.v....v..v...v..v.v....vvv...v..", "..vv..v.vv...vv.vv..v...v..vv....vv.v.........vv..", "..vv..........v..v..v.v.v..v..vv..v.....vvvv..v...", ".vv......v..v.v..v..v......v.....vv....vv.....vv..", "...v.....v.v..v..v..vv...v..v.vv...v..vv...v..v..v", "..v..v..vv.....v....vv.....v.vv..vv..vv.....vvv...", "..vvv.v.v.v...v..vv.v....vv.vvvv..v.v..v..v..vv..v", "v.v...v.v...vvv.v....v...v..v.vv.vv........vvvv..v", "v.vv.....v.v.....v...v.v.v........v..v.v..v..v...v", "...v...v..v........v.vv..v..vv.v..v..vvv.v..v....v", "v..vv....vv...vv.vv..v.v.....vvv..vv.v.v...v..v.vv", "..v...vvv....vv..v..v....vv...v...vv.v.......v.vv.", "vv..v...v.v..v....v...v...vv.vv...v...v.v..vv..v.v", "...v..v.......v....vv..vv........vv.....v.vv......", "vv...v...v...vv.....v..v..v...v...v...vv...v......", "vv.v..v..vvvvv...vvvv..v....vvv.v.v..vv..v....v.vv", "v.v.vvv.vv..v.v..v..vv.v..vv...v.vv..v....vvv.vvv."};
    int dist = 2;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> field = {"..vv..vv...v.vv....vvvv..vvv...v.v.vv..v..v..vvv.v", "v...vvv.vv.v.vv.......v..v.v...v...v..v...v.vv...v", "..vv.v...vvvv......vv....v....v...v.....v.v.v.v...", ".v..v....vv.......vvv..........vv..........v..v...", "v.....v..vv.......vv......vv.v.v.......v...v...v.v", "..v........v.....vv.v.....v....v.........vv......v", "......v..vv.....v..v....v..vv.v.....v..vv...v...v.", "..v..v..v.....v...v.......vv.......v..v.v.........", "v.v.v..v.........v...............v.....vvv......vv", "v.v...v....v.....v.....v.v.........v..v.v.....v...", "v.......v....v.v....v.v..v.vv..v.v...v...vv...v.vv", "v.....v........v.vv...v.v......v...v...v.v....v...", "v..........v.v.......v............v..v........vv..", "v...vv.v.....v.v.....vv.........v.........v.....v.", "v...v......vv....v........v...v.v..v.....v.....v..", ".v..v.....vvv.v...v.v.v...v.vv..v..v.....v.v.v....", ".v..v....v..vv......v.....v.........v..vvvv....v..", ".v....v.vv........v......vv.....v.......v.....v..v", "v.v.....v...v...........v.........v.vv..v.........", "v....vv...........v...v.......vv....vv...v.....v.v", "v..v.v.......v.v..v.v.v..v.v..v.........v...vv....", "....v..v.v...v......v.v..v.........vv.....v....vv.", "....v.v....v.vv.v.vv..vv.......v...v.....v...v.v..", "....v..............v....v.v.....v.v.v..vvv...v...v", "..vv..........v..v....v.........v.v.v...v.....v...", "..v.....v....v......v......v..vv.......vv........v", "........vvvvvv.v.........v....v..................v", ".vvv...vv....v.........v....v.v...v.....v...v..vv.", ".vv...v.v.....vv..v.vv....v............vv...v..v..", "v.v.....v......v....v..v..v..v.....v..vv....v...vv", "v.v....v....vvv...vv............v.v....vv...v...v.", ".v....vvv...v.v.v.............v.v......v....v...v.", "......v...v.....v.....v....v..v......v.vv..vv...v.", ".......v.....v..............v.......v..v........vv", "...v..v.v.......vv..v.v.......v.......v.....v...v.", ".v.v.vv..v......vv....v...vvv...v.v..v......v.....", ".v.v.....v..v.vv....vv........v.....vv.......v.vvv", "v.......v...v.............vv....v..v.......vv.....", ".......v.v.....v........v.........v.v....v.v.vv.v.", "...v.....v.v.........v....v...v....v.......v..v..v", "vv.v..vv.....v..v...v...vv........vv...v.........v", "...v..v..v......v..vv.v.v.v..v....v..v....vv...v..", "v...v...........v..v..v.....v.....vv..vv..v.......", "v.v....v.....vv..........v....v.....vv..........v.", "....v.....vv....v...............vvvv.v....v....v..", "v.....v...v...v...v...............vv...vv...v..v.v", "v.....v.......v......vvvv.....vvvvv.vv...v.v...v..", ".v.vv.v..vv.....vv...v.......v.......vvv.......v..", ".v...vv....vv.vv..vvv.v.v..vvv.v.....v..vv..v.v...", "vvv.v.....v...v.vv...vvv.....v.........v...v....v."};
    int dist = 3;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> field = {"...v.....vvv.v...v.vv.v..v...........v...v.vvvv..v", "..v.....vvv.....v.vv.v..v..v....v.vvv...vvvv.....v", "....v..v........vvv..v.v.vv...vv..v.v...v........v", "...v...vvv.....v.v........v...v.vv.....v.v........", "v..vv.........v.vv........v..v..................vv", "...v....v......vvv.....v.......v........v...v...v.", "v..vv...v....v.........v.v.v..v...v.....v.....v..v", "........v....v.vv....vvv...v......v...v.v...v..v.v", "...vv..v.......v.....vv.......vv.v...v......v...vv", "..v.........vv.v....vv..........v.....vv.v..v..vv.", "vv......v.v....v....v......v...v..v.....v....v..v.", "...v........vv..v..vv.......v.........vv.vv.v...v.", ".v....v.v....v.....v......vvv.v.v.v...vv........vv", ".v..v.vv..v....vvv.v......v.....v...v.vv.v.....v.v", "....v.vv.v....vvv.v.....vvv......v....vv...v.....v", ".v..v........vv.v......vv.v...................vvv.", "v..v..........v...........v......vv.v.v....v.....v", "..v..........vv........v.vv...vv.v....v....vv..v..", "...v..v.v....v.v..v..vvv.v.......v.......v.v..v..v", "vv......v...v.v.....vv....v...v.......v....v.....v", "...v...v.v.v..v.................v....vv.v.v......v", ".v...v.v.....v.....v...........v..v..v....v.....vv", "vv......v.v..........vv..vv...v......v.....v......", ".....v...v...v....vv....vv......v.v.......v.....vv", "v....v.....v.vvv.vv.....v....vvv...v..v..vv.v....v", ".....v....v.v...vv....v..........v.v.vv..v......vv", "v..vvv...vv......v...........vv...................", ".v..v.v..v...v.v.........v..vvv.....v............v", "...vv.....v...........vv.........vv........v..v..v", "vvv.......v.....v....v...v..vv....v....v..v...v..v", "....v...v.v..v.........v..........v..v....vv.....v", "v.......v.v....v.v.vvvv......v..vvv.......v..v.v..", "........v.v...v..v....v...v..v..........v.......v.", "v..v..v...v....v.......v........v.....vv..vv......", ".v.....vv......v...v.v....v................v...v.v", ".vvvv....vv.....v.......v.v.v.v..v.vvv....v.....vv", "...v.v.vv...v..vv.....v.v.......vv.....vv...v...v.", ".vv....v......vv...vv..........v....v......v...v..", ".v.............v.....vv.v.....v............vv....v", ".vv..v......v.v.....v...v......v.....v........v...", "vvv......v..v......v..........v....v.....vv.v....v", ".vv..v...v.v...v.......v....v.v....v....vv..v....v", "v........v.........v.....v..vv...v.v..v...v....vvv", "v.............v...vv.v.v.......v...v....vv......v.", "v..v..vv.vv....vv......v.....v......v..v........v.", "vv...vv..v....v...vv.........v.....v.v.v....v..vv.", "......vv.....vv.v......v...v.....v.v.v.........v.v", "v.............v.......v....v.vv..v.vv......v....v.", "vvv..vvv..vv.vv....v....v.vv.....v.v.v...v.v....v.", "vvv.vv.v...v.v....v..vvv...v.....vvv...v.vvvv.vvv."};
    int dist = 3;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> field = {".....v.v...v....v.v...vvv......vv....v.........v.v", ".v...v..v..vv.v..vv..v....v..v....v..v......vv.v.v", "v..v....v.v....vvv.....v.......v....vv....v.......", "v....vv...v.v..v..............v......v.....v....v.", "v......................v......v...v.......vv.vv...", "....v......................vvv............v.......", "......v....v............v.v....v.....vv...vv.....v", "v.v..v..v..v...v....vv..v...v......vv.....v.......", "vv.............v..vv...v...........v.....vv.....v.", "v....vv....v......vv.....v..vv..................vv", "....v........v..v..v......v.........v...v.......vv", "v...............v......v.....v....v.v......v....v.", "v.v....v....vv...........vv...v...v.v...........vv", "v....vv.....vv...v...................v..v...v.vvv.", "...........vv...v.......v...vvvv...v...........v.v", ".v...................v......v..v................v.", "v....v.v..v.............vv.vv.......v.....v.vv...v", ".v....v.....v.....v.v.v.v...........v..v.......v.v", "v..v....v.....v..v....v....................v.v...v", "v.v....v....v...vv...v.......v.......v..v..v......", "v......v..v.v....................v...v.....v......", ".......v......vv...........v.......vvv....v......v", ".v....v....v.....v....v..v.....v..........v.v...v.", "...v....v..........v..v....v.......v......v.....v.", "..v...v.....v.........v......v..v.vv..........v.v.", "...v..v..v......v.....v...vv..........v....v....vv", ".v.....v....vv..v..v.......v....vv......v...v.....", "...vv.....v...v.v...........v...............v.....", ".vv.....vv.v.v......v.vv....v..vv....v.....v....vv", "...v.....vvv........v.v....v.................v..vv", "........vvv...............vv.v..v.......v.v.......", "..vv..v..vv......v.v..........v......vv...v.v.v..v", "..v....v..v..........vv........v........v.....v..v", "...v..v..v........v..............v....v.........v.", "v.vv...........vv.v..v...v.........v..v...........", ".vv.............v.v...v..v.....v.v......v......v..", "vv...........v..vv....vv......v........v.vv...v..v", "vv......v...v...v..v...vv....vv.v....v.v......v.v.", "v.v.....v..vv......v....v.v........v..v......v....", "v..............v.v......v.....v..................v", "v.....v.v...v.....v.........vv.......v...v.....v..", "v.......vv.........................v.v.vv...v.vv.v", "...........v.v........v......v..............v.....", "v.....vv.....vv.....v....v.v.v...v..v.........vv..", ".....v...v...........v.v.v.v.......vv..v....v.v...", "...v.vvvv..........vv.........v..v............v.v.", "v....v.v..........vv..v.vv........................", "..v....vv.....v.....v.....vv......v........vvv..v.", ".vv.vv.v........vv.v...v......v...v...v..vv....v..", "vv..v........vvv.v.vv.....v.v.v.vv....v.vv..vv...v"};
    int dist = 4;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> field = {"...v......v.v..vvv.............vvv.v...v....v...vv", "......vv.v..........v..v.....v.v................vv", ".vv.v.....v...........v.v....v.v......v.v...v..vv.", "vvv.v...v........v......v..v................v.....", ".v....vvv......v.vv...v....v...................v..", "............v.v...............vv.......v..v..v....", "......................v...............v...........", "........v.................................v...v...", "....v...............v....v...........v.v....v.v...", ".v.vv...vv....vv...v........v.vv.v...v.v...v......", "...v...v.....v.........v......v............v......", ".vv......v...v...........vv..v....................", ".v..................vv.v.v..v.........vv.........v", ".v.....v......vv....v...v..vv...................v.", ".v.v.................................v.....v......", ".v.v...v...........v.v..........v.v....vv..v.....v", "v...........vv.v...vv............v...v.......v.vvv", "v.v....v.........v................vv...v........vv", ".........v.....vv..........vv.....v..........v..v.", "........v...........vv..v...v.vvv......v..........", "v.v..........vvv...........v.......v..........v...", "........v.....v..............v.....v........v.v..v", "......v.v.v...v..........v..v.......v....v.v......", "........................................v...vv....", "v....v.v.v..........v.v.....v.............v.......", "v...v......................v.......vv............v", "v...v.v.v......v.......vv.................v.v.v...", ".v..v.v..........v......vvv..v....v.v...v.v.......", ".v.............v............v..v............v...v.", "....................v.v............v..............", "................v.......vv.....v...v..v...v.v....v", "......v....................v..............v.......", "v..vv.........v..v......v...v....................v", ".......v.....v...v...vv.......v....v.......v..v...", ".v.v......v.v........v............v...v....v.....v", ".v...v......v.v.v.v.......v.......vv.....v........", "......v.....v.........vv....v..........v...vv...v.", "..v....v....v..............v..............v.v....v", ".v....v..vv.........v...v......v.vv.v............v", ".v..........v...........v..v....v.......vv.......v", "....v....v....v..........v...v....v..............v", "..v....vv..........v.....v..............vv........", "vvv......................vv..v....................", ".....v............vv....v.........v.....v.......vv", ".....................v..v.v............vv......v..", "..v..............v......v..........v.............v", ".vv.......v...v..v..v...........v..v...vv.v.v..v.v", ".v.v............vv.......v......v...v..v....v.v..v", ".v.....vv....v.v.v...v.........vv...vv..........v.", "vv.....v..vvv..v........vv....v..v..v...v........."};
    int dist = 5;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> field = {"v.v..................v............................", ".v......v..................v.....................v", "..v.....v....v.........v...............v......v...", ".........vvv...vv.v.........v.v..................v", ".....v..........v......v..v...v.......v...........", "...................vv...............v.v..v.v..v...", ".v.vv.................v..............v............", "..vv.......v...vv.v............vv.....v.....v.....", "....v..........v....v........v.......v.v.v........", ".v.......v.............v.v..........vv......v.....", "....v.v.......v........v.....v.................v..", "....v..v..v.v..............v.v.v....v..........v..", "..........v...v...................v..............v", "..v........v..........................v....v..v...", "....................v..v.........vv........v......", "..v......v...............................v.v......", "..v.v..............v........v...............vv.vv.", "...vv......v...............v.v..............v.....", "............................v..v.................v", ".v.............v.......v..........................", "......v...v........................v..............", ".........v.....v..............vv..................", "................v..v..v.........v....v.......v....", "........v.....v.............v......v.v............", "...........v....................v.v....v.v.v...v..", "...........v......................v...v...........", "..........vv...........v.v.....................v..", ".....................v......v............v...v....", ".....vv..........................vv.v.....v.v.....", ".vv.......v...............v.......v..v.....v......", "............v................v..........v....v....", "................vv...v............................", "................v...........v........v...v....v...", "..v...v...v.............v...v........v....v..v....", "......v..v.......v........v..v....vv..............", "...........v..........v........v.v................", "v.v......v................v....................v..", ".v........v................................v......", "............................v...v.......v.........", "........................vv.v..............v...vv..", ".......................vv........v.............v..", "...v.............v.........................v......", "....v......vv...........................v.........", "....vv....v................v...vv..............v..", "..................................................", "vv........v...v..v.....v..v..................v....", ".........v..............v.vv.v.............v......", ".......v.....v......v...............v.............", "..v..................v................v....v......", ".....v.....v.....................v.v......v......."};
    int dist = 3;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 797922654;
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
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 979857939;
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
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
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
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> field = {"vvv.v.vvv.v.vvv.v.vvv.v.vvv.v.vvv.v.vvv.v.vvv", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v.", ".v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v.", ".v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v.", ".v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v.", ".v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v.", ".v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v.", ".v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v.", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", ".v.v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", "v..vvv.v.vvv.v.vvv.v.vvv.v.vvv.v.vvv.v.vvv.vv"};
    int dist = 1;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 536870911;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> field = {"vvv...vvv...vvv...vvv...vvv...vvv...vvv...vvv", "v.v..vv.v..vv.v..vv.v..vv.v..vv.v..vv.v..vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv..", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv...", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "..vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv..", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv...", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "..vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv..", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv...", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "..vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv..", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv...", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "..vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv..", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv...", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "..vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv..", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv...", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "..vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.v", ".vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv", "vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.", "v.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv..", "vvv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv...", "...vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vv.vvv", "...v.vv..v.vv..v.vv..v.vv..v.vv..v.vv..v.vv.v", "...vvv...vvv...vvv...vvv...vvv...vvv...vvv.vv"};
    int dist = 1;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
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
    vector<string> field = {"v.v..................v............................", ".v......v..................v.....................v", "..v.....v....v.........v...............v......v...", ".........vvv...vv.v.........v.v..................v", ".....v..........v......v..v...v.......v...........", "...................vv...............v.v..v.v..v...", ".v.vv.................v..............v............", "..vv.......v...vv.v............vv.....v.....v.....", "....v..........v....v........v.......v.v.v........", ".v.......v.............v.v..........vv......v.....", "....v.v.......v........v.....v.................v..", "....v..v..v.v..............v.v.v....v..........v..", "..........v...v...................v..............v", "..v........v..........................v....v..v...", "....................v..v.........vv........v......", "..v......v...............................v.v......", "..v.v..............v........v...............vv.vv.", "...vv......v...............v.v..............v.....", "............................v..v.................v", ".v.............v.......v..........................", "......v...v........................v..............", ".........v.....v..............vv..................", "................v..v..v.........v....v.......v....", "........v.....v.............v......v.v............", "...........v....................v.v....v.v.v...v..", "...........v......................v...v...........", "..........vv...........v.v.....................v..", ".....................v......v............v...v....", ".....vv..........................vv.v.....v.v.....", ".vv.......v...............v.......v..v.....v......", "............v................v..........v....v....", "................vv...v............................", "................v...........v........v...v....v...", "..v...v...v.............v...v........v....v..v....", "......v..v.......v........v..v....vv..............", "...........v..........v........v.v................", "v.v......v................v....................v..", ".v........v................................v......", "............................v...v.......v.........", "........................vv.v..............v...vv..", ".......................vv........v.............v..", "...v.............v.........................v......", "....v......vv...........................v.........", "....vv....v................v...vv..............v..", "..................................................", "vv........v...v..v.....v..v..................v....", ".........v..............v.vv.v.............v......", ".......v.....v......v...............v.............", "..v..................v................v....v......", ".....v.....v.....................v.v......v......."};
    int dist = 4;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 255;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> field = {"v.v..................v...............vv...vv......", ".v......v..................v......vv.............v", "..v.....v....v.........v..........v....v..v...v...", ".........vvv...vv.v.........v.v..........v.......v", ".....v..........v......v..v...v.......v..v........", "...................vv...............v.v..v.v..v...", ".v.vv.................v..............v...v........", "..vv.......v...vv.v............vv.....v..v..v.....", "....v..........v....v........v.......v.v.v........", ".v.......v.............v.v..........vv......v.....", "....v.v.......v........v.....v.................v..", "....v..v..v.v..............v.v.v....v..........v..", "..........v...v...................v..............v", "..v........v..............v...........v....v..v...", "....................v..v..v......vv........v......", "..v......v................v..vv.....v....v.v......", "..v.v..............v........v.......v.v.....vv.vv.", "...vv......v...............v.v........v.....v.....", "............................v..v........v........v", ".v.............v.......v................vv........", "......v...v........................v..............", ".........v.....v..............vv..................", "................v..v..v.........v....v.......v....", "........v.....v.............v......v.v............", "...........v....................v.v....v.v.v...v..", "...........v......................v...v...........", "..........vv...........v.v.....................v..", ".....................v......v............v...v....", ".....vv..........................vv.v.....v.v.....", ".vv.......v...............v.......v..v.....v......", "............v................v..........v....v....", "................vv...v............................", "................v...........v........v...v....v...", "..v...v...v.............v...v........v....v..v....", "......v..v.......v........v..v....vv..............", "...........v..........v........v.v................", "v.v......v................v....................v..", ".v........v................................v......", "............................v...v.......v.........", "...........vvvv.........vv.v..............v...vv..", ".......................vv........v.............v..", "...v.............v.........................v......", "....v......vv...........................v.........", "....vv....v................v...vv........v.....v..", ".....................................v.v.v........", "vv........v...v..v.....v..v........vv........v....", ".........v..............v.vv.v.............v......", ".......v.....v......v...............v.............", "..v..................v...vvv..........v....v......", ".....v.....v.............vvvv....v.v......v......."};
    int dist = 2;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 659954038;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> field = {"v.v..................v............................", ".v......v..................v.....................v", "..v.....v....v.........v...............v......v...", ".........vvv...vv.v.........v.v..................v", ".....v..........v......v..v...v.......v...........", "...................vv...............v.v..v.v..v...", ".v.vv.................v..............v............", "..vv.......v...vv.v............vv.....v.....v.....", "....v..........v....v........v.......v.v.v........", ".v.......v.............v.v..........vv......v.....", "....v.v.......v........v.....v.................v..", "....v..v..v.v..............v.v.v....v..........v..", "..........v...v...................v..............v", "..v........v..........................v....v..v...", "....................v..v.........vv........v......", "..v......v...............................v.v......", "..v.v..............v........v...............vv.vv.", "...vv......v...............v.v..............v.....", "............................v..v.................v", ".v.............v.......v..........................", "......v...v........................v..............", ".........v.....v..............vv..................", "................v..v..v.........v....v.......v....", "........v.....v.............v......v.v............", "...........v....................v.v....v.v.v...v..", "...........v......................v...v...........", "..........vv...........v.v.....................v..", ".....................v......v............v...v....", ".....vv..........................vv.v.....v.v.....", ".vv.......v...............v.......v..v.....v......", "............v................v..........v....v....", "................vv...v............................", "................v...........v........v...v....v...", "..v...v...v.............v...v........v....v..v....", "......v..v.......v........v..v....vv..............", "...........v..........v........v.v................", "v.v......v................v....................v..", ".v........v................................v......", "............................v...v.......v.........", "........................vv.v..............v...vv..", ".......................vv........v.............v..", "...v.............v.........................v......", "....v......vv...........................v.........", "....vv....v................v...vv..............v..", "..................................................", "vv........v...v..v.....v..v..................v....", ".........v..............v.vv.v.............v......", ".......v.....v......v...............v.............", "..v..................v................v....v......", ".....v.....v.....................v.v......v......."};
    int dist = 3;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 797922654;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> field = {"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
    int dist = 0;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 749218515;
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
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
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
    vector<string> field = {"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv."};
    int dist = 0;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 22824456;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> field = {"v.v..................v...v........................", ".v......v...............v..v.....................v", "..v.....v....v.........v...............v......v...", ".........vvv...vv.v.........v.v..................v", ".....v..........v......v..v...v.......v...........", "...................vv...............v.v..v.v..v...", ".v.vv..............v..v..............v............", "..vv.......v...vv..............vv.....v.....v.....", "....v..........v....v........v.......v.v.v........", ".v.......v.............v.v..........vv......v.....", "....v.v.......v........v.....v.................vv.", "....v..v..v.v..............v.v.v....v..........v..", "..........v...v...................v..............v", "..v........v..........................v....v..v...", "....................v..v.........vv........v......", "..v......v...............................v.v......", "..v.v..............v........v...............vv.vv.", "...vv......v...............v.v..............v.....", "............................v....................v", ".v.............v.......v..........................", "......v...v........................v..............", ".........v.....v..............vv..................", "................v..v..v.........v....v.......v....", "........v.....v.............v......v.v............", "...........v....................v.v....v.v.v...v..", "...........v......................v...v...........", "..........vv...........v.v.....................v..", ".....................v..v...v............v...v....", ".....vv..........................vv.v.....v.v.....", ".vv.......v...............v.......v..v.....v......", "............v.............v..v..........v....v....", "................vv...v............................", "................v...........v........v...v....v...", "..v...v...v.............v...v........v....v..v....", "......v..v.......v........v..v....vv..............", "...........v.....v....v........v.v................", "v.v......v................v....................v..", ".v........v................................v......", "............................v...v.......v.........", "........................vv.v..............v...vv..", "....................v..vv........v.............v..", "...v.............v.........................v......", "....v......vv...........................v.........", "....vv....v................v...vv..............v..", "......v...........................................", "vv........v...v..v.....v..v..................v....", ".........v..............v.v..v.............v......", ".......v.....v......vv............................", "..v..................v................v....v......", ".....v.....v.....................v.v......v......."};
    int dist = 3;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 595845302;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> field = {"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
    int dist = 1;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
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
    vector<string> field = {"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
    int dist = 0;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 979857939;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> field = {"v.v..................v............................", ".v......v..................v.....................v", "..v.....v....v.........v...............v......v...", ".........vvv...vv.v.........v.v..................v", ".....v..........v......v..v...v.......v...........", "...................vv...............v.v..v.v..v...", ".v.vv.................v..............v............", "..vv.......v...vv.v............vv.....v.....v.....", "....v..........v....v........v.......v.v.v........", ".v.......v.............v.v..........vv......v.....", "....v.v.......v........v.....v.................v..", "....v..v..v.v..............v.v.v....v......vv..v..", "..........v...v...................v..............v", "..v........v..........................vvvvvvv.v...", "....................v..v.........vv........v......", "..v......v...............................v.v......", "..v.v..............v........v...............vv.vv.", "...vv......v...............v.v..............v.....", "............................v..v.................v", ".v.............v.......v..........................", "......v...v........................v..............", ".........v.....v..............vv..................", "................v..v..v.........v....v.......v....", "........v.....v.............v......v.v............", "...........v....................v.v....v.v.v...v..", "...........v......................v...v...........", "..........vv...........v.v.....................v..", ".....................v......v............v...v....", ".....vv..........................vv.v.....v.v.....", ".vv.......v...............v.......v..v.....v......", "............v................v..........v....v....", "................vv...v............................", "................v...........v........v...v....v...", "..v...v...v.............v...v........v....v..v....", "......v..v.......v........v..v....vv..............", "...........v..........v........v.v................", "v.v......v................v....................v..", ".v........v................................v......", "............................v...v.......v.........", "........................vv.v..............v...vv..", ".......................vv........v.............v..", "...v.............v.........................v......", "....v......vv...........................v.........", "....vv....v................v...vv..............v..", "..................................................", "vv........v...v..v.....v..v..................v....", ".........v..............v.vv.v.............v......", ".......v.....v......v...............v.............", "..v..................v................v....v......", ".....v.....v.....................v.v......v......."};
    int dist = 3;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 949480668;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> field = {"v.v..................v.........vvvvv..............", ".v......v....vvvvv.........v.........vvvvvvv.....v", "..v.....v....v.........v........v......v......v...", "...vv....vvv...vv.v.........v.v..................v", ".....v..........v......v..v...v.......v...........", "...................vv...............v.v..v.v..v...", ".v.vv.................v..............v............", "..vv.......v...vv.v............vv.....v.....v.....", "....v..........v....v........v.......v.v.v........", ".v.......v.............v.v..........vv......v.....", "....v.v.......v........v.....v.................v..", "....v..v..v.v..............v.v.v....v..........v..", "..........v...v...................v..............v", "..v........v..........................v....v..v...", "....................v..v.........vv........v......", "..v......v...............................v.v......", "..v.v..............v........v...............vv.vv.", "...vv......v...............v.v..............v.....", "............................v..v.................v", ".v.............v.......v..........................", "......v...v........................v..............", ".........v.....v..............vv..................", "................v..v..v.........v....v.......v....", "........v.....v.............v......v.v............", "...........v....................v.v....v.v.v...v..", "...........v......................v...v...........", "..........vv...........v.v.....................v..", ".....................v......v............v...v....", ".....vv..........................vv.v.....v.v.....", ".vv.......v...............v.......v..v.....v......", "............v................v..........v....v....", "................vv...v............................", "................v...........v........v...v....v...", "..v...v...v.............v...v........v....v..v....", "......v..v.......v........v..v....vv..............", "...........v..........v........v.v................", "v.v......v................v....................v..", ".v........v................................v......", "............................v...v.......v.........", "........................vv.v..............v...vv..", ".......................vv........v.............v..", "...v.............v.........................v......", "....v......vv...........................v.........", "....vv....v................v...vv..............v..", "..................................................", "vv........v...v..v.....v..v..................v....", ".........v..............v.vv.v.............v......", ".......v.....v......v...............v.............", "..v..................v................v....v......", ".....v.....v.....................v.v......v......."};
    int dist = 3;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 949480668;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> field = {"vvvvvvvvvvv"};
    int dist = 5;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> field = {"vv.", ".v."};
    int dist = 2;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> field = {".v.vv....v..vvvvvvvvv.v..vvvvvv....vvvv.vv.vvv..vv", "v.vvv.vvvvvv.vv..v.v...v..vvv.v.vvvv.....vvv..vv..", "....v..vvvv..vv...vvv..v..vv.....v..v....v..vv.v.v", "vvv....vvvvv.....vvv...v...v....vv.v.v..v...vvvv.v", "v..v.vvv.v..vv.v.v...v.v.....v.vvvvvvvv.v..v.v.v..", "..v..vvvv.vv..v.v.vvvvvv..v..v..v..v.v.v.vvvvvv.vv", "v...v.vvv..vvvvvv.vvv.v.vv..v..vvv.....vvv...vvvvv", "vv....vvv...vv......v.v..vv.vv.vv.....v.v.vv....v.", "v...vvvv.vv.v.v..vv.v.vvv.v.v...v..vvvv.v....v.vvv", ".v..v...vvvv..vv..v......vvvvvv...vv.vvv..vv..v.v.", "v....v.v.vv.vv....v..v...v..vv.v......v.vv..v.v.v.", ".vv.v....vv..v.v.vv....vvvv....v....v.vv..v...v...", "..v.v.v.vvv..vvvv..v.vvvvv....v.vvvv..v..vvv......", ".v..vvvvvv....vv...v.v..vv..v.vvv..v.v.v.vvvv..vvv", "....vvv.vvvvv...vv..v..vv...vvv.v.vvvvv.vvvv....v.", ".v....vvv...vv...v.vv...v.v.....vvvvvv..v....vvv..", "v..v.v.vvv..vvv.vvvvvv........v...vvvvvvvv.vvv.vv.", "v.vv.vv...v..vvvvvv...vv...v.vvvvv.v....v.vvv..v..", "vv.v..v..vv....v.vvvvv.v..v.v.vvv..v..v....v....vv", ".vvvvv.vvv.v.v.....vv..vv.vvv.v.vv..vvvvv.vv.v.vvv", "vvvv.vv....vv.v.vvvvvvv.vv...v.vv....vvv..v.vvv...", ".....vvvvv...vv.v.v..vv.vv.v.v.vvvv..v.vvvv...v..v", ".v....v.vvv.v..v...vvv..v...v.vv.v..vvv..v.vvvvvv.", ".v.v..vv.vvv.v..vvv.vv..v...vv.v..v......vv.vv..v.", "v...v..vvv.v..vvv.vvvvvv..vvvvvv..vv.vv..v...v.vv.", "v..vvvv..vvvvvv.v..v.vvv.v.vv....v.vv..vvvvvvv...v", "vv....v.vvvvvvv..vvvvvvv.v..v.vvvv....vv..vv..vv.v", "vvv..vv..v...v........v..v...v..vv..v.vv.vv..vv...", "..v.v.........vv.vvvvvvvvvvvvvv.v...v.v..vv..vvvv.", "..v...v.vv...vvvv.vv..vv.vvv...v..v.vvv....v.vv..v", ".v.v.v.vvv........vvvvv.vv..v.vvv.vv.v..v..vvvvvvv", "vv.....v..v.....v...v.v.vvv..vvvvvv...vv...v..vvvv", ".vv.vv..v.vv.v.vv..vvv..v...v......vv..v....vvv...", ".vvvvvvv.vvv..v.v.vvvv.v..v..v..v.v...vv..v...v...", "vv.v...v....vv....v.v...vv..v.v..vvvv.v..v..v.v..v", "vv....v..vvv.v.v.v.v..v...vvvvvv.v...vv.v.vvvvvv..", "vv...vvv.v.v.vvvvv...v.vv.vvvv.v.v..v.v...v.vvvvv.", ".v.vvvvvvv..vvv..v.vv..v..v..v.vvvvv....vvvvv.vvvv", "v.vv.vvv.v.vvvvvv..v.v.vvv.v..v....vv.vv.vvvvvvv..", "v...vvvvv...vvv.vv..v.v....vv...vv.vvvv..v...v.v.v", ".v.vvv....v..vv..v.v.v.vv.....vv..v..v.vvvv...v.v.", "...vvv..v.v..vv.v.vv.vvv..vvv...vvvvv.v..v..v.v.vv", ".v.vvvv......vvvv.vv....v.v....vvv......vvv..vvv.v", "..v.v.vvvv.v.vv..v.vvvv.vv.......v......vv..v...vv", "v..v...v.v..v...vv.v.vvvvvvvv...vv..vv.v..v.v..vvv", "v..vvvv..v..v....vvvvvv.vv..vvv...v.v..v..vv.vvvv.", "..vvv..v.v.v.......vv.vvv.v.v.v.vv.vv...vv.vvvvvvv", "v....vv....vvvv..vv.v..v...v.v..v..v..v.v.v......v", "vvvv.vvvvvvv..v.v..vvv.vvv..vvvvv.vvvv.vvv.vvv....", ".vv..vv.v.v....v.v.vvv.vvvv.vvvv.v.vv..v.vv...v..."};
    int dist = 2;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> field = {"vvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvv"};
    int dist = 0;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 976371284;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> field = {"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
    int dist = 0;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 534224230;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> field = {"v...v", "v...v", "v...v", "v...v", "vvvvv"};
    int dist = 1;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
    clock_t start = clock();
    int result = pObj->count(field, dist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> field = {"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
    int dist = 100;
    GooseInZooDivTwo* pObj = new GooseInZooDivTwo();
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22920525&rd=15498&pm=12545
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
 
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define UNIQ(v) sort(ALL(v)),v.erase(unique(ALL(v)),(v).end())
 
typedef long long ll;
typedef long double ld;
 
class GooseInZooDivTwo {
public:
  int count(vector <string>, int);
};
 
vector< pair<int, int> > bds;
vector<bool> used;
int dist;
 
void dfs(int v)
{
  used[v] = 1;
  for (size_t i = 0; i < bds.size(); ++i)
  {
    if (!used[i] && abs(bds[v].first-bds[i].first) + abs(bds[v].second-bds[i].second) <= dist)
      dfs(i);
  }
}
 
int GooseInZooDivTwo::count(vector <string> field, int _dist) 
{
  dist = _dist;
  for (size_t i = 0; i < field.size(); ++i)
    for (size_t j = 0; j < field[0].size(); ++j)
      if (field[i][j] == 'v')
        bds.push_back(make_pair(i,j));
  int n = bds.size();
  used.resize(n, 0);
  long long d = 0;
  for (int i = 0; i < n; ++i)
    if (!used[i])
    {
      ++d;
      dfs(i);
    }
  if (!d)
    return 0;
  long long ans = 1;
  for (int i = 0; i < d; ++i)
    ans = (ans*2) % 1000000007;
  ans = (ans-1+1000000007) % 1000000007;
  return (int)ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/