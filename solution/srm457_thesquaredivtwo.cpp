/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10299
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

class TheSquareDivTwo {
public:
    vector<string> solve(vector<string> board);
};

vector<string> TheSquareDivTwo::solve(vector<string> board) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> board = {"..", "C."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..", ".C"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"CC", ".C"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C.", "CC"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {".C..", "CC.C", "..C.", "CCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...C", ".C.C", ".C.C", "CCCC"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"...CCC", "...CCC", "...CCC", "CCC...", "CCC...", "CCC..."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"......", "......", "......", "CCCCCC", "CCCCCC", "CCCCCC"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {".....C", "....CC", "...CCC", "..CCCC", ".CCCCC", "CCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".....C", "....CC", "...CCC", "..CCCC", ".CCCCC", "CCCCCC"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"C.C..C.C..C..C.", "CCC...C..CCC.C.", "......CC...CCCC", ".C..CC.C.C.C.C.", "C....C.C......C", ".....C..CCCCC.C", "CCC.......CCCCC", "..C.C..C.C...C.", "CCC....CCC.CC..", "CC.CCCC.CCCC...", ".C..C.CC.C.CC.C", "C.CCCC..CC..C.C", ".CCCC.CCCCCC...", "..C...C.CCC.CC.", "CCCC..CCC.C...."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...............", "...............", "...............", "...............", "...............", ".........C..C..", ".........C.CC..", ".C....C.CCCCC.C", ".C.C.CC.CCCCCCC", "CCCC.CC.CCCCCCC", "CCCC.CCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"."};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {".CCC.CC..C.C.C..C.C.CC...C..C.CC....", "...CC.C....CC.CC..C.C.C....C.C...CC.", "...C.C.C..C..C.C.CC.CCC.CCC..C.CCC.C", "C...C..CC.C.C.....CCCC...CC..CC.CCCC", "C...CCC.CC.C.C..CCCC...CCC.C..CCC.C.", "CC.C.........C.CCCC....CC.C...CCCC.C", ".C...C.CC..CCC..CCCC.CCC.CC..C...C..", "........CC.C.CC.CCCC..C..C.....C.C..", "CCC..CCC.C....CC...C...CC.C....C..CC", "..CCC.C.C..CCC.CCC..CCCCC.CC.C...CCC", "..CCCCC...CCCCC.CC....CC..CC.....C..", "...CC...C.C.C.CCCC....C.CCC....C.CC.", "..CCC..CCC.C.CCCC...C.C......C....CC", "C.C....CCCCCC.C..C.C..C...CC.C..C..C", ".C.CC....C.C....CCC.C...C..C.CCCC.C.", "CC..CC..C.C...C...C...C..CCC.C.CCCC.", "C..CC.CC.CC...C.CCC.C..CCC.C.C.CC.C.", "CCCC.C.CCCCCC.C.....CCCC...CCC.CCC.C", "C...CC..CC.CC.C...C.C.C..C.C.C....CC", ".C..C......CC..CCCCCCCC.C.CC.CCCCCCC", ".CC..CCCC.C..CCCC.C...C.CC..C.CC.C.C", "CCC..C.CCCC.CCC.C..CCCC..CCC...CCC.C", "CC.CC.C..C...C.CC..C....CCCC.CC.CCC.", "CC.C....CCC..C..CCC..CC...C.CCCC.C..", "C..CCC.....CCC.C.CCCCC......C..C..CC", ".....C......C.CCCCCCC......C...CC.CC", "..C....C..CCCC..CC.C...C.C.CCCC.CC.C", ".C.C...C.C.CC.C.C.CC.C...CCCCC.CCCC.", ".C..CC...C.CC.C..C.C.CC.C.CC......CC", "C....C..CCC..CC.CC....CC.C.CC...CCCC", "..CCCCC...CCC..C....C.CC....C....CC.", "CC.C.....C.CC.CCC..CCC.CCCC..C.C..CC", "....C...CCC.C.C.....C.C..CCC.C..CC.C", "C.......CCCC..C..C.C.CC.....C..CC.C.", "...CCCCCC..C..C.CCCCC...C..C.C.....C", "C..CCC...CCCCC.CCCC.C.CCCC.C..CCC.CC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "...................................C", ".................C...C.............C", ".........C.......C.C.C.............C", ".........C.......C.C.C.............C", "....C....C......CC.CCC.....C...C...C", "..C.C....C......CC.CCCC....C...C...C", "..CCC.C..C......CC.CCCCC..CC.C.C...C", "..CCC.C..CC..C.CCC.CCCCCC.CC.C.C..CC", "C.CCCCC.CCCCCCCCCCCCCCCCC.CCCC.C..CC", "C.CCCCC.CCCCCCCCCCCCCCCCC.CCCCCCC.CC", "CCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"CCC..C.C.C.C..CCC.CCC.CC.CCC.", "CCCC.C..CC.C.CC.......CCC...C", "CCC..C..C.C...C.C..CCC..C.CC.", ".C...C..CCC.CCC.C.C..CC..C..C", ".CCC.CC..CCC.CCC.C...CCC.CCCC", "CCC..CC.C..C.C..C.C....CCCC.C", "C.CC.C...C.CC.C...C..C.....C.", "..CC.CC.CCCCC....CCC....CCC..", "C......C.C.CC...CC..CC...CC..", "..C.C..C..CC.CC...CC..C.C.C.C", ".C....CCC.C..CC.C.CCC..C.CC..", ".C...........CCCC..C.C.CCCC..", ".CCC..C..CC...CCCC....C.CCC.C", "CC...C.C.C.CC.C.C.C...CCCCC..", "C.CC..CC..CC.CC.....CC...CC.C", "CC...C..C.CCCCCCCC.C..CCC.CCC", ".C......CC..CC...CCC..CCC..C.", "CCCCC.CC.....C.C..CCC.C..CC..", "C.C..C...C....C...CCC.C.CCC.C", "CC.C.C.CC.C.C.CC.....C.CC.C..", ".CCC.C.C..C.CC.C...C..CCCC.CC", "..C..CCC.CC.C..C..CCCC..C..CC", "...C.CC......CCC..CC.CCC.CCC.", "CCC.C..C.CCCC.C.C.C....C.C...", ".C...C...C.CC.CCC.C....C....C", "..C.C...C...C.....C.CC.C.C..C", "...CCC.C..CC..C..CCCCC.CC.CCC", ".C..CC....CCC.CC.C..CCCC..CCC", ".....C..C.C.CCCCC.CC..C...C.."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", "....C..........C.............", "C...C..........C.............", "C...C..........C..........C..", "C...C..........C....C.....CC.", "C...CC.C....CC.C.C..CC....CC.", "CCCCCC.C..C.CCCC.C.CCCCC..CC.", "CCCCCC.C.CC.CCCC.CCCCCCC..CC.", "CCCCCC.C.CC.CCCCCCCCCCCC..CCC", "CCCCCCCCCCCCCCCCCCCCCCCCC.CCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"CCC...C..C.C..C.C.CC...C.CC.CCCCCC..CC.CC.CC", "C.CCC.CCCC...CC....C.CCC..CC..CCC..C.CCCCCCC", "C..C..C.C...C.CC...C.C.CC.CCC..CC..CCC.C.C.C", "CCC.C........CC..C.CC.C.....C.CC.C.CCC.CC.C.", ".C.CC.CCCC.C..CC.C.C.C.C..C..CCC..CC.CC.C...", ".CC...CC.CCC.....CCC.C.CCCC......CCC.C...CC.", "CCCCC.CC....CCC...C.CCC..C..C..C...C.CCC...C", "CCCCC.CCC...C..CCCC......CCCC.CCCC.C.....C..", ".....CCC.C.C..C.C.CC....CC.CC.C.C.C....C.C.C", "CC.CCC.CCCC..C..C...CCCCCCCC.CC..C.C..CCCC..", "CC.CC....C..CC.CCC.CCCC.CC..CCCCC...CC.C....", ".C.CCC.C.CC..C.C....CC.C.C....CCC.....C....C", "......C...C..C....CC......CCC.CC.....CCCCCCC", "C.CC..C.CCCC..C..CC....C.C..CCCCC.C.CC..C...", "...C..C..CCC..CCC.C.CCC..CC.CC..CC.CCCCCCC..", "CC..CCC.C...C.C.CCC.CCCCC.C..CC.C.CC.C.CC.C.", "CC..C..CC.C..CC...C.CC..C..C..C..C.C..CCCC..", "C.C...C..C..C...CC...CCC.CC.C..CC.CCCC..CC..", "..C.C..C.C.CCC..C.C.CCCC..C.C.C..CCCC.C..CC.", "CCC..CC.....CC..CC..C.CCC.C..CCC.CC.C......C", "CCC.C..CC.C.CCCC.CCCCCC.CCCCC.CC..CC...C.CCC", "CC.CC...CC.....C...C.CC.CC....CCC.CCC.C.C.CC", ".CCC.C.CC.C....CCCC...C..C.CCCC..C..CC..CC.C", "....CC..C......CCC.CCC..CC..CC.CC.CCC..CC.CC", ".CCCCC.CCC....C.CCCCC.C....C..CCC.CC.CC.CC.C", "CC..C.C....CCC...C..C..C..C....CCC.C.CC.CCCC", "...C.CCCCCCCC...C..C.....C.CC..C..CCCCC..CC.", "...C...C......CC.CC.CCC.CC...CC.C..C.C..CCC.", "...CCC.CC....CCCCC......CCC.CCC.C.CC.C.CC.C.", "...C.CC....C....CC.CC.C.CCC.CCC..CC.CC.CCCC.", ".C..C.CC.CCCCC.CCCCCC..C.C...C.CC.CCC.CC..CC", "..CC.CC.....C......C..C.C.C.CC.C.C.CCCC...CC", "..C.CCC.C.CC..CCCC..CCCCC...C.C..CC.CC.CCCCC", "..CC.C..C..CC.C.CC.CCCCC.C.C.C.CCC..C.CC...C", ".CCCCCC..CC.CCC.CC..C.C..C.C.CCCC.CC.C..CC..", "C.....CCC.C.CCCCC.CCCCC..C.......CCC.CCCC.C.", "CCC.C.C.C.C.CC..CCCCC.C.CC.C...CC.CC.CCC.C.C", ".C.CC..CC.C.C..CC.CC.C...C.C..C...CC......CC", ".CC.CC.....CCCC.C.CC..CC...CCCCCC..C.CC..CCC", ".C..CCCCC.C.CC.C.C.C.C.CC.CC..C.CC....CC.CC.", ".CCCCCC.CC...CC.CC.CC..CC.C....CCCC....CC.C.", ".....CCCCC.CC.C...C...CCCCCC.........CC..C..", ".CCCC.CC.......CCC..C.C.C.....CC......C.C.CC", ".C..C..C.C..C...CCCC.CC....CCC..CCC.C..CCC.."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "....................C.......................", "....................C.......................", "....................C.......................", ".C.......C..........C.........C.C...C.......", ".C.......C.....C....C...C.....C.C.C.C.......", "CC.......C....CC....C...C.....C.C.C.C.C.....", "CC.......CC...CC....C...C.....C.CCCCC.CCC...", "CC..C..C.CC...CC..C.C.C.C...CCC.CCCCC.CCC...", "CCC.C.CC.CC..CCC..C.CCCCC.C.CCC.CCCCC.CCC...", "CCC.CCCC.CC..CCC.CCCCCCCCCC.CCC.CCCCC.CCC..C", "CCCCCCCC.CC..CCCCCCCCCCCCCC.CCC.CCCCC.CCC..C", "CCCCCCCCCCC..CCCCCCCCCCCCCCCCCCCCCCCCCCCC..C", "CCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"..CC.....CC.C.C.C.C....CCC....CCCC.CC.C.CC..C.C", "C..CC.C.CC....CCC....C..CC.CCC..CCCCCC.C..C.C.C", "..C.C.CCCC.C.CC..C.C.CC..C.C......CC..C.CC.C.C.", ".CCCCCC..CCC...C...CCCCCC..C.CC.........CC.C.C.", "CCC.CCC...CC.CCC.CC.C...CC..CCCCC..C.C....C.C.C", "....C..CCC...C....C...C..CCCC.CC.CC..C.C..CC..C", "..CCCCCC.CCC..C...CCC.....C.C.C...CCC.....C..CC", ".C.C....C...C..CC..CC.CC...CCC.C.CCCC....CCC...", ".....C.C.C..CCC.C...CC..CCC.C.C.C..CCC.C....CC.", "...C.CCC.CC.CCCCCC..C.CC..CCC.C..C.....C.CCCC.C", "...C....CC..CC.C.......CCC.CC..CC...CC.CCCCC.C.", ".CC.C...C.CC.C.C.C...CCC..C..CCCC.C..C.CC....CC", "C..CC.CC..CC..CCC.C.CCC.CC......CCC.CC........C", "CC..CC..CCC..C.C...C..C.C.CC...C..C......CCC.C.", "CCC..C..CCC...CC.C.CCCCC..C.C...CC..C.C.C..C.C.", "CCC...CCCCCCCC.CC.CCCC..CC.CC.......CC..C..CCCC", ".CCCC..CCCC.CCC.CCCCC.C.C.C.CCCC.C..CCCCCCC...C", ".C.CCC..CCC.....C.CC...CC..C.C......C.C.CCC....", "...CCC.C...C..CC.CC.....C..CCC.....CC..CCCC.CC.", "CCCCCC...C..CCC......CCCCCCC.CCC..CC..C.C...CC.", "...CCC.C....CC.C..C....CC...CCC.CCCC.CCC.CC.CC.", "CCCC.CC.C.CCCCCC..CC.C..CC...CCC....CCCC..CC...", "CC.C....C..C..CCC..CCCCCC..C..C.CC....CCCC.....", ".CC.CC...CC...C.CCC.C.CC..C.C...C.C.CC...CCCCC.", "C..C.CC..CC.CC.CCC.C..CCC.C.CC.....C....C......", "..CCC.C..CC.C..C.C.CC.C.CCCC..C...C.CC.CC..C...", "C..CC..CCC.CCC.......CC.CC..C.CCC.C.C...CCCCC..", "C...C.C...CCC...CCCC.CCCC.C.CCC.C.C.CCC..C..C.C", "........CCC..CCCCC...C..C.C.C.CC.CCCC..CC...CC.", "CC.C.CCCCCCC.C..CC.CCCCC.CC..C.C..C.CCCC.....C.", "..CCCC.C..C..C.C..C..C.CC...CC..CC...CCCC.C.CCC", "...C....CCCC.CCC.CC.CCCC...C.....C.CCC..CC..CC.", "C..CC...C..CCCCCC...CCCCCC.C.CCC.C.CC..CCCCCC..", "..C..CC.C...C.CCC.CC.CC...C.CC.....C.CC..C.C...", ".....C.C.C.CC.CCC..CCC.C...CC.C..C..C..C...C.CC", "C.CC.CC.CCCC....CC..C..C.CCC.C.CC.C..C......C..", ".CC..CCCC.CCC...C.CCC.CCC.C.C..CCCCCCC..C.C.C.C", "C.CC..C...CC.CCC.CC.CC..C.CC.........CCCCC...CC", "C.CC..CCCCCC.C.C...CC.CC.C..C..CC.C.CC..CC.C.C.", "CCC...CC.CC..C...CC.CCC...C...CC.C.C...C......C", "...CCCC.C...CCCC..CCCC.........CC.CC..CCCCC.CCC", "CCCC.CCC..CC.CCC...C.C.CCCCC.C.C.CC.C.C....CC.C", "CC..CCC.CC.C.C.C.C..C...CCC.C.CC.C..C.CC...C..C", "C.CCCC..CC..C.C..CC.CC.C.C..C..C..CCC.C.C..CC..", "C.CCC.C.C..CC..CC.CC..CCC..CC.CC...C.C.CC..C...", "..CC.C.C..CCCC...C.C.C..C.C.C.CC..CC..CCC.CCCC.", "..C..C.CCC.....CCCCC.....C.CC...C.C.....C...CCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "................C..............................", "................C..............................", "................C..............................", "................C...............C...C..........", "...............CC............C..C...C....C.....", "...............CC....C.......C..C...C....C.....", "....C....C.....CC..C.C.....C.C..C...C.C..C.....", ".C..C....C.....CC..C.C.....C.C..C...C.C.CC...C.", ".C..C....C....CCC..CCC.C..CC.CC.C...C.C.CCCCCC.", ".C.CC....C.C..CCC..CCC.C.CCC.CCCC...CCC.CCCCCC.", "CCCCC.C..C.CC.CCC..CCCCC.CCCCCCCC..CCCC.CCCCCC.", "CCCCC.CCCCCCC.CCC.CCCCCC.CCCCCCCC.CCCCC.CCCCCC.", "CCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCC.", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"CCC..CCCCCCC.C..C..C.C", "......CC...CC..C......", ".....C.C...C.C..C..C..", "CCCCC.C.CC.C.C.C..CC.C", ".C.CCCCCC...CCC....C.C", "....CCCC.CCC..C....C.C", "..C.C.C..CCCC.CCC..CCC", "C....C..C..C..........", "C....C..CC.C.C.CC.C...", "..C.CC....CCC.CCCCC..C", "C..CCCCCCC..C..CC.CCC.", "C.C......C.CC.C..CCCC.", ".C.C.C...CCC..CCC.CCCC", "C.CC...C..C.....C.C.C.", "..C.....C...C.C.CC....", "CC..C..CC.CCCC.CC..C..", "CC.C.C.CCC..CCCC..CCC.", "C.CC.C...CC....CCCC.C.", "..CCC..C.CC..C.CC....C", "CC...CCCCCC...CC..C.CC", "C.CC.....C..CCC.C.C..C", "C.C.C..C....C..CC..CCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "C..C......C.....C.....", "C..C..C...C.C...C..C..", "C..CC.C..CC.C..CC..C..", "C..CC.C..CC.C..CCC.C..", "C..CCCC..CCCC..CCCCCCC", "C..CCCC.CCCCC..CCCCCCC", "C..CCCC.CCCCCC.CCCCCCC", "C..CCCC.CCCCCC.CCCCCCC", "C.CCCCC.CCCCCCCCCCCCCC", "CCCCCCC.CCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {"C.....", ".C....", "..C..C", "CC.C..", "CCC.CC", "C..CCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"......", "....C.", "....CC", "...CCC", "..CCCC", "CCCCCC"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {".CC.C.C.CC.C...C.C..C.C.CC.CCC.CC.C.......C..C...C", "..CC.CCCCCCCCC.C.C.C.C...C.C..C.C.CCCCCC..CC.C....", "CCCCCCCCCC.CC.CC.CC.C..CC..CC...C.....C.C..C.CCC..", "....C...CC...CCCC.CC...C...C.CC.C......C..C..C....", ".CC.C..C.C.C....CCC.CCC..C.CC.CCC..CCC..CCCCC....C", "CCCC...C...C..C.C.CC.CC...CC.C....C..CCCC...C....C", ".C.C.C..C..CCC.C.CCC.C..C...C.CCC..CCCC.CCC.CCCCCC", "...CC..C.C...CCC.CCCCCC......CC...C......C.CCC.CC.", ".CC..CC....C.CC..C.C.C..CCC.C..C..CCC...C..C...CCC", "...C.C.CC.CCCCC.CCCCCCC.C.CCC.C.......C.C..C.CC.CC", "CCCC.CCC....CC.C...C......C.CC.C....CCC.CC..CCCC..", "..CCCCCCC.C.C...C..CCCCC.CC.C.C.C.CC..CCC.CCC...C.", "..CCCC.CC..CC..C.CC..C.C...C..C.CCCCC...CCC...CCCC", ".CC.C..C..C..CCC.CCCCCCCC.CC..CC..C.CCC.CC..C.C.C.", "...C....C.C.C..C.CCC..CC..CCCCC..C.C.CCC.CC.CCCCC.", "CCCC.CC..CC...CC....C...CCCCCC.C...C....CCC....CCC", "...C.....CCCCCC.C...CCCCCC..CC..C.C....CCC...CC.CC", "..C.C.CC.CCCC......CC.C.CCCCC...C.C.C...CC.....CC.", "...CC.CC..CC.C.CCCC.C...C..C.CC..CC..CCCCCC...CC..", "CC..CCC.C..CCC..CCCCCC.C.CCCC..CCCCCC..C..CC....C.", "CC..C..C.CC...CCC.C.CCC..CCC.C.C....CCC.C....C...C", "..CC.CC....CCC..C.CCC....C.CC..CC.CC.....C.C.CC...", ".CC..CC.C.....CCC.C...C..CC..C.CCC.C.....C.CC.CC..", "CC.CC.C...CCCC...C......CCC.C.C..CC......C..C..CCC", "C..CC.CCC..CCCCC..CCC.CCCC..CC.C..C...C.....C.....", ".C....C.........CCC.C......CCC..C.CCCCC..CC.CCCC..", "C.CC.C.....CC...CC.C.C....C.C.CC.CCCC........C.C.C", "C...CCCCCC.C..CCCC.CCC..CCCC..C....CCC.C.CCCCCCC..", "...CC.CCC....CC....C.C..C.CCC.C.CC...CCC..CCCC..C.", ".CCCC.C.C.CCCC.C.......C.C.CC.C.CC.C.CCC..C....C.C", ".C.C..CC.CC..C..C..CCC..C.CC......C...C.CCC..C..C.", ".C.CCC..CCCC.CC..CC...CCCCC..CCC..C.C..C..C.CCCC.C", "CCCCC.CCCC.CCCCC...CCCC.CC...CC.CCCC.C.C.C..CC..C.", "CC.C.C.C.C...C.C.CCC...C.....CCC.CCC..C..CCC..CC.C", ".CC......C.C.CC..C..C......C.C.CC...C...C.C......C", "CCCC....C.CCC.C.CCC.CC..CC...CC..CC.CCC...CC......", ".CC.CC.C.CC...C..C..CCCCC.....CC.CC.CC.C..CC.C.CCC", "..CC..C.C..C.CCC.C.C..C.C.CCC.....C.CCCCCC.C..C.C.", "C..C....CC...........CCCC...CCC..C.CC.CCCC.C..CCC.", "C..C...CC.CCCC.C.C..C.C.CC..C..CCCC..CCC.CCCCCCC.C", "C...CC.CCC.CCC.CC...CC.CC.C..CC.CCCC.CCC.CCC.CCCCC", "CC.C.C.CCCC..C.C.CCC.C.....CCCC.C..CC.C...CC....C.", "C.C..C.C.CC.CCCCC.CC.C..CCC.C.CCC..C.C...C..C..CCC", ".C...C..CCCCCCC...CCC...C.C.C..CC..CC.CCC...CCCCC.", "..CCCCCCC.CCC..C.C..CC.....C.C.CCC.C...CCC.CC..CC.", "..C..C.C......CCC....C......CCCCC.C.C.CC..CC.CCC.C", "CCC..C.C.CCCCC......C.C.CC...C..CC.C....C.C.....CC", "CC.CC.C..CCCC....C.CCCC..CCCC.CCC.CCCC.C.C.CCCCC..", "C.CC.CCC.CC..CCC........CCC.CCC.C...C.CC.C...C.CC.", "..C..CC.C.CC..CC..CCCC..CCCC..C.C.CC...CC...C..C.C"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........................................C.........", "................................C.......C......C..", "...........................C....C.......C......C..", "......C............C.......C....C......CC......C..", "......C....C.C.....C.......C...CC......CC......C..", ".CC...C..C.C.C.....C.......C...CC......CC.C....C..", ".CC.C.C..C.CCCC....C.......C...CC...C..CC.CCC..C..", ".CC.C.C..C.CCCC...CC.......C...CC...C..CC.CCC..C..", ".CC.C.C..C.CCCCCC.CC.......C.C.CCC.CCC.CCCCCC..CCC", ".CC.C.C..CCCCCCCC.CCC...C..CCC.CCC.CCC.CCCCCC..CCC", ".CC.C.C.CCCCCCCCCCCCC...C..CCC.CCC.CCC.CCCCCC..CCC", "CCC.CCCCCCCCCCCCCCCCCCCCC..CCC.CCC.CCCCCCCCCCCCCCC", "CCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCC", "CCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCC", "CCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCC", "CCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"CCC..C...CCC...C.CC..CC....CC", "C..C....CC...C.CCCC..CC....CC", "..C.CC.....C....CC..C...CC...", "CCCC....C.CC..C.C.C.C.....C..", "C...C.....CCCCC...CC.CCCC.C..", ".CCC...CCCCCC.CC..CCC.CC..CC.", "C...CCC.CCC.C.C.CCCCCC.C..CCC", "C.CC.CC......CCC.CCC.C.C.CC.C", "..C.CC..C.CC..CCCC..CCC.C..CC", "C..CC.CCC.CC.C..C.....C...CC.", ".CCCCCCC..CCCCCC.CC.CC...C.C.", ".C.C.C..C..CC...C..CC.CCCCCC.", "...C..C..CCCCCCC.C.C.C.C.....", "........CC..CC...CC..CC.CC...", "..CCCC...CCC.CC.........C.CC.", "....CCC...CCC..C..C.C.C.CC...", ".CC.C.CCCC.CCCC..C.C..C....C.", "C.CCC..C.CC..CC.C.C....CCCCCC", "C.CC...C.C..C.......CC..C.C..", ".C...C..CC..CC.C..C..CCC.CCC.", "CCCC..C.C.CCCCCCCC.C..C.C...C", ".CCC..C.CC.CCC..C..C.C.......", ".C...C...CC.CC.C....CC...C.C.", ".CCCC.C.....C....C...CC..CC.C", ".C.CCCC.CC...C.C.CC.C.C..CCC.", "...C.CCCCC..CC...C.....CC.CCC", "CCCCCCCC.CC.C..CCCCC.CC.CC..C", ".....C.......CC...CCC.C.CC.C.", ".C.C.C.C.....C.C...C.CC..C.C."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", "..........................C..", "..........................C..", "......C...C...............C..", ".....CC...C.........C.....C..", ".....CC...C......C..C.....C..", ".....CCCC.C......C..C...C.C..", ".....CCCC.CC....CC..C...C.C..", "C...CCCCC.CC....CC.CC...CCC..", "CC..CCCCCCCCC...CC.CC...CCC..", "CC.CCCCCCCCCC.CCCC.CCC.CCCC..", "CC.CCCCCCCCCC.CCCC.CCCCCCCC.C", "CC.CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"C.C.CCC..C.C...CC...CCCCC..C....C...C..C.C..CC.CC.", "..CC..C.C..CCCCC...C.C.C.CCCC.CC.C...C.CC..C.C.C.C", ".CCC...C...CCCC..C....CCCC.CC..CCCCCC..CC.CC...CC.", "....C.C.CCCC.C....CC.C....CCCCCC.C.C..CC.CC.C.C.CC", "C.C.C..CC..C...C..C..C..CCCC.C.C...CCC...CC...CCCC", "......CCC..C...CC.CCCC..C..CCC.C..C.CC..CCCC.C.C.C", ".CC..CCCC.C.CCC..CC.C.C...CCC.C.C.CCC.C.C..CC..C..", ".CC.CCC..C..CC.CCC....C...C..C...C..CCCC.C.CC....C", "..CCCCC.C.CC..C.C..C.CCCCCC.CC.C.C.C.C..C..CC.C.C.", "CCC.C..C.CCC.CC.CCC....CCCCCC.C.....CC.CCCC.CC.C.C", ".CCCC.C..C..CC.C....C....C..CC..C.CCCC..C..C.CC...", "C.CC...C....C.C.C..CC..C.........CC..C..C.CCC.CCCC", "C.CCC.C.C..CCCC...C.CCCCC.CC...C..CC.C.CCC.CC..C..", ".CCCC..CC..CCCCCC..CC....CCC.C.CCCC...C..C.C......", "..C.....C.C..C.C.CC.CCC.CC.C.CCCC.C.C...CCCCC.CCC.", "CCCCC...CC..C.CCCCCCC....C......CCC.CC...C.C.C.C..", "CC.C.CC...CC...C.C.C.C.C....CCCC.CC.C..C...C.C..C.", "...CCCCC.CCCCCCCCC.....C.C....CCC..CC.CC.CCCCCC..C", "..CCC..C.C....C.CCC.CCCCC.CCCC.CCC.CC.C....CC..C..", "..CC.CC...C.C.CC.C.CC.CC..C.CCCCCC.C.....C.C..C..C", "..CCC..CC..C...CC..C....C...C..C..C...CC.CCCC.CCC.", "CC..CCCC.....CCC.....CCC.C.C....C.C...CCCCCC..C.C.", "..C...CC.C..CCCCCCC.C.CC.....C.....C.C..C..CCC.CCC", ".CC.CC....C.C.C.C.C....CC.C.C....CC.C.CC..CCC.C..C", "C..CCC..C..C.C..C..C.CC......CC....CCC.C.CC....CCC", ".C...CCCCCC.C..C...C.C..C..C.CCC..CCCCC..C.....C.C", "C...CC.C.C.C.C.CCCCCCCCCCC.......C...CC.C..CCC..CC", "..C.C...C....C.C..CCC.CCC..C.CC...CCCCCC..CC.CCCC.", "C.C.C.C.CCCC..C.CC..CCC.C......C..C...C.C.CC.CCC.C", "C.CC.CCCCC.C.C..CCCCCCC.CC..CC...C..C..CC.CC.C.CCC", ".C....CCCCC.C..CC.CCC.C.CCCCCCCC...CCC..CCC...CCC.", "C..CCCC.C....CCC.CCC.C..CC..CCCCCCCCC....CC.CC...C", "CC.CC...CCC...C.CC.....C..C.CC...CCC...CCC.C.C.CC.", "CC..CC..CCCC..CCC.CC...C.CCCCC.....CC..C...CCCCCC.", ".CC...C.CCC.C.CCCCC.C.C.CC..CC..CC....CC.CCCCCC...", ".C..CC....C...CCC..CC.C..C...CC...C.....CC..C.C..C", "..C.C.CC..CCC.C.CCCC...C.C..CCCCC....CCCCC.....CCC", "CCC.CCC.CCCC....CCCC..C.CCCCCC....CC.C.....CCCC..C", "CCC.CCC....C..CC.C...CC.C.C.C.....C.......CC.CC.CC", "...CCCCC..CC..C.CCC.C.CC.CC.CCC....CCC.C..CC.CC.C.", "CCCCC.CCCCCC.C.C.....C.CCCC..C......C.CC.......CCC", ".CC...CCC...CC.C..CC.C...C.C.CCCCC.C.CC..CC.......", "....CC..C..CC...CC.CCC..CCCC..C.......CCC.CC.C.CC.", "CC.C.CC.C.CC.CCCC....CC..CC.CC.CC.C.CCCCC.C.CCC...", ".C.C.CCC.CC..C.CCCC.CC..C....C.C...C.CCCC.CC....CC", "....C.C..C...CCC...C.C....C.CC.C.CCC...CCCCC.CC...", "CC...CCC...CCC..C..CC..CC..CCC.CC.C.....C.C.CCCC.C", "CC..CCCCC...C.C...CC....C.CCC.CC....CC.CC...CCCCCC", "C.C..C..CCC.CC.C.CCCCCC....CCC..C..CCCCC...CC.CC..", "CC.C.CC.C.C..C..CC.CCCCC..CC...CC..C....C...C....C"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............................C....................", ".........C.......C...........CC............C......", ".........C.......C...........CCC.....C.....C......", "........CC..C....C...........CCC.CC..C.C...C....C.", "..C...C.CC..C.C..CC.......C..CCC.CC.CC.C...C...CC.", ".CCC..C.CC..C.C..CC.......CC.CCC.CC.CC.C...CC.CCC.", ".CCC.CC.CC..CCCC.CCC......CCCCCC.CC.CC.CC..CC.CCC.", ".CCCCCC.CC..CCCC.CCC.CC..CCCCCCCCCC.CC.CC..CC.CCC.", "CCCCCCCCCC..CCCCCCCC.CCC.CCCCCCCCCC.CC.CCCCCC.CCCC", "CCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {".C.C.CCCCCCC..CC.CC.C..C.C.CC.C.C..CC....", ".CC.CCCCC.CCCC.C......CCCC.C.CC..CC....C.", "..C..CC.C...CC.CCCCC...CC.C.C.CC.CCC..C.C", "C..C.CC.C.CC.C.CC..C.CC.CC.C.CCC.C...CC.C", ".C..CCCC..CCC.C....C.CCCCC.C.C.CC.CC.C...", "CC.CCC.CC.CCC..CC.CCC.....CCCCCCC.CCC.CCC", "CCC.C.....C....CC..CC.CCC..C.C.C.CC..CC..", ".CCCC...CCCCCC.C.CCC.CCC.CC..CCCCC...C.CC", "CCC.C.CC..C..CC.C..C.CCC..C....CCCC...CCC", "CC.C.C..CCCC.CCC.CC....CC.CC.CC.CCC.C..C.", ".C..C..C.CCC..C...C.CC.C.CC...CC...C....C", "C..C..C.C...CCCCC.C.C....CC.C...CC.....C.", "..C..C..CCC...C..C..CC..C.CC.CC....CCC..C", "C.C..CCC.C......CCC.C.......C.....C.C..C.", "C......C..C..CCCC..C..CCCCCC..CC.CCC...C.", "..C..C...CC.CC..CC.CC..C..CCC.CCCCC.CCC..", "C..C.CCC..C.CC.....CC...CCCCC.C.C.C..CC.C", ".C.CC...C.CCC.CC.CCC.C..CC..C.C.C.C.C.CCC", "....C.CCC.C..C.C.CC..C..CC.C...CC.CCC..C.", "..CC...CCCC....C......C.CC......CCC...C..", "CC.C..C..C.C..CC...CC...CCC..........CC.C", ".CCC.CCCC.C.CCCCC..C..C.CC....CC.CCC.C.CC", ".C.CC.CC....CC......C...CCCC..CC....CCC.C", "C..CCCC..C..CCC..C..C.C...C.CCC.C...CC...", ".....C.C...C....C...C..C.CC...C.C.C....CC", "C.C....CC...CCC..C.C....C.C...CC.CCCCC...", ".C..C.C.....C..CC...CC.CC.C.CC..CC.CC.C.C", "CCC.C.C.CC..CC.C..C..CC.....C.....CCC.C..", "C.CC.CCC..C...C.CC.CCC.C...C..CCC....CCCC", "C....CC...CCCC..C.CC..CCC...CCCC..C....CC", "C.CC.C.C.....CC..CCC..C...CCCCCC......C.C", "C..C..C.....C.CCC.CC.CC.CC..C.CCC...CC...", "C...CC.C...C.C.C...C.C.C.CCCC.C.C.CCC....", "..CCC.C.CCCC.C.C..C.C.C...CCCCCCCC..C.C..", "CC....CC...C..CC.C.CCC.C.....CCC..CCCCC.C", "C..C..C..C....CC...C..CC.CCCC..CCCCCCCCC.", ".CCCCC.CC.C.CCC.C.C..C.C.C....CCCCC.C....", ".C.....CCC..C...C..C...CC...C..CCCCCCCC.C", "CC.C..CC..C.....CC.CC...CC..CCC.C..CC.CCC", "C.C..C....C...CCCCCC..CC..CC..C..C.....C.", "CC..C.C......C.C.C..C.CC.....C.C..CC..C.C"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".....C...................................", ".....C.C.................................", ".....C.C.................................", ".....C.C.............C...................", ".....C.C.C...........C...................", "...C.C.C.C.......C...C...........C.......", "CCCCCC.CCC.....C.C...C......C....C.CC....", "CCCCCC.CCC.....CCC...C......C....CCCC.C..", "CCCCCC.CCC....CCCC...C......CC...CCCC.C..", "CCCCCCCCCC....CCCCC..C.C..C.CCCCCCCCCCC..", "CCCCCCCCCC..C.CCCCC..CCC.CCCCCCCCCCCCCC..", "CCCCCCCCCCCCC.CCCCC..CCC.CCCCCCCCCCCCCCC.", "CCCCCCCCCCCCC.CCCCC.CCCC.CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCC.CCCCC.CCCC.CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {".CC", ".CC", ".CC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...", "CCC", "CCC"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"CCCC.CCC..C..CC.CC...C...CC.C.CCC.C..C.C..CCC.C", "C.C..C.CC...CCCC..CC.C...CCCCC.C...CCC.C.C...C.", "C.C.CC...CCC..C...C...C..C...CC...C..C.C.......", "....CCCC.C.C.....C..........CCCC.CC..CC...CC..C", "C.C..C.C..CC....C.C.CCC..CC....CCCC.CCC....C.CC", "C...C...CCCC.C.CCC..CCC....C.....CC.CC..C..C.CC", "...C...C...C..CC..CCCC..CC.C.C...C.....CC..CCC.", "C....C.CC.CC..C.C.C.C..CCC.CCC.C.CC..C.CC......", "...C.C...C..C.CC.C.C..CC.C..CC..CC.CCC.C..CC.CC", "C...CC.C....C.C.CCC..CCCC.CCCCCC.C..C.....CCCCC", ".C..C..C.C.CCCC..CC..CCCCC.CCC....CCC.C.CC.C...", "...C..C.......C..........CC..CC...CCCCCC.C.CC..", "..C.C.CC..CC.C..CC.C..C.C.CCCC...CCC..C...CCCCC", "C.C.CCC.CC.CCCCCCCC.CC.C.....CCCC..C.C.C.CC..C.", "....C.C.CCCC.CCC...CCC......CC..CCCCC.CCCCC.CC.", ".C.C.CCCC....C....C...C..CCCCC.CC.......CCCC...", "CCCCC.....C...C..C.CC.CCCCCCC.C.CCC.C.C..C.CC..", "C.CC....C..CC.CCCCCCCC..CC...C.CC.....C.CC.C.C.", ".CC.CC.C....C..CCCCCC.C.CC.C..C.C.C.C.CC...CCCC", ".CC.CCCC.C..C.C.C...C.C.C...C.CC.C.....C......C", "C...C.CC.C.....CC.CCC.CCCC.CC..CCCC...CCC.CC..C", "CCC.....CC.C....C..CCCCCC..C...CCC.C...C...CCC.", "..CC.CCC..C..C.CCC.C..C..C..C.CC.C....CC....C..", "..CC........CCC...C...C..CC.CC..CC.C.CCC....C..", "C..CC.CC.CC..C.C.CCC.CCC..C..C.CCC..C..C...C.CC", "CCCCC....C..C.C..C..C....CCC...C...CC.C.CCC...C", "CC.C..C...CCC.CC.C....C...C.C..C...CC....C.C...", ".C.C.C.CCCCC...CCC..C..CCC.C...C..CCC..C.....CC", "..C.CCC........CC.C.CC....CCCCC..CCCCCC...C...C", ".C.C....C.CC..C.CCC.C..C.C..C.CCCCC.C.C.C..C.C.", "C...C...CCCCCCCC....CC.CC...C.CCCC.C.CC.CC.C.C.", "C...CCC.CC.CCC..C..C.C.CCCC..C..C..C.C...CCCC..", "C.C..C..C.C.CCCCC.C.CCCCC.C.CC.C.CC..C...C.C.CC", ".CCCCCCCC.CC.C.C...C..CCC...CC.CCCCC....CCC.CCC", "CC......CC.......CC.CC...C.C...C..CC.CC.C..C...", "CC.....CC.C...CC..C.CCCC...CC..CC.CCC.C.CCCC.C.", "C..C....C.......CC.CC...C....C..C.C..C...C.CCCC", "CC.CCCCCCC....CCCCCC..C..CCC......C.C..CCC..C.C", "CC...C.C.C..C.CC.CC...C.C..CC.C.CC.C.CC.....C.C", "...CCC.C.C.C..C..CCCCCCCC.C..CCCC.CCCC.....C...", "CCCC..........C.CC..C..CC.CC..CCCC....CC.CC..C.", ".C.C.....CC..CC...C.CCC..CC.C..C...C.....CC.CCC", "...C..CC.C....C..CC.CCCC..C...C..C...C..C..CCC.", ".C..C......CCC...CCCCCC....CC.CCC.C.C..CC.C...C", "CCCC.C..CC......C...C..CCC..C.C.C...C..CC......", "C.C.CC.C....CC.C.C..C.C.C.CCC..CCCC.CC.CC...CC.", ".CC.CC..CC..C.CC.C..C..CCCC.CC.C....C..CC.C.CC."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", ".................................C.............", ".............C...................C.............", ".............C..................CC.............", "C........C...CC.C.C.C.........C.CC...C.........", "C........CC.CCC.C.C.C...C.....C.CC.C.C.C.....C.", "CC.......CC.CCC.CCC.C...C.....CCCC.C.C.C.....CC", "CC..C...CCC.CCC.CCC.C...C..C.CCCCC.C.C.C.....CC", "CC..CC.CCCC.CCC.CCC.CC..C..CCCCCCC.C.CCC...C.CC", "CC..CC.CCCC.CCC.CCC.CC..CC.CCCCCCC.C.CCCC..C.CC", "CC..CC.CCCC.CCCCCCC.CCC.CC.CCCCCCC.C.CCCCC.C.CC", "CC..CCCCCCC.CCCCCCCCCCC.CC.CCCCCCC.C.CCCCCCC.CC", "CC.CCCCCCCC.CCCCCCCCCCCCCCCCCCCCCC.C.CCCCCCCCCC", "CC.CCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {".C.C..C.CCCC.C.", "...CCCC.CCC.CC.", ".C..C..CC..CCC.", ".CC...C.C.C...C", "CC...C.....C.CC", "..CC.CCC.CCC.CC", "..C.C..CCCCC..C", ".CCC.C.C.C...CC", ".CCCC..C.C.C...", "..CC.C....C....", ".C...C...CC..C.", "CC.C.CCC....C.C", ".C.C.CC..CCC..C", "CC.C.CC.C.CCCC.", "...C..CC..CCC.."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...............", "...............", "...............", "...............", "...............", ".....C.......C.", ".C...C.......C.", "CC...CCC...CCC.", "CCC..CCCC..CCC.", "CCCCCCCCC..CCCC", "CCCCCCCCC.CCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"C.CC..C....C..C.CCCC..C.C", ".CCCC..C.....CCC.C.CC..C.", "C.CCC..CC...CCCCCCC.C..C.", "....C.CC..CCC.CCCC..CCC..", "..C..C..C.C....CC..C..CC.", ".CCC.CCC....C.CC..C....CC", ".CC..C...C.C.C.CC.C.C.CC.", "..C..CC..C.C.C....CCC....", ".CCCC.C...C.CC.CCCCCC.CCC", ".C....C..CCC..C.C.CC..CCC", "CCC..C..C.C.C..C.C.C.C.CC", "CC..C.C.....CCCC.CC.CCC.C", "CCCCC.C..CCCCC.C.C.CCCC.C", "..C.C......C.C.C.C.C.CCCC", "CCC.CC.C.CCC....C..CC..C.", ".CC.C.C.C....CCCCCCCC.C..", "..C.CCC.CC.C.C..CCC......", "C..C.CC.CCCC..CC..CC...CC", "CCCCCC..C.....C.CCC...CCC", ".....CC.C..C.C.C.........", "CCCC.CCCCCCCCC.CCC.C.CC..", ".C...C..C..CCC.C..C.CCCCC", "C..C.C.C..C.CC.C...C.C...", ".CCC.CC...CCCCCCCCCC...C.", "CC.C.C..CC.CCC...C.C.CCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".........................", ".........................", ".........................", ".........................", ".........................", ".........................", "....................C....", "............C.......C....", "........C...C.......C....", "........C...C.......C..C.", "..C.....C...C.......C..CC", "..C.....C..CC..C.CC.C..CC", "..CC....C.CCC.CC.CC.CC.CC", "CCCC.CC.CCCCC.CC.CC.CC.CC", "CCCC.CC.CCCCCCCCCCC.CC.CC", "CCCC.CC.CCCCCCCCCCC.CCCCC", "CCCCCCCCCCCCCCCCCCC.CCCCC", "CCCCCCCCCCCCCCCCCCC.CCCCC", "CCCCCCCCCCCCCCCCCCC.CCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"..C.C..C.C.CC.CCC.C....CCC", "CC.C.C....CCCCC...C.C...CC", ".CC.C.C..CCCC.C.C.C.CC..C.", ".CC....C....C....CCCCC.C..", ".C...C..C...CCC.CC..CCC..C", ".....CCCC.CCC..C...C..C..C", "CCC.....C..CC..C.C.C.C.CC.", "CC..CC..C.C..C....CC..C..C", "C.....CCC.C.CCCCC.C.C.C...", "C..CC.C...CCC.CC.C..CCC...", ".C.C..CC.CC....CC..CC.CCCC", "CC...CCCC..C..CC....C.CCCC", "..C.C...C.CC..CC...C..C.CC", ".CCC..CC....CCCCC..CC.CC.C", ".....CCCCC.CCCC.C..CCCC.CC", "......C.C.CCCCCCCC..C.C...", "CC..CC...CC..CCCC........C", "C.CC.CCC.....CC....CC...C.", "C.C..CC..C.......CC....C..", ".CCCCCCCC......C.C..CC..CC", "....C....C.CC..C.CCCC..C..", "..CC...CCC..C....C..CC.CCC", ".CCCC.C.....C.CCCC.CC.C...", "C....C..C..CC.C.......CCC.", ".CC.C...C..CCC...CCCCCC...", "CC.C.C.....CCCC..C.CCC...C"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..............C...........", ".............CC...........", "..C.......CC.CC....C......", "CCC.....CCCC.CC....C..C.CC", "CCC.C.C.CCCC.CCC...C.CC.CC", "CCC.CCCCCCCCCCCCCC.C.CC.CC", "CCCCCCCCCCCCCCCCCC.CCCC.CC", "CCCCCCCCCCCCCCCCCC.CCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"...C.C.CC.C.", "..CC.C.C...C", "C.C.C.CC..C.", "C.CCCC..CC..", "CC....C.CC.C", "C.CC.C.....C", ".C.CC...C.CC", "C...CC.CC...", "CC..CC.CC.C.", "..CC...CCCC.", "C...CCCCC...", ".CCCC.C...CC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"............", "............", "............", "............", "............", "...C....C..C", "..CCC.C.CCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"C...C.CC.C.....CC.CC.CCCC.CC.....C.C", "CC..CCC.C.CCCCCCCCC.CC.C..CCC.C...C.", ".CC.C.C.CCCCCCCC...CCCC.C.CCCCCC...C", "C..C..CCC..CCC..CCCC..CC.CCC.CC.C...", "C..CC..CCCCCCC.CC.CCCCCC...C.C.C..C.", ".CCCCC.C.C..CCCC.C.CC.C.CCC......C.C", "C..C.....C.C..C.C.CCCCCCCCC.CCC.C..C", "......CC..CC...C.CC..CCCC...CCCCC..C", "CC...CCCCCCCC..C.C.CCC.C...C.C..C..C", "CCCCC.C..C..CC.CC..C..CCCC.C....CC..", "CC..CCC..CCCCC.C..CC..CCC.CC...CC.C.", "C.....CCCCCCC.C.C.CCC.C....CCCCC.CC.", ".CC.C..CCCC.CC......CC..CC.C.C.CCC..", "CCC.CCCCCC.CCCCCC..C.CC..C.CC.CC.CC.", "CCCC..C.CCCC.C..C..C...C....CCC....C", "CCC..C.CCCC.CC....CC.CCCCC...CC..C..", "C..CCCCC.CC.CCC.C......C.C.....C.CCC", "C.CCC.CC...C...CCC.C.C.CCC...CC.CCCC", "..CC....C...C..CCCCC..C...CC..CC.C..", ".CCC.C.....CC...CCC..C.C.....CC..CCC", ".C..CC...C.C.CC.C.C.CCC..CCC.C...C..", "C....CC..C..C...CCC..CCC.CCC..CCC..C", "CC..C.CCCC...C.C..C.C...CC..CCCC...C", ".CCC.CCC.CC..C.CC.CCCCCC..CCC.CCC.C.", ".CC.CCC..CC.C..C..CCC.C.CC.CC.C...CC", "C..C..CCC.C.C.C.C.C.C.CCC.C..CCC.C.C", "C.CC.CC.C....CCC.CCCCC.CCC....C.C...", "CC.CC.CC.CCC.C...CCC....C.C.C..CCC..", "..C...CCCC..CC.CCC.CCC.CCCCC.C..CC..", "...C..........CCC.C.CC..C...CCC.CCC.", ".C..CCCCCC.CCCCC...CC..C.C..C....CC.", "CCCC.CC..CCCC.C..CC.C..C.C.....C....", "...C.C.....CCC..C..C.C...CC..CCCC.CC", "C.CCCCC.CC.CCCCC..CCCC..C..CC....C..", ".CCCCCC.C...CC....C..CC.C.CC.C..C.CC", "C.C...C...C...C.....CCC.CC..CC....CC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", ".............C......................", "..C..........C.........C............", ".CC..........C.........C............", ".CC.C........C.........C............", ".CC.C.....CC.C...C.....C....C....C..", ".CCCCCC.C.CC.C.C.C.....CCC..C....C..", ".CCCCCC.CCCC.C.C.C.....CCCCCC.C..CC.", ".CCCCCC.CCCCCC.CCC...CCCCCCCC.C..CC.", "CCCCCCCCCCCCCCCCCC..CCCCCCCCC.CC.CC.", "CCCCCCCCCCCCCCCCCC.CCCCCCCCCC.CCCCC.", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCC.", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"C.CC.CC...CC.", "C..C..CC..C..", "C.CC.C..CC.CC", "CC...C.C..C.C", "CCC.C.C.CCC..", "C..C..CC.C.CC", ".C.C.C.C..C..", "CC.....C..CCC", ".C...C.CCC.C.", "CCC..C.C.CCC.", "CC.CC...CCC..", "CCC.CCC.CC...", "....CCCCCCC.."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".............", ".............", ".............", ".............", ".............", "..C.C....C.C.", "C.C.CC...CCCC", "C.CCCC.CCCCCC", "CCCCCCCCCCCCC", "CCCCCCCCCCCCC", "CCCCCCCCCCCCC", "CCCCCCCCCCCCC", "CCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {".CCC.C.", "CC.CC.C", "CCCC.CC", "...C.C.", ".C.....", "..C....", "C..CC.C"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".......", "..C....", ".CC....", "CCC...C", "CCC...C", "CCCC..C", "CCCCCCC"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"C..CCC.CC..C.CCC.CC.C.CC.CC.CC.CCC.C...C.", "..C..CC.C..CCCC..C........C.CC.C.CC....CC", "..CC..CC.C...C.CCC...C.CCCC.C..C.CCCCCC.C", "CCCC..C..CC..C.C.CC.CC......C.C.CCCC..C..", "..CCC.CC..CC..CCC...CC...C..C..CC.CC...CC", "C..CCC.CCC..CC..C.....CC.CC..CCCCC...CCC.", "..CC....C.CC..CC.CCC..CCC.C.CC..CC.C...CC", "CCCCC.CCCC....C.C..C.CC.CC.....CC..C..C..", "..C.CCCCC..C.C...CC...C..C..C..CCCC.CC.C.", "C..C.C.C.CCCC..CCCC.CC.CC...CCC..CC.C..C.", "...C...C..C.CCC..C.C.........CC....C.CC.C", "C..CC.CCC.C.C..CCC.C.C....CCC.CCC.CCCCC..", ".CC......CC.......C.C..CCCCCCCC.CC.CCCC..", ".CCC.C......C.C.CCC..C..C.CCCC.C..CCCC...", ".CC.C.C.CCCC.C.C..C.CCC.CC.CC.C....C..CC.", "....CCCC..C.C...CCCCCCCCCCCCC..CCCCC.CC..", "..C.CCCC....C.CC...C.C.CCCCC.C.CCC.C..CCC", "CC.CC...C..CC..CC...C...CCC.C..C.C.C....C", "..C......CC.......CCCCC.......C.CCC..CCC.", "C...CCCCCC.CCCC..CCC.C.CC..CCCC.CC..CCCC.", "CCC.C.......C.CCCCCCCCC.C.CCC.C.C..CCCC..", "...C.CC.C....CC.C.CC..CCCCC.C.......CCCC.", "..C....CC.C.C....C.C.C.C....CCCC.CCCC.C.C", "CC.CC.CC...CCCCCC.C..CC.C.....CC...CC.CC.", ".CCC..C.CCC.CCC.CCC.....CCCC.C.C..C..C.C.", "..CC.C..C.C.CC.CC....CC.C.C..CCC.CCCC...C", "C...C.C.C..C..CCCC.C...CCCCCC..CCCC..CC..", ".C.CC.C..CC.C.C.C...CCC..C......C...CC..C", ".CC.CC.C.C..CC.CCC.C.C.CCCCC.CC.C.C...CC.", "C.CCCC..C.CCCCCCCC.....C....C......CC.CCC", ".C...CC......C...C..CC..C...C..C......C..", ".CC.C.CC..C....C.C....CC..CC.C.CC...CCC.C", "CCC...CCC.CCCC..CC.C.CCCCC..C.......C..C.", "..C..CCC.CCCC....C......C...CCC.C.CCC.C..", ".C.CCCC.CCC.C..CC.C.CCC..C.CC...CC..C..CC", "C..CCCCCC...C..CC...C.C..CC..CC.C..CC....", ".CC...C...CC.CC.C..C.CC..CC..CC.C...C.CC.", ".C.CCC.C.CC..CCC.C.C..C.C...CC.C.C.CCC.C.", ".C...C...C.CCC..CCC....CCCCCC..C.C.CCCC.C", "CCC.C.C.C...C.CC...C.CC...C..CC..CC..C..C", "CCCCCC..C...C...CC....CCC.C..C........CC."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", "...................C.....................", "...............C...C.....................", "...............C...C.....................", "C..........C...C...CC.......C............", "C.C......C.C...CC..CC.......C.....C......", "C.C..C...C.C..CCC..CC..CC.C.C.....C..CC..", "C.C..CC..C.C..CCC..CC..CCCC.CC..C.C..CC..", "C.CCCCCCCC.CCCCCC..CC..CCCC.CC..C.C..CC..", "C.CCCCCCCC.CCCCCC..CCCCCCCC.CC.CC.CCCCCC.", "C.CCCCCCCC.CCCCCCC.CCCCCCCC.CC.CCCCCCCCC.", "CCCCCCCCCC.CCCCCCC.CCCCCCCCCCC.CCCCCCCCCC", "CCCCCCCCCC.CCCCCCC.CCCCCCCCCCC.CCCCCCCCCC", "CCCCCCCCCC.CCCCCCCCCCCCCCCCCCC.CCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"..C..", "...C.", ".CC.C", "CCC..", ".CC.."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".....", ".....", "..CC.", "..CCC", "CCCCC"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"C.CCC...CCC.C.C..CCC..CCC.", ".C.....CCCC...C...CCCC...C", ".CC..CCC.CCC.C..C.C.CC.CCC", ".CC.CC.CC.C.CCC...C.C.C.C.", "C..CCCCCC.C.C.....CC...C.C", "C.CCCCCC.....C...CCCCC.CC.", ".C..CC..CC....C.CCCCC.CCCC", "C.CCC....C..CCCCC.CCCC.CCC", "CC.C...CCCCCCCCC.CCCCCC...", ".C....C...C.C..CCCCC....CC", "CC..C.C..CC..CCC.C.CC....C", "C.C.C..CCC.CC....C..CC.C.C", "CC.CCC.CCC...CCC.C.......C", "...CC.CCC....C..CCC..C.C..", "...CC..C.C.C...CC...CCCC..", ".CC....CC.C..C.CC.......CC", "..CC.C.CC..CC..CCCC..CC.CC", "C.C.CC...CCCCCCCC..C..CC..", ".CCC.CC.C........CC.CC.C.C", "..C....CCC..C...C..C.C.C.C", "C...C..C.C...C.CC..C...CCC", ".C.CCCCC..C.CC.C.CCC..CC.C", "...CC..C.CCC.C.CC..CC...C.", "C....CCCCC..CC.CCC.C...CCC", ".CC.C.CCCC.C..CC.....C..CC", "..C...CC...CCC...C..C.CC.."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "........C.................", ".......CC.................", "..C....CC............C....", "C.C..CCCC.......CC...C.C..", "C.CC.CCCC.......CC...C.C..", "C.CCCCCCC.CCC...CC...C.CC.", "C.CCCCCCC.CCC...CCC..CCCC.", "CCCCCCCCCCCCCCC.CCC.CCCCC.", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"CC...C.CC.C", "...CC.CCCC.", ".CCC..C.CCC", "CCC.C..CCCC", "...CC..CC.C", "CC.C.C.CC.C", ".....CCC.CC", ".C..CC.....", "CCC...C.CC.", "C..CC.C.CC.", "...C.....CC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...........", "...........", "...........", "...C.......", "..CC.C.....", "CCCC.C..CC.", "CCCCCCC.CC.", "CCCCCCC.CC.", "CCCCCCCCCCC", "CCCCCCCCCCC", "CCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"C.....CC...CCC.CCCC.CC.CC...CC.", "CC.C..C.....C.CC.C.CCCC...C.C..", "...CC.C.CC..CC.C...CC.CC.CCCC..", ".C.C.C..CCCC.CCCC.CCC.C.C..C.CC", "C...C.CC...C.CCCC.CC.....C...C.", "CCCC.C.C.CCC.CCCC.CCCC..CCCC.CC", "....C.C.C..C.C....C.CC.CC.CC..C", "CCC.CC.C..C..C..CCC.......CC.CC", "C.C...CCCCC...CCCCC.C.CC..C.C.C", "...C...CCC....C.CC.CCCC.CC.C.C.", "...C..CC..C.C....CCCCCCC..C....", "CCCCCCC...CC.CC.CCC.CCCCCCCC.CC", ".CC.C.C.CCC.CCCCC.CC..C...CC.CC", "......C...C.......C..C...CCC...", "C..CC..C..CC..C..C.C...CC...CCC", "CC..CC..C...C.C...CCCC.CCC.C.CC", "..C..C..C.C..C.C.CC.CCCCC...CC.", "C....CC..C.CCC....CC.CCC..C....", ".C..C......CC.CCCCCCCCC...C...C", "C.C.C.CCC..CC.C.CC...CC...C.C..", "C.C.CCCC...CCCCC.C.CCC.C.C.CCC.", ".CCCC...C...CC.C.C.CCC....CC.C.", "....C..CCC.C.C.CC.CC.C.C....CC.", ".C.C..C.CC.C.CCC.C.C.CC.C..CC..", "..C...CC.....C.CC..C..C..CCC...", "....CC..C.C...CC..C.C.C....C...", "....C..C.C..C....C.C.C..CCC.C..", ".CC.CC...C....C.....CCCC.C.CCCC", ".C....CC...CC....CCCCC.CC..CC.C", "C..C.C.C.C..CC.C.CCCC.......CCC", "C..CC...C.C....C......C.C.CCC.."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...........C...................", ".....C.....C...................", ".....C.....C...................", ".....C.....C...................", ".....C.....C........C..........", "...C.C.....CC.......C..........", "...C.C..C..CC.......C..........", "...C.C..C..CC..C....C..........", "C.CC.C..C..CC..C....C..C.......", "C.CC.C.CCC.CC..CC.CCCC.C...CCC.", "CCCC.C.CCC.CC.CCC.CCCCCC...CCC.", "CCCCCCCCCCCCC.CCCCCCCCCC...CCC.", "CCCCCCCCCCCCC.CCCCCCCCCC...CCC.", "CCCCCCCCCCCCC.CCCCCCCCCCC.CCCCC", "CCCCCCCCCCCCC.CCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCC.CCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCC.CCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"C.C..CC..C..C.C...C..C..C.", "CCC..C...C.C..CCCCC.......", "....CCCC.C.CC.C.....CCC.C.", "CCC..C.CC...CCC....C..C...", "C.CCCCC..CCCCCC.C.CCCCCCCC", ".C...C..C..C.C..CCCCC..C..", ".CCC.C....CC..CC...CCCC.C.", "....C.C..C.CC.C...C.CC..CC", "C.C.C....CCC.C.C..C..C.CCC", "CC.CCC.CCC.CC.CCCC...CC.C.", "...C..CCC..CC...C.CCCC..CC", ".C.CCC..CC.CC.CC.C.C.CC.CC", "..C.C..CC..CCC..CC.C..CC.C", "CCC.C..C.CCCC.......C..C..", "CCC.CC.CC.C.C...CC....C.C.", "..C.C.C.CCCCC...CCC.CCCCC.", ".C.CC..C.C.CCC..C...C...CC", "...CCC....C.C.CCCC.C.CC.CC", "C.CCC..C..CC....C..C......", "CC.CCC....CC.CC.CC.CC.C.C.", ".CC.C..CC..CC..CC.....C.CC", "CCC.C....C.....CCCC.....C.", ".CCCCC..C...C..C..C.CCC...", "C..CC..CCC....CCC..C..C.CC", "CCCC.CC...C.C.C...C.C....C", "C...CC.CC...C...C..C...C.."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........................", "..........................", "..........................", "..........................", "..........................", "....C.....................", "....C.....................", "....C.....................", "....C.....................", "....C....C................", "....C....C.C...C..........", "....C....C.C...C...C......", "....C....C.C...C.C.C......", "....C.C.CCCCC.CC.C.C...C..", "..C.C.C.CCCCC.CCCC.CC.CCC.", ".CCCCCCCCCCCCCCCCC.CC.CCC.", "CCCCCCCCCCCCCCCCCC.CCCCCC.", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"CC....CCCC.CCCCCCC..C.....CCCCC..", ".C....CCCC...C.....C..CCCCC.C..C.", "C.C..C.CC..C.C.CC.CC.C..CC.C.C.C.", ".C..C.C.......C.CCCC.C...CCCCC...", "C.C...CC.C.CCC.C.CC.C.CCC...C.C.C", "C.CCCC.......C.C..CCC..CC..C.C.CC", "CC.C.CC.CC.CC..C...C.CC.CCC...C..", "C..CCC.C..C.CCC......C.C.C.CC...C", "CCCCC.CC....C.CCC.C.C..CC...CC...", "..CCCC.CC.CC....C.CCC....C..C.C.C", "CC...CCCCC.CC..CC.C...CC...C...C.", ".C.CCCCCC..CC..C.C.C..CCCCCC..C..", "..CC.....C.CC.CCC.C.CCC..CC...C.C", ".C..C....C.C..C.C..C.CCCC..C...C.", "C.C...CC.CCC....CCCCC..CCCC..C..C", "..CCC.C.CC..C.CC.C..CC..CCC...C.C", ".CCC.CC..C.CC..CCC..C.CCCCCC..C.C", "CC....C..CCC.CCCCC.CC..CCCC...CC.", ".....C..C...C.CC.....CC.C.CCCCCC.", "CC.C....CC.C.....CCC.CCC.CC.C...C", "CCCCCCC.C.CC....CCCC..C.CCC...C.C", "CC.CC....C.CCC.CCCCCCC..CC...C...", "C.C.C.....C.CCC.C.C..C.CCCCC..C..", ".CC....C.C..CC....CC..C..CC..C.CC", ".C..CC.CCCC..C....C.CC.C..CCC.CC.", "...CC.C.CC.C...CCCC.C.C..CCC.C..C", "CCCCCCC.CC.....C.....CCC.C..C....", "CCC..CC.CC.CC...CC...CCCCCC.CC..C", ".CCC..C..C.C.C.CC.C.C.CC..CC.C.CC", "CC..C..C.CC.C..C..C.C.....CCCC.CC", "C.....CC.CC.C.C......C..CC...CCC.", ".CC....C.....C.C.....CCCCCC....C.", ".CC.CCCC.C.CCC..CCCC.....CC.CCC.C"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", "................C...C......C....C", "C..........C....CC..C......C....C", "C...C......C..C.CC..CC.....CC...C", "C.C.C.C.C..C..CCCC..CC..CC.CC...C", "C.C.CCC.CCCCC.CCCC.CCCC.CC.CCC..C", "C.C.CCCCCCCCC.CCCC.CCCC.CCCCCC..C", "CCCCCCCCCCCCC.CCCCCCCCCCCCCCCC..C", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.C", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"CC.C...CCC.CC...", "....CC.CC.CC....", "CCC.C....CCCC.CC", "C.C..C.CC..CC.CC", "..C...C.C.C.C...", "CC..CCC.C.CCC...", ".C.CC.C..C..CC..", ".CC..C......CCC.", "CC.C.CCCC.CC.CCC", "..C.CC..CC.C.C..", "CCC......CCCCCC.", "CC.C...C.CCCCCCC", ".CC..C..C.C...CC", "..CCC.C...C.CC.C", "..C...CCC.C..CC.", "CCC..CCC.CCCCCC."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"................", "................", "................", "................", "........C......C", "........C..C...C", "..C.....C..C...C", "..CC.C..C.CC...C", "C.CC.C..C.CC.C.C", "C.CC.CC.CCCCCCCC", "CCCC.CCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"C..C.CC.CC.C.CC..CCCCC....C....CC..CC..C", ".CC.C.C..CC..CC..CCC...CC.CC.CC..CCCC.C.", "...CCC.CCCCC....C.C....C..C..C.CC....CC.", ".CC.C...C.C.CCCC...CC..C.C.C.C.C.CCC.CC.", "CCCCC.CCC.C..CC..C.CCC...CCC.CC...CCC.CC", "C.CCC...CC.C..CCC.CC...C.CCC.....CCC...C", ".C.C..CCCCCCC......CCC..CCCCC.C...C.C...", "CCCC..CC....CC....CC.....CC..C..CC.C...C", "CCC.C.C.CC.C.C..CC.C....CC.C.CC.CCCC..C.", ".CC....C..CCC.....C...CCCC..CCCC.C.CCCC.", ".C..C.CC.C..C...C.C..CCC.CCC..CCCC.CCC..", "C.CCC.C..CCC.C.CC.CC..C.CC.CCC...C.CCCCC", "...C.CC.CC......CCC.C.CC.CC..C.CCC.CC.C.", "CCCCCCC..CCCC..C...CCCC.C.CC.C...C...CC.", "..C.CC.C...CCCCC....CCCCCC..C.C..CCC..CC", "....CCC.C.C..CCCCC....C.....CC.C.CC...CC", "C..C.CCCC.....CC..C.CC.CCCCCC..C.C.CCC..", "CC.CC.CCCCCCC..C.C...C...CCC.CC.........", "....C.C...C.CCCCC.CC...CC..C.C...C.CCC..", ".CC.C.CCC.C.C....CC.CC..CCC.CCC.C.CC.C.C", ".C...CC...C..CCCCC..CC.C.....C.CCC.C.C..", "CCCC.....C..CC......CC....CC.C..C.....C.", "CC...CC..CCC.C....C.CC.C...C.C......CCC.", "...C..C....CC.CCC.C.C.C..C..CCC......CCC", "CC.CC...C..CC..C.C..CC.C....C..C..C.C.C.", ".C...CCCCCC.CC.C.C..CC.CCC.CC..CCCC...CC", "..CCC.C.CC...CC..C.CCCCC...CC.CCCCC.C.C.", "C..C.C.....CCCCC..C...CC.CC...CC...C....", "CCCC...C....CC.....CCCC..C.CC.CCCCC.CCCC", "CC.C.C.C..CCCCC.C.C..C...C.CC.C.CCC...CC", "...C...CC.C.CC..C....C.CC..CC.CCCC.C.CCC", "C.C.....CCC....CCC.C...CCC.CCC...CCC....", "C....CCC.C...CCC..C.C..C.C.CCC.C.CC.CCC.", ".C.CCCCC.CCCCCCC...C.C..C.CCC..CCC...CCC", "..CCCC..CC..CCCC..C.CC.C...C..C.CC......", "C.CC.CC..C.CC..CC..CCCCC.CCC...CCCCC.C.C", ".C.CC.CCC.....C.CCC.CCCCC.CC..C.C..C....", "CC.C...C..CCCCC.CC.C.C.CCCCC.CC.CC....C.", "CC..CC..C..C..C.C..CCCCC..CCC.C...C...CC", "CC.CCCCCC....CCCC..CC.....C.C..C..C..CCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "....C......C.....................C.C....", "....C......C.............C.......C.C....", "....C......C.C.....C.....CC.C....C.C.C..", ".C..C...C..C.CC.C..C.....CC.CC...C.C.C..", ".C.CC...C.CC.CC.C..C.....CC.CC..CC.C.C.C", "CC.CCCC.CCCCCCC.C..C.....CC.CCC.CC.CCCCC", "CC.CCCC.CCCCCCC.CC.C.....CC.CCC.CC.CCCCC", "CC.CCCC.CCCCCCCCCCCCC....CC.CCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCC.CCCCC.CCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"C..C.C.....C.C...CC.C..C.C", "CCCCC....CCC.CC.C.CC.....C", ".C.CC.....C..CC.C..CC.C..C", "..C..CCC..C.C.C.C.....C.C.", "CCCCCC..C.CC..C.CC.CC...C.", "C.CCC...C..C.C.CCC...C.CC.", "CCCCC....CCCCC.C.....C..CC", "C.CCCC..C.CC..CCCCC...CCCC", "....C..C.CC..CCC.CCC.C.CCC", ".CCCC.....C.....CCCCC..C..", ".C.C.CC..C.CCCCCC.C.CCC..C", ".C..C.CCCC.......CCC.C.CC.", "..CC.C...CC.C.....C..CC.C.", ".CC.CCC.CCC.C..C.C.CCCC.C.", "..CCCCC.C.CC.C.C.C.C.C...C", "CCCC.C....CC...C.CCCC..C.C", "...C.C.CCCC.CCCC..C...C..C", "C.....CCCCCCCCC...CCCCC..C", "C...C...C.CCCCCCCC.C..CC..", "C.C..CC..C...C..CCC.C.....", "C.CC.CCCCCCCC....C..C.CCCC", "CC...C..C..C...CCC.CC.CC.C", ".C.C.CC.C.C.C.CCC.C...C...", ".CC..CC.C.C.CCCC..CC.C..C.", ".CC.CCCC.C.C.CCC.CCCC.CCCC", ".C.C.CCCC.CC..CCC.CC.C...C"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "........................C.", "........................C.", ".......C............C...C.", ".......C..C..C...C..C...C.", "....C..C..C..C...C..C...CC", ".C..C.CCC.C..CCC.CC.C..CCC", ".C..CCCCC.C..CCCCCC.CC.CCC", ".C..CCCCC.CC.CCCCCC.CCCCCC", ".CC.CCCCCCCC.CCCCCC.CCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {".CCCC.C.C..C..CCCCC.C.CC..CC.C.C....CC", "CCCC.CC.CC.C..C...C.CC...CC...CCC.C.CC", "CC.CC.C..C.C...CCCCC..CC..CC....C.C.C.", ".C.CC...C..CCC..CCC....CC..CC.CC.CC.CC", "C..C.....C.CC.C.CC...CC.CC.CC.C.CC...C", "C....C.....CC.C.CCC...CC..C.C.C.CCC..C", "C.C.CC.CCCC.C.C..C.CC.CC.CC.CCCC..C.C.", "CC.CC..C.C.C..CC.CCC..CC.C..C.C.C.CCCC", ".....C......C.C.C.CCC..CC..CC..C.CC...", "CCC.C.C.C..C...CC..CCCC..CCC.CC..C....", ".C..C.C..C..CCCCCC.CCC.C.C....C.CC..C.", ".CC..C....C.C......C.C..CC..CCCC..CCC.", "CC...CCCC.C...C.CCCCC..CC.CC..CC..CCC.", "C......CCC....C..CCCC..C.C..C.......CC", ".C....C.....C.C.C..C.C...C...CC...CCC.", ".C.C.CC...CC..CCC.C..CCC..CC..CC.CCC..", "C...CCC.C.CC.....CCCCCC..C.C.CC..C.CCC", "C.CCCC......CC....C.CC.C.C...C..C.....", ".CC..C.C.CC...CCCCCC...........CC.C.CC", ".C.....C.C.....CC..C..CC..CCCCCC..C..C", ".CCC..C....C......CC.C.....C.CCC..C...", ".C.C.CC.CC.C..CCC..CCC..CCC...C..C.C..", "C...C.CCCC.C..C..C...CC..C........CC.C", "C.CC..CC.C.....C...C.....C...C.C..C.C.", ".C..C.....C.CCC...C...C...CC.CC...C.CC", "CCCCC.C..C.C.CC.C.CCC..CCC.C..C....C.C", "CCCCC.C.C.CC...CCCC.C.....CC.CC.CC.CC.", "....C.....CCC..CCCC.CC.CC.C.CC.CCCC...", ".C..C....C.C.CCCCC...CCC.....C..CCCCC.", "CC.C.CCCC.CCC...CCC......C..C.CC..C.C.", "..C.C.C...C.CC..C...C.CCC.C......C....", ".C..CC.CC..CCCCCCC.C..CCCC..C..CC.C.CC", "..C.CCCC.C..CCCC..CC.C.C.CC.C.CCC...C.", "C.CC.CCCC.CCCCC.C.........C.C..C....CC", "....C..CC.CCCC.C.CCC..C..CC...CC.CCCCC", "C.CCCCC........CCCC....C.C..CC.CC.CC..", "C..CCC.C.C...CC.C.C...C....C..CC.C.C..", ".C..CC.CC...CC.CC.C.CC..CC.CC.CC.CCC.."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......C........................C......", "......CC....C.............C....C......", "CC....CC....C...C........CC....CC.C..C", "CC.C..CC....C..CC........CC....CC.C..C", "CCCC..CC.CC.C..CC....C...CCC.C.CC.C..C", "CCCCC.CC.CC.C..CC....C...CCCCC.CCCCC.C", "CCCCCCCC.CC.C..CC.C..C...CCCCC.CCCCC.C", "CCCCCCCC.CCCC..CC.CC.C...CCCCC.CCCCCCC", "CCCCCCCC.CCCC..CC.CC.CC.CCCCCC.CCCCCCC", "CCCCCCCCCCCCCC.CCCCC.CC.CCCCCC.CCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {".........C.........C.C....................C.....", "...........C..........C..C....C.C..CC...........", "...C.C...............................C..C..C....", "......CC.C...C...........C...C.....C.....C.....C", "..C...C.....C......C............C...CC........C.", ".C............C..C.....C.......................C", "..C.............C...............................", ".............C......................C.C...C.....", "C...............C........C.........C..........C.", ".C...............CC....C.......C.......C.C......", "..C.C...C..........C........C..........C.C..C...", "C.......C....C..C..........................C..C.", "............C................................C.C", "...C.C..........................................", "....C....................C.C.C..................", "...C.......C....C.............C.................", "C.........C.......C........C...C................", ".....................................C...C......", "...........CC..................C.............C..", "......C..........C......C.....C..C....C..C......", "C.....C..C................C............CC......C", ".........C.....CC...........C..........CC.C.....", "........C..........CC...........................", "........C................CCC..C..C..............", ".........C.C..........C.....C..C....CC.C.......C", "........C....C.C......C.C.......................", "....C.........C..C...CC.....C....C..............", ".....C.............C............................", "C..............C.C......................CC..C...", "........C......CC...C..C..C.CC.....C............", "...............C.............CC.......C.........", ".C.C..C..C..................................C...", "................................................", ".C................C........C..........C....C....", ".......C......CC................C...C......C....", "......C.........................................", ".C..................C..C..................C.....", ".........C.........C............C.........CC....", "........................C.......................", ".C................C.......C..........C.......C..", "...........C........C...C............C..........", ".......................C....C...................", ".............C..........C......CC.C.......C.....", "......C......C.................C........C.......", ".........C..C.............CC...............C....", "....C.....................C.C...........C.C.....", ".C..........C....C.C...C.C....CC.....C..........", "......C...C...............C..C..C...C..........."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "...C....................C....C................C.", "...CC.....C.............C....C................C.", ".C.CC....CC........CCC..C.C..C................C.", ".C.CC....CCC.......CCC.CC.C.CC....C.......C...CC", ".CCCCC..CCCC....C..CCC.CCCC.CC.C.CC..C.C..C.CCCC", "CCCCCC.CCCCC..CCC.CCCC.CCCC.CCCC.CC.CC.CC.CCCCCC", "CCCCCC.CCCCCC.CCC.CCCCCCCCC.CCCC.CC.CC.CC.CCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CC.CC.CCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {".................CCC.C.C.......C..C", ".................C..C.......C....C.", ".....C....C.....C............C.....", ".............................C.C...", "..........C..................C.....", "...............C.C.....CC..........", "C...C.C.C......C.....C.............", ".C....C.............C............C.", ".............C..................C..", "...........C..C.........C..........", ".................C...........C.....", "C.C.......C..........C..........C..", "....CC.......C.....C...............", "............C................C.....", ".........C.........................", "......C...C.......C..........C...C.", "...........................C....C..", "........C..C.C....C.............C..", ".........C..C......................", "....C............C.C...........C...", "..C........................C......C", "...C..C..........C.......C...C...C.", ".................C.C..C............", "...C...............................", "....C...CC.................C......C", "....................C.........C....", ".......................C...........", ".......C..C..C...C...CC..........C.", ".......CC.......................C.C", ".CC......................C......C..", ".........C..................C......", "....CCC..CC...C..C......C..C.......", "...C........C.....C................", "..........C.C....................C.", "C......C...........C......C........"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...............................C...", "...............................C...", "C..........................C...C...", "C.....C..............C.....C...C...", "C.....C....C...C.C...C..C..C...C...", "CCC..CCC...CC..C.C.C.C..C..CCC.C..C", "CCC..CCC.C.CC..C.C.CCCC.C..CCC.CCCC", "CCCCCCCCCCCCCC.CCCCCCCC.CC.CCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"......C.C...........", "C..CC......C........", "C......C......C...C.", "C...C...............", "C.............C....C", "....................", "C.................C.", ".........C..C.......", "....................", "......C...C.........", "C.CC..C...C.C.C.....", ".C.....C............", ".........C.........C", "...C.............C..", ".........CC....C....", "C...................", "....C...............", ".........C..........", "...............C....", "...................."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "..........C.........", "..........C.........", "..........C.........", ".CC.......C.........", ".CC.C.....C...C.....", "CCCCC.CC.CCCCCC.....", "CCCCC.CC.CCCCCCCCCC."};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"..", ".."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..", ".."};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"...C....", "C.....C.", ".C......", ".C......", "...C....", "........", "........", "........"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"........", "........", "........", "........", "........", "........", ".C......", "CCCCC..."};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"......C.......................C.....C....", "......C..................................", "..............C..CC......C.......C.......", "..C.............C....C.......C.C.........", ".................C......C...........C....", "CC...............C...C....C..............", "...........................C..C.........C", "...............C................C........", "....C..................C.C...C...........", "..........C..............C...C...........", "...C.........C..C.C..C...CC..............", "......C............C...........C.........", "....C.....................C..............", "....C..........C.........C...............", "......C...C.....C........................", ".............CC....C........C............", "............C.................C.....C....", ".C...........................C..C........", "....C....C........C..........C...........", "......C..................................", "...C.C......C......C...C...C..C..........", "....................C...........C......C.", "..C..............C.C.......C..C.C......C.", ".C................C......................", "C..C..C......C........C....C......C......", "CC....C..C........C......................", "..........................C..............", "......C..................CC..............", ".......CC..........CC............C......C", ".CC............C..................C...C..", "...................C...C.C.....C..C......", "....................C..C.................", ".....C...............C..C.C......C...C...", "C.................C...C..................", "...C...C.................................", "............CC...............C.......C...", "..........C.......................C......", "C.....C.......C..................C.....C.", "C....................CC.C................", "................C............C...........", ".C....C.C......................C......C.."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", "..........C.........C.C.C................", "..........C.........C.C.C...C...C........", "..CC.C....C.........C.C.CC..CCC.C....C..C", "..CC.C..C.C....C..C.C.C.CC..CCC.C..C.CC.C", "C.CCCCC.CCCC.CCCCCC.CCC.CC.CCCC.CC.C.CC.C", "C.CCCCCCCCCCCCCCCCC.CCCCCC.CCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {"...C........C.C....C.....CC.........C......CC.....", ".........C.C...C.C................................", "...C............................C............C....", ".........C........................................", "...............C.....C........C.C.................", ".......C...........C....C........C...C.C.C.....C..", ".......C.C........CC.......................C......", ".........C...........C....C..C..C...C..........C..", ".......C........C.........................C.....C.", ".......CC..C..........C..C.......C......C..C......", "........C.....................C...................", "...........................C.......C...........C..", ".....C....................C.......................", ".......C....C....C..C...C....C...CC.......C.......", ".C............C.C.....C.C...........C...C.........", "..........C.....C..........CC..........C..C....C..", "....C..C.....C................C.......C..........C", "...........C.C............C............CC........C", ".............C..............C.....................", "............................C...CC..C......C..C...", "......C.......C...............C..........CC......C", "...............C......C.............C....C........", "..................C............CC...........CC.C..", ".........C........C.....C.................C.......", "..C.............C.....C................C.C........", "....C.........................C.......C........C.C", ".............CC........C.....C.C..................", "..........C...C....C........C..............C..C.C.", "..........C.CC.....C.......CC........C..C..C......", "..................................................", "..C..........................................C....", "..........C............C....C...C.........C.......", ".................C.......................C...C..CC", ".....C.............C.........................C....", ".........C........C...............................", "............C..CC.C.C..............C...........C..", ".......................C..........................", "..........................C................C......", "...............C....................C...C.........", "....C...................CCC......................C", "................CC.......................C........", ".........C..C.CC.......C................C....C.C..", "......................C.........C............C....", ".CC......................................C....C...", "......C.......................C...C.............C.", "............C..................................C.C", "....C...............C..C............C....C......C.", "............C..C.........C...C.C.C................", "..........................C.......................", "......C.....C..................C.................."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "C............C..............C.....................", "C....C...C...C..............C............C........", "C....C.C.C...CCC...........CC......C.....C........", "C....C.C.C...CCCCC.CC.C....CC......C.....C....CC..", "C....CCC.C...CCCCC.CC.C.CCCCC..CC..C...C.C....CC..", "CC..CCCCCC...CCCCC.CCCCCCCCCC..CC..C...C.C.CC.CC..", "CCC.CCCCCC.C.CCCCC.CCCCCCCCCC..CCC.C..CCCCCCCCCC.C", "CCC.CCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCC.CCCCCCCCCCC.C", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"..C.....C..C", "............", "....C.......", "............", ".........C..", "....CC.C....", "....CC..C...", "..........C.", "............", "............", ".C..........", "...........C"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"............", "............", "............", "............", "............", "............", "............", "............", "............", "C....CC.....", "C....CC.....", "C.C.CCCC..CC"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"...........", ".C.C.C.....", "...........", "...C......C", "...........", "...........", ".........C.", "....C.....C", "C.........C", ".......C...", ".CC........"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", ".C.........", ".C.C...CC.C", ".C.C..CCCCC"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"..C.C", ".....", ".....", ".....", ".C..."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".....", ".....", ".....", "C....", "C...C"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {"..C.C....CC....", "...............", "...C.....C.....", ".C.C...........", ".CC.........C.C", "...............", ".....C.........", ".......C.......", "...........CC..", "........C......", "..........C....", "......C........", ".........C.....", "..........C....", "..............."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "C...C..........", "C...C..........", "C.CCC...C......", "C.CCC.CCCCCCCC."};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {".............................", "..............C...........C..", "........C.C...C..............", "..C...C.........CC.....C.....", "...CC...............C........", "..........C.........C.C.....C", "..........C.C...C............", "................C............", ".............................", "CCC....C....C.C...........C..", ".....C...........C...........", "................C............", "CC.......C................C..", "...C.........C..C..C.........", "..C..........C..........C....", "...........C....C............", ".....C..........C...C........", ".............................", "............C..C........CC..C", "..C.....................C....", "...C..C..........C...........", "..C..............C...C.......", "..........C.....C.......C....", "...........C.................", "C...........CC.......C.....C.", "C....C...........C..C....C...", "............C.....C........C.", ".............................", "..C.......................C.."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".........C...................", ".........C...................", "...C.....C........C.....CC...", "...C.C...C..CC....C.....CC...", "..CCCCC..C..CCC.C.C.CCC.CCC..", ".CCCCCC..CC.CCCCC.CCCCC.CCC.C", ".CCCCCCC.CCCCCCCC.CCCCCCCCC.C"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"....CC..C.......C.C.......", ".......C...............CC.", "C....................C....", "................C......C..", "........C.C.........C.....", "....C..............C......", ".......C..........C.......", ".....C....................", "......C...C..C...C........", "....C....C....C.....C.....", "....C.....C..C........C..C", "..........................", "C...C...C..............C..", "...........C...........C..", ".......C..................", "........C.....C...........", "...C............C.........", "................C.....C..C", ".......C.........C........", ".CC..CC...................", "........C...............C.", ".C..C..C.....C.......C....", "..........................", ".....C..................C.", "CC..................CC....", "..C....C.................."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "C.........C..........C....", "C.......CCC.C......C.C..C.", "CC..C...CCC.C....C.C.C..C.", "CCCCCCC.CCC.CC.CCCCCCC.CCC", "CCCCCCCCCCC.CCCCCCCCCC.CCC"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {"......C....C....................", "......C..................C......", ".....C..........................", ".......C.........C............C.", "..............C...........C.....", "..C.................C..C........", ".C..............................", ".........................C......", "........C.............C.........", "....C..........C................", ".......C.C..........C.C.........", ".C.....C..C......C.......C.C....", ".........C.....C.......C........", ".C......C.......C..........C....", "CCC.............................", "..........C............C........", "..............................C.", "...C................C...........", "...........C.....C..............", ".........C.C.............C......", ".............................C.C", "...........C...C......C.........", "......CC.......C................", "...........C.........C.......C..", "........................C...C...", "..C................C........CC..", "....CC.....C...C.C......C......C", "..........C.....CC...C..........", ".....C.........CC.....CC........", ".................CC.............", ".C.CC...C......................C", ".......................C.C......"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "..........................C.....", "...........C..............C.....", "...........C..............C.C.C.", "..........CC.C...........CCCC.C.", "...C.C....CCCCC....C.CCC.CCCC.C.", "CC.CCC..CCCCCCCC.CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"...C..C......C.....C..C..............C.......C....", "..............C.................C..........C..C...", ".........C..........CC.C.......................C..", "..C......C.C..........C..........C................", "C.........C........C.......C...CC.................", "...C..C..C....C.....................C..C..........", ".C.........C......C..C...C.C.C....................", ".C......C........................C..........C...C.", ".................C......................C......C..", "...................C...........C...........C.C....", "....C........C....C.................CC............", "..............CC...C...C......CCC..........C...C..", ".....C.......CC............C...C....C..........C..", "C........C...C.................................C..", "....C............CC.C...........C...C......C......", ".....C..................C..................C......", "........CC...C....................C....C.C.......C", "........................C.C..C............C.CC..C.", ".........C..........................C..C........C.", "....C.............C..........CCC...C..............", ".C...........C.........C........C.C...............", ".........................C....C...................", ".........C............C......C..................C.", "..C......................C.....C.......C..........", "..............................C...................", "..C..................................C............", "................C...........C.....................", ".....C....C.......................C.......C.......", "..........C..........C..........C.................", ".C.....C..............................C...C....C.C", "...................C....C..............C..........", "..C.........CC....................C...............", "....C..........C.......................C........C.", ".C.....C....C....C.........C...........C........C.", "..........C.................C.C.C.................", ".........C..C............................C.C.C....", ".C.CCC...............C.C......C...............C...", "..........C....C............C......C......C.C....C", ".......C..............C...C.......................", "......C.C....CCC....C..................CC.........", "C.C......C...............................C......CC", "...C........C.........C.........C..............C..", "...CC...................C..............C..C.......", "C.............C...................C..C............", "..................................CC....C.....C...", ".C.........................C.....C.....C.C.....CC.", "..C......C............................C...........", "...............C...C.C....C.....................C.", ".....C...............C.......C.C..........C.......", "..C..CC.........C...................C............."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...........C......................................", "...........C........................C..C..........", "C.....C....CC.C.CC...............C..CC.C.....C....", "C...CCC....CC.C.CC.C.........C...C..CC.CC....C....", "C.CCCCCC..CCC.C.CC.CC........C...C.CCC.CCCC..C.CCC", "CCCCCCCC.CCCCCC.CCCCC.CC...C.C.CCCCCCC.CCCCCCC.CCC", "CCCCCCCCCCCCCCCCCCCCC.CC...CCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {"..", ".."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..", ".."};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {"....C....................", ".........C.C........C....", "..C.....C................", "..C........C.............", "................C........", "...........C.............", "......................C..", ".CC...C............C..C..", "...C.....................", ".CC..C.CC..C........CC...", "C..CC.....C..............", "..C...C.......C..........", "C..........C.............", "C.........C..............", "......C.C....C......CCC..", ".C..C............CC..C...", ".............C...........", "...C..................C..", "...C.....................", "...CC.......C..C....C....", "..............C..........", "......................C..", "........C..........C.C...", ".....C..........C..CC....", ".C.........C............."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........C...............", ".........C...............", ".........C....C..........", ".......C.C....CC...C.....", ".......C.CC...CC...C...C.", ".C.....C.CCC..CC...C..CC.", ".CCC...C.CCCCCCC.C.C..CCC", "CCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {"....C................C....C.....C...C.........", "........C.......C..................CCCC.....C.", "C.........................C..CCC..........C..C", "........................C..............C......", "....C.....C...C...C......C...C................", ".......C..........C...........C............C..", "...........C..........C..............C.C.C....", ".................C....C.....C............C.C.C", ".............C...C.....C......................", "...C.....C.C..C......C..C.....................", "C......C...C.......CC............C...C........", "...........CC...........................C.....", "........C...............................C.....", "...........C.......C.........C..C.............", "......................C....C....C....C........", "...CC.C...C............C...C.....C..........C.", ".C........C...C.............C.................", ".C......C.............C....................C..", "..................C........................C..", ".........C.........C.........C......C.........", "...........C..CC.................C...........C", ".....CC.C..........C............C............C", "..........C..........C......C....C............", "......C...C..........C.C......C.C...C.........", "...C........C...........C.....................", ".............C....C.......CC..C...............", ".....C.C............C.......C.....C.C.........", "...C..........C..C..............C.............", "......C..C.......C......C............CC.......", ".....C................C.C............C.....C..", "......C.....C...........C....C................", "..C..C.C.............C....C...............C...", "..............CC.............................C", "C.C...............C......C..C..............C..", "......C...CC..C....C.........................C", "...C.........C.C.C..........C.........C.....C.", "C................................C.......C..C.", "...C.C........................C............C..", "......................C............C..........", "........C...........C............C............", "C..........C.........C....C..................C", "..............C...C.......................CC..", "..........C...............C.........C..CC...C.", ".......C...................................C..", "....C.C..............C.....CC........C.C......", "....C.......CCCC.....C.............C.........."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "...............C..............................", ".CC.......C....C.......C...........C........CC", ".CC.C..C.CC....C.....C.C..C.C..C.CCC......C.CC", "CCC.C.CC.CC....C....CC.C.CC.CC.C.CCC....C.C.CC", "CCC.CCCC.CC..CCCCC.CCCCC.CCCCCCC.CCCCC..CCC.CC", "CCC.CCCCCCCC.CCCCC.CCCCCCCCCCCCCCCCCCC.CCCC.CC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {".....C", "C....C", "......", "C..C..", "CC....", "......"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"......", "......", "......", "......", ".C.CC.", "CC.CC."};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {"...C............................................", "..C.C.............C.............C...C..C.......C", "..........C..C.C...............C................", "...........................C.C..C.............C.", ".....................C....C.................C..C", ".....C.....C.....C.........................C....", ".C.CC..C...C...CC......C....C.......C...........", "C....C..........C.......................C.......", "...................C.C..C.......................", "................C...C.........................C.", ".CC........C..............C.....C...C........C..", ".......C.............CC...C..C..C.............CC", ".............C.........C....C......C............", "...................C.......C..........C.........", "........C...C.....C.C................C.CC.......", "....C.................................CC....CC..", ".....C..........................C...............", "...C..C................C..C..C.......C..........", "................C....CC.........................", ".......C..C.................CC......C...........", ".............C...............C..CC....C.........", "....CC.....C....C.C....C........................", ".............C.C.C...C..................C.......", "...........................C.C..................", "....CC...C........C.....C...C............CC..C..", "..........C.....................................", ".CC...C......C...........C................C..C..", "......................C..............CC..C...C..", "...............................CC.............C.", "................................................", ".......C............C.................CC.C...C..", "..CC..............C.................C........C..", "......C........C.................C..C...C.......", "C..............C........C...C.............C.....", ".........C...............C.C....................", "..........C....C.........C......................", "......C.........C...............................", "..................C.C............C..............", "..........C.......CC.............C.....C........", ".CC..........CC..C.............C.......C........", "....C....C......C.....C.........C........C......", "..C...................................C.........", ".......C...C.....C.C........C.................CC", "..........C.C....C...C....CC................C...", "............C.........C...C.....................", "..C.......C......C...........C.CC.C....C........", ".....C......C..C...........C......C..C..C.......", ".................C....................C...C..C.C"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "......C.........................................", "......C.................C.......................", "......C....C............C....................C..", ".C....C...CC..C.........C.C............C..CC.CC.", ".C....C...CC..C..C...C..C.C...C........CC.CC.CC.", ".C....C...CC..CC.C.CCCC.C.CC..CCCC....CCC.CC.CCC", ".CCCCCCC..CCC.CC.C.CCCC.C.CC..CCCC....CCC.CC.CCC", ".CCCCCCCCCCCCCCC.CCCCCC.C.CCC.CCCCCC.CCCC.CCCCCC", ".CCCCCCCCCCCCCCCCCCCCCCCC.CCC.CCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"C.....C....C.......C..................C", "......C....C..C..........C........C....", "C...C.C.CC...........C..CC......CC...C.", ".......C..C..C..............C..C.......", ".......C...............C...............", "..................C........C...........", "...C......C......C.....................", ".........................C..........C.C", "........C................C.C.........C.", ".......C..CCC..C...............C.......", "...........................C.C.......C.", ".C..C........C........C.C..............", "........C..............C........C....C.", ".C..........C..........................", ".C...........C...........CC......C.....", "..................C...........C....CC..", "............C..........................", "..C..........CC............C.CCC.......", ".................................C.....", ".......................................", "...C...................................", "................C....C..........C......", ".......C.C.....C.............C.........", "...C...C........C.....C...........C....", "...........CC.........C..............C.", ".........................C..C..........", ".......................................", "......C..................C...C........C", "......................C................", "............C............C.............", "..C......C...............C.............", ".........C............C...C.........C.C", ".......................................", "......C....CC.....C.......C..CC........", ".......CC.CC.C.C..C...C...............C", "...............CC...............CC.....", ".............C...C.....................", "........................CC......C......", "...C...C..............................."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", "..C....................................", "..C....................................", "..C...............................C....", "..C...............................C....", "..C..............C...............CC....", "..C......C.......C...............CC....", "CCCC.....C.C..C..C.....C.......C.CC....", "CCCC....CC.CC.CC.C....CCC..C...C.CCC...", "CCCC..CCCCCCC.CC.C...CCCC..C..CC.CCC.C.", "CCCCCCCCCCCCCCCC.C...CCCCC.C.CCC.CCCCCC", "CCCCCCCCCCCCCCCCCCC.CCCCCC.CCCCC.CCCCCC"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {"........C", "...CC....", ".CC......", "......C..", ".........", ".........", ".........", ".........", "........."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".........", ".........", ".........", ".........", ".........", ".........", ".........", ".CC......", "CCCC....."};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {"........................C", ".........................", "..........C..........C..C", ".C..C.C..........C.......", ".............C.C.........", "..............C.......CCC", ".....CC..........C.......", "...C.................C...", ".....C.............CC....", ".......C..........C......", ".C...........CC..........", "....C..........C.C.C.....", ".................C..C....", ".........................", "...........C.....C.C.....", "......C...........C......", ".......C......C..........", ".............C....C...C..", ".....C...............C...", "..C..........C......C...C", "......C..C.............C.", ".............C...........", "..C...C..................", ".....C...C............C..", "......C..............C.CC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", "...C.C.....C.......C....C", "..CC.CC.C.CC..C..C.CC..CC", "..CCCCCCCCCCC.CCCCCCC.CCC", "C.CCCCCCCCCCC.CCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {".........C...C.............C.CC......", ".........................C...........", ".C..............C.C.......C......C...", "C..C..........C......................", "........C............C.............C.", "...C.................................", "....................C..........C.....", "............C.............C..........", "...C.CC.....C......C.....C...CC......", ".........C............C....C.........", "C............C....C..................", "....C.................C........C..C..", "...C.................................", ".................C..CC..C............", "C................C.....C.............", ".....................................", "..........C.C.................C......", "........C......C........C.....C......", "..............C.C.............C......", "........CC....................C...C..", "...CC.C...........................C..", "...C......C.........C....C......C....", "..........C.......C......CC.C.....C..", "........C...C...............C........", "....C...........C..C.............CC.C", "C......CC.................C...C......", "..........C.....C...C.......C.C......", "....C........C.......C..........C.C..", "....................C..........C.....", "....C........C...C...C...............", "...................C.................", "......C.........C..........CC.....C..", "C.......................C...........C", "...................C.................", "..C......C....C.....C....C...C.......", ".C...................C...............", "...C...CC....C......................."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", "........C............................", "........C............................", "........C.............C.C.........C..", "C.C.....C............CC.CCCC...C..C..", "C.C.....C..C.C...C.CCCC.CCCC.C.C..C.C", "C.CCC...CCCC.CC.CCCCCCCCCCCC.C.CC.C.C", "C.CCC.CCCCCC.CC.CCCCCCCCCCCCCC.CC.CCC", "CCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> board = {"....C.................C.", ".C............CC........", ".............CC...C.....", "...........C............", "......C............C.C.C", ".....C.......C..........", ".C.....C................", "........................", "C......C........CC....C.", "....C.C...C.............", "C..........CCC..C.....C.", "....C.......CC...C.C....", "....C....C..C......C..CC", "...C....C...............", ".....CC.....C.....C.C...", "..............C........C", ".............C..........", "........................", "........C.C....C........", "..C.......C.......C.....", "............C..C.C......", "........................", "........................", "............C..C..C...C."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "..........C.C...........", "........C.CCC.C.........", "....C...C.CCC.C........C", ".CC.C...CCCCC.C...CCC..C", "CCC.CCC.CCCCCCCC..CCC..C", "CCCCCCC.CCCCCCCCC.CCC..C"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {".C.............C.C..................C.C......C", ".CC........C.....CC.....C.C.C.....C.......C...", ".......C..........C..C......C....C.....C......", "....C...........C........C..C......C..........", ".......CC....C....C....C.........C............", "...C..............C..C.......C..C....C.C......", "............C.......C...............CC........", "............................................C.", "...C...........C....................C..C....C.", "...C.....C..C.............................C...", "............C................C............C...", ".........CC.....C..C....C.........C.C.....C...", "C...........CC.......C......................C.", "..CC..C........C..C.............C.............", "...C............................C.....CC......", "..C.......C..C.........................C..C...", "..C...................C...........C...........", "......................C.....C.................", ".C.C.C................C..C...............C....", "................C..C........C..C..............", "...........C..............................C...", ".......CC...............................C.C...", "...............C...........C........C.........", ".....................C......C....C......CC....", "..C.................C............CC........C.C", "..................C..C.................C......", "....C................C............C......C....", "...........................C.......C..........", ".......C....C..C..........C..............C....", "........C.C..C...C..C.........................", "..............................................", "...C......C.C......C........C.....C........C..", "........C.........C...........C...............", "..C.........C..C...........C.C...C...........C", "...C...................C..............C...C...", "C..C......C...................................", ".....C.........C.C.C.C...C.C...C..C...........", "C...............................C......CC.....", ".............C...............C...............C", ".C.........C.............C.C.......C..........", "....C....C..................C....C..C.........", "..........CCC.............................C...", ".C.C...C......CC........C........C.......C....", "...................C..C.CC....................", "...............CC................C.C..CC.....C", "...........C.......CC.....C...........CC......"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", ".C............................................", ".C..................................C.........", ".C.........C........................C.....C...", ".C...C.....C...................C.C..C.....C.C.", "CCC.CC.....C.C....C.....C......C.C..C.....C.CC", "CCCCCC..C..CCC.C..C....CC...CC.C.C..C..CC.C.CC", "CCCCCCC.CC.CCCCC..CC.C.CC.C.CC.C.CC.CC.CCCCCCC", "CCCCCCC.CCCCCCCCC.CC.CCCCCC.CC.CCCCCCCCCCCCCCC", "CCCCCCC.CCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> board = {".......C...C................C.C.C..........", "..........................C.C..C...........", ".........C.............C..........C........", ".........CC............................C.C.", "..............C............................", "......................C..............C.....", ".....C..C......C......C..................C.", "C...........C..C.C.........C.....C.........", "..........C..............................C.", "....C............C.C.C.........C.....C..C..", "...........................................", "C.......C.......................C.C....C...", "....C..................................CC..", "................CC..........C..............", "................CC......C......C......C...C", ".....C.......C............C.......C..C.....", ".........C......................C.C.C.C....", "....C........C...C.C.......................", "C.................C.....C..................", "....C.....C...C......C........C.........CC.", ".C.......C......C..C..........C.....C......", "....C...........C..C..............C........", "................C..........C.............C.", ".........CC............C...........C......C", "....................C......................", "......................C...C...........C....", ".C.........C...C......C..........C.........", ".....C...C..........C............C.....C...", "...................................CCC....C", "...........C.................C.........C...", "....C....C....C.C..................C.......", "..........C.......C....C......C............", "...CC..........C...C.......................", "...................C..............C........", "C...........CC.C....................C...C..", "..............................C.........C..", "....C......................................", "...............CC......C..C....C...C.......", "C.....C............CCCC......C......C......", "C.C..............C........C..CC............", ".C............C....................C.....C.", ".......C.C.C.......C..................C...C", ".........C.C...C....C......................"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "......................................C....", ".........C.........C..................C....", ".......C.C....C....CC.............C..CCC.C.", "C.....CC.C.C..CCC..CC..C..CC..C...C..CCC.C.", "C..C..CC.C.C..CCCC.CCC.C..CCC.CCC.C..CCCCCC", "CCCC..CC.C.CCCCCCCCCCCCC.CCCCCCCC.C..CCCCCC", "CCCC.CCCCC.CCCCCCCCCCCCC.CCCCCCCCCCC.CCCCCC", "CCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {"...............", "...............", "...............", ".....C........C", "...C...........", "...C...........", "...............", "....C......C...", "..C..C.........", "..............C", "...C...........", "..............C", "...C.........C.", "..CC........C..", ".......C..C...."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", ".............C.", "...C...CC...CCC", "...CCC.CCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {"................................C...C.C......C.", ".......C..............C.........C.........C....", "......C.............................C.....C....", "....C.................C.............CC.........", "...C....................C...C..C...............", ".C..............C..........C..C.....C....C.....", ".......C.C.....................................", "...C............C.......C..C...................", ".................C.......................C..C.C", ".......C.......C...............................", "C..C................C....C.....................", "...................C...........................", "........C.................C......C....C......C.", ".........C.......C.C.....C..........C..........", "....C........C..................C.C............", "..C...........C................................", "C............C..C...C..C.......................", "......................CCC...........C...C...C.C", ".........C..........C.....C....................", "..C.C..C........................C..............", ".............C.C...............................", ".......C.......C.....C.C........C............C.", "...................................C...........", "....C...C.C.....CC..C............C.............", "..................................C.......C....", "C.......C................C.........C...........", "..............C........CC.........C............", ".....CCC.............C...............C........C", "..C..........C....C.....C....C..........C......", ".......C............................C.......C..", ".............................C...............C.", "........C.C...........C..............C...C....C", "...C..CC..........C......................C.....", "....C.........C.....................CC....C....", "...........C.....CC......................C.....", "............C..C.....CC.......C..C.....C.......", "....C.....CC.....C........................C....", "...C.........C...CC....C.....C.....C...........", "...............C....C........C.........C...C...", "......C.........C......C.C.C.C..C..C...........", ".................................C.........C...", "..................C...C........................", ".....C........C...........C..C................C", ".............C...C......C...............C......", ".....C.C.........C........................C....", "..C......C..............C.............C.....C..", ".....C.............C..C...C...C................"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", ".......................................C.......", ".................C.....C...........C.C.C.......", ".....C...........C...C.C...CC..C...C.C.C.......", ".....C......CC..CC...C.C...CC..CCC.CCCCC..C..CC", "CC.CCC.CC.C.CCC.CC.C.C.C.CCCC..CCCCCCCCC..CCCCC", "CCCCCC.CC.C.CCC.CCCC.C.C.CCCCC.CCCCCCCCC..CCCCC", "CCCCCCCCCCC.CCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {"..........C......C.........C", "C...............C...........", ".....C............C.........", "C..C...C...........CC...C.C.", "..C.........................", ".CC......C.C...C.........C..", "....C.C...............C.....", "....C.............C......C..", "..........C...C.........C...", "......C.................C...", ".C.......CC......C.C......C.", "..................C.........", "............................", "........C............C....C.", "...C......C............C....", ".......C..C............C....", ".......C....................", ".CC.C...........CC..........", "........C..C................", "..C.....C....C..C......C....", "..............C....C.......C", "..C.......C............C....", "..............C.............", "....C.C.....C.C...CC..CC....", ".......C....................", ".........C..................", ".....C......................", "C......C...............C...."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", ".......................C....", "...C...................C....", "...C.C....C............C....", "...C.C....C......C.C...C....", "...C.C....C......C.C...C....", "C..C.CCCC.C..CCC.C.CCC.C...C", "CCCC.CCCCCC..CCC.CCCCC.C...C", "CCCCCCCCCCCC.CCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> board = {"CCCC.C.CCCCCCC.CCCCCCCCCCCCCCCCCCC.CCCCCCCCCC", "CCCC.CCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCC", "CCCCC.CCCCCCCCC.CCCCCCCC.CCCCCCCCC.CCCCCCC..C", ".CC.CCCCC.CCCCCCCCCCCC.CCCCCCCCCCCCCC.CCCCCCC", "CC.CCCCCCCCC.CCCCCCCCC.CCCC.CCCCCCCCCCCCCCCCC", "CCC.CCCCCCCCCCCCCCCCCCCCCC.C..CCCCCCCCCCC.CCC", "CCCCCCCCCCC.CCCCC.CCCCCCCCCCCCCCCCCCCCCCC.CCC", "C.CC..CCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCC....C", "CCCCCCCCCC.CCCCC..CC.CCCCCCCCCCCCCCCC.CCCCCCC", "CCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCC.CCCCCCC", "CCCCCCCCC.CCCCC..C.CCCCCCC.CCCC.CCCCC.CCCCCCC", "C.CCCC..C.CC.CCCCCCCC.CCCCCCCCC.CCCCCCCCCCCCC", ".CCCCCCCCCCCC.CCCCCCCC..CCCCCCCCCCCCC.CC.CC.C", "C.CCCC.CCCCCCCCCCC.CCCCCCC.CCCCC.CCCC..CCCCCC", "CCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCC.CCCC", "CC.CCCCCCCCCCCC.CCCCCCCCCCCCC..CCCC..C.CCCCCC", "C.CCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCC.CCCC.C.CCC", "CCCCCCCCCCCCCCC.CCCCCCCC.CCCCCCCCCCCCCCCC.CCC", "CC.CCCCCC.CCC.CCCC.C.CC.C.CCCCCCCCCCCCCCCC.CC", "CC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCC.", "CCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCC.CCC.CCCC.CCC", "CCCCCCCCCCCC.CCCCCC.CCCCCCCCCCCCCCCCCCCCCCC.C", "CC..CCCCCCCCC..CC.CC.CCCCC.CCCCCCCCCCCC.CCC..", "C.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCC", "CCCCCC.CCCCCCCCCCCCCCCCCCC.CCCCCCCCCCC..CCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCC.CCCCCCCC", "CCCCCCCCCCCCCCCC.CCCCCCCCCC.CC.C.C.CC..CCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC..CCCCCCCCCCC", "CCCC.CCCCCC.CCCCCCCCCCCCCCCCC.CCCCCC.CCCCCCCC", "CCC.C.CCCCCCCCCCCCCCCCCC.C.CCCCCCCCCCCCC.CC..", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCC.CCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCC.CCCCCCCCCCCC.CCCCCCCC.CCCCCCC.CCC", "CCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCC..CC.C.CCCCC", "CCCC.CCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCC", "CCC.CC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCC.CCCCCCCCCCCC.CCCCCCCCCCC.CCCCCCC.CC", "CCCCC.CCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCC.CCCCCCCC.CCCCCCCCCCCC.CC.CC.CCCCC.CC", ".CCCCC..CC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.C.C.CCCCCC", "CCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CC.CCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..............................C..............", "..............................C.......C...C..", ".C.......C....C........C.C.C..CC..CC.CC...CCC", ".C....C..C....C..C.C.C.C.C.C..CC..CC.CC..CCCC", "CC..C.C..C....C..C.CCC.CCC.CC.CCC.CCCCC.CCCCC", "CC.CCCC.CC....C.CC.CCC.CCC.CC.CCCCCCCCC.CCCCC", "CCCCCCC.CC....C.CC.CCC.CCC.CC.CCCCCCCCCCCCCCC", "CCCCCCC.CCCCCCCCCC.CCC.CCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {"CCCCCC.CC.CCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCC..CCCCCCCCCC", "CCCC.CCC..CCCCC", "CCCCCCC.CCCCCC.", "..CCCCC.CCCCCCC", "CC.CCCCCCCCCCCC", ".CCCCCCC.CCCCCC", "CCCCCCCCC.CCCCC", "CCCC.CC.CC.C.CC", ".CCCCCCCCC.CCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCC.", "CCCCC.CCCCCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".CC.........C..", ".CC....C.C..CCC", "CCCC.C.CCC.CCCC", "CCCCCCCCCC.CCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {"CCC.CCCCCCCCCCCCCC.CCCC..CCCCCCCCC", "CCCCCCCC.CCC.CCCCCCCCC.CCC.CCCCCCC", "CCCCCCCCCCCCCC.CCC.CC.CCCCCCCCCCCC", "CCCCCCCCCC.C..CCCCC.CCCCCCCCCCCCCC", "CCCCCCCCCC.CCCC.C.CCCCCCCCCCCCCCCC", "CCCCCC.CCCCCCCCCC.CCCCCCC.CCCCCCCC", ".CCCCCCCCC.C.CCCCCCC.CCC.CCCCCCC.C", "C.CCC.CCCCCCCCCCCCCCCCCCCCCCC.CCC.", "CCCCCCCCCCCCCCCCCCCCC.CCCCCCCCC.CC", "CCCCCCCCCCCCCCCCC.CCCC.CCCCCCCCCCC", ".CCC..CCCC..CCCCCCCCCC.CCCCCCCCCCC", "..CC..CCCCCCCCCCCCCCC.CCCCCCCCCCCC", "CCCCCCCCCC..CCCC.CCCCCCCCC.CCCC.CC", "CCCC.CC..CCCCC.C.CCC.CC.CC..CC.CCC", "CCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCC.C", "C.C.CCCCCC.CCCCCCCCCCCCCCCCCCCCCCC", "CCCCC.CCC.CCCCCCCCCCCCC.CCCCCCCCCC", "C.CCCCCCC.CCCCCCCCC.CCCCCCC.CCCCCC", "CCCCCCCCCC.CCCCCCCCCCCCC.CCCCCCCCC", ".CCCCCCCCCCCCCCCCCCCCCC.CCCC.CCCCC", "CCCCCCCC..CCCC.CCC.CCCCCCCCCCCC.CC", "CCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCC", "CCC.CCCCCCC.C.CCCCCCCCCCCCCCCCCC.C", "CCCCCCC.CCCCCCCCCC.CCCCCCCCCCCCCC.", "CCCCCCCCCCCCCC.C.CCCCCCCCCCCCCCCCC", "CCC.CCCCC.CCCCCCCCCCCCCCCC.CCCCCC.", "CCCCCCCCC.C.CCCC.CCCCC.CCCCCCCCCCC", "CCCCCCCCCCCC.CCCC.CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCC.CCCCCCCCCCC.CCC", "C.C.CCCCC.CC.CCCCCCCCCCCCC...CCCCC", "CCCCC.C.CCCC.CCCCCCCCC.CCCCCCCCCCC", "CCCCCCCCCCCC.CCC.CCCCCCCC.CCCCCCC.", "CCCCCCCCCCCCCCCCCCCCCCCC.CC.CCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................", ".....................CC...........", "........CC....C...C..CC..C..CC...C", "..C.CC..CC....CCC.CC.CC.CC..CC...C", "CCCCCC.CCC....CCCCCC.CCCCCCCCC.CCC", "CCCCCC.CCC.CC.CCCCCCCCCCCCCCCC.CCC", "CCCCCCCCCCCCC.CCCCCCCCCCCCCCCC.CCC", "CCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {"CCCCCCCCCCCCCCC.CCCCC.CCCCCCCCCC.CCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "C.CCCCCCCCC.CCCCCC.CCCCCCCCCCCCCCCC.C.C", "CCCCC.CCCCC.CCC.CCCCCCCC.CCCCCCCC.CCCCC", "CC.CCCCC.CCCCCCCCCCC.C.CCCCCCC.CCCCCCCC", "CCCCCCCCCCC..CCCCCCC.CCCCCCCCCCCCCCC.CC", "CCCC...CCCCCCCC.CCCCCCCCCCCC.CCCCCCCCCC", "...CCCCCCCCCCCCCCCCCC.CCCCCCC.C.CCCCCCC", "CCCCCCCCCCCC.CCCCCCCCCCCCCCC.CCCCCCCCCC", "CCCC.CCCCC..CCC.CC.CCCC.CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCC.CCCCCCCCC.C..CCCCCCCCCCCCCCCC", "CCC.CC.CCCCCCCC.C.CCCCCCCCCCCCCCCCCCC.C", "CCCCCCCCCCC.CCCCCCCCCCC.C.C.CCCCCCCCCC.", "CC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", ".CCCC.CCCCCCC.CCCCCCC..CCCCCCC.CC.C.CCC", ".CCCCCCCCCCCCCCCC.CCCCCCCCCC.CCCCCC.CCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCC.CCC", "CC.CC.CCCC.CCCCCCCCCCCCCCCCCCCC.CCCCCCC", "CCCCCC.CCCCCCCCCCCCCCCC.CCCC..CCCCCCCCC", "CCCCCCCCCCCCCC.CC.CCCCCC..CCCCC.CCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCC.C", "CCCCCCCCCC..CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC.CCCCCC.CCC.CCCCCCCC", "CCC.C.CCCCCC..CCCCCCCCCCCCCC.CCCCC.CCCC", "CCCCCCC.CCCCCCCCC.CCCCCCCCCCC..C.CCCCCC", "CCCCCCCC..CCCCCCCCCCCCC.CCCCCCCCCCCCCCC", "CCC.CCCCCCCCCCCCC.CCCCCCCCCCCCCCCC.CCCC", "CCCCCCCCCCCC.CCCCC..CCCCCCCCCC.CCCCCC.C", "CCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCC.C", "CCCCCCCCCCCCCCCC.CCCCC.CCC.CCCCCCCCCCCC", "CCCCCC.CCCCCCCC.CCCCCC.CCCCCCC.CCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC.CCC.CCCCCCCCCC", "CCC.CC.CCCCCCCCCCCC.CCC.CC.CCCCCCCCCCCC", "CCCCCCCCCCCCCC.CCCCCCCCCCCCCC.CCCCCCCCC", "CC...CCCCCC.CCCC.CCCC.CCCCCCCCCC.CCCCCC", "CC.C.CCCCCCCCCC.CCCCCCCCCCCCC.CCC..CCCC", "CCCCCCCC..CCCCCCC.CCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".C........C............................", ".C........C...C.......................C", ".C......C.C...C..C...CC......C..C.C...C", "CC......C.C...C..C...CCC..CC.CC.C.C..CC", "CC...C..C.CC..C.CCCC.CCC..CC.CCCC.C..CC", "CCCCCCC.C.CCCCC.CCCCCCCC.CCCCCCCCCC..CC", "CCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCC.CCC", "CCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> board = {"CCCCCCCCC.CCCCCC.CCCCCCCCCCCCC.CC.", "CC.CCC.CC.C.C.CC.CCCCCC..CCCC..CCC", "CCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCC.CCCC.CCC.CCCCCCCCCCC.CCC.CCCC", "CCCCCCCCCCCCCCCCCCCCCC.CCCCCCCC.C.", "CCCCCCCCC.CC.C.CCCCCCCCCCCCC.CCCCC", "C.CCCCCCCCCCC.CCCCCC.CCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC.CCCCC.CCCCCCCCCCC", "CCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCC.", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCC", "CC..CCCCCCCCCC.CCC..CCCCCCCCCCCCC.", "CCC.CCCCCCCCCCCCCCC.CCCCC.CCCCC.C.", "C.CCCCCC.CCCCCCCCC.CCCCCC..CCCCCCC", "CCCCCCCCCCCCCCCCCCC.CCCCCCCCCC.C.C", ".C.CC.CC.CCCCCCCCCCC.CCCC.CCCCCCCC", "CCC.CCCCCCCCCCCCCCCCCCCCCCCC.C.CCC", "CCCCCCCCCC.CCCCCCC.CCCCCCCCCCCCCCC", "CCC.CCCCCCCCCCCCCCCCCC.CCCCCCCCCCC", "CCCCCC.CCCCCC.CCC.CCC..CCCCCCCCCCC", "CCC.CCCCCCCCCCCCCC.CCC.CCCCC.CCCC.", "CCCC.CCCCCCCCCCCCC.CCC.CCCCCCCCCCC", "CCCCCCCCCCCCCCC.CCCCC..CCCC.CCC..C", "CCCC.CCC.CCCCCCCCCCCCC.CCCC.CC.CCC", "CCCCCC.CCCCCCCC.CCC.CCCCC..CCCCCC.", "CC.CCCCC.CCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCC.CC.CCCCCCCCCCCCC", ".CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", ".CCCCCCCCCCCCCCCCC.CCCC.C.CC.CCCCC", "CCC..CCCCCCCCC.CCCCCCCCCCCCC.CCCCC", ".CCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCC", "CCC.CCCCCCCCCCCCCCCCCCCCCCCC.CCCCC", ".CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCC.CCCCCCCCCCC.CCCCCC.CCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".........C........................", "..C......CC................C....C.", "..C....CCCC......CC......CCC..CCC.", "..C.C.CCCCC...C.CCC..C...CCC..CCCC", "C.C.CCCCCCC...C.CCC..C...CCC.CCCCC", "C.CCCCCCCCC.CCC.CCCCCC.C.CCCCCCCCC", "C.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "C.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "C.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "C.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> board = {"C.CCCCCCCCCCC.CCCCCCCCCCCCCCCCC", "C.CCCCCCCCCCCCCCCCCCCCCCCCC.CCC", ".CCCCCCCCCCCCCCCCCCCCCCCCCC.CCC", "CCCCCCC.CCCCCC.CCCC.CCCCCCCCCCC", "CC..CCCCCC.CCCCCCCCCCCCCCCC..CC", ".CCCCC.CCCCC.CCCCCCCCCCC.C.CCCC", "C.CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCC.CCCCCC..CCC.CCCCCCC.", "CCCCCCCC.CCCCCCCCCCCCCCCCCC.CCC", ".CCCCCCCCCCCC.CCCCCCC.CCCCCC.CC", "CCCCCCCCCCCCC.CCCC.CCC.CCCCCCCC", "CC.CCC.CCCCCC..CCCCCCCCCCCCC.CC", "C.CCCCCCCC.CCCCC.CCCCCCCCCCCCCC", "CCCCCCC.CCCCCCC.CCCCCCCCCCCCCC.", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCC.CCC.CCCCCCCCCCCC.CCCCCC", ".CCCCCCCCCCCCCCC.CC.CCCCCCCCCCC", "CCC.CCCCCCCCCCCC.CCCCCCCCCCC.CC", "CCCCCCCCCCCCCC.CCCCCCCCC.CCCCCC", "CCCC.CCCCCCCCCCCCC.C.CCC.CCCCCC", "CCCCCC.CCCC.C.CCCCCCCC.CCC.CCCC", "CCCCC.CCCCCCCCCCCCC.CC.CCCC.CCC", "CC.CCC.CCCCCCCC.CCCCCC..CC.CCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC.C", "CCCC.CCCCCCCCCCCCCCC.CCCC.CCCCC", "CCCCCCCCCCCC.CCCCCCCCC.CCCCCCC.", "C.CCC.CCCCCCCC.CCCCCCCCCCCCCCCC", "CCCCCCC.CCCCC.CCCC.CCCCC.CCCCCC", "CCCCCCCCCCCC.C.CCC.CCCC.CCCCCCC", "CCC.CCCC.CCCCCC..CCCCCCCCCCCCCC", "CCC.CCCCCCCCCCCCCCCCCCCC..CCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..............C................", "......C.......C........C.......", "CCC...C.C.....C...C....C.......", "CCCC..C.C.C.CCCCCCC....CCCC...C", "CCCC..C.CCC.CCCCCCCC.C.CCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCC.CCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> board = {"CCCCCCCCCCCCCCCC", "CCCCCCCCC.CC.CCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCC.C", "CCCCC.C.CCCCCCCC", "CCCC..CCCCCCCCCC", "C.CCCCCCCCC.CCCC", "CCCCCCCCCCCCCCCC", "CCCCCC.CCCCCCCC.", "CCCCCCCCCCCCCC.C", "C.CC.CCCC.CCCCCC", "CCC.CCCCCCCCCCCC", "CCCCCC.CCCCCCCCC", "CCCCCC..CCCCCCCC", "..CCCCCC..CCCCCC", "CCC.CCCCCCCCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C.C....C........", "C.CC...C.C.CC..C", "CCCCCCCCCC.CCC.C", "CCCCCCCCCCCCCC.C", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> board = {"CCCCCC.CCCCCCCCCC.C", "CCCCCCCC.CCCCCCCCC.", "CC.CCCCCCCCCCCCCCCC", "CCCCCCCCCCC.CCCCCCC", "CCCCCC.CCCCCCCCCCCC", "CCCCCCCC.CC.CCCCCCC", "CCC.CC..CCCCCCCCCCC", "CCCCCC.CCCCCCCCCCC.", "CCCCCCCCCC.CC.CCC.C", "C.CC.CCCCCCC.CCCC.C", "CCC.CCCCCCCCCCCCC.C", "CCCCCCCCCCC.C.CCCCC", "CCCCCCCCCCCCCCCCCCC", "CCCCCCC.CCCC.CCC..C", "CCCC.CCCCC..CCCCCCC", "CCCCCCCCCCCCCCC.CCC", "CCCCCCCCCCCCCCCCCCC", "C..CCCCC.CCCCCC.CCC", "CCCCCCCCCCC.CCCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"............C...C..", "..CCC.......C..CC.C", "CCCCCC.C..CCC..CC.C", "CCCCCCCCC.CCC.CCC.C", "CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> board = {"CC.CCCCCCCCC.CC.CCCCCC.CCCC.CCCCC.CCCCCCCCC.CC.", "CCCCCCCCCCCCCCCCCCCC.CCCCC.CC..CCCCCCCCCCC.CCCC", "C.CCCCCCCCCC.CC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCC.CCCCCCCCCCCCCC.CCCCCCCCCCCC.CCCCCCC..CC", "CCCCCCC.CCCC..CCC.CCCCCCCCCCCC.CC.CC.CCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCC.", "CCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.", "CCCCCCCCC.CCCCCCC..CCCCCCCCCCC.CCCCCCCCCCC.CCCC", "CC.CCCC.CCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCC.CCCCCCCCCCCCC", "CCCCCCCC.CCCCCCCCCC.CC.CCCC...CCCCCC.CCC.CCCCC.", "C.CCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCC", "CCCCCC.CCCC.CCCCCCCCCCCCCCCCCCCC.CCC.CCCCCCC.C.", "CCCCCCC.CCCC.CCCC.CCCCCCCCCCCCCCCCCCCCC.C.CCCCC", "CCCC.CC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCC.CCC.CCCCCCCCCCCC..CCCCCCCCCC.CCCCCCCCCC", "CCCCC.CCCCC.CCCC.CCCCCCCCCCCCCCCCCCCC.CCCCCCCCC", ".CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC..", "CCCCCCCC.CCCCCCCCC.C.CCC.CCCCCCCCCCCCCCCCCCCCCC", "CCCC.CCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCC.C", "CCCCC.C.CCCCCCCC.CC.CCCCCCCCCCCCCCCCC.C.CCCCCCC", ".CCCCCCCCCC.CCCCC.C.CCCCCCCCCC.C.CCCCCCCCCC.CCC", "..CCCCCCCCCCC.CCCCCCCCC.CCCCCC.CCCCCCCCCCCCCCC.", "C.CCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCC.C", ".CCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCC.C.CCCCCCCC", "C.CCC.CCCCC.CCCC.CCCC.CCCCCCCCCCC.C.CCCC.CCCCCC", ".CCC.C.CCCCCCCCCCCCC.CCCCCCCCC.CCCCCCC..CCCCCCC", ".CCCCCCCC.CCCCCCC.CC.CCCCCCCCCC.CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCC.CCCCCC.CCC.CC.CCCC.CCC.CCCCCC", "CCCCCCCC.CCCCCCCCCCCCCCCCCCC..CC.CCCCCCCCCCCCCC", "CC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCC.CCCC", "CCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCC.CCC.CCCCCC", "CCCCCCCCCCCCCC.CC.CC.CCCCCCCCCCCCC.CCC.CCCCCCCC", "CC.CCCCCCCCCCCC.CCCC.C.C.CCCCCCCCCCCCC.CCCCCC.C", "CCCCCCCCCCCCCC.CCCCCCCCC.CC.CCCCCCCCCCCCCCCC.CC", "CCC.CCCC.CCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCC", "CCCCCC.CCCCCCCCC.CCCC.CCCCCCCCC.CC.CCCCCCCCCCCC", "CCCC.CCCC..CCCCCCCCC.CCCCCCCCC.CC.CCC.C.CCCCCC.", "C.C.CCCCCCCCCCCCC.CCCCCC.CCCCCCCCCCCCCCCCCCCC.C", "C...CCCCCCCCCCCCCCCCCCCCCCCCC.C.CCCCCCCCCCCCCCC", "CCCCCCCCCCCC.CCCCCCCCCCCCCCCCCC..CCC.CCCCCC.CCC", "CC.CCCCC..CCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCC.CCCCCCCCCCCCCCCCCCCC.C.CCCCCCCCCCCCCC.", "CCCC.CCCCCCCCCCCCC.CCCCCCC.CCCCCCC.CCC.CCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.C.CCCCCCCCCCCCCC", "CCC..CCCCCCCCCCCCCCCCCCCCCCCCC..CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC.CCCCCCCCCC.CCCCC...CCCCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...............................................", "...............................................", ".....CC..C.C..C.............................C..", "..C..CC.CC.C..C..C.....C......CC...C........C..", "..C..CC.CC.C..C.CCCC...CC....CCC..CC.....CC.CC.", ".CCC.CCCCC.C.CCCCCCC...CC..C.CCCC.CCC.CCCCCCCCC", ".CCC.CCCCC.CCCCCCCCCC.CCC..CCCCCC.CCC.CCCCCCCCC", ".CCCCCCCCC.CCCCCCCCCCCCCC.CCCCCCCCCCC.CCCCCCCCC", "CCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> board = {".CCCCCCCCCCCCCCCCCCCCCC..CCCCC", "CCCCCCCC.CCCCCCCCCC.CC.CCCC.CC", "CCC.CCCC..CCCCCCCCCCCCC.CCCCCC", "CC.C.CCC.CCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCC.CCCCCCCCCCCC.CCC", "CCCC.CC...CCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCC.CCC.CCCCCCCCCCC", "CCCCCCCCC.CC.CCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCC.CCCCCCCCCCCC", "CCCCCCCCCC.CCCCCC.CCC.CCCCCCCC", ".CC.CCCCCCCC.CCC.CCCCCCCC.CCCC", "CCCCC.CCCCCCCCCCCCC.CC.CCCCCCC", "CCCCCCCCCCCCCCCCC.CCCCC.CCCCCC", "CCCCC.CCCCCCC.CCCCCCCC.CCCCC.C", "CCC.C.CCCCCC.CCCC.CCCCCCC.CCC.", "CCCCCC.C.CCCCCCC.C.CCC.CCCCCCC", "CCCCC.CCCC.CCCCCCCCCCCCC.CCCCC", "CCCCCCCCCCCC.C.CC.CCCCCCCCCCCC", "CCCCCCCCCCC.CCCCCCCCCCCCCCCCCC", "CCCCCCCCCC.CC.CCCCC.CCCCCCCCCC", "CCCCCCCCCCC.CCCCCCCCCCCCCCCCCC", ".CCCCCCCCC...C.CC.CCCCCCCCCCCC", "CCCCCCCCCC.CCCCCCCCCCCCCCCC.CC", "CCCCCCCCCCC.CCC.CCCCCCCCCC..CC", "C.CCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCC..CCCCCCCCCC.CCCC.CCCCCCCC", "CCC.CCCCCCCCCCCCCCC.CCCCCCCCCC", ".CCCCCC.CCCCCCCCCC.CCCCCCCC.CC", "CCCCCCCCCCCCCCCCC..CCCCCCCCCCC", "CC.CCCCCCCCCCCCCCCCCCCCC..CCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..............................", "........C.........C.C...C.....", "....C.CCC...C.....C.C.C.C.C.C.", "C..CC.CCCC.CC...CCCCC.C.C.C.CC", "CCCCCCCCCC.CCC..CCCCC.CCCCCCCC", "CCCCCCCCCCCCCC.CCCCCC.CCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> board = {"CC.CCCCCCCC.", "CCCCCCCC.CCC", ".CCCCCCCCCCC", ".CC.CCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCC.", "CCCCCCCCCCCC", "CCCCCCC.CCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCC.CC.CCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"....CC.C.CC.", ".CC.CCCCCCC.", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> board = {"CC.CCCCCCCCCC.CCCCCCCCCCCCCCCCC.C", "CCCCCC..CC..CCCCCCCCCCCCCCCCC.C.C", "CCCCCCCCCC.CCCCCCCC.CCCCC.CCCCCCC", "CCCCCCCCCCCCCCCCC.CCCC.C.CCCCCCCC", "C.C.CC.CCCCC.CCCC.CCCCCCCCCCCCCCC", "CCCCCCCCCCCC..CCCCCCCCCCCCCCCCCCC", "CC.CCCCCCCCC.CCCCCCCC.CCCCCCCCCCC", "C.CCCCCCCCCCCC.CCCCCCCCCCCC..CCCC", "CCCCCCCCCCCCCCCC.CCC.CCCCCC.CCCCC", "CCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCC.CCCCCCCCCCCCCC.CCCC", "CC.CCCCC.CCCCC.CCCCCCCCCCCCCCCCCC", "CCCCCC.CCC.CCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCC.CCCC.CCCCCCCCCC.CCCCCC", "CCCCCCCCCCCCCCCC.CCCCCCCCCCCC.CCC", "CCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCC", "CCCCCCCCCCCC.CCCCCCCCC.CCCCCCCCCC", "CCCCC.CCCCCCCCCCCCCCCCCCCCCCC.CCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCC.CCCCCCCC.CCCCCC..CC.CC.CCCC", "C.CCCCCCCCCCCCCC..CCC.C.CCC.CCCCC", "C.CCCCCCCCCC.CC.CCCCCCCCCCCCCCC.C", "CCCCCCCCC.CCCCCCCC.CCCCC.CC.CCCCC", "CCCCCCCCCCCCCC.CCC.CCCCCCCCCCCCCC", "CCCCCCCC.CCCCCCCCCCCCC.CCCCCCCCCC", "CCCCCC.C.CCCCCCCCCCCCCCC..CCC.CCC", "CCC.CCCCC....C.CCCCCCCCC.CCCCCC.C", "CCCCC.C.CCCCCCCCCC.CCCCCCC.C.CCCC", "CCCCCCCCCC.CCC.CCCCCCCCCCC.CCCCCC", ".CCCC.CCCCCCCCCCCCC.CCCCCCC.C.CCC", "CCCCC.CC.CCCCCCCCCCCCCC..CCCCCCCC", "CCCCCCCCCCC.CCCC.CCCCCC.CCCCCCCCC", "CCCCCCCCC..CCCCCCCC.CCCCCCCCCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................C..............", ".........C.....C..C..............", ".....C...CC.C.CCCCC....CC........", "C.CC.CC.CCCCCCCCCCC....CC...C..CC", "C.CC.CCCCCCCCCCCCCC..CCCC...C.CCC", "C.CCCCCCCCCCCCCCCCC..CCCCC.CCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> board = {"CCCCCCCCCCCCC", "CCCC.CCCC.CCC", "CCCCCCCCCC.CC", "CC.CCCCCCCCCC", "C.CCCC.CCC..C", "C..CCCCCCCCCC", "CCCCCCCCCCCCC", "CCCCCCCCCCCCC", "CCCCC.CCCCCCC", "CCCCCCCCC.CCC", "C.CCCCCCCCCCC", "CC.CCCCCC.CCC", ".CCCCCCCCCCC."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C.....CC.....", "C.CC..CCCCC..", "CCCC.CCCCCCCC", "CCCC.CCCCCCCC", "CCCCCCCCCCCCC", "CCCCCCCCCCCCC", "CCCCCCCCCCCCC", "CCCCCCCCCCCCC", "CCCCCCCCCCCCC", "CCCCCCCCCCCCC", "CCCCCCCCCCCCC", "CCCCCCCCCCCCC", "CCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> board = {"CCCCCCCC.CCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCC.CC..CCCCCCC.CC", "CCCCCCCCCCCC.CCC.CCCC.C..CC", "CCCCCCCCC.C..CCCCC.CCCCCCCC", "CCCCCC..CCCCCCCCCCCCCC.CC..", "CCCCCCCCCCCCC.CCCCCC.CCCCCC", "CCC.CCCCCCCCCCC.CCCCCCCCCCC", "CCCCCCCCCCCCCCCC.CCCCCCC..C", "CCCCCCCCCCCCCCCCCCCCC..CCCC", "CCCCCCCCCCCCCCCCCCCCC.CCCCC", "CCCCCCCCCCCCCCCCCCCCCCC.CCC", "C.CCCC.CCCC.CCCCCCCCCCCCCCC", "CCCCCCCCCCCC..CCCCCCCCCCCCC", "CCCCCCCCCCCCCC.CCCCCCCCCCCC", "CCC.CCC.CCC.CCC.C.CCCC...CC", "CCCC.CCCCCCCCCCCCCCCCCC.CCC", "CCCCCCC.CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCC.CCC.CCCCC", "CCCCCCCCCCCCCCCC.CCCCCCCCCC", "CCCCCCCCCCCC.CCCCCCCCCCC..C", "CCCCCCCC.C.CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCC.CCC.CCCCCC..C.", "CC...CC..CCCCCC.CCCCCCCCC..", "CCC.CCCCCCCCCCCCCCCC.CCCCCC", "CCCCCCCCCCC..CCC.CC..CCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".....................CC....", "C........CC..C..C.C..CC....", "C....CC.CCC.CC.CCCC.CCC..C.", "C....CCCCCCCCC.CCCCCCCC..C.", "CC.C.CCCCCCCCC.CCCCCCCC..C.", "CCCCCCCCCCCCCC.CCCCCCCCC.CC", "CCCCCCCCCCCCCC.CCCCCCCCC.CC", "CCCCCCCCCCCCCC.CCCCCCCCC.CC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> board = {"CCCCCCCC.CC", ".CCCCCCCC..", "CCC.CCCCCCC", "CCCCC..CCCC", ".CCCCC.CCCC", "CCCCCCCCCCC", "CCCCCCC.CCC", "CCCCCC.CCCC", "CCCCCCCCCCC", "CCCCCCCCCCC", "CCCCCCCC.CC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".....C..CC.", "C.C..CCCCCC", "C.CCCCCCCCC", "CCCCCCCCCCC", "CCCCCCCCCCC", "CCCCCCCCCCC", "CCCCCCCCCCC", "CCCCCCCCCCC", "CCCCCCCCCCC", "CCCCCCCCCCC", "CCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> board = {"CCCCCCCCCCC.C.CCCCCCCCC.CC", "CC.CCCCC.C.CCCCC.CCCC.CCCC", "CCCCCCCCCC.CCCCCCCC.CCCCCC", "CCCCCCCCCCCCCCCCCC.CCCCCCC", "CCCCCCCCCCCCCC..CCCCCCCC.C", "CCCCCC.CC.CCCCCCCCCCCC.CC.", "CCCCCC.CC..CC..CCCCC.CCCC.", "CCCCCCCCCCCC..CCCCCCCCCCC.", "CC.CCCCCCCCCCCCCCCC.CCC.CC", "CCCCCCCC..CCCCCCCCCCCCCCCC", "CC.CCCCCCCCCC.CCCCCCCCCCCC", ".CCCCCCCCCCCCCCCCCC.CCCCCC", "CCCCCCCCCCCCCCCCC..CCCCCCC", "C.CCCCCCCCCCCCC...CC..CCCC", "CCCCCCC.CCCCCCCCCCCCCCCCC.", "CCCCCCCCCCCCCCCC..CCCCCCC.", "CCCCCCCCCCCCCCCCCCC.C.CCCC", "CCCCCCCCCCCCCCCCC..CCC.CCC", "CCCCCCCCCCC.CC.CCCCCCCCCCC", "CCCCCCCC.CCCC.CCCCCCCCCCCC", "CC.CCCCCCCCCCCCCCCCCCCCCC.", ".CCCCCCC.C.CCCCCCC.CCCC.CC", "CCCCC.CC..CCCCCCCC.C.CCCCC", "CCCC.CCCCCCCCCC.CC.CCCCCCC", "CC.CCCCCCCC.CCCCCCCCCCC.CC", "..C.C.CCCCC..C.C.CCCCCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........................", "...C......................", "..CC.....CCCC.C.C.CCC.....", "C.CCC..CCCCCC.CCCCCCC..CC.", "C.CCCC.CCCCCC.CCCCCCC..CC.", "CCCCCC.CCCCCC.CCCCCCCCCCC.", "CCCCCC.CCCCCCCCCCCCCCCCCC.", "CCCCCCCCCCCCCCCCCCCCCCCCC.", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> board = {"CCCCCCCCCCCCC.CCCCCCC.C.", "CCCCCCCCCCCCC.CCCCCC.CCC", "CCCCCCCCCCC.CC.CC.CCCCCC", "CCCCCCCCCCCCCC.CCCCC.CCC", "CCC.CCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC.CCCCCCC", "C.C.CCC.CCC.CCCCCCCC.CCC", "CCC.CCCCCCCCCCCCCCCCCCCC", "CCCCCCCC.CCCCCCCC.CCCCCC", "CCCCCCC.CCCC.CCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "C.CCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCC.CCCCCCCCCCC", "CCCCCCCCCC.CCCCC.CCCCCC.", "CCCC.C.CCCCCC.CCCCCCC.CC", "CCCCCCCC.CCC.CCCCCCC.CC.", "CCCCCCCCC.CCC.CCCCCCCCC.", "C.C.C..CCCCCCCC.CCCCCCCC", "CCCCCCCC.CC.CCCCCCCC.CCC", "CCCC.CCCCCCCCCCCCCCC.CC.", "CCCCCCCCCCC.CCCCCCCCCCCC", "CCCCC..CCCCCCCCCCCCCC.CC", "C.CCCCCCCC.CCCC.CCCCCCCC", ".CCCCCCCCCCCCCCCCCC.CCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........C.............", "....CC.C..CCC.......C...", ".C.CCC.CCCCCC.......C..C", "CCCCCC.CCCCCCC..C.CCCCCC", "CCCCCC.CCCCCCCCCC.CCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> board = {"C.C.CCCCCCCCCCCC", ".CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCC.C.", ".CCCCCCCCCCCC.CC", "C.CCCCCCCCCCCCC.", "CCCCCCC..CCCCCCC", "CCCC.CCCCCCCCCCC", "CCCCCC..CCCCCCCC", "CCC.CC.CCCCCCCCC", "C.CCCCCCCCCC.CCC", "CCCCC.CCC..C.CCC", "CCCCC.CCCCCCCCCC", "CC.CCCCCCCCCCCCC", "CCCCCCCCCC.C.CC."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..CC............", ".CCC....C....CC.", "CCCCCCCCCCCC.CC.", "CCCCCCCCCCCC.CCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> board = {"CCCCC", "CCCCC", "CCC..", "CCCC.", "C.CCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CC...", "CC.CC", "CCCCC", "CCCCC", "CCCCC"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> board = {".CCCCCCCC", "CCCCCCCCC", "CCCCCCCCC", "CC.CCCCCC", "CCCCCCCCC", "CCCC.C.CC", ".CCCCCCC.", "CCCCCCCCC", "CCCCC..CC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".CC.C..C.", "CCCCC..C.", "CCCCCCCCC", "CCCCCCCCC", "CCCCCCCCC", "CCCCCCCCC", "CCCCCCCCC", "CCCCCCCCC", "CCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> board = {"CCCCCCCCCCCCC.CC.CCCCCCCCCCCCCCCCC.CCCCCCCCC..CCC", "CCC..CCCCCC.CCCCCCC.CCCCC.CCCCCCCCCC.CCCCCCCCCCCC", "CCCCCCCC.CCCCCCC.CCCCCCC.CCCCCCCCCCC.CCCCCCCCCCCC", "CCCC.CCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCC.CCCCCCCCC", "CCCCCCCCCCCC.CCCCCCCCCCC.CCCCCCC.CCC..CCC.CCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCC..CCC.CCCCCCCCCCCCC.CCCCC", "CCCCCCCCCCCCCCCCCC.CCCC.C.CCCCCCCCC..CCCCCCCCCCCC", "C.CC.CCCCCCC.CCCCCCCCCCC.CCCCCCCCCC.CCCCCC.CCCCC.", "CCCCCCCCC.CCCCCCCCCCCCC.CCCCCC.C.CCC.CCCCC.CC.CCC", "CC.CCCCC.CCCCCCCCCCCCCCCC.CCCCCC..CC.CCC.C.CCCCCC", "CCCCC.CCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCC", "CCCC.CCC.CCCCCCCCCCCCCCCCCCCCC..CCCCCCC.CCC.CCCCC", "CCC..CCC.CCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCC.C", "CC.CCCCCCC.CCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCC.CC", "CCC.CCCCCCCCCCCCCCCCCCCCCCCCCC.CC.CCCCCCC.CCC.CCC", "CCC.CCCCC.CCCCCC.CCCCCCCCCCCCCCCC.CCCCCC.CCCCCC.C", "CCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CC", ".CC.CCCC.CCC.CCCCCCCCCCC.CCC.CCCCCCCCCCCCCC..CC.C", "CCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCC.CCCC.C", "CC.CCCC.CCCCCCCCCC.CCCCCCCCCCCCCCCC..CCCCCCC.CCCC", "CCCCCCCCC.CCCCCCCCC.CCC.C.CCC.CCCCCCCCCCCCCCCCCCC", "CCCCCCC.CCCCCCCCCCCCCCC.CCCC.CCC.CCCCCCCCCCCCCCCC", "CC..CC.CCCCCCC.CCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCC", "CC.CCCC..CCCC.CC.CCCCC.C.CCCCCCCCCCCC.CCCCCCCCCCC", "CCCCCCCCCCCCCCC.CC.CCCCCCCCCCC..CCCCCCCCC.CCCCCCC", "C..CCCCCC..CCCCCCCCCCCCCCCCCCCCCC.CC.CCCCC.CCC..C", "CCCCCCCCCCCCCCCCCCCCCCCC.CCCCC.CCCCCCCCCCCCCCCCCC", "CCCCC.CCCCC.CC.C..CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCC.CCCCCCCC.CCCC", "CCCCCCCCCCCCCCCCCC.CCCCC..CCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCC.CC..CCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCC.CCCC", "CCCCCCCCCCCCCCC.CCCCCCC.C..C.CCCCCCC.CCCCCCCCC.CC", "CCCCC.CCCCCCCC.CCCCCCCCCC.CCC..CCCC.CCC.CCCCCCCCC", "CC.CC.CCCCC.CCCCCCC.CCCCCCCCCCCC.CCCCCCCCC.C.CCCC", "CCCCCCCCCC.CC.CCCCCCCCCCCCCC.CCCCCCCCCCCCC.CCC.CC", "CCCCCCC..CCCCC.CCCCCCCC.CCCCCCC.C.CCCCCCC.CCCCCCC", "CC.CCCC.CCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCC.", "CCCC.CCC.CCCCC.CCCCCC.CCC.CC.CCCCCCCCCCCCCCCCCCCC", "CC.CCC.CCCC.CC.CCCCC.CCCCCCC.CCCCC.CCCCCCCCCCCCC.", "CCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCC", ".CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCC.CCCCC..CCCCCCCCCCCCCCCCCCCCCCC.CCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC.CCC.CCCCCCCCCCCCCC.CCC", "CCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCC.CCCCCCCCC.CC", ".CCCCCC.CC.CCCCCCCC.C.C.CCCCCCCCCCCC.CCCCCCCC.CCC", "CCCCCCCCCCCCCCCCCCCCCC.C.CCCCCCCCCCCCCCC.CCCCCCCC", "CC..C.CCCCCCCCCCCCCCCCCCCCCCCCCCC..CCCC.CCCCCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".................................................", "..........................................C......", "..........C.....C.C........C.............CC......", "...C......C.....C.CC.......C.CC.C........CC.CC.C.", "..CC.C....C..C..C.CC..C....C.CCCC.....C..CCCCC.C.", "C.CC.CC...C.CCC.C.CC.CCC.C.CCCCCC...C.C..CCCCC.C.", "CCCCCCC...CCCCCCC.CCCCCC.C.CCCCCC...C.CC.CCCCC.CC", "CCCCCCCCC.CCCCCCC.CCCCCC.C.CCCCCCCCCCCCC.CCCCC.CC", "CCCCCCCCCCCCCCCCC.CCCCCCCC.CCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> board = {"C.CCCCCCCCCCCCCCCCCCCCCCCCCCCC...CCCCCCC.CCCCC", "CC.CC.C.CCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCC.C", "CCCCCCCCCC..CCCC.C.CCCCCCCCCC.CCCCCCC..CCCCCCC", "CCCCCCCCCCCC.CCC.C..CCCCCCCCCCCC.CCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCC", "CCCCCCCC.CCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCC.CC", "CCCCCCC.CCCCCCCCCC.CC..C.CCCCCCCC.CCCCCCCCCCC.", ".CCCCCC.CCCC.CCCCCCC.CCCCCCCCC.CCCCCCCCC.CCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCC.CCCCCC.CCCC.", "CCCCCCCCC.CCC.C.CCCCC..C.C..CCCCCCCC.CCCCCCCCC", "CCCCC.CCCCCCCCCCCCCCCC.CCCCC.CCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCC.CCCCCCCCCCCC", "CCC.CCCCCCCCC.CCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCC.CCCCCCCCCCC.CCCCCCCC.CCC.CC", "CCCCCCCCCC.CCCCCCCCCCCCCCC.CCCCC.CC..CCCCCCCC.", "CCCCCCCCCCCCCC.CCC.C..CCCCCC.CCCC.CCCCCCCCCCCC", "CCCCCCC.CCCCCCCC.CCCC.C.CCCCCCCCC.CCCCCCCC.CC.", "CCCCCCCCCCCCCCCCC.CC.CCCCCCC.CCCC.CCCCCCCCCCC.", "CCCC.CCC.C.CCCCC.CCCCCCCCCC.CCCCCCCCCCCCCCCCCC", "CCCCC.CCCCCCCCCCCCCCCC.CCCC.CCC.CCCCCCCC.CCC.C", "CCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.", ".CCCCCCCCCCCCCCCCCCC.C.CCCCCCCCCCCCCCCCCCCCCC.", "CC.C.CCCCCCCCC.CCC.CC.CCCCCCCCCCCCCCCCCCCCCCCC", "CCCC.CCCCCCCCCCCCCCCC.CCCCCCCCCCC.CCCCCCC.CCCC", ".CCCCCCCCCCCCCCCC.CCCCCCCCCCCC.CCCCCCCCCCCCCCC", "C.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CC.", ".CC.CC.CCCCCCCCC.CCCC.CCC.CC.CCCCCCCCCCCCCCCCC", "CCCCCCCCCCC.CCCC..CCCCC.CCCCCCC.CCCCCCCCCCCC.C", "CCCC.CCCCCCCCCCCCCCCCCCCCCCCC..CCCCCC.CC.CCCCC", "CCC..CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCC.C.CCCCCCCCCCCCCCC.CCCCCC..CCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC.C.CCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCC.CCCCCCCCC.C.CC.CCCCCC..CC", "CCCC.CCCCCC.CCCCCCCCCCCCCCC.CCCCCC.CCCCCCCCC.C", "CCCCC.CCCCCCC.CCCCCCCC.CCCCCCCCCCCCCCCCCC.CCCC", "CCCCC.CCCCCC.CCCCCCC.CCC.CC.C.CCCCC.CCCCC.CCC.", "CCCCCCCCCCCCC.CCCCCCCCCCC.CCCCCCCCC.CCCC.CCCCC", "CCCCCCC.CCC.CCCCCCCCCCCCCCCCCC.CC.CCCCCCCCCCCC", "C.CCC.CC.CCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCC..CC", "CCC.CCCCCCCCCCCCCCCCCCCC.CCCCCCCCCC.CCCCCCC.CC", "CCCCCCCCCCCCCC.CCCCCCC.CCCCCCCCCCCCCCCCCCCCCCC", "CCCCCC.CCCCCCCCCCCCCCC.CCCCCC.CCCC.C.CC.CCCCC.", "CCCCC.CCC.CCCC.CCCCCCCC.CCCCCCCCCCCCC.CCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCC.CCCCCCCCC", "CCCCCCCCCCCCCCCCCCCC.CCCCCCCCC.CCCCCCCCCCCCCCC", "CCCCCCCCCC..CC.CCCCC..CCCCCCCCCCCCCCCCCCCCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..............................................", "....C.........................................", "....C......C........C........C.C........C..CC.", "....CC....CCC.......C...CC...C.C........C..CC.", "....CC..C.CCCC......CC.CCC...C.C..C.CC.CC..CC.", "CC.CCC..C.CCCC...CC.CCCCCC..CCCC.CC.CC.CC.CCCC", "CC.CCC.CC.CCCCCC.CCCCCCCCC.CCCCCCCC.CCCCC.CCCC", "CCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCC", "CCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> board = {"CCCCCCCCCCCCCCC.CCCCCCCCCCCCCC.CC", "CCC...CCCCCCCCC.CCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.", "CCC.CCCC.CCC.CCCCCCCCCCCCC.CCCCCC", "CCCCCCCCCCC.CCCC.CCCCCC.CC.CCCCCC", "CCC.CCCCC.CCCC.CCCCCCCCCCCCCCCCCC", "C.CCCCCCCCCCCCCC.CCCC.CCCCCCCCCCC", "CC.CCCCC.CC.CCCCCCCCCCCC.CCCCCC.C", "CCCCCCCCCCCC.CCCCCC.C.CCCCCCCCCCC", "C.CC.CCCCC.CCCCCC..CCCCCCCC.CCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCC.CC.CCCC", "CCCCCC.CCCCCCCC.CCCC..CCCCCCCCCCC", "CCC..CC.CCCCCCCCCCCCCCCC.CCCCCCCC", "CC.CCC.CCCCC.CCCCCCCC.CCC.CCC.CCC", "CCCCCCCCCCCCCCC.C.CCCCC...CC.CCCC", "C.CCCC.CCCCCCCCCCCCCC.CCCCCCCCCCC", ".CCCC.CCCCCCCCC.CCCCCCC.CCCCCCCC.", "CCCC.C.CCCCCCCCCCCCCCCC.CCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", ".C.CCCCCCCCCCCC.CCCCC.CCCCC.CCCC.", "CCC.CCCC.CCCCCCCCCCCCCCCCCCCCCCCC", "CCCCC.CCCCCCC.CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCC.CC.CC..C.CCCCC.CCCC.CC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCC.CC.CCCCCC.CCCCCCC.", "CCCC.CCCCCC.CCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCC.CCCCCCCCCCCCCCCC..CCCCCCCC", "CCCCCCCCCCC.CCCCCCCCCCCCC.CCCCCCC", ".CCCCCCCCCCCCCCCCCC.CCCCCCCC.CC.C", "CCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCC", "CCCCCCCCCCCCCCCCCCCCCC.CCCCCC..CC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................C....C..C.....C", "..C...............C....C..C...C.C", "C.C.......C.......C.CC.C.CC.C.C.C", "C.C..CC.C.C....C.CC.CC.C.CCCC.CCC", "CCCCCCC.C.CCC..C.CC.CC.CCCCCCCCCC", "CCCCCCCCC.CCC..CCCC.CC.CCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> board = {"CCCCCCCCCCCCCCCCC.CCC.CCCC.CCCCCC.C.CCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "C.CCCCCCCCCCCCCCCC.CC.CCCCC.CCCCCCCCCCCCCCC.C.C", "CCCCCCC..CCCCCCC.CCCCCCCCC.CCCCCC.CCCC.CCCCCCCC", "CCCCC.CCCCCCCCC.CCCCCCC.CCCCCCCCCCCCCCCCCCCCCCC", "CCCC.CCCC.CCCCCCCCCCCCCCC.CCC.CCCCCCCCCC.CCCCC.", "CCCCCCCCCCCCCCC.CCCC.CCCCCCCCCCCCC.C.CC.CCC.CCC", "CCCC.CCC..CCCCCCCCCCCCCCCC.CCCC.CCCCC.CCCCC.CCC", "CCCCCC.CCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCC.", "CCCCCCCCCCCCCCCCCCCCCCC.CCC.CCC.CCCCCCCCCCCCCCC", "CCCCCCC.CCCCCCCCCCCC...CCCCCCCCCCC.CCCCCCCCCCCC", "CC.C.C.CCCCCC.CCC.CCC.CCCCCCCCCCCCCCCCCCCCCCCCC", "CCCC.CCCC..CCCCCCCCCCCCCCCCCCCCCC.CC.CCCCCCC.CC", "C.CCCCCCCCCCCCCCC.CCCCCCCCCC.CC.CCCCCCCCC.CCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCC.CCC.CCCCCCCCCC.CCCCC", "CC.C.CCCCCCCCCCCCCCCCCCC.CCCCCCCC.CCCCCCCCCCCCC", "CCCCCC.C.CCCCCCCCCCC..C.CCCCCCCCC.CC.CCC.CCCCCC", "CCCC.CCCCCCCCCCCCCCC.CCCCCCCCCC.CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCC.CCCC.CCCCCCCC.CCCCCC..C", "CCC.CCCCCCCCCC.CCCCCCCCCCC.CCCCCCCCCCC.CC.C.CCC", "CCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCC..CCCCCC.CCC", "CC.CCCCCC.CC.CCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCC", "CCCCCCCC.C.CC.CCCCC.CCCC.CCCCCCC.CCCCCCCC.CCC.C", "CCCC.CCCCCCCCC.CCCCCCCCCCCCCCCCCCC.CCCCCCCCC.CC", "CC.C.CCC.C.CCC.CCCCCCCCCCC.CCC.CC.CCCCCCCCCCCCC", "CCCCCCCCCCCCC..CCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCC", "CCCC.C..CCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCC", "CCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCC", "CCCCCCCCC.CCCCCCCCCCCCCCC.CCCCCC.CCC.CCCCCCCCCC", "CCCCC.CCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCC.CC", "CCC.CCC.CC.CCCCCCCCCCCCCCCCCCCC.C.CCCC.CCCCCCC.", "CCCCCCCCCCCCCCCC.C.CCCCC.CCCCCCCCCCCCCCCCCCCCCC", "CCC.CC.CCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "C.CCCCCCC.CCC.CCC.CC..CCCCCCCCCCCC.CC.CCCCCCC..", "CCCCCCCCCCC.CCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCC.CCCCC.CCCC.CCCC.CCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCC.CCC", "CCCCCC.CCCCCCCCCCCC.C.CCCCCCC.CC.C.CCCCCCCCCCCC", "CC.CCCC.CCCCCCCCCCCCCCC.CCC.CCCCCCCCCCCCCC.CC.C", "CCCCCCCCCCCCCCCCC.C.CCCCCCCC.CCC.CCCCCCCCCCCCCC", "CCCCCCCCCCC.CCCCCCCCCCCC.CCC.C.CC.CCCCCCCCCCCCC", "C.CCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", ".CCCCCC.CCCCCCCCCC.CCC.CCCCCCC.CCCCCCCCCCCCCCCC", "CCCCC.CC.CC.CCCCCCCCC.CCCCC.CCCCCC.CCCCCC.CCCCC", "CCC.CCCCCCCCCCC.CC.C.CCCCCCCC.CCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCC", "CCC.CCCCCCCC.CCCCCCCCCCCCCCC..CCCCCCCCCCCCCCC.."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".C.............................................", ".C...........................................C.", ".C.........................C......C.C....C...C.", ".C..C...CC....C..C.......C.C.C.CC.C.C....C...C.", ".C..C...CC....CC.C..CC.C.CCCCC.CC.CCC..C.C...C.", "CC..C...CCC..CCC.CC.CC.C.CCCCC.CC.CCC..CCCC.CC.", "CCCCCCC.CCCCCCCC.CCCCC.C.CCCCC.CC.CCCCCCCCC.CCC", "CCCCCCCCCCCCCCCC.CCCCC.C.CCCCCCCC.CCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> board = {"CCCCCCCCC.CCCC..", ".CCCCCCCCCCCC.CC", "CCCC.CCCCC.CCC.C", ".CCCCCCCCCCCCCCC", ".CCCCCCCCC.CCCCC", "C..CCC.CCCCCC.CC", "CC.CCCCCCC.CC.CC", "C.CCCCCCCC.CCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", ".CCCCC.C.CCCCC.C", "CCCCCCCCC.CCCC.C", "CCCCCCCCCCCCCCCC", "CCCCCCCCCC.CCCCC", "C.CCCC.CCCCCCCCC", "CCCC.CCCCCCCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"........CC..C...", "...C....CC..CC.C", ".C.CC..CCC.CCCCC", "CCCCC.CCCC.CCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> board = {"CCCCCCCCCC.CCCCCCCCCCCCC.CCCC", "CC.CCCCCCCCCCCCCCCCCCCCCC.CCC", "C.CCCCCC.CCC.CCC.CCCCCCCCCCCC", "CCC.CCCCCCCCCC.CCCCCCCCCCCCCC", "CCCCCCCC.CCCCCCCCCCCCCCCCCCCC", "CCCCCCC.CCCCCCCCCCCCCCCCCCCCC", "CC..C.CCC.CCCCCCCCCCCCCCCCCCC", "C.CCCCCCCCCCCCC...CCCCCCCCCCC", "CCCCC.CCCCCCCCC.CCCCCCCCCCCCC", "C.CCCCCCCCCCCCCCCCCCCCCCCCCCC", ".CCCCCCCCCCCCCCCCCCCCCCCC.CCC", "CCCCC.C.CCC.CCCC.CCCCCCCCCCCC", "..CCCCCCCCCCCCCCCCCCC.CCCCCCC", "CCCCCCCCCCCCC.CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCC.CCCCCC.CC", "CCC.CCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCC.C.CCCCCCCCCC.C.C.", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", ".CCCCCCCCCC.CCCCCCCCCCCC...CC", "C...CCCCCCC.CCCCCCCCCCCCCCCCC", "CCCCCCCC.C..CCCCCCCCCCCCCCCCC", "CCCCCCCCCCCC.CCCCCCCCCCCCCCCC", ".C.CCCCCCCCCCCCCCCCCCC..CCCCC", "CCCCCCCCCCCCC.C.CCCC.CCCCC..C", "CCC.CCCCCCCCCCCC.CC..CCCCCCCC", "CCC.CCCCCCCCCCC.CC.CCC.CCC..C", "CCCCCC.CCCC.CCCCCCCC.CCCCCCCC", "CC.CCCCC.CCC.CCCCCC.CC.CCCCCC", "CCC..C.CCC.CCCCCCCCCCCCCCC.CC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".................C...........", "....CC...C...C.C.C...C.......", "CC.CCC..CCC..CCC.C...C.......", "CC.CCC..CCC.CCCC.C..CC....C..", "CCCCCCCCCCCCCCCC.C.CCCC.C.C..", "CCCCCCCCCCCCCCCCCCCCCCCCC.CCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> board = {"C"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> board = {"CCCC.CCCCCCC", "CC.CCCCCCC.C", "C.CCCCCCC.CC", "C.CCCCCCCCC.", "CCCC.C.CC.CC", "CCCCCCC...CC", "CCCCCC.CCCCC", "CCCCCCCCCCCC", ".CCCCCCC.CCC", "CCCCCCCCCCCC", "CCCCCCCC.CCC", "CCCCCCCCC.CC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".......C.C..", "C.....CC.CCC", "CCCC..CCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC", "CCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> board = {"CCCCCCCCCCCCCCCCCCC.CCCCCCCCCC.", "CCC.C.CCCCCCCCCCCCCCCCCC..CCCCC", "CCCCC.CCCC.CCCCCC.CC.CCCCC.CCCC", "CCCCC.CCCC.CCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCC.CCCCCCCCCCCCCCCCC", "CC.CCCCCCCC..CCC.CCCC.CCCCCCCCC", "CCCCCC.CC.C.CCCCCCCCCCCCCCCC.CC", ".CCCCCCCCCCCCCCC.CCCCCCCCCCCCCC", "CCCCC.CCCCCCCCC.CCC.C..CCCCCCCC", "CCCCCCC.CCCCCCCCC.CCCCCCCCCC.CC", "C.CCC.CCCCC.CCCCCCCCCCCCCCCCCCC", "C.C.CCC.CCCCC.CCCCCCCCCCCC.CCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCC.CC", "CCCC.CCCCC.CCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCC.CCCCCCCCCCCC", "CCCCCCCCCCCCCCCC.CC..C.CCC.CCCC", "..CCCCCC.CCCCCCCCCCCC.CCC.CC.CC", "CCCC.CCCC..CCCCCCCCCCCCCCCCCCC.", "CC.CCCCCCCCCCCC.C.CCCCCCC.CC.CC", "CCCCCCCCCC.C..CCCCCCCCCCCCCC.CC", "CC.CCCCCC.CC.CCCCCCC.CCCCCCCCCC", "C..C.CCCCCCCCCCCCC..CCCCCCC.CCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCC.CCCCC.C.CCCCC", "CC...C.CCCC.CCCCCCCCCCCCCCCCCCC", "CCCCC.CCCCCCCCCCCCCCCCCC.CCCCCC", "C.CCCCCCCCCCCCCCCCCCC.CCCC.CCCC", "CCCCCCCC.CCCCCCCCCCCCCCCCCCC..C", "CC.CCCCCCC..CCCCCC.CCC.CC.CCC.C", "CCC.CCC.CCCCCCCCCCCCCCCCCCC.CCC", "CCCCCCCCCCC.C.CCCCCCCCCCCCCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"......................C........", "....C.......C.C.......C........", "C..CC..C....CCC.......C..C....C", "C..CC..C.CC.CCC.......CC.CCC.CC", "CC.CC.CC.CC.CCC..C.CC.CC.CCC.CC", "CCCCCCCCCCCCCCCC.CCCC.CCCCCC.CC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCC.CC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> board = {"CCCC.C..CCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCC.CCC", ".C.CCCCCC..CCC.CCCCC.CCCCCCCCCC..CCCC.CCCCCC", "CC.CC.CCCCC.CCCCCCCCCCCCCCCCCCC.CCCCCCC.CCCC", "CCCCC.CCCCCCCC.CCCCCCCC.CCCCCCCCCCC.CCCCCCCC", "C.CC.CCCCCCCCCCCC.CCCCCCCCCCCCCC.C..CCC.CCCC", "CCCCCC.CCCCCC.CCCCC.CCCCCCCCCC.CCCCCCCCC.CCC", "C.CCC.CCC.CCCC.CCCC.CCCCCCCCCCCCCCCCC.CCCCCC", "CCCCCCCCCC.CCCCC.CCCCCC..C.C.C.CCCCC.C.CCCCC", "CCCCCCCCCC.CC.C.CCCCCCCCCCCCCCCCCCC.CCCCCCCC", "CC.CCCCC.CCCCCCCCC.CCCCCCCCCCCC.CCCCCCCC.CCC", "CC.CCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCC.CCCCC", "CCCCCCCCCCCCCCCCCC.CCCCC.C.CCCC.CCCCCC.CC.CC", "CCCCCCC..CCCC.CCCCCCCCCCCCCCCCCCCCCCCCC.CCCC", "CCC.CCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCC.C.", "CCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCC.CCC.C.CCC", "CCCCCCCCCCCCCCC.CC.CCCCCCCCC.CCCCCCCCCCCCC..", "CCCCC.CCCCCC.CCCCCCCCCCCCCC.CCCCC.CCCCCCCCCC", "CCCCCCC.CCCCCCCCC.CCCCCCCCCCCCCC.CCCCCCCCCCC", "CCCCCCCCCCCCCC.CCC.CCCCCCCCCCCCCCCCCCCCCCCCC", "CC.CCCCCCCCCCC.CCCCCC.CCCCCCCCCCCCCCCCC.CCCC", "C.CCCCCCCCCC.CCCC.CCCCCCCCCCCCC.CCCCCC.CCCCC", "CCCC.CCCCCCC.CCCCCCCCCCCCCCCCC.CCCCCCCCCCCCC", "CCC.CCCCCCC.C.CC.CCCCCCC.CCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCC.CCCCCCCCCCCCCCCCCCC.CCCCCC.CCCCC", "CCCC..CCCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCC.CCCC", "CCCCCC.CCC.CCCC.CCCCC.CC.CCCCCCCCCCCCC.CCCCC", "CCCCCCC.CCCCCCC.CCC.CCCCCCCCCCCCCC.CCCCCCCCC", "CCCCCCCCCC.CCCCCCCCCCCCCCCC.CCCCCCC.CCCCCCCC", "CCCCCC.CCCC.CCCCCCC.CCCCCCCCCCCCCCC.CCC.CCCC", "CCCCCCCCCCCCCC.CC.CCCCCCCCC.CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCC.CCCC..CCCCCCCCCC.CCCC", "CC.CCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCC.CCC.CCC", "CCC.CCCC.CCCCCCC.CCCCCCCCCCCCCC.CCCCCCCCCCCC", "CC.CCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCC.CCCCCC", "CCCCCC.CCC.CCC.CCCCCCC.CCCCCCCCC.CCCCC.C.CCC", "CCCCCCCCCCCC.CCCC.CCCC.CC..CCCCCCC.CCCCCCCCC", "CCCC..C.CC.CCCCCCCCCCC.CCCCCCCCCCCC.CCCCC.CC", "CCCCCCC.CCCCCC.CCCCCCCC.CCCCCCCCCC.C.CCCCCC.", "CCCCCCCC.CCCCCCCC.CCCCCCCCCC.CCCCCCCCCCCCCCC", "CCCCCCCCCC.C.CCCCCC.CCCCC.CCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCC.CCC", "CCCCCCCC.CCC..CCCCCCCCCCCCCCCC.CCCCCCCCCCCCC", "CC.CCCCCCCCC.CCCCCCCCCCCCCCCC.CC.CCCCCCCCC.C", "CCCCCCCCCCCCCCCC.CC.CCCCCCC.CCCCCCCCCCCCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"............................................", "............................................", "..................C.....................C...", "..........C......CC..C.C...C.C...C....C.C..C", "...C....C.C.CCC.CCCC.C.CC.CC.CCCCC....CCCC.C", "C.CC.C..CCC.CCCCCCCCCCCCC.CCCCCCCC....CCCCCC", "C.CC.CC.CCCCCCCCCCCCCCCCCCCCCCCCCC.C.CCCCCCC", "C.CCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "C.CCCCC.CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> board = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> board = {"CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> board = {"C"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> board = {"."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"."};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> board = {"CC", ".C"};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C.", "CC"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> board = {"C.C..C.C..C..C.", "CCC...C..CCC.C.", "......CC...CCCC", ".C..CC.C.C.C.C.", "C....C.C......C", ".....C..CCCCC.C", "CCC.......CCCCC", "..C.C..C.C...C.", "CCC....CCC.CC..", "CC.CCCC.CCCC...", ".C..C.CC.C.CC.C", "C.CCCC..CC..C.C", ".CCCC.CCCCCC...", "..C...C.CCC.CC.", "CCCC..CCC.C...."};
    TheSquareDivTwo* pObj = new TheSquareDivTwo();
    clock_t start = clock();
    vector<string> result = pObj->solve(board);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...............", "...............", "...............", "...............", "...............", ".........C..C..", ".........C.CC..", ".C....C.CCCCC.C", ".C.C.CC.CCCCCCC", "CCCC.CC.CCCCCCC", "CCCC.CCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCC"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22732658&rd=14144&pm=10299
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
 
class TheSquareDivTwo {
public:
  vector <string> solve(vector <string>);
};
 
int arr[51];
 
vector <string> TheSquareDivTwo::solve(vector <string> board) {
  int len = board.size();
  for (int i = 0; i != len; i++)
    for (int j = 0; j != len; j++)
    {
      if (board[i][j] == 'C')
        arr[i] ++;
    }  
  
  vector<string> ret(len, "");
  for (int i = 0; i != len; i++)
  {
    for (int j = 0; j != len - arr[i]; j++)
    {
      ret[j] += '.';
    }
    for (int j = len - arr[i]; j != len; j++)
    {
      ret[j] += 'C';
    }
  }
  return ret;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/