/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2303
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

class SquareCode {
public:
    vector<string> completeIt(vector<string> grille);
};

vector<string> SquareCode::completeIt(vector<string> grille) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> grille = {"XX..", "XX.X", ".XXX", "XXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX..", "XX.X", ".XXX", "XXXX"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> grille = {"XXX.", "XX.X", ".XXX", "XXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXX.", ".X.X", ".XXX", "XXXX"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> grille = {"XXX.", "XX.X", ".X.X", "XXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> grille = {"XXXXXX", "XXXXX.", "XXXX..", "XXX.XX", "X.XXXX", "XX.XX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXX", ".XXXX.", "X.XX..", "XXX.XX", "X.XXXX", "XX.XX."};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> grille = {"XXX.XX", ".XXXX.", "X.XXX.", "XXX.XX", "X.XXXX", "XX.XX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> grille = {".XXX.XXXXXXX", "XXXXXXXXXXXX", "XXXXXX.XXXXX", ".XXXXXX.XXXX", "XXXXXXXXXXX.", "XXXXXX.XXXXX", "XXXXXXXXXXXX", "XXXXXXXX.XXX", "XXXXXXXXXXXX", ".XXX.XXXXXXX", ".XXXX.XXXXXX", ".XXX.X.XXXX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> grille = {"XXXXX..X", "XXX.XXXX", ".XX.XXXX", "XXXX.XX.", ".XXX.XX.", "XX.XXX..", "XXXXX.X.", "X.XXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> grille = {"X.XXXXX.XXXXXX.XXX.XXXX.XXXXXXXXXX.XXX..X.X.XX", "XXXXX.XXXXXX..XXX.XXXXXXXX..X.XX.XXX.X.XX.XXXX", "XXX..X.XX...XXXXXXXXXXXXX.X...XXXXX..XXXXX.XXX", "XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX", ".XX.XX.XXX.XXXX.X.X....XXX.X.XXXXXX.X.XXXXXX.X", "XXXXXX.XX....XXXXX.XX.X..XX.XX.XX.XXXXX.XXXX.X", "XXXX..XXXXX.XXXXX.XXXXXXXXXX.XX.XXXXXX.XXXXXXX", "XXXXX.XXXXXX.XXX.XXXXXX...X.XXX.XX.XX.XX.X.X..", "XXXXXXX.X..XXXXXX.X.XXXXXXX.XXXXXX..X..X.XXXX.", "XXX.XX.XXXXXXXXX.XXXXXXXXXX.XXX.XXXXXXX...X.XX", "XX.X..XXXXXXX.XXX.XXXX.X..X.X.XXX.XX.XXXXXX.XX", "XX.XX.XXX..XXXXXX.XXXX.XXX.XXXX.XX.X.XX..XXXXX", "X..X.XXXXXXX.XXX.XXXXXXXXX.X.XXXXXXXXX.XXXXXXX", "X.X.XX.X.XX.X..X.XX..XXX.XXX.XX.XX.XXXXXXXXXXX", "XX.XX.XXX.XXXXXXXXXX..XXXX.XX.XXXXXX..XXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXX..XXXX..XXXX..XXXXXXX.X", "X.XXXX.XXXXXXXXX..XXXX..XX.XXXXXX.XXXXXXXXXXXX", "XXXXX.XXXXX.XXX..XX.X.XX.XXXXXXXX.XX.XX..XXXXX", "X.XX.XXXXXXXXX..XXXXXXXXXXXXX...X..XXXXXXXX.XX", ".XXX..X.XX..XXXXXXX...X.XXXX.XX.X.XXXXXXXXXX.X", "X.X.XXX.X.XX.XXXXX.XXX..XXXXXXXXXXXXXXXX..XXXX", "XXXXXXX.XX.XXXXXXXXXXXXXX.XXX.X.XXX.XXXX.XXXXX", "X.XX.XXXXXXXXXXXXX..XXXXXXXXXX.X.XXXX.XXXXX.X.", ".X...XXXXXXXXXXXXX..XXXX.XXX.XXXXXXX..XXXXXXXX", "XXXXXXXXXXXXXXX.XX..XXX.XX...X..XX.XXXXXXXXXX.", "XXXX.X.XX.XXXXXXXXXXX..XXXXXX...XX.X.X.XXXXXXX", "X.XXXXXXX.XXXXXXXXXXXXXX..XX.XXXXXXX.XX.X.XXXX", ".X.XXXXXXXXXX.X.XXXXX.XXXXXXX.XXXXXX..XXXXXXXX", "XXXXXXXXXXXXXX.XXXX.XXXX.XX.XXX...XXXXXX...XXX", "XX.XXXXXXXXXXXXXXXXXXXX...X..XXXXX.XXX..XXXXXX", "XXXXXX.XXXX.XXXXXX...XX.XXXX..XXX.XXXXXX.X..XX", "XXX.XXXXX.XXXXXXX.XXXXX.X.XXXX.X.XXXXXX.XXXXXX", ".XXXXXXXXX.XXXXX.XXXXXXXXXXXX.XXX..XX.X..XXX.X", "XXXXXXXXXXX.XX.XX.X.X.XXXX...XX.XXX...XXXXXX.X", "XXX.XXXXXXXX.XXXXXXXXXXX.XXXXXXX.X.XXXXXXX..X.", "X.X.XXXXXXXXX...XX..X.XXXXXXXXX.XX.XXXX.X.X.XX", "XX.XX..XX.XXXX...XXXX.XXX.XX.X.XX..X..XXX.XX..", "XXX.XXXXXXXXXXXXXX.XX.XX.XX.XX.XXX.XXXXXX.XX.X", "XXXXXXXX.XXX.XXXX.XXX.XX...XXXXXXXXXXXXXXXXXX.", "XXXXXXX.XXXX.XXXXXXXXX..X.XX.XXXXXXX.XX.XX.XXX", "XXXXXXXXXXXX....XXXXX.X.XXX.XX..XXXXXX..XXX.XX", "XXXXX.XXX.X.XXXXXXX..XXXXX.X.XXXXXXXX.XXXX.XXX", "XXX..XXXX.X.XXXXXX.XX.XXXX..XX.XX..X.XXXXXXXXX", "XXXX.XXX.XX.XX.XXXX.XXX..X..XXXXXXXXX.XXX.XXXX", "X.XXX.XXX.X..XXXXXXXXXXXXXXXXX..XXXXX..X.X.X.X", "XX.XXXXX.XXXXXXXX.XXX.XXXXXX..XXXX..XX.XXXX..X"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> grille = {"XXXX.XXXXXX.XX...XXXXX..XXXX.XXXX..X.XXXXXXXXXXX.X", "XXXXXX.XXXXX.XX.XXXXX.XXXXX.XXXXXXXXX.XX..XX.XXXXX", "XX.XXXX.XX.XXXXXXXXXXXX.X.XXXXX.XXXXXX.XX...XXXX.X", "X.X.XXXXX..XX.XXXXXXXXX..XXXXX.XXXXXX.XXXXXX.X.XXX", "XXXX.XX.XX.XXXXXXXXXXXXXXX.XXXXXXXXXXXXX.X.X.X.XX.", "XXXXXX.XXXXXXXXXXXX...XX.XXXXXXXXXXXXXXXX..XXXX..X", "XXXXXXXXXXXXXX.XX..XXXXX.XXXXXXXXXXXXXXXXXXXXXXXX.", "XXXX.XXX.X.XXXXXXXXXX..X.X.X.XX.XXXXXXX.X.XX.XXXXX", "XXXXXXX.X.XXX.XXXXXXX.XXXXXXXXXXXXXXXXXX..X.XX.XX.", "X..XX.X..XXXX.XXX..XXXXXX.XXXXXXXXXXXXXXX..XX.XXXX", "XXX.XXXXXXXXXXXXXXX.XX.XXXXXXXXXXXXXXXXXX.XX.XXXXX", "XXXXXXX.XXXXXXXXX..XXXXXXXXXX....X..XX.X.X.XXXXXXX", "XXXX.XXXXXX..XX.X.XXXXXXX.XXXXX.X.X..XXXXXXXXX.X.X", "XXXX.XXXXXX..XXXXXXXXXXXXXXXXXX.XX....XXXXX.X.XXXX", "XX.XXXXXX.XXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXX.XXXX.", "X.XXXXXXX.XXXXXXXX.XX.XXXXXX.XXXXX.XXXXX.XXXXXXXXX", "X.XXX.XXXXXXXXX..X.X..XXXXXXXXXX.XXXXXXX.X.X.X.XXX", "XX.X.XXXXXXXXXX.XX.XXXXX..XXXXXX...XX.XXXXXX.XXXXX", "XXXXX.XXXXXXX.XXXXXXX.XXXX..X..XXXXXXX.X.XXX.XXXXX", "XXXXXXXXXX.XX..XX.XXXXXXX..XXX.XXX.X.XXXXXXX.XXXXX", "XXXXXX.X.XXX.XXXX.XXXXXXXX.XXXXXXX..XXXXXXXXXX.X..", "XXXXX.XXXXX.XXXXX..XXX.X.XX.X.XXXXXXXX.X..XXXXXXXX", ".XXX.XXXXXXXXXXXXXXX.XXXXXXXXX..XXXXXXX..XX.XX.XXX", "XXXX.XXXX.XXXXXX.XXXXXXXX..XX.XXXXXXXX..XXXXXXX.XX", "X..XXXX..XX.X.XXXXXXXXXXXX...XX.X..XXXXX.XXX.X..XX", "XXXX..XXXXXXX.X.X.XXXXXXXXX.XX.XXXXX.XXXXXXXXX.XXX", "X...XXXXXX.XX.XXXXXXXXXX.XXXXXXXXX.XXXXXXXXXX.XXXX", "X.XXXXXXXXXXXXXXXX.XXXXXXXXX.XX.XXXXXXXX..XXXXXXXX", "XXX.XXXX.XXXX..XXXXX..XX.X.XX.XXXXX.XXX.XXXXXXXXX.", "XXXXX.XXXXXX.XX.XXXX.XXX.X.XX.XXX..XXXX..X.XX.XXX.", "..XX.XXXXXXXXX..X..XXXXXX.XXXXX..X..X.XXX.XXX.XX.X", "X..X.X.XXXXXXXXXXX..XXXX.X.XX.XXXXXXXX.XXXXXXXXX.X", "XXXXXXXXXXXXXX..XX.XXXXXXX..XXXXX.XXX.XX.XXXXXX..X", "X.X.XX.XXX..XXXXXXXX..X.XXX..XXXXX.XXXXXX.XXXX.XXX", "XXXXXXXXX...XXXX..XXXXXX.XXX.XXXX.XXX...X..XXXXXXX", "X.XXXXXX.XXXXXXXXXX.XXX.X.X.XX.XX.XX.X.XXXXXXXXXXX", "XXXXXXXXXX.X.XXXX.XXXXXXXX.XXXX.XXXXXXXXX.XXXXX.XX", "XXXXXX.XXX.XXXXXX..XXX.X.XXXXX.XX.XX.X.XXXXXX.XX..", "XX.X.X.XXXX.X.XXX.XXXXXX.XXXX.XXXXXXXXXX.XXXXXX.XX", "XXXXX..XX..XXXXXXXXXXXX.X.XXXX.XXXXXXXXXXXXXXXXXXX", "XX.XX.XXXX.XX.XXXX.X.X.X.XXX.XXXXX.X.XXXXXXXXX.XXX", "XX.XXXXXXXXXXXXXXXXXXXXXXX.XX....X..XXXXXXXXX.XXXX", "XXXXXXXXXXXXXXXXX.XXXXXXXXXXXX.X.XXXXXXXXXXXXXXX..", "XX..XXX.XXXXX.XXXXXXXXX..XXXXXXXXXX.XXX.XXXXXXXXXX", "XXXXXXXX.XXXXXXXXX.X.XXX.XX.XX....XXXXXXXXXXXXXXXX", "XXX.X..XXX.X.X.X.X.XXX....X.XXXX..XXX.XXXX.XXXXX.X", "XXXXXXX..X.X.XX.XXXX.XXXXX.XX...XXXXXXXXXXX.XXXX.X", "XXXXXXX.X.XX.X.XXXX.X.XXXXXXXXXXXX.X..XXXXXX.XXX.X", "XXXXX.XXXXXXXX..XXXXXXXX.XXX.X.XXXX.XX.X..XXXXXXXX", "XXXX..X..XXXX.XXXXXXXXXXX.X..XXXX.X..XXXX..XXXXXX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> grille = {"XXXXX.XX", "XXXX.XXX", "XXX..X.X", ".XXXXXXX", "XXXXXXXX", "XXXXXXXX", "X.XXXXXX", "XXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"....X.XX", ".XX..XXX", "X....X.X", ".XX.XXXX", "XXXXXXXX", "XXXXXXXX", "X.XXXXXX", "XXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> grille = {"XXX.XXX.XXX.XXXXXX.XXXX..XXXXXXX.XXXX.XXXX.X", "XXX.XXXXXX.XXXXX.X.XX.X.XXXXXXXX.X.XXX.XX.XX", "XX.XXXXX.XXX.XX.XXXXXX.XXXX.XXXX.XXXXXXXXX.X", "XX..XXXXXXX.X.XXXX.XXXXXXXX.XXXX.X.XXXXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXX.XXXXXXXX", ".X.XXX.X.XX.XXXXXXXXXXXX.XXXXXXXXXXXXXX..X.X", ".XXXXXXXXXX.XXXXXXXXXXXXXXXXXX..XXXXXXXXX.XX", "XXXXXXXXXXX.XXXXXX.XX.XXXXXX.XXXXXXX.XXX.XXX", "XXXXXXXXXXX.X.XXXX.XX.XXXX.XXX.X..XXXXXX.XXX", "XXXXXXXXXXXXXXXXXXX.X..XX.XXXXX.XX.X.X.XXXXX", ".XXXXX.XXXXXX.XX.X.XXXX.XXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXX..XXXXXX.XXX.XXXXX.X.XXXXX.X", "XXXXXXXXXXXX.XXXXXXX.X.....XX.XXXX..XXXXXXXX", ".XXXXXXX.XXXXXXXXXXXXXXXXXXXX.XXXXX.XXXX.XXX", "XXXXXXXXX.X...XX.XXXXXXXXX.XXXXXXX.XX.XXXX..", "X.X.XXXX.X.XXXXXX.XXXX..XXXXX.XXXXX.X.XXX.XX", "X.XX....XXXXX.XXXXXXXXXXXXXXXXXXX.XXX.X.XX.X", "XXXXXXXXXXXXXXXXXXXXXX.XXXX.XXXXXX.XXXXXXXXX", "XX.XXXXXXXXXXXXXXXXXX.XX.XXXXXXXXXXXX.X.XXXX", ".XXXXXXXXXXXX.XXXXXXXXXXXX..XXXXXXXXXX.XXXXX", "XXXXXXXX.XXXX...X.XXXXXXXXX.XXXXXXXXXXXXXXXX", ".XXX..X.XXXXXXXXXXXXX.XXXXXXXXXXX.XXXXX.XXXX", "XXXXXXXX..XX.XXXX.XXX..XX.XXXXXX..XXXXXX.XXX", "X.XXXXXXXXXXX.XXX.XXXX..XX.XXX.XXXX.XX.XXXXX", "XXXX.XXXXXXXXX.XX.XXXXXXXXX.XXXXXXXXXXXXXXX.", "..XXXXXXX.XX.XX.XXXXXXXXXX.XXXXXXXXXXXXXXXXX", "XXXXXX.XX.XXXXXXXXXX...XXXXXXX.XX.XXXXXXXXXX", "XXXXXXXXXXXX.XXXXXXX.X.XXXXXX.XXXXXXXX.XXX..", "X.XX.XXXXXXX.XX.XX.XX.XXXXX.X.XXXXXXX.XXX.XX", "XXXXXXXXX.XXXXXXXXXXX.XXX.X.XXXXXX..XXXXXXXX", "XX.XXXX.XXXX..XXXXXXXXXXXXXXXXXXXXX..XXXXXXX", "X..XXXXXXXXXXX..XXXXX.XXXXXXXXXX..XXXXXXX.XX", "XXXXX.XXXXXXXXXXXX..XX.XXXXXXX.XX.X.XXXXXXXX", ".XXXXX.XXXXXXXXXXXX.XXXXXXXXXXXX.XXXXXXXXXXX", "X.XX.X.X.XXXX.XXXX.X.X..XXXXXXX.XX.XXXXXXXXX", "XX.X.XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXX.X.X..X", "XXXXXXXXXX.XXXXXXXXX.XXXXXXXXXXXXXXXXXX.XXXX", "XXXXXXX.XXXXXXXXXXXXXXXX.XXX.XXXXXXXXXX.XXX.", "XXX.XXXXXX.XXXX.XXXXXXXXXX..XXXX.XXXXXXXX.XX", "XXX.X..XXXXXXX.XXXXXXXXX..XX.XXXXXXXXXXXXXXX", ".....XXX.XXXX.XXXXX.XXXXXX..XXX..XX.XXXXXXXX", "XXXXXX.X..XXXXX.XXXXX..XXXXXXXXXXXXXXX.XXX.X", "..XX..XXX..XXXXXXXXXXXXX.XXXXXXX.XX.X.XX.XXX", "XX.X.XXXX.XXX...XX.XXX.XXXX.XXX..XXX..XXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> grille = {"XXX.XXXXXXX.XX.XXXXXXX", "XXX.X.XX.XX.XX..X.XXXX", "XXXXXX.XXX.X.XXXXXXX.X", "XXXXXX.XXX.X.XXXXXXXXX", "XXXXXXXXXXX.XXXXXXXX.X", ".XXXXXX.XX.XXXXXXXXXXX", "X.XX.XXXXXXXXXXXX.XXXX", "X.X.XXX.XXXX.XXXXXXXXX", "XXXXX.XXXX.XX.XXXXXXXX", ".XXX.XXXXXXXXXXXXXXX..", "XXXXX.X...X.XXX.XX.XXX", ".X..X.XXXXXXX.X.XXXXXX", "X..XXXXXXX....XXXXXXX.", "XX.XXXXXXXXXXXXX.XXXX.", "XXXX.XXXXXX.XXXXXXXXX.", "..XXXXX...XXXXXXXXXXX.", "X.XXXXXXXX.X.XXXXX.XXX", "XXXXXXXXXX.X.X.XXXX.XX", "XX.XXXXX.X.XXXXXXXXX.X", "XX.XXXXXX.X.XXXXXXX.X.", "XXXXX.XXX.XX.X.XX...XX", "XXXXXXXXX..XXX...X.XX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> grille = {"XX.XXXXXXXXXXXX.X..XXXXXXXXXXXXXX.X.XXXXX.XXXX", "..X.XX..XXXXX.X....X.X..X.X.X.XXXXXXXXXXXX....", ".XXX.XXXXXXX.....XXX..XXXX.XXXXXXXX.XXXX.X..X.", "X.XXXXXXXX.XXXXXX..XXX.XXX..XXXXXX.X.XXXX....X", ".XXXXXXX..XXXXXX.XX..X.X.XXXXX..XX...XX.X..X.X", "XXX..X.XXXXX.X.XXXXXXXXXX.XXXXXXXXXXXXX.XXXXXX", "XXXXXX..XX..XX...X..XX.XXX.XXXXXXX.XXXX.XXXXXX", ".XXXXX.XXX..XX.XXX..X.XXXXX.XXXXXXXXXXXX.XX.X.", "X..X.X.XXXX.XX.XXXXXXX.XXXXXX.XX.XX..X.XXXX..X", ".XXXXXXX.XXXXXX.XX....X.X.XXX.X.XXXXX.XXXXX.X.", ".XX.XX.XXX.XXX.XX...XXXXX.X.XX.XXXX.XXXXX.XXXX", ".X.XX.XXXXXXXXXXXX..XXXXX.XXXX.X.XX.XXXXXX.XXX", "X.XX.XXX.XXXX.XXXXXXXXX.X..XXX.XXX.XXXXXX.XXXX", ".XXXXXXXXXX.XXX..XXX..X...XXXXXX.X.XXXXXXXXXXX", "XXXXXXXXX.X..XXX.XX.XXXX.XX.XXXXXXXXXXXX.XX.XX", "..X.X.XXXXX.XXXXX.XXX..XXXXX.XXX.XX.XXXXXXXXX.", "X.X.XX.XXXXXXX..X.XX.X.XXXXXXX.XX..X..XXX..XXX", "XX.XXX..XXXX.XX..XX.XX.X..XXXXXXXXX.X.XXX.XXXX", "XXXXX...XX..XXXXXXXXXXX.XXX.XXX..X.X.XX.XXXXXX", "XX.XXX.XXX.XXX.XXXXX.XXXXXXXXXXX..XXXXXXXXX.X.", ".XXXXXXXXXXX.XXXXX.XXXXX.X.X.XXXXXXX.XXXX.X.XX", "XXXXXXXX.XXX.XX..XXXXX.X.XX.XX...X..XX.X.XXX..", "X.X....XXXXXXXXXXX.XXXXXXX..XXXX.X.XX.X..XXXXX", "XXXX.XX.XX.XXXXXXXXXXX.XXXXX..X.XXX.XXXXXXXXX.", "..XXX.X..XX.X.XX.X.XX.X.....XXX.XXXX.XXX.XXXXX", ".XXXX.X..XXXXX.XXXXX.XXXXXXXXXXXXXXX.XX.XXXXXX", "X.XXXX.XXXXX..X.XXX.X.X.X..XXX.X.XXXXXX..X.XXX", "XXXX.XX.XXXXX...XXX.XXXXXXX.XXXXXX.X.XX.XXX.X.", "XXXX.XXXX.X.XXX.XXX.XXX.XXXXX.XXXXXXXXX.XX.XXX", ".X...XX.XXXXXX.X..X..XX.XXXXX...XXXXXXXX...XXX", ".XXXXXXXXXXX.XX.X.XXXXXXX.X.XXX.X.XXX.XXXXXX.X", "..X..XXXXXXXXXX.X.XX.XXXX....XXXXXXXXXXXXXXXXX", "XXXXX.XXXXXXXXX.XXXXX.XX..XX..X.XXXXX.XX..X.XX", "XXX.X.XXXXXXXXX.XX.X.XX.XXXX.XXXXX..X..X..XX.X", "..XXX.XXXXXXXXXXXX...XXX.XXXX....XXX..XXXXXXXX", "XXXXX.X.X..X..XXX.XXX.XXX..XX.XXXXXX.XXX...XXX", "XXXXXXXXX.XXXXXXXXX.XXXXXXXX.XX.X..XXX..XXXXXX", "X.X.X.XXXXXX.XXXXXXXXXXXXX..X.XXXXXXXXXXX.XXXX", "XXX.XXX.XXX.XXX.XX.XXXX.XXXXXXXXXXX.XXX.X.XXXX", "XX.XXX.XXXX.X.X..XXXXXXXXXXXXXXXX.XXXX.XXXXXX.", ".XXXX...XXX.XX.XXXXXXXX..X..XX..X.XXXXXXX.XXX.", "..X.XXXX..XXXX.XXX.XXX.XX..XX..X..XXXXXXXXXX.X", "XXXXXXXXXXXXXXXXXX.XXXXX.XXX.X..XXXX.XX.XXX.X.", "XX..XX.XX.XXXX.XXXXXXXXXX.X.XX.XXXXXX.XXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> grille = {"X.XX.XX..XXXXX.X.XXX.XX.XXXXXXXXXX", ".X.XXXXXXXXXXXXXXX.XXXXXXXXX..XXXX", "..XXXXXXXXXXX.XX.X.XXXXXXX.XX.XXXX", "XXXXXXXXXXXXXXXX.XXX.XXXXXXXXXXXXX", "XXXXXXXXXX.XXXXXXX.XXXXXXXXXXXXXXX", "XXXXXXXXX..XX.XX.XXXXXX.X.XX.XXX..", "..XX.XXXX.X..XX..XXXXXXX.XXX.XX.XX", "XXX..XXXXXXXX.XXXXXXXXXXXXXXXXXXXX", "XXXXXXXX.XXXXX.XX.XXXXXXXXXX.X.XXX", "XXXX.XXXXXXX.XXXX..X..X.XXXXXXX.XX", "XXXX.XXXXXXXXXXX.XXX..XXXXX.XXX.XX", "X.XXXXXXXX.X.XXXXXXXXX.XXXXXXXXXXX", "XXXXXX.XXX..XXXXXXXXXXXXX.XXXXXX.X", "XXXXXX..XXXXXXXXXXXX.XXXXX..XXXXXX", "XXXXXXXXX.XXXXXXXXXXXX.XXXX.XXXXX.", "XXXXX.X..X.XXXXXXXXXX.XXXXXXXX.XXX", "XXXX.XXXXXXXXXXXXXXX.XXXX.XXXXX.X.", "XX.XXXXX.XXXXXXXXX.XXXXXXXXXXXXXXX", "XXXXXXXXXXXXX.XXXXXXXXXXXXXXXX.XXX", "XXXXXXXXXXXX.XXX.XXXXXXXXXXXX.XXXX", "XXXXXX.XXXXXXXXXXXXXXX..XXXXXXXXXX", "XXXXXXX.XXXX.XXXXXX.XXXXXXX.XXXX.X", ".XX.XXXXX.XXXXXXXXXXXXXXXXXXX..X.X", "XXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXX", "XX..XXXXXXXXXXXX.XXXXX.X.XXXXXXXXX", "XXX.XXX.XXXXX.X.XXXXXXXXX.XXX.XXXX", "XXXXXXXXXXXX.XXXXXXXXX.XXXX..XXXXX", ".XXXXXXXXX.XXXXXXXXXXXXXXXXXX.X.XX", "XXXX..XXXX.XX.X..XX.XXXX.XXX.X.XX.", "XXXXXXXXXXXX.XXX..X.XXXX.XXXXXX.XX", "XXXXXXXXXX.XXXXX..XX.XXXXXXXXXXXXX", "XXX..XX.XX.XX.XXX.XXXXXXX.X.XXXXXX", "X.X.X.XXXXXXXXXXXXX.XXX..XX.XXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> grille = {"XXXX.X.XX.XXXX..XXXXXXX..XX.XXX..X.X.XXXXX", "XXX.XXXX.XXXXXXXXX.XXXXXXXX.XXXX.X.XXX...X", ".XXXXX..XXX.XXXX.X.XXX...XXXX.XX.XXXXXXXXX", ".XXX.XXXX....X.XXXX.XXXXXX..XXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX.X.XX.XXXXXX.XXX.XXXX", "XXXX.XXXX..XXXXXXXXXX.XX.XX.XX.X.XXXX.XXXX", "XXXXXXXXXXXXX..XXX.XX..XXXXXXXXXXX..XXX.X.", "XXXXX.X..XXX..XXXXXXX.XXXXXXXX.XXXXX.X..XX", "X.XXX.XXXX.XXX.X...XX.XX.X.XXX..XX.XXX.XX.", ".XXXXX.XXX.XXXX.X.XXXXXXXXXXXXXXXXXXXXXXXX", "..XXXXXXXX..XX.XXXXXXXX.XX....XXX..XXX.X.X", "XX.X.XXXXXXX.XX..XXXXXX.XXXXXX.XXX.XXXX.XX", "..XXXX..XXX..X...XX...XX..XXX.XXXXXXXXX.X.", "XX..XX.XX..X..XXXX.XXXXXXXX..X.XXXXX.X.XXX", "XXXXX.XXXXXX.XXXXXX.XXXXX.XX..X.XXXXXX.X.X", "..XXXXXX.XXXX..XXXXXX..XXXX.X.XXXXX...XXXX", "XXXXXXXXX...XX.X.XX.X..XX.XXX...XXXXXXXX.X", "XXXXX.XXXXX.X.X.X.XXXXXX.XXXX.XXX.X.XXX.XX", "X.XXXX.XXXXX.XX..XXXXXXXXXXX..XXXXXX.XXXXX", "XXXXXXXXXXXXXXX.XXX..X.XXXX.XXXXXXX.XXXXXX", ".XXXXXX..X.X.XXXXXXXXXX...X.X.XXX.XXXX.XXX", "XXXX..X.XX.XXX.XXX.XXX....XXXXXXXXX..XX.X.", "XXXXXXXXXX.XXX...X..XXX.XX.XXXXX.X..XX.XXX", ".XXXXX.XXXXXXXXXX.XX.XX.XX.....XX.XX.XXXX.", "XXXXXX.XX.XXX.XXXXXXXXX..XXXXXXXXXXXXXXX.X", "XXXX..X.XXXXXX.XXXXXXXXXXX.XXXX.X.XXXX.XXX", "XX..XXXXX.XXXXXXX.X.X.X.XX.XX..XXXXXX.X.X.", "XXXX.X.X.XXX.XXXXXXXXXXXX.X.XXXXXXXX.XXXXX", "..X.XXXX.XXXXXXXXXXXXX.X.XXXXXX.XXXX.XXXX.", "XXXXXXX..X..XX.XXXXXXXXXX.XX.XXXXXXXXXXXXX", "XXXXXXXXXXXXXX.XXXX..X.XXXX.XXX.XX.X.XXX.X", ".XXXX.X...XXXXXXXXXXXXXX.XXXXXXXXXXXX..X.X", "XXXXXX.X.X.X....XXXXX.XXXXXXXXXXXXXXXXX..X", "XXXX.XXXXXXXXX.X.XXXX.XX..XXXXXXXXXX..XXXX", "XXXXXXXX.X.XXXXXXX..XXX.XXX...XXXX.XXXXXXX", "X..X.XXX.X.XXXXXX.XX.XXX.XXX.XXX.XX.XXXXXX", "X.X.XXXXXX..XXXXXXX....XX.XXX.XXXXXXXX.XX.", "XXXXXXXX.X.X.XXXX...XX.XXX.XX.X..XX.XX.X.X", "XX.XXX.XXX.XXXXXXXXXXX..XXXX..X.X.XX.XXX.X", "XXX..X...XXXXX.X.X.X.XXX.XXX.XXXXXXXX.XXX.", "XXXXX.X..XXX.XXXXX.XXX.XXXXXXXXXX.XXXXXXXX", "XXXX...XXX.X..X.XXXXXX.XX.XXXXX.XX.X.XXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> grille = {"XXX.XXXX.X", ".X..XXXXXX", "XXXXX.XXXX", "XXXXXXXXXX", "XXXX.X.X.X", "XXX..XX.XX", "XXXXX.XX..", "X.XXXXX.XX", "XXXXXXXXXX", "XXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> grille = {"XXXXXXXXXX.X", "XXXXXX.XXXXX", "XXXXXX..XX.X", "X.XXXXXXXXXX", "XXXXXXXXXXXX", "XXXXXXXXXXX.", ".XXXX.XX...X", "XXXXXX.XXXXX", ".XXXXX.XXXXX", "XX.XXXXX.X.X", "XXXXXXXXXXXX", "X.X.XXXXXX.X"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> grille = {"XXXXXXXXXXXXXXXXXXXXX.X.XXXXXXXXXXXXXXXXXX", "X.XXXXXX.XXXXXX.XXXXXXXX.XXXXXXXXXX.XXXX.X", "XXXXXX.XXXXXXXXXXXXXXXXXXX.XXXXX.XXX.XXXXX", "XXXX.XXXX.XX.XXXXXXXXXXX.XX.XXXX.XXXXXXXXX", "XXXXXXXXXX.XXXXXXXXXX.XXXX.XXXXXXXXXXX.XXX", "XXXXXXX.XXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXX", ".XX.XXXXX.XX.XXXX.XXXXXXXXX.X.XXXX.XX..XXX", "XXXXXXXXXXXXX..XXXXXXXXXXXXX.XX.XXXX..XXXX", "XXXXXXXXXXX.XXXXXXXXXX.XX.XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX.XXXXX", "XXXXXXXXXXXXX.XXXXXX.XXXXXXXXXXXXXXXX.XXXX", "XXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX", "XXXX..XXXXXX.XXXXXXXXX.XXXXXXXXXXXXXX.XXXX", "XXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "..XXXXXXX.XXXXXXX.XXXXX.XXXXXXX..XX.XXX.XX", "XXXXX.XXX.XXXXXXX.XXXXXXXXX.XXXXXXXXXXXXXX", "XXXXXX.XXXX.XXXXXXXXXXXXXXXXXXXXXXXX.XXXXX", "XX.XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXX.XXXX.", "X.X.XX.X.X.XXXXXXXXXXXXXXXXX.XXXXXXXXXXXXX", "XXXXX.XXXXXXXXXXXXXXXX.X.XXXXXXXXXXXXXX.X.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX.X", "X.X.XXX.XXXXXX..XXXXX.X.XXX.XXXXXXXXXXXXXX", "XXXXXXXX.XXXXXXXXXXX.XXXXXXXXXXX.XXX.X.XXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX.X.XXXXXXXXXXXXXXXXXX", "XXX.XXXXXXX.XXXXXXXXXXXXXXXXXXX.XXXXXXXXXX", "XXX.XXXXXX.XXXXX...XXXXXXXXXX.XXXXXXXXX..X", "XXXXXXXX.XX.XXXXXXXX.XX.XXXXXXXXXXXXXXXX.X", "XXXXXXXXXXXXXXXXXXXXX.XXXX..XXXXXXXXXXXXXX", "XXX..XXXXXXXXXXXXXXXXXXXXX.XX.XXXXXXXX.XXX", "XXXXXXXXXXXXXXX.XX.XXXXXXXXXXXXX.XXXX.XXXX", "XXXXXXXXXX.XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "X.XXXXXXXXXXXXX.X.XXXXXX..XXXXXXXXXXXXXXXX", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXX.", "XXXXX.XXXXXXXXX.XXX.XXXXX.X.XXXXXXXXXXXXXX", ".XXXXXXXXXX.X.X.XXX..X.XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXX.XXX.XXXXXXXXXXXXXXXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX....XX", "X.XXXX.XX....XXXXXXXXX..XXXXX.XXX.XXX.XXXX", "XXXXXXXXXXXXX.XXXXXXXXXXXXXX.XXXXXX.XXXXXX", "XXX.X.X..XXXXX.XXXXXXXXXXXXXXXXXXXXX.XXX.X", "XXXXXXXXXXXXXXX.XXXXXXXXXXXXXXX..XXXXXXXX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> grille = {"XXXXXXXX.XXX", "XXXX...XXXXX", "XXXXX.XXXXXX", "XXXX.XXXXXX.", "XXX.XXXXXXXX", "XXXXXXXXX.XX", ".XXXXX.XXXXX", "XXXXXXXXXXXX", ".XXXX.X.XXXX", "XXX..XXXXXXX", "XXXXX.X.XXX.", "XXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> grille = {"XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXX", "..XX.XXXXXXXXX.XXXXXXXXX.XXX.XX.XX", "XXXXXXXXXXX.X.XXX.X.XXXXXX..XXXX.X", "X.XX.XXXX.XX..XXXXXXXX..XXXXXXX.XX", "XXXXXX.XX.XXXXXXXXXXXXXXXXXXXXXXXX", "X.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXX", ".XXXXXXXXXXXXXXXXXX.XXXXXXXXX.XX..", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXX", "XXXXXXXX.XX.XXXXXX.XXXX.XXXXXX.XX.", "XXXXXXXXX.XX.XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXX.X.XX.X.XXX", "X.XX..XXXXXXXXXXX.XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXX.X.XXXXXXXXX.XXXX", "XXXXXXX..XXXXXXXX..XXXXXXXXXXXXXXX", "XXXX.XXXX.XXXXXXX.XXXXXXX.XXXXXX.X", "XX.XXXXXXXXXX.XXX.XX.X.XXXXXXX.XXX", "XXXXXXXXXXX.XXXXXXXXXXXXXX.XXXXXXX", "XXXXXXX.XXXXXXXX.XX.XXXXXXXXXXXXXX", "XXXXXXXXXXXXXXX.XXXXXXXXXX.X.XXXXX", "XXXX.XX..XXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXX.XXXXXXXXXX.XXXXXXXXXXXXXXX.X", "XXXXXXXXXXX.XXXXXXXXXXXXX.XXXXXXXX", "X.XXXXX.XXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXX..XXXXXXXXXX.XXXXXXXXXXXXXX", "...XXXX.XXXX.X.XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXX.XXXXXX.XXXXXXXXXXX", "XXXXXX.XXXX.XXXXXXX.XXXXXXXXXXXX.X", "XXXXX.XXXXXX.XX.X.X.XXXXXXXXXX.XXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXX", ".XXXXXXXXXX.XXXXXXXXXXXXXX.XXXXXX.", "XXXXXXXXXXXXXXXX.XXXXX.XXXXXXX.XXX", "X.XXX..XXXXX.XX.XXX.XXXXX.XXXXXXXX", ".XXXXX.XX...X.XXXXXXXXXXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> grille = {"XX.XXXXX.X.XXX.XXXXXXXXXXXXXXXXX.XXXXX.XXXX.", "XXXXXXXX..X.XX.XXXXXXXXX.X..X..X..XXXXXXX.XX", "XXXXXXXX.XXXXXXXX.XXXXX.XXXXXX.XXXXXXX.X.X.X", "XXXXX.X.X.XXXXXXXXXXXXXXXX.XXX.XXXXXXXXX.XXX", "XXXX.X.XX.XXXXXXX.X.X.XXXXXXXXXXXX.XXXX..XXX", "XXXXXXXXXXXXXXXXXXXXX.XXXXX.X..XXX.XXXX.XXXX", "XXXXXXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXX.XXXXXX", "XXXXXXXXXXXXXXXX.XXXXX.X.XXXXX..X.X.XX.XXXXX", "XXXXXXXXXXXXXX.XXXXXXXXXXX.XX.XXX.X.X..X.XXX", "XX.XXXXXXXXX.XXXXXXXXXXXXXXXXXXXXX.XXXXX.X.X", "XXXX.XXX.XXX.XXXXXXXXX.XXXX.XXXXXXXXXXXX.XX.", "XXXXXXXX.XXXXX.XXX..XXXX.X.XXXXXX..XXXXXXXXX", ".XXXX.XXXX.XX.XXXXX.XXXX.X.XXXXXXXX.XXX.XXXX", "XXXXXX.XXX.XXXXXXX.XXXXX..XXX.XXX.XX.XXXXXXX", "XXXX.XXXXXXXXXXXXXXXX.XXXXX.X.X.XXXXXXXXXXXX", "XXXXXX.X.XXXXXXXXXX.XXXXXXXXXXXXX.XXX.X.X.XX", "X.XXXXX.XXXXXXXX.XXXXXXXXX.XX.XX.XXXXX.XXXXX", "XXXXXXXXX.X.X.XXXXXXX.XXX.XXXXXXXXX.XXXXX.X.", ".X.XXX.XXXXXX.XX.XXXXXXXXXXXXXXXXXXXXXX.XXXX", ".X.XXXXXXXXXXX.XXXXX.XX..XXXX.XX.XXXXXX.XXXX", ".XX.XX..XX.X.XXX.XXXX.X.XXXXXXXXXXXX.X...XXX", ".XXXXXX.XX.X..X.XXXXXXX.X..X.XXXXXXX.XXXX.XX", "X.XXXX.XXXXXXXXXX.XXXXX.XXXXX.X.XXXXXXX.XXXX", "XXXXXXXX.XXXXXXX..X.X..XX.XXXXXXXXX.XXXXX.XX", "XXXXXXXXXXXX..X.XXXXXXX.XXX.XXXXXXXXXXX.XXXX", ".X..XXXX.XXXX..X.XXXX.XX.XXXXXXX.XX..XXXXXXX", ".XXXXXX.XXXXXXXXXXXXXX.XXXXXXXX..XXXXXXX.XX.", "XXXXXXX.XX.XXX.XXXXXXXXXXXXXXXXXXX..XXX.X.X.", "XXXXX.XXXXXXXX.X.XX.XX.XXXXXX.XXXXXXXX.XX.XX", "XXXXXXX.XXXXXXXXXX.XXXXXXXXXXXXXXXXX.XX..XXX", "XXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX..X.XX.XXX", ".XX.XXXXXXXXXXXX..XXX.X.XXX.X.XXXXXXXXXXXXXX", "XXX.XXXXX.XXXXXXX.XX.XXXX..X.XXX.X.XXX.XX.XX", "XXXXXXXXXXX.XXXXXXXX.X.XXXXXXXXXX.XX.XXXX.XX", "XXX.XXXXXXXXXX.XX.X.XXX.XX.XXX..XXX.XXXXX.XX", "XX.XX.XXXXXXXXX.XXXXXX..XXXXXXXX.XX.XXXXXXXX", "XXXXXXX.XXX.XXXXXXXXXX..XXXXXXXXXXXXXXXXXXXX", "XXXXX.XXX.XXXXX.XXXX.XXXX.XXXXXXXXXXX.XXXXXX", "XXXXXXX.XXXXX.XXXXXXX.XXXXXXXXXXXXXXX.XXXXXX", "XXXXXXXX.XXX.XXXXXXXXXXXXX.XXXXXXXXXXXXX.XXX", "XXX.XXX..XXX.XXX.XXXXX.XX.XXXXXXXXXXXXXXXXXX", "XXX..X..XX.XXXXXXXX.XXX..XXXX...XXXXXXXX.X.X", "XX.XXXXXXXXX.X.XXXXXX...XXXXXXX.XXXXXXXXXXXX", "...XXXXXXXXXXX..X.XXXXXXX.XXXXXXXXXXXX.XXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> grille = {"XX.X", "XXXX", "XXXX", "XXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...X", "X.XX", "XXXX", "XXXX"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> grille = {".X.XX.XXXXXXXX.XXX.XX.XX", "XX.XXXXX.XXXXXXXXXX..XXX", ".XXX.XXXXXXXXXXX.XX.XXX.", "..XX..XXX..XXXXXX.XX..XX", "XX.XX.X.XXXXX.XXXX..XXXX", ".XX.XXX..XXXXXXXX.XXX.X.", "X..X.XXXXX.XXXXXX.X.XXX.", ".XX.XXXX.XXXXXX..X.XXXXX", "XXXXXXXXXX..XXXXXXXXXX.X", "XXXXXXXXXXXXXXXXXXXX.XXX", "X.XXXXXXXXXXXXXXXXX.XXXX", "XXX.XXXXXXX.X.XXX.XXXXXX", "XXX.XXXXXXXX.X.XX.XXXXXX", "XX.XXXXXXXXXXXXX.XXXX.XX", "XXXXX.X..XXXX.XXX.XX.XXX", "X.X...X.XXX..XXXXX..XXXX", "XXX.X..X..XX.X.XXXX.XXXX", "X.XXXXX.XXXXX.XXXXXX..XX", "XX.XXXX..X...XX..XXX.XXX", ".XXXXXX.XXXXXXX.XXXXX.XX", "XX.X..XX..X.XXXXXXXX..XX", "XX..XX.XX.XXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXX....", "X..XXXX.XXXXXXX.XXX.XXX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> grille = {"X.XXXXXXXX.X..XX...XXX.XXXXXX.X..XXX", "X..X.XXXXXXXX.XXXXXXXXX.XXXX...X.X.X", ".XXXXX.XXXX.XXX.XXXX.XXX.XXXX..X.X.X", "XXXX.XXXXXXXXXXX..XX..X.XXXXXXXX.XXX", ".X....XXX.XXXXXXX.X.XX..XXX.XX..XXXX", "XX.XXXXXXX.XXX.XXXXXXX..X.XX.XX.XX..", "XXXX.X...XX.X.XXXX.XX.XX.XX..XX.XX..", "XXX.XXXXX.XXXXXXXXXXX.XXXXXX..X.XXX.", "XX.X.X.XXXX.XXX..X.XXXX.XXXXXXXXX.XX", "XXXXX.XXXX..XXX.XXXX.X.X..X.X.XXX.XX", "XXXXXXXX.XXXXXXX..XXXXXX.XX.X.XXXXXX", ".XXXXXXXX.XX..XXXXXXXXXXXXXXXXXX....", "XX.XXXXXX....XXX.X..XXXXXXX.XXXXXXXX", "XXXXXXXX.X.XXXXXXX.XXXXXX..XXX.X.XXX", "X.X.XXXXXXXXX.XXXX...X..XXX.XX.XXXXX", "XXXXXXXXXXXXX..X.XX.XXXXXXXXXXXXX..X", ".X.XXXX.XX...XXXXXXXX..XXXXXXX.XX.X.", "XXXXXXXX..XXX.XXXX.XX...XXXXXX.XX...", "XX..XX.XXX.XXXXX.XXX.XXXXX.XXX.XXXXX", "XX.X.X.XX.XXXXXXX.XXX.XXXX.XXXXXXX.X", "XXXX.XXXXXXXXXXXXXXXX.XX.XXXX.XXXXX.", "X.XXXXXXXXX.XXXX.XXX.X.XXXXXXXXXX.XX", "XXXXXXXXXXX...XXXX.XXXX.X.XXX.XXXXXX", "XXXXXXXXX.XXX.X.XXXXXXX.XXXXX.XXX.X.", ".X.XXXX.XX..X..XX.XXXX.X....XX.XXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXX", "XXXXXXX.XX.XXXXXX.XXX..XXXXXXXXXXXX.", "XXXXX..X..XXXXX.XXXX.XXX...X.XXXXXXX", ".X.XXXXXXXXX.XXXXXXX.X.XXXXX..X.XXXX", "X..XXX.X.XXX.XXXXX.XXXXXXXXXXXXXXX.X", "....X..XXXXX.XXXXX.XXX.XXXX..XXX.X.X", "..XXX.XXXX.XXX...XXXXXXXXXXXXXXXXXXX", "...XXXX..XXXXXXXXX.X.X.XX.XXXXXX.XXX", "X.X.XXXXXX.XXXXXXX.XX.X.XXXX.XXXX.X.", "X.XXXX.XXXXXX.XX.XXXXX.X.XX.XXX.XX.X", ".XXXX.XXXX.XXXX.XXXXX..X.X.XXXX.X.XX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> grille = {"XXXXXXX.XX", ".XX..XXXXX", "XX..XX.XXX", "XXXXXXXXXX", "XXXXXXXXX.", "XXXXXXXXXX", ".XXXX.XXXX", "XXXXXXXXXX", "XXXXXX.XXX", "XXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> grille = {"XXXX..XXXXXX", "XXXXXXXXXXXX", ".XXXXXXXXXX.", "XXXXXXXXXXXX", ".XXXXXXX.X.X", "XXXXXX.XXXXX", ".XXXXXXXXXXX", "XXXXXXXXXXXX", "XXXXX.XXXXXX", "XXXXXXXXXXXX", "XXXXXXXXXX.X", ".XXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> grille = {"XXX.XXXX..XX.XX....XXXXXX..XXXX.X.", "..X.XX....X.X..X.XXXXX.X..XX..XXXX", "X.XX.X..XXXXX.XX.XXXX.X.XXXXXXX.X.", "XXXX.X.XXXXX.X.X.XX.XXXXX...XXXXXX", "XXX...XX.X.X..XXXXXXX.XXXXXX.XXX..", "XXXXXXXXXXX.XXXXXX.X.XXXXXXXX.XXX.", "XXXXXX.XXX.XXXX.XXXXXXXXXXXXXXXXXX", ".XXXXX..XXXXXXX.XXXXXXXXXXXXXXXXXX", "XXXXXX.XXXXXXXXXX.XXXXXXXX.XXXXXX.", ".XXXX..XXXXXX..XXX..XXXX.XXX.X..XX", "X.XXXXXXXX..XXXXXXX..XXXXXXXXXXX.X", "XXX.XXXXXXXXX.XXXXXXXX.XX.XXXXXX.X", "X.XXX.XXXXXXX..X.X.X.XXXX.XXXXX..X", "XXX.X.X.X.XXX.XXXXXXXXXXXXXX.X.XX.", "XXXX.XX..X.XX.XXX.XXX.XXXXXXX.X.XX", ".XXXXX.XXXXXXXX.XXXXXXXX.XXXXX..X.", "X..XXXXXX.XXXX.XX.XXX.XXXXXX.XXXXX", ".XXXXX.X.XXXX..X.XX.X.XXXXX.X.XX.X", "XXXX.XXX.X..XXXXXXXXXXXXXX.X.XX.X.", ".XXXXXXXXX.XX.XXXXXXXX...X.XX.XX.X", "...XXX.XX.XX.X.XXXXXXXXX.XX.XXXX..", "XXX.X.XXXX.XXX.X.XXXXXXXX..X..X..X", ".XXX.XX.X..X.X.XXXXXXXXX.XX.XX.X.X", "XXXXX.XX.XX.X..XXXXX.X.XX...XXX.XX", "XXXXXX..X.X..XXXXXX.XXXXXX..XXXXXX", "..X.X..XX.XXXXXX..X.XX.XX...XXXX.X", "XXXX.XXXXX..XXXXXXXXX..XX...XXXXXX", "XX.XXXX..X..XXXXXXXXXXXXXXXXX.X.X.", ".XX.XXX.X.XXXX..XXXXXX.X.X.XXX.X.X", ".XXXXXXX.X...X.XXX.X.XX.XXXXXX.XXX", "XX.XXXXXXXXX.XXXXXXXXX.XXX.X...X.X", "XXXX.XXX.XX..XX..XXXXXXX.XXX......", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> grille = {"XX.XXXXXXXXX.XXXXXXXXX.XXXXXXXXXX.", "XXXXX.XXX.XXXXXXX.XXXXXXXXXXXXXXX.", "XXXXX.XXXXXXXXXX.XXXXXX.XXX..XXXXX", "XXXX.XXXXX.XXXXX.XXXX.X..XX.XXXX.X", "XXXXXXXXXXXXX.X.XXXXX..XXXXXXXXXX.", "XXXXXXXX.XXXXXXXXXXXXX.XXXXXXXXXXX", ".XXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXX.XXXXXXX.XXX..X.XXXX.XXXX", "XXXXXXXXXXXXXXXXXXXXX.XXXXXXXX.XXX", "XXX.XXXXXXX.XXXXXXXXXXXXXX.XXX.XXX", "XXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX.", "XXXXXX.XX.X.XXXXXXX.XXXXXXXXXXXXXX", "XXXXXXXXXXXX.XXXXXXXXXXX.XXXXXX.X.", "XX.XXXX.X.XXXXXX.XXXX.XX.XX.XX.XXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X.XXXXX.XXXX.XX.XXXXXXXXXXXXXX...X", "XXXXXXXXXXXXXXXXX.XXX.XXXX.XXXXXXX", "X.XX.XXXXXXXXXXXXXXXXXXXXXXX.X.XXX", "XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXX", ".XXXXXXXX.XXXXXXXX.XXXXXXXXX.XXXXX", "XXXXXXXXXXXXXXXXXXXXXXX...XXXXXXXX", "XXX.XXXXXXXXXXXX.XXXXXXXXXXXXX.XXX", "XX.XXX.XXXXXXXXXXXXXXXXXXXXXXX.XXX", "XXXXXXXXXXX.XXXXXXX.XXXXX.XXXXXXXX", "XXXXXXX.XXX.XXX.XXXXXXXX.XXXXXXXXX", "XX.XXXXXX.XXXXXX.XXXXXX.XXXXXXX.XX", "XXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX.X", "X.XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXX.XX.XXXXX..XXX.X..XXX.XXX", ".XX.XXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXX.XXXXXXXXXXXXXXXXX.XX..X.X", ".X..XXXXXXXXXXXXX.XX.XXXXXXXXXXXXX", "XXX.XXXXXXXXXX.XXXXXXXXXXXXX.XXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> grille = {"XXX.XXXX..XXX.X..X.XX.X.", "XX..XX.XXXXXXXXXXXXXX.X.", ".XXXXXX.X.XX.XX..XXXXXX.", "XX.X..XXX..XXXX.XX...XX.", ".XX.X.XX..X.X.XXXXX.XXXX", "XX.XXX.XXXXX.XXX...XX.X.", "X.XXXXXXXXXXXXX.XXXXXX.X", "XX..X.X.XXX.X.XX.XXXX.XX", "XX.X.XXXXXXXX.XXX.XXXXX.", "X.X..XX.XXXX.X..XXX.XXX.", "XXX.X.XXXXX...XXXXX.XXX.", "XXXX.XX.XX.X.XXXX.XX.XXX", "..X.XXX.XXXX.XXXXXXXX.XX", "X.XXXXXXX.XXXXXXX..XXXX.", ".XXXXXXXXXX.XXX.XXXXX.XX", "XX.X..X.XXXXXXXXXXXXX..X", "XXXX..XXX..XX.X..XXXXXXX", "XXXX.X.X.XXXXX.XXX.XXXXX", ".X.XXXX...XXXX.XXXXX.X..", "XXX.XXX.XX.XXX.XXXXX.XXX", "X...X.....XXX..XX.X.XXXX", "XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> grille = {"XXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X", "XXXXXXXXXXXX.XXXXX.XXXXXXXXXX.XXXXXXXXX.XXXXXXXX", "XXXXXXXXXXXXXX.XXXXXXXXX.XXXXXX..XXXXXXXXXXXXXXX", "XXXXXXX.XXX.XXXXXXXXXXX.XXXXXXXXXXXX.X.XXXXXX.X.", "..XXXXXX.XX.XXXXXXX..XXXXXXXXXX.XXXXXXXXXXXXXXXX", "XXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXX", "XXXX.XXXXXXXXXXXXXXXXXXXXXXX..XXXX...XX.XXX.XXXX", "XXXXXXXXXX.X.XXX.XXXXX.X.X..XXXXX.XXXXX.XXXXXXXX", "XXXXX.XXXXXXXXXXXXXXXXX.XXXXXXXX.XX.XXXXXXXXXXXX", "XXXX.XXX.XXXXXXX.XXXXXXXXXXXX.X.XXXX.XXXXXXXXXXX", "XXXX...XXXXXXX.XXX.XXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXX.XXXXXXXXXXXXX.XXXX.XX.XXXXXXXXXXXXXXXXXXXX", "XXXX.XXXXXXXXXXXXXX..XXXXXXXXX.XXXXXXX.XXXXXXXX.", "XXXXXXXX.XXXXXXXXXXXX.XXX..XXXXXXXXXXXXXXX.XXXXX", "XXXXXXX.XXXXXXXXXXX.XXX.XXX.XXXXXXXXXXXXXXXXX.X.", "XX.XXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", "XXXXXXX.XXXXXXXXXXXXXXXX.XXX.XXXXXXXXXXXXXXXXXXX", "XXXXXX.XXXXXX.XXX.XXXXXXXXX.XXXXXXXX.X.XXXXXXXXX", "XXXXXXX.XXXXXXXXX.XXXXXXXXXXXXXXX.XXXXXXXXXXX..X", "X.XXXXXXXXXXXXXXXXXX..XXXXXX.XX.XXXXXXXXXX.XXXXX", "XXXX.X.X.XX.XXXXXXXXXXXXXX.XXXXXXXXXXXXXXX.XXXXX", "XXXXXXXXX.XXXXX.X.XXXX.XXXXXXXXXXXXXXXXXXXXXXXXX", ".XX.X.XXXXXXXXXXXXX.XXXXXXXX..XXXXXXXXXXXXXX.XXX", "XXXXXXXXXXXXXXXXX.XXXXXXXX.XX..XXXXXXXXXXXXXXXXX", "XXXX.XXXXXXXXXXXXXXXX.X.XXXXXXXXXXXX.XXXXXXXXXXX", "XXXXXXXX.XXXXXX.XXXX.XXXXXXXXX..XX.XXXXXXX.XXXXX", "XX.XX.XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX.XXXX.X", "XX.X.XXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXX.X.XXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX.XXXX.XX.XXXX", "XXXXXX.XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX.X.XXXXXX", "X.XXXXXXXXXXXXXXX.XX..XXXXXX.XXXXXXXXXXXXXXXXXXX", ".XXXX.X.XXXXXXXXXX.XXXX.XXX.XXXXXX.XXXX.XXXXXXXX", "XXXXX.XXXXXXXXXXX.XXXXXXXXXXXX.XXXXXXXXXXXX.XX.X", "XXXX.XXXXXXX.XXXXXXXXXXXXX.XXXXXXXXXXXXX.XXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXX.X.XXXXX.XXX.XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX.X.XX..XXXXXXXXX", "XXXXXX.XXXXXXXXXXXXXX.XXXXXXXXXXXX.XXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX.XX.X..", "XXXXX.XXXXXXXXXXXXXXX.XXXXXXXXXXXXX.XXXXXXXXXXXX", "XXXXXXXX.XXXXXXXXXXX.XXX.XXX.XXXXXXX.XXX.XX.XX.X", "XXXXXXXX.X.XXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXX", "XX.X.XXXXXXXXXXXXX.XXXXXXXXXXXX..XX.X.XXXXX.XXXX", ".XXX.XXXXXXXXXXXXXXXXX.X.XXXXXXXXXXXXXXXXXXXXXXX", "XXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXX.XXXX", "XXXXXXXXXXXXXX.XXXX..XXXXXXXXXXXXXXXXXXXXXXXXX.X", "XXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXX.X.XXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> grille = {"XXXXXXXXXX", "XX.XXX.XXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XX.XXXXXXX", "XXXXX.XX.X", "XX.XXXXXXX", "XXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> grille = {"XX.XXXXXXXXXX.XX.X.XX.XX.XXXXXXXXXXXXXX.XXXXXXXXXX", "XX.XXXXX...XX.XXXXX.XXXXXX..XXXXXX..XXXXXXXX..XXXX", "..XXXXXXXXXXXX.X.XXXXXXXXXXXX.XXXXXXXX.XX.X.XXXXXX", "XXX.XXXXXXXXXXXXXXX.XXX.X.X.XX.XXX.XXXXXX.XXXXXXXX", "XXXXXXXXXXX.XX.XX..XXXX.XX..XX..XXXXXXXX.XXXXXXXX.", "X.XXX.X.XXXXXXX.XXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXX", ".XXXX.XXXXXXXXXXXXX.XXXXXX.XXX.XXXXXXXXXXXX.XXXXX.", "XX.XXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX..X.XX.XXXXXX", "X.X..XXXXXXXXXXXXXXXXXXXXXX.XXXX.X.XXXXXXX....XX.X", "XXX.X.XX.XX..XXXXXXXX.XXX..XXXXXXX.X.XX..XXXXXXXX.", "X.X.XXXX.XX.XXXXXXXX.XXXXXXXXXX..XXXXXX.X.X.XX.XXX", "XXXXXXXXXXX.XXXXXXXXXXXXXX.XX.XXX..XXXXXXXXXXXXXX.", "XX.X..XXXXXXXXXX.XXXXXXXXXXXXXXX.X..XXXXXXXXXXXXXX", "X.XXX.XXXXXXX.XXXXXXXXXXXXXXXXX.XXXXXXXXXXXX.XXXXX", "XX.XX.XXXXXXXXXXXXXXX..XXX.X.XXX.XXX..XXXX.XXXXXXX", "X.XXXXXXXXXXXXX..XXXXXXXXXXX.XXX.XXXXXXXXX.XX.XXXX", "XXXX.XXXX.XX...XXXXXX.XXX.XX.XX.XX.XX..XXXXXXX.X.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.XX..XXXXXXXXXXXXXXX", "XX.XXXX.XXXXX.XXX.XXXX..XX.XXXXXXX.XXXXXXXX.XX..XX", "XXXXXXXXXXXXX.XXXXXXXXXXX.XXXXX.XXX.XXXXXXXXXXXXXX", "XXXXXXXXX..XXXXXXXXXXXXXXXXXXX.XXXXXXXXX.XXXXXXXX.", "XXXXXX..XXXXXXXXXXX..XX.XXXXXXXXXXXX.X.X.XXXXXXX..", "XXXXXX.XXX.X.X.XXX.XXXXXXXXX.XXX.XXXXXX.XXX.XXXXX.", "XXXXXXXXXXX...XXXXXX.XX.XXXXXXX.XXX.X.XXXXXXX.XXXX", "X..XXXXXXXXXXXXXXXX...XXXXXXXX.XXXXXXXX.XXXXX.XXXX", "XXXXXXXXX.X..XXXX.XX.XXXXXXXXXXXX.XXXXXXXXXXXXX.X.", "XXXXXXXX.XX.XXXX.XXXXXXX.XXXXX.XXXXXXXXXX.XXX..XXX", "XXX..XXXXXXX.X.XXXXXX.X.XXXXXXXXXXXXX.X.XXXXXX.XXX", "XXXXXXX.XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX.XXX.XX.X", ".XXXX..XXXXXXXXXXX.XXXXXXXXXXXXXX.XXXXXXXXXXX.XXXX", "XXXXXXXXXXXX..XXXX.XXX.XXX.XXXXXXXXXXXXX.XXX.XX.XX", "XX.XXXXX..XXXX..X..X.X.XXXXXXXXXXXXXXXXXXX..XXXXXX", "XXXXXXXXX.XXXX.XXXXXXXXXXXXXXXXXXXXX.XXXX.XXXXXXX.", "X.XXXXXXXXXXXXX..XXXXXXXXX.XXX.XXXX.XXXXXXX.XXXXXX", "XXXXXXXX.XXX.XXXXXX.X..XXX.XX.XXXX.XXXXXXXXXXXXX.X", "XX.XX.XX.XX.XXXXXXXX.XXXXXXX.XXXXXXX.XXXX..XX.X..X", "XX.XXXX.XXXXXXXXXXXXXXXXXXXXXXXXX.XX.XXX..XXXXXXXX", "XXXXXXXXXXXXXXX.XX.X..XXXXXX.XXXXXX.X.XXXX.XX..XXX", "XXXXXX.XXXXXX..XX.XXXXXXXXXX.XX.XXXXXXXXXXXXX..XXX", ".XXXXXXX.XX.XXXX.XXXXXXXXXXXXXXXXXX..XXXX.XXXXXXXX", ".XXXXXXXXXXXX.XXXXXXXXXXXXXXXX.XXXXXXXXXX.XXXXXXX.", "XXXXXXXXX..XXX.XXXXX.XXXXXXXXXXXX.XXXXXXX.X.XXXXXX", "XXXXXXX.XXXXXXXXXXXXXX..X.XXX.XXXXXX.XX.XXXX..XXXX", "XXXX.XXX..XXX.XXXX.XXXXXX.XXXXXXXXXXXXXX.X..XXXXXX", "XXXXXXXXXXX.XXXXX.XX.XXXXXX.XXXXX.XXXXXXXXXXXXX.XX", "XXXXXXXXXX.XXXXXXX..XX..XXXXXXXXXXXXXXXXXXXXXX.XXX", "XXX.XXX.XXXXXX.XXXXXXXXXXXX.XXXX.XX.X...XXXX.X.XXX", "XXXX.XXXXXXXX.X.XXXXXXXXXX.XX.XXXXX.X.XXXXXXXXXXXX", "XXXXXXX..XXXX.XXXXXXXXX.XXXXXX.XXXXXXXXX.XXXXXXXXX", "XXXXXXXXXXXXXXX..XX..XXXXXXXXXXXXXXXX.XXXX..X.XXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> grille = {"XX", "XX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".X", "XX"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> grille = {"XXXXXXXXXXXXX.", "XXXXXX.XXXXXXX", "XXXXXX..XXXXXX", "XXX.XXXXXXXXXX", "XX..X.XXXXXX.X", "XXXX.X.XXXXXXX", ".X.X..XXXXX.XX", ".X.XX.XX.XXX.X", "XXXXXXXXXXXXXX", "XXXXX.X.X.XXXX", "XXXX.XXXXX.X.X", "X.XXXXX.XX.XX.", ".XXXXXXXXX.XX.", "X.X.XXXXXX.X.X"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> grille = {"X.XX", "XXXX", "XXXX", "XXX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X.XX", "..XX", "XXXX", "XXX."};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> grille = {"XXXXXXX..XXXXXXX", "X.XXXXX......XXX", ".XX..XXX.XXX.XXX", "XXXX.XXXXXXXXXXX", "XXXXXXX.XXXXXX.X", "XXX..XXXXX..X.X.", ".XXX.XXXXXX.X.XX", "XXX.X.XXXX.X.X.X", ".XX.XXX.XXXX.X.X", "XXXX.X.XXX.XXXXX", "XXXXXXXX.XXX.XX.", "X..XXXXXXXXXXX..", "XXX.XXXX.XXXXXXX", "XXXXX.XXXXX.XXXX", ".XX.XXXX.X.XX..X", "XXXX.XX.X.XX.XX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> grille = {"XX.X.XX.", "X..XX.XX", "XX.XXXX.", "XX.XXXXX", "XXXXX.XX", "XXXXX.X.", "XXXXXXXX", "XXXXX.XX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> grille = {".XXXXXXXXXX.XX.XX...XX.X.XXX", "XX.XXX..XXX.XXX.XXXXX..XXXXX", "X..XXXXXXXXXX.X....XXXXXXXX.", "XXXXX.XXXX.X.XXXXXXXXXXXXXXX", "XXXX.XXXXX.XXXXXXXXXXXXXXXXX", ".XXXX.XXXXXXXX.XXXX.XXXXXXXX", "XX..XX..XX...XXXXXXXXXXXXXXX", "XX.XXXXXXXX..XX.XXXX.XX.XXXX", "XXXXXX.X.XX.X.XXXXXXXX.XXXX.", "XXXXX.X..XXXXXXXXXX.XXXX.X.X", ".XXXXXX.X.XXX.XX.XXX..XX.XXX", "XX.XXX.XXX.XXX..XXXXXXXX.XXX", "X.XXXXXXXX.XXXXXXXXXXXXXXX.X", "XXXXXXX.XXXX..XXXXXXXXXXX.XX", ".XXXXXX...XXX...XXXXXXXXXX.X", ".X.XXXXXXXXXXXXXX..X.XXXXXXX", "XXXXXXXXXXXX.XXXXXXXXX.XXXXX", "XXXXXXXXXXXXXXXXXXXXXX.XXXXX", "XXX.XXX..XXXX.XXXXX.XXXX.XXX", "XXXXXXXX.XXXXXXXXXXXXX.XXXXX", "XXXX.XXXXXXXXXXXXXXXXXXXXXXX", "XXXXX.X.XXXXXXXXXXXXXXXXXX.X", "X.XXXX.XXXXXXXXX.XXXXXXXX.X.", ".X.XXXXXXXX.XXXXXXXXXXX..X.X", "X.XXXXX.XXX..XXXXXXXX.XXXXX.", "..XXXXXXXXX..XXXXX.XXXXXXXX.", ".XXXXXX.XX.XX.XXX.XXXXXXXXXX", "XX.X.XX.XXXXXXXX.XX..X.XXXX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> grille = {"XXXXXX", ".XXXXX", "XXXX..", "XXXXX.", "XXX.XX", "XXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> grille = {"XXXXXX.XX.XX", "XXX.XX.XXXXX", "XXXX.XXXXXX.", "XXXXXXXXXX.X", ".XXXXXX.XXXX", "XXXXX.XXXXXX", "XXX.XXXXXX.X", "XXXXXXXXXX..", "XXXXX.XXXX.X", ".XXXXXXXXXXX", "XX.XXXXXXX.X", "XXXXX.X.XXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> grille = {"XXXX.XXXXXX.XXXX..XXXXXX.XXXXX", ".XXXXXXXX.X.XX.XX.XXXXXXX.X.XX", "XXXXXX.X.XXXX.XXXXXXXXXXX.XXXX", "XXXXXXXXXX.XXXXXX.XXXXXXXXXX.X", "XXXXX.XX.XXXXXXXXX.XXXXXXXXXXX", "XX.XXX.XXXXXXXXXXXXX.XXX.XXXXX", "XXXXX..XXXXXXXX.X.X.XXXXXXXXXX", "XXXXXXXXXXX.XX.XXX.XXXXXXXXXXX", "XXX.XXX.XXXX.XXXXXXXXXXXXXXXXX", "XX.XXXXXXXXXXXXXXXXX.X..XXXXXX", "XX.XXX.XX.X.X.XXXXXXXX..XXX.XX", ".XXX.XXXXXXXX....XXX.XXXXXX.XX", "XX.XXXXXXXXXXX.XX.XX.XXXXXXXXX", "X.XXXXXXXX.XXXXXXXXXX.XXXXXXX.", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXX....XXXXXX..XXXXX.X...X", "X.XXXXXXXXXXXXXXXX.XXXXX..XXXX", "XX..XXXXXXXXX.XXXXXXXXXXXX.XXX", "XXXXX.XXXXXXXXX..XXXXX..XXXXXX", "XXX.XX.X.XXXXXXXXXX..X..XXX..X", "XXXXXXXXXX.X.XXX.XXX.X.X.XXXX.", "XXXXXXX.XXXXXX.XXXX.XXXXXXXXXX", "XX.XXX.XX.XXXXXXXXXXXXX.XXXXXX", "X.XXX..XX..XXXX.X.XXX.X.XXXXXX", "XXXXXXXXX..XXXXXXX.XXXX.XXX.XX", "..XXXXXX.XXXXXXX.XXXXXXXXXXXXX", "XXXX.XXXXXXXX.XX.XXXXX.XXXX.XX", "X.XXXXXX.XXXXXXXX.XXXXXXXXXXXX", "XX..X.XXX.XXX.XXXXXXXXX.X.X..X", "XX.XX.XXXXX.XXXXXXX.XXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> grille = {".XXXXX.XXXXXXXXXXXX..XXXXXX.XX.XX.", "XXXXXXXXX.XXXXXX.XXXXXX.XX.X.XXX.X", "X.XXXXXXXXXXXXXXXXX.XXXXXXXXX.X.XX", "X..XXXX.XXXXXXXXX.X.XXX.X.XXXXX.XX", "XX.XXXXXXXXXXXXXX.XXXXX..XXXXXXXXX", ".XX.X.X..X.XXXXXXXXXX.XXXXXX.XXXXX", "XXXXXXXXX.XX.XX.X.XX.XXXXXXXXXXXXX", "XX.X.XX.XXXXXX.XXXX.XX.XXXXXXX.XXX", "XXX..X.X.XXXXXXXXXX.XXX.XXXXXXXXXX", ".X..XXXXXXX.X.X.XX.X.XXXXXXXXXXXXX", "X..X.X.XXXXXXXXXXXXXXXXX..XXX..XX.", "X.XXX.XXXXXX.XX.XXXX.X.XX.XXXX.X..", "XXXX..XXXX..XX.X.XXXXXX.X.XXXXXXXX", "XX.XXXXXXX.XXXXXXXXX.XX.XXXXXXXXXX", "XXXXX.XXXX.XXX..XXXXXXXXXX.XXXXXX.", "XXXXXXXXX..XXXXXXX...XXXXX.XX..XXX", "XXXXXXXXXXXXXXX.XXXXXXX.XX.XXXXXXX", "XXX.XXX.XXX.XXXXX.XXX..XX.XX.XX.XX", "XXXXXX.XXXXXXXXX.X.XXXXXXXXXXXXXXX", "XXX...XX.XXXXXXXXXXXX.X.XXXXXXXX.X", "X..XX.X.XXX.X..X.XXXXXXXXX..X..XXX", "X..XX..XX...XXXXXXXXXXXXXXXXXXX..X", "XXXX.XXX.XX.XXXXXXXX.XX.XX..XXXXXX", "X.X..X.XX.XXXXX.XX.XX.XXXXXXXXXX.X", "X.XXX.XXXX.XXXXXX.X.XXX.XXX.X.XX.X", "XXXXXXXXXXXXX...XXXXXXXXXXXX.XXXXX", "XXXXXXXXXX.XXXXXXX.XXXX.XX.XXX.X.X", ".XXXXX.XXXXXXXX.XXXXXXXXX.XXX.XXX.", ".XXXXXX.XXXXX.X..XXXX..XX.XX.X..XX", "XXXXXXXXXXXXXXX.XXXX.X.XXXXXXXX.XX", "XXXXX.XXXXXX..XX.X..XXXXX.XX...XXX", "XXX..XXX.XXX..XXXXXXXX.XXXXX.XXX.X", ".X.XXXXXXXXXXXXXXXXXXXXXXXX.XXXXXX", "XXX.XX.XXXXXXXX..XXX.XXX.XXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> grille = {"X.X.XXXXXXXXXXXXXX.XXX.XX.XXXXXXXX.X", "XXX.XXXXXXXXXXXXXXXX.XXXXXXXXXXXX.XX", "XX.XXXXXXXXXXX.XX.XXXX.XXXXXXXXXXX.X", "XXXXXXX.XXXXX.XXXXXXXXXXXX.XX.XXXXX.", "X.XXXXXXXXXX.X.XXXXXXXXXXXXXXXXX..XX", "XXXX.XXXXXXXXXXXXXX.XXXXXXXXXXXXXX.X", "XXXXXXXXXXXXXXXXXX.XX.X.XXXX.XXXX.XX", "XXXXXXXXXXXXXXXXXX.XXXXXXXX.XXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX.X.X.XXXXX.XXXX", "X.X.XXXXXXX..XXXXXXXXXXXXXXXXXXXXXXX", "XXXXX...XXXXXXXXX.XXXXXXXX.XXXXXXXXX", "..XXXXX.X.XXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXX..XX.XXXX.XXXXXX..XX.", "XXXXXXXXXXXXXXXX.XXXX.XXXXXX.XXXXXX.", "XXXXXXXX.XX.XXXXXXXXXXXXXXXXX.XXX.XX", "XXXXXXXX.XX.XXXXXXXX.XXXXXXX.XXXXXXX", "XXXXXXX.XXX.XX.X.XXXXX.XXXXXXXXXXX.X", "X.XXXX..XXXXX.XX..XXXXXXXXXXXXXXXXXX", "XXXX..XXXXXXXXXXXXX.XXXXXXX.XXXXXXXX", "X.XXXX..XXXXXXXXXX.XXX.XXXXXX..XXXXX", "X.X...X.XXXXXX.XXXXXXXXX.XXXXXXXXXX.", "XXXXXXX.XXXXXXXX.XXX.XXXXXXXXXXX..XX", "XXXXX.XXXXXXXXXXXXXXXXX.XX.X.XXXXXXX", "XX.X.XXXXXXXXXXX.XXXXXXXXX..XXXXX.XX", "XXX..XXXX.XXXXXX.XXXXXXXXXX..XXXXXXX", "XXXXXXXXXXXXXXXXXXXX.XXX.XX.XXXXXXX.", "XXXXXXXXXX.XXXXXX...XXXXXXXXXXXXXX.X", "XXXXXXXXXX.XXX.XXXXX.XXXXXXX.XXXXXXX", "XXXX.XXXXX.XXXXXXXXXXXXXXXXXXXX.XXXX", "XXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX", "X...XXXXX.X.X.XXXXX.XXXXXXXXXXXXXXXX", "XXXXXXXXX.XXX...XXXXXXXXXXX.XX.XXXXX", "XX.X.XXXX.XXXXXX..XXXXXXXXXXXXXXXXXX", "XXXX.XXXXXXXXXX..X..XXXX.XXXXXXXXXXX", "XXXXX.XXXXX.XXX.XX..XXXX..XXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> grille = {".XXXXXXX.XXXX.XXXXXX.XXXX.X.XXXXXXXX.X.XXX.X.X.XXX", ".X.XX.X.XXX.XXXXXXX.XXXXXXXXXXXX.XXXXXXXXXXXXXXXXX", "XXXXXXX.XXXXXXXXXXXX.X.XX.XXXXX...XXXXXXXX.XXXXX.X", "XXXXXXXX.X.XXXXXXXX.XXXXXX.XXXXXXX.XXXX.X.XXXXXXX.", "XXX.XXXX.XXXX.XX.XX.XXXXX.XXXXXX.XXXXXXXXXXXXXX.XX", "XXX..XXXXXXXXXXXXXXXXXXXXXXX.XX.X.XXX.XXXXX..XXXXX", "X.XXXX.X..X.XXXXXXXXX.X..X.XXXXXX.XXXXX.XXXXXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXX...X.XXX.XXXXXXXXXX.XXX.", "XXXXXXXXX.XXXXXX.XXXX.XXXXXXX..XX.XXXXXXXXXXX.XXXX", ".XX..XXX..XXXXX.XXXX...XXXXXXXX.XXX..XXXXX.XXX..XX", "..X.XXX.XXXXX.XX..XXX.XXXXXX.XXX...XXXXX.XXXXXXXXX", ".XXXXXXXXXXXX.XXXX.XXXXX..XXX.XXXX.X.XXXXXXXXXX.XX", "XX.XXXX..XXXXXX.XXX.XX.XXXX.XXXX.XXXXXXXX..XXXXXXX", "XXXXXXXX.X.X.XXX.XXXX.X..XXXXXXXXX..XXXXXXXXXXXX.X", "XXXXXX.XXXXXXXX.XXXXX.XXXXXXXXXXXX.XX.XXXXXX.XXXX.", "XXX.XXXXX.XXXX..X.XXXXXXXXX.XXX.XXX.XXXXX.XX.XX.X.", "XX...XXX.X.XXXX.XX...XXXXXXXXX.XX.XX.XX.X.XXXXXXXX", "XXXXXXXXXXX.X..XXXXX.XXXXXXX.X.XXXXXX..X.XXXXX..X.", "XXXXXXXXXXX.XXXXX..XXXX.XXX.XXXXXXXXXXXXXXXXXXXXX.", ".XXXXX..XXX.XXXXXXXXXXXXXX.XXX.XX.XX....XXX.XXXXX.", "XXXXXXXXXXXXX.XX.XXXXXX..XX..XX.XXXX.X..XXXXX.XXXX", "XXXXX.XXXXXXXX..XXXXXXXXX.XXXXX.X..XXXXXX.XXXXXX.X", "XXXXXXXXX.XXXX.XX.XXXXX.XX..X.XXX.XX.X..XXXXX.XXXX", "XXX.XXXXXX.X..XXXXXXXXXXXXX.XX.X..XXXXXXX.X.X.X.XX", "X..XX.XXXXXXX.XXXXXXXXXXXXX..XXXXXXXXX.XXXXXX.XXXX", "XXXXXXXXXXXX.X.XXXXXX..XXXXX.X.XXXXXXX.XXXXXXXXXXX", "XXXXX...XXX.XXXXXXXXXX.X.XX.XX.XXXXXXXX...XXX.XXX.", "XXXX.X.X..X.XX..XXXXXXXXXXXXXX.XXXXXXXXXX....XX.XX", ".XXXX.XXXXXX..XXXXXXXXX..X.XX.XX...XXXXXXX.XXXXXXX", "XXXXXXXXXXX...XXXX..XXX..X.XXXXXXXXXXX.XXX.XX.XXXX", "XXXXXXXXXXX...XXXX.XXX..XXXXXXXXX.XX..XXXX.XXXXXXX", "XXX....X..XXXXX..XXXXXXXXXX.XXXX..XXXXXX.XXXXXXXXX", "XX.X.XXX.XXXXXXXXXXXX.XX.XXXXXX.XXXXX.X..XXXXX.XXX", "XX.XXXXXXXXXXXXXXX.XXX.XXXXXXXX.XXXXXX..XX.XXX.X..", "XX.XXX.XXXXXXXX..X.X.XX.XXX.XXX.XXX.X.X.XXXXX.X.XX", "XXXXXXXX.XXXXXXXX..X..XXXXX....X..X.XXXX.XXXX.X.XX", "XXX....XXXXX.X.XXXXXXX..X.X.XXXXXXXXXX.XXXXXXXX.XX", "XXXXXXX.XXX...XXXXX.XXXXXX..X.XXXX.XXX...XX.XX..XX", "XXXX..X..XXXXX..XX.X..X..XXXXXX.X..XX.XXXXXXXX.XXX", "XXXX..X.XXX.XXXXXXX.XXXX.XXX...X.XXX....X.XXXXX..X", "XXXXXXXXXX...X.XXXXXXXXX.XXXXXX.XXX.XXXXXXXX..X.XX", "XXX..XX.XXXX.XX.X..XXXX.XXXXXX.XXXXXXXX.X.X..XX.X.", "XXXXXXXX.X.XXXXXX..X.XXXXXX...XXX.XXXXXXX.XXX.XXX.", "XXXX...XXX.XXXXXXXX.XXXX.XXXXXXX...XXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX..XX..X.XXX.XXXXXXXXXXXXXXX.XXXX", ".XXXX.X.XX.XXXXXXX.XXXXX.X.XXXXXXX.XX.XXXXXXXXXXXX", "XXXX.XXXXXXX...XXXXXXXXXXXXX.XXXXXXXX.XX.XXXXXX.X.", ".XXX.XXX.XXXXXXXXXXXXXXXX.XXX.X.XXX.XXXXXX.XXX.XX.", "XXX.XXXXXXXX.X.X...X..XXXX.X.XXXXXXXX..XXXX.XX.XXX", "XXXXXX.XXXX....XXXXXX..XXXXXXX.XXX.XX..XXX.XXXXX.X"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> grille = {"XXXXXXXXXX.XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXX.X.", "XX.XXXXX..XXXX.XXXXXXXXXXXXX.XXXXXXXXX.XXXX.XXXX", "XXXXXXXXXXXXXX.XXX.XXXXXXX.XXXXXXXXXXX.XXXXXXXXX", ".XXXXXXXXXXXX..X.XXXXXXXXXX.XXXXXXXXXXXXX.XX.XXX", "XXXXXXX.XXXXXX.XXXXXXXXXXXXXXX.X.XXXX..XXXXXXXX.", "X.XXXXXXXXXXXX.XXX.XXXXXXXXXXXXXXXXXXXXXXXX.XXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX..XXXX.X.XXXXXXXXXXXXX", "XXXX.XXXX.XXXXXX..X.XXXXXX.XXXXXXXXXXX.X.XXX..XX", "XXXXX....XXXXXXXXXXXXXXXXX.XXXXX..X.XXXXXX..XXXX", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XX.XXXXXXXXXXXXXXXXX.XXXXXXXXXXX.XXXXXXXXXX.XXXX", "XXXXXXXXXXXXXXXXXX.XXXXX.XXXXXXX.X.XXXXXXXXXXXXX", "XX..X.X.XXXXXXX.XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXX.", "XXX.XXXXXXXXXXXXXXX.XXXXXXXXXXXXX.XXXXXXXX.XXXXX", "X.XXXXX..XXXXXX..XXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXX.XX.XXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXX", "XXXXXX.XXXXXXXXXXXXXXXXXXXXX.XXXXXXXXX.XXXXXXXXX", "XXX.XXXXXXX.XXXXXXXXXXXXXXX.XXXXXXXXXXXX.XXXXXXX", "XXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "XXXXX.XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXX..XXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXX.XX.XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXX.X..XX.XXXXX.XXX.XXXX.X", ".XXX.XXXXX.XXX.XXXXXXXXX.XXXXXXXXX.XXXXX.XXXXXX.", "XXXXXXXXXXX.XX.X.X.XXXX.XXX.XXXXXXXXXXXXX.XXX.XX", "XXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX..XXX.XX.XXXX..", "XXXXXXXXXXXXXX.XXXXXXXXXXX.XXX.XXXXXXXXXXXXXXXXX", "XXXX.XXXX.XXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXX.XXXXX", "XXX..XXX.X.XXXXXXX.XXXXXXXXX.XXXXXXX.X.XXXXXXXXX", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXX.XXXXXXXX.", "XXXXXXX.XXXXXXXX.X.XXXXXXXXXXXX..XXXXXXX.XX.XXXX", ".XXX.XXXXXXXXXXXXXX.XXXXXXX.XXXXXXXX.XXX.XXXXXXX", "XXXXXXXX.XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXX", "XXXX.XXXXXX.XXXXXXXXXXX.XXXX.XX.XXXXXXXX.XXXXXXX", "XXXXXXXX.XXXXXXXXXXXXXXXXXXXX.X.XXXXXXXX.XXXXXXX", "XXXXX.XXXXXX.XXXXX.XXXXXXXXXXXXXXXXXXXXX.XXXXX.X", "XXXX.XXXXXXXXXXXXXX.XXX.XXXXXXX.XX.XXXXXXXXX.X.X", "XXXXX..XXXXX.XXXXXXXXXXXXXX.XX.XXXX.XXXXXXXXXXXX", "XXXXXXXX.XXXXX.XXXX.XXXXXXX.XXXXXX.XXXXXXXXX.XXX", "XXXX.XXXXXXX.X..XXXXX.XXXXXXXXXXXXXXX.XXXXXX.XXX", "XXXXXXXXXXX.XXXXXXXXXX.XXXXXXX.XXXXX.XX..XXXXXXX", "XXXXXXXXXXXXX.XXXXX.XX..XXXXXXXXXXXXXXXXXXXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXX.XX.XXXXXXXXXX.XXXXXXX.XX", "XXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXX.XXXXXX.", "XX.XXXXXXX.XXXXX.XXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", ".X..XXXXXXXXXXXXX.XXXXXXXXXXXXXXXXX..XXXXX...XXX", "XXXXX.XXX.XXXXX.XXX.XX.X.XXXXX.XX.X.XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX.XX.XXXXXXXXXXXXXXX.X."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> grille = {"XXXXXX..X...X.", "XXX.X.XXXXXXXX", "X.XX.XXXXXXXXX", "XXXXXX.X..XXXX", "X..XXXX...XXXX", "X.XXXXXXXXXXXX", "XXXXXX.XXXXXXX", ".XXXXXXXXXX.XX", "XXXXX..XX.X.XX", ".XXXXXX.XXXXXX", "XXXXXXXXXX.XX.", "XXXXX.XX.XX..X", "XXXXXXXXXXXX.X", "X.XXXXXXXX.XXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> grille = {"XXX.XXXX", "X.XXXXXX", "XXX.XXXX", "X.XX.XXX", "X.XX...X", "X.XXXXXX", "XXXXXXXX", "XXXXX..X"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> grille = {"X.XXXXXXX.XXX.XXXXXXXXX.", "XXXXXXXX.XXXX.X.XXXXXXXX", "XXXXXXXXXXX.XXXXXXXXX.XX", "XXX.XXXXXXXXX...X.XX.X..", ".XXXXXXXXXXXXXXX..XX.X.X", "XXX.XXXXX.X.X.XXXXXX.XXX", "X.XXXXXX.XXXXX...XXXXX.X", "XXXXXXX.X.XXXXX.X.XXXXXX", "X.XX.XXX.XXXXXXXX.XXXXXX", "XXXX.XXX.XXXXXXXX.XXXXXX", "XXXXX.XX.X.XXXX.XXX.XX.X", "XXXX.X.XXXX.X.XXXXX.XXXX", "X.XXXXXX.XXX.X.XXXX.XXXX", "..XXXXXXXXXXXXXX..XXXXX.", ".XX.X.XXXXXXXXXXXXXXX.XX", "XX.XXXXXX.XX.XX.XX.XXXXX", "XXXXX.X.XX.X.XXXXXXXXXX.", "XX.XXXX.XX.XXXX.XX.X.X.X", "XXXXXX.X.XXXXXXXXX.XXXX.", "..XXXXXXXXXXXXXXXXX.XXXX", "XX..X.XXX.XXXX..X.XXXXXX", "XXXXXXX..XXXXXX.XXXXXXX.", "X.XXXXXXXXX.XXXXXXXXXX.X", "XXXXXX..XXXXXXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> grille = {"XXXXXXXX", "XX.XXXXX", "X.XX.XXX", "XXXXXXXX", ".X.XXXXX", "X.XXXXXX", "X.XXXXXX", "X.X.XX.X"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> grille = {"XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXX", "XX..XXX...XXXXXXXXXXX.XXXX.XXX.XXX", "XXXXXXXXXX.XXXXXXXXX.XX.XXXXXXXXXX", "XXXXX.XX.XXXXXX.XXXXX.XXXXXX.X.X.X", "XX.X.XXXXXX.XXXXXXXX.XXXX.XXX.X.XX", ".XX.XX.X.XXXXXXXXXX.XXXXXXXXXXXXXX", "XXXXXX..XXXXX.XXX.XXXXXXXXXXXXXXXX", ".XXX.XX..XXXXXXXXXXXXX.X.XXX.XX.XX", "XXXX.XXXX.XXXX.X.X.XXXX.XXX.XXXX.X", "X.XXXXXXX.XX.XXX.XXX..XXXX.XX.X.XX", "XX.XXXXXXX..XXXX.XX.XXXXXXXXXXX.XX", ".XX.XX.XX.XXXXXXXXXXXXXX..XXXXX...", "XXXX.X.XX.XXXX...XX.XX.XX.X.XXXXXX", "XXXXXX..X.XX..XXXXXXXXXXXX.XX.XXXX", "XXXXX...XXXXXXXXXXXXXXXXXXX.XXXX.X", "..XXXXXXX.XXXXX.XXXXX.X.XXXXXXXX.X", "X.XX.XX..XXXXXXXX.XXX.XXXX.XXXX.XX", "XXXXXXXXXXXX.XXXXXXXXX..XXXXXXXXXX", "XX.XXXXXX.X.XXXXXX.XXXXXX.XXXXXXX.", "..X.XXXXX.X.XXXXXX..X.X..XXXXXXXXX", "XX.XXXXXX.XXXX.X..XX.XXXXXXX.XXXXX", "XX.X.XXXX.XXX.XXXXXXXXX.XXXXXXXXXX", "..XXXXXXXX.XXXXXXXXXXXXXXXXXXXX.XX", "XXXX.XXXXXXXXXX.XXXX.XXXXXXXXXXXXX", "XX.XXX.XXX.XXXXX.XXX..XXXXXXX.XXXX", "X.XXX..X.XXX.XXXXXXXX.X.XXXX.X...X", "..X..XXXXXXXXXXX.XXXXXXXXXX.XXXX.X", "X.XX.X.XXX.X.XX.X.XXX.XXXXXXXXXXX.", "XXXXXX..XXXXXXXXX.XXXXXXXX..XXXXX.", "XXXXXXX.X.XXXX..XX.XX.X.XXXXXXX.XX", "XXXXXXXXXXXXXXXXXX..XXX.XXXXX.X.XX", "X.XXX.XX.XXXXXXX..X.XX.XX.XXXXXXXX", "XXX.XXXX.XXXXX.XXXXXXX.XX.X.XXXX..", "X.XX.XXXXXXXX.XXXXXXXXXXXXXXX..XXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> grille = {"..XXXXXXXXXXXXXXXXXX.XX.XX.XXXXXX.X.XX", ".XXXXXXXXXXXXX.XXXXXXXXXXXXX.XXXXXXXXX", "XXXXXXXX.XXX..XXXXXX.X..XXXXX.XXXXXX.X", ".XXX.XXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXX", "XXXXXXXXXXXXX.XXXXXX.XXXXXXXXXXXXXXXXX", "XX.XXX.XXXXXX.XXX.XXXXXX.XXX...XX.XX.X", "XX.X.XXXXXXX.XXXXX.XXXXX..XXX.XXXXXXXX", ".XX.XXXXXXX.X.X.XXXXXXXXXXXX.XXXX..XXX", "XXXXXXXXXX.XXXXXX.XXXXXXXXXXX.XXXXXXXX", ".XXXXXXX.XXXXXXXXXXXXXXXXXXXXXXX.XXXX.", "XX..XXXXXX.XXXXXX.XXXXX.XXXXXXXXX.XXXX", "XXXXXXXXXXXXX.XX.XX.XXXXXXXXXXXX.XXXX.", "XXXXXXXXXXXXX.XXXXXXXXX.XXXXX.XXXXXXXX", "XXXXXX.X.XXXXXXXXXXXXXXX.XXXXXXXXXXXXX", "XXXXX.XXXXXXXXXXXXXXXX.XXXXXXX.XXX.XX.", "XXXXXXXXXXXXXX.XXXXX.XXXXXXXXX.XX.XXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXX.XXXXXXXX.XXXXXXXXX..XXXXXXX", "..XXXXX.XXXXXXXXXXXXXXXXXXXXXXXXX..XXX", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXX.X.XXXXXXXXXXXXXXXXX.XXXXX.XXX.X", "XXX.X.XX..XX.XXXXXX.XXXX.XXXX.XXXXXXX.", "XXX.XXXXX.X.X.XXXXX.XXXXXXXXXXXXXXX.XX", "XXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXX.XXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXX.XXXXX", "XXXXXX.XXXXXXXXXXX.XXXXXXXXXXX.XXXXXXX", "XXXXX.X.XX.XXXXXXX..XXXXXXX.XXX.X.XXXX", "XX.XXXX.XXXXX.X.XXXX.XXXX..XXXXX.XXX.X", "XXXX.XX...XXX.XXXX...XXXXXXXXXXXX.XXX.", "XXXXXXXXXXXX.X.XXX..XXX..XXXXXX...XXXX", "X.XXX.XXXXX..XXXXXXX.XXXXXXXXXX.XXXXXX", ".XXXXXXX.XXXXXX.XXXXX.XXX.X.XXXXXXXXXX", "XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXX.XXXX.XXXXXXXXXX.XXX.XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X..XXXXXXXX.XXX.XXX.XX.XXXXXXXXXXXXX..", "XX.XXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXX.XXX..XXXXXXXXXXXXXXXX..XX.XX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> grille = {".XXXX.XX.XXXXXXXXXXX..XX", "XXX.XX.X.XXXX..XXXXXXX.X", "XXXX.XX.X.XX.X.X.XX.XXXX", "XXXX..XXXXXXXXXXXXXX..X.", "X.X.XXX.XX.XXXXXXXXX.X.X", ".XX..X.XXX.XXXX..X...XXX", "XXXXXXXX...XX.X...X.X..X", ".XX.XXX.XXXXXXXX..XX.X..", "XXXXXXXX.X.XXXXXXXXXX.XX", "XX.XXXXX.XXX.XXXXXXXXXX.", "XXXXX.XXXXX.XXXXX.XX.XXX", "X.XXXXX.XXXX.XXXXXXXXXXX", "XX.XXXXXXXX.X.XXXXXXX.XX", ".XX.XXX.XXXXXXX.XXX..X.X", "......XX.X.XXXXXX.X.XX.X", "X....XXXX.XX..XX..XXXXXX", "XXXXXX.XX.XX.XXX..XXX.XX", "XXXXXXX.X.X.XXXX.XXX.XXX", "XX.XXXXXX.X..XX.XXXXXXXX", "XXXXXXX.XXX.X.XXXX.XX..X", "XXXXXXX.XXXX.X.XXXXXX.XX", "XX.XXXX.XXXXXX.X..X..X..", "XX.XXXXXX.XXXXXXX.X..XXX", "XX..XXXXXXXXXXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> grille = {"XXX.XXXXXX.XXXXX", "X.XXXXXXXXXXXXXX", "X.XXXXXX.XXX..XX", ".X.X.X.XXXXX.XXX", "XXXXXX.XX..X.XXX", "XXXXXXX.X.XX.XX.", "X.XXXXX..XXXXXXX", "XXX.X.X.X.XXXXXX", ".X.XX.XXX.X.XXXX", "XXXXXXXXXXX.XX.X", "XX.XXX..X.X.XXX.", "XXXXXXX.XXXXX.XX", "XXX.X..XXXX.XXXX", "XXX.XXXXXXX.XXXX", "XX.XXX.XXXXXXXXX", ".X.XXXXXXXXX.X.X"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> grille = {"XX.XXXXXX.XXX.XXXXXX", "X.XXXX...XXXXX..X.XX", "X.X.XXXXXXXXXXXXXXXX", ".X.XXXX.XXXXXX.XXXXX", ".XXXXXXX..XX.XXXXXXX", "XXXXXXX.X..XXXXX.XXX", "XXXXXXXX.XXXX.X.X.XX", ".X.XXXXXXXX..XXXXXX.", "XXXXX.XXXXXXXX.XX.XX", "XXXXXXXX.XXX.XX.XXXX", ".XX.XX.XX.XXXXXX..XX", "XX.XXX.XXXXXXXX.XXXX", "..X..XXXXX.X.XXXXXXX", "XX.XXXXXXXXXXXXX.XXX", "X.X.XXXXXXXXX..XXXXX", ".X.XX..XXXXXXXXXXX.X", "XXXXXXXXX.X...XXXX..", "X.XX.X.XX.XXX.XX.XX.", "X..XXXXXXX..X.XXXXXX", "XXX.XX.XXXXXXXXX.X.X"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> grille = {"XX.XXXX..XXXXXXX..XX..XXXXXXXX", "XXXXXXXXXXXXXXX..XXX.XXX.X.XXX", ".XXXXXXXXX..XXXX.XX.XXXXX.XXXX", "XXXX.XXXXXXXXXXXXXXXXXX.X.XXXX", "XXXX.XXXX.X.X...XXXXXXXXXX.XXX", "XXXXXXXXXXXXX.XXXX.X.XX.XXXXXX", "XXXX.X.XXXXXXXXXXXX.XXXXX.X.XX", "..XXXXX.XXX..XXX.XXXX.XXXXXXXX", "XXXXXXXXXX.X..XXXXXXXXXXXXXXXX", "X.XXXXXXX..XXXXXXXXXXXX..XXXXX", "XXXXXXXXXXXXXXX.X..XXXXXXXXXXX", "XXXX.X.XX..XX.XXXXXXXXXXX..XXX", ".X.X.XXXXXXX.XXXX.XXX.XXXX.XX.", "XXXXXXXXX..XXXXXX.XXXXXXXXXXX.", "XX.XXXXXXXXXX.XXXX...X.XXXXXX.", "XXXX..XXXXX.XXXXX..XXX.XXXXX.X", "XXX..XXXXXXXXXXXXX.XXXX.XXXXXX", "...XXXXXX.XXXXX.XXX.XXXXXX.XXX", "XXXXXXXXXX..XXXXXXXXXX.XXX.XXX", "XXX.XX..XXXXXXX.X.XXXXX.XXXXX.", "XX..XX.XXX.XXXXXXXXX.XXXXXXXXX", "XXXXXXXXX.X.XXXXXXXXX.XXXXXXX.", "XXXXXXX.XXX.XXXXXXX.XXXXXXXX.X", ".X.X.XXXX.XXXX..XXXXX.XXXXX..X", "XXXXXXX.X.XXX.XXXXXXXXXXXX.XXX", "XXXXXXXXXXXXXXXXX.XX.XX.XXXXXX", ".XXX.XXXXXXXX...XXXXXXXX.X.XXX", "XXX.XX.XXX.XXXXXXXXXXX.XX.XXXX", "XXXXXXXXXXXXXX.XXXX.XXXXX.XX.X", "XXX.XXXXXXXXX....XXX..XXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> grille = {"X.XX.XX.", "XXXXX.XX", "X.XXX.XX", "X..XXXXX", "XXXXXXXX", "..XXXXXX", "XXXXXXXX", "XXX.X.XX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> grille = {"X.XXX.XX.XXX.XX.XXXXXXXXX..X.XXX.XX.", "XXXXXXXXXXX.XXXXXXXXXXXXXXX.XX.XXXXX", "XXXXXXXXXXXX.XXXXXXXX..XXXXXXXXXXXXX", "XXXX.XXXXXX.XXXX.X.XXXXXXXXXXXX.XX.X", "..XXX.XXXXXXXXXXXXX.XXXXXXXX..XX..XX", ".XXX.XXXXXXXX.XXX.XXXXXXX.X..XXXXX.X", "XXXX.XXXXXXX.XXXX.XXXXXXX.XXXXXXX.XX", "XXXXXX..XXXXXXXX.XXXXXX.XX.XXX.XXXXX", ".XXXXXX.XXXXXXXX.X.XXXXX.XXXX.XXXXXX", "XXXXXXX...XXXXXX.XX.XXXXXXXXXXX.X.X.", "XXXXXXXXXXXXXX.XXXXX..XXXXXX.XXXXXXX", "XXXXXXXXX..X.XXXXXXXXXXXXXXXXXXX.XXX", "XXXXXXX.XXXXXXXXXXXXXXXXXXX.XX.XXXXX", "XXXXXXXXX.XXXXXXX.XXXXXXXXXXX.XXXXXX", "XXX..XXXXXXXXXX.XXXXXXXXXXXXXXX.XXX.", "XXXXXXXXXXXXXXXXXXXXXXXX...XXXXXXX.X", "X.XXXXXX.XXXXXXXXXX.XXXXXXXXXXXX.XX.", "XXXXXXXXX.X.XXXXXXXXXXXXX.XXXXXXXXXX", "XXXXXXXXXXX.XXXXXXXXXX.XX.XXXXXXXXX.", "XXXXXXXXXXXX.XXXX.XXXXXXXXXXXXXX.XXX", "XXXXXXXXXXX.XXXXX.XXX.XXXXXXXXXXXX.X", "XXXXXX.XXXXXX.X.XXXXXX.XXX.XXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX.X", "XXXXXXXX..XXXXXXXXXXXX..X.XXXXXXXX.X", "XXXX.XX.XXXXXXX.XXXX.XXXXXXXXXXXXXXX", "X..XX.XXX.XXXXX.XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XX.XXXXXXXXX.XX..", "XXXXXXX.XXXXXXXXXXXXXXXXXXX.XXXXXXXX", "XXXXXXXXXXXX.XXXXXXXXXXX.XXXXXXX.XX.", "..X.XXXXXXXX.XXXXXXXXXXXXXXXXXXXX.XX", "X.XXXXXXXXXX.XXXXXXX.XXXXXXXXXXXXX.X", "XXXX.XXXXXX.XX..XX.XXXXXXXXXXXXXXXXX", "XXXXXXXXXXX.XX..XXXXXXXXXXX.XXXXXXXX", "X.XXXXXXXXXXXXXXXXXXX.XXXXX.X.XXX.XX", "XX..XXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX", "..XXXXXXXX.X.XXXXXXX.XXXXXXXXXXXX.X."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> grille = {"XX.XX.XXXX.XXXXX.XXX.XX.", "XXXXX..X.XX.X.XXXXXXXXXX", "XXXXXXXXXX.XXXXXXXXX.XXX", "XXXX..XXXXXXXXXXX.XXXXXX", "XXXXXXXXX.XXXXXX.XXXXXXX", "XXXXXX.XXXXXX...XXXXXXXX", "XXXXXXX..X.XXX.XXXXXXXX.", ".XXXXXXXXX.X.XXX..XX.X.X", "XX.X...XX.XXXX.X.XXX...X", "XXXXX.XXXXX.XXX.XXXXX.XX", "XXX.XXX.X.XX.X..XXX.XX..", "X.XXX..XXXXXXXXXX.XX.XXX", "XXX.XX.XXXXXXXXXX.XX.XXX", "XXXXXXXXXXXX.XXXXXXXXXX.", ".XXXXXXX.X.XXXXXXXXXXX.X", "..XXXXXX.XXXX.XX.XX..XXX", "XX..XX.XXXXXXXX.XXXXX..X", "X.XX.XX.X.XXXXX.XXXXXX.X", "XX..X..XXXXXX.XXXX.XXXX.", "XX.X.XXX...XXXXXXXX..X.X", "XXXXX.XXXXXXXXXXXXXXXXX.", "XXXXXX..XXX.XXXXXXXXX.X.", ".XX.XXXXX..XXXXXXX.X.XXX", ".X.XXXXXXXXXXXX.XXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> grille = {"XXXXXXXXXXXXXXX.X.XXXX.X.XXXXX..XXXXXXXXXXXXXX", "XX.XXXXXXX.XXXXXXXX.XXXXX.XXXXXX.XXX.XX..XXXXX", "XXXXXXXXXXX..XXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXX", "XXXXXXX.XXX.XXXXXXXXXXXXXXX.XXXXXXXXXXXX.XXX.X", "XXX.XXXXXXXXXXX.XXXXXXXX.XXXXXXXXXXXXXXXX.XXXX", "XXXX.XX..XXXXXXXXXXXXXXXXXXXXX.XXX.XXXXXXXXXX.", "XXXXX..XXXXXXXXXXXXXXX.XXXXXXX.XXXXXXXXXXXXXXX", "XXXXXXXXXX.XXX.X..XXX.XXXXXXXX.XXXXXXXXXXXXXX.", "XXXXXXX.XXXXXX...X.XXX.XXXXXXX..XXXXXXXXXXXXXX", ".XXXXXXXXX.XXXXXXX.XX.XXXXXXXXXXXXXXXXXXX..XXX", ".XXXXXX.XXXX.XXXXXXXX.XXXXXXXXXX..XXXXXXXXXX.X", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXX.XXX.XX.XXXX.XXX.", "XX..XXXXXXX.XXXXXXX.XXXXXXXXXXXXXX.XXXXXXXXXXX", "XXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXXXXXXXXXXXX.XX", "XXXXXXX.XXXXXX.XXXXXXXXXXXX.XXXXXXXX.XXXXXXXXX", "XXXXXXXX..XXXXXXXXXXXXXXXXXX.XXXX.XXXXXXXXXXXX", "XXXXXXXX.XXXXXXXX.XXXXXXXXXX.XXXXXXXXXXXXXXXXX", "XXXXX.XXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX.XX.", "XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXX.XXXXXXX", ".XXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXX.XXX", "XXX.X.XXXXXXXXXXX.XX.X.XXXXXXXXXXXX.XXXXXXXXXX", "XXXXXXXXX.XXXX.XXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX", "XXXXXX.XXXXXXXXXXX..XXXXXX.X.XXXXXXX.XXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.XXXXXXX.XXXX", "X.XXXX..XXXXXXXX.XXXXXXXXXX.X.XXX.XXX.XXXXXXXX", "XXX.XXXXXXXXXXXXX.XX.XX.XXXXXX..XXX.XXX.XXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXX.XXXX..X.XXXXXXXXXX.X", "X.XX.XXXXXX.XXXXXXXXXXXX.XX.XXX.XXXX.XXXXXXXXX", "XXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXX", "XXX.XXXXXXX..X.XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXX", "XXXXXXX.XXXXXXXXX.XXXXXXXXXXX.XXXXXX.XXXXXX.XX", ".XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXX.XXX.XXXX.XXX", "XXXXXXXXXXX.XXXXXXX.XXXXXXXXX.XX.XXX.XXXXXXXXX", "XX.XXXXXXXX.XX.XXXXX.XXXXXXXXXXX.XXXXXXXXXXXXX", "XXXXXXXXXXX.X.XXXX.XXXX.XXXXXXXXXX.XXXXXXXXXX.", ".XXXX.XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXX", "XX..XXXXXXXXX.X..XXXXXX..XXXXXXX..XXXX.XXXXXXX", "XXXX.XXXXXX.XXXXXXXXXXXXXXXXXX.XX.XXX.XXXXXX.X", "X.XXXXXXXXXXXXXXXX.XX.XXXXXXXXXXXX.XX.XX.XXXXX", "XXXX.XXXXXXXXXXXXXXXXXXXXXX.XX.XXXXXX.XXXXXXXX", "XXXX.XXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX..XXX", "XXXXXXX.XX.XXXXXXXXX.XXX.X.X.XXXXXXXXXXXXXXXX.", "XXXX.XXXXXXXXX....XXX..XXXXXXX.XX.XXX.XXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXXXX.XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXX.XXXXXXXXXXXX.XXXXX..XXXXXXXXXXXX.XXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> grille = {"XXXXXXXXXX.XXXXXXXXX", "XXXXXXXXX.XXXXXXX.XX", "XXXXXXX..XXXXXXXXXXX", "XXXXX..XXXX.XXXXXX.X", "XXXXXXXXXXXXXXXXX.XX", "XXXXXX.XXXX.XXXXXXX.", "XXX.XXXX.XXXX.XXXX..", "XXXXXXXXXXXXX.XXXXXX", "XX.XXXXXXXXX.X.XXX.X", "XXXXXXXXXXXXXXXX.XXX", ".XXXXXXX..XXXXXXXXX.", ".XXXXXXX.XXX.XXX.XXX", "XX.XXXXXXXXXXXXXX.XX", "XX.XXXXXXXXXXXXXXXXX", "X.XX.XXXXXXXXXXXXX.X", ".XXXXXX.XXXX.XXXXX.X", "X.XXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXXXXX.XXXXXXXXXXX.X"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> grille = {"XXXXXXXXXX.XXXXXX.XXXXXXXXXXXX", "XXX.XXXXXX.X.XXXXXXXXXXXX.XXXX", "XXXX.X.XXXXXXX.XXXXXXXXX..X.X.", "XXXXXXX.XXXXXXXX.X.XXXXXXXXXXX", "XXXXXX.XXXXXXXXXXXXXX.XXXXXXX.", "XXXXXX.XX..XXXXXXXXXXXXXXXXXXX", ".XXXX.XX....XXXX..XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXX.XXXXXXX", "XXX.XXXXXXXXX.X.XXXX.XXXXXXXXX", "X.X.XXXXXXXXXXXXXXX.X.XXXXXX.X", "XXXXXXXXXXX..XXX.XXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXX.XXXXXX.XXX", "XX.XXXXXXXXXXXX.XXXXXXXXX.XXXX", "XXXXXX.XXXXXXXX.XXXXXXX.XXX.XX", "XXX.XXXX.X.XX.XX.X.X.X.XXXXXXX", "XXXXXX..XXXXXXXXXXXX.XXX.XXXXX", ".XXXXXXXXXXXXXXXX.XXXX.XXX.XXX", "XXXXXXXX.XXXX.XXXXXX.X.XXXXXXX", "XXXX.XXX.XXX.XXXXXX.XXX.XXXXXX", ".XXXXXXXXXXXXXXXXXXXX..X.XX..X", ".XXX.XXX.XXXXXXXXX.X.XXXXXXXXX", "XXXXXXX.XX.XXXXXXXXXXXXX.XXX.X", "XXXXXXXXXXXX.XXXXXXXXXXX..XXXX", "XXXXXXXXXXXXX..XXXXXXXXXXXXXXX", "XXX.XXXXXXXXXX.XXXXXXXXXXXXXXX", ".XXXXXXXXXXXX.XXXXX.XXXXXXXXXX", "XXXXXXX.X.X.XXXX.XXXX.XXXXXXXX", "X.XXXXXX..XXXXXXXXX.XXXXXX..XX", "XXX...XXXXXXXXX.XX.X.XX.XXXXX.", "XXXXXXXXXX.XXXXXX.XXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> grille = {"XXXX..XX", ".XXXX.XX", "XXX.XXXX", "XXXXXXXX", "XXXXXXXX", "XXXXXX.X", ".XXXXX..", ".X.XXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> grille = {"XXXXXX....XXXXX.XX", "XXXX.XX.XXXX.XXXXX", "XXX.XXXXXXXXXXXX.X", "XXXXXXXXXXXXXXXX.X", "XXXX.XX..XX.XXXXX.", "XXXX.XXXX.XXX.XXXX", "XXXXXXXXX.XXXXXXXX", ".XXX.X...X.XX...XX", "XXXXXXXXXXXXXX.XXX", "XX.XXXXXXXX.XXXXXX", "XXXX.X.XXXX.XXXX.X", "..XXXXXXXXXXXXXXXX", "X.XXXX.X.XX.XXXX.X", "XXXXXXXXX.XXXXXXXX", "XXXXX.XXXXXX.XXXXX", "XXXXXX.X..XXXXX..X", "..XXXXXXXX.XXXXXXX", "XXX...XXXXX..XXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> grille = {"XXXXXXXXXXXXXXX.XXXXXX.XXXXXX.XXX.", "XXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXX.X", "XXXX.XXXXXX.X.XXXXX.XXXXX.XXXXXX.X", "XXX.XX.X.XXXXXXXXXXXXXXXXX.XXXXXX.", "X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XX", "XXX.XXXXXXXXXXXXXXXXXXXX.XXXXX.XXX", "X.XXXXXXXXXX.XXXXXXXXXXXX.XXXXX.XX", "XXXXXXXXXXXX.XXXXXXXXXXXXXXXX.XXXX", "XXXXXXXX.XXXXX.XXX.X.X.XXXXXXXXXXX", ".XX.XXXXXXXXXXXXXXXXXX.X.XXXX.XXXX", "XXXXXX.XXXXXXXXXXXXX..XX.XXXXXXXXX", "XXXXXXX.X.XXXXXXXXXXXXXXXXXXXXX.XX", "XXXXXXXXXX.X.X..XXXXXXXXXXXXXXXXXX", "XXXXXX.XXXXXXX.XXXXXXXXXXXX.XXXXXX", "XXXXXXXXXX.X..XXXXXXXXXXX.XXXXXXXX", "XXXXXXXXXXXXXXXXX.XXXX.XXXX..XXXXX", "X.XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXX", "XXXXX.XXXXXX.X.X.X.XXX..XXXXXXX.XX", "XX.XXXXXX.XXXXXXXXX.XXXXX.XXXXXXXX", "XXXXXXXX.XXXXX.XXXX.XXXXXX.XXXXXX.", ".XXX.XXXXX.XXXXX.XX.XXXXXXXXXXX.XX", "XX...XXXXX.XXXXXXX.XXXXXXXXXX.XXXX", "X.XXXXXXXXXXX.XXXXXXXXX.XXX.XX.XXX", "XXXXX.XXXXXX.XXXXXXXXXX.XX.XXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXX.XXXXXXXXXXX.X.XXXXXXXXXXXXX", "XXXXXXXXXXXXX.XXXXXXXXX.XXXXXXXXXX", "X.XXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXX", "XXXXXXXXXX.XXXX..XX.XXXX.XXXXXXXXX", "XX.XXXXXX.XXXXXXXXXXX.XXX...XXXXXX", "XXXXXXXXXX.X.XXXXXXXX..XXX.XXXXXXX", "XXXXXX.XXX.XXXXXXXXXXXXXXXXX.XXXXX", "XXXXXXXXXXX..XXXXXXXXX.XXXXXXXXXX.", "X.XXXXXXXXXXXXXXXXXXXXXXXXX..XXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> grille = {"XXXXX.X.XX.XXXXXXX.XXXXX..XXXX", "XXX....XXXXXXXXXXXXX.XXXXXXXXX", "XXX...XXX.XX.XXXXX.XXXX.XX.XXX", "XXXXXXXXXX.XX.XX.X.XX.X.XXX.X.", ".X.XXXXXX....XXXXXXXX.XXXX.XXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "X..XXX...XXXXXXXXXXXXXXX.XXXXX", "XXXXX.XXXXXXXX.X.XXXXXXXXX...X", "XXXX.XX.XXXXXXXX....XXX.XXXXXX", ".XXXX.XXX..XXXX..XXXX.X.....XX", "XXXXXXXXXXXX.XXXX...XX.X.XX.XX", "XXXXX.XXXXXXXXXXXX.XXXXXX..XXX", ".X.XXXX.XXX.X.XXXXXXXXXXX.X.XX", ".XX.X..XXXXXX.XXXX.XX.XX.XXX.X", ".XXXXXXXX.XXXX.XXX.X.XX.XXXXX.", "XXXXXX.XXXXXXXXXXXX.X..XXXXXXX", "X...XX..X.X.XX....X...XX..X.XX", ".XXXXXX.XXXXXXXXXX.X.X.XXXXXXX", "XXXXXX.XXXXXXXXXX.XXX.XXX.XXX.", "X.XXXXXXXXXXXXXXXXXXX.XXX..XXX", "XXXXXXX.XXX.X.X.X.XXX.XX.XXXX.", "XXXX..XXXX.X.XX.X.XXXXX.XXXXXX", "..XXXXXXXX.XXXXXX.XXXXXXXXXXXX", "XX.XXXX..XXX.XXXXXXX.XXX.XXXXX", "XXXX.XXXXX.XX.XXX.XXXXXXXXXXXX", ".XX.XX..XX.XXXXXXXXX.XX..XXXX.", "XX..XX.XXXXXXXXXXX.XX.XXXXX.XX", "XXXXXXXXXXX..XX...XXX.XX..XX.X", "XXXXXXXXXXXXXXX..XXX.XXXXX.XXX", "XXXXXXXXX.XXXXXXX.XXXX.XXXX.XX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> grille = {"XX.X.XXXX.", "XXX.X..X.X", "XXXXX.X..X", "...XXXX.X.", "XXXXXXXXXX", "XXX..XXXXX", "X.XXXXX.XX", "XXXXXXXXXX", "XX.X.X.XXX", "X.XXXXXXX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> grille = {"X..XXXXXXXXXX.XXXXXXXXXXX..XXXXXXXXXXXXXXXX.XXX.XX", "X.XX.XX.XXXXXXXXXXXXXXXXX.XX..XXXXX.X..XXXX.XXXXXX", ".XXX.XXXXX.XXXXXXXXX.X.XXXXXXXX.X.X..X.X.XX.XXXXXX", "XX.XXXXXXX..XXXXXXXX.XXXXXXXXXXXX.XXX.XXXXXXXXXXXX", "XXXXXXXXX.XX.X..X.XXXXXXXXXXXXX.XXXXX.XXX.X.XXXXXX", "XX..XXXXXXXXXX.XXXXX.XXXXXX..XXX.XX.XX.XXX....XX.X", "XXXX.X.XXXXXXXXX.XXX...XX.XXX.XXXX..X.XXXXXXXXXXXX", "X.XXXXXXXXXXXXX.XXXX.X.XXX.XXXXXXX.XXX.XXXXXXXXXX.", ".X.XXXX.XXXXX.XXXXXXXXXX.XXXX..XXX..X.XXXXXXXXXXXX", "XXXX.XXXXX.XX.XXXXXXXXXXXXXX..X.XX.XX..XXX..XX..XX", "XXXX.XX.X.XXX.X.XXXXXX..XXX..XXXX.X.X.XXX.X.X.XXXX", "XXXXXXX.XXXXXXX.X.XXXXX..X.XXXXXXXX.X..X.XX..X.XX.", "XXXXXXXX.XXXXXXXX..XXXXXXXXXXXXXX.XX.XXX.X.XXXXXXX", "XXXXX.X.X.X.XXXX.XXXX.XXX.XXXX..X.X..XXXXXXX.XXXX.", "X.XXX.X.XXX.XXXX.XX.XXX..XXXX...X.XXXXXXXXXXX.X.XX", "XXXX.X.XX.XXXXXXXXX.XXXXXXXXXXXXX.XXXXXXXXX.XX.XXX", "X.XX..X.XX.XX.......XXX.XXXXXX.XXXXXX..XXXXXX.XXXX", "XXXXXXXX.XXXXXXXXXXXXXXXX.XXXX..XXXXXXXXX.X..X.XXX", "XXXXX.X.XX...XXXXXXXXXXXXXX.X.XX.XXXXXX.XXXXXX.XXX", "XX.XXXX.XXXX.X..XXXXX.XXXXXXX.X.XX..X..X.XXXXX.XXX", "X.XX....XXXXXXX.XX..XXXXXXXXXXXX.X.XXXX.X.XXXX.XXX", "XX...XXXXXXX..X.XXXXX..XXX..XXXXXXXXXXXX.XXXXXX..X", "XXX.XX.XXX..X.XXXXXXX.XX.XXXXX..XXX..X.XXXXXXX...X", "..X..XXXXXXXXXXX.XX.XXXX..XXXXX.XX.XX.XX.XX..X...X", "XX.XXXXX.XXXXXXXXXXX...X.XXX.XXX.XXXXXX.X.XX.X.XXX", "..XX.XXXX.XXXXXXXX.XXXXXX.XXXX.XXXX.XXXXXX.X.XX.XX", "XX.X.XXXXXX.XXXXXXXXXXXX.XX.XXXXXXXX..XXXXXXXXXXXX", "XX.XX.XXXXXX.XXX.X..XXX.XX.X...X.XX.XXX.XX.XX.XX.X", ".XXXXXXXXXXXXXXXX.XX.XXXXXXXXXXXXXXXXXXXXX.XXXXXXX", "XXXXXXXXXXX.XX.XX.XXXXXXXX.XX.XXXXXXXXXXXXX.X.XX.X", "XXXX.XX.XXX.XXXX.XXXXXXX.XXX.XX.X.XXX.XXX.XXXX..XX", "XXXXXXXXXXX.X.XXX.XXXX..XXXX.XXX.XXXX..X.XXXXX..XX", "XXX.XXXX.XXXXXXXXXX...X.XXXXXX.XX.XXXXXXXXXX.XXXXX", "XX.XXXXXX..X.XXXX.XXXXXX.X.XXX.XXXXXXXXXX.XXXXXXX.", ".XXXX.XXXXXXX..XXXXXX..XXXXXX..XXXXX.XXX.XX..XXXXX", "XXXX.XXX.XXXX..X.XXX.XX.X..XX.XXXXXXXXXX.XXXXXXXX.", "XXX.X..XXXXXXXXXXXXXX.XXXXXXXXX.X.XXXXX..XXXXXXXXX", "XXXXXX.XXX.XXXXXXX.X.XXXX.XX..X..XX.XXXX..XXX.XXXX", ".XXXXX.XXX.XXXXXXXXXXX.XXXXX..XX.XX..XXXX.X.XXXXXX", "XXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX.XXXX.XX.XXXXXXXX", ".X.XXXXXXXXXXXXXXX.XXXXXX.XXXX.XXXXXXXX.XXXXXXXXXX", "..XXX.XXXXXXXXXX..X..XX.XXXX.XXXXXXX.XXXX.X.XXX.XX", ".XXXX.X..X.XX.XXXXXXXX.XXXXXXX.XXXXXXXXXXX....XXXX", "XXX.XXXXXXXXXXXXXXXXXX.XX.XXXXXXX.XXXXXXXX.XX.XX.X", "...XXXXXXXX.XX.XXXXXX.XXX.XXXXX..XXXXXXXX.XXXXXX.X", "XX.XX.XXXXXXXXXXXXXXXXXXXX.XXXXX.X...X.XXXX..XXXXX", "XXX.XXXXXX.XXXXX.X.XXXX..XXXXXXXXXXXXXXXX.X..XXX.X", "XXXXXXX.XX..X.XX..XXXXX.XXXXXXXXXXX.XXXX.XXXXX.XXX", ".XX.XXXX.X.XX.XX.X.XXXXXXXXXXX.XXXX.X.XX..X...X...", "XXX.X.XXXXXXXXXXX.XXXXX..XXX.X.XXX.XXXXXXX.X.XX.XX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> grille = {"XX.XXXXXXX.XXXXXXXXXX.XX.XXXXXXX", ".XXXXXXXXX.XX.X.XXXX..X.XXXXXXXX", "XXXX.XXXXXXX.XXXXXXXXXXXXX.XXXX.", "XXXX.XXXXXXXXXXXXXXXXXXXXX.XXXX.", "...XXXXXXXXX.XXX.XXXXXXXXXXXXXXX", "XXX.XXXX..XXX.XX.X.XXX..XXX.XX.X", "XXXXXXXXX.XX.XX.XXXXXX.XXXX.XXXX", ".XXXX.X.XXXX..XXXXXXX.XX.XXXXXXX", "XXXX.XXX.XXXXXX.XXXXXX.XXXXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXX.XX.XX", "XXXXXX.X.XXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXX.XXXXXXX..XXXX", ".XXXXX.XXX.XX..X..XXXX.XXXXX.XXX", "XXXXXXXXXXXXX.XXXXXXXXX.XXXX.XXX", "XX..XXXXXXXXXXXXXXXXXXXXXX.XXXX.", "XX.XXXX.XXXXXXXXXXX.XXXXXXXXXXXX", "XXXXXXXXXX.XXXXX.X.XXXXX..X.XXX.", "XXXXXXXXXXXXXXXXXX.XXXXXX.XXX..X", "XXX.XXXXXX.XXXXXXXXXXXXXXXXXXXXX", "X.XXX.XX.XXXX.XXXXX.X.XXXXX.X.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXX.XX.XXXXX", "XXXXXX.XXXXXXXXXXXXXXXXXXXX.XXXX", "XX..XXXXXXXXX.XXXXXXXXXXXXXX.XX.", "X.XXXXXXXXXXX.XXXXXXX.XXXXX.XXXX", "XXXXXXXXXXX.XXXX.XXXXXXXXXXXXXX.", "XXX.XXXXXXXXXXXXXXXXXXXXXXXX.XXX", "XXXXXXXXXXXXXXXXXXXXXXXXX..XXXX.", "XXXXXXXXX.XXX.XXXXXXXXXX.XXXXX.X", "XXXXXXXXXXX.XXX.XX.XX.X.XXXX.XXX", "XX.XXXX..XXXXXXXXXXXXXXXX.XXXXXX", "XXXXXX.X.XXXXX.XXXXXXXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> grille = {"XX.XXXXX...X.XXX.X", "XXXXXX.XXXXXXXXXXX", ".XXXXXXX.XXXXXXXXX", "XXXXXXXX.XXXXXXXXX", "XXXXXXXXXXXX.X.XX.", "XXXXXXXX.XXX.XXX.X", "XXXX.XXXXXXXXXXX.X", "XXXXX.XXXXXXXXXXX.", "XX.XX.XXXXXXXXXXXX", "XX.XX.XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX", "XXXXXXX.XXXX...XXX", ".XXXXXX.XXXXXXXXXX", "XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXX.XXXX", "XXXXXXXXXXXXXX.XXX", "XXXX.X.XXXX.XXXXXX", "X.XX.XXX..XXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> grille = {"XXXX.XXXX.XX.X", "XXXXXXXX.XX..X", "XXXXXXXXXX.XXX", "XX.XXX.XXX.X..", ".XXX.XXXXXXXXX", ".XXXXXX.XXXXXX", "XXXXXXX..XXXXX", "XXXX.XX..XX..X", "X.XXXXXXXX..X.", "XXXXX..XXXXXXX", "XXXXX.XXXXXXXX", ".X.XX..XX...XX", "XXXXXX.X.XX.XX", "XX.X..X.X..XX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> grille = {"XXXX..", "XX.XXX", "XXX.XX", "X..XXX", ".XXXXX", "XX.XXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> grille = {"XXX.XX.X.XXXX.", "XXXXX...XX.XX.", "X.X..XXXXXXX.X", ".XXX.XXXXXXXXX", "X.XXXXXXXXXX..", ".XXXXXX.XXXXXX", "X.XX.XXXXXXX..", "XXXXXXX.X.XXXX", "XXXXX..X..XX..", ".XXX.XXXXX.XXX", "..XXXXX.X..XX.", ".XXX...XXXXXX.", "...XXXXXXXXXXX", "XXXXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> grille = {"X.XXXXXX.XXXXXXXXXXXXXX.X.XXXXXX", "XX.XXXXXX.X.XXXXXXXX.XXXXXXXXX.X", "XXXXXXX.XXXXXXX.XXXXXXXX..XXXXXX", ".XXX..XXXXXXXXXXXX.XXXXXXXXXXXXX", "XX.XXX.X...X.XXXXXX.XXXXXXX..XXX", "XXXXX.XXXXXXXXXXXXXXXXXX.X.X.X.X", "XXXXXX.XX..XXXX.XXXXXXXX.XXX.XXX", "XX.XXXXX.XXXXX.XXXXXXXXXXX.XXXXX", "XXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXX", ".XXXXXXXXXXXXXXX.XXXX.X.XXX.XXXX", "XXXXXXXXXXXXXX.XXXX.XXXXXXX.XXXX", "XXXXXXXXXXXXXXXXXXXXXX..XXXXXXXX", "XXXXXXXX.X.XXX.X..X.X.X.XXXXX.X.", "XXXXXXX.X..XXXXXXXXXXXXXX.XX...X", "XXXX.XXXXXXX.XXXXXXXXX...XXXX.X.", "XX..XXXX.XXX..XXXXXXXXXXXXXXXXXX", "X.X.XX.XXXX.XXXX.X.XXXXXXXXXXXXX", "XXXX.X.XXXXXXXXXXXX.XXXXX.XXXXXX", "XX..XXXXXXXXXXXXXXXXXXXXXXXXXX.X", "XXXX.XXX..XX.XXXXXXXXXXX.XXX.X.X", "X.XXXXXXXXXXXXXXXXXXXX.XXXXXXXXX", ".XXXXXXXXXX.XXXXXXXXXXXXXXXXX.XX", "XXXXXX.XXXXXXXXXXXXXXX.XX.XXX.XX", ".X.XXXXXXXXXXXXXXXXXX.XXXXXXXX.X", "XXXXXX.XXXXXXX.XXXXXXXXXX.X.XX.X", "XXX.XXXXXX.XXXXX.XXXXX.XXXXXXX.X", "XXX.XXXXXX.XX.X.X.XXXXXXXX..XXXX", "XXXXXXXXXXXXXXXXXX.XX.XXXXXXXXXX", "X.X.XX.XXXXXXXXXXXXXX.X.XX.XXXXX", ".XX.XXX.XX.XXXXXXXXXXXXXXXXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXX.XX.XXX.XXX.XXXXXX.."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> grille = {"X..XXXXXXXX.X..X.XXXXXX.XXXXXX", ".X.XX..XXXX.XX.XX.XXXXXXXXX..X", "XXXXXXXXXXXXXX.X.XXXXX..X..X.X", "...XXXXX.X.XXXX.XX.X.XXXXX.XX.", "X.XXXXXXXX.XXXXXX.X.XXXXX...XX", "X.X.X...XX.X.XXX.XXXXX.XXXXXX.", "X.X.X.XXX..X.XX.XXXX.XXXX.X.XX", "..X.XXXXXX..XX...XXXXXXX.XXXXX", "XXXXXXXXXX.XXXXX.XXXX.XXX.XX.X", "X.XXXXXXXXXXXXX.X.XXXXXXXXXXX.", ".XXXXXX..XX...X...XXXXXXXXXXX.", "XX..XXXXXX..XXXXXXX..X.X.X.XXX", "XXX.XX.XXX..X.XXXXXXXXXXXXXXXX", "XXXXXX.XXXXX....X....XXXX.X.XX", "XX.XXXXXX.X.XXXXXX.XXX.XXXXXXX", "X.XXXXX.XXXXXXXXXXXXXXX.XXXXXX", "XXXXXXXX.X.XXX..XXXX.XXXXXXXX.", "X.X.XXXX..XXXXXXX.XXX...XXXXXX", "XX.XX.XXXXX.XX..XX.XXXX..X..XX", ".X..XX..XXX.XXXXX.XXXXXXXXXXX.", "XXXXXXXXXXXXXX..X.X.XXXXXXXXXX", "XX.XXXX...XX.XXXXXX.XXX.XXX.XX", "X.XXXXX.XXXXXX.XXXXXXXX.X.X.XX", ".X.XXX.XXXXXXXXX..XXXX...XX.X.", "..XXXX.XX.XXXXXXX.X.XXXXXX..XX", "XXXXX.XXX.X.X.XXX.XXXXXXXX.XXX", "XXX.XXXXXXXX.XXXXXXXXXX.XXXXXX", "XXXX.X....X.XX.XXXXXXXXXXXXXXX", "XXXX..X.XXX.XXX.XXXXXX..XX.XX.", "XXX.XX.XX.XXX.XXXXX..XXX..X.X."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> grille = {"XX.XXXXXXX.XXXX...X.XXXX.X.XX.X.XX", "..X..XXXXXXXXXXXXXXXXXXXXXXXXXX.XX", "XXXXXXX.XXXXXXXXXXX.XXXXXXXXXXXX.X", "XXXXXXXXXXXXXXX.XXXXXXXXXX.XXX.X.X", ".XX.XXXXXXXXXXX.XXXXXXXX.XXXXXXXXX", "XXXXX.XX.XX.X.XXXXXXXXXXXXXXXX.XXX", "XXX.XXX.XXXXX.XXXXXXXXXXXXX...XXXX", "XX.XXX.X.XXXXXX.XX.XXXXXXXXXX..XXX", "XXXXXXX.XXX.XXXX.XX.XXXXXXX.XXXXXX", "XXXXXX.XX.XXX.X.XXX.XXXXXXXXX.XXX.", "XXXXXXXXX.X.XX..XXX.XXXXX.X..X.XXX", "XXXXXXX.XXX.XXXXXXXXX.XXX.XXX.XX.X", "XXXXXX.X..XXXXXXXXXXXXXXX.XXXXX.XX", ".XX.XXXX.XX.XXXXXXXXXXXXXXXXX.XX.X", "XX..XXXX.X.X.XXXXXXXX.XXXX..XXXXXX", "XX.XXXXXXXXXXX.X.XXXXXXXX.XXX.X.XX", "XXX.XXX.XXXXXXX.X.XXX.XXX.XXXXXXX.", "XXXXX.XXXXXXXXXXXXX.XXXXXXXXX.XXXX", "X..XX.XXXXX.XXXXXX.XX.XXX.XXXXXXX.", "XX.XXX.XXXX.XXXXX..XXXXX.X.X.XXXXX", "XXXX.X.XXXXXXXXXX.XX...XXXXX.XXXXX", "XXX.XX.XXXXX.XXXX.XXX.XXXX.XXXXXXX", "XXXXXXX..XX.X.XXXXXX.XXXXX..XXXXX.", "XXXXXX.XXXXXXXXXXX.XX..X.XXXXXXX.X", "XX.XXXX.XXXXX.XXXX.X..XXXXXXXX.XXX", "X.X.XXXX..XXXX.XXXXXXXXXXXXXXXXXXX", "XX.XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXX", "XXXXXXXXXXXXXXX..XXXXXXX.X.XXXXXXX", "XXXXXXXXXXX.XXXX..XXXX.XXXXXXXXXX.", ".XXXX.X.X.XXX.XX.XXXX.XXXXXX.X.XXX", "X.XX.X.X.XXXXXXXXX.XXXXXXXXXXX...X", "XXXXXXXXXX.XXXXXXXXXX.XX.XXXXXXX.X", "X.XXXXXXXXXXXX.XX...XXXXXXXXXX.X.X", ".XXX.X.XXX.XXXX.XXXXXXXXX.XXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> grille = {"XXXXXXXXX.XXXXXXX.XXXXXXXXXXX.X..X", "XXXXXXXXXXXXXXXXX.XXXXXXXXXXX.X.XX", "XXXXXXXXXXX.XXXXXXXX..XXXXXXXXXXXX", "X.XXXXXXXXXX.XXXXXXX.XXXXXXXX.XXXX", "XXXXXX.XXXXXX.XXXXX.XXXX..XXXXXXXX", "XXXXXXXX.XXX.X.X.XXXXXXX..X.XXXXXX", "XXXXXXXXXXXX..XX.XXXXXX.X.XXXXXX.X", "XXXXX.XXXXXXXX.XXXXXXXX.XXXXXXXXXX", "XXXXX.X.XXXXXXXXXX.XXXXX.X.XXX.XXX", "X.XXXXXXXXXXXXXXXXX.X.XXXXX.XX.XXX", "XXXXXXXXXX.XX.X.XXXXXXXXXXX.XXXXXX", "X.XXX.XXXXXXXXXXXXXXX.XXXXXX.XX..X", "XXXXX.XXXXXXXXXXXXXXXXXXXX.XXXXXX.", "XXXXXXX.XXXX.X.XXXXXXX..XXXXXXXX.X", "XXXXXXX.XXX.XXXXX.XX.XXXXXX.XXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXX.XXXXXXXXXXX.XXXX.XXXX.XXX.", "XXX..XXXX.XXXXXXXXX.XXXX.XXX..XXXX", "XXXXXX.XXXX.XXXXXXXXXXXX.XXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX", "XXXXXXXXXX..XX.XXXXX..XXXX.XXXXXXX", "XXXX.XXXXX..XXXXX.XXXXX.XX.XXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXX", "XXXXXXXX.XXXXXXXXXX.X.XXXXXXX.XXXX", "XXXXXXXXXXXXXXXX.XXX.XX.XXXX.XXXX.", "XXXXXXXXXX.XXXXXXX.XXX.XXXXXXXXXXX", "XXXXXX.XXXX.X.XXXXX.XXXXXXXXX.XXX.", "XXXXXXXXX..XXXXXXXXXXXXXXX.XXX.X..", "X.XXXXXXXXXXX.XXXXXXX.XXX.XXXXXXXX", ".X.XXXXXXXXXXXX.XXXXXXX.XX.XXXXX.X", "XXXXX.XXXXXX..XXXX.XXXXX.XXXXXXXXX", "XXXXXX.XXXX.X.XXXXXXXXXX.XX.XXXXXX", ".XXXXXXX.X.XXX.XXXXXXX.XXXXX..XX.X", "XXXXX.XXXXXX.XXXXXXX.XXXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> grille = {"XXXX..X.XXX.X.XXXXXXXXXX", ".XX.XXXXX.XXXXXXX.XX.XXX", ".XXXXXX.XXXX.XX.XXXXXXXX", "X.XXXXXXXXX.XX.XX..XXXXX", ".XX.XXXXXXXX.XXXXXXXX.XX", "XXX.XXXXX.XXXXX.XXXXXXX.", "XXX.X.XXXXXXXXXXXXXX.XXX", "XXXXXXXXX.XXX.XXXXX..X.X", "XXX.XXXXXXXXXXXXXXXXXXX.", "XXXX.XXXXXX.XXXXXXXX.XXX", "XXXXXXXXXXXXXXXXXXXX..XX", "XXXXXXXXXXXXXXXXX.XXX.X.", ".XX..XXXXXX.XXXXX.XXXXXX", "XXXXXXXXXXXXXXXXXX.XXXXX", "XXXXXX.XX.XXXXXXXXXXXXXX", "XX.XX.XX.XXXXXXXXXXX.XX.", "XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXX.XXXXXXXXXX", "X.XXXXXXXXX.XXXX.XXXXXXX", "XXXXXXX.XXXXXXXXXX.XXXXX", "XXXXXXXX.X.XXXXX.XXXXXX.", "XXXXXXXXXXXX.X.XXXXXXX..", "XXXXXXXXX.XXXXXXXXX..XXX", "X.XXXXXXX.XX..X.XXXXX.XX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> grille = {"XXXXXXXXXXXXXXX.X.XX.XXX.XXXXXX.XXX.XXXXXXXXXXX..X", "XXXXXX.XXXXXXX.XXXXX.XXXXXXXXXXXXXXXXXXX.XXXXXXXXX", "XXXXXXX.X.XXX.X.XXX.XXXXXXXXXXXXX.XXX.XXXXXXX.XXX.", "X.XXXXXXXXX.XX.XXX..XXXXXXXXXXXXXXXXXXX.XXXXXX.X.X", "XXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX..XXXXX", "XXXXXXXXXX.XXX..XXXXXX.XXXXX...XX.XXXX.X...XXXXXXX", "X.XXXX.XXXXXXX.XXXXXX.XXXX.XXXXX.XXXXXXXXXXXXXXXXX", "X...XX.XXXXXXX.X.X..XX.XX.XX.XXXXXXXXXXXXXXXX.XX.X", ".XXXXXXXX.XXX.XXXXXXXXXXXXXXXXXX.XXXXXX.XX.XXXX.XX", "XXXXXX..X.XXXXXXXXXXXX.XXXXXXX..XX.XXX.XXXXXX.XX..", "X.XXXXXXXX.XX.XXXX.XXXXXX.XXXXXX.XXXX.XXX.X.X.XX.X", "XXX...X.XXXXXXXXXX.X.XX.XX.XXXXX..XX.XXX.XX.XXXX.X", "XXXXXX.X.XXXX.XXXX.XXXXXXXXXXX.XX.XXXXX.X..XX...X.", "XXXX.XXXXX.XXXX..XXXX.XXXXXX.XXXXXXXXXXXXX...XX.XX", "XXXXX.XXX.XXXX.X.XXXXXXXXXXXXXXX.X.XXXXXXXXXXXX.XX", "XX.XXXXXXXX.XXXXX.XX.X.XXXX..XXXXXXXX..XXXXXXXXXXX", "XX.XXXX.XX.X.XXXXXXXXXXXXXXXX.XXXX.XX.XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXX.X.XXX.XXXXXXX.XXXX.XX.XXXXXX.XXX", "XX.XXXXXXXXXXXX.X.XXXXX.XXX.XXXXXXXXXXXXX.XXXXXX..", "XXXXXXXX.XX.XXXXXXXXX..XXXXX.X.XX.XXXXXXXX.XXXXXXX", "XXXXXXXX.XXXXXXXX.XXXX.XXXXX.XX.XX.XXXXXXXXXXX.XXX", "X.XXXX.XXXX.XXXXXXX....X..XXXXX.XXXX..XXXX.X.X..XX", "XX...XXXXXXXXXXX.XXX.XXXXXXX.XX.XXXXXXX..X.XXX.XXX", "XXXXXX..XXXXXX.X.X.XXXXX.X.XXXXXXXXXXXX.XXXXX.XXX.", "XX.XXX.XX.XXX.X.XXXX.X.X..XX.XXX.XXXX.XXXXXXX.XXX.", ".XXX.XX.XXXXXXXXX.XXXXXXX..XX..XX.X.X.XXXXXX.XXXXX", "X..X..XXXXX.XX.XXX.XXXXXXXXXX.X.XXXX.XXXXX.XXXXXXX", "X.XXXXXXXXXXXXXXX.XXXX.X.XX.XXXX.X.XXXXXX.XX.XXXXX", "XXXX.XXXXX.XXXXX.XXXXX.XXXXXXXXX.XXXXXXXX.XXXXX.X.", ".XXXXXX.XXXXXXXXXXXX.XXXXXXXX..XXXXXXXXXXXXX.XXXXX", ".XXXX.XXXXXXXXXXXX.XXX.XXX.XXXXXX.XXXXXXX.XXXXXXXX", "XXXXXXXXXXXXXX...XXXX.X.XXXXXXXXXXX...XX.XXX.X.XXX", "X.XXX..XXXXXXXXXXXXXXXX.X.X.XXX..XXXXXX.XX.XX.XXX.", "XXXXXXXXX.XXXX.XX.XXXXXXX.X.XXX.XXXXX.X.XXXXXX.XXX", "X.XX.XXXXXXXXXXX..XXXX.XX.XXXXXXXXXXXXX.XX.XXX.X..", "XX.XXXX.XXXXXX.XX.XXXXXXXX.XXX.XXXX.XXX.XX.XXXXXXX", "X..XXXXXX..XX.XXXXXXXX.X.XXXXXXX.X.XX.X.X.XXXXXXXX", "..XXXXXXXXXXXX.X.XXX.XXXXXXXX..XXXX.XXXXXXXX.XXXXX", "XXXXXXX.XX.XX.X.X.X.XXXX.XXXXX..X.XXXXX.X..XXXXXXX", "X.XXXX...X.X.XX.XXXXX.XX..XXXX.XXXXXXXXXXXX.XXXXXX", ".XXXXX...X.XXXXXXX.XXXXXXX..XX.XXXXXXXXXXXXXXXXXXX", "XXXXXXXX.XXXXXXXXXXXX.X.XXX.XXXXXX.XX.XXXXXXXXX..X", "..XXXX.XXXXXXXXXXXX.XX...XX.X.X.X..XXXXXX.X.XXXXXX", ".XXXX.XXX.X..XXXXXXXXXXXXXXX.X.XXXXXXX.XXXXXXXXXXX", "XX.XXXXXXXXX..X.XXX.XXXXXXXXXXXXXXXXXXXX.X.X.X.XXX", "XXXXXXXXXXX.XXXXXXXXXX.X.XXXXXXXXX..X.XX.X.XXXX.XX", ".X.X.XXXXXX..X..XXXXXXXXXX.XXXXX.XX..XXXXXXXXXX.XX", "XXXXXXXXXXXXXXX.XXX..XXXXXXXXXXXXXXX.XXXXXXX.XXX.X", "XXXX.XXXXXXXXXXXX.XXX..XX.XXXX.XXX.XXXXXXXXXXX.XX.", ".XXXX.X.XXXXXXXXX..X.X.XXX.X.X.X.XXXXXXX.XXX.XXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> grille = {".XXXX.XX...XXX.XX.XX", "XXXXXX..XXXXXXXXXXXX", "XXXXXXX.X.XXX.XXXXXX", "XXXXXXXXXX.X.XXX.XXX", "XXXX.X.XXXXXXXX.X.XX", "XXXXXXXXXXXXXXXXXX.X", "X.XX.XXXXXX.XX.XXXXX", "X..XX..XXX.XXXXXXXXX", "XXX.XXXXXX.XXXXXXXXX", "X..X.XXX.XXXXXXXXX.X", "XXXXXXX.XXXXXXXXX.XX", "XXXXXXXXXXXXXXXXXXXX", ".XXXXXX.X.XX.XXXXXXX", "XXXXXXXXXXX.XXXXXXXX", "X.X.XXXXXXX..XXXXX.X", ".XX.XXXXXXX.XXXX.XXX", "..XXXXXXX.XXXXXXXXXX", "XXXXXXXXXXXX.X.X.XXX", "..XXXXXXXX.X.XXXXXXX", "XXX.X.XXX..XXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> grille = {"XXXXXXXXXXXXXX", "XX..XXXXX..XX.", "XX.XX.X.X.X.XX", "XXXXXXXXXXXXXX", "XXXX.XX.XXX..X", "XXXXXX.XX.XXXX", "XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXXXXXX..XX", ".XXX.XXX.XXXXX", "XXXXXXXXXXXXXX", "XXXXXXXXX...XX", "XXXXXXXXXXXXXX", ".XXXXXX..XXXX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> grille = {"XXXXX.XXXXXXXX.XXXX...X.XXXXXXXX.XXXXXXXXXXXXX", "XXXXXXX..X..XXXXXXXX.XXX....XXXXXXXXXXXXXXXXX.", "XX.XXX.XXXXXXX.XXXXX.XX.XX.XXXXXXXX.X.XX.XXXX.", "XXXXXX.XX.XX.XXXX.XXX.X.XXXXXXXXXXXXX.XXXXXXXX", "XXXXXX.XXXXXXXXX.XXXX.XXXX.XXXX..XXX.XXXXXXXXX", "XXXXX.XXXXXXXXXXXXXXXXXXX.XX.XX..XXXXXX.X.XXXX", ".X.XXXX..XXXXX..XXXXXX..XXXX.X..XXXXX.X.XXX.XX", "XX..XXX.XXXXXXXXXXX.XXX.XX.XXXX.XXXXX...XXXXXX", "XXXX.X..XXXX..XXX.XXXXXXXXXXXX.XX..X.X.XXXX.XX", "XXXXX.XXXXXXX.XXXXX.XXX.XXXX.XXXXXXX.XXXXXXXX.", "XXXXX.XXXXXXXX.XXXXXXXX.XXXXXXXXXXXXXXXXXX..XX", "XXX..XXXXXXXX.X.XX.XX..X...XX.X.X.XXXXXXXXXXX.", "XXXXX..XXXXXXX.XXX.XXXXX..X.XX..XXX.XXXX.XXXX.", ".XXX.XX.X.XXXXX.XXXX.XX.XXX.XXXXXXXXXXX..X.XX.", "XX.XXXXXXXXXXXXX.XXXX.XX..XXXX...XX.XXX..XXXX.", "XX.XX.XX.XX...X..XXXXX.X.XXX.XXXXXX..XXX.XX.XX", "X.X.XXX.X.XXXXXX.X.XXXX.X.XXXXXXXX......XXXXXX", "XXXXX.XXXX.X.XX.XXXXX.XXX.XXX.XXXXX.XXXXX..X.X", "XXXXXXXXXXXXXX.XXX.XXXXXXXXXX.XXX..XX...X.XX..", "XXXXXXX.X.X.XX..X.XXXXXXXX..XXXXX.XX.XXX..XXXX", ".XXX.X.XXX.X.X.XXX..XXXXXXXX.XXXXX.XXX.X.XX.X.", "..XX.XXXXXX....XXX.XXX.XXXX.XXX.X.X.XXX..XXXX.", "XXX.XXXX.XXXXX.X.X.XXXX.XXXXXXXXXX.X.XXXXXXXXX", "XX.XXXXXXXX.X.XXXXX.XXXXXX.XXXXXX.XXXXX..XXXXX", "..XXXXXXXX.XXX.XXXXXXXXXXXXXXXXXX.XX.XX.XXXX..", "X.XXXXXXXXXXXXXXXXXX...XXXX.XXXXXXXX.XXXXXXX..", "..XXX.X.XX.XX.X.XXXX.XXXXXXX.XXXXXXX.XXXXXXXXX", ".XXXX.XXXXXX.XXX.X.XXX..XXX...XXX.XXXXX.XXXXXX", ".X.XXX.X.X.X.XXX.XX...XXXXXXXXX.XX.XXXX...XXXX", ".XXXXXXXX.XX.X.X..XXXXXXXXXX.XXXX.XXXX.XXXXXXX", ".XXX..XXX.XXXX.XXXXX.X.XXX.XXXXXXXXXXXX.XX.XXX", ".XXXX.XXXXXXXXXXXXXXXXXXXXX.XXX.XXX..XXXX.XX.X", "XXX.X.XXXX.XXXXXXXX.XXXXXX.XXX.XX.XXX.XXX.XXXX", "X.XXXXXXX.XX..XXXXX.X.X.XX.XXXXXX.X..XX.X.XX.X", ".XX.X.XXXX.X.XXXX..XXX..XXXXXX.XXXXXXXXX.XXXXX", "X.XXXXXXXXXXXX...XX.X.XXXXXXXXX.X.XXXX.XXXXXXX", "XXXX.XXXXXXXXXXXXX.X.XX.XXXX..XXXXXX.X.X.XX.XX", "XXX.XX.XX.X.XXXXXX.XXX.XXXXXX.X.X...XXXX.XXX.X", "XXXXXXXXXXXX.XXXXX.X....XXXXXX.X.XXX.XX.X.XXXX", "XX.XXXXXXXXXXX.X....XXXXXXXXXXXXXXX.XXXXXXXX.X", ".X.XXXX....XXX.XX.XX.XXXXXXXXXXXXXXXXX.XXXXX..", "XXX.XX..XX..XXX.XXXXXXXXXXXXX.XXXXXXXXXXXXXXXX", "X.XXXXXX.XXXXX....XXXX.X...XXX.X.XX.XXX.XXXXXX", "XXXXXXXXXXXXXX.XX...XXXXXXX.XX.XXXXXX.X.XXXXX.", ".XXXXXX.X.XX...XX.XXXXXXXX.XXXX.XX.XX.XXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXX.XXX.XXXXX..XXX.XXX.XX.X"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> grille = {"X..X", "X..X", "XXXX", "XXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> grille = {"XXXXXXXXX.X..XXXXXX.X.XXX.XXXX", "XXX.XXX..XX.XXX.XXXX.XX..XXX.X", "XXXXXXXXX..XXXXXXXXXX.XXXXXXXX", "XXXXXX.X.XXXX.XXXXXXXXXX.X.XXX", ".XX.XXXXXXXXX..XXXXX.XXXXXX.XX", "XXX.XXX.XXXX.X...X.XXXXXXXX.XX", "X.XXXXXX..X.XXXXX..XXX.XXX.XXX", "XXX.X.X.XXXXXXXXXXXXXXXXXX.XXX", "XXXXXXX.XXXXXXXXXXXXXXXXXXXXXX", "X.XXXX..XXXXXXX.XX.XX.XXXX.XXX", "XXXX..XXX.XXX.XX.XXXXXXX.XXXXX", "XXXX..XXXXXXXX.X.XXX.X.XXXXXX.", "XX..XX.X.XX.XXXXXXXXXXX.XXXX.X", "..XXX..XX.XXXX.X.XXX.XX.XX.XXX", "XXXXX.XX..X.XX.XXXXXXXXXXX.XXX", "X.XXXXXXXXXXXXXX.XXXX.XX.XXXXX", "XXX.X.XX..XXXXXX.XXXXXX.X.XXXX", "XX..XXXX.XXX.X.XXX.X.XXXX.XXXX", "X.XX.X..XX...XXXXXX.X.X..XXXXX", "XXXXXXXXXXXXX..X..XXXXXX.X.XXX", "XXXXXXXX.XX..XXXXXXXX.XXXX...X", ".XXXXX..XXX.XXXXXXXXXXX.XXXXXX", "X.X..XXXXXXX..XXX..XXXXX..XX.X", ".X..X.XXXX.X...XXXXXXXXX.XX.XX", "XXXXX.XX....X.XXXXXXXXX.XXXXXX", "XXXXXX..X.XXX.XXXXXXXXX..XX.XX", ".XXXX.XXX.XXXXXXXXXX.XXXXXXXX.", "XXXXXXXXXXXXX.XXX.XX.XXXXXXXXX", "XXX.XXXXX.X.XXX.XXX.X..XX.XXXX", "XXXXXXX.XXXXXXXX.X.XXXXX.XXXX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> grille = {".X.XXX.XXXX.XX..XXXX.XXXXXX.XXX.XX.X.X", "X..XXXXXXXX.XX.XXXX.XXXXXX.XXXXXXX.XXX", "XXXXXXXXXXXXXXXX..XXXXX.XXXXXXX.XXXXXX", ".XXXXXXXXXX.XXX.XXXXXXXXXXXXXXXXXXXXX.", "XX.XX.XXXXXXXX..XXXX.XXXXXXXX.XXXX.XX.", "XXXXX.XXXX.XX.XXXXXXX.XXXXXXXX.XXX.XX.", "XXXX.XXX.XXXX.XXXXXXXXXXXXXXXXX.XXX.XX", "XX.XXXXXXXXX.XXXX.XXXXXXXXXXXXXXXXXXXX", "XX.XXXXXXXXXX.XX.XX.X.XXXX.XX.XXXX.XXX", "X.XXXX.X.X.XXX.XXXXXXX.XXXXXXX.XXXXXXX", "XXXXXXXXXXXXXXXXX.X.XXX.XXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXX.XXXXXXXXXXXX.X.XX.XX", "XXXXXXXXXXXXXXXXX.X.XXXXXXXX.XXXXXX..X", "XXXXXXX.XXXXXXXX..XXXXX.X.XXXXXX.XXX.X", "XXXXXXXXX.XX.XXX.XXXX.XX.XXXXXXXXXXXXX", "XXX..X.XXXXXXXXXXXX.XXX.XXXXXX.XXX.X.X", "XXXXXXXXXXXXXXXXXX.X.XXXXXXX.XXXXXXXX.", "XXXXXXX.X..XXXXX.X.XXXXXXXXXXXXXXXXXXX", "XXX.XXX.XXX.XXXXXXXXX.XXXXXXXXXXXX.XXX", ".XXXX.X.XXXXX.XXXX.XXXX..XXX.XXXX.XXXX", "XXXXXXXXXXXXXXX.XXXXXXXXX.XXXXXX.XXX..", "XXXX.XXX.XXXXXXXXXXX...XXXXXXX.XXXXXXX", "XXXX...XXXX.XXX.XX.XXXXXX.XXXXXXXXXXXX", "XXXXXXXXX.XXXXXXXXXXX.X.XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX...XX.XXXXXXX.X.XXXXXXX.", "XX.X.XXXXXXXX.XXXXXX..XXXXXXXXX.X.XXXX", "XXXX.X.XX.XXX.XXXX.XXXX.XXX.XXXX.XXX.X", "XX.XXXXX.X.XX..X..XXXX..XX.X.XXXXXXXXX", "XXX.XX.XXXXXXXX.XXXXXXXXX..XXXXXXX.XXX", "XXXX.XXXXXXXXXXXXXXXXXX....XX...XXXXXX", ".XXXXXX.XXXXXXXXXXXXXXXX.XX.X.XXXXX.XX", "X.X.XXXXXXXXX..XXXXXXX.XXXXXXXXX.XXXX.", "XXX.X.X.XXX.XXX.XX...XXXXXXXXXXXXXXXXX", "X.XXXXX.XXXXXXXXXXXXXX.X...XXX.X.XX.XX", "XX..XX.XX.XXXXXXXXX.X.X.XXXX.XXXXXXX.X", "XXXXXX.XXXX.XXXXXXXX.XXX.XXXX.XXXXXXXX", "XXXXX.X.XX.XXXXXXX.XXX.XXXXX.X.XXXXXXX", "XXX.XXXXXXX.XXXXXXXXXXX.XXX.XXXXX..XXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> grille = {"XXXXXXX.X.XX.X.XXXXX", "XXXXXXXXXXXXXXXXXXXX", "XX.XXXXX.XXXXXXXXXXX", "XXXXXXXXXXX.XXXXX.X.", "..XXXXXX..X.X.XXXXXX", "XX.XXX..X.X.XXXX.XX.", "XXXX.XXXXXX.XXX.X.XX", "XXX.XXXXXXXXXX.XXXX.", "XXX.XXXX.XXX...XX..X", "XXXXXXXXX.XXXXXXXX.X", "XXXX.XXXXXXXXXXX.X.X", "XXXX..XXXXXX.XXXXXXX", "XX.XX.XXX.X.X.XXXXXX", "XXXXXXXXXXXXXXXXXXX.", "XXXX.XX.XXXXXX.XXXXX", "XXX..XX.XXXXXXXXXX.X", "XXXXXXXXXXXX.XXXXXXX", "XXX..XXXXXXX.XX.XXX.", "XX..XX.X..XXXXX.X..X", "XX.XX..XXXXXXXXXXXX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> grille = {"XXX..XXXXXXXXXXXXXXX.XX.", "XXXXXXXXXXXXXXXX.XXXXXXX", ".XXX..XX.XXXXXXXX...XXXX", "XXX.XX...XXXX.X.XXXX.XXX", "XXXXXX.XXX.XXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXX.XXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXX", "..XXXXXX.XXXXXXXXX.XXXX.", "XXXX.XXXXXXXXXXXXXXXX.X.", "XXXX...XXXXXXXX.XXXXXXXX", "XXXXXX.XXXXXXXXXX.XXXXXX", "XXXXX.X.XXXXX..XXXXXXXXX", "XXXXX.XXXXXXXX.XXXXXXXXX", "XXXXXXXXXXXXX.XXXXXXXXXX", "XX.XXXXX.XXXXXXXXXXXXXXX", "XXXXXXXXXXXXXX..XXXXXXXX", "XXXXXXXXXXXX.XXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXX.XX.XXXXXX.XXXX", ".XXXXXXXXXXXXX.XXXXXXXX.", "XXX.XXXXXXXXXXXXX.X.XXXX", "XXXXXXXXXXX.XXXXX.XXXXXX", "XXXXX..XX.XXXXXXXXXXXXXX", "X.XX.XXXXX.X.XXXX.XX.XXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> grille = {".XXXXXXXX.XX", "X.X..X...XX.", "XXX.XXX.XXX.", ".XXXX.XXXXXX", "XX.XXXXXXX.X", "X.XXX.XXX.XX", "XXXXX..XXX.X", "XXX.XX.XXXX.", "XXXXX.XX.XXX", ".XXX..XX..X.", "X.X.XXXX.XXX", "XXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> grille = {"XXX..XX.X.XX", "XXXX..XX.X.X", "X.XXXXXX...X", "XXX....XXX..", "XXXXXX....XX", ".XXX..XXXXXX", "X.XX.XXXXXX.", "XXXXXX.X.XXX", "..XX.X..XXXX", "X.XXXXXXXXXX", "XXXXXXXXXXXX", "XXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> grille = {".XXXXX.XXXXX.X.X.XXXXXXXX.XXXX", "XXX..X...XXXXXXXXXXX.XX.XXXX..", "XX.XXXX..XXXXXXXXXXXXXXXX.XXXX", "XXXX..XX.XX.XXXXX..XX.XX..XXXX", "XXXX.XXXXXXXXXXX...XX...X.X..X", "XXXX.XX.XXXX..XXXXXXXX..X.XXXX", "XXXX.XXX.X.X.X.X..XXXXXXXXXXXX", "XXXXX.XXX.X.XX.XXXX.XX..X.XXX.", "XXXXXXXXXXXX.XXXX.X.XXXXXXXXX.", "XXXX.XX.XX.XXXX.XXXX..XXXXX..X", "X..XXXXXX..X.X.XXXXXXXX.XXX..X", "XXXXXXXX.XXX..XX....XXX..X.XXX", "X.XXXXXXXXXXXX.XXX..XXXX.XXXX.", "XXXX.XXX.X..XXX.X..XXXXXXXXXXX", "XXX.XX.XXXXXXXXXXXX..XXXXXXX.X", "..X.XX.XXX..XXXXXXXXXXXXXXXXXX", ".X.XXXXXXXXXXXXXXXXXXXXXXX.XXX", ".XXX.XX.XXXXXX.XXXXX.XX..XX.X.", "XXXXX.X.XXXXXXX.XXXXXXXXXXXX.X", "XX..XXXXXXXXXX..XXXXXXXXX..XX.", "XXXXXXXXXX..XXXX.XXXXXXXXX.XX.", "XXXXXXXX.XXXXXXXXXXXXX.XXXXXX.", ".XXXXXXX.XX.XX.X.XXXX..X.X.XX.", "..XXX.X.XXXXXX.XX.X.X...X.XX.X", "XXX.XXXXXXXXX..X.XXX..XXXXXXXX", "XX..XX.XXXXX.XXXX..XXXXXXX.XXX", "X.XXXXXXX.XXXX.XXXX.X.X.XXXX.X", "XXXXXX.XXX.XX.X.XXXXX.X.XXX.XX", "XXXXXXXXXX.X..X.XX.XXXXXXX.XXX", "XXXXXXXXX.XX.X.XXXXXX..XX.XXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> grille = {"X.XXXXXXX.XXX..XX.XXX..X.X", "XXXX.XXX.X..XX.XX.XXXXXXXX", "XXXXXXX.XXXXXXXX.XX.XXXX.X", "XXXXXX....X.X..XXX.X.XXXXX", "XXXXXXX.XXX..X.X.X.XX.XXXX", "XXXXXX.XXXX.X.XXXXXX.XXXXX", "XX...XX.XXXXXXXXX.X.XXXXXX", ".XXXXXXX.X.X.XXXXXX..XX.XX", "XXX.XXXX.XXXXXX....XXXX.X.", "X.X...XX.XXX.XXX.XXXX.X.XX", "XXXXXXX.XX.X.XX.XXX.XXXXXX", "XXXXXX.XXXXX.XX.XXX.XX.XXX", "XXXXXX.X.X.XXXX.X.XXXXXXXX", "X.XXX..XXX.X.XXXX.XX.X.X.X", "..XXXX.XXXXXX.XXX.XX.XX.XX", "XXXX..XXXX.XX.X.XXXXXXXXXX", "X.XX.XXXXXXXX....X....X.X.", "XX..XXXXX.X.XXXXXXXXXXX.XX", "XXXX..XXXXXX...XX.XXXXXXX.", "XXXXX.XXXXX.X.XXXXXX..XXXX", "XXXX..XXX.XX.X.XXXXX.X..XX", "..XXXXXXXX.XXX.X.XX.XXX.XX", "XXXXX.XX.XXXXXXXXXXX.XXXXX", "XXXXXX.XXXXXXXXXXXXXXX.X.X", ".XXXX.XXXXXXX..XXXXXXXXX.X", "XX.XXXXXXXXXXXX.XXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> grille = {"X.X.X.XX.XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX.XX.X..XXX", "X.....XXXX.XX.X.X.XXX..XXXXXXXXX.XX.XXX.XX.X.XXX..", "X.XXXX.XXXXXXX.X.XXX...XXXXXXXXXXXXX.XXX...XXXX..X", ".XXXXXX..XXXXXXXXXXX.XXXXXX.XXXXXX..XXXXXXXXXXX.XX", ".XX.XXXXXXXX..X.XXX.XXXXXXXXXXX.XXX...X.XXXXXX...X", "X.XX.XXXXXXXX.XXXXX.XXXXXX...XXX.XXXX.XXXX.XXXXX.X", "XXXX.XXX.XXXX.XXX.XXXXX.XX.XX...XX.XXXXXXXXXXXXXX.", "XX.XXX...XX.X.X.XXXXXXXXXXXXXXXXXXXX.XXX.XX.X.XXXX", ".X..X..XXXXXXXXX.XXXXXXXXXXX.XXXX.XX...XXXXXX.X..X", "XXXXXX..XXXXXXXXXXX.XXX...XXXX.X.X.XX.XX..XX.X.X.X", "XXXX.XXX..XXXXXXXXX..XXXXXX.X.XX..XXXXXXXXXXXXXX..", "XXX.XXXXXXX.XXXX.XXXXXXXXXXXXXXXXX..XXXXXX.XXX.XXX", "XXXXXX.XXXXX.XXXX.XX.XXX..XXXXXXXXXXXXXX...XXX.X.X", ".XX.XXXXXX.XX.X..XXXX..X.X..XXXXXX.XX.XXXX..XXX.XX", "XXXXXXX.XXXXX.XXX..X.X.XXXXXXXXXXXXXX.XXXX..XXXX.X", "XXXXXX..XXXXXX..X..XXX.XXXXXXXX.XXX..XXXXXXXXXX..X", "XXXXXXX.XX...XX...XXXXX..XXXXXX.XXXXX..X.XXXXXXX.X", "XXX..XXXXXXXXX.XXXX..X.X.X.XX.XXXX.XXXX.XXXXXXXXXX", ".XX.XX.XXXXXXXXXXXXXX.XXX.X...X..XX.X..XX.XXXX.XXX", "XXX.XXX.X.XXXXXXXXX.XX.XXXXXX..X.X.XXX.XXXXXXXX.XX", "XX.XXXXX..XXX.XX.XXX.XX.XXX.X..XXX.XXX.XXXXXX.XXXX", "XXXXX.XX..X.XXXXXXXXXX.XXXXXXXX.XXXX.XXX.X.XXXXX..", "XX.X.XXXXXXXX.X.XXXX..XXXXXXXXX...XXX.XXXXXXXXX..X", "XXXXX.XXXX.X..X.XX.XX.XX.XX...XXXXX.XXX..XXXXXXXXX", ".XX.X.XX..XXXXXXX.X.X.XXXXXXXX.XXXXX.X..XXX.XXXXXX", "X.X.XX.XXXXXXX.XXX.X.XX.X..X.X.XX.XXX..XXXX.XXXX.X", "X.XXXXX.X..XXX..XXXXX..XXXX.XXXXXXX.XXXX.X.X.XX.XX", "X.X.XXX.XXXXXXX.X.XX.XXXXXXXXXXXXXXXXXXX..XX.XXX.X", "XXX.X...XXXXXX.X....XX.XXX.X.XXXX.X.XXXXX.X.XXXX..", "XXX.XXXXXXXXXXXXXXXXXXXXXXX.XXXX.XXXX.XXXX..XXXXXX", ".XXXXX..XXX.XXXXXXXXXXXXXXXXXX..XXXXXX..XX.XXXX.XX", "XX.XX.XXXXXXXX.XXX.XXX.X..XXXXXXXXX..XXX..XXXXX.XX", "XXXXXXX...XX.XXXX.XXXXXX..XXXXX...X.XXXXXXXXXXXXXX", ".X..X..XXXXXXXXXXXXXX..X..XXX.....XXXXX.XXXXXX..XX", ".XXX.X.XXXX.X.XXXXXX.XXX.XXXXXX.XXX..XXX.XXXXX.XXX", "X.XXXXXX.X.XXXX.XXXXXXXXXX.X..XXX.X.XX.X.XXXXXXXX.", "XXXXXXXXXXX.XXXXXX.XXXXXX.X.XX..X.XX.XXXXXXXXXXX.X", "XXXXXXXXX..XXXX.XXXX.XXXXXXXXXXXXXX.X.X.XXXXXXXXXX", "XXXXXX.XXXX.XXXXXXXXX.X.XXXXX.XXX.XXXX.X.X.XXXXX..", ".XX..XX.XXXX.XXX.XXXXXXXXX.XXXX..XX..XX..XXXXXX.XX", "X.XXXXXXXXXXXXXXXXXX.XX.XXXXXXX.XXXX.XXXXXXXXX.X.X", "XXXXXXXX.XXX.XXXXXXXXX.XX.XXX...XX.XXXXXXX.XXXXX.X", "..X...XXXX.XXXXXXXXXXXX.XXX...XXX.X..XXXX..XX.X..X", "..XXXXX.XXXX.X..X.XX...XXXX......XXXX.XXXXXXX.XXXX", "X.X.XXX.X..XXXX.XX..XXXXXXXXX.XXXXXXX.X.XXXXXXX..X", ".XXXXXX....XXXXXXXXXXXX.XXXXXXXXXX..XX.XXXXX.X.XXX", "XXXXXXXXXXXXXX.X.XXX..X..XXX.XX.XXXX.X..X.XX..XXX.", "XXXXXXXXXXXX.XXXX.X.XXXXX.XX.X.XX.X.XXXX.XXXXXXXXX", ".XX.X.XXXX..XXXX.XXX..XXXX..X.X.XXXXX.XXXXXXXXXXXX", "X.XXXXXXXXXXXXXX.XXXXX.XXX.XXXXXX.X.XXXXX.XXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> grille = {".XXXXXXXXX.XXXXXXX.XXXXXXXXX.XXXXXX.XXXXXXXX..", "XXXX.XXXXXXXXXXXXXXX.X.XXXXXX.XXXXXXXXXXX.XXXX", "XXXXXXXXXXX.XX..XXX.XXXXX.XXXXXXXXXXXXXXXXXXXX", "XXXXXXX.XX.X.XXXXXXXXXXX.XXXXXXXX.XXX..XXXX.XX", "XXXXX.X.XXXXXXXXXXXXXXXXXXXXX.X.XXXXXXXXXX.XXX", "XXXXX.XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXX.XXXXXX", "XXXXXXXXXXXXX.XXXX.X.XXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXX.XXXXXX.X.XXXXX.XXXXXX.XXX.XX", "XXXX.XXXXXXXX.XXXXXXXXXXXXXXXX.XXXXXXXX..XXXXX", "X.XX.XXXXXX.XXXX.X.XXXX.XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXX.XXXXXX..XXXXXXX..XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX.XXXXX.X.XXXXXX.XXXX.XXX", "XXXXXXX.XXXX.X.XXX.X.XXXX.XXXXXXXXXXXXXXXXXXXX", "XX.XXXXXXXXX..XX.XXXXXXXXXXXX.XXXXXXXXXXXX.XXX", "XXXXXXXXXXX.XXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXX.XXXXXX.XX.XXXXX.XXXXXXXXXXXXXXXXX.XXXXXXXX", "XXXXXXX.XXXXXXXX..XXXXXXXXXXXXXXXXXXX.XX...XX.", "XXXXX.XXXX.XXXXXXXXXXXXXX.XXXXXXXXXXXXX.XXXXXX", ".XX..XXX.XX.XXXX.XXXXXXXXXXXXXX.X.XX.XXXXXXXXX", "XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX.", "XXXXXXXXXX.XXXXXXX.XXXX.XXXX.XXXXXXXXX.X.XXXX.", "XX.XXXXXXXXXXXXX.XXX.XXXX.XXXXXXXXXXXXXXXXXXXX", "XXX.XXXXX.X.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXX.XX.XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX", "XX.XXXXXXXX.XXX.XXXXXX.X..XX.XXXXXXXXXXXXXXX.X", "XXXXX..XXXXXXXXXXXXXX.XXXXXXXXXXX.XXX.XXXXX.XX", "XX.XXXXXXXXX.XX.X.XXXXXXXXXXXXXXXX.XXXXX.XXXXX", "XXXXXXXXXXXXXXXXXXX..XXXX.XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXX.XXXXXXXXX", "XXXXXXXXXXXXXXXX..XXXXXXXX.XXXXXXXXX.XXX.XXXXX", "XXX.XXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX.XXX", ".XXXXXXXXXXXXXX.XXXXXXXXXXXX.XX.XXXXXXXX.XXXXX", "X.XXXXXXXXX.XXXXX.X..XXXXXXXXXXXXXXXXXXXXXXXXX", "X.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXX.XXXXXXXXXXX", "XXXXXXXXXXXXXXXXX.XXXXXXXXXX.XXXXXXXXXXX..X.XX", "XXXXXXXXXXXXXXX.XXXXXXX.XXXXXXXXXXXXXXX..X.XXX", "XXXXX.XXXXXXXXX.XX.X.XXXXX.XXXXX.XXXX.XXX.XXX.", "XXXXXXXXXXXXX.XXXX.XXX.XXXXX..XXXXXXXXXXXXXXXX", "XX.XXXXXXXXXXXXXXXXXX.XX...XXX.XXXXXXXXXXXXXXX", "XXXXXXXX...XXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXX.X", "XXXXXXXX.XXXXXXX.XXXX.X.XX..XXXXXX.XXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXX.XXX.XXXX..XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXX.XXXXX.", "XXXXXXXXXXXXXXXXXXXXX.XXXXXXXXX.XX.XXXXXXX..XX", ".XXXXX.XXX.XXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX", "XXXXXXX.XX.XXX.XXXXXXXXXXXX.XXXXXXXXXXX...X.XX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> grille = {"XXXXX..X...XX.XX.X.XXX", "XX...XX.XXXXXXXXXX.XXX", "XXX.XX.XXXXXX.X.XXX.XX", ".XX.XXXXXX.X.XXXXXXX.X", "XXX.XXXXXXXXXXXX.XXXXX", "XX.X.XX.XXX..X..X.XXXX", "XXXXXXXX..X.XXXXXXXXXX", "XX.XXXX.XXXXXX.XX.XX.X", "XX.XXXXX.XXXXXXXXXX..X", "XXXXXXXXXXXX.XXX.XXXX.", "XXXX.XXXXXXXXXXXXXXXXX", "..XXXXXXXX.XXXXX.XXXXX", ".XXXXX.XX.XXXXXXXXXX..", "XXXXX.XXXXX.XXX.XXX.XX", "XXXXXXX..XXX.X.XXXXXX.", "XXXXX..XXX.XX.XX.XXXXX", "XX.XXXXX...X..XXX..XXX", "X.XXX.XXXX.XXXXXX.XXXX", ".XX.XXX...XXXXXXXX..XX", "XXX.XXXXXXXX.XXXXX.X.X", "XXXXXXXXXXX.XX.XXXXXXX", "XXXXXX.XXXXX.XXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> grille = {"XXXXXXXXXXX.XX", "X.XXXXXXXX.XXX", "...XXXXXXXXXXX", "..XXXXXXXXXXXX", ".XXXX.XXXXXXXX", "X.XXX.XX.XXXX.", "XXX.X.XXXX.XXX", "XXX.XXXXXXXXX.", "XXXXXXXXXXXXX.", "XXXXXX.XX.X.X.", ".XXX.X..XXX.XX", "XXXX.XXXXXXXX.", ".X.X.XXXXXX...", ".XXXXXX..X.XXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> grille = {"X.XXXXXXXXXXXX", "X.XXX.XXXXX.XX", "X..XXXX.XXXXXX", ".X.XXXXXXXXXX.", "XXXXX.XXXXXXX.", "XXXXX.XXXXX.XX", "XXX..XXXXXX.XX", ".XXXX.XXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX", ".XXXXXXXXXX.XX", "X.XXX.XX.XX.XX", "XX.X.XX.XXXXXX", "XXXX..XXXX.XXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> grille = {"XXX.", "XXXX", "X.XX", ".XX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> grille = {"XX.XXXXXXX.X.XXXXXXXXXX..XXXXXX.XXXXXXXXXXXXX.X.X.", "XXXXXX.XXXXXXX.XXX.XX.XXXXXXXXXXX.XXXXX.XX.XXXX..X", "XXXXXXXX.XXXX.XXXX.XXX.XXXXXX.XXXXXXX.XXXX..XX.XXX", "XXXXXXXXX.XXXXXXX..X.XXXXXX..XX.X.XXXXXX.XXXXX..XX", "XXX.XXXXXXXXX..X.X.XXXX.X.XXX.XXXXX.X.XXXXXXXXXXXX", "XXXXXXXXXX.XXXXXXXXXX.XXXXXXXX.X.XXXXXXX.XXXXXXXXX", "X.XXXXX.XXXXXXXXX.XXXX.XXXX.XXX.XXXXXX.XX.XX..XXX.", "XX.XXXXXXXXXXXX..XXXXXXXXX.XX.XXXXX.XXXXXXXX..XXXX", "XXXXX.XXXXX...XXXXX.X.XX.XXX....XXXX.X..XXXXXXXXXX", "XXX.XXXXXXXXX.XXX.X..XX.XXXXXX.XXXX.X.XX..X..XXXXX", "XXX.XXXX.XXXXXXXX.X..XXX.XXXXXXXXXX.XXXXXX.XXXX.XX", "XX.XXXXXXXXXXXXXXXXXXXXX.X.XXX.XXXXX.X.XX..XXXXX.X", "XXXX.XXXXXX.X.XX.XXXXX.XXXXXXXXX.X.XXXX.X.X.XX.XXX", "XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX.X..XXXXXXXX.XXXX", ".XXXXXXXXXXXXXX.XXXXXXXXXXXX.XXX.X.XXXXXXXXXXXX.XX", "XXXX.XX.XXXXXXXX.XXXX.XXX.XXXXXXX.X...XXX.XXXXXXXX", "XXX..X.XXXXXXXXXXX.XXX.XXX.XXXXX.XXXXX.XXXXXXXXX.X", "X.XXXXXXXXXX..XXXXX..XXXXXXXXX.X.XXXXX.XXXX.X.XXXX", "XXXXXXX.XXXX.XXXXXXXXXXXXXXXXXXX.XXXXX.XX.XXXXXXXX", "XXX.XXXXXX.XXXX.XXXXXX.X.XXXX.XXXX.X.XXXXXXXXXXX.X", ".XXXXXXXXXXXXXX.X.XXXXXXXXXX.XX.XXX..X.XX.XXX..XXX", "XX.XXXX.XXXXXXXXXX.X.X..X.XXXXXXXXXXX.XXXXXXXXX.XX", "XXXXXXXX.XXX..XXXXX.XXXXX.XXXXXXXXXXXX.XXXXXXXXXXX", "XXXXXXXXX.XX.XXXXXXX.XXXXXXXXX..X.XX.X.XXXXX.XX.XX", "XXXXX.XXXXXX.XXXXXXXXXXXXXX.XXXXXXXX.X.XXXXXXX.XX.", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX.XXXXXXXXXX.XXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXX..XX", "XX.XXXX.XXX.XXXXX.XXXXXX.XXXXXX.XXXXXX.XXXXX.XXXXX", "X.XXXX.XXXXXXXXXX.XXXXX.XXXXX.XXXXX.XXX.XX.XXXX.XX", "X..XXXX..XXX.XXXX.X.XXXXXXX.XX.XXXXXXX.XXXXXXXXXXX", "XXXX.XX.XXXXXXXXX.XXXXXXXXXX.XXXXX.XX.XXXXXXXXXX..", "XXXXXXXX.XX.XXXXXXXXXXX.XXX.XXXXXXX.X.XXXXXXXX.XXX", "XX.XXXXXXX.XXXXXXXXXXX.X.XXXXXX.XXXXXXXXXXXXX..X.X", "XXXX..XXXXXXX.XXXXXXXXX.X.XXX.XXXXXXXXXX...XXXXXXX", "XXXXXXXXXXXXXXXX.XXXXXXXX.XX.X.XXXXXXXXXXXXXXX..X.", "XXXXXXXXX.XXXXX.XXXXXXX.XXXXXXXXXX.XXXXXXXXXX.XXXX", "XXXXXXXX.XXXXXXXXXXX.XXXXXXXXXXXXXX.XX.XXX.XXX.X.X", "X...X.XX..XX.XXX.X.XXXXXXXXXXXXXXXXX.XXXX.XX.XX.XX", "XXXXXXXXX.X.XXX.XXX..XXXX.XXXXXX.XXXXXXXXX.XXXXXX.", "XXXX.XXXXXXX..XXXXX.XX.XX.XXXXXXXXXXXXXXXX.XXXX.X.", "XXXX.XXXXXXXXXXXXXXX.XXXXXXXXXXX.XXXXXXX.XX..X.XXX", ".XXXXXXXXXXX.XXXXXXXXXX.XX.XXX..X.XX.XXXXX.XXXXXX.", "X.XXXXXXXXXXX.XXX.XXXXXXXXXXXXXXXXXXX.X..XXXXXXXX.", "X.XXXXX.XXXXXXXX.XX.XXXXXXXXX..X.XXX.XXX.XXXXXXXXX", "X.XX.XXXXXXXXXXXXXX.X.XXXXXXXXXXXXXXXXXXXXXXX..XXX", "XXXX.XX.XXXXXX.XXXXXXXXXXXXXXXX.X.XXXX.X.XXXX.XXXX", "XXX.XXXXXXXX..X..XXXXXXXX.XXXX...X.XXXXXX.XXXX.XXX", "X.XXXX.XXXXX.XX.XXX.XXXXX.XXXXXXXX.XXXXXXXXXXXX..X", "X.XXX.XXXXXXX.XX.XXX.X.XXXXXXXXXXXXX..XXXX..X.XXXX", "XXXXXXXXX.X.X.X..XXXXX.XXXX.XXX.XX.XXX.XXXXXXX..X."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> grille = {"XXXXX.X..X", "XXXXXXXXXX", "XXXXX.XX.X", "XXXXXXXXXX", "XXX.XXXXXX", "XX.XX.XXX.", "XX.XXXXXXX", "X.XXXXXXXX", "XXXXXXXX.X", "XX....XX.X"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> grille = {".XXXX.XX.X", "XXXXX.XXX.", "XXXXXXX..X", "XX..XX.X.X", "XXXXX..XX.", "XXXXXXXX.X", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXX.XX.XX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> grille = {"XXXXX.XX.X..XXXX.XXXXXXX..XXXXXX.XXXX..X", "XXXXX.XXXXXXXXXXXXXXXXX..XXXXXXXXXXXX.X.", "XXX.XX.X.XXX.XXX.XX.XXX.XXXXXX.XXXXXXXXX", "X..XXXXXXXXX.XXX.XXXXX.XXXXXX.XXXXX...XX", "..XXXXX.XXX.XXXXXXXX.XXXXX.XXXXXXX..X.XX", "XXX.X.XXX.XXXXXXXXXXXXXXXXXXXXX.XXXXX.XX", "XX.X.XX.XXX.XXXXXXXX....XXXXXXXX..X...X.", "XXXX.XXXXXXX.X.XXXXXXXXXXXXX...XXXXXX.X.", "XXXXXXXXXXXXXXXXX.XX.XXXX.XXXXXXXXXXXXXX", "XXXX.XXX.X.XXXX..XXX.XXXXXXXXXXXXXXX....", ".XXX.XXXXXXXXXXXXX.XXX.XXXX.XXXXXXXX.XXX", "XXX.XXXXXXXX.XXXXX.XXXXXX.XXXXXX.XXXXXX.", "X.XXXXXXXX.XXXXXXXX.XXXXX.X..XXXXX..XXXX", "X.XXX..XXXXX.XXXX.XX.XXXXXXXXXXXXXXXXXX.", "XXX...XX..XXXXXXXX.XXXXXXXXXXX.XXXXXX...", "X.XXX...X.XXXX.XXXXXXXXXXXX.X.X.XXXX.XX.", "XX.XXXXX.X.XXXXXXXX.X.XXXXXXXX..XXXXXXXX", "XXXXXXXXXXXXXXXXX.X.XXXXXXXX.XXXXXXXX...", "XXX.XXXX.X.XXXXXX.XXXXXX.XXX.XXX.XXXX.X.", "XXXXXXXXX.XXXXXXXX..X.XXXXXXX.XXXXX.XX.X", "XXXXXXXXXX..XXXXX..XXXXXXXX.XXXXXXXX.XXX", "X.X.XXXXXXXXXXXXXXXXXXXXX.XXXXX.XXX..XXX", ".XXXXXXXXXX..XXX.X.XXX.X.XXXXXX.XXX.XXXX", "..XXXX.XX.XXX.XX..XXXX.XXXXXXXX.XX.XXXXX", "XX.XX.XX.XXX.XXXXXXXXX..XXXXXXXXXX.X.X..", "XXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX", "X..XXXX..X.X.XXX.XX.XXXXXXXXX.XXXXXXXXXX", "XXXXX.XXXX.XX..XXXXX.XXXXXXXXXXXXXXX.XXX", "X.XX.XXXXXXXXXX.XXXXXX.X.X.XXX.XXXXXXXXX", "XXXXXXXXX.XXXX.XXXXXX.XX.XXX..XXX.X.XXXX", "X.X.XX.X..XXXXXXXXXXXXXX.X.XXXXXXXX.X..X", "XXXXXX.X.XXXXXXXXXXXXXXXXXX...XXXXXXXXX.", "...XXXXXXXX.XXXX.XXXXXXX.X..X..XX.X.XXXX", "X.XXX.XXXX.XX.XXX.XXXXXX.X.XXX.XXXXX.XXX", "X..XXXXXXXXXXXX.XXXXX.XX.X.XXX.XXXXXXXXX", "X.XX..XXXXXXX.XXX.XX.XXX.XXX..XXXX.XXXXX", "XX...XXX..X.XX.XXXX.XX.X.X.XXX.XXX.XXXXX", "XXXX...XXXXXXXXXXXXXXXX.XXXXXXXX.XX.XXXX", "XXXX.XXXX.XXXXX..X..XXXX.XX.XXXXXXXXXXX.", "XXXXXXXXXXXXXX.XXXXXXXXXX.XXXXXX.XXXXXX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> grille = {"XXXXX.XX", "XXXX.XXX", "XXX..X.X", ".XXXXXXX", "XXXXXXXX", "XXXXXXXX", "X.XXXXXX", "XXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"....X.XX", ".XX..XXX", "X....X.X", ".XX.XXXX", "XXXXXXXX", "XXXXXXXX", "X.XXXXXX", "XXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> grille = {"....", "XXXX", "XXXX", "XXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> grille = {".XXXXXX.", "XXXXXXXX", "XXXXXXXX", "XXXXXXXX", "XXXXXXXX", "XXXXXXXX", "XXXXXXXX", ".XXXXXX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> grille = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "........................XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> grille = {"XXXX", "XXXX", "XX..", "XXX."};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X.XX", "XXXX", "XX..", "XXX."};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> grille = {"XXXX", "XXXX", "XXXX", "XXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..XX", "..XX", "XXXX", "XXXX"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> grille = {"..XX", "X.XX", "XXXX", "XXXX"};
    SquareCode* pObj = new SquareCode();
    clock_t start = clock();
    vector<string> result = pObj->completeIt(grille);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..XX", "..XX", "XXXX", "XXXX"};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=4720&pm=2303
********************************************************************************
#line 2 "SquareCode.cpp" 
 
#include <string> 
#include <vector> 
#include <algorithm> 
 
using namespace std; 
 
#define FOR(k,start,end) for(typeof(start) k=(start); k!=(end); ++k) 
 
class  SquareCode { 
  public: 
  vector <string> completeIt(vector <string> g) { 
    int n = g.size(); 
    for(int x = 0; x <n/2; x++) for(int y=0; y<n/2; y++) { 
      char c1 = g[y][x]; 
      char c2 = g[n-1-x][y]; 
      char c3 = g[n-1-y][n-1-x]; 
      char c4 = g[x][n-1-y]; 
      int i = 0; 
      if(c1 == '.') i++; 
      if(c2 == '.') i++; 
      if(c3 == '.') i++; 
      if(c4 == '.') i++; 
      if(i > 1) return vector<string>(); 
      if(i == 0) g[y][x] = '.'; 
      } 
    return g; 
    } 
  }; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/