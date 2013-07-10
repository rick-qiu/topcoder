/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8543
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

class LittleSquares {
public:
    string winner(vector<string> state);
};

string LittleSquares::winner(vector<string> state) {
    string ret;
    return ret;
}


int test0() {
    vector<string> state = {"..........", ".......#..", "..........", "..........", "..#.......", "..........", "....#.....", "..........", ".......#..", ".........."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> state = {"..........", "..........", "..........", "..........", "....#.....", "..........", "..........", "..........", "..........", ".........."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> state = {"...#......", "#..#......", ".#...#....", "#.........", ".#........", "..........", "#........#", ".#........", "....#.....", ".....#...."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> state = {"#........#", "..........", "..........", "........#.", "..........", "..........", "..........", "..........", "..........", "....#....."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> state = {".###", "####", "..##", "..##", "...#", "..##"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> state = {"..", "..", "..", ".."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> state = {"..........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", ".........."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> state = {"#.........", "..........", ".#....#...", "..........", "..........", "..........", "...#......", "..........", "#.#.......", ".........."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> state = {"....", "....", ".###", "####"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> state = {"##........", "#.........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", ".........."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> state = {".....#", "....##"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> state = {".....#....", "......#...", "..........", "..........", "..........", "..........", "..........", "#.#.....#.", ".#........", "........#."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> state = {"..##", "..##", ".#.#", "#.#."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> state = {"...#", "...#"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> state = {"..........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", "#........."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> state = {"...#", "####"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> state = {"..", "..", ".#", "##"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> state = {"##..", "##..", "##..", ".#..", "####", "##.#"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> state = {".#...#....", "##..#.#..#", "#.##.##.##", "#..#.#.#.."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> state = {"#.......", ".....##.", ".....##.", "........", "........", "........"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> state = {".##.", ".##."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> state = {"####.##.", "#.###...", "##.##..#", ".#.##..#", ".#.#####", "##..####", "####.#.#", "..##.#.."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> state = {"#.........", "...##.....", "..........", "#..#.##...", "#.#...#...", "........#.", "#...#.....", ".......#..", "#..##.#.#.", "#........."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> state = {"....####", "###.....", "###.....", "#####...", "#####...", ".#.#.#.#", "#.#.#.#.", "........"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> state = {".#", "..", "..", ".."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> state = {"..", ".."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> state = {"...#", "..##"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> state = {"..", "..", "..", ".."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> state = {"....", "...."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> state = {".##.", "#..#", "#..#", ".##."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> state = {"#.......", ".....##.", ".....##.", "........", "........", "........", "........", "#......#"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> state = {".........#", "#...#....#", "..#.###.##", "...#......", "..#.......", ".#.......#", "..........", "...##.#..."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> state = {".#..#.", "....#.", ".#....", "..#...", "......", "......", ".#.#..", ".#...#", "..#.#.", "..#.#."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> state = {"......##.#", "#....#...#", "....#...#.", "..........", ".#.....###", "...###....", "#......#..", "....#.....", ".#........", ".#......#."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> state = {".....#....", "..........", ".#..#.....", ".#........", ".#.....#..", ".....##...", ".#......#.", "..#...#..#"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> state = {".#..#.....", "..##.#....", ".....#.#..", ".#.....#..", "##........", ".#..##..##", ".#........", "..........", "......#...", "....#...#."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> state = {"#.......", "........", "...#.#..", ".......#", "....#...", ".......#", "........", "....#.##", "....#...", "##..##.#"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> state = {"#....##.", "....#...", ".#....#.", ".##..#..", ".......#", ".....#.."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> state = {"#.........", "........#.", ".#........", "..#.#..##."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> state = {".#.#....", "........", "...#..##", "#.##..#.", "..#..#..", ".#.....#", "####....", "#.......", "..#.....", "###.#..."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> state = {"#...", "....", "....", "##..", "#...", "#...", "#...", "...."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> state = {"...##...", "...#....", "........", "#.#.....", "#...##..", "##.#....", "........", "........", ".#......", ".##...#."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> state = {"...#.#.#.#", "###.#..#..", ".#.#..#...", "#.##.#..#.", "....##...#", "..#.#....."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> state = {"..........", "#.###...#.", ".....#....", ".#........", ".....#....", "......#..."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> state = {"......#.#.", "####......", "#....##...", "..........", "..........", "..........", "..........", ".........."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> state = {"......", "...#..", "..#...", "..#.#.", "......", ".#.#.#", "......", ".....#"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> state = {".#..", "....", "...#", "..#.", "....", "....", "#...", "....", "#...", "...."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> state = {"..#.......", "...##.....", "#......#..", ".#........", "....##.#.#", ".....#.#..", ".#..#.....", "...#...#..", ".#.....#..", "...#......"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> state = {"...#...#", "..#.#..#", ".#....#.", "....#...", ".......#", "..#.....", "........", "..#.....", ".....#..", "........"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> state = {"#.#...", "....#.", "...#.#", "......", "......", "....#.", "...#..", "#.....", "#.#..#", "......"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> state = {"..#.......", ".#.#.#..#.", "......#...", "#.........", ".........#", "..#.#..#..", "##.......#", "....##...."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> state = {"..##....", "..#.....", "##.#....", ".#.....#", ".#.#.#..", "........", "#..#....", "..#...#.", ".......#", ".#......"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> state = {"....#..#..", "...#......", "......#...", "....#.#...", "..........", ".#.##....#", ".....#...#", "..##.##..."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> state = {"#.....", "#.....", "......", "#.....", "#.....", "#.....", "...###", ".#....", "......", "#....."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> state = {"#....##.#.", ".......#..", ".......#.#", ".#.....#..", "...#...#..", "..........", "##........", "..#..#..#."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> state = {"...#......", "...##...##", ".....#...#", "..#.#.....", "#.##......", "#...##....", "..##.....#", "#.#..#....", "........##", "........#."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> state = {"......#.", "....#...", "...#..#.", "#..#....", ".####.#.", "........", "...##...", "...#.#.."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> state = {"#.....", ".#...#", "......", ".#...#", "##....", ".#..#.", "...#..", "....##", "......", ".#...."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> state = {"........", ".#......", "...#....", "....#...", "...#..#.", "...#....", "...##...", "........", "........", "..#....#"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> state = {"..........", "..#.##....", "......##..", "..........", "..#.....#.", "...#.....#", "......#...", "..#.......", ".......#.#", "#..#..#..."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> state = {"....#...", ".#.#.#..", "..#.....", "..#.....", "........", "#.#.#...", "......##", ".....#..", ".......#", "........"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> state = {".....#.#..", ".......#..", "........#.", "..........", "##..#.....", "........#.", "##.....#..", "#...#.....", "...#.#..#.", ".........#"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> state = {"..........", "....#.....", "#..#.....#", "..#.......", "...#......", "..#......#", ".....#...#", ".......#..", ".....#....", "..#......."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> state = {".##..#...#", ".......#..", "......#...", "##.#......", "#..#....##", ".........#", "..........", "##.....#..", "...#.....#", ".........."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> state = {".#.....#", "........", "##...#..", "#....#.#", ".....#..", "......##", "##......", "..###..."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> state = {".#.....#..", "...##.#..#", "...####..#", "#...###...", "#.........", "..#..#...#", "..........", ".....#....", "..........", ".#.....#.#"};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> state = {".....##...", "........#.", "#..#.#..#.", ".##.#.....", ".......##.", "......#...", ".#.#......", "#..#......", ".#..#.....", "....#....."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> state = {".#.#.....#", "#....#....", ".#.#......", "..........", "..#.......", "....#.....", ".#.#......", "...#......", "#......#..", "......#.#."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> state = {".....#..", "........", "........", ".......#", "..###...", "........", "....#.#.", "...##...", ".#...#..", "..#....."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> state = {"..#.....", "........", "........", ".....#..", ".....#..", "........", "##......", ".....##."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> state = {"#.....##", "........", "........", "..##..#.", "........", ".....#..", "....#...", ".#......", "......##", "...#...."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> state = {".#........", ".......#..", "..#.#.....", "..#.......", "..#...#.#.", "..#.#.#...", ".#..#.###.", "##.#..#...", "....#.#...", "........#."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> state = {".....##..#", "..........", "..#....#..", "#....####.", ".#.....#..", "..........", ".......#..", "##....#..."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "first";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> state = {".#......", "....#...", "..#.....", "..#.....", ".#....#.", "........", "........", "..#....."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> state = {"..........", "....#.....", "........##", "..#.......", "#........#", "##.....#..", ".#....#...", "#.....#.#.", "...##.....", "#...#....."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> state = {"..........", ".........#", "..##.#.#..", "....#..#.#", ".......#..", "#..#.#.#..", ".........#", "#.....#..."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> state = {"......#.#.", "...#....#.", "#..##...##", ".#........", "..##......", ".........#", ".....#....", ".#...##..#", ".......#..", "#.....#.#."};
    LittleSquares* pObj = new LittleSquares();
    clock_t start = clock();
    string result = pObj->winner(state);
    clock_t end = clock();
    delete pObj;
    string expected = "second";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=11123&pm=8543
********************************************************************************
// I think I have been challenged... 
 
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
 
#line 3 "LittleSquares.cc" 
 
int gim[1<<20]; 
 
class LittleSquares { 
  public: 
  string winner(vector <string> state) { 
    // !FDI 
     
    FOR(sn, 0, 1<<20) { 
      bool left[60]; 
      FOR(a,0,50) left[a] = true; 
       
      FOR(u, 0, 20) if(sn & (1<<u)) left[gim[sn ^ (1<<u)]] = false; 
       
      FOR(u, 0, 9) { 
        int st = 3075 << u; 
        if((sn & st) == st) left[gim[sn ^ st]] = false; 
        } 
       
      gim[sn] = FIRST(t, 0, 50, left[t]); 
      } 
     
    int gres = 0; 
    for(int y=0; y<Size(state); y++) { 
      int gpos = 0; 
      FOR(x,0,Size(state[y])) if(state[y][x] == '.') gpos |= (1<<x); 
      y++; 
      if(y < Size(state)) 
      FOR(x,0,Size(state[y])) if(state[y][x] == '.') gpos |= (1024<<x); 
       
      printf("pos: %d gim: %d\n", gpos, gim[gpos]); 
      gres ^= gim[gpos]; 
      } 
 
    return gres ? "first" : "second"; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/