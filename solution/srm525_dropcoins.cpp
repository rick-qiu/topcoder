/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11665
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

class DropCoins {
public:
    int getMinimum(vector<string> board, int K);
};

int DropCoins::getMinimum(vector<string> board, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {".o..", "oooo", "..o."};
    int K = 3;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {".....o", "......", "oooooo", "oooooo", "......", "o....."};
    int K = 12;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"....", ".oo.", ".oo.", "...."};
    int K = 3;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {".......", "..ooo..", "ooooooo", ".oo.oo.", "oo...oo"};
    int K = 12;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
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
    vector<string> board = {".................", ".ooooooo...oooo..", ".ooooooo..oooooo.", ".oo.......oo..oo.", ".oo.......oo..oo.", ".ooooo.....oooo..", ".ooooooo...oooo..", ".....ooo..oo..oo.", "......oo..oo..oo.", ".ooooooo..oooooo.", ".oooooo....oooo..", "................."};
    int K = 58;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"o"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
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
    vector<string> board = {"o"};
    int K = 2;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"."};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"......o....", "....oooo...", "...ooooo...", "....ooooo..", "....oooo...", "....o......", "..........."};
    int K = 16;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"o...", "o.oo", ".o.o", "o.o.", "oo..", "oo.o"};
    int K = 10;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
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
    vector<string> board = {".oo.oo", "o.....", "ooo.o.", "o..o..", "oo.oo.", "o.o.o.", ".o....", "oo.o..", "oo..o."};
    int K = 20;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"oo...o..", "o.o..oo.", "oooo..oo", ".o..o..o", "..o.o...", "o..oo..o", "...o...o", "ooo..o.o", "o...ooo.", ".o..oooo", "..ooo.o.", "oooo..oo"};
    int K = 16;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"....o.o..o", "ooo.o.o..o", "o.oo..ooo.", "o.o.ooooo.", "o.o..oo.o.", ".oo..o...o", "o........o", "....o....o", "..ooo...o.", ".o...o...o", "...o...oo.", "ooo..o.o.o", ".o...o...o", "o...ooooo.", "oo.o...o.o"};
    int K = 53;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {"..o.o..o...o", "o...oo.ooooo", "o.o.o.o...oo", ".o...ooooo..", "o.oo.o.ooooo", "oo.oo.o.....", "o.o.o..o..oo", ".oo..ooo.oo.", "oo....oo....", ".o.o.ooo.oo.", "oooo...o.oo.", ".o.o.oo..ooo", "..oooooo.ooo", "o.o..oo...oo", "..oo...ooooo", "...oo.ooooo.", "....o...o..o", "o.oooooo.ooo"};
    int K = 8;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"o.o..o....o..o", ".ooo..oo.oo..o", "..o...o.o..o.o", "o....oo..o..oo", "o....o.oo...o.", "oooo.ooo..o.oo", "..o......o..o.", "o.oooo..oo.o..", ".o.oo..oo..ooo", "o.ooo..o.oo..o", ".ooo....o..o.o", ".o.ooo....o..o", ".oo..o.....o..", ".o.o.oo.o....o", "oo.o.oooo...o.", "oo.oo...oo.o.o", ".oo.oo.......o", "o..oooo..o.oo.", ".oo.o.oo.oo.oo", "..o.oo.o.oo.oo", "o.....o...ooo."};
    int K = 26;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"....o", ".....", ".....", "o...."};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
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
    vector<string> board = {".......o..", "..........", "..........", "..........", ".o.....o.o", ".....o..oo", "..........", "......o..."};
    int K = 2;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {".........o.....", ".......o.......", "......o...o.o.o", "....o....o.....", "o............o.", "..........oo...", "o..............", ".o.......o.....", "...o..o........", "............o..", "...ooo.........", "....o.........."};
    int K = 4;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"....................", ".o...o.o...o.......o", "....o...............", ".o..................", ".................o..", "....................", ".........o..........", "....o...............", "....o.............o.", "..o......o.o........", "................o...", ".......o.........o..", "..o........o.....o..", "..........o.........", "..o.............o...", "...................."};
    int K = 19;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {".......................o.", "...........o.............", ".....o...................", "o........................", "..................o.o....", "..........o........oo....", ".............o.......o..o", "........oo....o..........", "o.......................o", "oo.............o..oo.o...", ".....oo............o...o.", ".........................", "................o........", ".......oo........o.......", ".o.........o.o....o.o....", ".....................o...", ".................ooo....o", "................o....o...", "......o..o...............", ".o.....o................."};
    int K = 7;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"........o.......o.o..o........", "oo...................o........", "......o....o.........o......o.", "...................o..o.......", ".........................o....", "..............o............o..", "...o..........o.o........o....", "..........o..................o", "............oo.....o.........o", "..............o.....o.........", ".o...............oo...........", "o.................o...........", "...o......o...o.o.......o.....", ".o.....o.................o....", "o.o........oo......o..o.......", "...........o...........o......", "...........o...........o......", ".......o............o.........", "..o.......o...................", "........o..............o......", ".....o...o....................", "....o.....o..o.....o.....o....", ".....o....................o.o.", ".........o............o......."};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"ooooo", "o..oo", "ooooo", "ooooo", "o.ooo"};
    int K = 6;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"oooooo.ooo", "o.oooooooo", "oooooooooo", "oooooooooo", "oooooooo.o", ".ooooooo.o", "oooooooooo", "ooooooo.oo", "oooooooooo", "oooooooooo"};
    int K = 12;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"ooo.ooooooooooo", ".oooooooooooooo", "oooooooo.oooooo", "ooooo.ooooooooo", "oooooooooooo.oo", "ooooo.ooooooooo", "oooo.ooooooo.oo", "ooooooooooooooo", "ooooooooooooooo", "ooo.oooooo.o.oo", "o.ooooooooooooo", "ooooooooo.oo..o", ".o.o.oooo.o..oo", "ooooo.ooooooooo", "o.oooooooooooo."};
    int K = 39;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"o..oooo.oo.ooooooooo", "o.oo.ooo.ooooo.oooo.", "oooooooooooooooooooo", "ooooooooooooooo.o.oo", "ooo.oooooooooooooooo", "ooooo.ooooo.ooooooo.", "oooooooooooooooooooo", "ooooooooooooooooooo.", ".o..ooooo.ooooooo.oo", "ooooooooooo.oooooooo", "oooooo.o.ooooooooooo", ".oo.ooooo.oo.ooooooo", "ooooooooo.oooooo.ooo", "ooooo.ooooooo.oooooo", "ooo.ooooooooooooo..o", "ooooooo.oooooooooooo", "oooooo.ooooooooooooo", "ooooooo.o.oooooooooo", "ooooooooooooooooooo.", "ooooooooooooooooo.o."};
    int K = 236;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"ooooo.oooooooooooo.oo.ooo", "oooooo.o.oooo...ooo..oooo", "oooo.ooooooo.oooooooooooo", "oo.ooooooooooo.oooooooooo", "oooo.oooooooooooooooooo.o", "oooooo.oooooooooooooooooo", "oooooo.oooooooooooooooooo", "oooooooooooo.oo.oooooooo.", "ooooooooooooooooooooo.oo.", "oooo..o..ooooooooooooooo.", "ooooooooooooo.ooooooo.ooo", "oo.oooooooooooooooooo.ooo", "ooooooo.oooooo.oooooooooo", "ooooooooooooooo.oooooooo.", "o.oooooooooooo.oooooooooo", "o.oooo.oooooooooooooooooo", "ooooooooooo.o.ooooooooooo", "oooooooooooooooo.oooooooo", ".ooooo.ooooooooooooo.oooo", ".oooooooooooooooo..oooooo", "ooooooooooooooo.o.ooooooo", "ooooooooooooooooooooo.ooo", "ooooooooooooooooooooooooo", "..oooooooooo.oooo.o.o..oo", "oooooooo.oo.ooooooo.ooooo"};
    int K = 83;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"ooooooo.oooooooo.ooooooooooooo", "o.ooooooo.oooooooooooooooooooo", "o.oooooooooooooooo.ooooo.ooooo", "ooooooooooooooo...ooooooooo.o.", "oooooooooooooooooooooooooooooo", "ooooooo.oooooooooooo.oooooooo.", "oooooooooooooo.o.oo.ooo.o.oooo", "ooooo..oo.oooo.oooo..ooooooooo", "oooooooooooooooooo.ooooooooooo", "ooo.oooooooo.oooo.oooooooooo.o", "ooooooooooooo..oooooooooo.ooo.", "ooo..oooooo.ooooooo.ooooooo.oo", "o.oooooo.o.oooooo.oooooooooooo", "ooooooooooooooooo.oooooooooo.o", "o.oooooooooooooo.oooooooo.oooo", "ooooooooooooooooooooooooooooo.", "oooooooo.ooooooooooooo.o..oooo", "oooooooooooooooo.o.ooooooooooo", "oooooooooo.ooooooooooooooooooo", "oooo.ooooooooooo.ooooooooooooo", "ooooooooooooo.oooo.ooooo...ooo", "ooooooooooooo.ooooooooooo.o.oo", ".ooooooooo.ooo.ooooooooooooooo", "oooooo.ooooooooooooooooooooooo", "oooooooooooo.oo.oo..oo.oo.oooo", "o.oo.ooooooooooo.ooooooooooooo", "ooooooooooooooooooooooo.oooooo", "ooooooooooooooooooooooooo.oooo", "ooooooooo.oooooooooooooooooooo", "oooooo.oooooooooooooo.oooooooo"};
    int K = 334;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"oo", "oo", "oo"};
    int K = 4;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"ooooooo", "ooooooo", "ooooooo", "ooooooo", "ooooooo", "ooooooo", "ooooooo", "ooooooo"};
    int K = 14;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"oooooooooooo", "oooooooooooo", "oooooooooooo", "oooooooooooo", "oooooooooooo", "oooooooooooo", "oooooooooooo", "oooooooooooo", "oooooooooooo", "oooooooooooo", "oooooooooooo", "oooooooooooo", "oooooooooooo"};
    int K = 8;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo", "ooooooooooooooooo"};
    int K = 102;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo", "oooooooooooooooooooooo"};
    int K = 143;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooo"};
    int K = 288;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo"};
    int K = 324;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"o.ooo..oo.o.o.", "oo.o.ooo..o.o.", "oooo.o.oooooo.", ".o.o....o.o.o.", "oooo.....ooo..", "oo.oooooo..ooo", "o.o..o...ooooo", "..ooo.o.oooo.o", "..o...oo.ooo.o", "...ooo.oo.o...", "ooooo..oo..o..", "ooo.oo..oo.o..", "oo...oooo.oooo", "ooooo.oooo.o..", "..o..ooooooo.o", "ooo.o..oooo.oo"};
    int K = 118;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"..oo..o..o.o..o.", "..o.o..o.o.o.o..", "..oo.ooooooo.o.o", "...o..........o.", "o..oooo..ooo..o.", "o....ooo.oo.oo..", "ooo.o.oo.o..oo..", "..ooo..o.o.o.oo.", ".....o....o..oo.", "....o.oo.....oo.", "oooo.oo..o...oo.", "...ooooooo....o.", ".oo.oo.o...oooo.", "o.o..oo.oo.oooo.", "o...o.oo.o.oo..o", ".o.oo..o......o.", "oo.oo...o.oo...o", ".ooo.o.o.o...o..", "....oooo.ooo.o.."};
    int K = 138;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"o..oo.o.o.oo...ooo", "oo.o.oo.o.o.o...o.", ".ooo.ooo..ooo.o.o.", ".oooooo..ooo..o.o.", ".o.o.oo...o..o.oo.", "..oooo......ooo.oo", "...o.o.....o..oo.o", ".ooo.oo.o...o.o...", "o..o...oo.oo..oo.o", "o...o....ooo..o...", "..o..o.o.o........", ".oo.oo...o.o.ooo..", "..oo...oo.ooo...oo", "o.ooo.ooo...o..oo.", "oo...o.oo.oooo.o..", "oooooo.o..oo.o..oo", "ooo...o.oo.oo..o.o", "oo..oo..ooo.o.o.o.", "...oo..oo...o.o.oo", "oooo...ooooooo...o", "..o.oo.ooo..o.oo.o", "..o.....o..o.o.ooo"};
    int K = 196;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {".o..o..oo..oo...o..o", "......oo.o..oo...ooo", "oooooooo..oo..o..o.o", "o.oo...ooo...o.oo...", "oo.oo..o.o.oo.oooooo", "ooooooooo..oo.o.....", "oo..o.o..oooo..oo.oo", "oo.o.o...oo.o.o.o..o", ".ooo...o.ooooo.ooo.o", "oo..o......o..o..ooo", "oo.o....o..oo...ooo.", "ooooo.oo.ooooooooo..", "........oooooo...o..", ".o..o.o...oo.o....o.", "...oo..oo..o.o.oo.o.", ".oo.ooo.o...oo.o.o.o", "oo.o.....oo...o.oo.o", "ooo...oo.o...o....o.", ".ooooo.ooo....oooooo", ".oo.ooo.o.ooo.ooooo.", "oo.o..oooo...ooooo..", "oo..ooo...o..o..o.oo", ".o..o..o.oo..o.ooooo", "oooo..oo..o.....o..o", "....o..oo...oo...oo."};
    int K = 243;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"oo..o..o...oo...oo..o", ".o....o.....o......o.", ".ooo.o..oo....o....o.", "........o......o.o...", "o..o.o..o.......o....", "oo..o.o.o.......o.o.o", "...o.oo...o...ooo.o..", "...............oo.o.o", "..oo.....o......o....", ".o.o..o...o.....oo.o.", ".........o...........", "....o....oo....oo....", "o.....oo.......o....o", ".o.o.oo.o........ooo."};
    int K = 74;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"......o.....o.o..oo.....", "o....o....o...o.oo..o.o.", "........oo..o...o..o....", ".......o.oo..o...o..ooo.", "...oo.oo....o....o....o.", "oooo......o..o..........", ".o.....o..o.o......ooo.o", "....o..oo......o...o...o", "..o....o.........o......", ".oo....o..o....o....o...", "..ooo.oo...o......o.oooo", ".....o...o.....o.....o..", "o.o....oo.....oooooooo.o", "o...oo.o....o.o....o....", "o....o.o........oo.oo...", ".o.......o.o...oo.o..o..", "o....o.o...o.o......o...", "..oo.....o..oo.........."};
    int K = 110;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"..o...oo.o....o...o...oo.oo", ".ooo...o.o...o......o....o.", ".o....o..o..o.o..ooo......o", "oo....o..........oo....oo..", "...o..o.......o.o..........", "..............o.o..oo..o.o.", "...oo.oo.oo..oo......o...o.", ".oo...oo....o......o......o", ".oo.o...o..o......o......oo", ".o..o.o...o....o..ooo.o..o.", "o..o....o...ooo..oo........", "..o...o..o...o.o.o.o.....o.", "...o.o.o.......o.o...o.....", "..o.o.o.......o.o...o..o.oo", ".....o.oo......ooooo...o.oo", "..ooo.o.oo....oo..o.....o..", "o.o.....o.o.o....o.o....o..", ".o....o...o....o..o...o....", ".o..o.o.......o.....o.o....", "..o......o...o...o.......oo", "......oo...oo..........o..o", "o..oo...o.o.o.............."};
    int K = 162;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"..o.......oo...o.........o...o", "..o.o...oo.o....o..o.oo.o..o..", "...oo.o.....ooo.o.........o..o", "....o.......o..o.oo..o.....o..", "..o...o.o..oo.......ooo..o.o..", "......o.o...o..o.....o..o.o..o", ".oo.o.....o.........oo........", "......o...o...o.....o..o..o...", "...oo..o....o.o.....o.....o...", "o.o.o....oo.......o..o....o..o", "oo..o..........oo....oo...ooo.", ".......o.oo..o.o.oo...oo..o.oo", "....oooo.....o..o......o...oo.", "o...o...o....o.ooo.o.o..o..o.o", "o..o...o.....o.ooo...........o", "..oo...o...o.....o.......o....", ".....o.......o..o.oo.....oo...", "......o.............o.ooo.oo..", ".ooo......o.....o.....oo..o..o", "................o..o....oo..o.", "ooo..o....o.....o....o.....o..", ".o...oo...oo.o...o.o....o.o...", "..o..o.....o..o.o.......oo....", "...ooo.o.o............o.ooo...", ".........o...o........o.....o.", "......o...o...o....o.o.o.....o"};
    int K = 208;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"o.ooooooooooooo", "ooooooo.ooo.ooo", "ooooooooooooooo", "ooooooooooooooo", "ooooooooooooo.o", "o.ooooooooooooo", "ooooooooooooooo", "oooooooo.oooo.o", "o.ooooooooooooo", "ooo.ooooooooooo", "oooooooooooo..o", "ooooooooo.ooooo", "oooooooooo.oo.o", "ooo.o.ooooooooo", "oooooooooooooo."};
    int K = 191;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"ooooooo.oooo.ooooo.o", ".ooooooooo.ooooooooo", "o.oooooooooooooooo.o", "ooo..ooooo.oooo.oooo", "ooooooooo.o.oooo.ooo", "ooooo.o.ooo..ooooooo", "ooo.oooooooooooooooo", "ooooooooooo.oooooo.o", "ooooo.oooooooo.o.oo.", "ooooooo.oooooooooooo", "oooo.ooooooooooooooo", "ooo.oooooooooo.ooooo", "oooooooooooooooooooo", "oooooooooo.ooooooooo", "oooooooooooooooooooo", "oooooo.ooo.ooooooooo", "ooooooooooooooooooo.", ".ooooooooo.oo.oooooo", "ooooooooooo.oooooooo", "oooo..o.oooooo.o.ooo"};
    int K = 330;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {"o.ooooooooooo.oooooooo.oo", "oooooo.ooo.oooooooooo.ooo", "ooo.oo.o..ooooooooooooooo", "oooooooo.oooooooo.oooo.oo", "ooo.o.oooo.ooooo..oooo.oo", "ooooooooooooooooo.o.ooooo", "oooooooooo.oooo.oo.oooooo", "ooooooooooooooo.ooooooooo", "oooo.oo.oo.oooo.oooooo.oo", "oooooooooooooooo.oo.ooooo", "ooooooooooooooooooo.oooo.", "oooooo..ooooooooo.oo.oooo", "o.oooo.ooo.ooooo.oooooooo", "ooo.ooooo.ooooooooooooo.o", "ooooooooooooooooo.ooooooo", "ooo...ooooooooooooooooooo", "oooooooooo.ooooo.oooooooo", "oo.ooooooooooo.oooooooooo", "ooooooooo.oooo.oooooooooo", "ooo.ooooooooo.ooooooooooo", "oooooooooooo.oooooooooooo", "ooooooooooooooooooooooooo", ".ooooooooooooooooooooooo.", "ooooooooooooooooooooooooo", "o.oooooo.oooooooooooooooo"};
    int K = 501;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"oooooooooooooooooooooooooo.ooo", "oooooo.oo.oooooo.ooooooooooooo", ".ooooooo.o.oooooo.ooooooooo.o.", "oooooooooooooooo.ooooooo.ooooo", "ooooooooo.oooooooooooooooooooo", "ooooooooooooo.o.oooooooooooooo", "ooooooo.oo.ooooo.ooooooooooooo", "ooooooo.oooooooooooooooooooooo", "oooooo.ooooooo.ooo.oooo.oooooo", "oooooo.oo.ooooo.ooooooooo.oooo", "oooooooooo.oooo.oooooooooooooo", "ooooooooo.o.oooooo.ooooooo.ooo", "ooooooooooooooooooooooooooo.oo", "oooooo.ooooooooooooooooo.o.ooo", "oo.ooooooooooooooooooooooooooo", "oooooooooooooooooooooo.ooooooo", ".oooooooo.oooooooooooooooooooo", "ooooooooooooo.ooooooooooooooo.", "oooooooooooooooo.ooooooooooooo", "oooooooooooo.ooooooo.oooo.oooo", "o.ooooooooooooooooooooooooooo.", "o.oooooooooooooooooooooooo.ooo", "oooooooooooooooooooooooooooooo", "ooooooooooo.oooo.oooooooooo..o", "ooo.oo.o.o.oooooo.ooo.oooooooo", "oooooo.ooooooooooooooooooooooo", "ooooo.ooooooooooo.oooooooooooo", "oooooooooooooooo.ooooo.ooo.ooo", ".ooooooooooooooooooooooooooooo", "oooooooooooooooo.oooooo.o.o.o."};
    int K = 811;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo"};
    int K = 434;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"oo.ooo.o.oooooooo.o.o.o.ooo.oo", ".ooo..o.o..oo..o.oo.ooo..ooooo", "oooo.ooooooo.o..o.o..oooooo.oo", "oooo.ooooo.oooo.oo.ooooooo..oo", ".o.o.o.oooooo.o.o.oooooooooooo", "o..ooooo...ooo..o.oo..oooooooo", ".oo.oo.ooo..ooo.oo..oooooooooo", "oo.oo...oooooo.ooooooo.oooooo.", "oo.o.ooooo.ooo.oo.ooooooooooo.", "o.ooooo.oo.ooo.ooo.ooo.oooo.oo", "oooooooo.ooooooo.oooooo.oo.ooo", "oo.ooo.ooo.oooooo.oo.oo.o.oooo", "ooo.oooooooooooooooooooooooooo", "ooo.ooooo.o.o.ooooo.o.o.oooooo", "..o.oooooooooooooo.o.ooooo.ooo", "oo.oooooo.o.oooooooooo..ooo.oo", "ooo.o.oo...o.ooooo.ooooooooooo", "ooo...oo.oooooooooooo.ooooo.oo", ".oo.ooooooo.oo.o.ooooo.oooo..o", "...oo.ooo.o.oo.ooo.ooooo...ooo", "oo.oo..oo.o.ooooooo..ooooo.o.o", "ooooo...oo...o..ooooooooo.ooo.", "o..ooo.ooooo.ooooooooo..oooooo", "ooooo.ooo..oo...oo.oo..oooooo.", "oo.ooo......o..oooo..o..oooo.o", "oooo.ooo.o..oooo.oo.ooooo.oooo", ".ooo.oo..o.o..oooo.ooooo.oo.oo", "o.o..oo..o.ooooooooooooo..oo.o", "o.oooooooo.ooo.oo.oo.ooo..oooo", "oo.ooooooooooooo.ooooo.o.ooooo"};
    int K = 607;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {"o.oooo.....o..o..oo...oooooo..", "...oooo.oo..o..ooo..oooo.o..o.", ".ooo.o.oo.o...oo..o..o.oooo..o", "...o...o.o.o..oo..oo.oooo....o", "o.....ooo....o.o..oo.ooo..oo..", "..ooo...o.oooo..o........o.o.o", "o..oooo.oo.o....o.oo...oo...o.", "o..ooo...oooooo..o.oo..o.o.ooo", "oo.o.ooo..o.....oo..o...o.o.o.", ".o..o..o.o...o..oooo......o.oo", "o.ooo...o.o.o..o.ooo.o.ooo.o..", ".o.ooooooooooo.o...o..o.o.o.oo", "..oo.oo..ooo.o..o.o.oo...o.ooo", "o.oooo.oo..ooo.oooo....oo..ooo", ".o.oo....o.oo....oo..o..oo..o.", "o.oo.....oo.o.....o...oo...oo.", "..oo..ooo.oo..o....oooo...o..o", "o.oooooo.o......oo..ooooo..ooo", "o...ooo.o.oo..o...oo.oo.ooo..o", "ooo.....o..oo.ooo.oooooo.ooo.o", "o.ooo.o..ooo.o..o....oooo....o", ".o.o.o.o.oooooooo..oo..o.o..o.", "..oo.oo.o.o..oo.o.oo.oo.o.o.oo", "oooooo.....ooo..oo.oooo.o.o..o", "...o..o.ooo.o.oo.oo.o...oo..o.", ".oo...o...o..o.......ooo.o....", "....o...oooo....ooooo..o...o..", "o..oo.oooo..oooo.ooo...oo.....", ".o.oo.oo..o..oo..o....o.oo.oo.", "o.oo....o...o..o.o.o...o..oo.o"};
    int K = 443;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"...o..o...ooo.......o.....o.o.", "oo..o.o....o...............o..", "..o.o...o..o........o......o..", "o..oo........o...o.......o..o.", "..oo....oo...oo.o....o.o......", ".oo.o..o.............o.o......", "o.o.....o...o..o....o..o......", "o.........o........o....o.....", "oooo.....oo......o.o......o..o", ".....o.o..............o....o..", "oooo........o.....o.o.......oo", "....o...o..o.oo..o.o......o.o.", "..o....oo..........o..o....o..", ".........oo...oo..ooo.........", "...o.o.oo.o.....o...ooo.oo.o..", "....o..o.o.oo.o.o.....o.......", "....o..o.oo...oo......ooo.....", "o..oooo...........o.......o..o", ".........ooo....o.o...o.o.....", ".ooo.o..o.o.....oo..o..o....o.", "o..oo...oooo.o.......o..o..o.o", "....oo..oo.o.....o..oo.o......", "o.oo..o......o...o............", "...o....o...o.o.o..oo....o....", ".oo.o..o....o.o.o.....oo...o..", ".o...o.......o..o..o..o.oo.o..", "o....o...o....o....o..........", ".......oo....o....o.oo........", "....o.o.........o.........o...", "...oo........o.o........o....."};
    int K = 220;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo"};
    int K = 2;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo"};
    int K = 900;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo"};
    int K = 899;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {"..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", ".............................."};
    int K = 5;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {"..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", ".............................."};
    int K = 900;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {"oooooooooooooooooooooooooooooo"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {"oooooooooooooooooooooooooooooo"};
    int K = 30;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {"o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o"};
    int K = 3;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o"};
    int K = 30;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
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
    vector<string> board = {"....o.oo.............o.o......", "...o...oo...o...o.............", "o....oo..............oo......o", "...o.......o..o..o......o.o...", "..o.o..o..o......o.o.......o..", ".....ooo.....oo......o.o......", "o.....o...o.....o....o.o....oo", ".o...o.......o..o...o........o", ".......o................o.....", ".............oo..ooo....o.o...", "...ooooo..o.o................o", "..........oo....oo...o...o..o.", "...o....o........o...........o", "o..........o.o..ooooo..o......", "...........oo...o.......o..o..", ".....o...........oo..oo.oo.o..", ".o....oo.ooo.....o............", "......o...o..oo....o..o.......", "...........o......o...........", "oo..........o...o.....o..o.o.o", "..o..........o..o..oo..ooooo..", ".o..o...oo.........o...oo.o...", "...o.o...o...o.....o....o.....", ".oo.......o...................", ".......o......o...o...o.oo.o..", "...o....o..o............o.....", ".....oo...o..o..o..oooo.......", ".........o...o....o..o........", "..................o.o...o.....", "o.........ooo.o.....oo.......o"};
    int K = 151;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {"........o..................o.o", "....o.....o........ooo.oo..o.o", "........o......oo....oo.o.o...", "......oo.....o....o.........o.", ".......o.......o..........o...", "....o.........................", "......o......o...o............", "oo..o...oo....o....o..o....o..", "..............oo.o...oo.o.o...", "..o...o.............oo........", ".o...o.o...............o...o..", "...o.oo....o......o...oo..o...", ".oo.o.........o....o........o.", "...o......o......o.o..........", "..o....o...oo..o.o..........o.", "...o..........................", "....o..o...o..oo..o.....oo....", ".o..o..oo..o.o...o..ooo.......", ".....o...o.o...o....o..o...o.o", "o....o...o..o..o.o...o..o.....", ".o..o...o.........o...o....oo.", "..........o.o..oo.o......oo...", "oo...o.....ooo..o.o.....oo....", "o......o...o.o..o.o........o..", ".........o.o........o........o", ".....o.o....o.o.o..o.o....o...", "....o.....o.o...o............o", "o.....o..o...o...o...o........", ".o.oo..o...o...oo..oo........o", "........o..oo........o........"};
    int K = 94;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {"........oo.....o......o.......", "...o....o......o.....oo.......", ".o..o....o..............o.o...", "..........o.....o.o......o....", "......o................o......", "..oo.........o.o.....o........", "..o....ooo..o.oo..............", "o...o........oo.ooo..o.....o..", "o..oo..o..oooo..o..o..o.......", "..o....o.o....o.......oo..o...", ".........oo......o.o.....o....", ".....o......o.o..........o..o.", "..o.....oo..........o..o..oo..", "....oo...o.o..ooo..o....o..o..", ".......o.o........o....o.o..oo", "................o.............", "..o..oo..o........o.o...oo....", ".........o..........o......o..", ".o....o..o...............oo.o.", "o.........o.......o...........", "..oo.o.......o..oo.o..o.......", "............o.....o.o.....o.oo", "......o....o....o..oo.oo..o...", "....o......o.......o....o.....", "o......o.....oo.o.oo....oo....", "o..........o.o..o....oo...o.o.", "........ooo......o.o......o...", "o........o..o......o...o...o..", ".............o.oo.o.....o.....", "o.o.o.o.......o.....o.o......."};
    int K = 128;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> board = {"o.o.oo..oooo.....oo.o..o...o..", "o..o.ooo.oo....o...oo.....o.oo", ".oo.oo....oo.oo...oooo..o.oo.o", "oo..o...ooo....ooo.o.o...o....", ".oo..oo.oo.o...ooo..o.o..ooooo", "..oo.ooo.o.oooo....o.ooo.oo.oo", ".ooooo..oooo.oo.ooo.oo.ooooo..", "ooooo.o.o...oo....oo..o..oo...", "oooooo..o.ooo.o...ooo......ooo", "o..o...oo...oo.oo...oooo...o..", ".o..o..o..oo.o.o..o.o....o.o..", "o...oo...o...o.o.......o...oo.", "oo..oooo.oo.o.oo.ooo..oo.oo.oo", ".o.oo...oo.......oooo....o.oo.", ".o..oo..ooo.ooo...oooo.oo.ooo.", "o.o..o.oo.ooo..o..oo..o.o...o.", ".o...o.oooo..oo.....o.oo.ooo..", "oooooo.o..ooo.o...ooo...o.o...", ".o.ooo.oo.ooo..oo.o.o..oo.ooo.", "oooo..oooooo.o....o..o...oo..o", ".oooo...ooo........o....ooooo.", ".oo..oooooo....o.o.ooo...o..oo", "o.oooooo..oooo.o.oo.o.o....oo.", "ooooo...o...oo.ooo..o...o..o.o", "..oooo...ooo....o.oo..ooo.....", "o..o.o...o..o..o.o...o.oo.oooo", "oo...oo.o..o.o...ooo.o.o.ooo..", "...o..oo....o..oo....ooo.o.o..", "ooo.o..oo..ooo.oooo.o...o.o.oo", "..o.oo.oo.oo.oo..o...o.o.o.o.o"};
    int K = 49;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {"ooooo.oooooooooooooooooo.o.ooo", ".ooo.o.ooooooo.oooooooooooo.oo", ".o.o.ooo.oooo.oooooooo.o.ooooo", "..ooo.oooo.ooo.oooooo..oo..ooo", "o.ooooooo.o.o.ooooooo..o.ooo.o", "o..oooooo.ooooooo.o.oo.oooooo.", "ooooooo..o.oooo...oooooo.ooooo", "ooooo.o..ooo.oooo..oooooo.ooo.", ".ooo..ooooooooooooooooooooooo.", ".ooo.oooooo.ooo.ooooooooo...oo", "oooooooooooooooo.ooooooo.oo...", "oooo.oooooo.oooooooooooo..oooo", "ooooooo.ooo.o.ooooooooo..ooo.o", "oooo.oooooooooo.oo..ooo.ooo.oo", "o.oo.o.ooooo.oo.ooo.o.o.oo.ooo", "o.ooooooo.ooo.oo.o.ooooo...ooo", "oo.ooo...ooooooo.oo.oooo.oo...", ".oooooooooo.o.oooo.oo.o.oooooo", "o.ooooooo.o..oooo..oooo.oooooo", "oooo.oo.o.ooooooooooooooooo.o.", "oooooooooooooooo..oooooooo.oo.", "..oo.o.o.ooo.oooo..oooo..ooooo", "ooooooooooooooo...oo.o.oo..o.o", "oooooooo.oo..oooo.oooo.oo.oooo", "oooo.ooo.ooo.o.oooo..ooo.ooooo", ".oooooooooooo.oooooooooo.ooooo", "oo.oooooo..oo.oo.o.oooo.oooooo", ".oooooo.oooooooo.ooooooooooooo", "oooo.ooooooo..oooooooo.ooooo.o", ".oooooo.oooo..ooooo.o.ooooo.o."};
    int K = 609;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> board = {".o.oo.o.ooooooo..ooooooooooooo", "o.o.oooooooo.oooo.oo..oooooooo", "oo.oo.oo.oo.oooo.oo.oooo.ooooo", ".o.oo.o.oooooo.oooooo.oo.ooooo", "o.o.oooooo.o.oooo.o.oo..oooooo", "oo.oo..oo.oooooooooo.ooooooo.o", "o..ooo.ooo.o.ooooooo.oooo.oooo", "oooo.ooooooo.oo.oo.oo.o.oooooo", ".o.o.o.oo..ooooooooo..oo.o.o.o", "ooooooo.oooo.ooooooo.o...ooo.o", "ooo.ooooooooo.o.oooooooooo.o.o", "o.oooooo.oooooooo.oooooooo.ooo", "oooooo.o.o.oo.ooooooo.ooooo.oo", "oo.o...oooooooo.oooooooooo.o.o", "oooo.oooo...o.oo.o.oo..ooo.ooo", ".oooooooooo.oo...ooooo.o.oo.oo", "oo..ooooooooo...o.o.o.o.oooooo", "ooo.o.o.oo.o.oo.oo.o.ooo.ooooo", "oo.o.oo.oo.oo.ooooo.oooooo..oo", "oooooooooooooo..oo.oooo.oooooo", "oooooooooooooooooo.oo.ooo.oooo", "ooooooooooo.ooooo.oo.oo.oooooo", "..oooo..o.oooooooooooooo.ooooo", ".ooooooo.oooooo.o.oooooooooooo", "o.ooooooooo.ooooo.oooooooooo.o", "oo.oo.ooooooooo.ooooo.oooo.o..", "..o..ooo.ooooo.oooooooo..o.o.o", ".oo.ooooooo.oooo.oo.oo.ooooooo", "o.ooooooo.oooooooooo.o.ooooo.o", "ooo.ooooo..oooooooo.oooo.ooooo"};
    int K = 310;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {"oooooooooooooo.oooo..ooooooooo", "ooooooo.ooo..oo.ooo..oooooooo.", "ooooo.oooooooooooooo.o.oooo...", ".oo.o..oo.ooo.oooooo.ooooo..oo", "oooooo.oo.oooooooo.ooo....o.oo", "ooooo.o.ooooooooooooo.o..ooooo", "ooooooooooo.oooooooo.o...ooooo", "oooooo.ooooo..oo.oo.ooo.oo.ooo", "oooo....oo.ooo.ooo.ooooooo.ooo", "oooooo.oooooooooooo.oooo.ooooo", "o.ooo..o.ooooo...oooo.oooooooo", "oooooo.oooo.ooo.oo..o.o..ooo.o", "o.ooooo.oo.oooooo...oo.o.oo.oo", "o.ooooooo..oo.oooooo.ooooooooo", "ooooo..o.oo.ooo..ooooo.ooooooo", "o.oo..o.oooooo.ooooo.ooo.ooooo", ".oo..ooo..oooooooooooooooooooo", "oooooooooooo.ooo..ooooooooooo.", ".o.oooooooooooooooooooooo..o.o", "ooooo.oooooo.o.oooooooooooooo.", ".oooo.oooooooo.oooooooooo.oooo", "o.ooo.oooo.oo.oooo...oooo.o.oo", "oooo.ooooo.oo.oooooooo.o.ooooo", "oooooooooooo..oooooooooooo.o.o", "ooo.oo.ooo..ooooo.oooooooooooo", "ooooo.o.ooo.ooooooo.o.oooo.ooo", "..oooo.o.ooooo..oooo.ooooo.oo.", "o.oooooo.ooooooo.ooooooo..oooo", "oooooo.oooo.oooo.ooooooo..o.oo", "o.ooooooo.ooooooo.ooooooooooo."};
    int K = 10;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {"ooooooooooooooo.oo.ooooooooooo", "oooo.ooo..oooooooo..oo.oo.oooo", "..oo..ooooo...ooooo.o.oooo.ooo", "ooooooooo.ooooo.oooooooooooooo", ".ooo..oooooooo..o.ooo.oooooooo", "o.ooo.ooooooo.oooooo.o.ooooooo", "ooooo.ooooooooooooooo.oooooooo", "oooo..oooooo.oo..oo.ooo..ooooo", "oooooooooooooo.oooo..o.ooooooo", "oooooo.o..oo.oooo..ooo.oo..o.o", "ooooo..oo.ooooo..oo.oooooooo.o", "ooooooooo.oooo.o.oooo.oooooo.o", ".oooooooooo..oo.o.ooooo.o..ooo", ".ooooooooooooooo.oooooooo.oooo", "oo.ooooooo.oooooo.ooooo.oo.o.o", ".oo.oo..o.oooooo.oo.ooo.o..ooo", "oooo.ooo..ooo...oooooo.oooo..o", ".oooo...oo..oo.oo.oooooo.oooo.", "ooooooooo.ooo..ooooooooooooo.o", "ooo..oo.o..ooo.oooooo.oo..oo.o", "ooooo.oooooooooooo.oooooo.o.oo", "oooooooooooo...oo.oooooo.o.ooo", "oooooooo..ooooooo.o.o.o..o.ooo", "oo.oo.ooo.ooo.o.ooooo.o.o.o.o.", ".oo.oooooooooooooooo..oooo.o..", "oooooooooooooooooo.ooooooooooo", "ooooooo..ooooooooo.oooo..o..oo", "oo.o.o.ooooooo..oooo.ooo.oooo.", "ooooooooo.oooo.ooooo..o.o..o.o", "ooooo.oooo.oooo.ooooo.oooooooo"};
    int K = 11;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {"ooooooooo.ooooooo.oooo.ooo.ooo", "oooooooo.ooooo.oooooo..ooooooo", "ooo.oooooo....o.oo.oooooooooo.", "oooo..ooooooooooo.ooo.oo.o.o.o", "ooooo..oooooooooooo.ooooooo.oo", "ooo.ooooo..oooooo.ooooo.o..ooo", "oo.ooooo.oooooooo.oo.o.oo.o.oo", "ooooooooooooooo.ooooo.oooooooo", "ooooooooooooooooooooooooo.o.o.", ".o.o.oooo.ooo..o.ooooooo.oo.oo", "o.ooooooooooo..oooooo.oooooooo", "o..ooooooooooo.oo.ooooo.oooooo", "oooo.ooooo.o.oooo..ooooo.oo..o", "oooooooooooooooooooooooooo.oo.", "o..o.ooooo.oooo.oooooooooo..oo", ".oooooooooo.o.oooooooooooooooo", ".o.ooo.ooo.o.ooooo..oo..o.oo..", "ooooooooooooooo.oooooooooooo.o", "o.o..oo.oooooooooooo.oooo.oo..", "oo..oo.oooo...oooo.ooooo.oooo.", "ooo.oooooo..ooooooooooooooo...", "o.ooo.ooo.ooooooo.oooooooooo.o", "ooooo.o.o.oooo...ooooooooooooo", "oooo...o.oooooooooo.oooooooo.o", ".oo.oooooooooo.ooooo.ooooo.ooo", "oo..oooooo...o..oooooooooooooo", "ooooooooo.oooo.oo.oooo.oooooo.", "ooooooo.oooooooooooooooo.ooooo", "o.oooooooooooooooooooo.o...ooo", "ooo.ooooo.oooo.ooo.ooo.o.ooooo"};
    int K = 12;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> board = {"ooooo.oooooooooooo..ooooooo.oo", "ooooo.oo.ooooo.oooo.o.oooooooo", "o.oooooo.ooo.ooo.o.o.o.ooo.oo.", "o.o.o..oooooooo.oooooooo.ooooo", "ooooooo..oooo.oo..ooooooo.ooo.", ".ooooooo.oo..oo..oo..oo.oooooo", ".o.o.ooooooooooooooooo.ooooooo", "oooooooooooo.oo.o.oooooooooo.o", "oooooooooo.o.oo..oooooooooo.oo", "oooo.ooooo....oo.o.ooooo..oooo", ".ooooo.oo.oo...o.ooooooooooo.o", "oo.o.ooooooooo.oooooo.oooo..oo", "oo.ooo.ooooooo.ooooooo.o.o.ooo", "oo.oooooooooo.oooooooo.ooooo.o", "oooooooo.ooooo...ooooo.ooooooo", "oo.o.o..ooooo.ooo.o.oooooooooo", "ooooooooooooooooooooooooooo.oo", "ooooo.oooo...oo.oooooo.oooo.oo", "ooo..oooo.ooo.ooooooooooooo.oo", "oooo.ooooooooo.ooo.ooooooooo.o", "oo.oooooo.ooooooo.ooooooo.ooo.", "oooooooo.oooo.o.o.oooo.oo.oooo", ".oo.oo.oooooooo.ooo..oooooooo.", "ooo..o.oooooooooooooo.oooooooo", "..o..o.ooooooooooo..oooooooooo", "o.oooo.o.ooooooooooooooooooooo", "..ooo.oooo.ooooooooo.ooooooo.o", ".ooo.oo.ooooo..oo..ooo.oooooo.", "o..ooooooooooo.oo.ooooooo.oooo", "oo.ooo.ooooooooo.ooooooooooooo"};
    int K = 12;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {"ooooo.oooooooooooo.ooooo.ooooo", "...oooo..ooo..o.oooooooo.ooooo", "o.ooooooo.o.ooooooooo.oooo..oo", "oooooooooooooooooo.o.oooooo..o", "ooo..oooo.o.oooo.o.oooooo.oooo", "oo.ooooo.o...ooooooooooo.ooooo", ".o.oo.oooooooooooooo.ooo.oooo.", "ooo.oooooooooooooo.ooooo.ooooo", "ooooooo.oooo.oooooo.o.ooooo..o", "ooo.o.ooooo.o.o.o...ooooo.o.oo", "o.ooo..oooo.oooooooooooo..o.oo", ".ooo.ooo.oooooo.oooo..oo.ooo.o", "...o.oo.oo.ooooooo.oo..oo.o.oo", "oooo.oo.oo.oo...oooooooooooooo", "ooooooooooooooooooooo.o.oooooo", "ooooooooooo..o..o.oooooooo....", "o.oo.oo.oooooooo.oooooo.ooo.oo", "oo.ooooooooo..oooooooooooooooo", "oooooooo..oooo.o.ooooooooooooo", "oooooooooooooo.o...o.....o.ooo", "o...oooo.oooo.oooooooo.ooooo.o", "ooo.oooooo.ooooooo.ooooooooooo", ".oo.oooooooo.oooooooooo.oooooo", "o.oo.oooo...o.ooooo.o.oooo.oo.", "o.oo.o..oo.ooooo.ooo.ooooooooo", ".oo.ooo..ooo.o..oo.oooooo.oooo", ".ooooooooo.oooooo.o.oooo.o..oo", "ooooooooooo.oo.oooooooo.oooooo", "oo.ooooo.oooo.ooo.oooo.o.ooooo", "..o.o.oo.oooo..oooo.o.oooooo.o"};
    int K = 10;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {"..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "...............o..............", ".............oooo.............", "............ooooo.............", ".............ooooo............", ".............oooo.............", "..............o...............", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", ".............................."};
    int K = 16;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> board = {"oooo", "o..o", "oooo"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "ooooooooooooo...oooooooooooooo", "ooooooooooooo.o.oooooooooooooo", "ooooooooooooo...oooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> board = {".................", ".ooooooo...oooo..", ".ooooooo..oooooo.", ".oo.......oo..oo.", ".oo.......oo..oo.", ".ooooo.....oooo..", ".ooooooo...oooo..", ".....ooo..oo..oo.", "......oo..oo..oo.", ".ooooooo..oooooo.", ".oooooo....oooo..", "................."};
    int K = 58;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> board = {"o.oo..o.oo.o.o.o..oooooooo...o", ".oo..ooooo....o..oo.o..o...o.o", ".oooooooooo..o.ooo..oo..oooooo", "o.oo.ooooo.oooo.ooo..ooo......", ".o.o..ooooooo.o.oo.o..ooo...oo", ".oooo.o.oooooooo...o.o..oo.oo.", "o.ooooooo.o.ooooo.o.oooooo..o.", "o.oooo..o.ooooo...oo.o.o..o..o", "o.ooooooo...oo..o.o.ooo.ooo..o", ".o.oooo.oooooo..o..ooo....oooo", "oo.ooooo..o.oo.ooo.ooo.oooo...", "o..o.oo..oooo.o.o..o.oooo.oooo", ".o..ooo.......oo.ooo.ooooooo..", "o.oooo...oo..oo.oo.oooo..o..o.", ".o.ooo...oooooo.ooo.oo.oo.oo.o", "o..o.ooo...o.o.o..ooo.ooo.o.o.", ".ooooo.ooooo.ooo..oooo.oo..ooo", "oooo.o.o.oo.oo.oooo.oo.ooo.o.o", ".oo...ooo..oo.oooo.o.o.ooo..oo", "oooo.o.oooooooooo..o.ooooo..oo", "oooooo.o.o.o.oo..oooo.oooooo.o", "ooo..oo..oooo.oo.ooo.o.o..o..o", "ooo.o.ooo..oooooo.o..o..o.ooo.", ".o.oooooooo.o.o.oooo..oo..o.o.", "oo.ooooooo...ooooooo.....ooo.o", ".ooooo.oo.oo....oo..o.oo.o..oo", "ooooo.o.o.ooo.oooo.oo.ooo.oooo", "o..ooo.ooooooooo..o.oo.oo..oo.", "oo.o.ooo.oooo.o.o...oo.oo.oooo", "oo.ooooooo.o.o.ooo.ooo.oo.oooo"};
    int K = 12;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> board = {".o..", "oooo", "..o."};
    int K = 3;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> board = {".......", "..ooo..", "ooooooo", ".oo.oo.", "oo...oo"};
    int K = 12;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> board = {"oooooooooooooooooooooooooooooo"};
    int K = 222;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> board = {"."};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> board = {"o...o...oo.o.o..oo.o.ooo.o.o.o", "..o.....oo.oo.oooo.o..o.o.o...", "oo.o.o.o...o.o.oo..oo....oo.oo", ".oo.o.o..oo..oo.o...ooooo.o...", "o..o.o.o.ooo..ooo.o..oooo.o...", "o.....o.o..ooo.oo.o.ooooo.....", "oo..o..o..oooo.oo.oooooo..ooo.", "oo..oooooo..oo.oo.oo.o.ooooo.o", "o..oo.o.oo..ooo.ooo.ooooooooo.", "o.o.o...o..oo.o.o.o....o.o...o", "...o.oooooo..o...o..o.....ooo.", "o.o.ooooo..o...o..oooo..o.ooo.", "oo...oo...oo.oo..o...o..oo..oo", "oo.o.o...o..ooo.oooo......o...", "o.oo..oooooooo....o.o....o.oo.", "oooooo.oo..oo..o..o...o..o.o.o", ".ooo.oooo.o.oo.ooo.oo.o.o.oo..", ".oo.oo.oo.oooo..oooo.o.oo..o..", ".oo.oo.o..ooo...o...oo.ooo.o..", "oo.o.oo..o....oo.....o.oo.oo..", ".o....ooooo...o..oo.o..o.o....", "ooooo.......o..o..o......oo.oo", "...o..oo...o..oo..o.o...o..o..", ".oo..o..oo...o.o.o.....oo...o.", ".o..oo.o.oooooo..o.o.oooooo..o", ".ooooo..o.o..o..o.o.oo...ooooo", ".oo.o..o..oo.o.oo...oo.o.o..oo", "oo.oo.oooooo...oooo.o...o.....", "ooo.o.oo...oo...o..oo.o.o....o", ".ooo.oooo.oo.oo.....o.ooo.o.oo"};
    int K = 11;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> board = {"..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............o...............", "..............................", "..............................", "...................o..........", "...........o..................", "..............................", "..............................", "..............................", "...............o..............", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", ".............................."};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "o............................o", "oooooooooooooooooooooooooooooo", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o..........o.................o", "o............................o", "o.........o..................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o..........................o.o", "o............................o", "o............................o", "oooooooooooooooooooooooooooooo"};
    int K = 2;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> board = {".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.oo..o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o."};
    int K = 14;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> board = {"o....o.oooooo.....oo.ooo.ooo.o", "......o....o.ooo..ooo.oo....o.", "oo..o...o...oooo...oo....oo.o.", "..ooooo.o.o.o.o.ooo.oooo.....o", ".o..oooo.o.o.oo..oooooo..oo...", "o...o.ooo.o.ooooo.o.o.o.oo.oo.", "..o...o.oo.ooo..o.o.o.ooo.....", ".ooo.ooo.o.ooooo.ooo.oo....oo.", ".o.o..ooo..oooo..o..oo....ooo.", "oo..o..oooo..o.o...o.o..oooo.o", "o..ooo.o...ooo.o.ooo.ooo.oo.oo", "..ooooooo.oo.o..oooo.o..o..o.o", "ooo....o.ooo..oo.o......oo.o..", ".o..o.o.oo.oooooo..oo.ooo.oo..", "ooo.....oo....o.oooooo.ooo.ooo", "oo........ooo..oooooo.oo.oo..o", ".oooo.o.oooooo.oo.....ooo..o..", "o.oo..o..o.o.o..o.o..oo.o.oo..", "o...o.oo..oo..oooo.oo..oooo...", "o..ooo.o..oo....ooo..o....o.oo", ".ooo.oo.o..o..o.ooooooo.o.o...", "oo.o.ooo.....o.o.o.oo.....ooo.", "o.oooo.o..o......ooo..o.oo....", "...oo...o.o.o.o...oo..o.o...o.", "o....o...oooo.o..oo..o...oo..o", "oo.o.o...oo..ooo.o....o.oo.o..", "o.oo....oo...o.ooo.oooo.o.oo..", "oo.oo.o.oo.ooooo...o...oooo..o", "o..ooo.o.o......oo.o..oooo...o", "..o....o....o..o.o.o.o..o.oo.o"};
    int K = 234;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo"};
    int K = 7;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> board = {"o"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> board = {"....", ".ooo", ".o..", "...."};
    int K = 3;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo"};
    int K = 50;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> board = {".............................", ".............................", ".........o...................", "..o...................o......", ".............................", "..........o..................", ".............................", ".................o...........", ".........................o...", ".............................", ".............................", "............o................", ".............................", "............o................", ".............................", ".............................", ".......o.....................", ".............................", ".............................", "............o................", ".....................o.......", ".............................", ".............................", ".............................", ".....o.......................", ".............................", "...................o.........", "..o....o.....................", "............................."};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> board = {"...o...oooo.."};
    int K = 4;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> board = {"oo"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> board = {"...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo.................", "...........oo................."};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> board = {"oo..o.....ooooooo.o.o..o..o..o", "o.o.o.ooo.oo.oo.ooo.o..oooooo.", ".o.........o.o...oo.oo......o.", ".o.oo...ooooo...o.o.oo...oooo.", "..o.ooo.o...o...ooooooooooo.o.", "....o..o.o.o.o.ooo..o....o.o..", "o.oo....oo.o.ooo.oo.o.oo.oo..o", "...oo.oooooo.o.......oo.oo....", ".o.o.oo..o...o....ooo...o..ooo", "o..oo...ooo.oooo.o.o..oo..o.oo", ".o..oo.oo.o..oooo.oooo.oooo..o", "..o..o.o.ooooo...oo.o...o...oo", "o.o..o.oo...oo.o....oo.o.oo...", "...oo.oo.oo.o..o..oo.oooo.o.oo", "o.oooo......o.o...ooo..oo...o.", "oo....o..oo...o..o...o.o.oo..o", "..ooo.ooo.o...o.oooo......oooo", "o....o.o.o.o..ooo..oo.o.o.ooo.", "..o.o.o.o...oo...o.ooooo..o.o.", "ooooooo..oo.....oo.oooooo.o.o.", ".oooooo...oo..ooo.o..o.o..o.oo", "oo..oo...o.o.oo...o..ooo..o.oo", ".oo.o...oo.o.oooo..oo.ooooo.o.", "ooooo..o.o..o.o...oo.ooo.o.oo.", "..ooo....oooo..o..o.ooo...o.oo", "o.o.o...oo...o.ooooo.ooo.oo.oo", "oooo....o.....oo...o.oo.o.oo..", "ooo..o..ooooo..o..oo......oo.o", "..ooo..o.......ooo.oooo.....oo", "....o.o.o...ooo......oo.o.oo.o"};
    int K = 11;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "ooooooooooooo.oooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "ooooooooooooooo.oooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo"};
    int K = 47;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> board = {"..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "......................oo......", "......................ooo.....", ".......................oo.....", "..............................", ".............................."};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> board = {"..oo..oooo..oo....oo..oo..oo..", "..oo..oooo..oo....oo..oo..oo..", "oooo..oo..oo....oooooo..oo..oo", "oooo..oo..oo....oooooo..oo..oo", "..oo..oooo..oo....oo..oo..oo..", "..oo..oooo..oo....oo..oo..oo..", "..oo..oooo..oo....oo..oo..oo..", "..oo..oooo..oo....oo..oo..oo..", "oooo..oo..oo....oooooo..oo..oo", "oooo..oo..oo....oooooo..oo..oo", "oooo..oo..oo....oooooo..oo..oo", "oooo..oo..oo....oooooo..oo..oo", "oooo..oo..oo....oooooo..oo..oo", "oooo..oo..oo..o.oooooo..oo..oo", "oo....oo..oo....oooooo..oo..oo", "oo....oo..oo....oooooo..oo..oo", "oooo..oo..oo......oooo..oo..oo", "oooo..oo..oo......oooo..oo..oo", "oooo..oo..oo....oooooo..oo..oo", "oooo..oo..oo....oooooo..oo..oo", "oooo..oo..oo....oooo....oo..oo", "oooo..oo..oo....oooo....oo..oo", "oooo..oo..oo....oooooo..oo..oo", "oooo..oo..oo....oooooo..oo..oo", "oooo..oo..oo....oooooo..oo..oo", "oooo..oo..oo....oooooo..oo..oo", "oooo..oo..oo....oooooo..oo..oo", "oooo..oo..oo....oooooo..oo..oo", "oooo..oo..oo....oooooo..oo..oo", "oooo..oo..oo....oooooo..oo..oo"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> board = {"ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooo"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> board = {"oooo"};
    int K = 4;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> board = {".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o", ".oo.o.o.o.o.o.o.o.o.o..o.o.o.o"};
    int K = 10;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> board = {".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o", ".....o.....o.....o.....o.....o"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> board = {".o...ooo..ooo.o..ooooo..oo....", "o.o.oooo...o...ooooo..oo....oo", "......oo.o...oo..oo.ooo.oo..oo", "..o.o....o.o.oooo.o..oo.o.oo.o", "o.oo..oo...o.o...o.ooo.oo..oo.", "..o.oo.....o....o.o...o.o.o...", "o.o.o.oo....o.oo....o.o....o..", "oo...o....o..o.ooo...o.oo.oooo", "oo.o.oo.o..oo...o..o.oooooo...", ".ooooooo....oo.oo.oo.o.o.oo..o", "oo..oo....o....oooo.o......o..", "...oo.oooooo.o.o..oo..o..o.oo.", "o.o.o.o.o..ooo........o..o.o..", "o.......o....oo...oo..oo..o.oo", "o.o..oooooooo..ooo.ooo..ooo..o", "...ooo.....o.o..o.....o.....oo", "oooo..oo.o.ooo.o..oooo.....ooo", "ooo..ooo.oo.oo..o....oo.o..oo.", "ooooooooo.oo....o.....oo.o.o..", ".o..oo...oooo.o.o...o.oo....o.", "oo.o.ooo..o.....o.....o...oo.o", "..oo....oo.o.oo...oo.o...oooo.", "oooo...ooo.oo.oo.ooooooo...o.o", "....o..o....o.oo.o..o.o...o..o", "..oooo.oo....o.oo.o...o...oo..", ".......o.oooo.oooooo.o.oo.oo..", "oo.oooooo......oo.....oooooooo", "..oooo.ooo..oo.oo.oo.oooo.oooo", "o.o..oo.oo.oo.oooo.o.o.o..oo..", ".oo.ooo..o.o.ooo.....o...oo..."};
    int K = 10;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> board = {"o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", "o.o.o.o.o.o.o.o.o.o.o.o.o.o.o.", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> board = {".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o", ".o.o.o.o.o.o.o.o.o.o.o.o.o.o.o"};
    int K = 527;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> board = {"..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "............................oo"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> board = {"..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..........................o...", "..............................", ".............................."};
    int K = 900;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> board = {"....", ".oo.", ".oo.", "...."};
    int K = 3;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> board = {"...............", "...............", "..o....o......o", "...............", "..............."};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> board = {"oo.o..oo..o..oo.o..o.oo.o.o...", ".ooooooo...oooo..ooooo..ooo..o", ".ooooooo..oooooo.oo..ooo..oooo", ".oo..o.oo.oo..oo.ooooooooooooo", ".oo.o.o...oo..oo.ooooooooooooo", ".ooooo.....oooo..oo.oo..oooooo", ".ooooooo...oooo..ooo..o.oooooo", ".o.o.ooo..oo..oo.ooooooo.ooooo", ".o.o..oo..oo..oo.oooo.ooo.oooo", ".ooooooo..oooooo.ooo..o.o.oooo", ".oooooo....oooo..o.o..o.oooo.o", "o...o.ooo...ooo..o..o..o.o..oo", "oo.o..oo..o..oo.o..o.oo.o.o...", ".ooooooo...oooo..ooooo..ooo..o", ".ooooooo..oooooo.oo..ooo..oooo", ".oo..o.oo.oo..oo.ooooooooooooo", ".oo.o.o...oo..oo.ooooooooooooo", ".ooooo.....oooo..oo.oo..oooooo", ".ooooooo...oooo..ooo..o.oooooo", ".o.o.ooo..oo..oo.ooooooo.ooooo", ".o.o..oo..oo..oo.oooo.ooo.oooo", ".ooooooo..oooooo.ooo..o.o.oooo", ".oooooo....oooo..o.o..o.oooo.o", "o...o.ooo...ooo..o..o..o.o..oo", "o...o.ooo...ooo..o..o..o.o..oo"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> board = {"........o........", "........o........", ".....oooo........", ".................", ".................", ".................", ".................", ".......oo........", "........o........"};
    int K = 2;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> board = {"ooo", ".oo"};
    int K = 4;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> board = {".............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", "o............................o", ".ooooooooooooooooooooooooooooo"};
    int K = 30;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> board = {".ooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo"};
    int K = 900;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo"};
    int K = 31;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> board = {"oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo", "oooooooooooooo.ooooooooooooooo"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> board = {"ooo", "ooo", "ooo"};
    int K = 9;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> board = {"ooooooooooooooo...............", "ooooooooooooooo...............", "ooooooooooooooo...............", "ooooooooooooooo...............", "ooooooooooooooo...............", "ooooooooooooooo...............", "ooooooooooooooo..............o", "ooooooooooooooo.............oo", "ooooooooooooooo............ooo", "ooooooooooooooo...............", "ooooooooooooooo...............", "ooooooooooooooo...............", "ooooooooooooooo...............", "ooooooooooooooo...............", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "ooooooooooooooo............ooo", "ooooooooooooooo............ooo", "ooooooooooooooo............ooo", "ooooooooooooooo............ooo", "ooooooooooooooo............ooo", "ooooooooooooooo............ooo", "ooooooooooooooo............ooo", "ooooooooooooooo............oo.", "ooooooooooooooo............o..", "ooooooooooooooo............o.o", "ooooooooooooooo.....ooo.o.o.oo"};
    int K = 18;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> board = {"...o.o..ooooooooooooooo.......", "..............................", "..............................", "..............................", "...o.o..ooooooooooooooo.......", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", ".......ooooo..................", "..............................", ".......ooooo..................", "..............................", "..............................", "..............................", "..............................", "..............................", "...o.o..ooooooooooooooo.......", "..............................", "..............................", "..............................", "..............................", "...o.o..ooooooooooooooo.......", "..............................", "..............................", "..............................", "..............................", "...o.o..ooooooooooooooo......."};
    int K = 20;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooo.ooooooooooooo"};
    int K = 900;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "ooooooooooooo.o.oooooooooooooo", "ooooooooooooo...oooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo"};
    int K = 1;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> board = {"..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............oo..............", "..............oo..............", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", ".............................."};
    int K = 3;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> board = {"oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo"};
    int K = 30;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> board = {"o.o.o.oo.ooo..o..ooooooooo.ooo", ".oo..oo.oo........o.ooooooo.oo", "..oo........o..ooooo.o.ooo....", "..o..oo....o...o.o...o.o.o.oo.", ".o.ooooooooo.o.o.o....o..ooooo", ".....ooo.......o.....o.o..oooo", "o.o.o.o.ooooooooo.oo..oooooo.o", "..ooo..oo.....ooo...oo.ooo.o..", "..oooo.....ooo.oooo..oo.o.oo..", "o..o....oo.oo.oooo.ooo..o.o.oo", "ooooo..o..o.oo..o...oo.o....o.", ".o...oo..oo..ooooo....o..oo...", "....oo.oo...ooo.oo.oo.o.ooo.o.", "..o.oo..oo.......oo.o.ooo..ooo", "o..ooo.o.oooooo.oo.o.o.o.o.o..", "ooo.oo..o.....o..oo.oo..o.o..o", ".ooo..o.o.oo.o..ooo.oo.oo.oo.o", "..oo..o..o.o..o..o.oooo..ooo.o", "o..o..oo....oooooo...o...o.oo.", ".oooo..o.o..o.o..ooo.o.o.oo.o.", "o.ooo.oo..o.o..oo.o.oo.oooo.oo", "o.ooooo.ooo......o.o........oo", "o.oo......o.o.ooo.ooooooo....o", "....o.........o...o..o..o.oo..", ".o.oo.oo.ooo.o..o.o.ooo.o.o.o.", "..o....ooooo.o...o.ooo....o.oo", "o...o....oo.o.oooo.o.o.ooooo.o", ".o.oooooo...o.o.o..oo.o...oo..", "o.....o.oo.oooo.ooo.o.o.o.oo.o", "oooooo...o..oo.oo..ooooo.oo.o."};
    int K = 67;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> board = {"....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo....................", "....oooooo...................."};
    int K = 100;
    DropCoins* pObj = new DropCoins();
    clock_t start = clock();
    int result = pObj->getMinimum(board, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23015823&rd=14550&pm=11665
********************************************************************************
#include <cassert> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <algorithm> 
#include <iomanip> 
#include <iostream> 
#include <map> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
#define FOR(i, a, b) for (int i = (a); i <= (b); i++) 
#define FORD(i, a, b) for (int i = (a); i >= (b); i--) 
#define REP(i, a) for (int i = 0; i < (a); i++) 
#define FIT(it, v) for (typeof((v).begin())it = (v).begin(); it != (v).end(); it++) 
 
#define SZ(v) ((int)(v).size()) 
#define ALL(v) (v).begin(), (v).end() 
#define SET(a, x) memset((a), (x), sizeof(a)) 
#define SORT(v) sort(ALL(v)) 
#define GSORT(v) sort(ALL(v), greater<typeof(*(v).begin())>()) 
#define UNIQUE(v) SORT(V); (v).resize(unique(ALL(v)) - (v).begin()) 
 
#define PB push_back 
#define MP make_pair 
#define F first 
#define S second 
 
typedef long long ll; 
typedef pair<int, int> pii; 
 
const int INF = (int) 1E9 + 5; 
const double EPS = 1E-9; 
const ll MOD = (ll) 1E9 + 7; 
 
const int dx[] = { -1, 0, 0, 1 }; 
const int dy[] = { 0, -1, 1, 0 }; 
 
const int MAXN = 35; 
 
class DropCoins { 
  public: 
 
  int numCoin[MAXN][MAXN]; 
 
  inline int doCount(int x1, int y1, int x2, int y2) { 
    return numCoin[x2][y2] - numCoin[x1 - 1][y2] - numCoin[x2][y1 - 1] + numCoin[x1 - 1][y1 - 1]; 
  } 
 
  int getMinimum(vector <string> board, int K) { 
    int M = SZ(board), N = SZ(board[0]); 
     
    SET(numCoin, 0); 
    FOR(i, 1, M) { 
      FOR(j, 1, N) { 
        numCoin[i][j] = numCoin[i - 1][j] + numCoin[i][j - 1] - numCoin[i - 1][j - 1]; 
        if (board[i - 1][j - 1] == 'o') { 
          numCoin[i][j]++; 
        } 
      } 
    } 
 
    int ret = INF; 
    FOR(i, 1, M) { 
      FOR(j, 1, N) { 
        FOR(u, i, M) { 
          FOR(v, j, N) { 
            int cnt = doCount(i, j, u, v); 
            if (cnt == K) { 
              int a = min(i - 1, M - u), b = max(i - 1, M - u); 
              int c = min(j - 1, N - v), d = max(j - 1, N - v); 
              ret = min(ret, a * 2 + b + c * 2 + d); 
            } 
          } 
        } 
      } 
    } 
    if (ret == INF) ret = -1; 
 
    return ret; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/