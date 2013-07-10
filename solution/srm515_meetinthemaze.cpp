/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11507
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

class MeetInTheMaze {
public:
    string getExpected(vector<string> maze);
};

string MeetInTheMaze::getExpected(vector<string> maze) {
    string ret;
    return ret;
}


int test0() {
    vector<string> maze = {"#########", "####F####", "##L...R##", "####L####", "#########"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "9/2";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> maze = {"LR", "RF"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "2/1";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> maze = {"..F.#...", "L.F.#..L", "..F.#...", ".R.#..L.", "...#....", "..R#.L.."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> maze = {".L..L..L..", "..........", "..........", "..........", "........R.", "...R......", "..........", "..........", "..........", ".......F.."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "40/3";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> maze = {"#.#....#...#.#", "#...#..#......", ".L#...#R#..#F.", "#...#......#..", "#......#.....#", ".R.....F....L.", "##..#.......#.", "#........##...", ".F...##L#..#R#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "362/27";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> maze = {"LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLFLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFFLLLLLLLLLLRLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLFLLLLLLLLLLLLLLF", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLF", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLL", "LLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRRL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLR", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLFFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "FLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLFLLLLLLLLLRLLLLLLLLLLLLLLLLLLLRLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLFLLLLLLLLLLLLLLLLRLLLLLLLLLRLLLLLLLLLLLLRLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "FLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLL"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "210623/4100";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> maze = {"L.#.L..L#...LL#.LLLL#LLL..#.LL.L#LL..F#LL...#LL.LL", ".#..#L.#.L#LL#LL#LL#LL#L.#.L#.L#LL#.L#..#RL#L.#..#", "..L#.L#.L#.L#.L#LL#.L#.L#L.#.R#.L#..#LL#L.#LL#..#.", "..#.L#LL#LL#LL#..#L.#LL#LL#.L#L.#LL#L.#.L#L.#L.#L.", "L#L.#LL#LL#LL#LL#L.#L.#.L#..#LL#.L#.L#L.#L.#L.#LLL", "#L.#LL#LL#..#LL#L.#..#..#.L#LL#.L#..#LL#L.#L.#..#L", "L.#..#L.#..#.L#L.#L.#.L#.L#L.#LL#LL#L.#LL#.L#L.#L.", "L#L.#L.#LL#L.#.L#L.#LL#.L#.L#L.#L.#L.#LL#.L#.L#.L#", ".LL#..#L.#..#..#FL#..#.L#L.#LL#LL#..#..#LL#LL#.L#.", "LL#.L#LL#..#L.#LL#L.#LL#.L#..#F.#.L#L.#.L#LL#.L#LL", "L#LL#LL#LL#L.#..#LL#.L#.L#L.#LL#..#..#L.#L.#..#L.L", "#..#LL#LL#LL#LL#LF#..#LL#LL#LL#LL#.L#LL#LR#LL#LL#L", ".L#LL#..#.L#.L#L.#..#LL#.L#.L#L.#L.#LL#L.#.L#L.#LL", ".#LL#.L#..#..#.L#L.#.L#LL#.L#.L#LL#..#..#L.#.L#L.#", "L..#..#LL#LL#LL#.L#L.#LL#L.#LR#L.#L.#..#LL#LL#LL#L", "LL#.L#L.#..#LL#LL#LL#LL#LL#LL#LL#L.#LL#..#.L#..#.L", ".#LL#..#L.#L.#LL#..#LL#LL#.L#LL#L.#.L#L.#..#LL#LRL", "#.L#..#LL#L.#.L#LL#..#.F#L.#L.#LL#LL#..#LL#LL#LL#.", "F.#LL#.L#..#LL#L.#LL#L.#LL#.L#LL#..#L.#L.#.R#.L#LL", "R#LL#LL#LL#L.#.L#L.#LL#LL#.L#.L#LL#L.#LL#.L#.L#..#", "LLL#..#.L#LL#..#..#.L#L.#.R#..#LL#LL#LL#..#LL#RL#L", ".L#L.#.L#.L#.L#LL#L.#L.#..#LL#L.#LL#.L#LL#.L#.L#LL", "L#LL#..#..#LL#L.#LL#.L#..#.L#L.#.L#LL#..#LL#L.#LL.", "#LL#LL#.L#FL#LL#..#..#LL#.L#LL#L.#..#.L#LL#..#LL#L", ".L#.F#L.#.L#L.#.L#L.#L.#LL#.L#LL#..#.L#L.#.L#..#LL", "L#.L#LL#LL#L.#LL#L.#.L#..#L.#.L#LL#L.#LL#.L#LL#.L#", "LLL#L.#L.#LL#.L#..#LF#FL#.L#L.#LL#L.#LL#.L#LL#L.#L", "L.#L.#LL#L.#L.#..#LL#.L#L.#L.#.L#LL#LL#LL#.L#L.#LL", "L#L.#..#.L#..#.R#L.#L.#..#.L#L.#..#LL#.L#LL#.L#LLL", "#LL#..#.L#L.#LL#LL#L.#LR#LL#LL#..#L.#R.#..#L.#LL#L", ".L#.L#L.#LL#L.#LL#LL#.L#LL#.L#L.#..#..#L.#.L#LL#LL", "L#..#L.#LL#LL#L.#LL#L.#.L#L.#..#.L#LL#.L#.L#L.#..#", "L.L#FL#.L#.L#L.#.L#.L#L.#..#LL#LL#.L#LL#L.#LL#LR#.", "L.#L.#LL#.L#L.#.L#LL#LL#.L#.L#L.#LL#LL#..#.L#.L#LL", "L#L.#.L#LL#..#LL#L.#..#.L#..#L.#.L#.L#L.#LL#.L#.L.", "#L.#LL#L.#.L#LL#LL#.L#L.#F.#..#LL#L.#L.#LL#..#LL#L", ".L#.L#..#L.#LL#LL#LF#LL#LL#L.#.L#..#R.#.L#.L#L.#LL", "L#..#LL#LL#L.#LL#.L#L.#LL#LL#.L#LL#..#..#L.#L.#..#", ".L.#.L#L.#LL#..#.L#L.#..#LL#LR#LL#L.#.L#LL#.L#LL#L", "LL#L.#..#.L#LL#.L#L.#..#LR#L.#.L#..#L.#L.#LR#LL#L.", "L#.L#..#LL#L.#..#LL#L.#L.#LL#LL#..#..#LR#LL#LL#LLL", "#..#LL#F.#LL#.L#LL#LL#L.#L.#LL#LL#LL#.L#L.#..#LL#L", "L.#L.#.L#..#.L#LL#LL#LL#LL#LL#.L#L.#.L#LL#LL#.L#.L", "L#LL#.L#..#LL#LL#LL#..#.L#LL#.L#..#.L#.L#LL#.L#.L#", "LL.#L.#LL#FL#.L#F.#..#.L#.L#..#..#L.#LL#LL#LL#.L#.", "LL#LL#L.#F.#LL#L.#.L#LL#FL#LF#L.#L.#LL#LL#..#LL#L.", "L#LL#.L#L.#L.#L.#.L#LL#..#.L#L.#LL#.L#..#LL#..#LLL", "#..#LL#.L#.L#.L#..#LL#LL#L.#L.#.L#LL#LL#LL#.L#LL#.", ".L#LL#LL#.L#.L#.L#.L#.L#LL#.L#LL#L.#RL#.L#..#L.#LL", "..LL#RL.L.#LLLLL#L.LLL#L.LFL#LLL.L#LLLL.#L.LLL#L.."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "494559/625";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> maze = {"LL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLF#LLLLL#LLLLL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LR#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#FL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#FL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LF#LL#LL#LL#LL#LL#LL#LL#LR#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LR#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LRL", "#LL#LL#LL#LL#LL#LL#LL#LF#LL#LL#LL#LL#LL#LL#LL#LL#L", "FL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LR#LL#LL", "R#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LR#LL#LL#LL#LL#LL#LL#RL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#FL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LF#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LF#FL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LR#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LR#LL#LL#LL#LL#RL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#FL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LR#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#FL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LF#LL#LL#LL#LL#LL#RL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LR#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LR#LL#LL#LL#LL#LL#LR#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LR#LL#LL#LLL", "#LL#LL#FL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#FL#LL#FL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#FL#LL#LL#LL#LL#FL#LF#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RL#LL#LL#LL#LL", "LLLL#RLLLL#LLLLL#LLLLL#LLLFL#LLLLL#LLLLL#LLLLL#LLL"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "26257703/33200";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> maze = {"LRF"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "2/1";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> maze = {"L", "R", "F"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "2/1";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> maze = {"R..F.......L.............#...."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "11/1";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> maze = {"LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLFLL#.", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFFLLLLLLLLLLRLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLFLLLLLLLLLLLLLLF", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLF", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLL", "LLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRRL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLR", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLFFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "FLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLFLLLLLLLLLRLLLLLLLLLLLLLLLLLLLRLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLFLLLLLLLLLLLLLLLLRLLLLLLLLLRLLLLLLLLLLLLRLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "FLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLL"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "7210321/140400";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> maze = {"LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLFLL#L", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFFLLLLLLLLLLRLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLFLLLLLLLLLLLLLLF", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLF", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLL", "LLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRRL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLR", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLFFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "FLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLFLLLLLLLLLRLLLLLLLLLLLLLLLLLLLRLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLFLLLLLLLLLLLLLLLLRLLLLLLLLLRLLLLLLLLLLLLRLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "FLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLL"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> maze = {"F.................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", ".......................L..........................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################R"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "1274/1";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> maze = {"FFFFFFFFFFFFFFFFFFF...F...........................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", ".......................L..........................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "..................................................", "#################################################.", "..................................................", ".#################################################", "...........................R....RRRRRRRRRRRRRRRRRR", "#################################################R"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "25093/20";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> maze = {"##################################################", "#..LLL#L.L.L.LLL..#...#..L#..L#LLLLL.LL.#L..LL....", "###.#######L#########.#.###L###.#.#L###.###.###L##", "#....L#.....#L#L#L#LLLFLL.#.L.#.#.#..L#.#.#L#.#.LL", "#.###L###L#L#L#.#L#.#.#####.#######.#.#.#L#L#.###.", "#F#.RLL.L.#...#L.L.L#L#L..#L.LLL..#.#L#L#L.R#.#.#L", "###L#####L###.#L###L#####F#L#####.#####L#####L#L#.", "#.LL#.#...L.#LL.#L#L.F.L..#L..L.#LLL..LL#.#L..#LLL", "#####L#.#####.###L###L###.#L#.###L###.#L#.#L###L#.", "#.#RL.#.#.LL#LL.LL#...#L#L.L#.#L#L#L#L#L#.#L.L#L#L", "#.###.#####L#####L#####.###L###.#.#L#####L#L#.#.#.", "#LR.#..L.L#..LLL...L#.L.#L#L.L.L#..L.L#.#...#LF.#.", "###L#L###########L#####L#L#####R#.#.###.#######L##", "#LL...LR..L...#L#L#..L#LLLLL#L..#L#..LLL..L.#L...L", "#.#.#####.#####L#####L###L#######.#########L###.#L", "#L#L#L...L.L..#.#L..#.LLL.#.L.L.#LLL#L..#L#LL..L#.", "#.#L#.#.#####.#.###L#####.###.#####L#L###.#L#L####", "#.#L#.#.L.LL#.L.L.LL#.#...#.#...#L#LLL.L#L#.#.LL#.", "###L#.#########.###L#.#.#.#L###.#L#######.#L#L###.", "#L.L#..L#L.LLL#.#.#L#LLL#.R....FLLL..L.LLL#L#...#.", "#.###.###.#L#L###.#.#.#.###L#.#####.#L#L###.###L#L", "#.#LL.LL#L#.#L#L#.L...#L.L#L#L#.#L..#.#LLLLLLL#L#.", "###.#.#######.#L#####.#####L###L###L#L###L#######L", "#LLL#.LR...L#.#LLL#LL..LRL#.#L#L#FL.#L..#L#.#L#LL.", "###L#.#####.#L#L#####.#######.#.###.###L###L#L###L", "#..L#LL.#..LL.L.#L...LLL..#LL.LL.L#.#L.L#.L.L.#.#.", "###L#.###L###L#.###L#####L###.#####.###.#.#.###.#.", "#.#.#.#.L.#.FL#LLL#L#L..#.#.LL..#.#.#LLL#L#.LL#..L", "#L#L#L###.###.###L#.#L#####L#L###L###L#####.#.#L##", "#LLL#L#..R#...#...#.#L#L#L#L#LL.L.#L#.#.L.#.#L...L", "#.#L###.###.#####.###.#L#L#L#####.#.###.###.#L###.", "#L#L#L#L#L#L#..RL.L.#LLL#LL...#L.LLL#L.LL.#L#L#L#.", "#.###.###L#.#####L#####L#L#L#L#####.#####L#####L#.", "#.#.L.#F#L.LL.#.L..L.L..LL#L#...#LL.#.L.R.L.L...LL", "###L###L###L#.#L#####L#############L#.#.###.######", "#.LL..#.L.#.#.#..L..#L...L..#.L.#LLR#L#LL.#L#L..LL", "###.#.###L#L#########.#L#######.###L#######L#.#L#L", "#FL.#R.L#.#L#LL.#L#LLL#L.L.L#.L.#L#.#.#LLL#L#.#L#.", "#.#####L#L#.###L#L#L#######.###.#L#.#.###L#.#####L", "#.LL#..L..#L#.L.#.....#LR.#.LLL.#.#LL.#.#L#L#.#LL.", "#########L#L###L###L###.#L#.#.#.#.#####.#.#L#.###L", "#.#L#.#.L.L.LL#..L#.LL..#L#.#L#.L.L.#LL.LLFLL.LRL.", "#L#.#.###########L###########L###.#########.#.#.##", "#LLLLL#.#.#LLL#L.L#L..#.LL#.#L#.LR#..LLL.LL.#L#LL.", "###L#.#L#L#.#L#L###.#.###L#L#L#####L#####.###L###L", "#L.L#L#LLLL.#..L.L#.#L#.L.#.F.....#L#LFL#L.L#.#L.L", "#L###L#L#L#L#L###L#.#####L###.#L#L#L#L#########L##", "#.#.R.L.#.#L#.L.#LLLL.L.L.#..L#.#..LL.LLLL#....LRL", "#######L#######L#######L###.#L###L#.#L#########.#L", "#LL..RL.#.LLL.L.#...LL.L.LLL#.#...#.#L.L.LLL.L#L#."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "4470717/32500";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> maze = {"##################################################", "#LLLLL#LLLLLLLLLLL#LLL#LLL#LLL#LLLLLLLLL#LLLLLLLLL", "###L#######L#########L#L###L###L#L#L###L###L###L##", "#LLLLL#LLLLL#L#L#L#LLLFLLL#LLL#L#L#LLL#L#L#L#L#LLL", "#L###L###L#L#L#L#L#L#L#####L#######L#L#L#L#L#L###L", "#F#LRLLLLL#LLL#LLLLL#L#LLL#LLLLLLL#L#L#L#LLR#L#L#L", "###L#####L###L#L###L#####F#L#####L#####L#####L#L#L", "#LLL#L#LLLLL#LLL#L#LLFLLLL#LLLLL#LLLLLLL#L#LLL#LLL", "#####L#L#####L###L###L###L#L#L###L###L#L#L#L###L#L", "#L#RLL#L#LLL#LLLLL#LLL#L#LLL#L#L#L#L#L#L#L#LLL#L#L", "#L###L#####L#####L#####L###L###L#L#L#####L#L#L#L#L", "#LRL#LLLLL#LLLLLLLLL#LLL#L#LLLLL#LLLLL#L#LLL#LFL#L", "###L#L###########L#####L#L#####R#L#L###L#######L##", "#LLLLLLRLLLLLL#L#L#LLL#LLLLL#LLL#L#LLLLLLLLL#LLLLL", "#L#L#####L#####L#####L###L#######L#########L###L#L", "#L#L#LLLLLLLLL#L#LLL#LLLLL#LLLLL#LLL#LLL#L#LLLLL#L", "#L#L#L#L#####L#L###L#####L###L#####L#L###L#L#L####", "#L#L#L#LLLLL#LLLLLLL#L#LLL#L#LLL#L#LLLLL#L#L#LLL#L", "###L#L#########L###L#L#L#L#L###L#L#######L#L#L###L", "#LLL#LLL#LLLLL#L#L#L#LLL#LRLLLLFLLLLLLLLLL#L#LLL#L", "#L###L###L#L#L###L#L#L#L###L#L#####L#L#L###L###L#L", "#L#LLLLL#L#L#L#L#LLLLL#LLL#L#L#L#LLL#L#LLLLLLL#L#L", "###L#L#######L#L#####L#####L###L###L#L###L#######L", "#LLL#LLRLLLL#L#LLL#LLLLLRL#L#L#L#FLL#LLL#L#L#L#LLL", "###L#L#####L#L#L#####L#######L#L###L###L###L#L###L", "#LLL#LLL#LLLLLLL#LLLLLLLLL#LLLLLLL#L#LLL#LLLLL#L#L", "###L#L###L###L#L###L#####L###L#####L###L#L#L###L#L", "#L#L#L#LLL#LFL#LLL#L#LLL#L#LLLLL#L#L#LLL#L#LLL#LLL", "#L#L#L###L###L###L#L#L#####L#L###L###L#####L#L#L##", "#LLL#L#LLR#LLL#LLL#L#L#L#L#L#LLLLL#L#L#LLL#L#LLLLL", "#L#L###L###L#####L###L#L#L#L#####L#L###L###L#L###L", "#L#L#L#L#L#L#LLRLLLL#LLL#LLLLL#LLLLL#LLLLL#L#L#L#L", "#L###L###L#L#####L#####L#L#L#L#####L#####L#####L#L", "#L#LLL#F#LLLLL#LLLLLLLLLLL#L#LLL#LLL#LLLRLLLLLLLLL", "###L###L###L#L#L#####L#############L#L#L###L######", "#LLLLL#LLL#L#L#LLLLL#LLLLLLL#LLL#LLR#L#LLL#L#LLLLL", "###L#L###L#L#########L#L#######L###L#######L#L#L#L", "#FLL#RLL#L#L#LLL#L#LLL#LLLLL#LLL#L#L#L#LLL#L#L#L#L", "#L#####L#L#L###L#L#L#######L###L#L#L#L###L#L#####L", "#LLL#LLLLL#L#LLL#LLLLL#LRL#LLLLL#L#LLL#L#L#L#L#LLL", "#########L#L###L###L###L#L#L#L#L#L#####L#L#L#L###L", "#L#L#L#LLLLLLL#LLL#LLLLL#L#L#L#LLLLL#LLLLLFLLLLRLL", "#L#L#L###########L###########L###L#########L#L#L##", "#LLLLL#L#L#LLL#LLL#LLL#LLL#L#L#LLR#LLLLLLLLL#L#LLL", "###L#L#L#L#L#L#L###L#L###L#L#L#####L#####L###L###L", "#LLL#L#LLLLL#LLLLL#L#L#LLL#LFLLLLL#L#LFL#LLL#L#LLL", "#L###L#L#L#L#L###L#L#####L###L#L#L#L#L#########L##", "#L#LRLLL#L#L#LLL#LLLLLLLLL#LLL#L#LLLLLLLLL#LLLLLRL", "#######L#######L#######L###L#L###L#L#L#########L#L", "#LLLLRLL#LLLLLLL#LLLLLLLLLLL#L#LLL#L#LLLLLLLLL#L#L"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "43399741/316160";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> maze = {"L#LL..L#.L.#LL..L#...#LL.#L#L....LLLL.L#.LL#..L.L#", "L###L###L#L###L#L#L#####.#L#####L#########L#L###.#", ".LL#L.L#L#.L...#L#..LF.#L#.#...#.#L#...#.L...#L.L#", ".#L#.#L###L#.#####.#####.#.###L#L#.#L###.#####L#L#", ".#LLL#R.RL.#L..#LLLLL#.#L..#.L.LL.L.L#L..#..LL.#.#", "##L#####L#####L###.###.#L#.#L#######.#.#####L###.#", ".#.#.#.#.#.RL..LL#L..LL#.#L.L#.#....L#LL.L.#.#L#L#", ".#L#.#L#########L###L#####.#.#.#L###F#L#R#####.###", ".LL#...#L.RL.L...#L..#L...L#...#LRL#L#.#L.LL..LLL#", ".###.###.###R#.###.#####L#####L#.#########L#.#.###", "L#.LL#.#L#LLL#.#.L.#...#LLL#.L.#.#.#...#LL.#.#...#", "L###L#L###L#.###L#####L#.#######L#L#L#####.###.###", "L#LL.....#.#.L.#L#...LL.L.L#.#.#...#LL...LLLL#.LL#", "####.#####.###.#.###########.#.#L#.#.#####L#L###.#", ".#.L.L.LL..L.#LL...#L.LL.#.L..L#.#R#.L.#LLL#L..#L#", "L#.###.#F#.###.###.###L###.#####.###.#####.#####L#", ".#.#L#.#L#.#LL.#L#LL.#..L.L..#.#L.LL...#L#L.L.L#.#", "L#.#.#.#L###.###L#####L#####F#.#.#L#####.#L###L#L#", "LLL#..L#LL.#.#.L.#L#LLLLLLL#..LL.#L#.L.#L#.#L.L#.#", "########.#L###.#.#.###.#L#.###.###L###L#R#########", ".#L...LL.#.....#.L.#L#.#.#.#L#L#L#.LL#...#L.L#LL.#", ".#L#.#####L###L###L#.#L#####L###L#####L#.#L###L#.#", "L#.#F#.LLFL.L#L#.L.L.#.#LL....L..#L#.#.#.#L#L#L#.#", "L#.#.###########L#L###L###.#####L#L#.#L###.#.#R###", "...#L#L#.#F#.LL.L#L#.#L#.#L#LLL#..LLLLF..#F.L#...#", "##.###L#.#L#.#####L#L#L#L###L#######.#.#####.###L#", "..L..#.LL#L#.#LL.L...LL#LL.LL..L.#..L#L....#.#..L#", ".#.#####L#L#.#####.#######L#########.###L#.#L###.#", ".#LLLLF..#.LL.LL.#LLLL....F.L#L#.LLLL#L#F#L.LLL#.#", "##.###########.#L#######.#.###L#L###.#.#######.#.#", "...#L#L..#LL.#L#L#......L#LFFL.#L#.#L#L#.LL#.#..L#", "##L#L#L###.#####.#.###.#######.###.#.#.#L###L###.#", "L.L.L#L...L#L.L#.#LL.#L#LLLL.#L.L#L.L..#.LL#...#.#", ".#######.###L###########.#L#.#L#.###L###.#.#L#####", "L#.#.L....L.L#.LF..L..L..#L#L#.#LL..LL..L#L#LL...#", "##.#L#####L###.###.#.#L###.###.#L#########L#.#####", ".LL...L#LLLL....L#.#L#L..#L.L#L#.LLLF.L#L....LLL.#", "####L###R#.#####.###L###L#########.#####.#.###.#.#", "..L..#.L.#L#.L.#L#..L#L#LL.LL#.L.FL.L.L#.#.LL#L#L#", ".###.#####.#.#.#.###L#.#######L#.###L#L###L#.###L#", ".#.#.#.#L#R#.#.#L#L.....L#..LLL#L#LLL#..L#.#L.L#.#", "L#.###.#.#####L###.#####L###L#L###.#######L#######", "..LL.#L#L#LLR..L...L...#R.L#.#L#LLL..L.#.#L#L.LLL#", "L#.###.#L#.#####.#L###.#L###.#######L###.#.#L###L#", ".#.#L#.LL#...#.LL#L#.LL#..L.L#.LL#L#LLL.L#LL.#.#L#", "L###.#.#.#.#L#L#####L#######.###.#.#.#.#####.#L#.#", ".L.LL#.#.L.#L#L#.#.LL#.#L..LL#L.LLLL.#L...L#.L.#L#", "L#L#L#L#.###.###.#L#.#.###.#####L#L###.###L###.###", ".#.#L#.#.L.#...#..L#.LL..#L#L....#LL.#L#.LL#..LL.#", "##################################################"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "2019355/19686";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> maze = {"L#LLLLL#LLL#LLLLL#LLL#LLL#L#LLLLLLLLLLL#LLL#LLLLL#", "L###L###L#L###L#L#L#####L#L#####L#########L#L###L#", "LLL#LLL#L#LLLLL#L#LLLFL#L#L#LLL#L#L#LLL#LLLLL#LLL#", "L#L#L#L###L#L#####L#####L#L###L#L#L#L###L#####L#L#", "L#LLL#RLRLL#LLL#LLLLL#L#LLL#LLLLLLLLL#LLL#LLLLL#L#", "##L#####L#####L###L###L#L#L#L#######L#L#####L###L#", "L#L#L#L#L#LRLLLLL#LLLLL#L#LLL#L#LLLLL#LLLLL#L#L#L#", "L#L#L#L#########L###L#####L#L#L#L###F#L#R#####L###", "LLL#LLL#LLRLLLLLL#LLL#LLLLL#LLL#LRL#L#L#LLLLLLLLL#", "L###L###L###R#L###L#####L#####L#L#########L#L#L###", "L#LLL#L#L#LLL#L#LLL#LLL#LLL#LLL#L#L#LLL#LLL#L#LLL#", "L###L#L###L#L###L#####L#L#######L#L#L#####L###L###", "L#LLLLLLL#L#LLL#L#LLLLLLLLL#L#L#LLL#LLLLLLLLL#LLL#", "####L#####L###L#L###########L#L#L#L#L#####L#L###L#", "L#LLLLLLLLLLL#LLLLL#LLLLL#LLLLL#L#R#LLL#LLL#LLL#L#", "L#L###L#F#L###L###L###L###L#####L###L#####L#####L#", "L#L#L#L#L#L#LLL#L#LLL#LLLLLLL#L#LLLLLLL#L#LLLLL#L#", "L#L#L#L#L###L###L#####L#####F#L#L#L#####L#L###L#L#", "LLL#LLL#LLL#L#LLL#L#LLLLLLL#LLLLL#L#LLL#L#L#LLL#L#", "########L#L###L#L#L###L#L#L###L###L###L#R#########", "L#LLLLLLL#LLLLL#LLL#L#L#L#L#L#L#L#LLL#LLL#LLL#LLL#", "L#L#L#####L###L###L#L#L#####L###L#####L#L#L###L#L#", "L#L#F#LLLFLLL#L#LLLLL#L#LLLLLLLLL#L#L#L#L#L#L#L#L#", "L#L#L###########L#L###L###L#####L#L#L#L###L#L#R###", "LLL#L#L#L#F#LLLLL#L#L#L#L#L#LLL#LLLLLLFLL#FLL#LLL#", "##L###L#L#L#L#####L#L#L#L###L#######L#L#####L###L#", "LLLLL#LLL#L#L#LLLLLLLLL#LLLLLLLLL#LLL#LLLLL#L#LLL#", "L#L#####L#L#L#####L#######L#########L###L#L#L###L#", "L#LLLLFLL#LLLLLLL#LLLLLLLLFLL#L#LLLLL#L#F#LLLLL#L#", "##L###########L#L#######L#L###L#L###L#L#######L#L#", "LLL#L#LLL#LLL#L#L#LLLLLLL#LFFLL#L#L#L#L#LLL#L#LLL#", "##L#L#L###L#####L#L###L#######L###L#L#L#L###L###L#", "LLLLL#LLLLL#LLL#L#LLL#L#LLLLL#LLL#LLLLL#LLL#LLL#L#", "L#######L###L###########L#L#L#L#L###L###L#L#L#####", "L#L#LLLLLLLLL#LLFLLLLLLLL#L#L#L#LLLLLLLLL#L#LLLLL#", "##L#L#####L###L###L#L#L###L###L#L#########L#L#####", "LLLLLLL#LLLLLLLLL#L#L#LLL#LLL#L#LLLLFLL#LLLLLLLLL#", "####L###R#L#####L###L###L#########L#####L#L###L#L#", "LLLLL#LLL#L#LLL#L#LLL#L#LLLLL#LLLFLLLLL#L#LLL#L#L#", "L###L#####L#L#L#L###L#L#######L#L###L#L###L#L###L#", "L#L#L#L#L#R#L#L#L#LLLLLLL#LLLLL#L#LLL#LLL#L#LLL#L#", "L#L###L#L#####L###L#####L###L#L###L#######L#######", "LLLLL#L#L#LLRLLLLLLLLLL#RLL#L#L#LLLLLLL#L#L#LLLLL#", "L#L###L#L#L#####L#L###L#L###L#######L###L#L#L###L#", "L#L#L#LLL#LLL#LLL#L#LLL#LLLLL#LLL#L#LLLLL#LLL#L#L#", "L###L#L#L#L#L#L#####L#######L###L#L#L#L#####L#L#L#", "LLLLL#L#LLL#L#L#L#LLL#L#LLLLL#LLLLLLL#LLLLL#LLL#L#", "L#L#L#L#L###L###L#L#L#L###L#####L#L###L###L###L###", "L#L#L#L#LLL#LLL#LLL#LLLLL#L#LLLLL#LLL#L#LLL#LLLLL#", "##################################################"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "4266343/41412";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> maze = {"...#LLL...LL.#.....LLLL#LLLLLLL#.#.L.#L#..L#.#.LL#", "##L###L#.#######R#L#####.#######.#.###.###.#.#.###", "L.L#L#L#.#L...L#.#.#L#.L.L..LLLL.LLL.#.LL#LL.L.#.#", "##L#.#.###L###L#L#.#L#.#####F###L#.###.###.#####L#", ".#L#LL...#L#..L#.#L#LL.L..L#L#.LL#.#..L.L.L#.#LL.#", "L#L#L#####.#######L###.#########L###L#L#.#.#L#L###", ".LL..#LL...#LL.LL#...#.#.LL#.LL#.L.F.#.#.#.L..L#.#", "##.###.#L###L###L###L###L#L###.#.#####.#####L###L#", ".#.L.F.#.LLLL#..L#L#L..#L#L#L#.L.#......L#.#LL.#.#", "L#.#####L#.###L#L#L#.###L###.#L#####L###F#L###.#L#", "...#.#.L.#.#L.L#.L.#LL.L.#R.L....#L..#L.L#..L#R.L#", "####L#####L#######.#.###L#L#.#.#.#.#.#####.#######", ".#L#L#.#.LLLL#L#.LL#.#...#L#L#L#.#.#L.L..#L..L..L#", "L#.#L#L#######L#L#####L###.###.###L#.#####L###L###", ".....LL..#LLL...LL.F..L#L..#L#L#.LL#L#LLLLL#L.L.L#", "####L#####.#####L###L###.###.#######.###.#######.#", "L#LL.#LL.#L..#L#..L#L#....L....#.#.L.#.LL#.LL#LL.#", ".#L###.###L#.#L#L#.#############.#L#L#L#L#F#######", "L..L.#.#.#.#LL.#.#.LLL.#LLL..#.L.#L#...#.#.L..LLL#", "L###L#.#L#######.###.###L#######.###L###.#####L#L#", "L#LLLLL.L#LLL..L.L.#LL.#.L.L.L.LLLL..LL#.#.#.LL#L#", "##.#####L#.###########.###.#####L#.#####.#.#####.#", ".#L#R#RL.LL#LL.#.#L#L.L#L..#L#.L.#.#L#..L..#L.L..#", "L###.#####L#L#L#.#.#####L###L###.###L#.#.###L#.###", "L..LL#LLL#L.L#.FL..L.#.LL#.#L#..LLL#L#L#L#.R.#L#.#", ".###.###.###.#######.#L###L#.#L###.#.#######.###.#", ".#.#.LLLL#....L..#.L.#..L#LLL.L..#LL.#.LL..L.LLLL#", ".#.#F###L#####.#########.#####L###.#L#.#####L#####", "L#..L..#L#LLL#L#L..#L#.L.LLL.#.#...#.FL#.#.L.#LL.#", "######.###.###L###R#L#.#########.#######.#.#L#.#L#", "..L#.L.LL#.#.R.LL#LLL.L#L.L#...LL#LL..LL..F#.#.#L#", "##L#.#.###.#.#L###.#####L###L###L###.###F#####F###", "L#LL.#L.L#L#.#.L..L.....L#LLL#L.LLL#LL.#.#.#.#.#.#", ".#.#######.#####.#########L#L#############L#L#.#L#", "LL.#.L...#L#L..L.......#LF.#LFL.L....#.#..L#LLLL.#", "##.#####L#.#L#####L#L#L#####L#######L#L#.#L###.###", "LL.L..L....L.#.L.LL#.#..LL.#...#L.LLL#L#L#L.LL.L.#", ".###L#L#L###L#L#L###.#L#####.#L#####L#.#######.###", "...#L#L#.#LLL#.#L#LLL#.#..L.L#.#LLRLL...L.L#.#LLL#", "####.#.#.#####.#.#.#######L###########.#.###.###.#", ".L.L.#L#.#FL..L#L#L#.L...#LL.#LL..L.L#.#.#LL.#.L.#", "L###F###############L#L#####.###.###L#.#L#.#L#R###", "..L#LL.LL#.LL...L....#LLL#.#.LL#.#..L#L#.#L#L...L#", "##.###L#########.#####.#L#.#.#####.#.###L#######.#", ".L.#.L.#L.L#.L.#L#L....#L#.F.L.#LLL#L..#LL.LL.FL.#", "##L#######L###.#####.###L#.#####L#####L#L#R###L#.#", "..L#L..LL..#...#LLLLL#L.L..L..L#LLL..#L..#.#...#L#", "L###L#######.#.#.###L#L###L###.#.#####.###.#####.#", "LLFLLL.#.LLL.#L.L#LLL#LL.#.#LLL#L#.LL..L.#.#...L.#", "##################################################"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "13751195/125191";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> maze = {"LLL#LLLLLLLLL#LLLLLLLLL#LLLLLLL#L#LLL#L#LLL#L#LLL#", "##L###L#L#######R#L#####L#######L#L###L###L#L#L###", "LLL#L#L#L#LLLLL#L#L#L#LLLLLLLLLLLLLLL#LLL#LLLLL#L#", "##L#L#L###L###L#L#L#L#L#####F###L#L###L###L#####L#", "L#L#LLLLL#L#LLL#L#L#LLLLLLL#L#LLL#L#LLLLLLL#L#LLL#", "L#L#L#####L#######L###L#########L###L#L#L#L#L#L###", "LLLLL#LLLLL#LLLLL#LLL#L#LLL#LLL#LLLFL#L#L#LLLLL#L#", "##L###L#L###L###L###L###L#L###L#L#####L#####L###L#", "L#LLLFL#LLLLL#LLL#L#LLL#L#L#L#LLL#LLLLLLL#L#LLL#L#", "L#L#####L#L###L#L#L#L###L###L#L#####L###F#L###L#L#", "LLL#L#LLL#L#LLL#LLL#LLLLL#RLLLLLL#LLL#LLL#LLL#RLL#", "####L#####L#######L#L###L#L#L#L#L#L#L#####L#######", "L#L#L#L#LLLLL#L#LLL#L#LLL#L#L#L#L#L#LLLLL#LLLLLLL#", "L#L#L#L#######L#L#####L###L###L###L#L#####L###L###", "LLLLLLLLL#LLLLLLLLLFLLL#LLL#L#L#LLL#L#LLLLL#LLLLL#", "####L#####L#####L###L###L###L#######L###L#######L#", "L#LLL#LLL#LLL#L#LLL#L#LLLLLLLLL#L#LLL#LLL#LLL#LLL#", "L#L###L###L#L#L#L#L#############L#L#L#L#L#F#######", "LLLLL#L#L#L#LLL#L#LLLLL#LLLLL#LLL#L#LLL#L#LLLLLLL#", "L###L#L#L#######L###L###L#######L###L###L#####L#L#", "L#LLLLLLL#LLLLLLLLL#LLL#LLLLLLLLLLLLLLL#L#L#LLL#L#", "##L#####L#L###########L###L#####L#L#####L#L#####L#", "L#L#R#RLLLL#LLL#L#L#LLL#LLL#L#LLL#L#L#LLLLL#LLLLL#", "L###L#####L#L#L#L#L#####L###L###L###L#L#L###L#L###", "LLLLL#LLL#LLL#LFLLLLL#LLL#L#L#LLLLL#L#L#L#LRL#L#L#", "L###L###L###L#######L#L###L#L#L###L#L#######L###L#", "L#L#LLLLL#LLLLLLL#LLL#LLL#LLLLLLL#LLL#LLLLLLLLLLL#", "L#L#F###L#####L#########L#####L###L#L#L#####L#####", "L#LLLLL#L#LLL#L#LLL#L#LLLLLLL#L#LLL#LFL#L#LLL#LLL#", "######L###L###L###R#L#L#########L#######L#L#L#L#L#", "LLL#LLLLL#L#LRLLL#LLLLL#LLL#LLLLL#LLLLLLLLF#L#L#L#", "##L#L#L###L#L#L###L#####L###L###L###L###F#####F###", "L#LLL#LLL#L#L#LLLLLLLLLLL#LLL#LLLLL#LLL#L#L#L#L#L#", "L#L#######L#####L#########L#L#############L#L#L#L#", "LLL#LLLLL#L#LLLLLLLLLLL#LFL#LFLLLLLLL#L#LLL#LLLLL#", "##L#####L#L#L#####L#L#L#####L#######L#L#L#L###L###", "LLLLLLLLLLLLL#LLLLL#L#LLLLL#LLL#LLLLL#L#L#LLLLLLL#", "L###L#L#L###L#L#L###L#L#####L#L#####L#L#######L###", "LLL#L#L#L#LLL#L#L#LLL#L#LLLLL#L#LLRLLLLLLLL#L#LLL#", "####L#L#L#####L#L#L#######L###########L#L###L###L#", "LLLLL#L#L#FLLLL#L#L#LLLLL#LLL#LLLLLLL#L#L#LLL#LLL#", "L###F###############L#L#####L###L###L#L#L#L#L#R###", "LLL#LLLLL#LLLLLLLLLLL#LLL#L#LLL#L#LLL#L#L#L#LLLLL#", "##L###L#########L#####L#L#L#L#####L#L###L#######L#", "LLL#LLL#LLL#LLL#L#LLLLL#L#LFLLL#LLL#LLL#LLLLLLFLL#", "##L#######L###L#####L###L#L#####L#####L#L#R###L#L#", "LLL#LLLLLLL#LLL#LLLLL#LLLLLLLLL#LLLLL#LLL#L#LLL#L#", "L###L#######L#L#L###L#L###L###L#L#####L###L#####L#", "LLFLLLL#LLLLL#LLL#LLL#LLL#L#LLL#L#LLLLLLL#L#LLLLL#", "##################################################"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "2540831/23161";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> maze = {"##################################################", "L#LLL.LLL#..L#.#LLL#...#L#.#L#L#.#LL.#.#...#.L.LL#", "L#.###L###.#.#.#L#R###.#.#L#L#L#L###L#L###L#L###.#", ".#L#.LL.R..#L.L#L#LLLL.#..L..#...#L...L.L.L.L#LL.#", ".###L###L#####.#######L#####.#L#######.###.#####.#", "L..#LL.#.#L#.RLLL#L...L.LLLL...#.LLL.L.#L.L.LL.#L#", "##L#.#####L#########.#.###F#L#L#####.#############", "L...L..#L..#R..LF#L..#L#L..#L#LL...LLLL#LL.#L#.LL#", "L#######.###L#.###.#################L###.#.#L#L###", "L#.LL.L#L.L#.#.#.L.#L...L#.LLL.#LL.#...LL#L#LLL..#", "L###.#.###L#L#######L#L#L###.###L#####L#.#####L#L#", ".LL#.#.#.L.LL..L.L.#L#.#LL.L.#.#....L..#L.LL...#.#", ".###L#####L#####L#.###.###R#R#.#.#.#####.#L#.#####", "L#.L......L#.L.#.#L.LLL#..L#.L.L.#L..#L#L#L#L#L.L#", ".#####L#L#L#L#####.###L#.###.#####.###.###.#####L#", "F#..LL.#.#L..#F#.#.L.#.#.#..L#LL..R.L#LLL....LFLR#", ".#L#######.###L#L#####L#####.#.#L#L###.#######L###", "..LL.#.L..L.L#L..#L.L....LL#.#.#L#L#LL..F.L#L.LLL#", "##.#########L#.#######L#####.#################.###", "L..LLLL#L.LLLL.#L..L.#.#LLL...L..L.#.#L.L#.#.LL..#", "##L#####L#.#######L#L###L#####L#L###L###L#L#####L#", "L#...L.#L#LLL#.#L..#L#L#L#L#L..#.LL#L.LL.LL#L.LLL#", ".#L###########.#.#####L###.#####.#####.#.#.###L#.#", ".L.L.#L..L..LFLL.L.#.#L#L..#.#L#.#R.L#.#.#L#.LL#.#", "######L###.#######L#.#L###L#.#L###.###L#.###.#####", "LL.#L#L.L#LLR#.LL#.#L...LL.L.#L#..LL...#.LL..#L..#", ".#L#.#########.#L#.#L###.###L#.#L#####L#####L#.###", "L#.LL#LL..L.LL.#L#LL...#L#.#LL.#.#..L#.#.LRLLLL.L#", "####.#####L#L#.###L#L#####L#L#####.###.#.#########", "LL.#LL.#.LL#L#..L.L#.LL#L#R#L#F#..L..R.#.#L#L.LLL#", ".#####L#####L###########.#L#L#.#L#####R###.###.###", ".L.#..L.L..FL#...LLL...#L#L.LL..L..#.....L.LLLLL.#", "L###L#####.#L#L#.###.###L###L#####L###########L###", "LLL#L#L#LL.#L.L#L#L..L.#LLLL.#L#LLL#L..LLLLL.#.#L#", "##L#.#L#########L#######.#L###L#L###.#######L###.#", "LLL..LL#.LL#L#LL..L.L.L#.#L#.LL#.#LL.LL..LR#LRL.L#", "L###.###.#L#L###.#R#########.###.#L#####L#.#######", "L#.LL....#L#.#L..#.#.LL.L#LL..L..L.L.LL#L#LL.L.#.#", ".###.#.#####L#######L#L#.###L#########.###L#####L#", "LLL#.#L..#LL.#.L.#...#.#.....L.#LL.#L....#.LL#...#", ".#########L#.###L###L###L#########.#L###L#####.#.#", "L..LL#L.LLL#LLL.....L.L#.#L#.#LRL#.L.#.#L.L.LLL#L#", "L#######L###.#####.#####.#.#.#L#L#####.#.###.###L#", ".LL....#L#L#.LL#L.L#.#L#L#..L.L#L.L#L#L..#L.L#.#.#", "######.#L#.#.#L#####.#.#.###L#######.###.#####.###", "...#.#L#.#.LL#.LL..L.L.#L.L.LLL...LL.#LLL#.#R...L#", ".###L#.###L#L###.#.###.#L#####F#L#######.#.#####L#", "LL...LL#LLL#.#L#L#LLL#.#L#LLLL.#L#L..#..L#.L.#..L#", "####.#.###R###L#.###.###L#######L#L#.###.###.#.###", "L.L.L#.#..L#L.LLLLL#...#...#.......#L..#.L.LLLFL.#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "744191/6190";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> maze = {"##################################################", "L#LLLLLLL#LLL#L#LLL#LLL#L#L#L#L#L#LLL#L#LLL#LLLLL#", "L#L###L###L#L#L#L#R###L#L#L#L#L#L###L#L###L#L###L#", "L#L#LLLLRLL#LLL#L#LLLLL#LLLLL#LLL#LLLLLLLLLLL#LLL#", "L###L###L#####L#######L#####L#L#######L###L#####L#", "LLL#LLL#L#L#LRLLL#LLLLLLLLLLLLL#LLLLLLL#LLLLLLL#L#", "##L#L#####L#########L#L###F#L#L#####L#############", "LLLLLLL#LLL#RLLLF#LLL#L#LLL#L#LLLLLLLLL#LLL#L#LLL#", "L#######L###L#L###L#################L###L#L#L#L###", "L#LLLLL#LLL#L#L#LLL#LLLLL#LLLLL#LLL#LLLLL#L#LLLLL#", "L###L#L###L#L#######L#L#L###L###L#####L#L#####L#L#", "LLL#L#L#LLLLLLLLLLL#L#L#LLLLL#L#LLLLLLL#LLLLLLL#L#", "L###L#####L#####L#L###L###R#R#L#L#L#####L#L#L#####", "L#LLLLLLLLL#LLL#L#LLLLL#LLL#LLLLL#LLL#L#L#L#L#LLL#", "L#####L#L#L#L#####L###L#L###L#####L###L###L#####L#", "F#LLLLL#L#LLL#F#L#LLL#L#L#LLL#LLLLRLL#LLLLLLLLFLR#", "L#L#######L###L#L#####L#####L#L#L#L###L#######L###", "LLLLL#LLLLLLL#LLL#LLLLLLLLL#L#L#L#L#LLLLFLL#LLLLL#", "##L#########L#L#######L#####L#################L###", "LLLLLLL#LLLLLLL#LLLLL#L#LLLLLLLLLLL#L#LLL#L#LLLLL#", "##L#####L#L#######L#L###L#####L#L###L###L#L#####L#", "L#LLLLL#L#LLL#L#LLL#L#L#L#L#LLL#LLL#LLLLLLL#LLLLL#", "L#L###########L#L#####L###L#####L#####L#L#L###L#L#", "LLLLL#LLLLLLLFLLLLL#L#L#LLL#L#L#L#RLL#L#L#L#LLL#L#", "######L###L#######L#L#L###L#L#L###L###L#L###L#####", "LLL#L#LLL#LLR#LLL#L#LLLLLLLLL#L#LLLLLLL#LLLLL#LLL#", "L#L#L#########L#L#L#L###L###L#L#L#####L#####L#L###", "L#LLL#LLLLLLLLL#L#LLLLL#L#L#LLL#L#LLL#L#LLRLLLLLL#", "####L#####L#L#L###L#L#####L#L#####L###L#L#########", "LLL#LLL#LLL#L#LLLLL#LLL#L#R#L#F#LLLLLRL#L#L#LLLLL#", "L#####L#####L###########L#L#L#L#L#####R###L###L###", "LLL#LLLLLLLFL#LLLLLLLLL#L#LLLLLLLLL#LLLLLLLLLLLLL#", "L###L#####L#L#L#L###L###L###L#####L###########L###", "LLL#L#L#LLL#LLL#L#LLLLL#LLLLL#L#LLL#LLLLLLLLL#L#L#", "##L#L#L#########L#######L#L###L#L###L#######L###L#", "LLLLLLL#LLL#L#LLLLLLLLL#L#L#LLL#L#LLLLLLLLR#LRLLL#", "L###L###L#L#L###L#R#########L###L#L#####L#L#######", "L#LLLLLLL#L#L#LLL#L#LLLLL#LLLLLLLLLLLLL#L#LLLLL#L#", "L###L#L#####L#######L#L#L###L#########L###L#####L#", "LLL#L#LLL#LLL#LLL#LLL#L#LLLLLLL#LLL#LLLLL#LLL#LLL#", "L#########L#L###L###L###L#########L#L###L#####L#L#", "LLLLL#LLLLL#LLLLLLLLLLL#L#L#L#LRL#LLL#L#LLLLLLL#L#", "L#######L###L#####L#####L#L#L#L#L#####L#L###L###L#", "LLLLLLL#L#L#LLL#LLL#L#L#L#LLLLL#LLL#L#LLL#LLL#L#L#", "######L#L#L#L#L#####L#L#L###L#######L###L#####L###", "LLL#L#L#L#LLL#LLLLLLLLL#LLLLLLLLLLLLL#LLL#L#RLLLL#", "L###L#L###L#L###L#L###L#L#####F#L#######L#L#####L#", "LLLLLLL#LLL#L#L#L#LLL#L#L#LLLLL#L#LLL#LLL#LLL#LLL#", "####L#L###R###L#L###L###L#######L#L#L###L###L#L###", "LLLLL#L#LLL#LLLLLLL#LLL#LLL#LLLLLLL#LLL#LLLLLLFLL#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "16122941/133980";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> maze = {"##################################################", "L#..L#...#.#..LL.#L..L..L#LL.#L#.#..LL.#.L.#.LLLL#", "L#L###L#L#.###L#########.#L###.#.#L#######.###L#.#", "L...L#.#L.L#.LL#......LL...LL#L#L......L.#L#L.L#L#", "##.###.#####.#######.#L#######.#.#.###.###F#L#L###", "LLL#L.L.L.LL.#...LL#L#.#.L.#LLL#.#.#LLF#.#L#L#...#", "L###L#######L#.###L###.#L#L###.###L#.###L#.#####.#", "L..L.L.#.LL#LLL#L...LL.LL#.#.#.L...#L....#LL.#.#L#", "########L###########L#L###L#.#.#L###L#.#L###.#.#L#", ".LLL.LL#LL..L.L..#L#.#..L#LLLL.#.LL#L#.#L..LL#LLL#", "##L#######L###L###L#.#L#.#L#L#####L###L#L###L#L###", "L#..L.......L#.#.#..L#.#.#L#L#LL.#..L#L#...#LLL.L#", "L#L#####.#####.#.#L#######L###.#######L#.#######.#", ".#.L.#LLL#.LL#L#..L#LLL..#F#.L.L.#LR...#..L..L.#L#", ".###.#######.#L###.#.#######L#L#################L#", "..LLL#L.LLL..L.#.L..R#LLF#.L.#.#.#.#...L.#L..L.L.#", "####L#L#.###L#.###L###L###L#.#L#L#.###.#######L#L#", ".LL#L#.#L#LLL#.LLL..F#L.L#.#.#L.L.L.L..#.#..L#.#.#", "##L#.#.###L#.#L#L#L#.#L#######.#L#L#####.#L#L###L#", "LL.LL#.L.#.#L#.#L#.#.L.LL#L..#L#.#LR.L.L.LL#.LL#.#", ".#########.#######L#.#####.#L###.#####L#.#.#.###.#", "L..#.#L#L..#.#L.L#.#R#LL.LL#.#.LLL.#.L.#.#.#L.L#L#", "L###.#.###L#L#L#.#L#######.#.#L#######L#.###.#####", "L#L...LLL#L#.L.#.....LL#L.L#.#L#L#.#LL.#.#.LL#L.L#", "L#####.#####.#######L###.###.#.#.#L#.#########.###", "L#F...LL.LL#L#.LLL...L.#...#L#L#..L..#LLLL..L#LLL#", ".#.#########R#L###L#.###.###.#L#L###L#F###.#.###.#", "LL.L.LLLR#L.L#L#L#.#..LLL#L#.#.#..L#.LL#...#L...L#", "##.###L#####.###.#####L#.#.###.#######L###.#######", "L.L.L#L#L#L#.LL#LL...LL#L.L..#..LL...#L.L#L#.LL..#", ".###L#.#L#L###L#########L#####L#####.###L#L#.###.#", "LL.#.#LLL#L..#LFLLL#.L.LL..#LL..L#LLL.L#.#LL.#LL.#", "L#L###.###L###L###.#####.#####L###.#.#####.#####.#", "L#L#L#..LLL..#...#L#L..L...#.#.#.#.#.#L#L.L.L#LLL#", "####L###L#######.###L#####R#L#.#.#####L#L#######.#", "L.LLL#R#LL.#LL.#L#L.RL...#.#LLLLL#L....LL#L..LL#L#", "L###.#L#.###.#L#####.#.###########.#####.#L###.###", ".#.#.#LF.LL#.#.#L.LLL#L#LL.#L.L.L.L#..L..LL#.LL.L#", "L#L#####L#####L#.#.#.#.#.#####.###.#L#.#.#####.#L#", "..LLL#.LLL.#...#.#.#.#.#LL.#L.L..#.#L#R#L#L.L..#.#", "##.###L#.###L###L###L#L###.###########L###.#####L#", "L#.LLL.#.LL#.#R.L#LLF#L#L#.#L...LL..L#.LL#.#.R.#.#", "L###.#L#.###L#####L###L#.#L#L#############L###.#L#", "..F..#L#L#LL.#.LLLFL.#L..LL#.L..LLL..#.#.#.L.LL#.#", "######L###.###.#######L###.#####L###.#L#.#.#####L#", "L..#L..LL#LLL#L..#L#L#L#LL.#..L.L#L..#.L.#L#.#L#L#", ".#####L###.#####L#.#L###.#####L#L###L###.#L#.#L#.#", "LL.LLL.L...#L#LLLLL#..L#..LLLLL#.#.L..R#.#L#.#..L#", "##.#.#####L#L#####.#L#L#.#####R#####R###L#L#.#L#L#", "LLL#....L#.......#.LL#L#..L#L.L.L#L.LL.....L.#L#.#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "2457709/18570";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> maze = {"##################################################", "L#LLL#LLL#L#LLLLL#LLLLLLL#LLL#L#L#LLLLL#LLL#LLLLL#", "L#L###L#L#L###L#########L#L###L#L#L#######L###L#L#", "LLLLL#L#LLL#LLL#LLLLLLLLLLLLL#L#LLLLLLLLL#L#LLL#L#", "##L###L#####L#######L#L#######L#L#L###L###F#L#L###", "LLL#LLLLLLLLL#LLLLL#L#L#LLL#LLL#L#L#LLF#L#L#L#LLL#", "L###L#######L#L###L###L#L#L###L###L#L###L#L#####L#", "LLLLLLL#LLL#LLL#LLLLLLLLL#L#L#LLLLL#LLLLL#LLL#L#L#", "########L###########L#L###L#L#L#L###L#L#L###L#L#L#", "LLLLLLL#LLLLLLLLL#L#L#LLL#LLLLL#LLL#L#L#LLLLL#LLL#", "##L#######L###L###L#L#L#L#L#L#####L###L#L###L#L###", "L#LLLLLLLLLLL#L#L#LLL#L#L#L#L#LLL#LLL#L#LLL#LLLLL#", "L#L#####L#####L#L#L#######L###L#######L#L#######L#", "L#LLL#LLL#LLL#L#LLL#LLLLL#F#LLLLL#LRLLL#LLLLLLL#L#", "L###L#######L#L###L#L#######L#L#################L#", "LLLLL#LLLLLLLLL#LLLLR#LLF#LLL#L#L#L#LLLLL#LLLLLLL#", "####L#L#L###L#L###L###L###L#L#L#L#L###L#######L#L#", "LLL#L#L#L#LLL#LLLLLLF#LLL#L#L#LLLLLLLLL#L#LLL#L#L#", "##L#L#L###L#L#L#L#L#L#L#######L#L#L#####L#L#L###L#", "LLLLL#LLL#L#L#L#L#L#LLLLL#LLL#L#L#LRLLLLLLL#LLL#L#", "L#########L#######L#L#####L#L###L#####L#L#L#L###L#", "LLL#L#L#LLL#L#LLL#L#R#LLLLL#L#LLLLL#LLL#L#L#LLL#L#", "L###L#L###L#L#L#L#L#######L#L#L#######L#L###L#####", "L#LLLLLLL#L#LLL#LLLLLLL#LLL#L#L#L#L#LLL#L#LLL#LLL#", "L#####L#####L#######L###L###L#L#L#L#L#########L###", "L#FLLLLLLLL#L#LLLLLLLLL#LLL#L#L#LLLLL#LLLLLLL#LLL#", "L#L#########R#L###L#L###L###L#L#L###L#F###L#L###L#", "LLLLLLLLR#LLL#L#L#L#LLLLL#L#L#L#LLL#LLL#LLL#LLLLL#", "##L###L#####L###L#####L#L#L###L#######L###L#######", "LLLLL#L#L#L#LLL#LLLLLLL#LLLLL#LLLLLLL#LLL#L#LLLLL#", "L###L#L#L#L###L#########L#####L#####L###L#L#L###L#", "LLL#L#LLL#LLL#LFLLL#LLLLLLL#LLLLL#LLLLL#L#LLL#LLL#", "L#L###L###L###L###L#####L#####L###L#L#####L#####L#", "L#L#L#LLLLLLL#LLL#L#LLLLLLL#L#L#L#L#L#L#LLLLL#LLL#", "####L###L#######L###L#####R#L#L#L#####L#L#######L#", "LLLLL#R#LLL#LLL#L#LLRLLLL#L#LLLLL#LLLLLLL#LLLLL#L#", "L###L#L#L###L#L#####L#L###########L#####L#L###L###", "L#L#L#LFLLL#L#L#LLLLL#L#LLL#LLLLLLL#LLLLLLL#LLLLL#", "L#L#####L#####L#L#L#L#L#L#####L###L#L#L#L#####L#L#", "LLLLL#LLLLL#LLL#L#L#L#L#LLL#LLLLL#L#L#R#L#LLLLL#L#", "##L###L#L###L###L###L#L###L###########L###L#####L#", "L#LLLLL#LLL#L#RLL#LLF#L#L#L#LLLLLLLLL#LLL#L#LRL#L#", "L###L#L#L###L#####L###L#L#L#L#############L###L#L#", "LLFLL#L#L#LLL#LLLLFLL#LLLLL#LLLLLLLLL#L#L#LLLLL#L#", "######L###L###L#######L###L#####L###L#L#L#L#####L#", "LLL#LLLLL#LLL#LLL#L#L#L#LLL#LLLLL#LLL#LLL#L#L#L#L#", "L#####L###L#####L#L#L###L#####L#L###L###L#L#L#L#L#", "LLLLLLLLLLL#L#LLLLL#LLL#LLLLLLL#L#LLLLR#L#L#L#LLL#", "##L#L#####L#L#####L#L#L#L#####R#####R###L#L#L#L#L#", "LLL#LLLLL#LLLLLLL#LLL#L#LLL#LLLLL#LLLLLLLLLLL#L#L#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "2431543/18330";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> maze = {"#...L.#.LLLLL.#L#LL.#L#.L.L.L.#.LLL.#L.F..LLL.#L.L", "###L#L#L###.###.#L#L#.#.###########.#######L#####.", "#L#.#.L.#.L.#L.L#.#L#.#L#.#....RLL.LL.#LLL..LL..L.", "#.#####L#.#L###.#.###.#L#L#.#.#############.#L#.#L", "#L#L#.L.#.#L.L#LLL..#LLL.LLL#L.R..LL#F.L#...#.#.#.", "#R#L#L###L#####.#L###.#######L#L###L###L#.#.#.###L", "#.#.L..L#.#L....#...L.L.L.#L#L#LLL#L#LL.#L#.#.#.L.", "#.#####L###.#######.#######L#######.#.#L#######.##", "#L#L#RLL#LL.#..LL.#L#L#L#L#.#LL.#.F...#.LL#L#L#.RL", "#.#.#L#######R#.###L#L#.#L#.#L#L#F###.#L###.#.###.", "#.LL..#L.LL..L#...#.#LL...LL#.#.#.#LL.#L.L..#.LL#.", "###.#.#######L###.#####.#.###L###.#######L#####.#.", "#..L#.L.#..LLL#L..#...#.#L#LL.L.#L...L#..L.L#LLLLL", "#.#L#L###L###L#####L#####.#.#####L#F#########.#.##", "#L#.#L.L..#L#.L.#..LL.LL.L#LLL#L#.#.RL#LL..L#L#.LL", "#####L#L###.#L###L#####.###L#.#L#####.#L#.#.#####.", "#L..#.#L#.L.....LLL.LL#.L.#L#..L..R..L#L#L#L#LLL#.", "#L#L#####.#L###L#####L#######.#R#######L#######L#L", "#L#LLL.L#.#.#.LL.L#L.L..LL..LL#L#LL..L#LL...#F#.#L", "###.#####L###.###########.###########L#####L#L#.#.", "#R#....R#.#.#L#...#.#...LL..LL......L.L.LL..#.#LLL", "#L#####F#.#.#####.#.#######L#####L#.#.###.#L#.###.", "#LLL#.L.LLLL#.#.LLL.#.#.LLRLLL#LL.#L#LL.#L#L.L..L.", "#.###.#####L#.#####.#.#L###L#########L###F###L#L#L", "#L.L#L#L#L#L..F.#L#.L.LL..#LL.#L#.#LLL#LL.#L#.#.#.", "#.#####L#.###.###L#####L#####L#.#.#####L###L#L####", "#....L#.#.#.#L.L#L.L..LL#..L#LL.#.#L#.L.#.L..LL.L.", "#L#L###.#L#.###.#####.#####.###.#.#L###L#.###L####", "#.#L..#.#L#.L.#.L...#.#L.LL.#LLL#...#L..#..R#.#LL.", "#.#L###L#L#L#.#L#L#######L#########L#.#####.#####L", "#L#L..L.L.LL#L#.#....L...L#.LLLL#.F.LLL.#.L.....L.", "###L###########L#########.#.###.#.#.#L#####L###.#L", "#..LLLLL.FL...LL#..L..L.#.#L#.L.#L#.#...#.LL#L#L#.", "#.#####L#####.#.#L#.#L###L#L###L#####L###.###.###.", "#...#.R.#...LL#L#.#.#.LL.L#L#...L.LL#LL.#.#...#.#.", "#####L#####.###.#L#####L#L#####L#.#######.###.#.##", "#L#.LL.L#.#L..#.#L#L.L#.#L#LL..L#LL.L.#.#LL.#L.L#L", "#L#L#####L###.#L###L#R#L#####.###L###.#L#L#####L#.", "#.L.#L.L#L...L#L#.L.#.#FL...#L.L#L#L..#L.L.L..#..L", "#L#####L#.#L#L###F###############L###.#L###.###.#L", "#.LL#..L#.#L#L#.#L...L.L#.L...L.#...#L#L#.#.FL#.#.", "#.###L#L#.#L###L#.###.#L###.###.#L#####L#L#L#.###L", "#L..#L#RFL#.LL..#L.L#.#..L#..L#.LL....L..L#.#.#..L", "#.#####L###L#####L###.###.#.###L#.#L#####L###L#L#L", "#.#.L..LL.#L#LLL#L#LL.FL#..L#..L#.#LLL#.L.L.#..L#.", "#.#.#.#####L###L#.###L###L#.###L###L###.#.#####.##", "#.#L#L#L..L.#.......#...#L#L..#.R.#.#.#L#..L.L#...", "#.#.#L#.#####L###.#.#######L###L###.#.#.#.#####.##", "#L#L#.#L#.L.L.#L.L#LL.#LL.L.#..L..#.#LL.#LL.L.#L.L", "##################################################"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "16531447/159120";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> maze = {"#LLLLL#LLLLLLL#L#LLL#L#LLLLLLL#LLLLL#LLFLLLLLL#LLL", "###L#L#L###L###L#L#L#L#L###########L#######L#####L", "#L#L#LLL#LLL#LLL#L#L#L#L#L#LLLLRLLLLLL#LLLLLLLLLLL", "#L#####L#L#L###L#L###L#L#L#L#L#############L#L#L#L", "#L#L#LLL#L#LLL#LLLLL#LLLLLLL#LLRLLLL#FLL#LLL#L#L#L", "#R#L#L###L#####L#L###L#######L#L###L###L#L#L#L###L", "#L#LLLLL#L#LLLLL#LLLLLLLLL#L#L#LLL#L#LLL#L#L#L#LLL", "#L#####L###L#######L#######L#######L#L#L#######L##", "#L#L#RLL#LLL#LLLLL#L#L#L#L#L#LLL#LFLLL#LLL#L#L#LRL", "#L#L#L#######R#L###L#L#L#L#L#L#L#F###L#L###L#L###L", "#LLLLL#LLLLLLL#LLL#L#LLLLLLL#L#L#L#LLL#LLLLL#LLL#L", "###L#L#######L###L#####L#L###L###L#######L#####L#L", "#LLL#LLL#LLLLL#LLL#LLL#L#L#LLLLL#LLLLL#LLLLL#LLLLL", "#L#L#L###L###L#####L#####L#L#####L#F#########L#L##", "#L#L#LLLLL#L#LLL#LLLLLLLLL#LLL#L#L#LRL#LLLLL#L#LLL", "#####L#L###L#L###L#####L###L#L#L#####L#L#L#L#####L", "#LLL#L#L#LLLLLLLLLLLLL#LLL#L#LLLLLRLLL#L#L#L#LLL#L", "#L#L#####L#L###L#####L#######L#R#######L#######L#L", "#L#LLLLL#L#L#LLLLL#LLLLLLLLLLL#L#LLLLL#LLLLL#F#L#L", "###L#####L###L###########L###########L#####L#L#L#L", "#R#LLLLR#L#L#L#LLL#L#LLLLLLLLLLLLLLLLLLLLLLL#L#LLL", "#L#####F#L#L#####L#L#######L#####L#L#L###L#L#L###L", "#LLL#LLLLLLL#L#LLLLL#L#LLLRLLL#LLL#L#LLL#L#LLLLLLL", "#L###L#####L#L#####L#L#L###L#########L###F###L#L#L", "#LLL#L#L#L#LLLFL#L#LLLLLLL#LLL#L#L#LLL#LLL#L#L#L#L", "#L#####L#L###L###L#####L#####L#L#L#####L###L#L####", "#LLLLL#L#L#L#LLL#LLLLLLL#LLL#LLL#L#L#LLL#LLLLLLLLL", "#L#L###L#L#L###L#####L#####L###L#L#L###L#L###L####", "#L#LLL#L#L#LLL#LLLLL#L#LLLLL#LLL#LLL#LLL#LLR#L#LLL", "#L#L###L#L#L#L#L#L#######L#########L#L#####L#####L", "#L#LLLLLLLLL#L#L#LLLLLLLLL#LLLLL#LFLLLLL#LLLLLLLLL", "###L###########L#########L#L###L#L#L#L#####L###L#L", "#LLLLLLLLFLLLLLL#LLLLLLL#L#L#LLL#L#L#LLL#LLL#L#L#L", "#L#####L#####L#L#L#L#L###L#L###L#####L###L###L###L", "#LLL#LRL#LLLLL#L#L#L#LLLLL#L#LLLLLLL#LLL#L#LLL#L#L", "#####L#####L###L#L#####L#L#####L#L#######L###L#L##", "#L#LLLLL#L#LLL#L#L#LLL#L#L#LLLLL#LLLLL#L#LLL#LLL#L", "#L#L#####L###L#L###L#R#L#####L###L###L#L#L#####L#L", "#LLL#LLL#LLLLL#L#LLL#L#FLLLL#LLL#L#LLL#LLLLLLL#LLL", "#L#####L#L#L#L###F###############L###L#L###L###L#L", "#LLL#LLL#L#L#L#L#LLLLLLL#LLLLLLL#LLL#L#L#L#LFL#L#L", "#L###L#L#L#L###L#L###L#L###L###L#L#####L#L#L#L###L", "#LLL#L#RFL#LLLLL#LLL#L#LLL#LLL#LLLLLLLLLLL#L#L#LLL", "#L#####L###L#####L###L###L#L###L#L#L#####L###L#L#L", "#L#LLLLLLL#L#LLL#L#LLLFL#LLL#LLL#L#LLL#LLLLL#LLL#L", "#L#L#L#####L###L#L###L###L#L###L###L###L#L#####L##", "#L#L#L#LLLLL#LLLLLLL#LLL#L#LLL#LRL#L#L#L#LLLLL#LLL", "#L#L#L#L#####L###L#L#######L###L###L#L#L#L#####L##", "#L#L#L#L#LLLLL#LLL#LLL#LLLLL#LLLLL#L#LLL#LLLLL#LLL", "##################################################"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "34548523/330752";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> maze = {"#...L.LLLLL.L.#..L#.#L.L#.L.L.LL#..L.L.L..#LLL#.#L", "#####.###L#####L###L#.###.###L#.#.#L#L#.#####L#L#L", "#LL.LLL.#..LLL#L#.#L#...#.#L#.#.LL#L#L#.F.LLLL.L#.", "#####L###L#####L#.#.#L###L#L###.#.###.#.###L#L###.", "#L#.#LLL#.#.LL.L#L....#LF.#L.LLL#L#L#.#L#..L#LL...", "#L#.###L###L#.#.#####.#.#######L###.#.#L#L#####L#.", "#R...L#.....#L#L.L#LL.LL#...#...L.#...#.#LL.#.#L#L", "#.#########L###L#L#####.###.#.#.#####.#####L#L###.", "#.#..L#.#.LL.L#L#L.L....L.#LLL#LL.#.L.#L#F..#L#...", "#L###.#L#####.#######L#####L#######.###.###L#.###L", "#LLL#LLL.LL.#.#..R.L..#.LF#...#.LL#..L#...L.#LLLL.", "###L#L#####.###.#.###.###L#L#.###.###########.#L##", "#LRL#L...L#.#.#.#L#LR.#LRLL.#L#.......#.#L.LL.#RL.", "#L###.###.###L#.###L#L###.###L###.#L#.#L###L#.#.#L", "#..L..#LL.#.LL.L#.L.#.#..L#.LL..L.#.#..L..#L#L#L#.", "#########.#.#.###L###.#######L#.###########.#L###L", "#.#L#L#L#.#L#R#.L.#.#.#L#LLLLL#.L.L.#L#L.F#L#L#LL.", "#.#.#.#L#L#####.###.###L#L#####L###.#.###.#######.", "#.#LL.#L..LLLL#.L.#L..#.#L#..L#.#L#F.L...L#.#LLL#L", "#.#.###L#####L###.#L###.###L#####.#L#L#####.#.###L", "#.L.#.L..L#...#L.L#LLL..LL#.L.#..LL.#LLL#...#L#L#.", "###L###L#L#########L#######.#########.#.###.#.#.##", "#.#L#L#.#L#.#.#L#L.LL.#.LLLL.F#L...L#L#.#.L.#.#..L", "#.#L#L###L#.#L#L###.###L###L#.#####L#.#####L#.#L#L", "#..L.L#.#.#L#.#.L..L..#.LL#L#.#..L...L.L...L.L#L#.", "###L###.#.#L#.#L###L#.#.###L###L#L#L#######.#.#.#L", "#L...L#.L.....#.#.L.#.#LL.#L#..L#.#.#.#L#R#.#L..#.", "###.#########L#####.###.###L#.#.#.###.#L#.#.###.##", "#L#L#.L.#.#F.LL..L#L.L.L#..L.L#.#.#.#L#.L.LL..#L..", "#L#.#.#L#L#L#.###L###L###.#########L#.#.#######L#.", "#R#L.L#L#...#.#.#.L..L#LL.#F#...L.#.L..LL.LLL.#L#L", "#L###L###L#####L#.#########L#L#####L###.#F########", "#L.LLL..L.LL.L#LLL.LLLLL#..LL.#.L..L#LL.#....LLLL.", "#L#.###.#L#####L#.###.###L#L#L#L###L##############", "#L#L#L..#LLL#F#L#LL.#.L.#L#.#.L.#.LL..L...LL#..L#.", "#L#L###L#.###.#L###L#######L#######L#######.###.#L", "#L#R#L.L#.L.#L#L#LL.L.LLLL#.#LLL.L#..LLL#L..#.#..L", "#L#########L#L###.#L###.#.###.#.###.#######.#.###L", "#L#.#.#L...L#L#.LL#LL.#F#.LL#.#..L.....LL.#L#.LL#L", "#.#L#L#.###L#L#######.#########.#L#.#####.#.###L#L", "#L#.LL.L.L#L#.#L#..L#.LL#.....#L#L#LLL.L#.#LLL#.LL", "#.#L#######L#.#.#L#L#####L#####L#############.###.", "#.#.#..L#LL.#..L#R#L#L#.L.#L#L#L#L#F#.#.LL......#.", "###L#L#L###L#L###L#L#L#.#.#L#.#.#L#.#L#.###.#L#.#.", "#L.LFL#L#L#.LL..#L#L..#.#..LL.LL#..L#..L#L#L#.#...", "#####.###.###L#.###L#####.###L#.#L#L###.#L#######.", "#.LL..#L#L#L..#.....#.#L..L.#L#.L.#.#LF..F#L..#.#L", "#####.#.#L#L###.###L#.#.#.###L#.#.#####L###L#.#L#L", "#....LL.#LL.F.#LL.#.#LL.#LLL#L#.#L#L.LLLL..L#L..#.", "##################################################"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "13672531/111452";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> maze = {"#LLLLLLLLLLLLL#LLL#L#LLL#LLLLLLL#LLLLLLLLL#LLL#L#L", "#####L###L#####L###L#L###L###L#L#L#L#L#L#####L#L#L", "#LLLLLLL#LLLLL#L#L#L#LLL#L#L#L#LLL#L#L#LFLLLLLLL#L", "#####L###L#####L#L#L#L###L#L###L#L###L#L###L#L###L", "#L#L#LLL#L#LLLLL#LLLLL#LFL#LLLLL#L#L#L#L#LLL#LLLLL", "#L#L###L###L#L#L#####L#L#######L###L#L#L#L#####L#L", "#RLLLL#LLLLL#L#LLL#LLLLL#LLL#LLLLL#LLL#L#LLL#L#L#L", "#L#########L###L#L#####L###L#L#L#####L#####L#L###L", "#L#LLL#L#LLLLL#L#LLLLLLLLL#LLL#LLL#LLL#L#FLL#L#LLL", "#L###L#L#####L#######L#####L#######L###L###L#L###L", "#LLL#LLLLLLL#L#LLRLLLL#LLF#LLL#LLL#LLL#LLLLL#LLLLL", "###L#L#####L###L#L###L###L#L#L###L###########L#L##", "#LRL#LLLLL#L#L#L#L#LRL#LRLLL#L#LLLLLLL#L#LLLLL#RLL", "#L###L###L###L#L###L#L###L###L###L#L#L#L###L#L#L#L", "#LLLLL#LLL#LLLLL#LLL#L#LLL#LLLLLLL#L#LLLLL#L#L#L#L", "#########L#L#L###L###L#######L#L###########L#L###L", "#L#L#L#L#L#L#R#LLL#L#L#L#LLLLL#LLLLL#L#LLF#L#L#LLL", "#L#L#L#L#L#####L###L###L#L#####L###L#L###L#######L", "#L#LLL#LLLLLLL#LLL#LLL#L#L#LLL#L#L#FLLLLLL#L#LLL#L", "#L#L###L#####L###L#L###L###L#####L#L#L#####L#L###L", "#LLL#LLLLL#LLL#LLL#LLLLLLL#LLL#LLLLL#LLL#LLL#L#L#L", "###L###L#L#########L#######L#########L#L###L#L#L##", "#L#L#L#L#L#L#L#L#LLLLL#LLLLLLF#LLLLL#L#L#LLL#L#LLL", "#L#L#L###L#L#L#L###L###L###L#L#####L#L#####L#L#L#L", "#LLLLL#L#L#L#L#LLLLLLL#LLL#L#L#LLLLLLLLLLLLLLL#L#L", "###L###L#L#L#L#L###L#L#L###L###L#L#L#######L#L#L#L", "#LLLLL#LLLLLLL#L#LLL#L#LLL#L#LLL#L#L#L#L#R#L#LLL#L", "###L#########L#####L###L###L#L#L#L###L#L#L#L###L##", "#L#L#LLL#L#FLLLLLL#LLLLL#LLLLL#L#L#L#L#LLLLLLL#LLL", "#L#L#L#L#L#L#L###L###L###L#########L#L#L#######L#L", "#R#LLL#L#LLL#L#L#LLLLL#LLL#F#LLLLL#LLLLLLLLLLL#L#L", "#L###L###L#####L#L#########L#L#####L###L#F########", "#LLLLLLLLLLLLL#LLLLLLLLL#LLLLL#LLLLL#LLL#LLLLLLLLL", "#L#L###L#L#####L#L###L###L#L#L#L###L##############", "#L#L#LLL#LLL#F#L#LLL#LLL#L#L#LLL#LLLLLLLLLLL#LLL#L", "#L#L###L#L###L#L###L#######L#######L#######L###L#L", "#L#R#LLL#LLL#L#L#LLLLLLLLL#L#LLLLL#LLLLL#LLL#L#LLL", "#L#########L#L###L#L###L#L###L#L###L#######L#L###L", "#L#L#L#LLLLL#L#LLL#LLL#F#LLL#L#LLLLLLLLLLL#L#LLL#L", "#L#L#L#L###L#L#######L#########L#L#L#####L#L###L#L", "#L#LLLLLLL#L#L#L#LLL#LLL#LLLLL#L#L#LLLLL#L#LLL#LLL", "#L#L#######L#L#L#L#L#####L#####L#############L###L", "#L#L#LLL#LLL#LLL#R#L#L#LLL#L#L#L#L#F#L#LLLLLLLLL#L", "###L#L#L###L#L###L#L#L#L#L#L#L#L#L#L#L#L###L#L#L#L", "#LLLFL#L#L#LLLLL#L#LLL#L#LLLLLLL#LLL#LLL#L#L#L#LLL", "#####L###L###L#L###L#####L###L#L#L#L###L#L#######L", "#LLLLL#L#L#LLL#LLLLL#L#LLLLL#L#LLL#L#LFLLF#LLL#L#L", "#####L#L#L#L###L###L#L#L#L###L#L#L#####L###L#L#L#L", "#LLLLLLL#LLLFL#LLL#L#LLL#LLL#L#L#L#LLLLLLLLL#LLL#L", "##################################################"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "27914614/228327";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> maze = {"#LL...#..LL.#.LL#L#L#.#L.LLL#....L#LLL.LLLL.LL#L..", "###L###.#####L#L#L#L#L#####.###L#L###L#.###L#R#.##", "#..L#.LL#L#.#.#...LLL..RLL#LL.LL#LL.LL#.#.#.#L#.LL", "#.#L#.#L#.#L#######.#L#L#####.#L#L###.###L#######.", "#.#.L.#.#L..LL#L#.#L#R#.#L#..L#F#.LL#.RL#LL...#LL.", "###.###.#R###.#.#L#####L#.#L#####L###.#L#.###.#L##", "#L#...#L#..L#L#L..#.LL#.L..L#..LL.#L..#L#LLL#.#L.L", "#.#####L#.#L#####.#.###.#########L#####L###L#.###L", "#.L..L#LLL#L#...#.#.#LLLL.L.#L#.L.LL#.LL#L#.#L#.#L", "###L#L#.#L#L###.#.#.###.#.###L#L#######L#.###.#.#L", "#.LL#.#L#L#.#.L.L...#.FL#L#...#.L.#L.L#L#.L.#..LLL", "#L#####L###.#.###.#.###L#L#L#L###.#.#######.#L###L", "#.FLLLL.#LLL..L.#.#L#.LL#...#L#.LLLL#LL.LL#F#L#.LL", "#######L#######.###########L###.###.#.###.#L#####.", "#L#.#.L...L.#L#F#.#LL.#L#...#LLL#LFL#.#.#.LL..L.LL", "#.#L#L#######L#L#L#.#L#L#L#######L###L#R#####.###.", "#L#...L.#.#.L.L.#LF.#.LLL....LLL#.LR#.L.LL#L..#L#.", "#L#.#.###.#####.#########L#####L###L#########L#.##", "#L.L#.#L#...#.L..L.L#L.L.LLL#L#.#.#.L.#..LL..L#.#.", "###.#L#L#L#########L#####.#.#L#L#L###########.#.#.", "#.RL#L#L...L.L.L#L#.#.#L#L#.#L..LL.L..#.L.L.#..LL.", "###L#L###.#####.#L###.#L#.#####L#####L#.#.#######L", "#L#L#L.L..#L.L..#LL.LL..#L#L#.LL..#L#L#L#LL.#.L..L", "#L###L#####L#.#L#L#.###.#L#L###L###L#L#L#########L", "#L#.#.#.#.#L#.#L.L#.#...LLL..L#L#.#L#L#L.L#..F....", "#L#.#L#.#L#######L###.#####L#####L#.#####L###.#L##", "#L.LLLR..L#LLRLL.LLL#L#LL...L.#..L...L..FL#LLL#LL.", "#L#####L#################.#####.#L#.###.#L###.####", "#.#L#.L...#L..L.#.L.#L#L.L.LL.#.#.#.LL#.#..LL.#...", "#L#L###L#L#.#.###L###L###L#.#.#####R###L#######.##", "#..LLL#L#...#LL.LLLL....#.#L#L.LLL.L.L#L#.L.#.L.#.", "###L###############.#.#############.#####.#####.#.", "#L.LLL.L#.LL#L.L....#....LL.#.#...#..L.LL.LL.LLL..", "###.###L###.#.###.#L#L###L###.#L###.###L###L###.##", "#LL.#..L#.LL#LL.#.#.#.#LRLLL#L#.L.LL..#L.L#F..#LR.", "#####.###L#######L#######.###L#.###.###L#####L#.#.", "#LL...#LLLL.#L..L...#L#L.L..#.L.LL#L#L#L#.#L#L#.#.", "#######.#.#########.#.###L#########.#L###L#.#L###.", "#L..LLLF#L..L.#L#LL.#LL..LLLLL#.#L#L..#L#L..#.#.#.", "#########L#.#L#L#####.###L#.#.#.#L#.###.#L#.#L#L##", "#L#L.L#...#L#L..#L#L..#.#.#L#L#...LLLLL.LL#L#L.L..", "#.###L###L###L###.#.#L#L#######L#########.#.###.##", "#.L.#L#L#L#LLL#L#.LL#.#LLL.L#LL.#L#L#L#.LL#.#...#.", "#L###L#.#L#####.#L#####L#######L#L#.#L#L#.###L#.#L", "#LL.LL#L..#......L..#L#.LL.LLLR.#...#.L.#.#..L#..L", "###L#L#.#####L#####.#L###.#########F###F#####.####", "#L#.#..L#L.L#LL.LL#FL.#L.L.LL.#L..LL#.LL#..L.LLL#.", "#.#.#######.#L#.#######L#.#F###L#####L#####L#####.", "#..LRLLLLLLLRL#LLLLL.L#L#.#..F.L#.LLLL.L#LL......L", "##################################################"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "10042423/81024";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> maze = {"#LLLLL#LLLLL#LLL#L#L#L#LLLLL#LLLLL#LLLLLLLLLLL#LLL", "###L###L#####L#L#L#L#L#####L###L#L###L#L###L#R#L##", "#LLL#LLL#L#L#L#LLLLLLLLRLL#LLLLL#LLLLL#L#L#L#L#LLL", "#L#L#L#L#L#L#######L#L#L#####L#L#L###L###L#######L", "#L#LLL#L#LLLLL#L#L#L#R#L#L#LLL#F#LLL#LRL#LLLLL#LLL", "###L###L#R###L#L#L#####L#L#L#####L###L#L#L###L#L##", "#L#LLL#L#LLL#L#LLL#LLL#LLLLL#LLLLL#LLL#L#LLL#L#LLL", "#L#####L#L#L#####L#L###L#########L#####L###L#L###L", "#LLLLL#LLL#L#LLL#L#L#LLLLLLL#L#LLLLL#LLL#L#L#L#L#L", "###L#L#L#L#L###L#L#L###L#L###L#L#######L#L###L#L#L", "#LLL#L#L#L#L#LLLLLLL#LFL#L#LLL#LLL#LLL#L#LLL#LLLLL", "#L#####L###L#L###L#L###L#L#L#L###L#L#######L#L###L", "#LFLLLLL#LLLLLLL#L#L#LLL#LLL#L#LLLLL#LLLLL#F#L#LLL", "#######L#######L###########L###L###L#L###L#L#####L", "#L#L#LLLLLLL#L#F#L#LLL#L#LLL#LLL#LFL#L#L#LLLLLLLLL", "#L#L#L#######L#L#L#L#L#L#L#######L###L#R#####L###L", "#L#LLLLL#L#LLLLL#LFL#LLLLLLLLLLL#LLR#LLLLL#LLL#L#L", "#L#L#L###L#####L#########L#####L###L#########L#L##", "#LLL#L#L#LLL#LLLLLLL#LLLLLLL#L#L#L#LLL#LLLLLLL#L#L", "###L#L#L#L#########L#####L#L#L#L#L###########L#L#L", "#LRL#L#LLLLLLLLL#L#L#L#L#L#L#LLLLLLLLL#LLLLL#LLLLL", "###L#L###L#####L#L###L#L#L#####L#####L#L#L#######L", "#L#L#LLLLL#LLLLL#LLLLLLL#L#L#LLLLL#L#L#L#LLL#LLLLL", "#L###L#####L#L#L#L#L###L#L#L###L###L#L#L#########L", "#L#L#L#L#L#L#L#LLL#L#LLLLLLLLL#L#L#L#L#LLL#LLFLLLL", "#L#L#L#L#L#######L###L#####L#####L#L#####L###L#L##", "#LLLLLRLLL#LLRLLLLLL#L#LLLLLLL#LLLLLLLLLFL#LLL#LLL", "#L#####L#################L#####L#L#L###L#L###L####", "#L#L#LLLLL#LLLLL#LLL#L#LLLLLLL#L#L#LLL#L#LLLLL#LLL", "#L#L###L#L#L#L###L###L###L#L#L#####R###L#######L##", "#LLLLL#L#LLL#LLLLLLLLLLL#L#L#LLLLLLLLL#L#LLL#LLL#L", "###L###############L#L#############L#####L#####L#L", "#LLLLLLL#LLL#LLLLLLL#LLLLLLL#L#LLL#LLLLLLLLLLLLLLL", "###L###L###L#L###L#L#L###L###L#L###L###L###L###L##", "#LLL#LLL#LLL#LLL#L#L#L#LRLLL#L#LLLLLLL#LLL#FLL#LRL", "#####L###L#######L#######L###L#L###L###L#####L#L#L", "#LLLLL#LLLLL#LLLLLLL#L#LLLLL#LLLLL#L#L#L#L#L#L#L#L", "#######L#L#########L#L###L#########L#L###L#L#L###L", "#LLLLLLF#LLLLL#L#LLL#LLLLLLLLL#L#L#LLL#L#LLL#L#L#L", "#########L#L#L#L#####L###L#L#L#L#L#L###L#L#L#L#L##", "#L#LLL#LLL#L#LLL#L#LLL#L#L#L#L#LLLLLLLLLLL#L#LLLLL", "#L###L###L###L###L#L#L#L#######L#########L#L###L##", "#LLL#L#L#L#LLL#L#LLL#L#LLLLL#LLL#L#L#L#LLL#L#LLL#L", "#L###L#L#L#####L#L#####L#######L#L#L#L#L#L###L#L#L", "#LLLLL#LLL#LLLLLLLLL#L#LLLLLLLRL#LLL#LLL#L#LLL#LLL", "###L#L#L#####L#####L#L###L#########F###F#####L####", "#L#L#LLL#LLL#LLLLL#FLL#LLLLLLL#LLLLL#LLL#LLLLLLL#L", "#L#L#######L#L#L#######L#L#F###L#####L#####L#####L", "#LLLRLLLLLLLRL#LLLLLLL#L#L#LLFLL#LLLLLLL#LLLLLLLLL", "##################################################"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "19247751/155776";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> maze = {"LLL..L...LL.LL.LLLLL#...#..L.....L..#L.L.LLL..#.LL", "#.#L#.#L#L###.#L#.###L#.#L#.#L#.#L###.###L#.#L#L#L", "LLL.L.#RLL....LLLL#LLL.L#.LL#LFF#.LLL..LL.F..L.L..", "#L#L###.#.#####L#L###L#L#L#.#L#.#.###L#L#.#L###L#L", "LFL..L..L.#L..L...L.LLLLLLLLLL.L.LLLLL...L.L...LLL", "#L#L#.#L#L#L#.###L#.#.#.#L#L###.#L#L###L#.#.#L#.##", ".L.L....L...L.L...LL..LL...L..LLLLL...L.L.#.L.#F..", "#L#L#L#.#L#L#L#.#.###.#L#L###.#.#L#.#L#L###.#L#L#L", ".L.L#LLFLLLL..L.L..L..L..L...LFLLL...LL.#LLLLL.LL.", "#.#.#.#.###L###L#.#####L#.#R#L#.#L#.#.#L#.#L#L#L##", "#LLL..#..LL..LLL..LL..#L...L#L#.LL#L.L#LLLLLL.L...", "#.#L#F#.#L#.#L#.#.#.#.#F###.#L#.#.#L###L#.#.#L#L#.", "LLL.#L..L.LL#.LLL.LLL..LL.L.LLLL#...LLLLLL....L.LL", "#L#.#L#.#.#.#L#.#L#.###.#.#.#.#L#L#.#L#L#.#.#.#.#L", ".LLLLL..LLL..L.....L#...#LLL..LL#.#.LLLL.L.L#.R.LL", "#L#L#.#.#L#L#.#L###L###.#L#.#L#.#L#.#L#.###.###L#.", ".LL.#L.L..L.#FLLL..L.LL...FLL.#.#...#......LL.L.L.", "#.#.#L#.#L#L#.#L#L#.#L#L#L#L#.###.#####.#L###.###.", "#RLLLLLLL.#.#.LL..LL.FLLF.L.LL.L.LL.L.L.LLL.....LL", "#L#L#.#L###L#L#.###L#.#L#L#L#L#.#L#L#L#L#L###.###L", "LLLLL.L.LL#LLLLLLL.LL.L..L.LLL.LFL#.L.#L.LL.L.#.LL", "#L#.###.#L#.#.#.#L#L#.#L#.#L#L#.#L#L#L#.#L#.#L#L#.", ".L.L#.L.L.L.LL#L.L#.....#.LL.LLL...L..L..L..L.L...", "#.#.#.#L###L#####.#L#L#L#L#.#R###L###.#.#L#L#.#L#L", "LL#LL..LL..LL...#L..LLRL....LLL.#...L.#R.LL..L#LLL", "#.#F###L#L#.###.#L#.###.#L###L#.#.#L#.#L###L#L###L", "..#L.L#LLLLL...L#L.LLL#LLL..#.#.#...LL..#LL..L#.L.", "#.#.#L###L#L###L#.#L#.#.#L#L###.#L#L#L#L###L#.#L#.", "L...#L#.LL.L#L.L.L#FLLL.LL.L.LLLL.#LL.L.L.L...#L.L", "#.#R#.#.#L#.#.#.#L#.###L#L###L###.#L#####L#L#L#.#.", "#LLL..LL#LLLL.#L....LLLL.L..L.LL#LLLLLL...LL.....L", "#.###.#.###.#####L#L#L###.#.#L#.#.#.#L#R#L#.#.###.", ".L...LL.#L....L.LLLL#....L...L....LL..LL...L......", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#L#.#.#L#.#.###L###.", "#LLLLLLL#L#L.L#.LL...LRL.LLL#.L....L.LL..L..LLL...", "#L#.#.#L#.#.#.#.#L#.#.#.#L#.#L#L#.#L#L#L#.#L#L#L#L", "LL#L.LL...#LL...LL......L..LLL#LLLLFL.LL#.LL.L....", "#.#.#L#.#L#L#.###L#.#.#L#L#L#R#L#.#.#.#.#.###L#L##", ".L.L#..L..L.LL....#.L.#.LL.L.LL.LRL.#LL.L.#...L.#L", "###L#L#L#.#L#.###L###L#.#.#L#L#.###.#######L#L###L", ".LLLL..L#LLLL.LLL.#.#...LRL.L...L.LL#..LL.L.L.L.L.", "#.#L###L#.#.#.#L#L#.#L#.#.#L#.#.#L#.#.###L#R#L###.", ".L.LLL.L....#.#LLL#LL.LL#.#LL...LLL..LL....L#.#.LL", "#.#.#L#L#.#L#.#L#L#L#.#L#L#L#L#####L#.#L#L#L#L#.#.", "#.L.L.L.#....L........#LLL#.#LFFLLLL...LLLLLL.LLLL", "###.#####L#L#.#L#L#L#L#L#L#.###L#.#L###.#.#.#.#.#L", "L.L.LLL...#..L...LL...LLL...L.#..LLL.L.....LLLL.#L", "#L#.#.#.#L#.#.###L#L#L#L#L#.#.#L###R#.###L#R#L#L#.", "LL#.LLLLLLLLL..L.L...LL.LL.LLFL.L.L..L.L.LLL#LL...", "#.###L#.#####.#.#.###.#.#L#L#.###.#L###L#L#L#L#L##"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "2871587/54464";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> maze = {"LLLLLLLLLLLLLLLLLLLL#LLL#LLLLLLLLLLL#LLLLLLLLL#LLL", "#L#L#L#L#L###L#L#L###L#L#L#L#L#L#L###L###L#L#L#L#L", "LLLLLL#RLLLLLLLLLL#LLLLL#LLL#LFF#LLLLLLLLLFLLLLLLL", "#L#L###L#L#####L#L###L#L#L#L#L#L#L###L#L#L#L###L#L", "LFLLLLLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "#L#L#L#L#L#L#L###L#L#L#L#L#L###L#L#L###L#L#L#L#L##", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#LLL#FLL", "#L#L#L#L#L#L#L#L#L###L#L#L###L#L#L#L#L#L###L#L#L#L", "LLLL#LLFLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLL#LLLLLLLLL", "#L#L#L#L###L###L#L#####L#L#R#L#L#L#L#L#L#L#L#L#L##", "#LLLLL#LLLLLLLLLLLLLLL#LLLLL#L#LLL#LLL#LLLLLLLLLLL", "#L#L#F#L#L#L#L#L#L#L#L#F###L#L#L#L#L###L#L#L#L#L#L", "LLLL#LLLLLLL#LLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLL", "#L#L#L#L#L#L#L#L#L#L###L#L#L#L#L#L#L#L#L#L#L#L#L#L", "LLLLLLLLLLLLLLLLLLLL#LLL#LLLLLLL#L#LLLLLLLLL#LRLLL", "#L#L#L#L#L#L#L#L###L###L#L#L#L#L#L#L#L#L###L###L#L", "LLLL#LLLLLLL#FLLLLLLLLLLLLFLLL#L#LLL#LLLLLLLLLLLLL", "#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L###L#####L#L###L###L", "#RLLLLLLLL#L#LLLLLLLLFLLFLLLLLLLLLLLLLLLLLLLLLLLLL", "#L#L#L#L###L#L#L###L#L#L#L#L#L#L#L#L#L#L#L###L###L", "LLLLLLLLLL#LLLLLLLLLLLLLLLLLLLLLFL#LLL#LLLLLLL#LLL", "#L#L###L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L", "LLLL#LLLLLLLLL#LLL#LLLLL#LLLLLLLLLLLLLLLLLLLLLLLLL", "#L#L#L#L###L#####L#L#L#L#L#L#R###L###L#L#L#L#L#L#L", "LL#LLLLLLLLLLLLL#LLLLLRLLLLLLLLL#LLLLL#RLLLLLL#LLL", "#L#F###L#L#L###L#L#L###L#L###L#L#L#L#L#L###L#L###L", "LL#LLL#LLLLLLLLL#LLLLL#LLLLL#L#L#LLLLLLL#LLLLL#LLL", "#L#L#L###L#L###L#L#L#L#L#L#L###L#L#L#L#L###L#L#L#L", "LLLL#L#LLLLL#LLLLL#FLLLLLLLLLLLLLL#LLLLLLLLLLL#LLL", "#L#R#L#L#L#L#L#L#L#L###L#L###L###L#L#####L#L#L#L#L", "#LLLLLLL#LLLLL#LLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLL", "#L###L#L###L#####L#L#L###L#L#L#L#L#L#L#R#L#L#L###L", "LLLLLLLL#LLLLLLLLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L###L###L", "#LLLLLLL#L#LLL#LLLLLLLRLLLLL#LLLLLLLLLLLLLLLLLLLLL", "#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L", "LL#LLLLLLL#LLLLLLLLLLLLLLLLLLL#LLLLFLLLL#LLLLLLLLL", "#L#L#L#L#L#L#L###L#L#L#L#L#L#R#L#L#L#L#L#L###L#L##", "LLLL#LLLLLLLLLLLLL#LLL#LLLLLLLLLLRLL#LLLLL#LLLLL#L", "###L#L#L#L#L#L###L###L#L#L#L#L#L###L#######L#L###L", "LLLLLLLL#LLLLLLLLL#L#LLLLRLLLLLLLLLL#LLLLLLLLLLLLL", "#L#L###L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L###L#R#L###L", "LLLLLLLLLLLL#L#LLL#LLLLL#L#LLLLLLLLLLLLLLLLL#L#LLL", "#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#####L#L#L#L#L#L#L#L", "#LLLLLLL#LLLLLLLLLLLLL#LLL#L#LFFLLLLLLLLLLLLLLLLLL", "###L#####L#L#L#L#L#L#L#L#L#L###L#L#L###L#L#L#L#L#L", "LLLLLLLLLL#LLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLL#L", "#L#L#L#L#L#L#L###L#L#L#L#L#L#L#L###R#L###L#R#L#L#L", "LL#LLLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLL#LLLLL", "#L###L#L#####L#L#L###L#L#L#L#L###L#L###L#L#L#L#L##"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "27531233/522880";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> maze = {"L#LL.LL..LL...L#L#LLLFLL.#...L.LLLL...R.LLLLL#.L.#", ".#L###.#L#L###L#.#.#.###L#.#L#.#.#L#####.#.#.#L###", "...L..L..#LL.LL...LL.L....LL.#L..LLLLL.LLLLL....L#", "L#L#.#L#L#.#.#.#L#.###L#L###L#L#L#L###L#.#.#.###.#", ".LLL.#LL.LL.F#.L..L#...#.R.F.L.L.LLLL#LL.#.RL#LLL.", "##.#.#L#L#.###L#L#L###.#L#L#.#L#L#L#.#.###F#L#.#L#", "LLLLL#.#LL.L.LL......L.LL.LLLL.#LL.L...LL#L.L...LL", "L###.#L#L#.#.#.#L#L#.#R###.#.#.#.#####L#.#L#L#L###", ".L.LRLL.LL.LLL.#.LL..#.LR.L.L....LL#.#L.LL.LLLLL.#", "L###L#.#.#.#L###.#.###L###.#.#L#L#.#L#L#.#L#.#L###", "L.LL.LL#L.L..L.LLLLL.#LLL..LLLL..L.LL.LL.#...L.L.L", "L#L#.###.#L#.#.###.#L#L#.#.#.#.#.#L#.###.#.#L#L#.#", "LLL.LLL#LL..LLLLLLLL...LL.L.L.L.L.LLL..L..L.L#.#..", "##.#L#L#.#####L#.#L#L#L#.#L#.#L#.#L#L#L###.#.#L#R#", "LL.LLL.#.L..LL...#LLLLLLL...LLLL.#L..#..LL.#.#L.L.", ".#.#.#.#L###.#L#L#.#.#L#L#L#L#L#.#.#.###L#L###L#.#", ".LLL..LLL.LLLLL..LL.LLL..#..L..LL........LL#....LL", "########.#L#L#L###L#.###L#.#.###L#L#L###L#.#L#L#.#", "..FL.L..L.LL.L.L..L...L...L.....L.L#L......LL.....", ".#.#.#L#.###.#L#.#L#L#L#L###.#.###.###L#####L###.#", ".LLL.....L.LL#LL....L.LLL#...RLL.#.LLLLLL.L.LLLL..", "####L#.###L###L#L###.#L#.#L#L#####L#L#L#.#L###L#L#", "L..LL#...L..LLL#..LL.LLLL#L.L...L....LLLLL.L...LL#", ".#L#.#.#L###.#L#.###.#L###L#.###L#L#.#L#.#.#L###L#", "LLLL.#LL.....LL.LLL..LLLLLL.LL.L.#L....R..L#.L.L..", ".#.###L#.#L#L#L#.#.#L###L###L#L#L#.#.#.#.#L#.#.#.#", ".L....LL..LLL#LLL#..L..L.#.LL.L..L..LLL#LLL.L....L", ".#L#L#L###.#.###.#.#L#L#.#.#L#####L#L#L#L#L#L#L#L#", "L.FL....L..LL..LLLL.L..L...#......LLL..L......LLL.", ".#L#.#.#L#R#.#.#L#L#L#L###.#L###.#L#L#L#.#L#.#L#L#", "LLL.LL.LLLL.LL.....LLL....L..LL......L.#L#.L...L.L", ".#L#.#.#.#.#.#L#L#L#L#.#.#.#L#####L#L#L#.#L#L#L#.#", "LL...L.#L#LLLLL....LR..#L.L#L#L..LL#...L..LL.L.LL.", "L#####L#.#L#.#.#.#L#.#L#L#.#.#L###L#.#.#L#L#.#L#L#", ".LLL.L...L...LL.L.L.L....LL#.LLL..LLL.LLLLL#L...L.", "######L#.#L#.###L#L#L###L#.#.#.#L###.###.#.#L#.#.#", "F..L.L.L.LL.L#LL.#.L.L.LR.L.L#L...L#L.LLL......LL#", ".#L#L###L#.#L#L#.#.#.#L#####.#L#.#L#L#.#.#.#.#L#L#", ".#L.L#LF..LR.#..LL.#...LL.LLL.L.LL.L.LLLLLLLL.LL..", ".#L#L#L#L#.#L#L#L#.#.#.#L#.###.#.#L###.#L#.#L#.###", "...L.#LL.#....LLL...L.F#LLLL.LLLL#L#LLL..LL#L...L.", "L#.#L#L#L#L#L#.#L#.#.#L#.#L#L###L#L#L#L#.#.#L#.#L#", "...L.L.LL.LLLL.L..LL...L.L..L..L.L.R.L..L#....L#L.", "####.#L#L###L#L#.#L#.#.#.#L###L###L#.#.#.#L#.#L#.#", "L.LLL#..L#L.L#...L.LL.L.L..LLL.LL..LL#.LLLL#.F.L..", ".#L###L#L#.#L#L#L#.#L#.###L#L#.###L#.#.###.#.#L#.#", "LL..L..#L.L.L#FLLLL#.#.L.#.#...L..LLFLL..LL.LL.LL.", ".#L#.#.#.#L#.#.#L###L#L#.#.#.#L###.#L#.#.#.#L###L#", "RLL.L#.L.L.#..R.L#.....L..L...LLLLL...L..LLL.L.#.#", "########L#.###L#####.#.#R###.###L#.#.#.#######.#.#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "2440148/42687";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> maze = {"L#LLLLLLLLLLLLL#L#LLLFLLL#LLLLLLLLLLLLRLLLLLL#LLL#", "L#L###L#L#L###L#L#L#L###L#L#L#L#L#L#####L#L#L#L###", "LLLLLLLLL#LLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLL#", "L#L#L#L#L#L#L#L#L#L###L#L###L#L#L#L###L#L#L#L###L#", "LLLLL#LLLLLLF#LLLLL#LLL#LRLFLLLLLLLLL#LLL#LRL#LLLL", "##L#L#L#L#L###L#L#L###L#L#L#L#L#L#L#L#L###F#L#L#L#", "LLLLL#L#LLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLL#LLLLLLLL", "L###L#L#L#L#L#L#L#L#L#R###L#L#L#L#####L#L#L#L#L###", "LLLLRLLLLLLLLLL#LLLLL#LLRLLLLLLLLLL#L#LLLLLLLLLLL#", "L###L#L#L#L#L###L#L###L###L#L#L#L#L#L#L#L#L#L#L###", "LLLLLLL#LLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLL#LLLLLLLL", "L#L#L###L#L#L#L###L#L#L#L#L#L#L#L#L#L###L#L#L#L#L#", "LLLLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#L#LL", "##L#L#L#L#####L#L#L#L#L#L#L#L#L#L#L#L#L###L#L#L#R#", "LLLLLLL#LLLLLLLLL#LLLLLLLLLLLLLLL#LLL#LLLLL#L#LLLL", "L#L#L#L#L###L#L#L#L#L#L#L#L#L#L#L#L#L###L#L###L#L#", "LLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLL#LLLLLL", "########L#L#L#L###L#L###L#L#L###L#L#L###L#L#L#L#L#", "LLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLL", "L#L#L#L#L###L#L#L#L#L#L#L###L#L###L###L#####L###L#", "LLLLLLLLLLLLL#LLLLLLLLLLL#LLLRLLL#LLLLLLLLLLLLLLLL", "####L#L###L###L#L###L#L#L#L#L#####L#L#L#L#L###L#L#", "LLLLL#LLLLLLLLL#LLLLLLLLL#LLLLLLLLLLLLLLLLLLLLLLL#", "L#L#L#L#L###L#L#L###L#L###L#L###L#L#L#L#L#L#L###L#", "LLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLRLLL#LLLLLL", "L#L###L#L#L#L#L#L#L#L###L###L#L#L#L#L#L#L#L#L#L#L#", "LLLLLLLLLLLLL#LLL#LLLLLLL#LLLLLLLLLLLLL#LLLLLLLLLL", "L#L#L#L###L#L###L#L#L#L#L#L#L#####L#L#L#L#L#L#L#L#", "LLFLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLLLLL", "L#L#L#L#L#R#L#L#L#L#L#L###L#L###L#L#L#L#L#L#L#L#L#", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#L#LLLLLLLL", "L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#####L#L#L#L#L#L#L#L#", "LLLLLLL#L#LLLLLLLLLLRLL#LLL#L#LLLLL#LLLLLLLLLLLLLL", "L#####L#L#L#L#L#L#L#L#L#L#L#L#L###L#L#L#L#L#L#L#L#", "LLLLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLL#LLLLLL", "######L#L#L#L###L#L#L###L#L#L#L#L###L###L#L#L#L#L#", "FLLLLLLLLLLLL#LLL#LLLLLLRLLLL#LLLLL#LLLLLLLLLLLLL#", "L#L#L###L#L#L#L#L#L#L#L#####L#L#L#L#L#L#L#L#L#L#L#", "L#LLL#LFLLLRL#LLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "L#L#L#L#L#L#L#L#L#L#L#L#L#L###L#L#L###L#L#L#L#L###", "LLLLL#LLL#LLLLLLLLLLLLF#LLLLLLLLL#L#LLLLLLL#LLLLLL", "L#L#L#L#L#L#L#L#L#L#L#L#L#L#L###L#L#L#L#L#L#L#L#L#", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLL#LLLLL#LL", "####L#L#L###L#L#L#L#L#L#L#L###L###L#L#L#L#L#L#L#L#", "LLLLL#LLL#LLL#LLLLLLLLLLLLLLLLLLLLLLL#LLLLL#LFLLLL", "L#L###L#L#L#L#L#L#L#L#L###L#L#L###L#L#L###L#L#L#L#", "LLLLLLL#LLLLL#FLLLL#L#LLL#L#LLLLLLLLFLLLLLLLLLLLLL", "L#L#L#L#L#L#L#L#L###L#L#L#L#L#L###L#L#L#L#L#L###L#", "RLLLL#LLLLL#LLRLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLL#L#", "########L#L###L#####L#L#R###L###L#L#L#L#######L#L#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "4766173/83334";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> maze = {"#....LL.LL...L#LLLLL...L.L.LL.LLL.LLL..LL..LL..L..", "#.###L#.#.#.#L#.#L#.#L###.#.#.#.#.#L#L#.#L#L#.###.", "#LLLLL#LL.L...R.L...LL#LLL..#.......LLLLLLLL..LL..", "#L#.###.#L#.#L#.#L#L#.#L#L#L#.#L#.#.#L#L#.#.###.#R", "L.L..LL.L.LL#L.L.LL.L.LL...LLL..LLLL#.LL...LLLLL#L", "#.###.#L#.#L###.#L#.###.#L#L#.###.###L#R#.#.###L#L", "...LLL.L.L.L..#LLLLL.LL.L.#..L..L.#..RL.LL#LLLLL..", "#L#L#.#.#.###.#L#L#L#.#.#.#.#L#.#####.#L#L#L#L#.#.", "L.LRLL#L..LLL..L#LLL....L.LLLLL...L.LL#L..LLL..L#L", "#.#.#F#.#.#L#L#.#L#L#L#.#L###L###L#L###L###L#.#.#.", "#..LL.LLL.#..L..L.LLL.LL.L#.#LL.LL.LLLLL.LLLL.LLLL", "#.#.#L#L#.###.#.#.#L###.#.#.#L#.#L#L#.#L#.#.#L#L#.", "#LL....L.L.LL.LLLLL.LLL.....LL#LLLLL#L..L......LLL", "#L#.#L#.###L#.#.#.#L#L###L#L#.#L#.#.#L###L###.#.##", "#LLLL.LL#...LLRL.L#L..#..L.LL..L.L..L.L.LL#.LLL..L", "#L###.#L#.#.#.#.###.#.###.#L#L#.#L#.#.#.###L###.#L", "#.#LF.FL.L..#L..LL#.LL.L...LLL.LL..LL.LLL.L.LLL.L.", "#L#L#.###L###L#L#L#.#.#.###.#.#.#L#####.#L#.#L#L#.", "LL#LL....L.....LL.L..L.L#....L.LL.L..L.L...L...L#L", "#.#.#L#.#.###.#.#L#.###L###.#F###.#.#L#.#.#L#.###.", ".LL.LLL.#L#L#.L.#LL.#.LL......LL.LLL..LLFLL.LLL..L", "#.#.#L#L#L#.#L#L#L#L#.#L#.#######.#####L#L#.#L#.#L", "L.L.#LL.LL.L...L.L....LLLLL....LLL.L.L..#.#R#..LFL", "#L#L###.#.#L#.#####.#L#L###.#.#.#L#L#L#.###L#.#L#L", "#.L.#L#.L.LLLL#LLL.LL...#L#..LL..L.LL.L.L...LL..LL", "#.#.#.#L#.###F#L#F#L###.#L#L#.#L#####.###.#.#L###L", "#..LLL...L#L.LL.#...LL..L..LL.LL..#.#L.L...L..LL..", "#L#L###.#.###F###.#L#L#.#.#.#L###L#L#L#L#.#L#.#.##", "LL..#.L.L.#L..LLLL.LLL#L...LLL#.#.LLLL...L.LL.LFLL", "#.#.#L#.#.#L###L#L#L#.#L#L#.#L#.#.#L#L#L#L###.#.##", "#L#LL.L.#.L...LL#.#........L#LL......LL....LLLL..L", "###L#.#.###.###L#L#L#.#.###########L#L#.###L#.#.#.", "#LLLL.#..L....#L..L.L.L..LLL#L...LLL..LLL..LLL#...", "#L#.#L#.#.#L#L#.###.#.###.#.#L#L#.#.#.#L#.#.#L#.#L", ".LL.LL...L#LL.L...L..L#L...L#LLL...LLL..LLL..R.L..", "#.#.#L#.#.#.###.#.#L#L###.#.#.#.#L#L#.#L#.#.#.#.#L", "#L.LL.LL.LF..LLLL.L.L..L..LL.L#..L..LL#.LL..L..L#L", "#L#.#.#.#L#####.###.#L#.#L#L#L#.#.#L#L#.#####.#L#.", "L.#L..L.L..L.....L#LL.....L.#.FLL..LL.LF...LL.L...", "#L###.#L#L#L#L#.###.#####.#.#L#.###.#L#L#L#L#.#.##", ".LLLLRL..L..L...LLLLLLL.L..LL.#L#L.LL..L.L.L#.L..L", "###L#.#.#L#L#.#.#.#.#F#L#######L#L#.#.###.#L#.#.#.", "....L.LLL.L..R#.LL..L.#L.LLLL..L..#LLL.LL.LL..#..L", "#.#R###L###.#.#L#.###.#.#.#.#.#L#.#L#.#.#L###L#L#.", ".LLL.L.L.L.LLL....L.LL#....LL.L.L.LLL.#..L.L.....L", "#L#L#.#.#.#.#.#L#L#.#L#####.###L#L#.#L#.#L#.#L#.#.", "#.L.LL#L.LLL.LL.LL.LL..LL...LL...LLL.L.L...LL.LLL.", "#L#L#L#.#L#.#.#L#.#.#.#L#L###L#.#L#.#.#L###L###.##", "..L.LLLL#.LLLLLLLL.L.L...L..L.#...#....LLLF.......", "#.#.#.#L#.###.#R###.#.#.#L###L#L###.###L#L#.#####."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "8207471/145980";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> maze = {"#LLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "#L###L#L#L#L#L#L#L#L#L###L#L#L#L#L#L#L#L#L#L#L###L", "#LLLLL#LLLLLLLRLLLLLLL#LLLLL#LLLLLLLLLLLLLLLLLLLLL", "#L#L###L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L###L#R", "LLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLL#L", "#L###L#L#L#L###L#L#L###L#L#L#L###L###L#R#L#L###L#L", "LLLLLLLLLLLLLL#LLLLLLLLLLL#LLLLLLL#LLRLLLL#LLLLLLL", "#L#L#L#L#L###L#L#L#L#L#L#L#L#L#L#####L#L#L#L#L#L#L", "LLLRLL#LLLLLLLLL#LLLLLLLLLLLLLLLLLLLLL#LLLLLLLLL#L", "#L#L#F#L#L#L#L#L#L#L#L#L#L###L###L#L###L###L#L#L#L", "#LLLLLLLLL#LLLLLLLLLLLLLLL#L#LLLLLLLLLLLLLLLLLLLLL", "#L#L#L#L#L###L#L#L#L###L#L#L#L#L#L#L#L#L#L#L#L#L#L", "#LLLLLLLLLLLLLLLLLLLLLLLLLLLLL#LLLLL#LLLLLLLLLLLLL", "#L#L#L#L###L#L#L#L#L#L###L#L#L#L#L#L#L###L###L#L##", "#LLLLLLL#LLLLLRLLL#LLL#LLLLLLLLLLLLLLLLLLL#LLLLLLL", "#L###L#L#L#L#L#L###L#L###L#L#L#L#L#L#L#L###L###L#L", "#L#LFLFLLLLL#LLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "#L#L#L###L###L#L#L#L#L#L###L#L#L#L#####L#L#L#L#L#L", "LL#LLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLLLLLL#L", "#L#L#L#L#L###L#L#L#L###L###L#F###L#L#L#L#L#L#L###L", "LLLLLLLL#L#L#LLL#LLL#LLLLLLLLLLLLLLLLLLLFLLLLLLLLL", "#L#L#L#L#L#L#L#L#L#L#L#L#L#######L#####L#L#L#L#L#L", "LLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#L#R#LLLFL", "#L#L###L#L#L#L#####L#L#L###L#L#L#L#L#L#L###L#L#L#L", "#LLL#L#LLLLLLL#LLLLLLLLL#L#LLLLLLLLLLLLLLLLLLLLLLL", "#L#L#L#L#L###F#L#F#L###L#L#L#L#L#####L###L#L#L###L", "#LLLLLLLLL#LLLLL#LLLLLLLLLLLLLLLLL#L#LLLLLLLLLLLLL", "#L#L###L#L###F###L#L#L#L#L#L#L###L#L#L#L#L#L#L#L##", "LLLL#LLLLL#LLLLLLLLLLL#LLLLLLL#L#LLLLLLLLLLLLLLFLL", "#L#L#L#L#L#L###L#L#L#L#L#L#L#L#L#L#L#L#L#L###L#L##", "#L#LLLLL#LLLLLLL#L#LLLLLLLLL#LLLLLLLLLLLLLLLLLLLLL", "###L#L#L###L###L#L#L#L#L###########L#L#L###L#L#L#L", "#LLLLL#LLLLLLL#LLLLLLLLLLLLL#LLLLLLLLLLLLLLLLL#LLL", "#L#L#L#L#L#L#L#L###L#L###L#L#L#L#L#L#L#L#L#L#L#L#L", "LLLLLLLLLL#LLLLLLLLLLL#LLLLL#LLLLLLLLLLLLLLLLRLLLL", "#L#L#L#L#L#L###L#L#L#L###L#L#L#L#L#L#L#L#L#L#L#L#L", "#LLLLLLLLLFLLLLLLLLLLLLLLLLLLL#LLLLLLL#LLLLLLLLL#L", "#L#L#L#L#L#####L###L#L#L#L#L#L#L#L#L#L#L#####L#L#L", "LL#LLLLLLLLLLLLLLL#LLLLLLLLL#LFLLLLLLLLFLLLLLLLLLL", "#L###L#L#L#L#L#L###L#####L#L#L#L###L#L#L#L#L#L#L##", "LLLLLRLLLLLLLLLLLLLLLLLLLLLLLL#L#LLLLLLLLLLL#LLLLL", "###L#L#L#L#L#L#L#L#L#F#L#######L#L#L#L###L#L#L#L#L", "LLLLLLLLLLLLLR#LLLLLLL#LLLLLLLLLLL#LLLLLLLLLLL#LLL", "#L#R###L###L#L#L#L###L#L#L#L#L#L#L#L#L#L#L###L#L#L", "LLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLL#LLLLLLLLLLL", "#L#L#L#L#L#L#L#L#L#L#L#####L###L#L#L#L#L#L#L#L#L#L", "#LLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "#L#L#L#L#L#L#L#L#L#L#L#L#L###L#L#L#L#L#L###L###L##", "LLLLLLLL#LLLLLLLLLLLLLLLLLLLLL#LLL#LLLLLLLFLLLLLLL", "#L#L#L#L#L###L#R###L#L#L#L###L#L###L###L#L#L#####L"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "1383031/24615";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> maze = {"L###.#L#L#.#.#####.#######.#L###L###.#######.#.#L#", ".LL.LLLLR.L.LLLL.L.#LLLLL..L.L.L..L....L....LL.LLL", "L#.#L#.#.#L#####L###.#.#L###.#.#L#L#L#L#.#.#L#L#L#", "LLLLL.L#.#...#L..LLLL...LL.#.LL#..L.LL.LLL.L.#LLLL", ".#.#.###L#R#.#L#L#.#L#.#L#L#.#.#L#.#.#.#.#.#.#.#.#", "LLL....LL#....FL.L.L..L.L.LLL..LL.LL...#L#LL...LL.", ".#L#L#L#R###.#.#.#.#.#L###L#.###.#L#.#L#L#L#.#L###", "L.LL.#..L#FLL.LL.#R..LL.LL.LLL..L#..LLL...LLL.L.L.", "L#.#####.#L#.#R#.#.#.###.#.#L#.#.#L#L#L#L###.#.#.#", "LL.#L...L.R#.#...#LL.LL.L#.#L#LF.L.LL.FLLFLLL....L", ".#L#.#L###L#####L#L#.#F#.#.#.#.#.#.###L#.#####.#.#", ".....L.LLLLLL.L..LLL..LLLL.LLLL#.#L...L.L#R..LL#L#", ".#L#.#.#.#L#L#L#.#######.#L#.#.###L#L#L#L#.#L###.#", "LLR#..L.LLL..LLLLLLL..LL.LL..LLLL.L.L.LLL#...LL.L#", "L#.###L###.###.#.###L#.#.#.#L#.#.#####L###L#.#.#.#", "LLLL....L.L..#.LL..LLL.#..LL.LLLLL...#LRL.L...L..L", "L###L#.#L#.#####L#L#.#L#L#.#.#L#F#.#.#F#L###.#L#L#", ".LLLL.LLL...LL.LL.L#.L.LLLL#LLL.LL...LL..LLLL..LLL", "L#L#L#.###.#L#L###.#L#.###L#L#.#.#L#.#L###L###L###", "LL.L..L.....LLLL.LLLLLL.L..LL#L...L.LLLL....L..F..", ".#L#L#L#L###.#F#.#L#.#.#L###L#.#.#L#.#.#L#L#######", "L.LL..L.LL.#...LL#L.L..LLLLL..LLL....#L.L...LL.LL.", ".#.#.#L#L#.#L#L#L###.#L#.#L#.###L#.#.#.#.###L#.#.#", ".L.LLL.LL.LL.LL..L.#L.LLL.LL..LLL.LLLLLFLL.#LLL..L", "L#.#L#.###L###.#L#L#L#.#L#.#.#L#L#.#L#L#L#.#.#L#.#", "LLFL.L.....L..L...L....L.L.LL..#F.L.L..LLL.LL#...#", ".#.#.#.###.#L###.#.#.#.#.#.#L#L#L#.#L#.#.#L#L#L#L#", "L#LLLL...LL.LLL.....L..L..L#LLL.LLLR.L....L.L..L..", "L#.#.#L#L#L#.#.#L#L#.#.#.#L###L#L#L#L#.#L#L#######", ".#.L.#L.L#L..L.#...#L#L#L..#....LL.#.L.L.LLLL....L", "L#.#L#F#####L#L#.#L#L#L#.#.#F###.#L#.#L#.#.#R#.###", "...L.L.LLL....L.....L...L.L.L#LL...LL#...L.L.#.#.#", "L#.#.#.#L#L#.#.#L#L#.#L#L#L#.#.#.#.###.#.#L#L#.#L#", ".LL#L#LL.L.L...#..L#L..LLL....LLLL..LLL.L..LLL.#.L", ".###L#L#L#L#.#.#L###L#.#L#.#.#.###.#L#.#.#.#.#L#L#", "....L#L#.L..L..L.#....LL.#.#LL......L..L..LLL#.#..", ".#L#.#.#.###L#.###L#L#L#.#.#L#L#L#.#.#L#####L#.#L#", "L.L#.L..L..LL.L#.LLL...LRLLLLL.LLLLLL#L.L.LLLL.LL.", "L#######L#.#.#.#L#.#.#.#.#.#.#L###L#L#.#.#.#L#.#L#", ".L.LLL........LF.#LL....L.LLL....L.LLL..L.LL..LL.L", "L#L###.#.#.#L#L###.#.#L#####.#.#.#L#.#L#.#L#L#####", "L#L#L.LLL..L..L.L#LLLLL.LLLL.#.LLL.L.LLLL..#...#LL", ".#L#.#.###L#.###.#.#L#.#.#.#.#.#L#.#L#L#.#L#L#L#L#", "....L#..LL.#.L.LLL......LRLLL..L.L.#.L.LL#LR.#.L.#", ".###.###.#L#.#R###.#.#.#L#L###L#L#L#L#.#L#.#.#.#.#", "..LLLL.LLL.#.#L..L.LLL..LL.#...LLL..LL.LLLLL.LL.L#", "L#L###.#.#L#L#.#.#.#.#.#L#L#.###L#.#.#L#L###.#.#L#", "..LLLLL..#L.L#LLLLL#LL.L.........L..L#L#L.LLL#L..#", "##.###L#.#.#.#L#L#L#.#.#.#L###L#L#L#.#.#.#.#.###L#", "L.L...LLLL.LL.LL.L...R..LLLLL..#L.L....L.R.L....L#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "734243/13974";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> maze = {"L###L#L#L#L#L#####L#######L#L###L###L#######L#L#L#", "LLLLLLLLRLLLLLLLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "L#L#L#L#L#L#####L###L#L#L###L#L#L#L#L#L#L#L#L#L#L#", "LLLLLLL#L#LLL#LLLLLLLLLLLLL#LLL#LLLLLLLLLLLLL#LLLL", "L#L#L###L#R#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#", "LLLLLLLLL#LLLLFLLLLLLLLLLLLLLLLLLLLLLLL#L#LLLLLLLL", "L#L#L#L#R###L#L#L#L#L#L###L#L###L#L#L#L#L#L#L#L###", "LLLLL#LLL#FLLLLLL#RLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLL", "L#L#####L#L#L#R#L#L#L###L#L#L#L#L#L#L#L#L###L#L#L#", "LLL#LLLLLLR#L#LLL#LLLLLLL#L#L#LFLLLLLLFLLFLLLLLLLL", "L#L#L#L###L#####L#L#L#F#L#L#L#L#L#L###L#L#####L#L#", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#L#LLLLLLL#RLLLL#L#", "L#L#L#L#L#L#L#L#L#######L#L#L#L###L#L#L#L#L#L###L#", "LLR#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLL#", "L#L###L###L###L#L###L#L#L#L#L#L#L#####L###L#L#L#L#", "LLLLLLLLLLLLL#LLLLLLLLL#LLLLLLLLLLLLL#LRLLLLLLLLLL", "L###L#L#L#L#####L#L#L#L#L#L#L#L#F#L#L#F#L###L#L#L#", "LLLLLLLLLLLLLLLLLLL#LLLLLLL#LLLLLLLLLLLLLLLLLLLLLL", "L#L#L#L###L#L#L###L#L#L###L#L#L#L#L#L#L###L###L###", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLFLL", "L#L#L#L#L###L#F#L#L#L#L#L###L#L#L#L#L#L#L#L#######", "LLLLLLLLLLL#LLLLL#LLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLL", "L#L#L#L#L#L#L#L#L###L#L#L#L#L###L#L#L#L#L###L#L#L#", "LLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLLFLLL#LLLLLL", "L#L#L#L###L###L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#", "LLFLLLLLLLLLLLLLLLLLLLLLLLLLLLL#FLLLLLLLLLLLL#LLL#", "L#L#L#L###L#L###L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#", "L#LLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLRLLLLLLLLLLLLLL", "L#L#L#L#L#L#L#L#L#L#L#L#L#L###L#L#L#L#L#L#L#######", "L#LLL#LLL#LLLLL#LLL#L#L#LLL#LLLLLLL#LLLLLLLLLLLLLL", "L#L#L#F#####L#L#L#L#L#L#L#L#F###L#L#L#L#L#L#R#L###", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLL#LLLLLLL#L#L#", "L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L###L#L#L#L#L#L#", "LLL#L#LLLLLLLLL#LLL#LLLLLLLLLLLLLLLLLLLLLLLLLLL#LL", "L###L#L#L#L#L#L#L###L#L#L#L#L#L###L#L#L#L#L#L#L#L#", "LLLLL#L#LLLLLLLLL#LLLLLLL#L#LLLLLLLLLLLLLLLLL#L#LL", "L#L#L#L#L###L#L###L#L#L#L#L#L#L#L#L#L#L#####L#L#L#", "LLL#LLLLLLLLLLL#LLLLLLLLRLLLLLLLLLLLL#LLLLLLLLLLLL", "L#######L#L#L#L#L#L#L#L#L#L#L#L###L#L#L#L#L#L#L#L#", "LLLLLLLLLLLLLLLFL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "L#L###L#L#L#L#L###L#L#L#####L#L#L#L#L#L#L#L#L#####", "L#L#LLLLLLLLLLLLL#LLLLLLLLLLL#LLLLLLLLLLLLL#LLL#LL", "L#L#L#L###L#L###L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#", "LLLLL#LLLLL#LLLLLLLLLLLLLRLLLLLLLLL#LLLLL#LRL#LLL#", "L###L###L#L#L#R###L#L#L#L#L###L#L#L#L#L#L#L#L#L#L#", "LLLLLLLLLLL#L#LLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLLLL#", "L#L###L#L#L#L#L#L#L#L#L#L#L#L###L#L#L#L#L###L#L#L#", "LLLLLLLLL#LLL#LLLLL#LLLLLLLLLLLLLLLLL#L#LLLLL#LLL#", "##L###L#L#L#L#L#L#L#L#L#L#L###L#L#L#L#L#L#L#L###L#", "LLLLLLLLLLLLLLLLLLLLLRLLLLLLLLL#LLLLLLLLLRLLLLLLL#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "11725779/222904";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> maze = {"#.#####.###.#.#.#.#L###.#####L#L#F#.#.#####.#.###L", "#L#L#.L.L.LLLLL..L.L#..L#.LLL.LL.LL.L...#LLL#..L.L", "#.#L#.#L#.#L#L###L#.#L#.#.#L#L###.#.#####L#L#L#L#.", ".L#L.LLLLR.LLL....#..LLLLL.L.LLL..#.LLL.LLLL.L#.LL", "#L###L#.#L#L###.#.#L###L#.###L#L#L###.#L#.#.###L#.", "#L.L....#.#...L..L.LLLLL#.LL...LL..L#.LL.LLLL...LL", "#.#.#L#L#.#L#.#L###.#L#L###L#.#.#.#L#.#L#L#.#.#L#L", "LLLL#.#.L...LRLLL..L.L...LR..L..L....L.L#L.L.LL.L.", "#.#L#L#L#L#L#L#.#.#####.#L###.###.#.#L#.#L#L#.#.#L", "LL.LL.L....L...LLL...R#..LL.#..LL.L..L.LLR#.L.L.L.", "#.#L#.#L#.#L#.#.#L###L#L#L#.#L###L#L#L###.#.###L#.", "...L..L..LL.LLLL..#LLL...LLLLF#R.LLLLL.L...LLL#...", "#L#.#L###.#.###L#.#.#.###L#.#.#####.#.#L#L#L#L#R#.", "#.LL..LL....L...LL.....R#.LL#L.L.L...LLL...L..#.#L", "#L###L###.#L#L#L###.#R#.#L#.###.#.#L#.#L#.#.#.#.#L", "L.LL#L.LLLL....LLLLL#.LLLL.L#LL..L..LL.LLL#..LLLLL", "#.#.#.#.#L#L#L#.#L#L###.#L#####L#.###.###L#L#.#L#L", "LL.........L......LLL.L.LLL.LL#LLLL......L......#L", "#.#L#L#L#.#.###.#.#.#L#L#L#.#.#L#L#L#L###.###.#L#.", "......LLL..F...LLL#LLL.L.L..LLL.#...L..LL..L#.#.L.", "#L###L#L#L#.#.#.#L#L#L#.###L#L#L#.#L#.#.#L#.#.#L#L", "#L.L.LLL.F.L...L#L...LL.LLL.LL#L..#LLL#.#L.L#..L#.", "#L#.#.###L#.#########.#L#.#.#L#L#.#.#.#.#L#######L", ".L#.#L..#L..LL.L.L#L...L.L..LLLLLLL..LLLLLLLL..LLL", "#L#L#.#.#.#L#.###.#L#L#L###L###.#L#.#L#L###.#L#L#L", "#LLL...L.LL..L.L.LL..L#....L.L....#...#L.LL.LL#.#.", "#L#.#L#.#L#.#L#.#L#.#L#.#####.#.#.#.#L#.###L#L#L#L", "LFL.....L.LLLLL.L..L..L..L..L.LL.L..L.L...#....L..", "#L#####.#.#L#L#.#.#.#L#.#L#L#F#.#L#.#L###.###.#F##", ".LLL#.LL...L.L#LL.#..LL..L.LLLLL#.L..R..LRL...L.LL", "#L#L#.#.#L#.#L#.#.#L#L#.#L#.#L#.#####L#L#.#.#####L", ".LF.L...#.#L.R#..L..#.LL....#LL.L.LLLLL..L....LF.L", "#L#.#.#####L#.#R#L#.#.#.#L###.###L#.#L###.#L#L#.#L", "..#..LLL.LLL.LLL.L..LL.LL.LL.L...LL.L.LLLLL.LL.LL.", "#.#.###L#L#L#L#L#L#L###.#.###L#.#L#.#.#L#.#.#.#L#.", "LL.LL.LL.L.L...L#L.L.R.LLL..L.RLL...LLL.LL..LL#...", "#.###L#L#.#L#.#.#.#.#.#.#L#L#.#L#L#.#L#####L#.#L#L", "LLLLF....L..L.R.LL#L...LFLL...#L..#L#..LLL.L#L#...", "#.#L#L#.#.#.#L#.#.#.#######.###L#L#L#L#.#L#L#.#.#L", "LL#.LL.L#L.L.LLLL...L.#LL.L..L#.LLL.#L#.LL......#L", "#.#L#L###L#.###.#.#L#.#.#L#.#.#.#L#L#.#.#.#L#L#L#.", "...L#..L#...L.LL...LL.LLL.#...LL#.#LLLL......LLL..", "#L#L#.#.#F#.#L#L#L#L#####L#L#L###L#L#L#.#.#L#L#.#.", "R.L...L..LLFL.L....LL.#.#LLLL...LL.L#L#.LL#L.L#.#L", "#L#L#.#.#.#L#.#L#L###.#L#.#L#.#L#.###.###L#.#.#.#.", "L.LL#..L...LLL.L#L.L..LL..L.L...#.LLLL#LL.RL#.LLL.", "#L#L#.#.#L#.#L###.#L#.#L#L#L#.#L#L#.#L###L#L#.#L#.", ".LL.LL..LL..LL#L.L...L..L...LL#L..LL.LLLL...L.L.L.", "#L#L#L#L#L#.#.#.#L#L#.#.#.#L#L#.#.#.#L#.#####.###.", "LLLLLL.L.LL...LL..LLLL.L#LLLLLL.LLL.#...L.L...L.LL"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "2525735/48438";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> maze = {"#L#####L###L#L#L#L#L###L#####L#L#F#L#L#####L#L###L", "#L#L#LLLLLLLLLLLLLLL#LLL#LLLLLLLLLLLLLLL#LLL#LLLLL", "#L#L#L#L#L#L#L###L#L#L#L#L#L#L###L#L#####L#L#L#L#L", "LL#LLLLLLRLLLLLLLL#LLLLLLLLLLLLLLL#LLLLLLLLLLL#LLL", "#L###L#L#L#L###L#L#L###L#L###L#L#L###L#L#L#L###L#L", "#LLLLLLL#L#LLLLLLLLLLLLL#LLLLLLLLLLL#LLLLLLLLLLLLL", "#L#L#L#L#L#L#L#L###L#L#L###L#L#L#L#L#L#L#L#L#L#L#L", "LLLL#L#LLLLLLRLLLLLLLLLLLLRLLLLLLLLLLLLL#LLLLLLLLL", "#L#L#L#L#L#L#L#L#L#####L#L###L###L#L#L#L#L#L#L#L#L", "LLLLLLLLLLLLLLLLLLLLLR#LLLLL#LLLLLLLLLLLLR#LLLLLLL", "#L#L#L#L#L#L#L#L#L###L#L#L#L#L###L#L#L###L#L###L#L", "LLLLLLLLLLLLLLLLLL#LLLLLLLLLLF#RLLLLLLLLLLLLLL#LLL", "#L#L#L###L#L###L#L#L#L###L#L#L#####L#L#L#L#L#L#R#L", "#LLLLLLLLLLLLLLLLLLLLLLR#LLL#LLLLLLLLLLLLLLLLL#L#L", "#L###L###L#L#L#L###L#R#L#L#L###L#L#L#L#L#L#L#L#L#L", "LLLL#LLLLLLLLLLLLLLL#LLLLLLL#LLLLLLLLLLLLL#LLLLLLL", "#L#L#L#L#L#L#L#L#L#L###L#L#####L#L###L###L#L#L#L#L", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLL#L", "#L#L#L#L#L#L###L#L#L#L#L#L#L#L#L#L#L#L###L###L#L#L", "LLLLLLLLLLLFLLLLLL#LLLLLLLLLLLLL#LLLLLLLLLLL#L#LLL", "#L###L#L#L#L#L#L#L#L#L#L###L#L#L#L#L#L#L#L#L#L#L#L", "#LLLLLLLLFLLLLLL#LLLLLLLLLLLLL#LLL#LLL#L#LLL#LLL#L", "#L#L#L###L#L#########L#L#L#L#L#L#L#L#L#L#L#######L", "LL#L#LLL#LLLLLLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "#L#L#L#L#L#L#L###L#L#L#L###L###L#L#L#L#L###L#L#L#L", "#LLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLL#LLL#LLLLLLL#L#L", "#L#L#L#L#L#L#L#L#L#L#L#L#####L#L#L#L#L#L###L#L#L#L", "LFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLL", "#L#####L#L#L#L#L#L#L#L#L#L#L#F#L#L#L#L###L###L#F##", "LLLL#LLLLLLLLL#LLL#LLLLLLLLLLLLL#LLLLRLLLRLLLLLLLL", "#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#####L#L#L#L#####L", "LLFLLLLL#L#LLR#LLLLL#LLLLLLL#LLLLLLLLLLLLLLLLLLFLL", "#L#L#L#####L#L#R#L#L#L#L#L###L###L#L#L###L#L#L#L#L", "LL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "#L#L###L#L#L#L#L#L#L###L#L###L#L#L#L#L#L#L#L#L#L#L", "LLLLLLLLLLLLLLLL#LLLLRLLLLLLLLRLLLLLLLLLLLLLLL#LLL", "#L###L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#####L#L#L#L", "LLLLFLLLLLLLLLRLLL#LLLLLFLLLLL#LLL#L#LLLLLLL#L#LLL", "#L#L#L#L#L#L#L#L#L#L#######L###L#L#L#L#L#L#L#L#L#L", "LL#LLLLL#LLLLLLLLLLLLL#LLLLLLL#LLLLL#L#LLLLLLLLL#L", "#L#L#L###L#L###L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L", "LLLL#LLL#LLLLLLLLLLLLLLLLL#LLLLL#L#LLLLLLLLLLLLLLL", "#L#L#L#L#F#L#L#L#L#L#####L#L#L###L#L#L#L#L#L#L#L#L", "RLLLLLLLLLLFLLLLLLLLLL#L#LLLLLLLLLLL#L#LLL#LLL#L#L", "#L#L#L#L#L#L#L#L#L###L#L#L#L#L#L#L###L###L#L#L#L#L", "LLLL#LLLLLLLLLLL#LLLLLLLLLLLLLLL#LLLLL#LLLRL#LLLLL", "#L#L#L#L#L#L#L###L#L#L#L#L#L#L#L#L#L#L###L#L#L#L#L", "LLLLLLLLLLLLLL#LLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLL", "#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#####L###L", "LLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLL#LLLLLLLLLLLLL"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "302155/5811";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> maze = {"L.LLL....#L.L#LL..L.LL..LL.RL#..LLLL.L.LLL..L.L...", ".#L#.#L#L#.#L#R#.###L#.#L#L#.#L#L#.#L###.#L#.#.#.#", "L....LL.L.L..LL..LL.LLL...LLL.L.LLL#L.LL...LL..L..", "##L#L#.###L#.###L#F#####L#L#.#L#L#L#L###L#L#L#L#.#", "L.L....LLLLL.LL.L.LL.LL..LL.L#..LL..L..#...L.#..L.", "L###.#L#.#L#.#L#.###L#L#####L#.#L#.#.#.#L#L#.#L###", ".#L.LLLL.#LLLLL.L#..L#...L.L.#LLL..LL.L.LLLLL.L...", "L#.#L#.#.#.#.#L#######.#L#L#L#L#.#L#L#.#.#L#.#.#L#", "...L.LL.LLLL.L.#L.L#.......#LL..L#R.LL...L.L..L...", ".###.###L###L#L#.#.#L#.#L#L#L###.#.###.#.#L#.#.#.#", "LL.L.L.L..L#.....#L#.L.L...L..LLL..LLLLL...LLLL..#", "L#L###.#L#F#L#.#L#.###.#.#L#.#L#L#L#.#.#L#L#L#L#.#", "L..LL....LLL.#LL..LL.LL..LL#.L.L..LL..L#.LL..LL.LL", "R#L###.#L#.#.#L#L#.#L###L#.#.#L#L#L#.#L###.###L#.#", "LLLLL..LLL.......L.#LR.....LLL.#LLLL.#L...L.L.L#LL", "####L#.#L#.#.###.#.#L#.###L###.#.#.#L#L#.#.#.###.#", ".L......L.L.LL.LL#L.LL.L..L#..L.L#LL.LLLL.LLL.L.LL", "L#L#F#.#.#L#L#L#.#.#L###.#.#.#L#L#.#L#.#.###L#L#L#", ".#....LF.L.#LL...L.L..L..LL..L......LLL.LL..LL.L..", "##L#.#L#.#.###.#L#L#.#.#.#L###.#L#.###.#L#L#.#.#.#", "LL.LL#LL.L..LL.#L........#LLL.LL..LLLL..L#.#..LL.#", ".#L#.#L#.#.#.#####.#.#.#R#.#.###.###L###.#L###L#L#", ".#..L.L#L..LLL..L...L.LL.#.R.L.#.LLL.L..L#..LLL..#", ".#L#L#L#.#.#.#.###.#.#.#.#L#.###.#L#.###.#L#.#.#.#", "L....#LLL#LLL..R.#.LLL.LRLL.LL..L..#..L.LL.LLLL..#", "L#.#L#L#.#######L#####L#.#.#.#.#L#.#.#L#L###L#L###", "..LLL.L#.#RL.#.L.LL.LL....L#.LL...L#.L.L..LL.L..LL", "L###L#.#.#F#L#.###L###.#.#.###L#L#.#L#L###.#.#.#.#", "..L.....LL...#LL.L.LL..LL..LLL...L..LL.#...L..L#LL", ".#L#L#L#L###.#L#L#L#L###L#.#L###L#.#.#.#.#F###L#L#", "LL.#.L.LLLLLL.LLLLL#LLLL.#.L..LL.LL.L...LLL..L.LL#", "L#.#.#.#L#.#.#.#.###L#.#.#L#L#.#####L#.#.#L#L#L#L#", "...#LL.L.#L#LL.L..LFLL....LL.L..LL..LL.#LL.L.#L#.#", "##.#L#.#.#.#L#L#.#.#.#.#L#.#.#.#.#####.#L###.#.###", "LL..L.LL..LLL..#...LL....LLLL....#.LLLLLL#LL..L.L#", "L#L###L#L#L#.#L#L###L#.#L#.###L#.#.#.#.#L#.#.#.#.#", "L#L.LL.L.#.L...LL.LLL...LLLL...L.L.LLLL#.L...L....", ".###.#.#L#L#.#.#.#L#L#.#L#######.#.#.#L#.#L#.#.#L#", ".#..L#...#L#..LL.....LL.LL..LLLL.#.LL..L..L#L....#", ".#F#.#.#.#L#L#.#L#L#.#.#.#.###L#L#.#.#L#.###.###L#", ".L.L..LR.LL#.#L#LLL...L.L.L....LL..L..F..LL.L....#", ".#.#.#.#L#.#.#.#.#.###.#L#.###L#L#.###.#.#L#.###.#", "L.LLL#L#LL.LL...L.L#L.LLLL..LLLLL#LLL#..L#LLLL...#", "##.###.#.#.###.#.#L#L#L#.###L#L#L#L###L#.#.#L#L#L#", "LL...#.L..L...L.L..L.LLLL..L.L..L.LL..L..LLL...LLL", ".#.#.###.#.#.#L###L#.#L#L#.###L#L#L#L###.#.#L###L#", "......LLL....FLLL.F.LL.LL#.#.L.L.L...#..L.L.LLLLLL", ".#L#.#L#.#L#L#L#.#.###.#L###.#L#L#.#.#L#L#L#L#L#L#", ".#...L..LLL..L..LL.LLLLL...LLL....L..L..L#.#L.....", ".#.#L#.###.###L###L#L#.#.###L#.#########.#####L#.#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "4957409/96195";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> maze = {"LLLLLLLLL#LLL#LLLLLLLLLLLLLRL#LLLLLLLLLLLLLLLLLLLL", "L#L#L#L#L#L#L#R#L###L#L#L#L#L#L#L#L#L###L#L#L#L#L#", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLL", "##L#L#L###L#L###L#F#####L#L#L#L#L#L#L###L#L#L#L#L#", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLL#LLLLL#LLLL", "L###L#L#L#L#L#L#L###L#L#####L#L#L#L#L#L#L#L#L#L###", "L#LLLLLLL#LLLLLLL#LLL#LLLLLLL#LLLLLLLLLLLLLLLLLLLL", "L#L#L#L#L#L#L#L#######L#L#L#L#L#L#L#L#L#L#L#L#L#L#", "LLLLLLLLLLLLLLL#LLL#LLLLLLL#LLLLL#RLLLLLLLLLLLLLLL", "L###L###L###L#L#L#L#L#L#L#L#L###L#L###L#L#L#L#L#L#", "LLLLLLLLLLL#LLLLL#L#LLLLLLLLLLLLLLLLLLLLLLLLLLLLL#", "L#L###L#L#F#L#L#L#L###L#L#L#L#L#L#L#L#L#L#L#L#L#L#", "LLLLLLLLLLLLL#LLLLLLLLLLLLL#LLLLLLLLLLL#LLLLLLLLLL", "R#L###L#L#L#L#L#L#L#L###L#L#L#L#L#L#L#L###L###L#L#", "LLLLLLLLLLLLLLLLLLL#LRLLLLLLLLL#LLLLL#LLLLLLLLL#LL", "####L#L#L#L#L###L#L#L#L###L###L#L#L#L#L#L#L#L###L#", "LLLLLLLLLLLLLLLLL#LLLLLLLLL#LLLLL#LLLLLLLLLLLLLLLL", "L#L#F#L#L#L#L#L#L#L#L###L#L#L#L#L#L#L#L#L###L#L#L#", "L#LLLLLFLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "##L#L#L#L#L###L#L#L#L#L#L#L###L#L#L###L#L#L#L#L#L#", "LLLLL#LLLLLLLLL#LLLLLLLLL#LLLLLLLLLLLLLLL#L#LLLLL#", "L#L#L#L#L#L#L#####L#L#L#R#L#L###L###L###L#L###L#L#", "L#LLLLL#LLLLLLLLLLLLLLLLL#LRLLL#LLLLLLLLL#LLLLLLL#", "L#L#L#L#L#L#L#L###L#L#L#L#L#L###L#L#L###L#L#L#L#L#", "LLLLL#LLL#LLLLLRL#LLLLLLRLLLLLLLLLL#LLLLLLLLLLLLL#", "L#L#L#L#L#######L#####L#L#L#L#L#L#L#L#L#L###L#L###", "LLLLLLL#L#RLL#LLLLLLLLLLLLL#LLLLLLL#LLLLLLLLLLLLLL", "L###L#L#L#F#L#L###L###L#L#L###L#L#L#L#L###L#L#L#L#", "LLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLL#LL", "L#L#L#L#L###L#L#L#L#L###L#L#L###L#L#L#L#L#F###L#L#", "LLL#LLLLLLLLLLLLLLL#LLLLL#LLLLLLLLLLLLLLLLLLLLLLL#", "L#L#L#L#L#L#L#L#L###L#L#L#L#L#L#####L#L#L#L#L#L#L#", "LLL#LLLLL#L#LLLLLLLFLLLLLLLLLLLLLLLLLLL#LLLLL#L#L#", "##L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#####L#L###L#L###", "LLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLL#LLLLLLL#LLLLLLL#", "L#L###L#L#L#L#L#L###L#L#L#L###L#L#L#L#L#L#L#L#L#L#", "L#LLLLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLL", "L###L#L#L#L#L#L#L#L#L#L#L#######L#L#L#L#L#L#L#L#L#", "L#LLL#LLL#L#LLLLLLLLLLLLLLLLLLLLL#LLLLLLLLL#LLLLL#", "L#F#L#L#L#L#L#L#L#L#L#L#L#L###L#L#L#L#L#L###L###L#", "LLLLLLLRLLL#L#L#LLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLL#", "L#L#L#L#L#L#L#L#L#L###L#L#L###L#L#L###L#L#L#L###L#", "LLLLL#L#LLLLLLLLLLL#LLLLLLLLLLLLL#LLL#LLL#LLLLLLL#", "##L###L#L#L###L#L#L#L#L#L###L#L#L#L###L#L#L#L#L#L#", "LLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "L#L#L###L#L#L#L###L#L#L#L#L###L#L#L#L###L#L#L###L#", "LLLLLLLLLLLLLFLLLLFLLLLLL#L#LLLLLLLLL#LLLLLLLLLLLL", "L#L#L#L#L#L#L#L#L#L###L#L###L#L#L#L#L#L#L#L#L#L#L#", "L#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#L#LLLLLL", "L#L#L#L###L###L###L#L#L#L###L#L#########L#####L#L#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "1464756/28435";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> maze = {"LLL..L.#.LL..L...#...LLLR..LL..L.L.L...LLL.L..L.L.", ".###L#L#.#.#.#.#.#.#.#.#L#.#L###.#L###.#.###.###L#", "LLL.L.LL....LL..LLLL...#LLF...LL...#.L.L.FL#LL..LL", ".#L#.#.#L#L#.#.#L#L#L#L#L#.#L#.#.###L#R###.###.#.#", ".L...#.LL...L...LL.L.L.#..L#.L.LL..FL.LLL..L.L.LL#", ".#L#.#.#L#L#L#.###L#.###L#L#L#.#L###.#L###.#.#.#L#", "LLLL.L.#LLLLL..#LLL...LL.LL#L.L..#LL...#..L...LLL#", "L#.#L#.#L#.#.#L#.###L#.#L#L###.#.#.#####L#.#L#L#.#", "L#F.LL...L.LL..L.#.L.L.L..L.....L#L...L.L#.L..L#LL", ".#.#L###.#L#.#.#.###L#L#L#.###.#.#L###L###.###.#.#", "..LLLLL#....L.LL...LLLLL....L#.....LL.LL..LL.#....", "L#L#.#L#.#.#L#.#.#####.#L#L#.###.#L#.#####L#L#L#R#", "LLLL.#..L.LLL.LL.LL#LL...L.#.LL.LL.#........LL.#.L", "L###.#L#L###L###.#L#.#L###.#.#L#.#L#L###.#.#.###.#", "L...LLLL.LL#.LLLL#...#.#..LLL.LFL....R..L.L#.....#", "L#L#.#L#L###.#.#L#.#L#.###.#L#L#.#.#L#L#.#L#L###.#", "L...LL.#L.LL.#.L.L.LL.LL.L.L.#.LL............L.LLL", ".###.#L#L#.#L#F#L#.#L###L#####.#L###.#L#.#L#L#.###", ".......LLLL#L.L...L.....LLL#.L..L...LL.L.L..LLLL.L", "##L#L#L#.#L#.#L#L#.#L###.#.#.#.#.#.#L#L#L#.#.#.#.#", "L#......LLL...L#...L.LL..#L.LL.L.LL#.#....L#L...L#", "L#.#.###L###L###L#L###.#.#.#L#L#L#L#.#L#####L#.#.#", ".L...LL...LLL..L.L...#..F.LLL..L.L...LLL..L#LF...#", "####.#.#.#F#L#.###.#L#L#L#L#.#####.#L#.###.#.#L#.#", ".L..LLL.L#LL.#..LLL#LRLL.L.L.L..L.L.LL.L.L.L.L.L.#", ".#.#.#L#.#.###.###L#.#.#.#L#.#L#.###.#L#.#.#.#.#.#", "L#.#.L..L.LLL...LLLLLL...#.L..LL..L.L.L..LL#L#.L.L", "L#L#L#L#.#L#L#L###L###L#.#.#.#L#L#L#L#.#L#L###L#L#", "L#L#..L#LL...LLLL.LLL.L#LLLL...L.R...L.#.LLL.L...L", ".#.#L#.#L#.#####L#L#L#.#L#######L#L#.#L#L#.#L###L#", "LL...LF.L..#L..L.LF.LLL..L..L.LLLLL#L.L#...LLLLLLL", ".#L#.#L#.#.#.#.#L#L#.#.#L#L#.#L#L#L#L#.#.#.#L#.#.#", "L....LLL.L.L...#L.LF.LL.L#.LF...LLL#.L.#LLL...L.LL", "##.#.#####L#L#.#L#L###L#L#L#.#L#L###.#.#L#.###.#.#", "L...L.LLLL.LL.L.LL..LLL......LLLLL.L.#LLL.L.LL.L.#", "##.#.#.#.#.#.#L#.#######L#.#.#L#.#L#L#L#L#L#R#.###", "LL.L....LL.L..LLL...L.LLL.LLL.L#.LL#..F..LLLL.LL..", "######.###L#.#L#.#L#L###L#L#L#.#.#.#.#.###L#######", ".L.#LL.L.......LL#..L#L..#L.L#..L...L...LLLLLLL...", "L#L#.###.#.#L#.#.#L#.#L#.#L#.#.#L###.#.#L###L#L#.#", "....L#LL.LL.L..#.L.L...L...#...LR#L#.LL..LL..#L.L.", "L#L#####L#.###L###.#L#.#.#L###L#.#.#.###.#L#.#L#.#", ".LL#LL....L..L..LL.LL..LLF.LLLLL.#L#.L.LLLRLL.RL..", ".#L#.#L#L#.###L#.#.#.#L#L#L#L#.###.#.#.#.#L###L#.#", "..LL.LLL.L...L.FL.LL.LL#....LLLL....LLL.LL.LLLL..#", ".#.#.#L#.#.#L###L#R#.#L#.#.#.#.#.#R#.###L###.###L#", "....L.LL.#.LL.L.L.L.L#LLRLLL.......#.#L.L#LL.LL.L.", ".#.#L#L#.#R#.#L###.#L#L#R###.#.#L#L#.#L#.#.#L###.#", "LLLLLLLL.L.LL.LLLLLL...LL#LLL.RL.#L.L...L.LL...#L#", ".#.#L#.#L#.#F#L#####L#L###L#L###L#L#L###L#.#L#####"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "11549063/215424";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> maze = {"LLLLLLL#LLLLLLLLL#LLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLL", "L###L#L#L#L#L#L#L#L#L#L#L#L#L###L#L###L#L###L###L#", "LLLLLLLLLLLLLLLLLLLLLLL#LLFLLLLLLLL#LLLLLFL#LLLLLL", "L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L###L#R###L###L#L#", "LLLLL#LLLLLLLLLLLLLLLLL#LLL#LLLLLLLFLLLLLLLLLLLLL#", "L#L#L#L#L#L#L#L###L#L###L#L#L#L#L###L#L###L#L#L#L#", "LLLLLLL#LLLLLLL#LLLLLLLLLLL#LLLLL#LLLLL#LLLLLLLLL#", "L#L#L#L#L#L#L#L#L###L#L#L#L###L#L#L#####L#L#L#L#L#", "L#FLLLLLLLLLLLLLL#LLLLLLLLLLLLLLL#LLLLLLL#LLLLL#LL", "L#L#L###L#L#L#L#L###L#L#L#L###L#L#L###L###L###L#L#", "LLLLLLL#LLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLL#LLLL", "L#L#L#L#L#L#L#L#L#####L#L#L#L###L#L#L#####L#L#L#R#", "LLLLL#LLLLLLLLLLLLL#LLLLLLL#LLLLLLL#LLLLLLLLLLL#LL", "L###L#L#L###L###L#L#L#L###L#L#L#L#L#L###L#L#L###L#", "LLLLLLLLLLL#LLLLL#LLL#L#LLLLLLLFLLLLLRLLLLL#LLLLL#", "L#L#L#L#L###L#L#L#L#L#L###L#L#L#L#L#L#L#L#L#L###L#", "LLLLLLL#LLLLL#LLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLLL", "L###L#L#L#L#L#F#L#L#L###L#####L#L###L#L#L#L#L#L###", "LLLLLLLLLLL#LLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLLLLL", "##L#L#L#L#L#L#L#L#L#L###L#L#L#L#L#L#L#L#L#L#L#L#L#", "L#LLLLLLLLLLLLL#LLLLLLLLL#LLLLLLLLL#L#LLLLL#LLLLL#", "L#L#L###L###L###L#L###L#L#L#L#L#L#L#L#L#####L#L#L#", "LLLLLLLLLLLLLLLLLLLLL#LLFLLLLLLLLLLLLLLLLLL#LFLLL#", "####L#L#L#F#L#L###L#L#L#L#L#L#####L#L#L###L#L#L#L#", "LLLLLLLLL#LLL#LLLLL#LRLLLLLLLLLLLLLLLLLLLLLLLLLLL#", "L#L#L#L#L#L###L###L#L#L#L#L#L#L#L###L#L#L#L#L#L#L#", "L#L#LLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLL#L#LLLL", "L#L#L#L#L#L#L#L###L###L#L#L#L#L#L#L#L#L#L#L###L#L#", "L#L#LLL#LLLLLLLLLLLLLLL#LLLLLLLLLRLLLLL#LLLLLLLLLL", "L#L#L#L#L#L#####L#L#L#L#L#######L#L#L#L#L#L#L###L#", "LLLLLLFLLLL#LLLLLLFLLLLLLLLLLLLLLLL#LLL#LLLLLLLLLL", "L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#", "LLLLLLLLLLLLLLL#LLLFLLLLL#LLFLLLLLL#LLL#LLLLLLLLLL", "##L#L#####L#L#L#L#L###L#L#L#L#L#L###L#L#L#L###L#L#", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLL#", "##L#L#L#L#L#L#L#L#######L#L#L#L#L#L#L#L#L#L#R#L###", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#LLL#LLFLLLLLLLLLLL", "######L###L#L#L#L#L#L###L#L#L#L#L#L#L#L###L#######", "LLL#LLLLLLLLLLLLL#LLL#LLL#LLL#LLLLLLLLLLLLLLLLLLLL", "L#L#L###L#L#L#L#L#L#L#L#L#L#L#L#L###L#L#L###L#L#L#", "LLLLL#LLLLLLLLL#LLLLLLLLLLL#LLLLR#L#LLLLLLLLL#LLLL", "L#L#####L#L###L###L#L#L#L#L###L#L#L#L###L#L#L#L#L#", "LLL#LLLLLLLLLLLLLLLLLLLLLFLLLLLLL#L#LLLLLLRLLLRLLL", "L#L#L#L#L#L###L#L#L#L#L#L#L#L#L###L#L#L#L#L###L#L#", "LLLLLLLLLLLLLLLFLLLLLLL#LLLLLLLLLLLLLLLLLLLLLLLLL#", "L#L#L#L#L#L#L###L#R#L#L#L#L#L#L#L#R#L###L###L###L#", "LLLLLLLLL#LLLLLLLLLLL#LLRLLLLLLLLLL#L#LLL#LLLLLLLL", "L#L#L#L#L#R#L#L###L#L#L#R###L#L#L#L#L#L#L#L#L###L#", "LLLLLLLLLLLLLLLLLLLLLLLLL#LLLLRLL#LLLLLLLLLLLLL#L#", "L#L#L#L#L#L#F#L#####L#L###L#L###L#L#L###L#L#L#####"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "495878/9231";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> maze = {".#.#.#.#.#.#.###L###L###.#.###L#L#.###.###.###L#L#", "L.LL..L..#L......LL#.L.LLLLLLL..L.LLL#L.L...LLLLL#", ".#.#.#L#.#.#L#L###L#.#L#####.#.#.#.#####.#.#L#L###", ".L.#L#.#..L.L#L..#.......LL#LLL..LL#.#LLL..LLL.L..", "L###L#.###.#.#L#.#.###L#.#L###F#L#.#.#L#.#.#.#.#L#", "LLL#.LLL.LL.LR...#..L.L..#...#LL.LL#L#.#L#LLLL.LL.", ".#.#.#L#L#.###L#L#.#L#L#.#L#L#L#.#R#R#L#L#####.#L#", "L#LL.LL#L.LL...L.L.#...#LL..L#..LLLL.LLL.L...L.L..", "##.#.#######L#.#.###L#.#.#.#.#L#.#L###.#L###.#L###", ".LLL...L.LL..L.....LR#..L#......LLL.LLL.L.LL...L..", ".#L#L#.#L###.###.#L#.###L#L###F#L#L#.#.#.###.#L#L#", ".#L.L..#....L.LL.F..L..#L..#....LL.L.L.#.LLLRL.LL#", ".#L#.###L#L#L#L#.#L#.#L#.#L#.#L#####L#L#.#L###L#L#", "......L...LLLL.#...L.L.L.......L.L...#.LLL..LLLR..", "L###L#L###.#L#.#L###L#.#.#.#L#.#L#L#L#L#L###L#.#.#", "..LL.LL#.L.L.#.LL.LL.L.#.#.#L..L...#....L....#LL.#", "L#.#L#.#.#L#L#L#L###L#.#.#L#.#####.#.#L#L#L#.###.#", "LL.#LLLL..LLL..LL#L.L#.LLLL.LLL..LLLL.L#L.LLL.LL.L", "L#L###L#.#R#L#L#L#L#.#F#L#L#L#.###.#.#L#L#L#L#.#.#", "L#L.LLL.L..LL..L...........FLLL#LR.FL..#.L.#.#L...", ".#L#.#L#L#L#L#L#R###L#.#####.#.#.#.#L###L###.#.#L#", "LRL.LL.#.L..L.L#L#..L#.LLL.LL#.#LLL#..LLLL...LR.L#", ".###.#.#L#L#.#L###L#F#.#L#.#.###.#L#.#L#R#.#.###.#", "L.L#...#LL.#.LLLL#L.LLL...LLLLLLL..LL.LLLL.L....L#", "L#L#L###L#.#.###.#L#L#.#.#L###L#.#.#L#L#L#.#.#L#.#", "LL.LRLL#.L.LL#..LL..LLL#.L..L...LLRLL..#LL.LL#.#.#", ".#F#L#L#.###L#L#L#L#L#L#L#.#L#L#L#.#L#.###L#.#L#.#", ".L.#.L..L#L.L..LLLL.L..#L....L..L#.L..LL.LL#LLLLL.", ".#L#.#L#L#.#.#.#L#L#.#L#.#.#.#.#L#.#L###L#.#L###.#", ".L.LL.LLL#L#L#L.LL.LL.LL.#L.....LL.LL#L..#L....LL.", ".#L#.#L#.#.#L###L#.#.#L#L#.#L#.#.#L#.#.###.#L###.#", "..LLL..LL..#LLL#L#.LL#LL.LL...LFLL..LL.LL.L#..L#..", ".#L#L#L#L#.#L#.#.###.###L#.#L#L#.#L#####L###.#L#.#", "..LLLLLL.LL#LLLL.LL.L#.LLRLLL.L#L..#.LL..LLL.L...L", "####L#L#.#####L#.#.#.#L#L#R#.###.#.#.#L#.#L#.#L#.#", "......L.L#L..LL.L..#.LL....L.F..L.L.L.L.LL.L...LL#", "##.#L#L#.#L#####L#.#.#.#L#L#L#L#L#.###L#L###L#.#.#", ".#L#.L.L.L.LL.L..#.L...LL#..LLLRL....LL.LLLL.#...L", "L#.#L#L###L#L#L#L#.###.#.#.#L#L#.#####L#.#L#.#.#.#", "L.L..LL.L.L.L.L.L.L#L#......L.L.L.L..LL.L.LLLL....", ".#.#######.#.#L###L#L#.#.#.#.#.#####.###.#L#L#L###", "L..L.#LL.LLL.LL..LL.L#L.L.L.LLL#L#L.....L.L#.L.L.#", "F#L###.#L#L###.#L#R#L#L#.###.#L#L#.###L#L#.#L#.#.#", ".#L...LLLL..LL...L..LLL...L.L..#LLLL..LLL.....L..L", "L#L#L#L#.#L###L#L#.#.#L#L#.#L#.#.#L#L#.#L#.#L#L#L#", "L.LL.LL.LLL.L..L.#LL.L.#.LL.L#.LLLLL...LL..#.LL#..", "L###L#L#L#L#L#####.#L#L#L#.#L###.#L#.#######L#L#.#", "LL.#L#L....L...#LLLLLL..RL...L.L..LLL.LLL..L...LLL", "L#L#.#L#.#L#.#.#.#.#.#.#L#L#.#.#L#L#.#L#.#L#L#L#L#", ".L.LL.LLLL.LLLLL.LL..L.#.....L...#LFL.LL..L.LLL..#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "1555427/31350";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> maze = {"L#L#L#L#L#L#L###L###L###L#L###L#L#L###L###L###L#L#", "LLLLLLLLL#LLLLLLLLL#LLLLLLLLLLLLLLLLL#LLLLLLLLLLL#", "L#L#L#L#L#L#L#L###L#L#L#####L#L#L#L#####L#L#L#L###", "LLL#L#L#LLLLL#LLL#LLLLLLLLL#LLLLLLL#L#LLLLLLLLLLLL", "L###L#L###L#L#L#L#L###L#L#L###F#L#L#L#L#L#L#L#L#L#", "LLL#LLLLLLLLLRLLL#LLLLLLL#LLL#LLLLL#L#L#L#LLLLLLLL", "L#L#L#L#L#L###L#L#L#L#L#L#L#L#L#L#R#R#L#L#####L#L#", "L#LLLLL#LLLLLLLLLLL#LLL#LLLLL#LLLLLLLLLLLLLLLLLLLL", "##L#L#######L#L#L###L#L#L#L#L#L#L#L###L#L###L#L###", "LLLLLLLLLLLLLLLLLLLLR#LLL#LLLLLLLLLLLLLLLLLLLLLLLL", "L#L#L#L#L###L###L#L#L###L#L###F#L#L#L#L#L###L#L#L#", "L#LLLLL#LLLLLLLLLFLLLLL#LLL#LLLLLLLLLLL#LLLLRLLLL#", "L#L#L###L#L#L#L#L#L#L#L#L#L#L#L#####L#L#L#L###L#L#", "LLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLRLL", "L###L#L###L#L#L#L###L#L#L#L#L#L#L#L#L#L#L###L#L#L#", "LLLLLLL#LLLLL#LLLLLLLLL#L#L#LLLLLLL#LLLLLLLLL#LLL#", "L#L#L#L#L#L#L#L#L###L#L#L#L#L#####L#L#L#L#L#L###L#", "LLL#LLLLLLLLLLLLL#LLL#LLLLLLLLLLLLLLLLL#LLLLLLLLLL", "L#L###L#L#R#L#L#L#L#L#F#L#L#L#L###L#L#L#L#L#L#L#L#", "L#LLLLLLLLLLLLLLLLLLLLLLLLLFLLL#LRLFLLL#LLL#L#LLLL", "L#L#L#L#L#L#L#L#R###L#L#####L#L#L#L#L###L###L#L#L#", "LRLLLLL#LLLLLLL#L#LLL#LLLLLLL#L#LLL#LLLLLLLLLLRLL#", "L###L#L#L#L#L#L###L#F#L#L#L#L###L#L#L#L#R#L#L###L#", "LLL#LLL#LLL#LLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#", "L#L#L###L#L#L###L#L#L#L#L#L###L#L#L#L#L#L#L#L#L#L#", "LLLLRLL#LLLLL#LLLLLLLLL#LLLLLLLLLLRLLLL#LLLLL#L#L#", "L#F#L#L#L###L#L#L#L#L#L#L#L#L#L#L#L#L#L###L#L#L#L#", "LLL#LLLLL#LLLLLLLLLLLLL#LLLLLLLLL#LLLLLLLLL#LLLLLL", "L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L###L#L#L###L#", "LLLLLLLLL#L#L#LLLLLLLLLLL#LLLLLLLLLLL#LLL#LLLLLLLL", "L#L#L#L#L#L#L###L#L#L#L#L#L#L#L#L#L#L#L###L#L###L#", "LLLLLLLLLLL#LLL#L#LLL#LLLLLLLLLFLLLLLLLLLLL#LLL#LL", "L#L#L#L#L#L#L#L#L###L###L#L#L#L#L#L#####L###L#L#L#", "LLLLLLLLLLL#LLLLLLLLL#LLLRLLLLL#LLL#LLLLLLLLLLLLLL", "####L#L#L#####L#L#L#L#L#L#R#L###L#L#L#L#L#L#L#L#L#", "LLLLLLLLL#LLLLLLLLL#LLLLLLLLLFLLLLLLLLLLLLLLLLLLL#", "##L#L#L#L#L#####L#L#L#L#L#L#L#L#L#L###L#L###L#L#L#", "L#L#LLLLLLLLLLLLL#LLLLLLL#LLLLLRLLLLLLLLLLLLL#LLLL", "L#L#L#L###L#L#L#L#L###L#L#L#L#L#L#####L#L#L#L#L#L#", "LLLLLLLLLLLLLLLLLLL#L#LLLLLLLLLLLLLLLLLLLLLLLLLLLL", "L#L#######L#L#L###L#L#L#L#L#L#L#####L###L#L#L#L###", "LLLLL#LLLLLLLLLLLLLLL#LLLLLLLLL#L#LLLLLLLLL#LLLLL#", "F#L###L#L#L###L#L#R#L#L#L###L#L#L#L###L#L#L#L#L#L#", "L#LLLLLLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLL", "L#L#L#L#L#L###L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#", "LLLLLLLLLLLLLLLLL#LLLLL#LLLLL#LLLLLLLLLLLLL#LLL#LL", "L###L#L#L#L#L#####L#L#L#L#L#L###L#L#L#######L#L#L#", "LLL#L#LLLLLLLLL#LLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLL", "L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#L#", "LLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLL#LFLLLLLLLLLLLLL#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "552977/11172";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> maze = {"FF#FFFFF#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL", "F#FF#FF#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "FFF#FF#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "FF#LF#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#R", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RR", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RRR", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RR#R", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RR#RR", "LLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LRRRR#RRR"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "10555089/6640";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> maze = {".....", "#####", "FLRFL", "#####", "....."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "5/2";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> maze = {".....", "#####", "FL.FL", "#####", "..R.."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> maze = {"..#.....#.#.............#..#", ".#.#...##..###...#....#...R.", "..##..#.#.##..#...##.#.#...#", "...#......##.#..#..##.##.#.R", ".#..###..##.#.##.##......##.", "#..#..#..#..R###.#...#......", "#..###...##.....F#####..##.#", "...###.#...#..#.#.#....#....", ".....#......##....#...##....", "...#.#..#.....#..#......#...", "#.###.##...#....#...##..#...", "..#.#.....#F..##...#.#...#.#", "R.......##.#..#.###...#R##..", "..#..#...#..#..#..##.F.L#...", ".#..#.##...##..#.##.#.#.....", "...###.....#.#..##..#.#...#.", ".##.##.............##.#....#", "######......#..#.##.#..R.#.#", ".#..#..#####..####.#..#.##.#", ".#...#..###...#.#.##....#.##", "..##...#........#.##.#.##.#.", "#.##..#..##....#...#...##.#.", ".#.#..##..##...##....##..#..", "#..#..R....#..#.##.......##.", "..##.#..##.#...##........#..", "......R..#..###.##.#...#F...", "#.##..#...#.......#..#......", "....##...#.##.#.#.#...#.#...", "##F#.......#..#.........#.#.", "..##....#.#..#..##...#.####.", "....#R##.#.#.#.#.#.......#.#", "#...##.#....#.#.#.#.#....#.#", "#..#.##R.#.#.##R......#.###.", ".#..#R...#...##.#...#..#.#..", "#...###..........##..#.....#", ".#.##...#..#......#.#..#...#", ".#.###....#R.#.#..#R.....#R.", ".##..###..F.#.####.#.......#", ".......#R#.#...#.#...R...#..", ".##.####.#.###....##......#.", ".#.....#....###...#..#..##..", ".#.####......##...###.......", "#........#.##.##..#.#..#.#..", "......##..#.#.#..#.#....####", "...#.#...##.#.#.#.#.#.....##", "####.#..#..##.........#..R.#", "....F.##....##..#.#...###...", "#..##.R####....#.#...#....#.", "#.##..L.R.###.#..#....#.....", "..#.#....##..#....###..##..."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "4357/70";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> maze = {"#..L.L..L##..#...#.#.#..##.#.#.", "L..#L##.L####.LL###L##LL.LF##LL", "L##.###L.L##R.L..LLL.LL.#.#L#L#", "L#.####.L.#..L##L.LL#...LL.LLL.", ".L#LL#..LL#L#.#L.##L.#.#L##...L", "####L.#LL.....L.#L.#...###.LL..", "##LL...##..##L#FL#L.#L###L#L##.", ".#L.#.L####.##.#L.L#.#.##L..L#.", "..#LL.#LL##.###L#L.L..##RLL#.#L", "..#.L..LLL#..#L..L..#.#.#L..LLL", "#.#..##.LLL##L#.LL#..L####LL.##", "#.#.#LR.L###..R#L##L##LL#LL.#.L", "#.#..L.LL#L..L##LLL.#..##LL.#L#", ".#..L#L#.#L.L..#.LL.LL.L#LLLLLL", "####L#L#.##L#L#LLL#L.#.#.LL.###", "...#.#R.L##L..L.....L#L#.LL#..#", "...##.#.L.LL###.#L..#L#.L.#.LLL", ".....##L###.LLL.#L#.#R##LL.....", "#...####.#LL.##.R#L....#LL#L...", ".......##.L.#.LL...L#LLLL#.#.L#", "......##.#L.L.L#.LL#.LL#L.#.L..", "#..#.....#..#.###.L.#LRL#L.L.L#", ".#..#.###.#.#...#LL####.#..L.#.", "...#####L..#...##..#.#.#.L#L##.", "..#.##..#L..#L..L#L#..#.#L.#L.L", "##..LL##LL###.#.#.#LL..##....#R", "L.LLLLL.L##.LL.LL##R..L##L..#R.", "#...#.L.#.##..##L.L.L.#LLL#.LL.", "#.#L...##...#RL.L.##LL#.LL...#.", "..#L.L.#..##L.##.###.LL#..LLLLL", "#.##L.L.##.#L######LL.L#LL#.LLL", "L..L#L.#.L#LRLLL.L#L#.L##L..#L#", "L.L#..#L.#L.L#.L..###L#.#L#.#LL", "#.L#LL#.F#.L.#.##..L.L###.LLL#.", "#.RL#L.L#L.#.#FL.#.##.#L###.##.", ".#L#LL.L.#LL#L#.##.#LL.LLF#RL#.", ".#LL#.#...#L#L..#L.#.L#.LL.LL#R", "#.L#..L#.#.#L#.##L#.##.LL#L..#L", ".#.#..L###L.LLLL.#....#L##.L#.#", "#.###L#...#.L..#..#...#.#.#L.#.", "####.LL#.#L#.L.#L.####..##.#L##", ".##R...##F...#L#.#..#L.#.#L#..L", "..##L.L.LL##LL.L#..#.#..#L.#L#.", "#.#.#L..LLLLL#..L##.#.LL.L.#.LL", "####..L..##.L##.LL###..#.####LL", ".L.L#L.R.#LL##.LL#L#L##.L.L##.L", "#L.##LLLL#L##.#LLLL#LL.LL#R#.#L", ".#LLLL..#.LL..#.#.#LL..L#.####L", ".LL##....L.#L###L..##L.#.##.#L."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "470279/8037";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> maze = {"LLLL#..#...#.#####RLL#.#.#.", "L#LL#.###.#R######LLL#.....", "LR#L.#FLL#R..#L####.LL#####", "L##..LR.L##L##.##.#.#R#L...", "LL#.#.L.###LFLF##L..#.L#L..", "#LLL#.LL#.#.L#.LL.#L.L##.##", ".LL#LR.#L.#L#..LL#LL#F.L.LR", "#L#.#.LLL#LLLLL.L#..#L#.RL#", ".#.##L#L..L...F#.L#L..###L#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "26014/1065";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> maze = {"F##.#", ".L#.#", "LL#..", "F.##.", "#LLL#", "#.LL#", ".#FLL", "#L#F#", "#R#L#", "F..L#", ".L#L#", "F#.#L", "LL##L", ".FLLL", "##L#F", "FLL.#", "LL#.#", ".LL.L", "#.LL#", "#L#L#", "FLL.#", "L.#LL", "#L.L#", "L.##.", "LLL##", ".##.#", "#.#..", "..#.#", "#.#.."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "841/50";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> maze = {"....#.#...#L#.", "##..#....##..#", ".#.......#..L#", "#.#..####.#.#.", ".....#.....F##", ".....#..LL#L.#", "..#..#.R.##.L.", "####.#.#.##.##", ".#..##.L..F##.", ".##...#...#.#.", "#..##..L#...#.", ".##L..#LL##L.#", "###..###.#.L##", "...#...##.L.#.", "#.#.#.LR#L#L.L", "##.##.#.#RL##.", "#.LL..###.....", "...#.#.#.##L#.", "#.##....###..#", ".#..#.#L.##...", ".....##.##..L.", "....#.#.#.###.", ".##.##..L.##..", "#...#####.L.#.", "#.#..#..#L#..#", ".#.##..LLL#..L", "L..L#.L##.#L..", "###.##LL.L...F", "##...L...##.#.", "#.L.##.L.LLL.#", ".L..###.LL#R.#", "...LL.#.L#.#..", "..#L#...#..##.", "..LL#F.##.##F.", "....L..#.#.#.#", ".....L.L.FL#L#", "L...L.L.#.#..#", "L#R#L..R#.F#LL", "L#L.#.#.#.L.#.", "..#R#.##.#.#.R", "#F...R###..#L.", "##F##..L..R.#.", "F..L.R.L.#L#.L", ".#.#F#.#LL..LL", "F##.#.L##.....", "##..#F.#.L.RL.", "#.#.#...##L..#", "#...##L.#####.", ".#..#L...#..#."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "131317/3276";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> maze = {"#.....##.#LL#LLL#.#.", "#.....#.#L.LL#LLL###", "....#..#.#LLLLL#LL#.", "##....##.#LL#LLL#L#.", "#...#.#L#LL.LL###L#.", "#...##L.#LLLL#..###.", "#..#L.LLLLLLLL#.##..", "#.#LLLLL#L#LLLL#.##.", "..###LLL#L#LLL###L#.", "...#.#LLLLL#LLL#LLL#", "..#.######LLLLL###L#", "#......#LLRLLL#LLLRL", ".#......#LL#.LLL###R", ".....#..##L#LLL##LLL", "..#.#.#..#L#LL##LL#L", ".#....#.#LLLLLL#L.#L", "..###...####F#FL#LLL", "..#....##LLLL###LLLL", "........#LLL#L#LLLL#", "..######LLLL#L.L#LLL", "#.#.##LL##LLFLLRLLLL", "#...#LLLL#L#RL#L##L#", "#.##L##LF#LLL#L.LLLR", "..#LLL.L#LLLL#LLLLL#", "..#L#LLLLLLLL#L##LLL", "..##LLLLLLLL###L###F", "..#LLLLLL##L#.#LLL.L", "#..#LL##LLLLLLL#L#LL", "..#RL#..#LLLL#L#####", "..#.#....##.#LLLLR##", "##.#....##LL##L#LLLL", "...#####.#########LL", "##.#..#L##L.L.LLLL#L", "LL#...#RLLL#LL.LL#LL", "LLL#.##LL##LLLLLLL#L", "L#LR##LL#.LLLL#LL##R", "L#LL#####L###L.#.#LL", "LLLLLLL##LL#F#LLL##L", "LL##L##LLLL#LLLLLL.L", "L#LLL#LLLRLLFLLLL###", "LLLL.#.#L##L#LLLLLLL", "###LLLLLL#LLLLFL#L.L", "L.LL#LLLLLLL##LL##LL", "#LLLLLLLL###LLLLL#LL", "##.LLLRL#LL###L.#.#L", ".#LLLLLLLLL#LLL#...#", ".#LLLLL#LLLLLLLL#...", "#.#L##L###RLLLLL##.#", ".#LLL#LL#LLFLLL#...."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "1300790/27783";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> maze = {"##....#...#..###", "###....####.#...", "...##.#...#....#", ".##.##..#.#.##..", "LR#..##.#....#..", ".LL#...#R##.....", "#.L.#.#FL#.#....", "..#F####L.######", "LL.#..L.#...#L#L", "#.####.##FL.LL.R", ".LL#.#.#F.L.R.L#", "LL.##.LLF#L.##L.", "##.##L#R##L#.L.R", "...#..L#.##.###.", "RL##.L..LL#R#.#.", "LL.L#.#.R.#..LLL", ".L#FF..#.LL..L.#", ".#..#L..L##.L#F#", "###.L##.LL#.LR.#", "..##L.LLL.##.##.", "##.#.RL#LL#...#.", "LL.L.##L.##.RLLL", "##.RFF#...L..L#L", "#L...#.#.R##..#F", "L.#L######.LF.##", "###LFL##L..####.", "#.L..#LLL#RL#.L#", "#L#L#.#.L#LL..#L", "#LL..#.F.##.....", "#R.#.LL#L.L#.L#."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "563163/20608";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> maze = {"#.###...##..##RF.##...F..#..#...#", "..#....#...#..#.LL.L#.LL###....#.", ".......#.##....###L#.#...#.#....#", "#...##.##......#...L.#L#..####.#.", "##....#.####...#LR..#.L.#.L...#.#", "#......##.......###.R..###.L..#R#", "....#.....#.##....#.#.#F...#.....", ".........#....#..#.#..L.#..R#...#", "####....#..#....#L.L....#L..###L#", "..##..#.###.#..#F.L#.#.##.F..#...", "...#.#.##.####..#.##.R###..L#F...", "....#...##.#..####.##.#L##.#.L#..", "##.###.#.L##.#.#.L#.##LL#LL#.#.L.", "#......#...##..##..LLF...L##...LR", ".##.###.LL.LL#..#.L#....#..##..##", "#..##L....LL###L...#.#L.##..L##.#", "...#.##.L.#L#.#.##.##...#.#LL#..#", "#.#.#.#..LL#.#.#..L########L.#L##", "###.#.L#..###..#.L#..L##.....L..#", "#F#.#..........#....#...L.RL#.#.L", "#.L#L.#...##...#...##.#..#...L#..", "....L#...L##...#.#.LL##....L...#.", ".L.L#.FL.#....#L.#.#L..L.#.###..#", ".#...##.....#FL.L#.RLL####...L..L", ".#...#..##............#..L..L..#L", "L...#..#.L.L.L#..#..#L#...#F###.#", "L..#L.L.#.L.#####.#.#..L..#L..L#.", "#L#.L###..L..#L#.#L#...F.#F.#...#", ".####.#L..#.##.L#.....#..#L..L..L", "L.F..L.L.#..##L#..#L.#L##.L.#.R.#", ".#.L####.L##L....F...R.#LL...#.#.", ".#..L#.#..###.L#.....##L#.##....#", "#.....#..L..##..L.#.F##.#.#..####", "....####L####.##....L.#.F.L##L#LL", "...#.##.###.#.#LR.L.L.#L#LLFLL.L.", "...#.#.##....###.#.#...L..F...#.."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "505141/10412";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> maze = {"#...##", "#.#...", "...##.", "##..##", "L.#...", ".#L##.", "F...##", "L##...", "#.#LLF", ".##LLL", "L#FF.F", "F#.##L", "LLLLL.", "F..#L#", "FL#.#.", ".LL#..", "L.LL##", "L##LL#", "FLL##.", "##LLL#", "LLRL.L", "#F#FL#", "L.LLLL", "L#.#LL", "#L..L#", "LL.#FL", "L#LLFL"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "10757/676";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> maze = {".#LL#L##.", "#LLFLL###", "FLL###L#L", "L.RL##LLL", "###..LLLL", "###L.LL#L", "LLR#L#LLR", "#LLL#.##R", "#L#LLFL#F", "LLLR##..L", "LLL##LL.L", "#L###L#LL", ".##RLL##F", ".#LLF#L.#", "#.#LL#.L#", "#..#.#LLL", "..#LL.L#L", ".##L#LLLL", "..#LLLL##", "##L.RL#LL", "#LFLRLLL#", ".L#LL###.", "FLLLL.##.", "L#LL##..#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "44617/1984";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> maze = {"...##LL.L##..#.#.##...#.##..#", ".###.L..LL##..######...#.####", "##L.#LLL.#L.##..#.#..#.##L#LL", "##.##LLR#L.LF#.#L#L#...#LL#LL", "LFL#.L#L.LLL.##..#L####.FL.LL", "LLLL.L#.#L###.#L#.L.#.LL##.L#", "##.#LL.#L##LL#LLL..#L#LLL#.LL", ".L.L#LLL.L#LL#...L.LF#LFL.#L#", ".#..#LLL#R.LL#LL##R##LLLL##.L", "L###LFL#.L#LL.#L#.#L#RR#F#..#", "#LLL.LLL##.LL##L##.FLL#L.L..#", "##LL##L####L.L.L#L#.#LLL.#.LL", "LL#L#..####L#L#LLLLLL#FL###L.", "LLLL#L#L..#.L.L...L#L.L###LR#", "#L##.##F#L.L.L#...##L.L#.#F.#", "L.L#.###L##LRL.##..LLLR##L#.L", "#F.F#.#L.R#.#L###.#L#L#..LLLL", "LLL#..#L.LF.#.#.LL#.R#.#LL..L", "L.#.###R#L.#L.LL.RLL##L#LLLLL", "LR##L#.###L..L#L.LLLL#L.LLL#L", ".L.L..##L#L##L#..#.L..#...#.L", "RLL#.##LL.##.##.L#L#L#LLFLL.L", "#L#.##.#L.LL#LL#LLLL####LL#LF", "#.##.#LLL..##.LLL###L#LFL#FLL", "#LL##L.F#LL#LLL#.L#..#LL###L.", ".#LLL#L.#LLFL..LL#LLL.L.##.##"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "1585109/38080";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> maze = {"FF#.#..#.", "RLF#.#R#.", "#....#..F", "#....LF#R", "L..LR.#LL", "#.#L###.#", "#F.L.#FL.", ".L.#.LL##", "#####.#..", "..#.#L##.", ".#R##...#", "#.L.FF#R.", "LFRLFR#..", "#R.L..#F.", ".#.R.RL.#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "167/11";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> maze = {"#.#..#.##L.L...#.#.L#.#LF#....#L..", "..#.#.L.##.L..##LL#L...L##.L.#LLL#", "..#L.....L.L#...L#..#.FLL##LL..LL#", "###.#..#..##.L.L.#F.#..##..#LL.LLL", "..##.L#L.#L##..#L.##..#...###...#L", "..L...#.L..L..L.LR..#.L####LLL..#.", "L.L.#.#.#LL##...#L.##L...#..L#L##L", ".#.##L#..L.L.#L#..L##L#.L#####L.L#", ".##.##L..#######.L.#.L##.L#......L", ".#....#.#LL#L..L###...#....#.##L##", ".###L..##LLLFL##..#...L##....##...", "..#L.##.#...#..#..#.#..L.L.###.#..", "#...#.###L.#L#.L##..L....##....###", "LR#..###L..#.L.####.##L###....##.#", ".#...LLL.###.FL##..#.#.#.#.#.#####", "LLL.L..#..L#..#..#...#L.###.....##", "#...#...#L#L...##..##.L.#..#.###.#", ".#...L#.#...##..#####.#L.LL#..##..", "..###LL#LLLL.##..L##.#.###L.#.###.", "#..#######.##..##L..###...L..##.#.", "..##.#.F.#.L#...##.L#L...R#.###...", "##.##LLL#.L#.#...#.F#.L##..#....#.", ".##LL...#..L#F.....L.....R#....#..", "###..#FL.#LL##..#L#####LL..#..#...", "##..####L##.#.#L..#L..##.##..#....", "L...#.##.###L##R.LL#.##L###....#.#", "L####....##..L##.L##.#LL.#.#..#...", "L...#..#..#.####.#.LL#FL#..###...#", "...#.#L.R...#L.....#L..#.R.#..###.", "L#..##...##.##L...##.##..L#.#...##", "#L....#.L..R.L#.##..##.#.#.#...#.#", ".L#L#.F##.LL###.#.##.#L..#.....##.", ".L#L###.L.#L.#.L#.#L.#.#.#...#.###", "...#.##.####.#.#.#.#....L##.##...#", ".##...##F##..L...L.L...#..##...#.#", "L#...#..L##.L#.###.##LRL.#.L#...#.", "..##.#L.###LL..###.###.L.L.#..##.#", "#L#.##L#.L#.L.F###.##.#..#.#..####", "...#.L..L##L.L.LL#L##..#L.L#.#.###", "..#####....##.F...#L#.......##....", "..###.L.L#.##..L.#..#.#L.#.#.####.", "L..#####..LL.L.FL.LL#.L...#.#L.#.#", ".R..L...##.L.LL#.#.L.R..L.###L#..#", "#L##LR#.#..#L#.L.L###L#L..L...##..", "....#.#...#.#.L.L##.#.LL##..#####."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "2799139/42120";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> maze = {"#.#.#.##.#..#.#..#....##......#..R........", ".L.##.......#.....#..##...#.##.#.L..##.#.#", ".#..#..#.....#####.#L.....LF...#.#....#.#.", "##......#...#.###.######.#.#.....###..#...", "..#...#.F##.##.#...##........##.#..#.#.#..", "..#..#R..##..####.#.##L.#..#....#.#.####..", ".#..#...###R.....##...#R..##......##.....#", "##...#F.L#F#.L########.#.###...R.#.##.##.#", "##...#..#..#F#..#.....F..#.....#..L.#.#.#.", ".R.....#.#......#.....###F##..F....#....##", ".##L.R#R.#F..F...##L.......#.##..##.#####.", "L##..#F#.....R.F.#L.F###.#..#LL..#.#...#.#", "L.#.##....#..F#.#.##..#.##..##..#L###..###", "###..R#L.#L#.#....L..#.R.L.L........#####.", "##..##....F.RF.R####..##...#...#.####.....", "#.##.#...#...#..#.#..L.##...#..#..#..#...."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "91799/2288";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> maze = {"...LL..LL#L...#.##..##L#...#.......", "L.L.#.#.#.L##RL..##..#.L#....##..##", "LL.##.....LLL.##L.####.LL#####.....", ".L.L####.#L.LL#L#..L.L##L.#.....##.", "#.LL.#.#L#.#L.#...#LL.#.L#..###.##.", "L....#...LLLL.#..L.#.#LL.###...#..#", "...#.#LL...L##L#.#.L.#.#L#...##...#", "..L#.L.....L#..##.L#..L###.#....#..", "L##LL#..#L.L#.LL.L.L###L#.#L##.....", "LL.##.#.L.L#LL.#..#.L#L.###LL#...#.", "..###.#..L..L##..##LLL#.#LL.#......", ".#...#.L.L####.#LL#L..L..LRL##...##", "##..##L.#.#L...#.#L.L..L.###.....#.", ".....#.#L.F.#L.L#.LL.L###.#.#..#...", "..##..#..L##..L...#L.####.#........", ".#..##.##.##LL##L.L###..L.#.....###", "#..##..###LL.L..#.#.#L..L#.#..#..#.", "L###..###LLL##L#.#.##.#.L.####.###.", ".LL#....#.####.#...#L##L.F...#.....", "LL.L##..#.#..##.#.#...LLL#.L#....##", "..#LL####L.LL.L#.##.L#.L.#..###.##.", ".#...L....L.LL.##..#L.LLL.#.F####..", ".#LL.LL.LL.L.##L#LLLL..L..LL##LL.#.", "#.L..#L..#L.#LLL.#..#.#...L.#.L.L.#", "..#L#..#L.#..#LL.LL##L...##LL##.L#.", "##.L#.LL.###L.#.LL..LL.L###..F##..#", "#.#..#....L####.#LL..##.#.#.#..L.##", ".#...L###L#F..#L#L#LF.LL###L##.#F..", "L#L..L...L.#L.###.#L##L.#..##LL..LL", "L##L##L#L##..LLL#....##.##.#L#####R", ".....#####.##L.#F.#.L#.#L..LLL#...#", ".###L#..LL.###L.L.##..#..L.L##LLL#.", "..LL.#..L#.#.L.##..##L##.LL.L##.LL.", "#L..LL.#.F.#.L.#L#.LL.##..L.L.LFL#.", "#L#L..L..L.L#L..L#.....L#..#...LLL#", "L......LLL.#...L.#.#LLL.L.LL##..LL.", "#.L.L###.#L#LL#F#..#...#..L.##.#.#.", ".#LLL.L.##..#L#L.####L#L.###.LL.#L.", ".##L.L.L#L###.LLL...L#.#..LLL...##.", "#L.#..LL#..#.##..#.L.##..#L##.....#", "FL###..###LF..##.#F.L##......#.L##.", "#.#....L##..R.#####L...#L...L...#L#", "#.L.L..#.##.###LL.#F#.#.L#LLL#.#.L#", "##..#L#.L...L.LL##.###.LF.#.#LL..#.", "#...LF#L....LL..#.L#.###.L#L.L..##.", "....F.L.L.LL..#.L..LL#..##.L..###.#", "#RLL.#LFLL#L#.L#LL.RL###..L.###....", "#LLL.#LL.L#.#L.#L..LL.L.LL#L..##..."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "1016159/10944";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> maze = {"LLL#LLLLL.LLL#.LLL.RRLR", "##L#L##.###L##RLLL#L##.", "#LLL.L#L#LLLLLLL##.#.#L", "LRL#LLLR#LL.#L###.#..##", "LL#LL#L#L#L##.#...#.#.#", "##.L#L#LL.LLLLL#.......", "#.#L#LLLL#L##L###.#.##.", "LLL##L#LFLLLL#.#.##.#..", "LL#L#L#LLL.#L##.##...#.", ".L#LRL###L###.......#..", "F##R#L.L#######.##.#.#.", "L####LLL##..##L#LL#.###", "LLL##L#LRL##LLRRLL#...#", "L.LLLLLL#LLFR.#LL#..#..", "LLL.L#LL##L###L####.#..", "#LR###LL#L#LLLLL#LL#..#", "#L###LL.LL#LLL##LR###..", "LLLL##LL#LLL##LF.L##...", ".L#LLLL#LLLLL#L#L#....#", "#LL#LLR#LF#L#LLLL###...", ".L#LLL.#LLRL.LLLL##L#..", "L#LL#LL#LLL#L##LLLL.L#.", "##L#LL#LL#L.L#LLL###L##", "LL..L..LLL#LL.LLL.#.##.", "LR###LL###RLLLLLL##.##.", "#LL#LL.R#.L####L.LL#.##"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "778631/23085";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> maze = {"#F##.", ".FFF#", "FL.FF", "FR###", "RLRF#", "#RF##", "LF#LR", "FFFRL"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "431/60";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> maze = {"FL.RL.", ".R.L##", "R#LR..", "##LLR.", "#.L.F.", "..L...", "..R.LL", ".LFLR#", ".LLL##", "F.L.LR", "L#RL#L", "#.L###", ".#LL..", "#LFLLL", "##...L", "L#.#LL", "L.LF#F", ".L#L.#", "LRL#.#", "LL.#L.", "LRLL#L", "LLLR.#", "#L.LLL", "#..L.L", "FLL.LL", ".F#.#.", "RLLL.#", "#LLL.#", "FLL##L", "L#LL..", "#..###", ".FL#FL", "#L#F..", ".L.L#R", ".#L.F#", ".#F#..", "#LLLLL", ".#L.L#", "L.#.#L", "#R..FL", "##LLL.", "##L#.L", "#LLRF#", "..R.F."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "440023/14076";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> maze = {"#..##.#LLLLLLLL#.######L#R#LL", ".##.##LLLLL#L##..#..#LLLLLL.#", "####LLLLLL#L##..##..#LLLLLLLL", "LLLLLLLLL##LL##.#..#LLLLL#L#L", "#L#L.L#L#LLLL####...##.L##LL#", "LL#LLL#LL.FLLL##L##...#LL##LF", "LL#LLLLL.LL#L#L#R##..##LLLLL#", "LLLLLLLL#LLLLLLLLLL#.#LL##L##", "L#LL#LLL##L#L#LLLLLL#.LL##LL#", "#L#LL#L#LLLLLLLLL.L.LLLLLL#LL", "#LL.L#####L#LLLL#LL#LLL##LLL#", "LL#.##.##.##L#L#.####LLRLR#L.", "LLL#.#.#.#.##LL##L#LLL#LL#LL#", "#L#.#..#...#L##LRL##L#LLL#L#L", ".#.#......#LLLLLLL###L#L#LL#L", "#......#...#L.L.##LLLLLL#LLLR", "##..#..##.#L###LLLLLL#.LL#L##", "#..#...#.##L##L#.#L#L#LLLL#L#", ".....#..###LLLLL#.#LLL#LLL#L#", ".#.#####..#LL#.###L#L#.##LLLL", ".....#.##.#LRRLLLLLLL###LLL#L"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "51313/1488";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> maze = {".RR", ".RL", "L#.", "RRF", "LF#", "#R.", "FL.", ".FR", "LLR", "#RL", ".RF", "R.R", "##R", "LRL", "..R", "F#.", "RRR", "RL.", "R.F", "FL#", ".#.", "#..", "...", "...", "...", "#..", ".#."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "22409/1760";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> maze = {"L#L#L#.#LLL#.LR..F#LLLL..#", "..#L#L.####..L#.F#.LLLL..#", ".#...#####.##.L.#L####.#L#", "#L.LL##F.#..#.L#..#...L.L.", "LLL.##.LLL.#LLLLL#.#.L#L##", "#LL..LL#L#.#.L#.L..#L.###L", "LL##LL#L#..##.#LL.#.L##.L#", "LLL...##LL#LLL#.L##..L..L#", "#...###...RL#L..#LLLL##.#R", "#.##L###L#L#L###.##..#L##.", "L#L.L##.##...#.L.##LLL#L##", "......L##.L#L####.L.####L.", ".#.#L##L#.##.L..#L#L##L#FL", "L..##L.L##.####.LL#.LL.L.#", ".LL..##..LLL#.##LL..#.##.#", "....#.#L#L##L##..F..#.#L#.", "LLL...LLL.L....LR#L#.L....", "#L####LL##L##.#L..#L..LLL#", "#L#.L#L##.#L#.L#L..L##L.#L", "#.L###.LL##.#.L###L#..LLLF", "L#..L#.LLF#L#.L.#.#LL##L#L"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> maze = {"..#L.....#.#.......LL#..#L#.R...LL.L..", "...###...#.##...#.#.....#.###.#..##...", "L.#...###L.###.####..L.L....#...#####.", "..L#.#..#..R.##.##L..###.####..###L..L", ".#.#.##.#.#L#.##.#.#.#..##L....L..#.L.", "..#...#R.#.L..#.LL.L##....L.#.....####", "L...#.L...#.###.##...#....##L.###L#..#", "...#...##.#.#...#..##..R.#....RL.L...L", "..#L...#..###..LLL#L...L#####..#..L.#.", "L..##..L.L#..##.R###.##......#.R#.#L..", "L#.#..##L..#.#..#...........L.......L#", "##...L#R#L..###..#...L..#.##.#......##", "..#L..L.L##.....L#L#...#L.#..L....#.#.", ".L.#.#L..##..###..#.#LL#.....#..R..L#.", "#...#..#L....####..###.##.##...#...##.", ".#..##..##..#.#...#...#.LL......L.....", ".L....F.#.#..LL##LL..#..#..#.L.#L#....", "..L..#...#....#.L#..#..#...###.LL....L", "#..#L#.L..L#L.#L...L.##..L..#L.#L#..L.", ".#....#L..L..LL#.##...#.#.L##L.#.L#.R.", "#..#.##..#..L..#.L##.#L.L..L.####L...#", "L.#....#.....L..#.L##.###.#L...LL.##..", "..L#.##....#...##...#.#.##...##..L#L..", "#.L.###L#...###.###...L#...#.#..###...", "#L.L##..L#.##.LLL.#..###L.....#.#L..#.", ".#...#LL.###.#.......##.R#.......##.##", "LL#L###.L..L..#.#..#......L.L.######.#", "..L..###L..##.#..L#.L.#.##.#.L#L..##..", "#.L#R.L###..##LL##.R.#.#.#.#.L##.F#.L.", "#....L..L.#..#.########..#L#.#LL.#..##", "##.....L#.#L..#.#..#.L.L.#...####.#..#", "##.##.##.##L#.....##...#..#.LL##F.#L..", ".L#.###....##...##.#..#.##..#.##.L...#", "#....#....#L.L##.#..#.###.##.#..#..L##", "######.L.L..####.L###....#.###L#.#L###", "..#...L.L...#...RL.L..L..##.#....#....", "##....L#.#...#R#.#.#......L#...L.#....", "L.....#L.##L#.#.L#F.#R#L##..L#..#L###.", "..#.L#L.L..##.LL#.L#.#....#...L....L..", ".#...#L#.#.#L....LL#.#L....#L#L#####.#", ".#.L...#..#L.L.#.L#.#L#..L....#.L..#L.", "#..#L.L#R..#..#.##L....##RL#L##....L#.", ".R.#.#.L.#L..#...L...##....##..##...#.", ".L.#.L..L.##...L.L#.#.......####...###", ".#..L..####.###LL.##.##.#.....#L.#.R.#"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> maze = {"L##L...L#LL.#L#L##L#L..#.#L.L#L#L###L....#LLL..", "##L#...L#LL#.L#L.L#LLL#LRLL#L.##.L..#LL#L#LL#L.", "##L.###LL#L#L..#.LL#.LL#LL#.LL.LL###..LL.##..#.", "R#L#.LL.L###L#.##L#.#L#.L..##.LLL#.L#LL#.L#LLL.", "L#L#.#LLFL##LLLLL#.LLLL####.LL..LL#L##L#R##.##.", "LLLLL#.LL#####.L##..#.R##L##L####LL###LL#L##L#L", "LL####L.F##FL#L#L#.L#LL#..L.#LL#LLL##L#.#L###L.", "LLL.L#L#.#L###..L#LL##LLL.#L#.#L##LL###LLLL.#LL", "###L.L#LLLL##.##L##.##L#LL###L#####.L.L.LL#L##L", ".#L#LL#..#LR.L#LLLL#LLL#LLLLL.###.L.L.#L#LL##..", "#.#LLLLR####..#L#.L.LL#LL##LL.####.#L#LL..##.##", "#.##L#.L#.#L.L..LL#LL#LLFL.#.#LLL#LL####.##LL#.", "L..L.#L..LL.#L#L#LL#LL###L###LL..F#..LL###LL###", "#L##L..##.R#L.#.###.#L.L####LLL.LL.LLLLL##LL#LL", "LLL#.L#LL.##L.LL#L#.##L#..##.LLLF##LL####L#LL##", ".#.L.#L.L#LL#.#..#LLL.L##L#.#.L#.L.....##L##L#.", ".#LL##.RL##L.##LLL#...##.#L#L.L##.##.L.LL##L#L#", "LLL.L.#.L#.#.##LL..#L.L#LLLLLLLR#LLF#L#.#LL.LL.", "LL#.##LL#.####L.##L##..L#.LL#L#LL#LL#.###LL.#LL", "..#.###LLLLLL#LL#.L.#L.LL#.####.#LL##..#L##LLL.", "#LLL#L..###.LL.L#.L#LLLLL..LL..LL#.#.L.#.L.##.#", ".LL#L.L##.###LLLLL.L.#LF#.L.##L#..LL#LL.####.LL", "#L.LLL##L#...LL#.LL#.#LL#.LL.#L.#LLL.L##LL###L.", "L..##L.#L##.##.####..LL#..#L.#LLL#LLL#..L#LL#L#", "..##.F#L#..L#L#.LF.L###L##LLLL#.LLL#LLL####.#.#", "..LL.#.LLL#L.##L#L.L###FL.#LLLLL##L#F#.#LL##L##", ".#L###L#LL#.L.###LLL##.##LL.##.#.L..LL#.L##.#L#", ".L#..L#LLL##.#.###.L..LLLL.LLL#LL#L.#L#LLL##.#L", "####L#.#L.##..###LLL#.#L#LL.##LL#LL#L###.#L#.L#", "#L##L##L.LL#...L#.LLL##L#R####L#LLLLL.LLL##L#.L", ".#LL#L..#.###L.#L.L..#L##.L#.LLL#..LLL#L#LL#LLL", ".L..#.L.L.##LL.LL#L..#.#L##.L#L#.#.#..#.##..#.L", "#.L.L##.#LLL.L#L#L.####.L...L.L..L#######.LL###", "##LLLL.LLLL##L.L.L##LLL#.L##LLLLL.##R##LL#L#..L", ".##L#L#L.#LL##.LLLFLRL#LL##LL..L.LL####L##L.LLL", "..L#L#L##L.##.#L#LL#.#L#.L##L#.#.###LLL##L#LL.#", "##.L###LRLL.LLL#.LLL#L##LL#LL#L.#.#.##L.L#LL.L#", ".L#L.#.L#.L###L#L###L##L#L#L#L.LLL#L#.#LLL.#FL#", "#L#L..#L.L.#.L##L#L#.LL#L#L##.L.#.##..#.#.LL###", "L#####LRLL#LLLL###.#R..L.#R#.#LLFL..##LL#LL##LL", "L.##L#L..#.L.#.LR#####LL#L#L.#LLL##..###LLLLL.#", "#L###.#L####.LLL.#LL#L.##.##L....L.L##.#L.LL#.L", "##L#L.L##L#L##L.L.##L.LL##L#L##L#.#LL.LL.L.L###", "LL##L#LL#L####.LL###L.LL.#L..#L#.##.##LL#LL#LL.", "#L#.LL..LL#LL#L##.LL.L#..LL#....#.#.L#.#L.#..L.", "###..#..#L#L..L.L#LL######L#LLL##L.#L.##..#LL..", "L##L###LLLL.L##.L#.L.#L...##...L##.LL..#LLLL##L", "L#LLL.####L#.###LLLL.##.LL#..L####.#.##.L##L#LL", "###L#L#LLL.#L#####...LL#LLLL.LLLLLLL.L##LL.#.LL", "#L#L..LL.L##LL###LLL.L.LL.LL#.LL##.LLL##LLL#LL."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> maze = {"#..L.L#.LL##..", "##L#.LLRL..#.#", "R.LLL##L.LLR.#", "#.LL###.###L..", "###L##L...LL.L", "###LL#.LLLLLR#", "L#L##L...#L.#L", "LL...###L.L..L", "LLL#..###L.L#.", "L.L.#.#.##L##.", ".LL..#LLR##L#L", "LLRL....#.L##L", "#LL#L..#...LL.", "L#L#.##FR#L#.#", "L.LRLLL.#.#LF#", "L#L...R..#L#L#", "L.###.##.#.#LL", "..##LL#.LLL#L#", "LL#LL..#L#.##L", "LL#L#L###F..LL", ".LLFL.#....L#L", "#L.####.#L.#L.", "#.#.L##L..R##.", ".#L.#R.#L###.#", "##L.L.L#.LL##.", "#.L###...#R...", "###..#..#L##LL", ".LLLR.#..L.#LL", "L#LLL##L.#....", "###...#L###R#L", "#L#L#.#LL#L#LL", "..#.L..LL###.#", "R##LL.#L..###."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> maze = {"#LLLF#F#L#L#L#LLLL#L#L##L#L", "LLLL#L###LLLLLLL##L#LLLL###", "#LL#LLLLLLL#LLLL#LLLLLLL#LL", "L#LL#LLLLLF#LL##L##LLFLLL#L", "LLLLLLLLL####R###L#LLLLR#L#", "L#L#R#LLRL#LLLLLLL#LLR##L#L", "LL###L#LLLLLL#LLLL#LL#L#LLL", "LL#LLL####LLLL#LLL#LL#LLFFL", "F#LL#LL#L#LLR##LLLLL#LR#L#L", "LLFLF##R###L##LL#LR#LLLLL#L", "LLL###LL#L##R#LLLF#L#LL#LFL", "#LLLL##FLL#LFLFLLLLL#LRL##L"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> maze = {".#L#L#.#.####.L##F#..##.LLL.L.L.L##.##.##.#.LL#.#", ".L#.L#.###L..L#...L.#L#F#L.L....L.##L#.##....#L##", "#.LL.L##.#.L##.L##L......L##L##..F##L###.###.L.L.", "..#LL.#...##..#....#....L.F######....#L####L.FL#L", "...#.LLL#.##LR.#...L#RL#..L#.#L#LL.FF#...#L#L##LL", ".L#..L####..L.LL.L#L.#...#LL#.#L.L.L.L##.LL#L.#L.", "#..#.#L.#..##.L..L.L.#.L##L.##L.#....L#F.#LL#.L#.", "#.#.#..##L#L#LL###L##.LLL#..#.#.L#.##.L##L..#L.##", "#L...#LL..L..#.L.#.#.#.LL..R....#L.##..#F#.#.LL##", "##.#..#.#.#L##..##.##LL#LL...#LL#.#L#.#L.###.LFL.", "L##..#.#LL#..###L#.L.##L.LLL.LL.#L.FL.L.L.L#L.LL.", "#.#.#L##L..##.L..#.#.#L#L.LL....LLL.#LL###....L.#", "#.L##L.#.####.##.LL#.#.#......##.L.##.L.##L.##.#.", "#L#..LLL.#..#...##.L.#.L..L....L##L.#.L####R#...#", ".L.##.L#L#RLLL#L.####...##.######L.LL###L..#...#L", "####F.##..#L###.#.L.#..LL..#.#...L...L###L##.###.", "..#.....LL.L.L.#.#....F#L####.#####L.LL......#L##", "L.L#.F##.L##.LF####.L#...#.L.#..#L.#L####...###.R", "L.R###.#...###F...........#RL#L#.LF.LF.##.L.#.##."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> maze = {"#.#...##.L##..#.##..##.....##.L..........L", "##..L...#.#.#..L#.L#.#.L#.L#...LL....#.#..", ".#.L##..#...##...L#.#....#.F####.#.LL..##.", "L.#..#..L#.....###L..LLF.#.#L#....#.#...#.", "#.#.LL#..#.#..#.#...#L#.#L..##..#L##.#L#..", "###....####....##...L.#.#....L#L#.#.LLF..#", ".....L.L.#....#######.R########.##..#L...#", ".L.#.....##.....##.#..L#.LL.#..#.####..##.", "L###.L.....#L..#.#.#LLL#######..L..#.##L.#", "..##.L.L..#.#.#.########...#L.......#L..#F", "#..#.##..#.#L..#.##..#.#.#.#.#...######...", "..L####..L#.L#.L###.LL..#####..#...#L..#L#", "#..####..###.#FL##...L#.#..L.L.L.##.##.#..", "....#.#L.L#..#L..##.##.#.#....#.##R##.###L", "#.##..#R...##......#L##...#.L..#.#L..#...#", ".#.###...#.##.#.#.#..L#L.#...#..#.##L##.#L", ".L.#..L#.#L####R##..#LLR#.#...##.##.#L###.", ".##.L#L..#..L...L.#L#L.####...#.LLRL##...#", ".#LL#.R#.#.###.L...##.##.L#..##..#LL##...#", "LL.#.###.#.###.##..L.#L.....#.....#......#", ".##.#.L..###....##L#.L#.#..#...#..##.####.", "###..L#.#..#L..L..#.#...#...L#.#L....##.#.", ".L.##....##.L#..L..#..#..#.#.#...#######L.", "..#..###..#..L..#.L#...#L.###..###L#L..#.L", "###F##.#L.##.#..#L#..L#..L.###L###..##....", ".F..###L##.#####.#.#....#..L..###..##..#..", "L.L#..L#..L.#..#.##.#.#R...###...L#.#....#", "#..........LLL#....##...####..#L#....LLL#.", ".R#L##...#..#...##..L...L##.#.L.#...L....#", ".#......###.L#....R.#.##L..##......L.#....", "####.L.L.#.R.#...L#.#..#L.L.#..##.L.L.L.#.", "L..#..##L.L##...L#................#..FL...", "....LL#.F#..#L###L#.##.#.##...#..##...##.#", "L.#L..#.##.......#LL..L.#....#L....#.##.#.", "#..#.#.L..#..#..#L.L...#L##..#...L##...#.#", "#.#..###L.#.LL#..###L#.##.L####..#L#.###L#", "##...#....#.#..#L####.#...L......##...#..#", ".#..#.#...#.#.##..##L#.#L..##L..#.#.#L#...", "......#.L.#..####....L..#.#L#.#.###.#.#L..", "#..#.#F##..#.L.#.#...F#....#.#....##L..#L#", "###...##..L#.#L.#.##.L#L#..#..#..##.L#...#", "....L.#L.L.##.#.....#...L..#.R.......#.##.", "#.#..#.L##L#...L..#L...LL.##.##...F##L..#R", "##..L.###.###..LL##.#.##.L..#L...L#L..L#L#", "F.L##..L.L.L.#F.#L#L#L####.#L.#..##.L....#", "###.#.L#....#L#.....L#..L#.##..#.#.#..#..L", "#..L#.####L...#..##.##..L..##.#L...#.###.#", ".##L...#L..L#.#...L###L##..#L#L#.####LR#L#", "#LR...L.###.#R#.L.##L.##.#..#.#L#L#...##..", "..#..R#..#.###....L.L#.L.L#.#.##.#L.#..##."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> maze = {".L..", ".L..", "..FF", ".##.", "#.#R", "#.#.", "#.#.", ".F.R", ".L.R", "##R#", "RF..", "#.L.", "#..R", "##F#", "F#R.", "#LL#", ".FL.", "R...", "F#L.", "#RL#", "FL#.", "#FR.", "F##.", "...#", "RFF.", "FRRR", "L#.F", "#...", "#R#R"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> maze = {".L.#.##.L.#...#L#....L..#L#.##L.L.#L..#L.L.L.LL##L", "#...L#L.#.LL.#L###LL.LL###..LL#.L#LL#.L##L#.#LF..#", "#..####L.#LL.#.#L#L##..#.#.#L#.##..###.L.##L#L...#", ".#F..LL.L.###F.LL..L#..#.##L#.#.LL..###..##L.#F..#", "#..#...##L##L###..##..#.L.##L.LL.#LL...##.....L#..", "##.#L##F...L#R...#LL#L#.L..LL#L..#L#.#L.L..##.#.#L", ".#L##L###L.#..LL#..#L#LLL##..L##..#.##.#....L#LL.#", ".L#LL#....LL#....#..#L#.L#L#.#LL.LLL..#L##LL#..#LL", ".L.#..#..##L.L..###L#.##L...##.#.L#LL##....#.#L..#", ".L.LLL..#...#.L#.#L#LLL.L.####.#..LLLL###L##L###.L", "#..RF####F.#.##..####.L###LLL.L.#.L.#.L###F..##L##", ".#LL##L.LL##..#L#L#...L#.L.##L.LLLL.LL...#..#L#..#", "#.L.#L.#.###..#LL..L##..L#LLL.#LLL##L##L##L#.LLL#.", "LLL.L.#LL#L.L.LL.#...#..LL.#LL.#...L.LL#.#..#LLL..", "##L#...##.F#L##LL...#.LL.#L.#.L..###LL##LL#L#.LL.#", "L#.L#.##L#L.#LL#..##..L..#.#.##L..LLL##.L#..L#.LL#", "L#.LLL.LLLF#LL.L.L#.#.L..#.#.LL.#...#.R..##..#L.#L", ".....##...L.#..##L##.L.L#.#L#.#LLLL#L.L#L..#####.L"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> maze = {"LLLL###L.#LL.LL#L#.#LL#LL##LLL###LLL#LLL###L#L#LL", "##LL###LL#LLL#LLLLLFLLL##LLLFLLL#LL#L#L#LL#L#LLL#", "L####.L.LFLLL###LL.LF##L#LL####LLL#LL###L##LL#LL#", ".##LLLL#LLLLLLLLL##LL#LLLL#LLR#LFLLL.##L#LLLLLRLL", "###L#LLLLLL#L####L#L.#L#LL#L##FL#LLLLLLLLL#LLLLL#", "L#L###.#L####F#L##.#L#LL##L#LLLL##L#LLL##.##LL##L", "L###L##L#LL#LL#LLLLLLLL##LLL#LRL##LLLFLLL#LLL####", "L#LL#L##L#L##RLLLLLL#LL#LLL###LLLLLL#LLLR###L#L#L", "L#LLLLLLL#.LLLLL#LLLLL#LLLLL###L##LL#L#LLLLL#LL##"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> maze = {"L.LL...L.L.L..LL.LL", ".L.LL.LL.LL.L.LFLLL", ".LL...LLLLLLLL.LLLL", "LFLL..LLL.LLLLL..L.", "LLLL...LLL.L..L..LL", "L..LLLL.L.LLL..LL.L", "LLLL..L...LLLL..LL.", "LL.L.LLLLLRL...LLLL", "L.L..L.L..L.LL..LLL", ".....LLL..L...LL...", "LL.LLLRLLLLLLLL.LLL", "LLLLLLL.LLLLLLLLF.L", ".L.LL...LL..LL.LL.L", ".LLLL.......LLL...F", "LL..L.L.L.LL.LL.LL.", ".....LLLL..LLLF.L.L", "..L..LL.L.LL..LLLLL", "L..L.L..LL.LL..LLL.", "LLLL..LLL...LLL..LF", "L.F...L.LLLL...L.L.", "L..LL....LLLLLLLLLL", ".LLLFL..FLLLLLLLLLL", "LLL...LLL.....LL.LL", "RLL.L.LL.LL.L..LL.."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "55871/2403";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> maze = {".R.F..F..L.R.R", "F.RR......L...", ".......F...R..", "........R.R..L", "..............", ".......R....FL", "......F.......", ".F...R.R.FL..F", "..............", "......RL..F...", "...L......R...", "....R...R...RL"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "8661/640";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> maze = {"FLLFLRLL", "RL.LLLLL", "LRLRLLFL", ".LFFFLLF", "FLLLRLLL", "LRRLFLLL", "RLFFLLLL", "LRFL.LLL", "LLFLLLLF", "LLRLLLLR", "FLLL.LLR", "LFLRLLLL", "LLLFF.LR", "LLRFLRRL", "LLF.LLLR"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "157949/13680";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> maze = {"L..........F..................", "......L.......................", "....................L.L..L....", "....L...........L...F..L..L...", ".L....L......................L", "................L.............", "..........L....L...........L..", "L..L........................L.", ".........................L....", ".......L.L.......L............", "...................F.......L..", ".LL...........L...R.L........L", ".........L............L....L.L", "............................L.", "...........L........L.........", ".......L.....L..........L....."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "736/39";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> maze = {"..............F................R..", "..................................", ".R...........................R....", "R.........R.........L.............", ".....................R.F..........", "...............................F..", "......F.RF...R........F...........", "........L...............F.........", "...........F.....R.R......F...R...", "........R.........................", "..........R..............F..F.....", "........F........L..R..RL.........", "................................F.", "....F...............F...F.........", "........L..................R..R...", ".............................F....", "........................R........."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "3799/170";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> maze = {"..LL...LL.LLLL..LLLLLLLLLLLLL.LL", "LLRLLLLLLLL.L..LLL.LLLLL.LLL.LLL", ".LLLLLL..LL.LLLLL.LLLLL.LL.LL...", "L.RLLLLLLLLL.LLLLLLLLL.L..LLLLLL", "..LL..L.LL.LLL..LLLLLLLL.LL.L.L.", ".L.LL.LL.L.LLLLLR..L.LL.LLLLLLL.", ".LLLL.LL.LLLLLLLLLLL.L.L.LLLLL..", "LLL...L.LLL.LLLL.LLLLLLLL.R.L.L.", "LLLLLLLLLLLLLL.L..LLLL.L.L.LLLL.", "L..LLL.LL.LLLLLLLLLLLL.LLL.LLL.L", "LLLLLL.LLLL.L.LLLL.LLLL.RL.LLL.L", ".L.LLLLLF.LLL.L.LL..L.R.LLLL.L..", "LL.L.LLLLLLLL..LLL.L.LLLLL..L..L", ".LLLLLLLLLLLLLLLLLLLL..LLLLLLLLL", "L...LLLLLLL.L.L.L.LLLL.L.LLLLLL.", "LL.L.LLLLL.L..LLLL.LL.LLLLLLLLL.", "LL.LLLLLLLLLLL...LLLLL.L.LLLL...", "L.LL.LLLLLLL.L...LLLLLLL.L.LLLLL", "LLLLLL..L.LL.L.LL.LLLLL.LLLLL.LL", "LLLLL.L.L.LLLLLLLLL.RLLLLLLRL..L", ".L.LL.LLL..LLLLLLLL.LLLL..LLLLLL", "LLLLLLLLL.LLLLLLLLLLLLLL.L.LLLLL", "L.LLLLLL..LLLLL..LLLL.LLLL.LL...", ".LLLLR..LLLLLLLLLLLLLL.LLLLLLLLL", ".LLL..L..LLLL.LLLL..LLLLL..LLLL.", "L.LLLLLLL.LLLLLLL.LLLLLLL...LLLL", "L.L.L.LLLL.LLR.LLL.LL.LLL.LLLLLL", "LL..LL.LLL..LLL.LLLL.L.LL.L.LL.L", "LLLL.LLL.LLLLLLLLLL.LLL.LLLLLLLL", ".LLLLLL...LL.LLLLLLLLLLLLLLLLL.L", "L.L.L.LL.LRLLLLLLLLLL.LLLL.LR...", "..L.LLL.L..L.LLLLLL..LL..LLLL.LL", ".LLLLLLL...LLLLLLLLLLL.LLL.LLLLL", ".LLLLLLLL.LLL..LLL.LLL.LRL...LLL", "LLLLL.LLL..L.LLL.LL.LL..L.LL.L.L", ".L.LLLLL..LLLLLLRL..LLLL.LL.LLLL", "LR..LL.LLLLLL....LLL...LLLLL.LL."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "431717/12975";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> maze = {"...............", ".L....RLL..F...", "R.....LF.......", ".....L..L..R...", ".........L.....", "..L.LL....L..LF", "..............L", "....R........L.", "...L.....FL....", "..F....LFR.....", "...LL..........", "......L..R..L.L", ".L..F.L.....R..", ".LL............", "LL....L..LL..L.", "L.....L...L...L", "L......L...F...", ".L..LL.........", ".FL..FLF.......", "LF..F......L...", "...F...........", "....F.LR.....R.", "..R.L...L.L..RL", "...R..L.L....L.", "L.........R.L..", ".....LL.......L", "...L....R......", "R.F.........L.L", "..L......R.....", ".L.L..L..L....R"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "66551/2992";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> maze = {".LLL.LLLLLL..LLLLLLLLLLL.LLL", "R.L.LLLLLLLLLL.LL.L.LL.LLLL.", "LL.LLL.LLLL..LLLLLLL.LLLLLLL", ".LL....LLLLL.LL.LL.LL..LLLL.", "L..LLLLLLL.L.LLLLL.L.LLLL..L", "LLLLFF.LLLLLL.LLLLL.LLLFLLLL", "L.F...LL.LLLLLLL.LL.LLLL.LLL", "LLLLLLLFLL.L.....LLLLLLLLLL.", "..LL.LLL.LLLL.LLL.LL....LLLL", "LLLLLLLLL.L....LLLLL.LLL.L..", "LL.LLL..LLL.LFLLLLLLL..L.LLR", "LLLLLLLLLL.LLL.LLLLL.LLLLLLL", "L..LLL.LLLLLLL..LLLL.L...L.L", "LLLLLL.LLLLLLL..L.LLLL..LLLL", "LL.LLF.LF.L..L.L.LLLLLLLLLL.", "..LLL.L..LL.LLLL.LL.LLLLLL.L", "LLL.LLL.LL.LLL.....LLLLLLLLL", "LL.LLLL.LLLL.L.LLLLLLL..L.LL", "LL.LLLLL.LL.LLL.LL.LLLLLL.FL", "L.L..LLLLLLLL..F.LLLL.LL.LL.", "LFL.L.L.LLLL.L....LLL.L.LLLL", "LLLLLLL.L.LLLLLL.L.LLL.L.LLL", "LLLLL.L..LL.L.LLL.L..LLLLL.L", ".LLLLLL...LL.LLLLLLLL.LLLLLL", "LL..LF.L.L.LLLLLL.L...L...LL", "...LL.L.LLLL..LLLLLLL.LLLLLL", "LLL.L.LLLLLL.LL.LLL.L.L.LLL.", "L.L..LLLLLLLLLLLLL.LL.LLLL.L", "L.L..LLL.L.LLLLL.LL.L.LL.L..", "LLLLL..LLLLLLL..L..LLLL.LL.L", ".LLL.LLLLLL.RLL.L.LLLLFLLL.L"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "134063/4004";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> maze = {"......F..R..RR.....FF..............", "..........F..R.......R..R.........F", ".......L.FR....R............RL.....", "....L..R.............F...F..L......", ".....F.R......L.....R.L...R.......F", "......R.L.....L.L.R.............L..", "F..........R..L...............F...."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "41425/2112";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> maze = {".L...R...RL..LL.", "...R.RL.L.F.....", ".R.......R.R....", ".....L.....L..L.", "L.L.....L...L...", "L....L.R..L..R.L", "L.........L.....", "....LLLL.....RL.", "..L...........R.", "...L..LL........", "....L..L.L.L....", "...L.R...L.LLL..", ".......L..LL.R..", ".L..............", "L..L.....R.L.LRL", "L......LLL....L."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "2377/153";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> maze = {".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "#", "F", "R", "L", "R", "R", "L", "F", "R", "R", "R", "R", "F", "R", "F", "L", "R", "R", "R", "F", "L", "L", "R", "R", "R", "F", "R", "R", "F", "R"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "8646/595";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> maze = {"RRRRRRFFRRRFFLFRFR.RFRFRFFF.RRFRRF##....#........."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "389/26";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> maze = {".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "#", ".", "R", "L", "R", "R", "L", "F", ".", ".", ".", ".", ".", "F", ".", ".", "L", "F", "F", "F", "F", ".", "L", ".", ".", "L", ".", "L", "F", "F", "."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "19/1";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> maze = {"LRRRF..FRR.RFFR.RFRF..RRRRFRFR.RR#......#........."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "175/8";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> maze = {".R#.....#.....#.....#.....#.....#.....#.....#.....", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "...#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#...", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "...#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#...", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "...#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#...", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", ".#..#..#..#..#..#..#..#.L#..#..#..#..#..#..#..#..#", "...#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#...", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "...#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#...", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "...#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#...", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "...#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#...", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "...#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#...", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", "....#.....#.....#.....#.....#.....#.....#.....#F.."};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "1603/1";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> maze = {"L#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLL", "LLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLRLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLL", "LLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLRLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLRL", "LLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLFL", "LLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLF", "LLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLRLLLLLLLLLLLLLRLLLL", "LLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLFLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLRLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "51752497/983600";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> maze = {"LLLLLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#FL#LL#L", "LL#LL#LL#LL#LL#LL#LL#FL#LL#LL#LL#LL#LL#LL#LL#LL#RL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RL#LL#LL#LL#LL#LLL", "#LF#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#FL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "FL#LL#LR#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#FL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#RL#LL#LL#LL#RL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#RL#LL#LL#LL#LL#LL#LL#LL#LL#RL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#FL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#FL", "L#LL#LL#LL#LL#LL#FL#LL#LL#LL#LL#LL#LL#FL#LL#LL#LL#", "LLL#LL#LL#LL#LL#RL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LF", "L#LL#LL#FL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RL#LLL", "#LL#LL#LR#LL#LL#LL#LF#LL#LL#LL#LL#LL#LL#LL#LL#LF#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LR#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RL#LL#LL#", "LLL#FL#LL#LR#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LR#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LR#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LF#LL#LL#L", "LL#LL#LL#LL#LF#LL#LL#LL#RL#LL#LL#LL#LL#FL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LR#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#FL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RL", "LLLL#LLLLL#LLLLL#LLLLL#FLLLL#LLLLL#LLLLL#LLLLL#LLL"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "532416827/664400";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> maze = {"FF#FFFFF#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL", "F#FF#FF#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "FFF#LF#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "FF#LF#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LR#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LLLLL#LF#LL#LL#LL#LL#LL#R", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RR", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RRR", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RR#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RR#RR", "LLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LRRRR#RRR"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "956870473/664400";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> maze = {"FF#FFFFF#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL", "F#FF#FF#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "FFF#LF#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "FF#LF#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LLLLL#LF#LL#LL#LL#LL#LL#R", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RR", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RRR", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RR#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RR#RR", "LLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LRRRR#RRR"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "964283149/664400";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> maze = {"FF#FFFF##LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL#LLLLL", "F#FF#FF#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "FFF#FF#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "FF#LF#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LLLLL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LF#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLL", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#L", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LLLLL#LL#", "LLL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#R", "LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RR", "L#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RRR", "#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RR#R", "LL#LL#RL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#LL#RL#RR", "LLLL#LLLLL#LLLLL#LLLLL#LLLRL#LLLLL#LLLLL#LLRRR#RRR"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "977678671/664400";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> maze = {"LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "63660/1249";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> maze = {"LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLFLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFFLLLLLLLLLLRLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLFLLLLLLLLLLLLLLF", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLF", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLL", "LLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRRL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLR", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLFFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "FLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLFLLLLLLLLLRLLLLLLLLLLLLLLLLLLLRLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLFLLLLLLLLLLLLLLLLRLLLLLLLLLRLLLLLLLLLLLLRLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "FLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLL"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "210623/4100";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> maze = {"LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLFFFFFFFFFFRRRRRRRRRRFFFFFFFFFFRRRRRRRRRR"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "39439/820";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> maze = {"LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLFLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", ".......LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFFLLLLLLLLLLRLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLFLLLLLLLLLLLLLLF", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLF", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLFLLL", "LLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRRL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLR", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLFFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "FLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLFLLLLLLLLLRLLLLLLLLLLLLLLLLLLLRLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLFLLLLLLLLLLLLLLLLRLLLLLLLLLRLLLLLLLLLLLLRLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLRLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "FLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLRLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLFLLLLLLLLLLLLLLLLLLLLLL"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "50359763/981200";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> maze = {"LLLFLLLL#LLFLLRRLLLLRL#L#LLRLL#LLLLLLLLLLLLLLLLLLL", "#L#LLLLLLLRLFLLLLLLLRLFLLLLRLLLLLLLLLRRLLLLLLLLLLL", "LFLLLF#LLLLFLLLL#LLLLFRLLLLLRLLLLLLFLRLLLLLLFLLLLL", "LRLFLLFR#LLLLLLLLL#LRLLLLLLLLLLLLLLLFLLLLLLLLLL#LL", "LRLLFLLLLLLLLLL#LLLLLLLLLFLLLLLLLLLLLLL#LLFLLRFLLL", "#LLLLRLLLLLFLLLLLLLLLL#LLL#LLLLL#LLLLLLLLLLLLLLLLL", "LLL#LLLLLLLLL#LL#LLLLL#LLLLLLLLLLL##LLLLLLL#LLLLLL", "LLLLLLLLLLLLL#LL#L#LLLLLLLLLLLLLLLLLL##LLLLLLLLLLL", "LLLL#LLLL#LL#LLLLLLLLLLLLL#LLLL#LLLLLLLLLLLLLL#LLL", "LLLLLLL#LLLLLLLL#LLLLLLLL#LLLLLLLLLLL#LLLLLLLLLLLL", "LLLLLLLLLL#LLLLL#LLL#LLLLLL#LLLLLLLLLL#LLLLLL#LLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLL##LLLLLLLLLLL#LLLLLLLLLLLLLL#LLLLLLL", "LLLL#LLLLLLL##L#LLLL#LLLLLLL#LLLL#LLL#LL#LLLL#L##L", "LL#LLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLL#LLLL#LLLLLLL#LL##LLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLL#LLLLLL#LLLLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLL#L", "LLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLL#LLLLLLLLLLLLL", "LLL#LLLLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLL#LLLLLLLLLL", "LLLLLLLLLLL#LLLLLLLLLLLLLLLLL#LLLLLL#LLLLLLLLLLLLL", "LL#LLLLLLL#LLL#LLLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLL", "LLLLL#LLLLLLL#LLL#LLLLLLLLL#LLLLLLLL##LLLLL#LLLLLL", "LLLLLLLLLLL#LLLLL#LLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLL#LLLLLLLLLLLLLLLLLLLLLLLL#LLLLLLLLLLLLLLL#LL", "L#LLLLLLLLLLLLL#LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL"};
    MeetInTheMaze* pObj = new MeetInTheMaze();
    clock_t start = clock();
    string result = pObj->getExpected(maze);
    clock_t end = clock();
    delete pObj;
    string expected = "2150461/42552";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22692969&rd=14540&pm=11507
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <deque> 
#include <queue> 
#include <set> 
#include <map> 
#include <algorithm> 
#include <functional> 
#include <utility> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
#define REP(i,n) for((i)=0;(i)<(int)(n);(i)++) 
 
#define INF (1<<29) 
typedef long long ll; 
 
int X,Y; 
int dx[]={1,-1,0,0},dy[]={0,0,1,-1}; 
vector <string> maze; 
vector <pair <int, int> > L,F,R; 
 
queue <int> q; 
priority_queue <pair <int, pair <int, int> > > pq; 
bool used[60][60]; 
 
int dist2[2][60][60]; 
int dist[60][60]; 
 
class MeetInTheMaze{ 
  public: 
   
  ll gcd(ll x, ll y){ 
    return x ? gcd(y%x,x) : y; 
  } 
   
  void bfs(int id, int sx, int sy){ 
    int i,j; 
     
    REP(i,X) REP(j,Y) dist2[id][i][j] = INF; 
    q.push(sx); q.push(sy); dist2[id][sx][sy] = 0; 
     
    while(!q.empty()){ 
      int x = q.front(); q.pop(); int y = q.front(); q.pop(); int d = dist2[id][x][y]; 
      REP(i,4){ 
        int x2 = x + dx[i], y2 = y + dy[i]; 
        if(x2 >= 0 && x2 < X && y2 >= 0 && y2 < Y && dist2[id][x2][y2] == INF && maze[x2][y2] != '#'){ 
          dist2[id][x2][y2] = d + 1; 
          q.push(x2); q.push(y2); 
        } 
      } 
    } 
  } 
   
  void add(int x, int y, int d){ 
    if(x >= 0 && x < X && y >= 0 && y < Y && d < dist[x][y] && maze[x][y] != '#'){ 
      dist[x][y] = d; 
      pq.push(make_pair(-d,make_pair(x,y))); 
    } 
  } 
   
  ll func(void){ 
    int i,j; 
     
    REP(i,X) REP(j,Y) dist[i][j] = INF; 
    REP(i,X) REP(j,Y) used[i][j] = false; 
     
    REP(i,X) REP(j,Y) add(i,j,dist2[0][i][j]+dist2[1][i][j]); 
    while(!pq.empty()){ 
      int x = pq.top().second.first, y = pq.top().second.second, d = -pq.top().first; pq.pop(); 
      if(used[x][y]) continue; used[x][y] = true; 
      REP(i,4) add(x+dx[i],y+dy[i],d+1); 
    } 
     
    ll ans = 0; 
    REP(i,L.size()){ 
      int x = L[i].first, y = L[i].second; 
      if(dist[x][y] == INF) return -1; 
      ans += dist[x][y]; 
    } 
     
    return ans; 
  } 
 
  string getExpected(vector <string> _maze){ 
    int i,j; 
     
    maze = _maze; 
    X = maze.size(); Y = maze[0].length(); 
    REP(i,X) REP(j,Y){ 
      if(maze[i][j] == 'L') L.push_back(make_pair(i,j)); 
      if(maze[i][j] == 'F') F.push_back(make_pair(i,j)); 
      if(maze[i][j] == 'R') R.push_back(make_pair(i,j)); 
    } 
     
    ll ans1 = 0; 
    ll ans2 = L.size() * F.size() * R.size(); 
     
    REP(i,F.size()) REP(j,R.size()){ 
      bfs(0,F[i].first,F[i].second); 
      bfs(1,R[j].first,R[j].second); 
      ll tmp = func(); 
      if(tmp == -1) return ""; 
      ans1 += tmp; 
    } 
     
    ll g = gcd(ans1,ans2); 
    ans1 /= g; ans2 /= g; 
    stringstream ss; 
    ss << ans1 << "/" << ans2; 
     
    string ans = ss.str(); 
    return ans; 
  } 
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/