/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11886
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

class XorLife {
public:
    long countAliveCells(vector<string> field, int K);
};

long XorLife::countAliveCells(vector<string> field, int K) {
    long ret;
    return ret;
}


int test0() {
    vector<string> field = {"oo", "o."};
    int K = 3;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 23;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> field = {"..", ".."};
    int K = 23;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> field = {"o"};
    int K = 1234567;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 11018125;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> field = {"o.oo.ooo", "o.o.o.oo", "ooo.oooo", "o.o..o.o", "o.o..o.o", "o..oooo.", "..o.o.oo", "oo.ooo.o"};
    int K = 987654321;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 447104494375;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> field = {".o.", "o..", "..."};
    int K = 981;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 32550;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> field = {"...o", "..oo", "....", "...."};
    int K = 40;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> field = {"o.o..", ".....", "..o..", "o..o.", "o.o.o"};
    int K = 148;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 700;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> field = {"o....o", ".....o", "..o..o", ".o.o..", "..oo.o", "..oo.."};
    int K = 389;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1360;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> field = {"o.oo..o", "oo....o", ".....oo", "...o...", ".o.....", "oo.oo..", "..oo..o"};
    int K = 84;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1650;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> field = {"..o.oo..", "o...o...", "..o.....", "....o..o", "o.......", ".....o.o", ".o....o.", "......o."};
    int K = 25;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 700;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> field = {"..o....o.", "ooo.o....", ".o....o.o", "..o...ooo", "...o..ooo", "...o.o..o", "..o.oo.o.", "o.o..o...", ".o.o.oo.o"};
    int K = 302;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 11270;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> field = {".o.o.oo.oo", "..oo....oo", ".o.o.oo.o.", "o.....o...", ".o...o....", "...o.o....", ".....o.o.o", "o......o..", ".oo.....o.", ".....o...."};
    int K = 609;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5100;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> field = {"..o.o......", "......o.o..", "o..o......o", "o.o..o.o..o", ".oo..ooo.oo", "...oo.o..o.", "o..o.o.....", "......o.oo.", ".o..o...oo.", ".o.o.o..o..", "o..o......o"};
    int K = 771;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2176;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> field = {"..oo..o....o", "...oooo..o..", "...oo.oo.o..", ".o..ooo.o.o.", "o......o.o..", ".o..o.o.oooo", "...o.o....oo", "o..oooo..oo.", "oo....o....o", ".o....o.o..o", ".o.o........", "oo.o......oo"};
    int K = 170;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8600;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> field = {"..ooo.....ooo", "..o....o..o..", "..oo....o...o", "ooo....oo....", ".oo..o.......", "..oooo..o.o.o", "..ooo.o......", "...oo.oooooo.", "........ooo..", "oo....oo.....", "o.o..........", "......o.o..o.", "o.o......o.oo"};
    int K = 997;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 169287;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> field = {"oo........oo..", ".o.o....o.ooo.", "oo.o.o.oo.o...", "...o.....o.ooo", "...ooooo..oo..", "o.oo..oo......", "o..o...o..oo..", "o......o.oo.o.", "....o...o....o", "..o.o.....o...", ".....o....ooo.", ".....o.o......", ".o...o.....oo.", "o........o...."};
    int K = 814;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 48654;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> field = {"oo.o..ooo.o.o.o", "o.......o...o..", "..oo..oo.....oo", ".o.............", "....o...o......", "....ooo..oooooo", "..o.o.o...oo.oo", "..o..o.o.o.....", ".o........o...o", "o.......o......", "........o.....o", ".o....oo.......", ".o..........ooo", "o.o.o..o..oo.o.", ".o..oo..o..oo.o"};
    int K = 763;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 316415;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> field = {"oo...o..o..oo.oo", "oo..........o...", "...oo..o..o...oo", "....oo.o..o.o...", ".......o.o...o..", "oo......o.o..o..", "oo..oo...o..oo..", "o.......o..o....", "..o.....oo.o....", "....o.....o.oo..", "..o.oo.o.o....o.", "o.oo........oo.o", ".o..............", "o.ooo.o....o.o.o", "..oo....o....o..", "...oo....o.oo.oo"};
    int K = 844;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 43520;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> field = {".....o..o....o...", "..o...oo..o...o..", "o.......oo.......", ".ooo.o..ooooo....", "....o..o.....o..o", "..oooo..o....oooo", "................o", ".o.....o...o...oo", ".....o.....o..ooo", "o.o....o...o....o", "...o.o...oo.o....", ".o.o..o.......o.o", "o...o.oo.o.......", ".o............o..", "ooo..oo...oo.o...", "...o.oo.o.......o", "......o...ooo..o."};
    int K = 367;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 56370;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> field = {"o..oo.oo..oo..o...", "o.o......o.oo.o.o.", "...ooo..oooo...o..", ".....o........o...", ".o..oo.....o..oo..", "...........o...ooo", ".o..ooo.o........o", ".oo.oo...o.o...o..", ".o.o....o...ooo.o.", "oo.........oo.o.oo", "ooo.o.o.o...o.ooo.", ".o.............ooo", "o.....o....o..o.oo", "o.o..........o.o..", "...o..oo.o..o.o...", "......o.o...o....o", "...o.....oo...o...", "...o.o...........o"};
    int K = 801;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 15385;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> field = {".o..o.o.o.o.o......", "oo....o...o.ooo....", "...o...o...........", "....oo......oo.....", "..o.o..oo...o......", "o.o...o...oo.....o.", "....o.o...oo.....o.", "....o..o..o.o......", "..o...oo......ooo..", "........o.oo....o.o", "...o...oo.o....oo.o", "........o.....ooo..", "ooo.o....o.o.o.....", ".o.o...o.oooo...o..", ".o....o..o......oo.", ".o..o....oo.o.o....", "oooo....o...oo.o.o.", ".oooo..o.o..o......", "o..o.......o.....oo"};
    int K = 552;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8240;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> field = {"ooo........o....o..o", "oo.o....o.o...o.....", "...o.oo...o..o.o....", "....o....ooo......o.", ".......oo.....o.....", ".o.....ooo..o.o.o...", ".ooo.....ooo....o...", ".......o..o.oo.ooo.o", "...o.o.oo.oooo..oo.o", "...........o..o.o...", "..o...o.............", ".....o.o..oo..o..oo.", "....o..o..o...o.....", "...o.o....o.o.o.....", "............o..o.o..", "..oo.o....ooo..o..o.", "o..oo........o.o..o.", ".oo..oo.o.o.........", "......oo...o........", ".oo.oo.o.o.oo..o.oo."};
    int K = 23;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1583;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> field = {".....o.o.oo..oo....o.", ".......o.o....o.o....", ".o.o.oo.....o...o....", ".oo....o.....o.ooo...", "oo.o.....o.....o.....", "o........oo.oo.oo.o.o", "....o...o..o...oo....", ".o...o.o..o...o..o.o.", "...oo..oo..oo.o......", "......o.o..o....o....", "................oo.o.", ".ooo...ooo......o....", "o.....oo..o.o.o..o...", "o.oo....ooo......oo..", ".................o..o", "oo.o...o..o..o.....o.", "o..ooo...o.o..o.....o", "...o.oo.o...o.oo.....", ".........ooo...o.....", "o...o.oo.o.....o.oo..", "...o.o.o..o.oo.....oo"};
    int K = 363;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 57370;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> field = {"o...o..o.o...o...o.o.o", "..o.oo..o..oo.....o...", "ooo..o.oo..oo...o..o..", "..oo..o.o...o.o..ooo..", "oooo...oo.......o.o.o.", ".....o......o.oo......", "o.o..o...o.o......o..o", "o.o..oo.....o.......o.", "o.o.o.o.oo.......o..o.", "o.o..oo..oo.o.o.o..ooo", "..o...o.o...ooo....o.o", "....o..o....o.o..o..o.", ".....o..o.o..o....oo..", "oo.o..........o.o..ooo", ".o....o.o.oo..oo...oo.", "...oo.....oo.o..o.....", "...............oooo..o", "...o.......o..ooooo..o", "ooo....o..........o...", ".o...oo..............o", "..o..o....o....o.o....", ".oooo..oo.o.o....o...."};
    int K = 13;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 877;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> field = {".oo...oo...oo...o..o...", "..o..o..oo...oo..o.o...", "...ooo..oooo....o..o...", "...oooo..........o.....", "..o.o....o......o....o.", ".oo..oooo...........o..", "....oo..o.o.......oo...", "o....oo.o..o...o..o..oo", ".o......o.o.o....o.o...", "o..o.o.o.o.o....oo...o.", "........oo......oooo...", "....o.o....ooo..o...o.o", "o.o.......o.oooo..o....", "o.........o..o.o...o...", "o...o......o....o.oo...", "............o..o.o..o..", "o.ooo...o.....oo.o.....", "oo.o.....ooo.........o.", ".......o.....o..oo.oo.o", "o....o.o.ooo..o.o...o..", "..................o.o..", "o...o...o..ooo.o.ooo..o", "......ooo.....o..o..oo."};
    int K = 161;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7150;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> field = {"o.....oo.o...ooo...o....", "o.....oooo.o.o....oo....", ".oo.oo..o.o.....o..o....", ".oo...oo.....o.o..o.....", "....o.o.ooo..oooo.......", "o....o.oo..o.o.oo..o....", ".....ooooo.ooo..ooo.o...", ".......oo...oo...o.ooo..", "......o.o..o...o...oo...", "oo.oo....o....oo...o.o..", "oo..oo..oo...oo....ooo.o", "...o.....oo.......oo..o.", ".......oo.oooo....oo...o", "....o......oo...........", "..o....o..o.....o.....o.", "o..o..o...o..o...ooo..o.", "o..o..o.......o..o..o...", ".oo....oo..o....ooo.oooo", "..o...oo.o..oo......oooo", "....oo..oo.....o........", "..o....oo.........o....o", "....o.o..............o..", "o.....o.o.o.ooo......o..", "........o.o..o...o..o.oo"};
    int K = 963;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 90489;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> field = {"..oo.....o.....o....o...o", "..oo..o.o....o....o..o.o.", "..ooo.o..o.oo...oo.....oo", "o.oo.ooooo......o.o....o.", ".......o..o..o.o...oo.o.o", "oo....o.o....o.........oo", "oo.oo.o...o........o.oooo", ".oo....oo.o.....ooo....o.", ".o.o.o......o...o....oo.o", "oo...oo.o.o.oo.o..o..ooo.", "o.o..o.oo.....o..o...o.o.", ".o.o..o.o..o.oooo.o.oo..o", ".......o.o..o.ooo.o.....o", "..o..oo....oo.....o.o....", ".o.o.o..oo..o...o.oo.oo.o", "....ooo......o.o.oo......", ".o....oooo......o..oo..o.", "..o.o...o...oo.......o..o", ".....o.o.....o......o.ooo", "o.o.o....o.o.o.......o.oo", ".o...o.......o...o.o.o..o", ".ooo..o...oo...o...ooo...", ".....o..oo.o.....o.o..ooo", "..oo...o....oo.oo..o.o...", "......o....o........ooo.."};
    int K = 91;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10398;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> field = {"...o..o.o....o.o.o..oo.o..", "...o...o.....o......ooo...", "...ooo..o...o.oo.o.o....o.", "..oo.....oo.oo.........oo.", "...oooo.....oo.....o...oo.", "..o..o......ooo..oo...oo..", "o.oo.o..o.o.....oo.oo.....", "........o.oo.ooo...ooo...o", "...oo...........oo..o.o..o", "o..o....ooo.oo..........oo", "....o.oo...o.oo.o.........", "o....o.o....o.......oo....", "ooo..o..o.........o...oo..", ".o.o..oo...........o......", "..o....o..ooo.ooo.....o..o", "...oo.o.....o.o..o..o....o", "ooo..oo..o.......oo...o..o", ".ooo.o.o..o......o..oo....", "...o....oo..ooo.o..ooo...o", ".....oo........o.o.o...o.o", "..o...o...o..o...o....o..o", "o.o.....o.............oo..", ".o......o..o..oo..........", "o..o.....o...o.o...o....oo", "o....o..oo.oo.o.o.........", "o...oo.o.o......o.o...ooo."};
    int K = 962;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 83545;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> field = {".o..oo.o......oo.....o.....", ".......o........o..........", "....o.o.o...o...oo..o.o....", ".....o.o.o......o..o.o.....", "...oo..o.o.oo.o..o...o.o..o", ".oo.ooo...o.......oo.o...o.", "o......o...oo...o....oo..o.", "...oooo....................", "..oooooo.o..oo.oo..o..o....", ".o.o.o....o.oo..........o..", ".........o...o.oo..ooo....o", "o.oo..oo....o...o.....oo.o.", "o..o......oo...oo....oo....", ".o.oo..o..o...oo....oo.....", "..oo...oooo......oo..oo.o..", ".o.o...o..o.o....o...oo...o", "...ooo..o..............o...", "..o.............o..o.o..o..", "...oo..o..o.....o..o..o....", "o..o...o...oo..o.........o.", ".oo.o...o...oo...o........o", "oo..o..........o......ooo.o", ".......oo.o...oo.....o.o...", ".oo..o..oo.o..o...o......oo", "ooo.o.o..o..o..oo..o..o..o.", ".o...o.o......o.o..oo.o.oo.", ".....o.o..oooo.o.o...oo..o."};
    int K = 693;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 135715;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> field = {".oo..o.o...o......oo......o.", ".o.oo...o.o.o....ooo...o....", ".ooo.o.ooo..o.oooo.o...o..o.", ".o...oo.o..o.....o.........o", "...o.....o.....o............", "...o...o..o..o....oo..ooo...", "...o.o...oo....o...o...o..o.", ".o.ooo.o...oo..oo....oo.....", "..o..o......o.....o....oo.o.", "......ooo............o..o...", "...o..o.....o.........o....o", "...........o.o..oo.o.......o", ".o.o..o...o.........o.oo..o.", "o..o..o..........o...o....o.", "......o..o......o....o.o....", "o....oo..o...o..o..oo.......", "...o.oo.o.o.oo......o.oo....", "......o..o.o..oo.....oo...oo", "o...o....o.o.oo....o........", "..o.o..o...o.oo.......o.....", "oo.o......oo.oo....oo.ooo.o.", ".o..o.....o.....o..o..o...o.", "o..o.o.o..o....o..oo...o.ooo", "..oo.o.o..o.o.o..o.o.o......", "...o....o.o..o......o..o.o..", "......o.o.....o.o..o...oo...", "....oo.......o.o.....o...o..", ".o....o...o..ooooo..o......."};
    int K = 188;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 32065;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> field = {"o.o.o.......oo...o.....oooo..", "..oo...o..ooo.o...o.o.o...oo.", "..oo.oo.o..o...o....oo...o...", "o........ooo.ooo..o........o.", "..oo..ooo.o....o.....o.ooo...", "o.ooo.o...o...oo........o..oo", "o....o...oo.oo.o...o...o.....", "......o..o..o....o.o.o.oo...o", "oo....oo.o.o.oo.........o....", "......ooo.o.o.o.o.ooo.oo..o..", "......o.o....o....o....oo....", "..ooo.o....o......oooo..o....", ".o..oo....o...o...o.o...o....", "o.......o.......oo...o.o..o..", ".......oo...o.....o.oooo..o.o", "...ooo..oo..oooo..o...oo...oo", "...........oo..oo..oo.o.....o", ".o....o......o.o.o..ooo.o....", "....oo....oo.o.........oo.o..", "........o..o..o.........o.o.o", "..o.....o....o...o.........oo", "..oo.oo.o.o..oo...ooo...o.o..", "...o............ooo....oooo..", "..o..o..o.....o.oooo..o...o..", ".o...o.ooooo...ooo.o........o", ".ooo..o.......oo.o.....o.oo..", "..o..o.o..o.oo....oo.o.o..o..", "oo.o.o......o.o.ooo..o.ooo...", "......o.o....o............oo."};
    int K = 922;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 145485;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> field = {"..oo.o.o......ooo............o", "...o....o..........o.oo.......", "o.oo...o.o.oo...o.....o..o.o.o", "..o.o............oo.o.o.....o.", ".oo..o.........o..o.ooo.....o.", "..........o.o.....o.o.......o.", ".o.oo.ooo.o....o...o.....o....", ".o.ooo.....o..............o.oo", ".oo....o...o...o.o.....o..o..o", ".......o.o.o..o..........o..o.", "o.o...o...o...oo.o..oo..o.....", "....oo...o.o.oo.o.o.....o.o...", ".....oo..oo.o.o..o.o.....o.o..", "o.o............o...oo..o......", "...o.o......o.o.o........o.o..", "..ooo..oo..........o.......o.o", "..o.oo.....ooo.....oo....oo.o.", "...o....o..o.o.o....o......o..", ".o..oo....o....oo.o.........o.", ".......o..o.o..oo....o..o.o...", "...ooo..o.o.o...ooo...o.....o.", ".....oo.o...............o.....", ".o..o.o..o...o....o......oo...", "....o..........o....o.........", "....o...ooo.o.ooo..oo.........", ".oo.oo........o.o...o...o...oo", "......o..o.....o..o..oo....oo.", ".....o..o..o..o..o.o...oo.o..o", ".o.o..o.....o.o.ooo...o..oo...", "...o.o.........o.o.o...o...ooo"};
    int K = 894;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 391514;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> field = {"o...oo.o.o.o........o....o.oo..", "..oo....oo...o....o..o........o", "...o.o...o.o.oooo..oooo...o..o.", "....o.oo....o.oo...........oooo", "o....o..o.o.oooooo..ooo.....o..", "o.oo..o..ooo..o..o.......o...oo", ".o..o.ooo.o.........o.oo......o", ".......o...oo..o.o..o..o...o...", "o.oo..o..o.o......oo....ooo...o", "oo..ooooo..o.....o..ooo........", "ooo..........o.o.o..o....o...o.", "...o....oo......oo...o.o.o.oo..", ".o.......o.o.oo..o.......o.....", "....o.o....oooo....o..o........", "ooo...o..o..ooo.....o..o..ooooo", "...o..o....o......oo...oo......", "..o..........oooo.oo........ooo", ".o.o....oo..o.o.o.........ooo..", ".o...o...oo.........o.o.oo.oo..", "o............oo....o..o.o..oo..", "....o.ooo..oo.oo....o..o.o...o.", "..o..o..o........oooo..oo..oooo", "o....o......o.....oooo.o.o..oo.", "o...o.o...o.o...o...o..oooo..o.", "....ooooo.............oo.o..o.o", ".o.....oo..oo..o..o.o....o.oo..", "oo..oo.ooo....ooo..o...oo.oo...", "oo.oo...o..o...o....oo.......oo", ".o.o......o...oooo.o...o..o....", "....o..oo...o......o.o..o...o.o", ".ooo......o........o.......o.o."};
    int K = 749;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 296445;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> field = {"....oo.......oo.oo..o...oo.o..o.", "o.o..ooo...o..o..o.o.ooo..oo.o..", "...o.....oo..o..o.o...o...o.o.oo", "o..oo.....ooo..o.o.o.......o..o.", "....o........o..oooo.o.o...o..o.", ".o..o.....oo..oo..o.oo......o...", "...o.....o...o...oo....oo...oooo", "....oo...oo........o.......oo...", "o..o.........oo...oo.oo.oo......", ".oo.....o.oo......o....o.oo.....", ".oo...o.o....o..oo.ooo....o..ooo", "oo.o.oo................oo..o.oo.", "........o...o...o......o.o.o.ooo", "..o.o..o..o......o...oo....o..o.", "...ooo...o...o.o.o.......o...o..", "...oo...oo........o.oo..o..o....", "o.....oo..o......oo.ooo....o.ooo", "ooo.o..........o......o.oo....o.", "o..............oo..ooo.o........", ".o.o........o.......o..o....o...", ".........o.....o.....o..ooo..o.o", ".o...o....oo.o.o.o....o...oo.o.o", "....o.o.oooo.o..o.o....oo...o.oo", "o.o......oooooo.............o..o", "oo...oo..o.........oo.o.........", ".oo.........o......o.....ooo....", ".......o........ooo.oo..o..ooo.o", "ooo.oo.ooo.....oo.o.....o.o.....", "....oo........o...o..o.o..o.o.oo", "o.......o.........o..o......o..o", "o..oo.....oooo...oo.oo.....o.o..", ".o......o.o...o....o.....o.o...o"};
    int K = 850;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 142018;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> field = {"..oo....oo....o.o......oo....oo..", "....o...oo.........o.o..oo..o..o.", ".....o.ooo..o.o.o...oo..o..o...o.", "o.ooo......ooo.oo.o..oo..o.o..o..", ".oo....o.oo.o.o.....ooo.......o.o", "o........o..o.o...o.oo....o.....o", "o.....o..o........o.oo....o......", ".o......o...oo.....oo.....o..o...", "...o....o.oooo..oo..o.o.....o.o..", "o...o....oo.o.oooo..ooo.ooo..o..o", "......o....oo..o..........o..o...", "o.oo.ooo.o.........oo............", "ooo....o..o........o...........o.", "oo..o....o..oooo...o.oo.o..ooo...", "..o...o..o...ooo.o..oo...o..o..oo", "oo....o...o.o...oo.o.oo..o...oo..", ".o...o........o.o...oo.....oo....", ".o...o.o..oo.....o.o.o.....oo..o.", "o..o.......oo.o.o..oo....o..o..oo", "o.......o.o...o..oo..o...o....o..", "...............o.o..o.....o.oo...", "oo..............o.....o.o.....o..", "ooo....o.....o.o.o.oo.o..o.oo...o", ".....oo......oo...o..o.o..o.....o", ".o.....o.o...o..oo.o........oo..o", "o..o.o..o........oo.....o.oo.o.o.", "oo.oo...oo..oo.o.....ooo........o", ".o..o.o.o.o..ooo.o..oo...oo..o.oo", ".o......o....o....o.o.o.....o...o", ".o.........o.....oooo........o.o.", "o...o..oo.oo.o.o.oo.........o....", ".o.oo..o.o...............oo...o..", ".o......o.....o..oo............o."};
    int K = 687;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 138750;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> field = {"...o....oo.oo....o.....oo....o.ooo", ".o....oo...ooo.o......o..o..ooooo.", "..o.oo....oooo........oo....o.....", "..o.o..o.o.o.ooo.o.o.....o.....o..", "o.o......o...ooooo.o..............", "o.......oo.....oo....o.o..o.......", ".o.....o.o..o..oo.......o.o...o.oo", ".......oo..o.o.o..o.....o.o....o..", ".......o..o..o......o..o....o.o...", "..o.o........ooo...o..o.oo........", "...oo...o...ooo..ooo.o..o......o..", "..o...o.ooo..oo...o.o.oo..oo....o.", ".o.....o......o.oo.oo.oo.o...oo...", "..o.......ooo.o...oo...........oo.", ".o.oo.o.o...o...o.o..oo...ooo.....", ".ooo..o........o.oooo.o.oo.oo.o.o.", "..oo.....o..ooo..o...o..o.o...ooo.", "...oo....oooo.......o..o.o........", "...o...o.....o.o........o...o..o..", ".oo..o.o.....o.o..oo.oo.....o.oo.o", "..o........o.o.....o.o...o.....ooo", "o..o...o.o.ooo..........o..o..o.oo", "o......ooo.....o..o.o....ooo.o..o.", "...o.......o..o.oo............oo..", "...oo..o.....oo........oo.oo......", "o.........o..o.ooo.....o..ooo.....", "oo.....o...oo..o..ooo...o...oo.o..", "..o....o..o...ooo...o.o..o........", "........o..ooooo....o...o.ooo.....", "oooooo.....o....oo..........o...o.", "o...o.o..o.....o..o...o.o..o......", "....o......o..ooo..o.oooo....o.ooo", ".oo.............oo.o.o...oo.......", ".o.....oo....o..o.....o..oo..o..o."};
    int K = 186;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 36126;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> field = {"o.o......ooo.o.......oo...ooo....oo", ".o.o..oo...o..........o....o.o...o.", "o.....o.o........o...o...o..oo..ooo", "o..o.o..o.....o.o...o....o.......o.", "oo.oooo.o...oooo.o..o..o.o..oo...o.", "o......o....o....oo.....o....oo....", ".o.....ooo..o...o..o......o.....o..", "...oo......o...oooo.o....o...o.o.o.", "oo...........oo.o...o..o....o..o.oo", "....o.o.o.o.....oo....o.......o....", "ooo...o.o.o...o......o.....o.o.....", ".....o..o.....o...o.o.....oo.......", "oo..o.oo.o.........o...o.o.oooo.o..", ".....oo..o.o.o...o.....oo.o.....o.o", "..o.oo......o....o....o.....oo.....", "..ooo....o....o....o.o..o...o.o....", ".o.....o.....o..o.o...oo...........", "o.....o.o.....o.........o..oo....oo", ".....oo.o.o.....o...o.oo.o.o.oo..o.", ".......o.oo.o.ooooooo..o.o....o..o.", "......o...oo..o........o....o.....o", "o.oo.oo.oo..o...oo....ooo..........", ".o..........o.oo.oo..o.o..o.oo..o..", "..oooo.o...o...o....oo....o......o.", ".o.oo...o......o...o............o.o", ".o.........o..o..o..o..o....o......", "o...oooo.......o.oo....o.......oo.o", "..oo....oo...oo.o.oo.o.o.o..ooo...o", ".oo.......oo....oo.o.o..........ooo", "....o...o.ooo...o..o........o..oo..", ".o..oooo..ooo.......o....oo.......o", "..o...oo.....o.o..o..o..o.oo.......", "...oo.....oo.o...oo.o..o....o..o.o.", ".o...oo..o.o...oo...o...o.o..o..o.o", "oo...........o......o.o..o...o..oo."};
    int K = 758;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 368951;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> field = {".oo....o.o.o.o.o.o.....o..o........o", "oo...o....o..o.oo..o.....o.oo..o.o.o", "........oo.o.o....o.o........o....oo", ".o....ooo....oo.......ooo..o..o..o..", "..ooo..oooo...o....o...o..o.o.o.....", "o....oo.o.ooo......o...o.o.o..ooo..o", "o...oo......o...o....oo.o.....o..oo.", ".o.o.o...o.o...o....oo........o.o.oo", "oooo.o..o.ooo...oo.o.oo........o..o.", ".......o..oo.o.o.o..oo...oooo.o..o..", "oooo.oo.ooooooo..o.ooo..o....o......", "..ooo.o..ooo.oo...oo.o..oo.oo......o", "......o...o..o.oo................o..", ".............o....o........o...o.ooo", ".o.......o.o....o.o..oo.......o.ooo.", "o...o...o..o..o.....o.o..oooo.o.o...", "......oo..o..o...ooo.o...o.ooo.o..o.", "...o.o........o......oo.o...o.o.oo..", "....oo....o.oooo..o.........o..o...o", "o.....oo..oo...o.o..o.oo..o..o......", "..o......oooo.....o.......oo....o.o.", ".o...o.o....oo.....oo.o..o.o..o.....", ".oo..o.....o....o...o...o.o.....o.o.", "oo.ooo......o.....oo.....o.....oo...", "o....o..oo.ooo..oooo.ooo.....o....o.", "o...o..o......o.o.oo..o.o...oo..o...", ".o...o.oo......o......o....ooo.o..oo", "....oo.o....oo.oo...oooo....ooo.....", ".oo......o.o.oo..o.....o..o....o....", ".o.o.........o.ooo..oo.ooo.o........", ".o.o...oo.o...oo.oo......o.o...o.oo.", ".......o.oo....ooo...o.o.....o..o.o.", ".oo..o......o.o.oo.....oo.oo....o...", "...ooo....oooo.......o..o.oo.o.....o", "..o..o.ooo...oooo.......ooo...o.oo..", "oo.oo..o.........o..o....oo...o.o..o"};
    int K = 143;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 9500;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> field = {"o....o...oo.o....o...ooo....o..o...o.", ".o.....o...o.o...............o...ooo.", "..........o..........oooooooo...oo...", "..o..o.o...o......o....o.......o.o.o.", "o.o......o....oo....oo....o.o.o.o...o", "...oo....o.......o.oo..o..o...o......", "...oo...o...o.o.ooo......oo..o......o", "o...o...........o.....o..o.o....o...o", "o....ooo.....oo.....oo..oo.......o...", ".....o..o......o................o...o", "..o......ooo.ooo.....o.oooo..oo..o.oo", "o...o......o.o....o...o.o...o.o......", "o.........o...o.o.o...o..o..o.o.....o", "ooooo.oo..o........o.o.oooo.oo.o.o..o", ".o..o....ooo....o..o.o.o.......o.oo.o", "..o....o..o........o.o...oo..o.oo..oo", "...o..o.o.....oo.....o......oooo..o..", "..o..oo...ooo...o...o..o...o..o....oo", "..oo.o..o..oo...o..oooo.....o...oo.o.", "..o....o.oo....o..oo.ooooooo.o.o..o.o", ".o.o.o..o...ooo.........o.o.oo.....o.", "o.o.........o.oo.....oo..o..o....o...", "...........o.o..o.......oo.o.....oo..", "...........o..ooo..o.........o.....oo", ".ooo.oo..o.o.o..ooooo.oo.o..o.o.o.o..", "...o.o..oo.o.o...o..o..oo.o..o...oo..", "...o...oo.o.oo.ooo.....o...o..o......", "..o..o.o.ooo.......o...o.o.o...o.....", "...o...o.o.oooo........oo.o.oo.o...o.", "o......o....oooo...........o.ooo...oo", ".o.....o....o.o..o..o..o...o..o..o..o", "..o..o..o.o....o...oo...o.....o..oo..", "..o..........o..oo......ooo..oo......", "o..oo..o..o.....o.o.....oo...oo....o.", "ooo.....o......o.o...........oo.o.o..", "..o........oo.o......o.o..o...o.ooo..", "..ooo...o...oo.o.o.o...o...o........."};
    int K = 525;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8970;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> field = {"...oo.o..o..o...o.....o.oo.o.oo..o..o.", ".o..oo..o...o..ooo.o..o...ooo..o.oo...", "o....o.oo......o..o.........oo......o.", ".o..oooo..o.o.o..o.o..o..oooo.o.o..o..", "o.o..o.........o...o...o......o..oo...", "oo....o.o..o....o.......o..oooooo.....", "o.o.o.oo.o..o.o......oo...o.o.........", "oooo..o..o..o......o.ooo.....o........", "..o....o.o....o......oo.......o..oo.o.", "oo....oo...o....o..o....oooo.......o..", "...o.oo.o.......o.......oo...o......o.", "o....o....oo.....o........o..o..o...oo", "..oo.o.....o..................o......o", "o..............o.oo.ooo..o.o..o..o.oo.", "o.ooo...o...o.oo......oo.........o..o.", "o..oo.oo.o..o....o.....oo..ooooo....o.", "o.o.o...o..oo....o.ooo....o....ooo.oo.", "...o..o.o......o.oo...o....o.oo..oo..o", "...oo......o....o....o....ooo.o.o..o..", ".o...oo.....o...o.oo............o..o..", "..o..o......o.o...oo.o...o...o....o.o.", ".oo.o......o..o.....ooooo.....o...o...", "o...........o.o.o......o.ooo.oo.o.....", "o..o..........o.....o...o..oo..oo.o.o.", ".....oo..o...o.o..o...oo.......o....o.", "....o...o.o...oo...o.......oo..o..oo..", "...o...o.o.....oo.o.o..o.......oooo..o", "o...ooo.....o.o..o.o..o.ooo.oo.ooo.oo.", ".o.....o.oooooo.o.....................", "..oooo.o.....ooo......ooo.o.o.oo.o....", ".oo....oo..o.............oo....o...o..", ".....o.oo.....ooo..o.....o.o...o.oo...", ".o.oo....o.o.o..oo..o.........oo......", "o..o..o......o.o...o.ooo.o...o.oooo...", ".ooo.o..o....o..oo......oo...o.o.....o", ".......o.....o..oo..o....o.........ooo", "oo.o.....oo......oo.oo..o.....oo..o...", ".o.....o....ooo....o....oo.o......o..."};
    int K = 879;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 339829;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> field = {".o.o.o..oo..oo........o.o....oo....oo.o", "oo..o......o.o..oo.......o.oo...o......", "..oo....o...oo..........ooo...o....o...", ".oo.....ooo...o..o...o.o........o.o..o.", "....o..oooo....oo.o..o..o............o.", "...o.o.o.....o.o...o................ooo", "o.o.o.o.......ooo.o.o.....o.o..o...oo..", "o.o.oo..oo....o.o.......o.....o.o..o...", "o.o...oo...........o...o....o...o..oo.o", ".o......o......o.o....o..o.oo.........o", "oo...ooo.o..o..oo......o..o..o...o.oooo", "...o....o..o.....o...o.....o........oo.", "oo..oo.o...ooo...oo.o......o.....ooo.oo", "..o.o...o.o..ooo......o..o...o........o", ".....o..o.ooo...o.....o...oo.o.....ooo.", "o..o.o..o....o.o...oo.oo.o.o.oo......o.", "...ooo.oooo.ooo..oo........o......o.o..", "o....ooo.o...o...........o...o...o....o", "......o......o..o..o..o..o..........oo.", "..o.......o.o..o..o.o..o.o..o....o.....", "...o...o.........o..o..o....o..........", "...o....o.oooo..o.....o........o.o....o", "o..oo..oo...o..oooo..oo.oo.........o.o.", "oo..oo.o......oooo....oo...............", "..o.oo........o..ooo..o..o..oo......oo.", "oo....ooooo.......o..o....ooo.......oo.", "o....o....oooo.o.oo.o.......o...o.o.ooo", "o..o..........oo..o...oo.oo.........o..", "oooo..o....oo...o...o.o..o.oo.oo..ooo..", ".oo...oo.ooo..o..oo......o.oo.oo.ooo.o.", "o..oo....o..o..oo.o.............o.oo...", "....o...o.o.oo...o..oo..oo.......o.....", "oooooo....ooo........o..o.......oo..o..", "o.o..o..o....o..........o..oo......oo..", ".oo.o.o....o.....oo......o..o..........", ".o..oo...o.....o.oo....o.o.o....o......", "o.....oo...oo.o.o......o..o.o......o.oo", "o.ooo.......o.......oo..o....o.o.o..o..", "o........o....o.oo......o...o......oo.o"};
    int K = 941;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 350954;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> field = {"o..o..o..o........oo........oo..oo..o..o", "..o.o...oo......oo...o.oo..o..........oo", "ooo....o.o...o.oooo..ooo.ooo..oo.oo...o.", "o.oooo...o..o..o....o......o.oo.....o...", ".ooo.o....o....o....ooo....o......o.....", ".........oo....o..o..o.........oo.......", ".oo..o.o..oo...ooo......ooo..oo...o..o..", "o....oo..oo.o....oo.....oo..........o..o", "..o.o.........oo...o.ooooo..o..o.......o", "oo........o.....o....o...o.....o..oo....", "o......o...o........o.o...o..o..o.ooo.o.", "....o.ooo..o..o.....o...o.o.....o..o...o", "..o....oooo..o.oo..oo.o..o.oo...o...o...", "o.....o..o...oo........oo....o...o....oo", ".o.......o.oo.o.oo...o..o....o.oooo.....", "..ooo..oooo....o.ooo...ooo.oooo.........", "o..o..o.oo.oo..o.o..oo..o.oo.oo.o..o....", "..o..o.o......o..o.o.o...o..........oo..", "o.......o......ooo..........ooo.....oooo", "ooo..oo..o.o.oo..o...o.....o......o.....", "...............oo..o....oo..o...o..oo..o", "o.oo.o..o.o.o..o.o..oo..o..o.........o..", "...o.o.o..oo.........o.oo..o.oo....o....", "o.o.o.o......o.....o.oo.oo..o.o...o.ooo.", ".........oo..o..o...o.........o.........", ".....o...o......o.....oo.o.o.o..o......o", "....o..o......o.o..o.....o...ooo...ooo.o", ".o.............o.o.oo..o...o.....o..o...", "....o.....o.......o.ooo....ooo..........", "o.o.....oo.o...o...o.o..o.oo.o..oo....oo", ".o....o...o..ooo..o.o..o.o....oo..o.oo.o", "oo..o.o...o...o...ooo..o.oo.o.o...oo.o..", "...o.....o.....o....o....o...o.ooo..oooo", "...oo..o...oooo.........o..oo.o.oo....o.", ".o.o.....oo..ooo.oo.....o......o.ooo.oo.", "o........oo..o.o..o...ooo..o.o....oo...o", "..o......o..oo..ooo...oo....o...o.ooo.o.", "o.oo....o....o.ooo....oo.o.....o.oo.o...", "....oo.....ooo....o.o.o....oo..oo..o.o..", "...oo..o.ooo..o.....oo..o..........o...."};
    int K = 692;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 164880;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> field = {"oo....o.....o....oooo.o.o........o....oo.", ".....o.o...o.o....o.ooo.o...o..oooo..o.o.", "..o.o..o.....oo...o........o..o...o.o....", ".............o....ooo...o..o....o....o...", "..o.oo.o..o...........o...ooo..........o.", ".o.o.o..o.oo.o.o.o.o...ooo..o.o.......o..", ".oo......oo...oo..o..o...oooo.ooo.o.oo.o.", "o...o..o..o..o.ooo..o..o..o..oo.....o....", "o...o........o.oo.......o..o.........o...", ".o..o..o........oooo..oo..o........o..oo.", ".o..o.o.o...........o......oo...oo...ooo.", "o...o..o.o...o..o..................o.o..o", "o..o.....oo....o.o.o..o...o...oooooo..o.o", "o.o...o......oo.oo...o.........oo.o...ooo", "..oo...o.........o.o.o..o..o..o..o.o.....", "...o.ooo..o..............o....o....o.....", ".....o..o.....o.o...o.o....o....oo....oo.", "..o.....o......o...o.o.oo...o.oooooo..oo.", "..oo..o........oo..o...o.o.oo...o..ooo.oo", "o..........o....o...o..ooo..oo......o..o.", "oo..........o......oo............oo.o...o", "...o.......o...o.....o..o......o.ooo..o.o", "o....ooooo.oo....o.o...o.o.o.....o.o.o.o.", ".oo.o..........o.o.....o.......oo........", "..o..o.o.o.o.oo.o.o........o.ooo.....o.oo", "....oo.o...oooooo......o.....oo.......o..", ".o......o.o.oo.oo......o.o.o..oo..o..oo.o", ".o....o......o.oo.o...ooo..o.o.....o.oooo", "..o........o..ooo...........o....o......o", "......o.ooooo.........ooo...o.....o.o....", "..o.o.o...o........o.........o....oo.oo..", ".o...o....oo......oooo...ooo....o.o.....o", ".o.........ooo...o.o..........ooo.oo....o", "............o....oo.o..o..o..o.....o...o.", ".o...ooo..........o.........o...o....o.o.", ".ooo....o...o..o.oo..o.......o.....o....o", "o..........o.o.....ooo...o....o...o......", "........o.o..o.......o.oo........o..o.oo.", "ooo.o..o..o...............o.o..o...o.....", "o...oo.....oo....oo...o..oo..o..o.o..o...", "oo....ooo.o..o...oo..o.o.o..o.o...oo.o.o."};
    int K = 759;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 397805;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> field = {".oo..oooo...........o..o.o.o...oo.........", "oo........oo...o.....o.o..........o.o..o.o", "...oo..ooo.o.....o...o..oo...oo..oo.....o.", "..oooo.oo.o.o.oo.o......o...o...o....oo..o", "oo...o........o...oo....oo.o.......oo...o.", "......ooo...o.o.o.......o.o.o.o.o..o.....o", "o..oo..o..oo...o...o.o.ooo....o.....o..oo.", "...ooo.......o.o..oo.o.o..o.o.....oo..o...", "........o......o.o...........oo....o...o.o", "o.....ooo.......ooo.o......oo.o.o.......o.", "o..o...oo.....o.o..o................o...o.", "o.o....o......o..o.o.o.....o..o..o.o.o.oo.", "......o....o..o.ooo.....oo..o...........o.", "ooo..o.oooo.o..oo.....o..o.oo...o.o..ooo..", "..o......o.ooo.o......o...o.o........o...o", "o.....o......o.oo....o.o..o..............o", "...........o...o.o..o.....o.o.....o....o..", ".....o.......o...oo..o...o....o..oo..o.o..", ".o...ooooo.....o.o.....o..oo......o...oo.o", "oo......oo..o.o..o...o........o.....oooooo", ".o.o..........o...o.o..oo.....oo.o..o.....", "..o...o...oo.o.o.ooo.......oo..o.......o..", "oo.....oo.o.....o..o.......o..o.....oo.oo.", ".o...oo....ooo...oo.........ooo......o....", "..o..o....o..oooo..oo..o.oo..o...o.oo.oo.o", "...o..o..ooooo........o..o.oo.ooo.o.....o.", "...o.o....o.o....o......o.o.o.o.oo..ooo..o", ".oo.o....o....o.o.......oo.....o......o..o", "oo..o.......o..oo......o..o.....o.......oo", ".o....oo...o...oooo..o..o....o..o.....oo.o", "...o.oo.....o...o..o....o.....o.o..o.....o", "o..oo.....o...o..o.oooo......o..o.....o.oo", "........oo....o....oo.o.......o..o...ooo..", ".........o..o......o......oo...oo...o..oo.", "oo..o..o...o.o.ooooo.o.o.......o.o.o.....o", ".....o..o....o..ooo....oo....oo.o.....o...", "o.o.......o.....o...oo...........o.......o", "o..o.......oo..o.o....o..o....oo.......ooo", "o...oo.ooo.oo...o...o....oo...o....oo.....", ".oo.o.oo.ooo.oo.....o.oo....o.........o.oo", "....o.oo......oo.o......o..ooo.o.o.....o..", "........o..oo.o........o.....o.o.o....o.o."};
    int K = 784;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 27795;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> field = {".o....o.o...o.o..o.o.......oo.o.o..oo..o...", "o...oo......o..oo....o..o.o....oooo.o......", "oo.o..oooo...o.......o......o...o...o...ooo", "...o.o..............o.o.......oo.....oo.o..", "......o..........o.o....o..o.............o.", "..oo.oo....oo.o..oo...o.oo....o...oo..o.o..", "o...o...o.....o........o.o..oo..oo......oo.", "o..o....oo..o.o...ooo...o.ooo....o.o....oo.", "...o.oo...oo...oo......o.o......o.o.oo....o", ".o.....o..o.......o...o..o..o..o.o..ooooo..", "....ooo.o......o...o.o.o..o...o...oo.......", ".oo....o.......o..o.oo....oo.o..o..o.o.oo..", ".o.o..o..o...o.oo.o.......oo.....o.....o.o.", "...o...o....o........o.oo.........oo.....o.", ".........o.....o.o...ooo..oo.o.o.o.oo......", "o..o.........ooo..o....oo..oo.o...o.....o..", "......o...ooo....o.oo.o...........o.o.o..oo", "o..o....o........o.o...oo.o.ooo....o.o...oo", ".o.o.oo.o..o.......o...o.o.ooo..o..........", "...oo....o.........ooo.o...o........o..oo.o", ".....o.oo..........o.o...o.o.....o....o...o", "....o.o...o..ooo.......o....o.o.o.o....o..o", "............o.o.ooo..oo..oo.........ooo.o.o", ".o.o..o......o.......oo..oo.........ooo.o.o", "..oo........o.....o.o.oo....o.oo.....oo.o..", "..oo.......o...o....oo...o.....oo.......o..", "....oo.......o.o....o...o..o...............", "o.oo.o.o......o..o....o......o.o....o...o.o", ".ooo.o.......o.o..o..o.o.o...oo..o.........", ".o.....oo..oo.....oo..oo..o..o....o.o.oo...", "........o.o..o........o......oo......o...o.", "...oo..o.ooo...o...o.o........o..o..oo.....", "..o......o.oo...o...ooo.oo...o....o.oooo..o", ".o.......o..o....o..o..ooo.....o.......o...", "......o...oo..oo.........oo........o..o..oo", ".o.....o.....ooo.o.o....ooo..ooo....o.....o", "...oo..oo..o..o..o.oo.o.....oo...o....ooo.o", "o...oo...o...ooo...........o....o......oo..", ".....o..o..o....o..o..o........o..oo.ooo..o", ".o.ooo....oo.....oo.oo..o.o...o..o.....o.o.", ".ooooo..oo......o.o.o.....o..o.....o.......", "oo..o...o.o....o.o.o.o..oo.oo............o.", "...o.......o.....oo.o.o.o.....o..o.....oooo"};
    int K = 214;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 45878;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> field = {".o..ooo..oo...o.o.....o...o.....o.o.o..o.oo.", "o...o.ooo...o.o...o.o............o..o.o...o.", "..o......ooooo..oo..o.o........o.o.o.o.o....", ".o..o.....o....o.ooo.o.......oo.oo...ooo....", "....o....o..o..o.o........o.....o.....o..o.o", "...ooo.o.o.o...o..oo.....o...............o..", "o..ooo....o.o....o....o..o....ooo...oo......", "o.oo...o....o.......oo..o...oo...oo.........", "...ooooo.......oo..o..oo....oo.o.o....o...o.", "oo.....o.........o...o...o....o.o.o.......oo", "..o....oo.oo.o...o........o.................", "o..oo.....o...o........o.oo....o.o..o.o.....", "o........o.o.ooo................oo...o......", "........o........oo....o.oo...oo.ooo....ooo.", "o.o..........oo.oo..o.o..o..o..o.........oo.", "..o.o..ooooo...o..o.o..o.ooo..o.....o..o....", "o..o......ooo.o.ooo...o.oo.....o..o...o....o", "o..o....o.....o..o.oo.ooo.......o...oo......", "oo.....o...........o..o.ooo..o.....oo.o..o.o", "....o.o.oo.o....o.oo...oo..o.oo....o...o..o.", ".oo....oo.....o..oo.o.....o.oo..o..o...oooo.", "......o.oo....o.......o.o....o..o..ooo...o..", "oo.o..oo..o...oo......o.........oo..o.......", "o..o..o.......o...o..oo.............ooo.o...", "o.oo....ooo.o..oo...............o....o.o.o.o", ".....oo.........oo...o...o.oo.oo.oo..ooo....", "...ooo.....o......oo..o.o..ooo...oo.o.o.....", "...oo..oo.o.oo...o.ooo.o.ooo..o.........o..o", ".o.o.o.......o......o....o..o...o...oo.ooo.o", "o.o..o....oooo..o..........oo...oo.o........", ".o.o..o.....o...o..o.o.o.ooo.o..............", "o.o......o.........o.oo.o..o.oo..o.o........", ".o...o..o.oo..o........oo.o.oo..o.......o.oo", ".....o........o.........o.oo.....oo...ooooo.", ".......o...............o......o.o.o.....oo.o", "....o..o.....o.......oo..o.oo....o.o..oo...o", ".oo.....o....o..o.o........oooo.o....o..o...", "o.o.o...ooo..oo.oo..o.ooo..........oo..o.o.o", "...ooo....o....o.....oo..o.......oo......oo.", "oo.o.o..ooo.o....oo...o....o..o....o........", "........o......oo......o.o...o..o...oo..o...", ".......oo..o.oo..oo......o..o.o..oo.o.oo...o", "...o.oo..o.....o....oooo......oo....o..o....", "..o.o.....o.oo...o....o........o......oo..oo"};
    int K = 125;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 27137;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> field = {"...oo........o.o..o......o......o.o..oo.....o", "...o.o.o.oo.o.oooooo.o.......oo..o..o..o.o..o", "..o.ooo........o.oo.o..ooooo.o....oo.o.....o.", "o.......o...oo.oo.......o.o....o...o..o.o.o..", "o.o....o......oo..o.o..oo.....o....o...oo....", "oo...o...........oo.o..........o....o..ooo.o.", "..ooo...o....o.o...o...o....o........o......o", "...o...oo...o.o........o.oo.......o.....o...o", "..o.o.o....o......o.o.....o.o..o.o..oo..o....", ".o.......o.o..o....o....o....o..o....o...o...", "....oo.oooo..o.......oo...........o.........o", "o..o..o..o....ooo....oo.o.o.....o.......o.oo.", "....o.....o.....ooo....o.................o.oo", "o....ooo............o..........oo..o..oo.....", "....o.....oo.....ooo.o..oo.o..oooo.oo..o.....", "...o.o.oo..o....oo..o...o..o....o..oo..o.....", "ooo.....o.o....o....o...o..o.oo.o............", "o...o.o.oo............o.ooo.o...o.o..ooo.oooo", "o....o.o..oo.........o...o..o..ooo...o.o.o...", "......oo.oo..oooo...oo........oo.o..o.....o..", "o.o...o.....oo......oo..o..oo..o..o.o.o......", ".oo.oo....ooo..o.o.o....o...oo..oo....o.o.o.o", "..........ooo...o...o..ooo....o......oo...o..", ".oo...oo...ooo..o........ooo.o........o.ooo.o", "o......o.....o...o..o...oo..o..oo......o.....", "..........oo.ooo.oo.o.o.o......o......o......", "o...............o..oo..o.o....ooo...o........", ".o..o........ooo...o.........oo.o...oo.o.....", ".o.o....ooo.o.oooo.o.......o..o....ooo.......", "..oo.o.ooo....o.o....oo.o..o.....oo.o..oo..oo", ".o.o.o.......o.....ooo.o..ooo......oo.o..oo.o", ".o.oo.......o.o.o....oo.o.....ooo.o.o....o.o.", "....oo.o..o.o..oo.....o...o.........oo.....o.", "...o.o......o.oo.o......o...o.ooo.o.....o.o..", ".oo...oooo...o.o.......o.o..ooo..ooo..o..o.o.", ".......o..o......o..ooo..o....o....o.o......o", ".o..o..oo...oo...o...........o..oo....o.o.o.o", "o...o.o.o.o..o....o...o......o.............o.", ".o...o..o..o..o.o.o..oo..o.....o...o.oo......", "...ooo.o..ooo.o...o....o...oo.o...o.....ooo..", "...o.......ooo...oo..o...ooo.o..o...........o", "o...o..o....o.o..o....ooo.oo..o..o.oo..o.....", "...o.oo....ooooooo....oo.o.oo..oo....o.o...oo", ".......oo.o.o.ooo.....o..o.o...o..o.....oo..o", "..o.........oo..oo.oo.oo..o..o..o..o.o...o..."};
    int K = 780;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 34748;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> field = {"...o..o............o....o......o.oo...o...oo..", "....oo..o...o...ooo.........ooo.o..ooo.....o.o", ".....o.....o..oo.o.oo................oo...o...", "...o..oo....o....oo..o.....o..o..o..ooo.....o.", ".o.........o..o.........ooo.o..ooo..ooo.oo..o.", "....o.................oo...ooo..oo..o.o.......", "o...o...o.o.ooo.o...oo.ooo.....o......o.......", "...........o....o..o......o....o..oo..o.oo....", "o.oooo..oo..o..o..............oo....o.o.o.oooo", "o.....o......o.o.........oo..o.o...o...ooo....", "...o......o.o..ooo..o.oo.ooo..o......o.....o.o", "..o......o....oo.....oo.....o......o...o.o.ooo", "o.o.......o.o...........o.o.ooo...o...........", "......o....ooo.o....oo....o.oo.oo...o..oo....o", "....oo.........oo...oo...o..o.......o......o..", "..oo.o...o....o..o..o.o...o.............o...o.", ".ooo.oo..........o.o.o....oo.ooo..o......ooo..", "o.....oo.......oo.....o....o.oo.o.o....o.o....", "o.o..o......oo........o..........o......ooo.o.", ".o.o.......o.......o.o.o....o..o.o......o.....", ".....oo..o.o..........ooo.o.....oo..o.o.o.....", "o..o.....oo...o.o..o.o....o.......o.....o..o..", "o.o.....o....o..o.oooo.....oo.o..o...o..o.....", "..oo..o........o.o.......o..o..o.oo..o.oo....o", "....................o....o...oo.......o.......", "......o......o........o.ooo...o.o.....o...oo..", ".......o..oooo...o.oo.oooo.ooo.....o.o..oooo.o", ".....ooo..o.........ooo............o.o.oo....o", "o...o...o......o......o..o...o.o....o.........", ".o.ooo..o.o..oo..o.o.......o.oo..o.o...o..o.o.", "o..o.....o......o.o.o..........oo...o...o...oo", "o.oo...o.o....oo.....o...oo..o..o....o..o..o..", ".o.oo..ooo....o......oo.....oooo..o...........", "..o...o...o.o.o...o..........oo...o.oo.oo.o.oo", "o...oo.....o...o.o...oo.o..o....oooo.......o..", "...ooooo......o.ooo.oo..o.o.......oooo......o.", ".o.....o.o..oooooo.oo........oo...o.o.o...oo..", "....o......o........ooo..........o.o.o..o..o..", ".o.........o.o.....o...........o.oo...o.oo...o", ".ooo.o..oo......o............o..o...o...o...o.", ".....o..o.o.oo.o.oo....o.oo..oo..o...o..oo....", "o.ooo....o...o..o.oo.....o..o......o....o.o..o", ".o.o...o..o.ooooo......oo....o.....o..oo....o.", "..o.o....o.o....oo.o...oo.o...oo.o......o.....", ".o....oo......o.oo...oo..oo.ooooooo..o....oo..", "o.o..o..o.........o....oo.o.o..o..o.o..o....o."};
    int K = 34;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4320;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> field = {"........o.o.o.........o.o.oo..o.o..oo...oo..oo.", "..oo.....oo...oo......o..o..oo...oo........o...", "..oo.o..oo.o.o..o...........o.....oo....o......", ".o.....o.o..oo...o....o....o....o..............", "..o...oo....oo.....o.o...........oo.o......oo..", ".o....o.o.o.o....o...oo......o..o...o........o.", "......o.......o.oo...ooo..o......o....o.o...o..", "..oo..o.o.o..o..o.....o........o...o..o.....o.o", "...o.o.oo.o.....oo...o.....o.o.o....o..o....oo.", "..ooo.o.o.o....o.o....ooo....oo.....o.o.o.ooo..", ".o....o..o.o.o.....o..oo...o.o..o.....oo.o.....", "o..o..oo...oo.o.....o....o.....o.o.oo.oooo..o.o", "...oo.......o...o.....oo...o..o.....oo.o..o..o.", "...o.........o......o.o.....o...oo..o.....o...o", "o.....o...o....oo.o...oo.o..ooo...oo...o...o.o.", "......ooo...o......o..o........o..oo..o.o.o.o..", ".....o..o...........o........oo.......o.ooooo..", "..ooo...o..o.o.o..o....oo.....o..o...o...o.....", "oo.oo...o...o.o....o.o.o.....ooo....o..o...o.oo", "..o.o..o..o....o...o......oo.oo.o..o.....o.o.oo", "o....o.....o..o..o..oo.oo...o...o...oo.....o.o.", "...o.....o.ooo.......o...oo.....o..o..o..oooo..", "o..o.o.......o.....o..o.o......o...oo..o...o...", "..oo.......ooo..o....oo.o..oo.o......o.o.oooooo", "...o..o.......o....oo..oo...o.o.o......o.o.....", "....oo....o..ooo...o.o.o.o...oooo..o.oo...ooo..", "oo..o.o.oo.oo..oo.oo............o....o....o....", "...o...oo.o.o...ooo....o...o......oo.oo..o.oo..", "......oo......o..oo.oo.ooo.......oo.o.o.....o..", "oo.o..o..o...o...o......o..oo...o.o........ooo.", "o....o.oo..oo..o.oo.oo.o.oo..o.oo..oo.o.o......", "ooo.o.......o...oo......ooo....o..o...o....o...", ".oo...oo..o...o.oo..........o...o...oo.........", ".o......o.o.....o....oo......o....o.....o.oo.o.", ".......o..o..o..o.o.o.......o....o...o.o..oo.oo", "..o.o.....ooo.oo.........oo..o..o.oo.oo......oo", ".o...oooo.........o..o....oo..o.o..........o...", "o...o.......ooo......o.o..o.......o..o...o.....", ".o......o.o.......o...........oo.o...o.o.o..o..", "..o..o...oo...o.oo..oo........o...o..o.oo.....o", "o..o.........oo.oo.............oo..o...ooo....o", "oo...o.....o.oo...o.oooo.oo.o..o.o..o.....o.oo.", ".oo....o.......o.o......oo.o....oo....oo.ooo...", "..o....o..o...o.oo......oo.o..o....o..oo..oooo.", "......o.oo.o.o..o....o...oo..ooo.....oo.....o.o", "..ooo.o.....o..o.oo.......o...o...ooo..o.oooo..", "ooo.o..o..o.o.......o.....oo.o....oo..ooo...ooo"};
    int K = 725;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 234550;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> field = {"...oo..o....o.....o....o.oo.o...o.oo...o....oo..", ".....o.....o.o.o.......o...o..o..o.o....o...o...", "oo..oo......o.o..o..o.oo........o...o.........oo", "......o.......o.o......o.o.oo.o......o...ooo.o..", ".o...o...o.o...oo......oo..........o.....oo....o", "oo....o....o.o..o..o.o...o.o....o......oo.o..ooo", ".o............oo........o..o......oo.o.......o..", "..oo...o......o.o.o..o.....o.....oo.o....oo..oo.", ".oo.....o...o..o.o.o..ooo........oo..ooo.......o", "....oo...o......o..o....o.....o.ooo.o...o....ooo", "..o..o.o.......o..oo........o.o.......o..o..o...", "ooo..............o..oo..o..o..oooo......oo..oo..", ".........o......o.o....o.o.o.o.oo.........o.....", "..oo....o.oooo...oo.o....ooo..o...ooo....ooo.ooo", "oo..o.oo.oo.oo.o....o.o.o.o..o..o......o..ooo...", "..oo.....o...o..o...........o.............o...o.", ".......o.....oo......oo....oo...o.......o..oo..o", "ooo..........o...o...o............o.o.....o...o.", "o.o.o.......o.o......o...o...oo.o....o....o...o.", "....o..o.oo...o....oo....o..o.o.o...o........ooo", "o.o.....o...o...oo......o......o...o..oo..o..o..", "o.o.o...o....o...ooo..o..oo.o.o..o..............", "o...o..o..o.o..oo.o.o.....o..o...oo..o.....o....", "ooo..o..o...o...ooo.oo....ooo.o.....o....o.....o", "....ooo..o.o.o..o.ooo..o..o.o.o..o...........o..", "ooo...oo.o.....oo.o...o..o...oo.o.o...oooo..oo..", ".o...o.oo..o..ooo.o.oo.o.......oo..o..o..o...o..", "o.ooo.o.o.oo.o..o...o...o........o..oo.oooo...oo", ".....o.oo..........o...oo..o..oo......o...o.oo..", ".o......o.ooo...oooo..o.o.o..o.......o.o..o.....", "...o....o...oo...o........o.oo.o.....oo.o..o....", "oo.o.o..o.o.............o........oo.oo..o.ooooo.", "o...................ooo........o...oo..oo.....o.", "..oo.o....o.oooo.....oo.o.oo...oo..o..oo...o....", "o.o.o......oo.o...o.o.o....o....o......o...oo...", "ooo.....o.o..o.o.o...o..........o..o......o.....", "....o..o.........o......o.....oo...o..o.oo.o.ooo", "o..o......o...o..........o...o..o...oo...o.....o", "...oo...o...ooo..oo.oo....o.ooo..........o....o.", ".oooo.oo..o.o...o.o...o..o.....o.o.....o...o.oo.", "oo.........o....oo..o...o.o....o..o..oo..o...o..", "o....oo...o....oo.....o..o....oo.o..oo........o.", ".....o....oo.......................o....oo....o.", "........o...o...oo..o..ooo............oo...ooo..", "................o..o....oo........o...o...o.....", "..o..o..........oo.oo.o...o......o.oo.o...o...o.", "....o...o..o...o..o...o......ooo...o.o.o.oooo...", "o......o...o...oo...o.....o.o....o..o.....o....."};
    int K = 196;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 23120;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> field = {"...oooo..o..o.......o..o.oo.o.o...ooo.......o.o.o", "o.oo....ooo.....o....o.oo...o...ooo..o..oo.....o.", "..o.oo.oo..o.o....o..o....o..o..o...o.o.o.o...o..", ".......o.o.oo.......o.....o..oo.oooo..o..o..o..oo", "....o.ooo...o..o..o.....oo.......o.o.oooo........", ".o....o.....o..o.o..........o.o.oo...o....o.o..o.", "....o....oo.....o.....o.......o..o..o..oooo..oo..", "..oo...o........oooo.oo..o...oo.oo......oo...oo..", "ooo.o..ooo..o..oo..o..o.o......oo.....o.o..o....o", "o.o....o..o.o..oo.....o...o.oo....o.......o..o...", "o....o.ooo.....o...o.ooo.....o...ooo..oo.ooooo.o.", ".o..o.o.....o.oo.o.o.....o......oo.o.oo.o..o.o...", "..o...o.o.............oo..ooooo...o..o.oo..oo...o", "..oo....ooooo.ooo.o.oo....o.o.oo.o.o..o..o.o.o.o.", "o...o.oo.o..o.........oo..o...o.o.........o.o.o.o", "o..o...o.......o..oo...ooo.......oo...oo....o..o.", "o...o.o...ooooooooo.oo.o.oooo...oo...oo..........", ".....o......o......o..o....o........o..o.o....o.o", ".oo..o........o.....oooo.oooo.ooo..o..o.oo...oo..", "o..ooo.oo...........o..ooo.o...o...oo..o.........", "ooo....o..oo..o..o.........oo.o.o.ooo.o..oo..oo..", "oo..o.o.ooo..oo.o........oo...o.o....o.....o...oo", "o...oo.o.o.o.oo...oo.o...o.......o.o.o.....o.o.o.", "oooo..oo...o....o.o.....oo...o..o....o..oo.o.....", "......o....o...o.o....o.o..o..........o.o....o.oo", "o..o.o...oo.......o....ooo.......o...oo.o...o....", "..o....oo......ooo.o..o...oo....ooo...o..o..oooo.", "o.oo..oo...........o...o.....o..oo.o.....o.ooooo.", "o...o..........o..ooo.o.o...oo...oo.oo.o.oo...o..", "........o.oo..o.o....o.....o....oo.oo....oo.ooo.o", ".o..oo.....o....o.....o.o..o.ooo.o..........o..o.", "o..o.o....o.o..o...o.....o...oo......ooo.........", "....oo..oo.....o...o.o......ooo....o...o.........", "o........o........o....ooo...ooo.oo.oo.o..ooo....", "oo.o.o.oo.o.........oo...oo....o..o...........o..", "..o..o....o..o....o.o.o.o.o..oo.oo.o..o...oo.o.oo", ".............o.....o...o....o.o...o.o.o...o.oo...", "...oo.....o...o..o....oo.o.o..ooooo.o...o.o..o.oo", "..o...ooo.....oo...o....ooo....o.o..o.o...o......", ".o.ooooo..oo.........o..........o........o..ooo..", ".o..o.o..o....o.o.ooo.o...o........o......o...o..", "...o..o.o..o..o.o.o.oo...o.oooo....o...o.oooo....", "..o....o.ooo.o.ooo.o....o.o..o..o.......o...o..o.", ".o.o..o...o.o.ooo..o....ooo.......oo..o...oooo...", "..o....o.oo.o...o.....o..o..o....o........o.o..o.", "o..o...ooo....o.............o.o..o.oo.........o.o", "oooo.o..oo..o......o.o.....o..o...........o...oo.", "....o..............o.............oooo...o..o....o", "....o.o.o......o..o.....o......ooooo.oo..o..oooo."};
    int K = 835;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 124270;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> field = {".o........o.......o....oo.....oooo......o.....ooo.", "o......o...............ooo.......oo.......oo.o....", "o..o.....o..o.oo.o..ooo.o.o...o.o.....o.ooo..ooo.o", "o...o.ooooo...............o.o..oo.o........o.oo.o.", "o........o..o..ooo.o.o.ooo.o.o..oo.oo..o.o.oo.....", "......o..oo.o.ooo...o...o.oo..oo.....o....o.......", "............o.o....o......o..oo....o.....o.o..o.oo", "o.o.....o...oo.o..oo.o.......oo...ooo..oo.o.....o.", "...o..o........o......o....o..o.o.o.o...o.ooo....o", ".....o...oo.oooo.o.o..o....oo.....o.o..oo..ooo....", "o.o....oo...o...o.o.o.ooo....oo...o.oo....oo..o.o.", "oo.....o.o..o.o..o..o.oooo...o.o..o..........o....", "...o.ooo.oooo......o........oooooo...o............", "o....oo...o...o..oo.o..o....ooo....o........oo..oo", ".oo.......oo..o...o......oo...oo...ooo.....o...o..", "...ooooo..o..........o...ooo.o....o.........o.o...", ".....o..oo..o....o......o.........o....o...ooo....", "o.o.....o.o...o.......oo..o.ooo..o....ooo.o.o....o", ".o...ooo.o...ooooo...............o..o.o......oo...", "o....o.ooo.......o.oooo.oo..o...o.....o..o.o..o.oo", ".o....o.......o....o.ooo.o..o..o.o.....oo..oo.....", ".o...o...o...o.oo...o.o....o.oo.o...o.o......o....", "o....o.o..........o....o.o..o...o.............o...", "..o.o.o..o..oo.o..o...o....oo....o..o....o.o.....o", "o.oo...o....o..o...ooo.o..oooo...o.o.o..o...o.o...", ".o.....o.oo.......o..o..o..o..o.o...o.o.........o.", ".o.o...ooo...........o.o..o.....o.o...o.ooooooo...", "......ooo.o....oo...o.oo....o...oo..o......o......", "........o...o..oo....o........ooo.......o.........", "....o.o......o..o..o.o..oo..o..ooo...oo..o.o.....o", "o....o....o...oo.....o.oo.oo..o..o....o...o.o.....", "...o..........o.o.o..o........o...o.o.oo.oo..oo.o.", "o...o.oo........oooo...o.o...o..ooo......o..oo.o..", "o.oo.o....oo.oo..o.oo..o.o......ooo.o.....o..o....", ".oo......o.o..ooo.oo..oo.oo...o...o...ooo...o.o...", "oo.o..o........o.o.o..o.oooo...o.o...........o..o.", "o.......oo..oo..o......o...oo......oo......oo.....", "..........o.oo....o.....o..o.ooo...oo.........o.oo", "...o...o.o.oo.........oo..oo..o.o...o....o.o....oo", ".........o..o..oo...........o....o.o...o...o.oo...", "..o.o.o..o.ooo.....ooo.o..o....oo......oooo.o.....", "..o.........ooo.oo..o..oo....o.o..o.....o.......o.", ".......o.....o.oooo..ooo..o....oo..o.oo.....oooo..", "..o.....oo..o.........oo..oo..o.o.o..o..........o.", "o.oo.o.....oo....o.....oo.....o..o.o...o....o.....", ".ooo..o.o..ooo....ooo....o........o..............o", "oo...oo.o.oo.....o......o..o..o.o..o.oo...o.......", ".o....o..o..o.....o.....o...o.....o..o...oo...ooo.", ".o.o..oo.......o....o...o....oo....o.o....o..o....", "oo.o.o..o.oo.o..oooo.oo......o.....o..ooo.......o."};
    int K = 824;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 148325;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> field = {"o", ".", ".", ".", ".", ".", ".", ".", ".", "."};
    int K = 567;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5185;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> field = {".", "o", ".", ".", "o", ".", "o", ".", ".", ".", ".", ".", "o", ".", ".", "o", ".", "o", ".", ".", ".", "o", ".", "o", ".", ".", "o", "o", "o", ".", "o", ".", "o", ".", ".", ".", ".", "o", ".", "o", ".", ".", ".", ".", ".", ".", "o", ".", ".", "."};
    int K = 8143;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 9114880;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> field = {"...oo..oo."};
    int K = 3002;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 270840;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> field = {"oooo..ooooo...o..oo..o.o.o.....oo..o..o.o......oo."};
    int K = 4039;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1183790;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> field = {".", "o", ".", "o", ".", "o", ".", "o", ".", "."};
    int K = 8514;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1500;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> field = {".", ".", ".", ".", ".", "o", ".", "o", ".", "o", ".", "o", ".", ".", ".", ".", ".", ".", "o", "o", ".", ".", ".", ".", "o", ".", ".", "o", ".", ".", "o", ".", ".", ".", "o", ".", ".", ".", "o", "o", ".", ".", "o", ".", ".", ".", ".", ".", "o", "."};
    int K = 8095;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6199756;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> field = {"o.......oo"};
    int K = 452;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 793;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> field = {"..o.....o.....oo.....o......ooo..o.o..ooo.....o..."};
    int K = 6904;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 609246;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> field = {"o", ".", ".", "o", ".", "o", ".", ".", ".", "o"};
    int K = 7906;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 185318;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> field = {"o", ".", "o", ".", ".", ".", ".", ".", ".", "o", ".", ".", ".", "o", ".", ".", ".", ".", ".", "o", ".", ".", "o", ".", "o", "o", ".", "o", ".", ".", ".", ".", "o", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "o"};
    int K = 144;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 245;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> field = {"o.....ooo."};
    int K = 5049;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 206790;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> field = {"........o.o......o....o.o.o.o........ooo..oo...o.."};
    int K = 8332;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3225;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> field = {"o", ".", "o", "o", ".", "o", ".", ".", ".", "o"};
    int K = 1668;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1785;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> field = {".", "o", ".", ".", "o", "o", ".", "o", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "o", "o", ".", "o", ".", ".", "o", "o", ".", ".", "o", ".", "o", ".", ".", ".", ".", ".", ".", "o", ".", ".", "o", ".", ".", ".", ".", "o", ".", "o", "."};
    int K = 5762;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 22525;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> field = {"..oo......"};
    int K = 3166;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 36890;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> field = {"..o...oo.........oo.oo...o..o..o.....ooo..o.oooo.."};
    int K = 2197;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 18950;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> field = {"o", ".", ".", ".", "o", ".", ".", ".", ".", "o"};
    int K = 6271;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 261783;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> field = {"o", ".", "o", ".", ".", ".", ".", ".", "o", ".", ".", "o", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "o", "o", ".", ".", "o", ".", ".", "o", "o", "o", ".", ".", "o", ".", ".", "o", ".", "o", ".", ".", ".", ".", ".", ".", "o", ".", ".", "."};
    int K = 3650;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 15860;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> field = {"o..o......"};
    int K = 9422;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 51850;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> field = {".o..o.......o....oo..ooooo.....oo.o.oo..o.oo....o."};
    int K = 3361;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 25075;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> field = {"..................................................", "............................o...o.................", ".........................o........................", ".....................o............................", ".....................o............................", "................................................o.", "......................o..o........................", "..................................................", ".o................................................", "..................................................", ".....................................o............", "..................................................", "..................................................", "..................................................", "..................................................", "....o...............o................o...........o", "..................................................", "..................................................", "..................................................", "......................o............o..............", "..................................................", "..................................................", "..............o...................................", ".................................o................", ".................o..........................o.....", "............................o...o.................", "..................................................", "..................................................", "..................................................", "..................................................", "...................................o..............", "..................................................", "...............o..................................", "..................................................", ".....................................o............", "..................................................", "..o...............................................", "..........................o.......................", "..................................................", "..............o...............................o...", "..............o...o.o.............................", ".o............................o...................", "..................................................", "...o..............................................", ".................o................................", "...........................o......................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int K = 331797396;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 64363919725;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> field = {"...............o..o...........o..................o", "..o.o......................................o......", "...................o................o.........o...", "..................................................", "...............o.........o...o...o................", ".................o................................", "..................................................", "..................................................", "..o.......oo......................................", ".................o................................", "..............o..........o..o.....................", "...................................o..............", "............o....................................o", "................................................o.", "......o.............o..................oo.........", "...........o...............................o.o..o.", ".o...............................o..o........o..o.", ".....o................................o...........", "........o.........................................", ".....o....................................o.......", ".............o............................o.......", "..........o..o...............................o.oo.", ".........o..o...o.....................o...........", "..................o...............................", ".........o........o....o...........o.............o", ".........................................o........", ".........o.o................................o.....", "...o.......o......................................", ".........ooo...........o..o............o..........", ".....o.................o..........................", "..............oo..................................", "...o............................o.........o.......", "................o....o...........................o", "..........o...o......o...............o............", ".....o.......o........o...........................", "....................oo.o.......o.........o........", "..o.............oo.................o..o...........", "......................o...........................", ".......o........o.....................o...........", "o..o..............................................", ".........o.................o.................o....", "....o....................................o........", ".o....o......o..........o.........o.......oo......", "...o........o.......o.............................", "..................................o........o......", "...................o....o............o....o.......", "...o.........o......................o.............", ".........................o..................o.....", ".............o.........o..........................", "..........................o................o......"};
    int K = 2991149;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 235318250;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> field = {"....................o......o.o...o.....o..........", "...............o......................o........o..", ".o..............o................o....o...........", ".o....o.......o....o.o..........................o.", "..............................................o...", "o........o..............................o.........", "...........................o.......o.o............", ".......o..............o............o..............", "...o......................................o..o....", "..........o...o....oo.............o...............", "..........................................o.......", ".o..........o..........o.....................o....", "..o...........................o......o............", "o............o....................................", "...............o....o.....o..................o....", "..........o..........o............................", "...............o.....o....ooo....................o", "..................o.........o............o........", "...oo....ooo...............oo.....................", ".........oo.......................................", ".......oo.o......o.........................o.o....", "................o....o.o...........o......o...o..o", ".............o......o.........o..........o....o...", "................o..........o...............o..oo.o", "o..oo.................o....................o......", "..............................................oo..", "...o.................o...................o.......o", "......................o......o..o.o.o.o.o..oo.o...", "....................oo..............o...o.........", "...o............o..................oooo......o...o", "o..............o............................ooo...", "..........................o...o.....oo............", "...........oo...................o........o........", "o...........o.o......o..o.................oo...o..", "..................................................", ".oo.....o...........o.............................", ".o....o.............o.....o.oo..............o.o...", ".........o........o...oo..................oo..oo..", "........o....o..o.........o......o..............o.", "........o..o................o..........o....o.....", "..........o...o....o......o..........o.....o......", ".............................o....................", ".o....o...oo........o................o...o...oo.o.", "....o..............o.o...........................o", "....o............o......oo......oo.........o......", ".......o...................o.o....o..o........o...", ".o......................o...o.....o.....o.......oo", "....................o...............o.......o...o.", "..o....o.............o.....ooo.......o............", ".o.o......o.........o..oo.o....o.................o"};
    int K = 628188275;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 76601893750;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> field = {"....o..oooo.......o.o........o.............o......", "..o...o..o.......o........o......oo..........o....", "......o...o................o.oo..o.............oo.", "....o...o........ooo........o.....o....o..........", ".o..o.o.o.........o................o...oo.........", "..o...o..o..o.....o.......o....o....o.............", "................oo.................o..............", "....o.o.............o.........o..o........o..o.oo.", ".o.....o.............o....oo.o.o.o.............o..", "...o...o....................oo.o.................o", "..........o.o.oo............o.........o...........", "..o..........o.......o.o.o....o.........oo........", "..........o..............o..o...o..........o......", "..oo..o.o...ooooo.....oo...........o..............", "..o..o...o.........o......o..o...............o....", ".o...oo...........o..........o.o........o.o.......", "............o..o..o...o..............o............", ".........o.o..o.................o.......oo....o..o", "............oo........o......o..................oo", ".............................o..o..o.o............", "..o....o....o.o..o............o...................", "....o..o...o.................o.o................o.", ".......o....oo....o..............o..........o.....", "............o.o......o..............o.o...........", "...o.............o.oo..o..........................", "...o.o.......o........o...o..o...........o........", ".ooo.................o.........o.o...........o....", "..........oo.o.o......................o.o.o...o...", "....o.....o..o...o............o....o..............", "...........o...o.....o........o...o.o........o....", "........o..o.............o..o....o.o...........o..", "..........o.o..o....................o.o..o....o..o", ".........o.............oo...o.................o.o.", "...........o....o.o.............................o.", "..o..o.o...................o.........o..o....o.ooo", "o..o...o........oo.o..............o...............", "...........................o....o.o.......o.......", "o.....oo.....o...o........oo...................o..", "......o......................o............oo.o....", ".o..............o.........o.....o.................", "...............o..............o..............ooo..", "....o...o.............o..o..o...oo................", "..........o.............oo.......oo...o..o.......o", ".........o..................o.o...o...........o...", ".o.......o..o..o........oo........o.........o.....", "........o.....o................o...o.o.........oo.", "...............................o.o.......o..o.....", "...................oo........o...............o....", "..o......o........................................", ".......o.......o....o.o.......oo.................o"};
    int K = 769176496;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1829236164100;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> field = {"..o...o....o.oo...............o..o.......o........", "..o...o.o...o..ooo...o.....oo..........o..o.......", "...............o..o..o..o.o..o....oo.o.o......o...", "o.o...........oo.....o.......o....o.o.o........oo.", ".....o..........o..................o......o.......", ".....o.......o.....o.o.....o.oo.o.o......o.....oo.", "...........ooo..o.......o............o...o...o.o.o", "..o..o..o.......oo........o......o.....o...o.o....", "..o.o....o..o......o..o.o....o..o.......o....o..o.", ".......................o....o...o...o....o..o....o", "..o.....o..o.o...o.....o.....o........o...o..o....", ".................o.o...oo.............oo.o........", "..o..o...........o....oo...oo..o.....o.oo......o..", "o..........o..o..o............o...o.o........o..o.", "o....o........o.....o...........oo....o.o.........", "....oo......o......o..................o...........", "o...o........o...........o...o.o..o..oo...........", ".o..o.o........................o..o..o....o.o..oo.", "...oo............o...o.............ooo.o.o...o....", "........o.......................o....o............", "..................o.......o.o.............o.......", "..o..o...ooo.o.o......oo.......oo.o.............o.", ".......o........o....................o.o.oo.......", "....o...oo.........o....o..................oo.....", ".o.o.o..................oooo............oo.....o..", ".oo.o....o..............oo....o..o................", ".o..o...o......o.....o.o.o.....o..........o.o....o", "..........................o..o..o........o........", "..o..........o......o......o..o.........o..o......", "..............ooo..........oo.....o..o..o........o", "...........oo.......o.o.oo.....o....oo........o.o.", "...o...o....o.o.................o.................", "...o..o...o.....o..oo.......o...o.........oo......", "........o......o....o.o......o......o...o....o..o.", "................o..o..o.o......o..................", ".....o...o.oo....................o................", "....o.o...o...........oo..........o..oo..o......o.", "........o...........o...........................o.", ".....o.o.........................o.......o.....o.o", "........o.o..o..o..o...o...o................o...o.", "..........o.......oo.oo...o...o......o.....o.....o", "...oooo..................oo...o...o.....o.o.....o.", ".........o.ooo.............o...........o...o......", ".....o......o....o....o.o..............o.o..o.....", ".o........o......................o............o...", "......o..................oo................o......", "......oo........o.......o..o.............ooooo....", "...o..........................o.o.o...oo....o.oo..", "........o.....o.oo..o......o.......o.o...o........", "o..........oo..oo.....o.....o.ooo.o..o............"};
    int K = 442885429;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 336376853750;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> field = {"............o.......o....oooo.....................", ".o.o........o...........o.o.....o.....o......o.o..", "...........o.....o....o.oo.........oo..........o.o", "...o.o.o.....o...o..oo.........o.oooo..o.o.o.....o", ".o......o....o.........o.o..oo.o......o.....o...o.", ".....o...............o.o..o.ooo.oo.....oo......o..", "oo.....o.....o...o.o.......o....o.......o........o", ".......o........o........o.....o.oo....oo..o.....o", ".o...........oo......o....o....o.o..o.o.o...o.....", "....o..o..........o..o.oo..o...o..o......o...o...o", "........o....o..o.o.oo...o..o.......o...oo....o...", "o..o........oo.oo....o..o..o.oo.o.o.............o.", "......o..o............oo.........oo..o........o...", ".........o...........o......o.............o.....o.", "o............ooo...o..oo.......o....o.o...o...o.o.", ".o...oo.........o..........o.oo............o.o....", "o.....o..oo.....o........oooo..oo...o..o.o..o..o..", "..o....o.......o....o.o.......o....o......oo.o.o.o", "..................o....oo.o.....o...o.......oo..o.", "..o....o....o....o......o.o...........o.o.........", ".....o.o............o.o..o....o.ooo...o.o....oo..o", "oo................oo...o..o......o........oo...o..", "...o..oo..............o...............o..ooo...ooo", "o.......o..oo.o..o.....................o......oo..", "..............o...o..o......o....o.oo.o.o....o....", "...o......oo..o......oo...o.......o....o...o.o.o..", "...o.......o.....oo.....o.....o...o..........o...o", "..........o.....ooo..o.......o.o...oo.oo.o......o.", "......o............o.o....oo.......ooo...o..o...oo", "....o.oo.o...o.oo.............o....o........o.....", "....o.oo..o....o..o...o........oo.......o.....o..o", "o......o....o.o.o.....oo....o.....oo.o..o....oo.o.", "..o.....o..o.o......oo..........o..........ooo....", "..o........o...oo..oo.....o...........o.o.oo.....o", "...o.........oo........o...o........o........o....", "o.......o....o.................oo...oo.oo........o", "oo.............o..o.............o..........oo...o.", ".ooo..........o...........oo....o.....o.oo.oo...o.", "oo......oo......o.o.....o...o......o..oo......o.o.", "......oo..oo..oo.........o......o.o....o.ooo..oo.o", "o....o............o...o.........o.........o..o.o..", "..............o..........o.....o..o...o...........", "........o.......o...oo..oo..o.....o......o......oo", "o........o.......o.o..o..o...o.....o.o............", ".......o......o....o.o.o......o...o............o..", "..o..oo...o.o..........o.oo....oo....o...........o", "........o..oooo......o.o....o..........o......o...", "............o.......oo....o.oo..o...........o.oo.o", "....o..o.........oo...ooo.o..................oo...", "...oo.....oo...............o..o......o........o..."};
    int K = 729686945;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1489523726750;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> field = {"..o..oo....oo.ooo.o....o............o.o..o...oo...", ".o......oo.....o.oo...............ooo...o..o......", ".o.......o....o.o...o.......oo..o.o.o....o........", "o..oo.............o..oo.o.........ooo..o..........", ".....o........o...o.........oo......o...o..o....o.", "o.....o..o.....o..oo...oo.o...........o.....o.....", ".....o..o...o....o.o...ooo...o...o..o...o...o.....", "o......o..........oooo.....o....oo.......o......o.", "....o.o..............o...o....oo..o..o.........oo.", ".o.o....o...........o...o.o.o.o.o...............oo", "..o..........o.......o......ooo...o.o..ooo.o.oo...", "..oo...................o....oo............o..o..oo", "........o.....o..o.....o.........oo..o....o.o.....", "......oo...o.......oo.o......o..o.........o...o..o", "....o......o.....o...o....o.....o...ooo..o.......o", ".oo.ooo.........o..o.o.oo...ooooo.o..o.......o....", ".oo......o.oo.......oo......o....o...........oo...", "...ooo......oo...oo...o....o.o....o.o.oooo........", "......o.o.oo..o...o.o.o.........oo................", ".o..oo.o..o..o.o.......o..o.o...oo...o......o.o.o.", "...oo.o...........oo......o.o....oo.o..o...o......", ".o.o.o........o...o...oo..o..o.....ooo.oo......o..", "...o.oo...o.o...............o......o...ooo...o...o", "o.o...o..........o......o.ooo..oo.o.......o......o", "o.o.....o....o..oo....o...o..ooo...o..o.oo........", "........ooo.o.o..o....o.......o...o....o....o.o...", ".o.o........o.................o....o.o........ooo.", "oo....o..........o.....o..o.ooo.........o.o..o..o.", "o.o.o.o.o.o......o..........o..o.o.o....o......o..", ".......o....o........o...o.o.........ooo.....o...o", "oo......o...o.....o.o...o......ooo.....o...oo..o..", "..........o.......o.o.........oo...o......o..oo...", ".oo....o....o.o...o...o....o..........o...........", "o......o..o...o..o...oo....oo...o.o....o...oo..o.o", "..o..oo.o.......o.....o.o...o.oo......o...o.......", "....o...o....o..oo....o.o..o.o.oo.....o....o.o...o", "..o.o...o.....o..o..o...o.........o..o..ooo.o.ooo.", ".o..o....oo.o.....o..oo.oo......o.......o.........", ".o..o.......oo......o..o..oo..o.oo..oooo..o.o.o..o", ".o..oo......o.oo......o.o.......o.oo...o.......oo.", ".......o.........o.oo.o.o....o.o.....oo.....o.....", ".......o...o...o..oo....o....o..oo..o......o......", "....o......oo.......ooo..o....o.o....o.o..o..o....", ".o...o...oo..o...............o.....o.....o....o...", "o..o..oo.........ooo..o...o......oo.o...o..o.o...o", ".....o..oo.o.o...o............o.ooo..o...o........", ".....o.o.o...........o...o.o.....o........oo......", ".oo..............o...........o.........o.....o...o", "o.o..............o.ooo..oo..o.....oo..o......oo...", ".oo....oo....o..................oo.oo....oo..oo..."};
    int K = 392209033;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6750221875;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> field = {"....o..............o...o..........oo.........o..o.", "o.......oo....o...............o.o..o......o.oo.o..", "...oo.o........o..o.o...o.......o...o...oo.oo.....", "..o.oo...o.......o...o....ooo......o.o....o.......", ".........oo..........ooooo...o..o......o....oo....", ".ooo.o.o.o.o...............o...ooo..o..ooo.......o", "o...o...oo....oo....oo.oo..o..o.oo..o..o.o.o.o....", "....o..o..o...o..oo...o.oo.o..o.........o..o..o...", "...o...oooo....oo.o.o.o...............ooo.o...o...", "...ooo....o.....oo..ooo..o.o..o.....o..o..oooo.o.o", ".oo.oo.......o.o.o.o.o....o......oo.oo.o..o....o..", "o.........oo..oo.o.o.o...........o......o....o....", "o.....o.o....o......o...o.....o.o.o..o......o.....", "..o.o.o..o....o...oo.oo.ooo......o.......o.oo..o..", ".oo.....oo......o...oo.o.....o..........oo.o.o.o..", "o.........o...o...oo.o.o..o........oo....o....o..o", "...o.o.o...o....o.................o..o...ooo..o.o.", ".o.o..................oooo....o........o....o.....", "...o....o....ooo.....oooo.o..o.....o..........ooo.", "...o..oooo................o..oo..o...o.o.....o.o..", ".......oo......o..o.....oo....o..oo......o......o.", "....ooo......o..oo...o.o.......oooo.o.....o.......", "..oo.......o..o..o....o.o...o...oo.o...ooo..oo...o", "...o..o..o......ooo..o.o.......o..o.....oo.oo....o", ".oo.....o.o.....o.....ooooo..o.o.oo....ooo...o....", "...o.o......oo..oooo.......oo...o.oooo.ooo......o.", ".o.oo.oo..o..oo.o.o.o...o.....o...o......ooo......", ".....oo..o.o....o...o....o.o...o...o.....o..o.....", "oo...o....oo...o.oo.o...o...o..o.....o...o.......o", ".......o...o...o...........o....o...o.oo.oo.......", "o..o......o.ooo....o....o.....o...o......o...o.oo.", "....o.o.o...o.o.o.o.ooo.o.....o.o..o.ooo.....o.ooo", "...o....o.o....ooo..o.......o.......o....o.o.....o", ".o...o.oo.....ooo...o.o...oo..o.oo.o...o..oo.....o", "o........o....o..o...oo..o......o.............o...", "ooo........o..oo....o...o....o.o.ooo......oo.o...o", ".oo...ooo....oo.o.o...............o..oo.oo....oo.o", "........o.o..o....o.o..o.o....o...o..o....oo..o...", "...o..oo..ooo.......o..oo.o.o..oo..o.....o........", "..o.oo.o.......oo..o..o....ooo.....o.o....o...ooo.", ".o....oo......oo....o.oooo..oo..o.o..o......o.o.o.", "......o.o.ooo..o.o.o.....oo.........o.....o....o..", ".ooo...oo......oo...oo..o..ooo.o....o.o...ooooo...", "....o.............o......o.ooo....o.oooo.o........", "o...o....oo..o...o.o..o...oo....o.o.......o.oo..oo", ".o......o.o....o.....o...o....o.o...oooo..........", ".......o...oo...oo...oo...oo.ooooo..o.......oo....", "..........o.o..o..o..o.oooo...o...o..oo..o.o....o.", "..o.o.o..oo............oo...o.oo..oo.o....oo....o.", "...........o...o..o.ooooo...............o.o...o..."};
    int K = 442765434;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 979059750;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> field = {"o.......o...oo.ooo..o......o.o...ooo...o.o......o.", "..o..o.o..o...o.o....oo.o..o....o.........o...o.oo", "....oo...o.ooo..oo..o..o.o...o.....o..o..........o", "...oo.........o.o......o.....o..oo......o..o..o...", "........oo....oo...oo...o.o.oo.........o..o......o", ".o.oo......o.o...o.......o..oo.o..o.o.o...o..o....", "..oo.......o.o...o..o..oooo..o.oo.......o..ooo.oo.", "....oo....o....o.o..oo......o..o.o...o.o...o.oo..o", "...o...o......o...o.o.ooo.oo....o.ooooo....o.o...o", ".o.....o.....oooo..o.o...o.o.o.....o.......o...o..", "o...........o......oooooo.o...oo....o...o.....o...", "oo.oo...oo.....oo....o.o.oo....o.......o.ooo.o..o.", "...o..ooo..o......o....o...oo.o.oooo.o.ooo.......o", "..o...o..o...o.o....o.o..o......oo..ooo....o.o....", ".....o.o.......ooo.oo..........ooo.oo....o.o..o.oo", "o..........o..oo.o..............o.o.....ooo.....oo", "..o....o.oo..o..ooo...o.o..o..o.o.oo...o.oo.o..oo.", ".o...ooo..oo...o..o..oo.o.......ooo....oo......oo.", "..oo........ooo.o.....o..o...o.o.o....o...o.......", "...oo...o..........o.o.o......o..o......o.o...oo..", ".o.oo.o.oo.o.o.o....o.......o.oo.o...o......o.o...", "...........o..o.o.......o..o.o.......o..oo.o...o..", "..o.o.oooo...oo....o.oooo..................oo....o", "..o..o........ooo.o..o.o.o...o.o..o............o..", "o.o....o.oooo.o..ooo...o....o..........o.o..o..o..", "...o......o..ooo......oo.....o..o....o..o.o.......", "..o.o.........ooo.....o..oo.o....o.o.o...oo..o....", "o.o......oo.o.o..o....oo.o.........o.oo.o....ooo..", "o.oooo.o..o.o.o.o.........o..o......oo.oooo..o.o..", ".o..o.oo.o.o...o.oo...o.ooo....o...o..o.o....oooo.", ".o......o..o.o....oo...o.......o...ooooo...oo.o...", "..o....oooo...o..........o..oo......o.o..o.o..o...", "o...oo.....o....oo.oo.....o..oo.ooo....o........o.", ".o......o.ooo.o.......o...oo.....ooo...o.....oo.oo", "o....o.o...o.....oo.o.ooo....ooo.o.....oo...oo.ooo", "....ooo...o..........o.oooo.ooo...o...o.o....oo..o", "..ooo......ooo....oo.o.o..o..o...o..o.oo..o.....o.", "...o..o.o..o...o........oo......oo.o....oo....oo.o", "o.oo......oo.o.o...oo..ooo...ooo..oo.......o....o.", "......o..oo......o..o.....oo.oo..o..o...o.oo.o.o.o", "...o..o..o.oo..o...o..........o.o.o...o........o..", "....o..o...o.oo..o..o...o..o..ooo.....o.....o.oo..", "o...o...oo.o......o..oo..o...oooo....o..o..oo...o.", ".....o.oo.o...o..o.o..o.o...o......o...o.oo......o", "o..oo.ooo......o....o..o.oo....oooo.o....o....ooo.", "..o.o.....o..o..oo....oo....o.o..........o.ooo...o", "..oo...o..o.o.oo......o......o...o...o......oo.ooo", ".o...o.o..o..oo..o....oo.....oo...o......o.o....o.", "..o..oo.o...o....oo..o....o.....oo.o.....oo...oooo", "....o.....o.o.oo..oo...o..........o.o.oo.o.....o.."};
    int K = 130822506;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 23536661126;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> field = {"oo.oo.o.....o.....oo.ooooo.oo...o..o.o.o..o......o", "..oo..o.o..oooooo..oo.o..oo.o...........o.....o.oo", "..........o...o.....o.o.....o..ooooo...o....o.oo.o", "o..oo......oo..o...o.o.o.o..o.......o.o..oo.o.o.oo", "o.............ooo.o.o...........oo......o...o.o.o.", "oo......ooooooo..ooooo.o....o..o.........o...o....", ".o..o.o.o...o..o........oo.oo.o...o.o....o........", "oo....o....oooo.oo...o....o.oooooooo.oo..o.o.o....", "o...oooooo..ooo.o..o...oooo.o....o.o..o.oo.....o..", ".oooo.o...o.......o...o..o.o..oo....oo..o......oo.", "oo...o..o.o.....oo......o..o.o..o.oo..o.o...o.o..o", "..........oo....o.o......oo.....o..oo.o.oo.o.....o", ".o.o.o..o.o.....o.o...o..oo.o.o.o..o......o.....oo", "o....o.o...o.oo.o.oo.o.oo..o..o..o..o..oooo.o.....", ".o.......oooo......o.o........o.oo.ooooooo.oo.o.o.", "......o..o.o.o.oo.o.oo..o..oo...o.oo..o.ooo...o..o", "oo.....o....o....ooooooo.o..oo....o.o.o.o...o..oo.", "..oo...oooo.o..oo.....oo..o....oo.....o..oo.o...oo", "...o.oo.o..oo....o..o....o..oo..oo.oo............o", "o....o..o.....oooo....oo...o..ooo.o.oooo.oo..o....", "ooo.o......o...o.oo.oo..o..o...ooo..o.o.o....oo.o.", "o.....oo......o........o..oooo.....o...o...o......", "....oo.oo.o.....o..o....o....o..oo..oo...o..o.....", "....ooo.oooo...o.o.....o...o..oo.ooo.o....oo.o.ooo", "....o......o.o.......oooo....oo.o..o.oo....o..o.o.", "...ooo...o..o.ooo.o......ooo.oooo......oo.oo.oo...", "ooo........o....o..o..o.o.o.........o.o..o..o...oo", "..o..ooo.o...o....oo.o.oo.o.o...........oo.o.oo.o.", ".oo.........oo.oo.....o.oo.....oo....oo.....o....o", "o.....oooooo...oo......oo.ooo....o..o.o..o......o.", "oo...........o.o.o.o.........oo.o...o..o......o...", ".o.....o.oo.o.oo.oo.o...o.o...o..o...oo.o.o...o.o.", ".....o...o......ooooo...o......o...ooo..o.oo.o....", "...o.o....oo..o......ooo...ooo........o...ooo...o.", "..oo.o..oooo.ooo.o...o...oo.o..o..oooo......oo.o..", "o..o...o..o...o....o...o.o....o.........o.......o.", "....o.o.ooo..o.........oo....o....o.oo..o......ooo", "......o.o.oo.....ooo....o......o.o....o....o.oo...", "...o.ooo.....o....o...o....o....o...oooo..o..o..oo", "o..o.o.o...o...o............o.....oooo.......o.o..", "o.oo.o...o........oo.oo.o.o.o.oooo.o.o.......oo...", "..o...........oo..o..o...o..o......o..o.o.ooo....o", ".o......o..ooo..oo.......o..o....o.....oo.o.ooooo.", "...o.o..o...o.o..ooo.o.........oo....oo...oo..o..o", "o.o.....oooo......o.oo.o...ooo.o....o..o..o..o...o", "....o......o..o.o...oo....o.oo.oo..ooo..oo.ooo..o.", "....oo..oo.oo..o..o.o...o.o..oo.o.o.ooo..ooo.....o", "...o.....o.o..ooo....ooo..o.oo....oo..o.ooo...o...", "..o...o.o....o.oo.o.....o.......o.oo.o.o.o........", ".o...o...oo.oo.o..o.o.oo....oo..oo..oo.o..oo......"};
    int K = 379769812;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 557237156250;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> field = {"o.....o..ooo..o...o.o.......o.........oo.ooo...oo.", "oo..oo.ooo..ooo.....oo.o.....oo.oo..oooooo..o.....", "......oo.oo...o.o...oo.oo..o.oo....o.oooo..o..o...", "o.oo..ooo..o..o.oo..oo.o....ooo...o...ooo.....o.o.", "o.o.......o..ooo.o..ooooo.o.........o.ooo..o..o.o.", ".oo.......o.o.o...o...o......o....o....o.o.o.....o", "o..o.ooooo..oo...oo.o...o.ooo..o.o.o..oooo..oooo..", "o.o.oo..ooo..oo......o.o.ooo.o.ooo...o.oooo.o.....", "..o...oo.....o.o....o...o..ooo...o......o....ooo.o", ".........o.o....oo...o....oo.o....o.....o..ooooooo", ".ooooo.o..o.oo.....oo..o.oo..oooo...o.ooo...o..ooo", ".ooo..o..o...oo.....oo.o.o..oo....oo.o.ooo...oooo.", "..o.oo....ooo.oo.ooo...o.o...o...oooo.ooo.ooo...oo", "oo..o....oooo..o..o....o...o....oo.o....oo.o.oo...", "o..o...o...o.oo...o....o..o.o.o..oo.o.o.o.ooooo.o.", "oo.oo.o.....ooo.o......o..o...oo....o..o...oo.ooo.", "..oo.o.o...oo....oo.o.ooo..oo.........o..oo.oo....", "ooo..oo......oo.o.oo.oo...o....o....o...o.........", "oo...oo...oo..oo......o.o..oo.o.o..o.....ooooo....", "..ooo.....oooo....oooo...o.o...ooo.ooo.o..o.......", ".o..o..o.oo..o...o....o.o...oo......ooo.o...oo.ooo", ".o...oo...oo.o.oo.o..oo.o.oo.oo.o.o.o.o...ooo..o.o", ".o..o.o.o.o..o.o....oo..o..oooo....oo....o.oo.o.o.", "...o.........o..o........o.oooo.......o....o..o...", ".o.oo.ooo....oo....o.oo.o.o.....ooo.oo.o.ooo.....o", ".......o.......ooo...oo.o..o...o.....o...o...o...o", "oo..o.o.o..........ooo.....o...o.o...o.......o.o.o", "..o..oo.oo.....oo..o...ooo..oo..oooo.oo...oooo....", "oo..oo.o...o...oo..o...o..oo.o.....o..o.o.o.oo..o.", "o..o....ooo.o...oo.....oo..oooo...o.o....oo..o.o.o", "oo.o.ooooo....o.ooooo....o....oo..o.oo..o..oo.oo..", "...ooo.o.o..oo..oooo..o..ooo....ooo...ooo.....o.o.", ".ooo......ooooo..o..o.o..oo..o.oo..oooo.oo.o....oo", ".....o..o..ooo.....o....oo.....oooo.o.o...o.......", "ooo...ooo.o.....o.oo....o..oo...oooo....ooo..ooo..", "...oo...o....o.oo..ooo..o..ooo...o.ooo.....oo..ooo", ".ooooo.o.o..o..oo.o.o....o...oo.o...o....ooo...ooo", "o.o.ooooo..o..o........o......ooo..o..o...o.oooo..", "o...o.oo.o...o..oooooooo.o...oo.o.oo..o..o.o..o.o.", "..oooo.ooooo.o.oo...o.o..o....oo.o....o.o.o.o.oo..", "oo....o...oo..........oo.o.o....o.o..o..o..o...o..", ".o....o..o..oo..o...o..o...o.ooo.ooo....oooo....oo", "..o..o...o.oo..o.o...o.o.o.o..oooo...oo.oo.....o..", "o....o....o.o....o.o..oo.o.ooo........o..o.......o", "oo.oo..o.......o.o.o..o.o.o..ooo..o.oo..o..oooo.o.", "o.oo.o...oooo.o..oo...oo...o...o.o...oo..o..o.oooo", ".o.ooo.......o..oo.oo..oooo.ooo..oo.oo.o.ooo..oooo", "o.o.ooo....o...o......o.o....o....oo..o......o.o..", "o..oo..o...o.oo..o...o.o.....oo.....o.o......o..o.", "o....o...o..o...oo...o.o.ooo.oooo...o..o.o......o."};
    int K = 989276141;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 68743538033450;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> field = {"ooo..oo...ooo..ooo.oo.oo.ooo.oooo.o...oo.o.oo...o.", "oooo.o..o...oo.oooooo..ooooooo..oooo..o.o..oo..ooo", "....o.oooo.ooo.o.....oo.....o...o..ooooo.o.oo.oooo", "o...ooo.....o..o.oo.oo.ooooo.o..o...o.o..oo.oo.o.o", "ooo...o....ooo.o.oo.o.ooo...oo.oo.o...o.o...o.oo..", "...o..oo.o.o.ooooo..o.......o.o.oo..o.o.o..o.ooo..", ".oo..o.o.ooo.o.oo.oo...o..o.o...o....o.o..........", "....o..ooo.oo..o.o.o..oo...ooo...o.o.ooooo........", "......o.ooo.o.o........o....oo.......oo.o.o..oooo.", ".o.oo..o..oo.oo..o.ooooo...ooo.o.ooooo..o.oo.ooo..", "o.oo...oo.oo.oooo.................ooo.oo.o..oooo..", "o.ooo..oo.o..oo..o..ooo.oo..o.o..o.oooo.o.oo....oo", "ooo..o.o..o.oooo......o....oo...oo.o...oo.....oo.o", "ooo.ooo....oo...o..o.o.ooo.o..oo..oo.....ooo.oooo.", "o.oo.......oooo.o.oo..oooo.oo..oo...o..o.o.oo....o", ".o..o.o.o..oooo..oo..ooo.....oooo...ooo...o...oooo", "...o...o.ooo.o.o.oo..o.....o..oo..ooo.o.ooo.oo....", "o.ooo.ooo.oo.o..oo..o..o.o.o....o.o.oo.o.o.ooo.oo.", "o...o.o.o.o.ooooo.o.o.o.oo....ooooo..o.oo....oo.o.", "o...o......ooo........oo..o.oo..o...o.ooo....o....", "o.......o....o............o.o..o..o.ooo.o.o....o..", "...oo......o..ooo.o.oooo.oo.......oooo.ooo.o.o...o", "o..o....ooo......o....o.o.ooooo.......ooo.oo.o...o", "o.oo.o.oo..o...ooo...o.o.o..o.o..o.oooooooo..o..o.", "...o.......o.o.oooo.....o.o.ooo..oo.o.o....ooo.ooo", "..oo.o.ooo......o...o.o.o..o..o.ooooo...o......o..", "o.oo.o..oo..oooo...o..o.o...o..oooooo...oo.ooooooo", "..o..o..ooo.ooo.o.oo...o...ooo.ooo.....oooooooo..o", "..o.ooo.ooo...o.o...o.o.o....o.o.oo.o..o......oooo", "...o..ooo....o...oo..o.o.o..oo.......o..o..o.o.o.o", "ooo..oooo.oo.o...o.o...oo.ooo.oo..oooo.o..o...oooo", "o......o..o..o.......o..o.o..o...o......o..o.oo.oo", "....ooo.o.oo..o..o..oooo.oo..o..o.oo....oo.......o", "..oo.....oo..o.o.ooo..o.ooooo.ooo.o.ooo.o....o..oo", "..o.o..o...o.oo..o..oo..o...ooo...o..oo..ooo.ooo..", "....o..o.o.ooo.....oo.o..o..o..o..o.oo....o.ooooo.", "...oo.o...ooo..oo..ooo.o...oo...o....oo..ooo..o.o.", ".oooo..o.oo.oo.o...oo..o...o.....o..oo.o...o..oo.o", "o.ooooo.o.o..o.oo..o..o..o...o...o..oo.o...o..oo..", "o......ooo..oo...o.....o....o..o..oo..oo....oooooo", ".o.o.o.o....oo..ooo..o...o.o...o.o...oo..oo.o.....", "o..........o..o.o...o....oooo..o........oo...o.o.o", "..oo.o..o..oooo.oooo....oo.o.oo..o..o.o..o.oo...o.", ".o.o...o.oo..oo.oooooo.oo..oooo...ooooo....oo.oo..", "oo.o....o.o.oo.o...o.o.o...o.o..ooooo.ooo.o...oo.o", "oo.o.o.......oo....oo.o..o..ooo..ooo..o.o.ooo.o.oo", "..ooooooo.o...o...oo.ooooo...oo.....o..o..o..ooo.o", "..o....o.o...ooo.ooo.oo...o.o..ooo.o...o.o....o.o.", "o..o..o.o.oo...o..o...o..o..o....o...o.....oo.....", "..o.o..ooooo.o.o..oo..o.oo.....oo.oo...ooo.....o.."};
    int K = 69499437;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 997657500;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> field = {".ooo..o...o..o.oo...oo.oo....o.ooooo.ooooo........", "..oo...o..o.o.ooo....oo...ooo..ooooo..o.oo..o....o", "..o..o...ooo..ooo.ooo.ooo.o.o..o.o.ooooo.o..ooo.oo", "oo.o.o.oo..oooo..oo..o..ooo.oooo.oo.o.oooo....o.oo", "o....oo..o.o.o...o.o.ooo.o..oooo...o..o.oooo..oo.o", ".oooooo.oo.o.oooo....o.o.ooo.oo.oooo....oo.o..o.o.", "o.o.o...o...oo.o..oo.o..oooo...oo.oo.ooo.ooooo.ooo", ".oo..ooo.o.o.ooo...o...oo....ooo.o.o.oo..o.o.oooo.", "..o.o.o...o.o.o.oo.oo.o.oo.oo.o.oooo.ooooooooo..o.", ".o.o.o.....o.o..o..oo..o..o.o..oo..o.o.....o..o.o.", ".ooo.ooooo.o.ooo..oo.oo..o....o.o....o.oooo..ooooo", "..o.o.o..ooo...o.....o.o......oo.ooooo.o.o..o.o.o.", "o..oo..o..ooo.o.ooo.ooo....o..ooo.o...o..o..o.o..o", "..oo...oo.ooo.o.o...oooo..o..o.o.o.o.o...ooo..o...", ".oo..o.o.o...oo.o.o.oooo.oo...o.....o.....o.oooo..", "........ooo...oo...oo....o.o..o.o....ooo.oooo..oo.", ".oo.ooooo.oo.o.o.o...oooo..o..o.o.o..oo.o...ooo...", "ooo.o.oo.o.o.o.oooo..o...oo..o.o.oo.oo.....ooo...o", "o...o.o.....oooo....o..o..ooo........ooo.o.oo.....", "...o......o..o.oo..o....ooooo.....oo.oo.o..oo..ooo", "....o.........ooo....o.o.o..o..o.o.oo.ooo..oooo..o", "ooo....o.ooo...oooooo....oo......oo..oo...oo.o..oo", "oo.....o.o.oooo.o.o....ooo.ooooo...o...o.ooo...o..", "..ooo..o.o.oo.oo.ooooooo...oo....o....o.oooooo...o", "..oooooo.o.o.oo.o.o.oooo....ooo....oo.o...o..oo.oo", "........oo.....o.o....ooo....o.o.o.ooo.oo.ooo.....", "o..oo.o.oooooo...oooo.ooo.ooo.oooo.....o.o....o...", "..o.o..ooo..oooo..o..ooo...o.o.o...o..oo...oo.....", "..o..o..ooo...oo..o.....ooo.ooo..oo.o.oo.oo....ooo", "...o.oo..o..oooooo..ooo..o.oo.oo...o.o.o......oo..", "oo....o..o.....o..oo.o.oo.o..oooooooo.ooooooo....o", "oo...o..o..oooo...ooooo.oooo..oo...oo..o.o.ooo.oo.", "o..ooo...ooo....ooo...o......o.oo..o.....o.o.o.o..", ".o....ooooooo.o...ooo.ooo..o..o.ooo.ooo.oo..ooo.oo", "oo..oo.o.ooo.oo...oo..oooo.....o...ooo....oo.oo.oo", "o...ooo..o..o.o..o......ooo...o.oooo.o..o.oo..ooo.", "oo.oo.oo...oo..oo.o..oo....oo.o...oooo..o.oo..o.o.", "oooo..o..o....o.o..o.ooo.o..o.ooo.o.....o.....o..o", "o.oo.oo.oo......ooo...oo.o.ooo.ooooo.o.o.ooo.oo.oo", "oo.o.o.o..oo...oo.o.ooo.oooooooooo.oo.ooo.o....o..", "oooo..ooooo....o.o.o..o..ooooooo..o...ooo.o..oooo.", ".....oo..o.o...ooo..o..o.oooo.o.o.o.o.oo...ooo.o..", "....o.o.o.o.o.o.oooooooo.....o...o.o.o.oo....ooo.o", "o..oo.oo.o..oo.o.oo....ooo.oo.oo...oo.oo...oooo..o", "..o..o.ooo.o..o...o.ooo..o.oo..o.o.ooo.....oo.oo..", ".ooo.....ooo..o...ooooo.o..oo..o.oo.oo...ooo..o..o", "oo.ooo.oo.......ooo.o.oo.o..ooooooo......o.ooooo.o", ".ooooo..ooo..o.oo.ooooo.o..o.o..ooo...o.o...o.oooo", ".ooo..ooo.o...o..o.o.o.oo.o...oo.ooo.o...o.oo.o..o", "..ooo.o.o..o..oo.o.oooo.o....oooo...oooo.o...oo.o."};
    int K = 24241624;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 65158801575;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> field = {"o..oo..oooo...o.ooo..ooo...o..o..o.o.ooooo.o.o.ooo", "oo......oooo...oooo..o..ooo.o..ooooo..oo..o.oo.o.o", ".o..o.oo...oo..oo..oo...o.o...oooo..oooo...ooo.o.o", "oo....o...o..oooooooooooo.o...ooo..oo.oo.....o.ooo", "oooo.oooo...o...oo......oooo.ooo...o.o....oo.o.o.o", ".oo...o..oo.o.oooo.ooo...o.o..ooo...ooo..oo.oo..oo", "oo....o.oo..o.oo..ooo.o..o...ooo.o.o.ooo.o.....oo.", ".ooo.o.o..oooo.ooooo..ooooo..ooooo....oo..ooooo.oo", ".o.oooo..ooo..ooo.ooo.o..o.oo.....oo.o.o.oo.....oo", "o...ooo.o.ooo...o.ooooooo..oo.oooo.ooo.o.oo.o..o..", "....o.o.o..oooo.o..oo.oo..o.o.oooo....o...o..o.o..", ".oo.o....o.oo.o..oooo..o.o.o.o....oooooo.oo..oo..o", "o..o..o..oo.ooooo.ooo.o.oo.oo.oo.o....o..o.oo.oooo", "ooooooo....oooo.....o....o.ooo...o.o.oo..o.o.o...o", "..oo.oo.ooooo.....oo..ooo...o.o....ooo.o...o.ooo..", "o...ooooo.oooo.oo.oooooo..ooo.o.....o.oo..o.o....o", "..oo..oooooo.oo.o.o.ooo.oooooo...oooo..o.oo....o..", "o..oo...ooo...o..o.o.oo....o......ooooo.oo..ooo.o.", "oo....o.o.....oo.o.o...o....o......o..o..o..o..o.o", "...ooo.oo.o.ooo.o..ooooooo..o..oo.ooo...o...oo.oo.", "..oooo.o.o.oo..o.oo.oooo...o.....oo...ooo....o....", "o...o.oo.o..o.o.oo.o..oo.......o.o......ooo.oo.oo.", "oo..o.oo.o...oooo.ooo.o....ooo..o...o.ooo...o.oo.o", "oooo.o..o.ooo.o.oo...o..o.o.oo...ooo..o...o.....o.", "ooo.oo.oo.ooo.oo..oo.oo.o.oooo.ooo.ooo.ooo.o.o.ooo", "o.oo.o.oo..o.ooo.o..oo..oooo.o...oo.o.o.ooo.o...o.", "ooo...o.o..oo..ooo..o..oo...ooooo.oo.oo.oo.o.oo...", ".o..oooo....ooo.o.ooo....ooo.o.ooo..oo.oo....ooo.o", ".oo...ooo.....o.oo..o...ooo.oo..ooooo.o...o.o.o..o", "ooo..oo..o..o...ooooooooooooooo..o.ooooo..oooo.ooo", ".oo.ooooo.....o..oooo..o..o.oo...o.o...o.o.......o", "o..oo....ooo.o.oo..ooo.o.o...o..o.o...ooooooo.....", ".o.ooo.o.o..oo.ooo.o.ooo..o...o..ooo......ooo.o.oo", ".oo.o.oo.oo.ooooooooo..oo.oooooo.oo....oo.ooo...o.", "..oo.o...o..oo.o..o.ooo.o.oooo.o..ooo.o.o.o.ooo.o.", "..oooo.ooo..o....ooo.oo..oo.ooo....o.o.o.oo.ooo..o", "o.o..o.ooo..oo.oo.oooo.o........o....ooo.o.oooo.oo", "ooo..oo.o.oooo.o..oooooo..o...oo.o...oooo.o....o..", "o.o..ooooooo..ooo.o.o.o.ooo.ooo...oo....o.oo.ooooo", ".o..o.oooooo..o.oo.o.oo.oooo.o.o..oo.o.o..o.o.oo..", "o.o.ooo...ooo..oo.o..o..ooo..o.o.oooo.oooo..o...o.", "..oo.o.oo.o..o.oo.ooo...oo..o.o...oooooo..oo...o..", "o.o.ooooo.oooo.oo..oo.o..o.o.oooooo..o.o.oo.oooo.o", "oooo....o.o.oooo..ooo...oo..o..ooo.o.oooo.o.....oo", "o.ooo.oooooooo..o.oo.o.ooo..oo...ooo.o.o......o...", "ooo...o.ooooo.o....ooo.o.o..ooooooooo..o.oo.o.oo.o", "oo.oo..o...o..o.oo.oo...ooo.o..oo.o.o..o..oo.o.oo.", "..o..ooo.ooo.ooo.oo...oo.oo.o.ooo.oo.ooooooo.o....", "oo...ooooooo.o...oooo.o.ooooo..o.ooo.o.o...o.o.oo.", "ooo..oo.o..o.ooo....oooo......ooo.oo..oo....o...o."};
    int K = 18039791;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2043060000;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> field = {"oo..o..ooo.ooo.o..oooo..oooo...o..o.ooo.o..oooooo.", "...o..oooo..o...oo.oooooo.o..o..oooo..ooooooo.ooo.", "oo..oo.o..oo.oo.o....o..ooooooo.......o..oo.oo.o..", "oooo.ooo..ooooooooo.ooo.o..oooo..oo..o..o.ooo.oo..", ".o...oo.o..ooo.o.oooooo.oo.o.ooo.ooo.o.oo.ooo..ooo", ".o..o.oo...o.oo.o..oo.....o.ooo.oo..o.ooooo.o.o...", "...oo.ooo...oo....o..ooo...ooo.oooo.oo.oooo.oooooo", "...ooo..o..oo..oooo...ooo.o.oo.oo.o.ooooo.o.oooooo", "oo..oo.oo.o.o.ooo..o.oooo.oo..o.o.oo..o.oo.oo...oo", ".ooooo.o.oooo.oooooo.oo..o.o.ooooo.....oo.o...oo.o", "oo..o.o..o.oo..ooo....o..o...o.oooo.o..oo.ooo..oo.", "....o.ooo.o..o..ooo.ooo.oo.oo...o.o.ooo..oo.oo..oo", "o..o..ooooo...o.o.ooo.oo.o....o.oo..oo.ooo.oo.ooo.", "...ooo.ooooo...ooooo..oo.ooooooo.ooo....ooo.ooooo.", "..oo.o..o..o..o....o..o.ooooooooo.o...o..o.oo..oo.", ".o.....o...ooooooo..ooooo..o.oo...ooooo.o.o.o.oooo", "ooo.o..oooo.oo.o.o.oooooo...o..ooo.ooo.oo.o..o.oo.", "o.ooo....oo....o.o.oo....oo...o..o..o..oo.oooooo..", "ooo.oooooo.ooooooo.ooo.ooooo.o.o..o.ooo.ooooo..o.o", "ooo..o.o......oooooooooo.o.o..oo.oo.o..o...oo..o.o", "o..o..o.ooo.o.ooo..ooo.o.....o.o.o.o.o.oooo..o...o", "......oo.oooooo.o.oo.o.ooo.oooo.oo.o.o.o..o...o.oo", "..ooo.o.o....o...o.o....oo.ooooooo.....o..oo.oooo.", "ooo..o..oooo...oo.o..o.oo.o....oo.o.oo...ooo.oo.oo", ".o.oooo...o.ooo...o.o....o..ooo.oo.ooo...ooo.o.o.o", ".ooo..o.oooooo.oo.o..o.oo..o..ooo.o.oo.oo.o.o.oooo", "..ooooo.o.ooo.ooo.oo.o.o.o..ooo..oo.o.ooo.o...oooo", "oo.o.o..oooo.o.o..o..o.oo.ooooo.ooooo..o.o....oooo", "oooooo...ooo.oooo.o.ooo.oo...oo.o.oooooo.ooo.o....", "oooo.oo..o...ooo.oo.oo..ooo.......oo...o.ooooo.o..", "o....o....oooo.o...ooooo.oo..oooo.o.oooo...oo...oo", "oo..o.oooo.ooo..oo.ooooo.o.oo.o..oo.o.ooo...ooo...", ".o..ooooo..oooooo.......o.oooo.oo.oo..oo.oo.oooooo", "o..ooooo..ooo..ooooooooo.o.oooooo.o..ooooo...o.oo.", "o.o.oo.oo.o..o.oooooooo.o...ooo.o...ooooo.oooooo.o", "..oooo....o..oo..oooo..oo.o..o.oooooo..o.oooo.oo.o", "..oo.o..oooo.oo..o.o.o.ooooo...oo.oooo.o.ooooooo..", "ooo..oo.ooo.o..o..o..ooooooo.o.ooo.o...o.oo.ooo...", "o...oooooo.oo.ooooooo.oo.oooooooo..o.oooo.o..ooooo", ".oo.oo.ooo.o.ooo..oo..ooooo.oo.ooo.o...o.oo..ooo.o", "ooo....oo.o..ooo.oo.oo.oo..oo..ooo..o.oooo.o..o...", "...oo.oo.ooooo.oooo.o.ooo.o.ooo.o.oooo.oo..o.oooo.", "oooooo.o.o.oooo.oooo.o.o.ooo..oo.o.o..o..oo..o...o", "o.oo.o.ooo..o.o...o...oo.o.oo.oo.ooooo.ooooo...o.o", ".o.ooo.ooo.ooo..oo.o..o..ooo.o.ooo....ooo.oo.oooo.", "...o.o.oo.oooooooo.oo.o.o....o...o..o..oo.o..o..o.", "oo...o..ooooo...oo.ooo.o.ooo.o..o..oooooo.ooooo...", "o.o.o.o.o.o..o.....o...o.o.oo...oo.o..oooo.oo...oo", "o.oooo.ooooo.oooo..o...ooooo..o.oo..oooooooo.o.o.o", ".oo..o....oo...ooo.o..oo.o.oooooo.o.......oooooo.."};
    int K = 28556804;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 22907351777;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> field = {"o.oo..ooo...o.o.oo..o..o...ooo.ooooooo.o.oo.o..o..", "o.o....o....o.oo.oo.ooooooooooooo..oo...o.oo..o..o", "oo.....ooo.ooo..o.....oooooooo.oooooo.o.ooooooooo.", "oooooo.oo.ooooo.ooooo..o...o.oo..oo.o.ooooooo....o", "o..o...o.o..oo.o.oo..oooo.o..ooo.o..o..ooo..oo.o.o", "ooooo.oo....oo...oo..oooo..o.o..oooo....ooo.oo...o", "o..oooo.ooooooooo.o..o.oooooo.oo.o.oo..ooo..oo.oo.", "oo.oooooooooo.ooooo...o.ooo..oo...o.oo..o....oo.o.", "o.oo..o..ooo.o..ooo...oo.oooooo.o...o...o..ooo...o", "o.oo.o.oo.o..ooo..ooo.o..oo.o....o......o.o...o.oo", "o..oo...ooo.ooooo.o.o..ooooooo..oo.oo..o.oooo.ooo.", "oo.oo..ooo.oooo.o.oo.o.ooo.oo.oooo.ooo.o..oo.o.oo.", ".o..ooo.o..oooo.ooo.oooo.ooo.....o.ooo.oo.oo.oo.o.", "......oo..oooo..ooo.o.ooo...oo..oooooo....ooo.oooo", ".ooooo..oooooooooo.oo.o.o..ooo..oooo...ooooooooo..", "..o..o.o.oo..o..oo..ooooooooo..ooo.oo..o.o...ooo.o", "oo..ooooo..ooo...o.oo.oooooooo..oooooo.oooo..ooo..", "o.oo.o.ooooooo..oooooooo..o.o.o.oo..o...o.o.o..ooo", "ooo.o.o.oo.o...ooooo.ooo..oo.ooooooooo.o...ooo.o.o", ".oo..oo.oo...oo...o.oo.oo....o..ooo..ooo..ooooo.oo", "..oo.ooooo.ooo.oooooo....oo..ooo.o..oooooo..o.o.o.", "o..ooooo..o.ooo..o.oo.o.oo.oo.o.ooo.ooo.oo.oo.o.o.", "ooo.o.oo.ooo..o......oo.oo.o..o..ooo..ooooo.ooo..o", "oo..oooo.o.ooo..ooooo...o..o.ooo.oooo..oooooo.o.oo", ".oo.o..oo..oo.oooooo.ooooo..oo...oooo.oo.o.o.ooo..", ".oooooo.....oo.oo..o..ooo.ooooooo...oooo.o.oooo.oo", "o.ooo...oo..oooo....oo...o.o.ooo.ooooooo.o.o...o..", "ooooo..o..oo..ooo.o.oo.o..o.oo..ooo.oo.o.oooooo.o.", "oo.ooo.oo.ooo....o.o.o.oooooo.ooo.oo..oo.oooooo.oo", "oooo..oooooooooo...o.ooooooo.oo.o..o.ooo..ooo.ooo.", "..ooo.o....oo..o..oooo.o.o.oo...oooo.o...ooooo.o.o", ".o.o.o.oo...o..ooooo.o..o.o.ooo.oo..oo.o.o..oo.o..", ".o.ooo.o..o.o.oooooooo...o.o...o.oo..oo.oo.o.ooo.o", "oo.o.ooo..oo.ooo...ooo.oo..ooo.o.o..o.ooo.oooo....", "o.oo.o.oo.o.o..oo.ooooo.ooo.o.o..oo.oooooooo.o.oo.", "oo.oo.o.oo.oooooooo.oo..ooooooo..ooo.oooooooo..o.o", ".o.....ooo.o.o.ooo.oooo..o.oooo...oo.ooo.ooooooo..", ".oooo.o..o.oo.ooo.ooo.oo.o.o..ooo.oo..oo......oooo", ".o.o.o..oooo.o.ooooo....oo....o.o..o.o.ooooooooo.o", "..oo.oooo.o.ooo...oo..o..ooo.ooo.oo.o.o.ooo.ooooo.", "ooo.ooooooo.o..o.o......oooooo.oooo.oooooooo..oooo", "ooo..oo.ooo.oo..ooooooo..o.....o.oooooo.o..oo.o...", ".ooo...o.o.oo.ooooooo..o...o.o...ooo..oooooooooooo", "o.oooooo..oo.oo...oo.ooooooo..ooo.ooo..oo.ooooo...", "o.oo.oo.oo....oo.oooo.o...oooooo.o.ooo..ooooooo.oo", "..ooo..o.ooo.ooooo.oo.ooooo.ooo..ooo.o.ooo...oo.oo", ".oo.ooo..oooooo.ooo.ooo.o.ooooo.ooo..o..ooooo.o.oo", "o.ooooo...o.o.o.oo.o.ooo.oooo.....ooo..oo..oo.oooo", "oooo.oo.oooooooooooo.oo.ooo..o.o..o...o...oo.ooooo", "ooooooo.ooo.ooooo.ooo...oo..oooo...o.o.o..ooooo..o"};
    int K = 160893361;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 16545853500;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> field = {".o..ooo.ooo.oo.ooo.o..o..o.ooo.ooo..ooo.o.oooooooo", ".o...oo.o.ooo.oooo...oooo..o.ooo.oo.oooooooo....o.", "o.o.oooo.....ooooooooo.oooooooo.oooooo.oooo..o..o.", ".oooo.o.oooo.o.o.o.o.oo.ooo.o...ooo.ooo..ooooooooo", ".ooo....oo.oooo.o.o.oooo.oooo.oooo..oo.ooo.o..oo.o", ".oo.oo...o...o.ooo.ooo.o..oooo..o....ooooo.o..oooo", "..oo.ooo...oo..ooo.ooooo.ooo..o.oooooo..oo.oo.ooo.", "ooooo.ooo.ooooo.ooooooo.ooo.ooooo.oo..o..oooo...oo", "ooooooooo.o.oo..o.oo.oo.o.o.oo.oooooooo.oo...ooooo", ".o.oo.o..ooo.ooooooo.o....oo.o...o.oo.ooo.ooooo..o", "o..o.o.oo.ooo.oo.ooooo......oooo.o..o.o.ooooo..oo.", "oooo..oo.....oo.o.o.o...oo..o.....oo.oooo..ooooo..", "o.ooo.o.o.....ooooooooooo.oooo..oooo.ooo.o.oooo.oo", ".o..oo.ooooooo..ooo..ooo..oooo.ooooo...ooo..oooooo", "o.ooo.ooooo.ooo.ooooooooo.oooo.oo.....ooooo.ooo.o.", ".o.oooo.o.o.o.ooooo..oo.oo.o....ooooooo...oo..o...", "ooo.o.oo...oo.o.ooo..oooo..o...oo.oooooooo.oooooo.", ".oooooooooo.ooo..o.oo.ooooo.oo.ooo..o.oooooooo.o.o", "ooooo..oo.oo.ooooo.oo.o.ooooo.ooooooooo.oooo.o..o.", "oo.oo..o.o....ooooo.ooo....ooo.o...ooo...oooo..ooo", ".ooo.ooooooooooo.o.o.oooo.oooooo...o..o.oooo...oo.", "ooooooo.o.oo..o..o.o.o.o.oo.ooo.oooo.ooo.o..ooo.o.", ".o..o.oo.oooo.o.o..o.oo.oo.......oo...oooooo.o.o.o", "o.oooo.o...oo...o.o.o.ooo...o.o.ooo.o....o.oooo.oo", "o.oooooo...o..oo.o.oo.....ooooo..oooooooo.o.oooooo", "o.o...o.ooo.oo..o..o.oooooooooo.oo...oo.oo.o.ooooo", "oooo.o.oooo....o.oooo..ooo..oo.oooo.o.o.o...ooo..o", "...oooo..o...o.oo..oo.ooooooooooo.ooo..oo..o.ooooo", "....oo.oo.ooooo.o.oo..ooo...ooooooooo.ooo..ooo....", "..oooooooo..ooooo.ooooo.o..o..oo..o.o..oo...o...o.", ".ooooooo.o.o.o..oo.ooo.ooooooooo.oo.ooo...ooooo...", "oooo.o...o.o...ooooooo.oo.o.o..oooo.ooooo.oooooooo", "ooo.ooo.o.o..o..oo.oooo.oo....oo.oo..oooo..o...o.o", "oooooooo.o....oooooooo.ooo..oooo.oooo.ooooo.o.ooo.", "ooo.oo.oo..oooooo.o..oo..o.oooo.o..ooo.oo..oo.o.oo", "oo.oooo..o.o...o..ooooo.oo.ooooo.oooooo.o.o.oo.oo.", ".oooo.o.ooo.o.o.o.o.oo.ooooo..ooooooo.o...o..oooo.", "oooooo.oo..ooooo.oo.oooooo.oooooooooooooooo.o..oo.", "oooo...o.o.o.ooooo..oooooooo.ooooo......ooooo..ooo", "..ooooooooooo.ooo..oo.oooo..oo.ooooooo.oooo.oooo.o", "oooooo.oo.o..ooooo.oo.oooo..ooooo..o.ooooo.ooo.o.o", "ooo..oo.o.oo.oooo.ooo..oooo..ooo..oooo..o.o.ooo.oo", "oo..o.ooooooooo.oooooo.o..ooooo.ooo.o.oooo...ooooo", "ooooo.oooooooo.oooo...o...oooo....ooo...oo.oo.ooo.", "ooooo.o.ooo.ooo.o.o.ooooo..ooooo.o...o..oo.o.ooo.o", ".o.o.oooo..oo.o.o.o....o.ooo.oo.ooooooo.....oo.o.o", "o.o...oooooo.o.oo..oooo..oo...o..o.ooooo.o.ooooooo", "ooooooooo..o...o.oooooooo.o.oooo..oo...oo.oo.o.o.o", "oo.oo.ooooooo.oo....ooo.o.ooooooo.o.oo.oooo...oo.o", "o.ooooooo.oo.ooo..oo.o..ooooooo.ooooooo.ooo...o.oo"};
    int K = 645638969;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4710616442875;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> field = {"oooo....ooo.o...o..ooooo..o.ooo.o.o.o.o.o.oooo.oo.", "o..oo.o..o...oooooo.oooooooooo.....o.oooooooooo.oo", "o..o....o.o.oooo.o.ooo..oo...oo.ooo.oo.o.oooo.oooo", "o.ooooo...oooo.oo..o.oo.oooooo.ooo.ooooo..oo.ooo.o", ".oooo.oo..ooooo..ooo.o....ooooo..o.o.o..oo.o.oo.oo", "o...o..ooo...oo.ooo.oo..ooooo.o.o..ooo..oo.ooooooo", ".oo..ooo.oooooo.o.o.ooo.oo.o.ooooo.ooooo.oooo..ooo", "oo..ooo.o.ooooooo...ooooooooooooo..ooo.oo.o.o.oo..", "..o.o.o.o.ooooo..oo.o.o..ooo.o.oo.ooooooo.oooo..oo", ".ooo...ooo..ooo..oooooooo.oooo..o...oo.oooo.o.o..o", ".oo.oooooo.oooo.o.oo..o.ooo.oooooo.oo.oooo.o.oo.oo", "oooooooooo.o.oooooo..o.oo.ooo..oooo.oooo.oooo.o.oo", ".oooooooooo...o..oooo..oooooooooooooo....oooooooo.", ".ooooo.o.ooo.oooooo.ooo..oooooo.o..oo.oo...o.o.o.o", "o.o.o.ooo..oooooo....o..ooooooo....ooo.oooo.oo.ooo", ".o..ooo..ooooooo....o.oooo..o..ooooo.o.ooooo...ooo", "oooooooo..ooo.o.oo..oo.oo...o.o.ooo.o..oooo.oooooo", "ooooo.oo....ooooo.ooo..oooo..oo.....oo.o.o.ooooo.o", "ooo.o.ooo.oooo.ooo.ooooo.ooooooo..o..oo.oooo.ooo..", "..o.o..oo.ooo.ooo...oooooo.oooooo.o.oooooo.o.oo..o", "o..o...o.ooo.o..o....oooooooooo..ooo.ooooooooooooo", "o.oo.oooo.o.o.o.ooooo...o..o.o.o.ooooo.o.oo.oo..oo", "oo..oo...oo.ooo....oooooooooo.ooooo.o..oooo.oooooo", "oooooooo.ooooo.oooo...o..oo.ooooo.o.o.ooo..o.o.oo.", "ooooo..ooo.o.ooo.o.oooo..ooo.oooo.o.o.ooooo.ooo..o", "oooooo..oooooooo.o...oooooooooooo.oo.oo.oo.o.o.oo.", "o..oo..oooo.o.oooooooo.oooooo.oooooo.o.oo..o......", "ooooooooo.oo..o...oo.ooo.o.o..oo....oo.o..oo..oooo", ".oo.ooooo.o.ooo..oo.oo..ooo.o.ooooooo.oo.oooo.ooo.", ".o....oo.o.o...ooo.ooo..o.o.oo.oo..ooooo.ooo.ooooo", "oo.ooooo.oooooooooooo.o..o.oooooooo..o.oooo.o...oo", "o.oo..ooo..oooo.o.oo.o..ooo.o...oo.oooooo...oooooo", "o.ooooooo.oooooo.o.ooo.oooo.ooooo.o.oo..o.o.oooooo", "oooo...ooo.ooooo.o..ooo.oo.oooooo..o.ooooo.oo....o", "o.ooooo.oooooooo..oo..oo.oo..ooo.o.o.oooooooo.oooo", "oo...o...o..ooooo...oo.o.oo.ooo.oo.oo.o.ooo.o...o.", ".ooo.ooo.oo.oo.o.o.ooo.o.oooooo..oooooo.o..oooo.oo", ".o.o.oo.oo.oooo..o..oo.ooooo.oo...o.oooooo.o.oo.oo", "oo.o..ooooooo.ooo.o.ooooo.ooo.o..ooo..oooooooooo..", "..ooo.oooooooooooo.oo.oo..ooo.oo...o.oooo..oo.o.oo", "..oooo.oooo...ooooooooo.oooooo.oooo...oo.oooo.oooo", "o..ooooo.o.ooo.ooooo.ooo...o..oo.oooo.oooo.ooooo..", ".oo.o.oooooo..ooooo.oooo.oo.o.oooo..o..ooooo.o.oo.", "oo.ooo.o.oooo.ooooooo.o..o..o.ooo.oo.oo.oo.ooo.ooo", "ooooooo.ooooooooooooooooo.o.ooooooo..ooooooo.o.ooo", "ooooooooo.o....o...ooo..o.o.o.o.oo..o..o.o.o.o.o.o", ".oo.oooo.oooo.ooo.o.oo.o.ooooooo..o.oooooo.o.o..oo", "o..ooo..o.ooo..oooooooooo.o.ooo..ooo.oooo..ooooo..", "oooo.oooo..oooooooo...ooo.ooo.ooo.o.ooo...o.o....o", "oooo.o..ooooooooo.ooooo.ooooooooo..oooooo..o.oooo."};
    int K = 13811564;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 132331837750;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> field = {"..oo.ooo.o.oooo.o.ooooooooooooooo..o.oooooo.o.oooo", "o.oo...ooooo.oo.o.o..ooo.o.oooooooo.ooooo..oo.oo..", ".oooooo.o.ooo.o.oo.ooo.oo.ooooooo..o.o.oo.oooooooo", ".oo..oooooo.oooooo.o.oooo.oooo.oo.oooo.o..oo.ooo.o", "o.ooooo..oooo..ooo..oooooo...oo.ooo.o.oooooo.o.ooo", "o.ooooo.ooooooo.ooooooooooo.o...oo.oooooo..ooooooo", "o..oooo.o.oooooo..o.oo.ooooooooooooo.o.ooooooooooo", "oo.ooo.oooooo.o..ooo...oo..oo.ooo.o.oo.oooooooo...", "ooooooooooo.oo.ooo..ooooooooooooo..ooo..ooo...ooo.", ".ooooooooo.oo..oo.o.oooo.ooo.o....oooo.o.ooo.ooooo", "oooooo..o.oooooooooooo.oooo.oo.oo.ooooooooo...o.o.", "o..oo.oo.ooo.o.o.ooooooo..ooo.oooo..oooooo.oooo..o", "oo.o.oo.oo...oooooooo.ooooooo.oo...oooooooooooo.oo", "oo.oooooo..o.ooooooooooo..ooo..o.oo.ooo.oooooooooo", "ooooo.oooo..oooo.o.o...oo...ooo..oo.o..oooooo.o.o.", "oooo.ooooo..o.oo.oooooo.o.ooooo..ooooooo.oo.....oo", "oooo..o..o.oooo.oooooo.ooooooo..oo..oo.oo.o.ooooo.", "oo..oooo...oo.ooooooo.ooooooooo.oo.oo.o..oooo.oo.o", ".o.oo.oo.oo.o.oo.oo.o.ooooooooooooooooo....ooooooo", "o..oo..oooooooo.ooooooooooo.ooo.ooo..ooooo.oo.ooo.", "oooo.ooo..ooooo.o.oooooooo.oo.oo.oo.oo.ooooooo..oo", "o.oooo.ooooooo.ooo.o..ooooo.ooooooooooooo.ooooooo.", ".oooooooo.oo.ooooooo.o.oo.oo.ooooo.oooooooooooo.oo", "ooo.oo.o.oooooo.oo..oooooooooo.oo.oo.oooooooo.o..o", "o...ooo.oo.o.oo.ooooo.oooo..oooo.oo.ooooooooooo.o.", "..oooo.oooooo.ooooo....ooooooo.oooo.oo..o.o.ooo...", "ooo.oo.o.ooooo.ooo.o.oo.oooooooooo.oooo..o.oooooo.", "oo.o..ooo.ooo.ooo.o...oooo.o.ooooo.oooooo.o.oooooo", ".oooo.ooooo.oo.oooo...oo.oo.oooooooooo..oo.oooo...", "ooooo.oooo.ooo.o.ooo.ooo..o.o.ooooooo..ooo..oooooo", ".o.oo..oo...oooo.oooo.o.o.ooooooo.o..oo.o..o.oo.oo", "ooo.o..oooo.oooooo.o.oo.o.oooo.ooooo.ooooo.ooo..oo", ".oo.o.ooo.oo..oooo.oooooo.ooooo.o....oo.oo.ooooooo", "ooo.o.ooooooooo..o.o...ooooo..ooooo.oooooo.ooo.o.o", "oooooooo.oooooooooo.oo..ooo.oooooooo.oooooooooooo.", "o.o.oooooo..oooo.oo.oooo.ooo.ooooooo.oooooo..ooo..", ".ooo..oo..oooooo.ooooo.oooooooooooooooo.o.oooo.oo.", "oo..ooooooo..oo.oooooooooooooo..oooo.oooo.ooo..ooo", "oooooooooo.o.o.oooo.o.oo.o..o.oo..ooo.ooooo.oo.ooo", "o..oo.o.oo.oooo.oooo.ooo.o.oooooo.oooooooo.oo.....", "o.ooooooo.oo..oooo..o.oooooo..oooooooo..ooo...oooo", "ooooooo.o.ooo.o.ooo.o...oo.ooo.oo.ooo.oo..oo.ooooo", "ooo.ooooooooo.ooooo..ooo.o.o.oo.o..o.oooooo.o.o..o", "ooooo..oooo.ooooooo.oooo.ooo.oooo.o.o.ooo.ooooooo.", ".ooooo.oooooo.ooooo.o.o.ooooo.ooooo.o.oooo.oo....o", "oo..oooo.ooo.oo.o...o.oo...oooo.o.o.oooo..oo.oo.o.", "ooooo.o...o.ooo.oooooooo.oooo..oo.o.o..oooooo.oo.o", "oooo.oooo.oooo.oo.o.ooo..o.oo.oooooooooooooo.o.o.o", "ooooo....oooo..o...oooooo...oooooooo.oooooooooo.oo", "..oooooo.ooo.o.oooooooo..o.oo.o.ooo.ooo.o..o..ooo."};
    int K = 869075791;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 350593890850;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> field = {"oooooo.o.o.ooooooooo.ooo.oooo.oooooooo...ooooo.ooo", "ooooooooooo.ooooo.o.o.ooooooooooo.ooooo.oooooooooo", "ooo.oo.o...ooo.oo..oooo..ooo.o.oooo.oooooooooooooo", "oooo.oooooooooooooo..oo.ooooo.oo.ooo.o..o.ooo..ooo", "ooooo...o..ooooo.o.oooooooo.oooo.o.oo.o..ooo..oooo", "o.oo.oo.oo.o.ooooo.ooooo.oo.oooooo.o.o.ooooooooo.o", "oooooooooo.oo.o.oo.oo.ooooooo..o.ooooooooooo.ooo.o", "ooo.ooooooo.oo.oooooooooooooo.oooooooooooooo.ooo.o", "ooooo.ooo.ooo..o.ooooooooooo.o.ooo.oooo..oooooo.oo", "oo.oooo..oooo.ooo.ooooo.ooo....oooooo..oooo.ooo.oo", "oooo..oooo.ooooo.oo.oo..oooooo.oooooooo.oo.o.oo.oo", "ooooo.ooooo.o.oo.ooo....o.ooooooooooo.oooooooo.o..", "oooooooooooo..o.o..oooo.ooooo.o.oo.ooooo.o.oooo.oo", "ooo..ooooooo.oooooo.ooooo..o.o..oooooooooo.o.ooo.o", "oooo.o.ooooooooo..oooooooooo.oo.o.oooooooooooo.ooo", "ooooooooooooooooooooooooo.ooo..oo.ooo.o..ooooooo.o", ".oooooooo...oo..oo..ooooooooooooooo.oooooooooo...o", "o.o..o.o.ooooooooooooooooo.ooooooooooo.oooooo.oooo", "oooo.ooooo.oooo.oo.ooo.ooo.ooooooo..oo..oo.o.ooooo", "oo.oooo.ooooooo.oooo.o.o.ooooooooooooooooooooo..oo", "..oooo.o.ooo.o.o.ooooo.ooooo..o.ooooooooo.oooooo.o", "ooooo.o.oooooo...o....oo.ooooooo.oo.ooooo.oooo.ooo", "..ooooooooooooooo..oo.oo....oooo.ooo...o...o.ooooo", ".oo.oooo...oooooooooo.ooooo.o.o.ooooooooo.ooo.oo..", "oo..oooooo.oooo.ooo..oo.o.oooooo.ooo.o.o.ooooooo.o", "ooooooooooooo.o.ooooo.oo..oooo.oooooo.ooooooooo.oo", "ooooooo.o.oo.ooo.ooooooooo.ooooo..o.ooooooooo.o.oo", "oooooo.oo.oooooooooo.ooooooooo.oooo.o.oooo..o.oooo", "oooooooooooooo.o.ooo.o.ooooooooooo.o.ooooooo.ooooo", "ooooooooo..oooooooooooooo.oooo..oo.ooooo..ooo..ooo", "ooo..ooo.oooo.ooooooooooooo.oo.o.ooooooooooo..oo.o", "oooooo.oooooo.oooo.o.o.o.oooooo.ooooooo..ooooooooo", "o..oooooo.oooo.oooooooooo.o.oooooooo.ooooooo...ooo", "oo.ooooo...ooo..oo.oo..oooooooooooooooo..oooo.oo..", "oooo.oooo.oooo.oooooooo.o.ooo.o.oo.oooo.o.oooooooo", "oooooooooooo.oooo..oooooo..o.oo.oooo.oooooo.o.o..o", "oo.ooo..oooooo.o..o.ooooooooooo.oooooooo...oooo.oo", "ooooooooooo.oooooooooooo.ooo.o.ooooooooooo.o..ooo.", "oo.oooooooo.o..ooooooooooo...oooooo.ooooo..ooooooo", ".o.o.o.ooo.oooo.ooo.ooooooooooo.oooo..oo.o.o...o.o", "o..o.oo.o.ooooo..oooooooo.oooo..ooo.o.oooooooo.ooo", "oooooooooooo.oo..ooo...oooooooo.o.ooo.ooo.oooooo.o", ".oo.ooooo.o.ooo...o.o.o.oooooooooooo..o.ooooooo.oo", "oo..oooooooo.ooo...ooooooooooo.oooooooooooooooo.oo", "oooooo..o.ooo..ooooo..ooooooo..oooooooo..oooooo.oo", "oooooooooooo.oo.ooo.ooooooooooooo.o.oooo.o.ooooooo", "..ooo.ooooooooo.o..ooooooooooooooo.oooo.oooo.ooo.o", "ooo.oo.ooo.oooooooooooooo.oo.oo.ooooo...oo...oo.o.", "o..oooo.ooooo.ooooooooo.oo.oooo.o.ooo.oooooooooo.o", "o.ooooo.o.ooo.o.ooo.oo.ooo.oooo..oo.ooo.o.oooo.o.o"};
    int K = 376884251;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 121383157325;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> field = {"oo.oooo..o..ooooooo.oooo.oo.ooo.ooooooo.o..ooo.ooo", "ooooo..oo.o.ooooooo.oooooo.oooooo.ooooooo.o.ooooo.", "ooooo.o.o.o.oo.oooooo.ooo.oooooo.oooooooooo.oooo.o", "oo.ooooooo.o.ooo.ooooooooo.ooo.ooo.oooo.oo..ooo.o.", "ooooooooooo.oooooooo..ooooooo.ooo.ooo.o.oooooooooo", "oo.o.oo.oo...oooo.oo.oo.ooooo.oo.oooo.ooooooo.oooo", "o..ooooooooo..ooooooooo.oo.o.oo.oooo.oo.oooooooooo", "..ooo...ooooooo.oooo.o.ooooooooo..ooooo.oooooooo..", "ooooooooooooooo.oo.oo.ooo.oo.o.ooooo.ooooooooo.oo.", "ooo.ooooo....o.ooo.o...oooooo.oo.o.ooooo.oooo.ooo.", "oooooo.oo.ooo.oooooooooooooooooooooooooooooo.ooooo", "ooooooo.oooooooooooooooo.o..ooooo.ooooooooooooo..o", "ooo.oo.ooooooo.oooooooooo.oooooo.oooooo.o.ooo.oooo", "ooooooooo.ooooooooo.o.oooo...oooooo.o.ooo..ooooooo", "oooooooooooo.oooooo.oooooooooooooo.oooo.ooooo.oooo", "o.ooo.o..o.ooooooooo.o.oo.oooooo.oo.ooo...ooo.oooo", "oooooo.ooooo.oooooo.oo.oooooo..oo.oooooo.ooo...ooo", "oooooooooooooooooooooooooooooo.oooooooooooooooo.oo", "o..o.oo.ooooooooooooo.oooooooooo.ooooooooo.oo.oooo", ".oooooooooooooooooooooo.o.oooooooooooooo.ooooooooo", "oooooooo.ooooo.oo.oooooo.o.ooooooooo.o.o..ooo.oooo", "oooooooooooooo.oo.oooo.o.ooooo.oo.ooo.ooooo.oooooo", "oooooo...oooo.o..o.ooo.oooo.ooooo.ooooo.oo.o.o.ooo", "oooo.oooo.oo.o.oo.oooooo...ooo.o.oooo.oooo....oo.o", ".oooooooo...oooooooooooooooo.ooooo.o.oo.ooo.oooooo", "ooooooooooooooo.oooooo...ooo.oooooo.o.ooo.oooooooo", "oooo.oooo.oooo.ooooo.oooooooo.o.oooooo..ooooooo.oo", "o.oo..oooooooo..o..oooooooo.ooooo..o.o.ooooooooooo", "o.ooooo.o.ooooooo.oooooooooooo.oo.ooooooooooooo.oo", "oooooooooooooooooo.oooooo.ooo.o.oo....ooooooo.o.oo", "ooo.oooo.oooooooo.oooooo.ooooooooooooooooooooo.ooo", "ooooo.oooooo...oooooooooooooooooo.ooooo.ooo.ooooo.", ".oooo..oo.oo.ooooooo.oo.oooooooooooo.oooo.oo.ooooo", "ooo.o.ooooooooo.ooooooo..ooooo.o.oooooooooo..ooooo", "ooooo..o.ooooooo...o..oooooo.oo.ooo..ooooooooooooo", "o.o.ooo.ooooo.ooo..o..o..ooooooooo.o.o.o.o.oooo.oo", ".ooo.ooo.o.ooooooooo.oooooooooooooooo.ooooooo.oooo", "o.ooo.ooooo.ooooo.oo.o..oooooooo.oooooooooooo..ooo", "oooooooo.oooo.oo.oooooooooo..ooooooooo.oooooo.oooo", "oo.ooooooooooooooo.o.oooooooooooo..ooo.o.o.oooo.oo", "ooooooooooo..ooo.o.oooooooo.oo.o.oo.oooo.oo..ooo.o", "ooooooooooo.oo..ooo.oooooooo.ooooooooooooooooooooo", "ooo.ooooo.ooooooooooooooooooo..oo.oooooo.oooooo.oo", ".o.o.oo..oo.oo.ooo.oooo.ooo.ooooo.ooooooo.ooo.ooo.", "...oo.o.o.ooooooooooooooo.ooooo.o.oo.oooooooo.oooo", "o.oooooo.oo.o.oo.oooo.ooooooo.ooooo..oo..o.ooo.oo.", "..oo.o..oooooooo.o.oooo.ooooo.ooooooooooooooo.oooo", "o.oooooooooooo....ooooooooo...oo.o..ooo.ooooo.o.oo", "ooo.oooooooo.o.ooo..oo.ooooo.ooo.ooooooo.ooooo.ooo", "ooooo..ooooooo.ooooo.oooo.ooooooooo.o.o...oooooooo"};
    int K = 190937490;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 93099016325;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> field = {"ooo.ooooooooo.oooooo.oooooo.oooo.ooooo.ooooooooo.o", "oooooo.ooooooooooooooooooo.o..ooooooo..oo.oo.o.ooo", ".ooo.oooooooooooooooo.o.oo.oooooooo.ooo.oo.o...o.o", "oo..oooooooo.ooooo.o.ooooooooooo.oo.oooooooooo.o..", "ooo.ooo.oooooo.oooooooooooooooooooooooooooo..oooo.", ".ooo.oooooooooooooooooooooooo.o.ooo.oo.oooo.oooooo", "o.oo.ooo.ooooo.o.ooo.oooooo.o..ooo.ooooooooooooooo", "o.oooooooooo.ooooooooo.ooo.oooo..ooooo.ooooooo...o", "ooooooooo.oo.ooooo.oooooooooooooooooo.ooooo.oooooo", "ooooooooooo.ooooooo..oooooo.oooo...ooooooooooo.o.o", "ooo.ooooooooooooo.oooooooo.ooooooooooo.oo.oooooooo", "oooooooooooooo.o.oooooo.oooooooooooooooo.oooooooo.", "oooo.oooo.ooooo.ooooooo..ooooooo.ooo.ooo.ooooooooo", "oooooooooooo.oooooooooo.ooooooooooooo.oooooooooooo", "ooooo.oooooooooo.oooo.ooo.ooooo.oooooooo.ooooooooo", "o.ooo.oooo.ooooo.ooo.ooooooo.oooooo.oo.ooooooooooo", "oo.ooo.oooooooooo.ooooo..oooooooooooo.oooooooooooo", "ooooooooooooooooooo.ooo.oooooooooo.oo.oooo.ooooooo", "ooooooo.ooooooooo....ooooooooo.oooooooooooooooo.oo", ".ooooo.o.oooo.oooooo.ooooooooo.oo.oooo.ooooooo.ooo", "oooooo.ooo..o.oooo.oooooo.o.ooooooooooooooooooo..o", ".o..oooooo.o.o.o.ooo..ooooooooooooo.oooooooooooooo", "oooooo.oo..ooooooooo.oo.ooooo..oo.oooooooooooo.ooo", ".oo.oooo..o.ooo..oooooo.o.oooooooooooo.ooooo.ooo.o", "oo.oooooo.oooooo..oooo...o.ooo.ooooooooooooo.oooo.", "ooooo.ooooooooooo.ooooo.ooooo.oo..ooooooooo.oooooo", ".ooo.o.ooooooooo.ooo.ooooo.ooo.oooo.oooooooooooooo", "ooooo.oooooooooooooooooooooooooooooooooo.o.ooooooo", "ooo.ooooooo.ooooooooooooooooooo.ooooooo.oooooooooo", "oooo.o.ooooooooooooooooooooooo.ooo.oooooooo..ooooo", ".ooooooooooooooo.oooooooo.ooooo.ooooooooooooo.oo.o", "oooooo.o.o...ooooooooooo.o.oooooooooo.o.oooo..oooo", "oo..ooooooooo.oooo.o.oooooooooooooooo.ooooooooo.oo", "o.ooo.oo.oooo.ooooo.ooooooooo.ooo.oooooo.ooooooooo", "o.ooooooooooooooooooooooooooo.o.ooo..oo.oo.oooooo.", "oo.oooooooooo.oooooooo.ooooo.ooooooooooooooooo.oo.", "ooooooooooooooooooooooo.oooooo.oooooooooo.oooooooo", "oooooo.o.oooooooooo.oo.oooooooooo.oooooooooooo.ooo", "ooooooo...ooooooooooo..ooooooo.ooooooooooo.oo.oo.o", "oo.oooo.oooooo.o.oo.ooooo.o.oo.oooooooo.ooooo.oooo", "oooooo.oooooo.ooo.o.oooo.oooooooooooooooooo.oooooo", ".oooo.oooooooooooo.oooooooo...o..oo.oo.ooooooooooo", "oo..o.ooooo.oooooo.oo..oooooooooo.oooo..ooooo.oooo", "ooooooo.oo.oooooooo.ooooo.oooo.ooooooooooooooo.ooo", "oooooo.oooo.oooooo.oooooooooooooooo.o.oooo.ooooooo", "o.oooooo..ooo.oooooooooooooooooo.ooooooo.oo.oooo.o", "oooooooo..ooooooo.ooooooooooooooooooooooo.oooooooo", "ooooooo.ooo.oooo..ooooo.o.ooooooooo.oo.ooooo.oooo.", ".ooooo..oooooooooooooo.ooooooooooooooooooooooooooo", "ooo..ooooooooooooooooooooooooooo.ooooooooooo.ooooo"};
    int K = 65685620;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 12642898125;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> field = {"ooooooooooo.oo.oooooooooo.oooo.ooooo.o...oo.oooooo", "oooooooooo.oooooooooo.oooooo.oooo.ooooooooo.oooooo", "oooo.o.oooooooooo..ooooooooooooooooooooooooooooooo", "oo.ooooo.oooo.ooooo...ooooooooooooooooo.oooooooooo", "oooooooooo.ooooo.ooooooo.ooooooooooo.oooooo.oo.ooo", "oooooooooooooooooo.oooooooooooooooooooooooo.oooooo", "ooooooooooooooooooooooooooooo.oo.o.oooooo.oooo.ooo", "oooooooo.ooooooooooooooo.ooooooo.ooooooooooooooooo", "oooooooooo.ooooooooooooooooooooooooo.oooo.oooo.ooo", "ooooooooooooooooooo.oooooooooooooooooooooooooooooo", "ooooooooooooooooooooooo..oo.ooooooooooooooooooo.oo", "o.ooo.oo.oooooooooooooooo..oooooo.o.oooooooo.ooooo", ".ooooooo.oooooooooo.oooooooo.ooooooo.ooo.oo.oooooo", "oooooooooo.ooooooo.oooooooooooooooooooooooooooooo.", "oooooooooooooooooooooooooooooooo.oooooo.ooooooo.oo", "oooooooo.oo.oo.ooooooooooo.ooooooooooo.oooo.oooooo", "ooooo.ooooooooooooooooooo.oo.ooo.ooooo.ooo.ooooo.o", "oooooooooooooo.oooo..oo.oooooooooooo.oo.ooo.ooo.o.", "ooooooo.oooooooo..ooooooo.oooooo.oooooo.o.oooooooo", "o.oooo.oooooooooo.oooooooooooooooooooooo.ooooooooo", ".oooo.oooooooo.ooooooooo.ooooooooooo.oo.oo..oooo.o", "oooooo..ooooooooooooo.oo.ooooooooooooooo.oooooo.o.", "oo.ooo.ooooo.ooo.ooooooooo.ooooooooooo.ooooooooooo", "ooo.ooooooooooooo.oooooooooooooo.ooooooooooooooooo", ".o.oooo.ooooooooooooooooooooooooooo..ooo.oooo.o.oo", "oooo.oooooooooooooooooo.oo..ooooooo.o.ooooo.oooooo", "o.oooooooooooooo.oooooo.ooooooooooooooooo.oo.oo.o.", "oo...ooooooooooooo.ooo.oooo.oooooooooo.ooooooooooo", "ooooooooooo..oooooooooooooooooooo..o.ooooooooooooo", "oooooooooooooooooooooooooooooooooooooooo...ooooooo", "oooooooooooooo.oooooooooooooooooooooooo.oooooooooo", "oooooooo.oooooooooo.ooo.oooooooooooooooooo.oo.oooo", "oo.o.oooooo.oooo.oooooooooooooooo.oooooo.oooooooo.", ".ooo.oooooooooooooooo.oo.ooooooooooooooooooooooooo", "ooooooooooooooooo.oo.ooooooooooo.ooooooooooooooooo", "oooooooooooooooooo.oooooooo.oooooooooooooooooooooo", "oooo.oo.oooooooooooooooo..ooooooooooooooo.oooooooo", "ooooooooooooooo.ooooooooooooo.ooo.oooo.oooooo.ooo.", ".ooooo.ooooooooooooooooooo..ooooo.oooooo.ooooooooo", "oooo.oooooooooooo.ooooooooooooooooooooooo.oooooooo", "ooooooooooo..oo.oooooooooooooooooooooooooooooo.ooo", "oooooo.ooooooo.ooooooooooooooooo.ooooooooooooooooo", "ooooooooooooo.ooooooooo.ooooooooooooooo.oooooooooo", "oooooooooooo..ooooooooo.ooooooo.o.oooooooooooooo.o", "oooooooooooo.o.o.ooooooooo.oooooooooooooooooo.oooo", "ooo.oooooo.ooooooo.oooooooo.ooo.oooooooooooooooooo", "oooooooooo.oooooo..oooooooo..o..ooo.ooooo.oooooooo", "o.oooooooooooooo.ooooooooo.o..oooo.ooooooo.ooooo.o", "ooo..o.oooooo.ooooooooooo..ooooooooooooo.ooooo.ooo", "oooooo.oooooooooooooooooooooooo.oooo.ooooooooooooo"};
    int K = 227435277;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 14321429391;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> field = {"ooooo.oooooooooooooooooo.oooooooooooooo.oooo.ooooo", "o.oo.ooo.oooooooooooooooooooooooo.ooooooooooooo.oo", "oooooo.oooooooooooooooooo.oooooooooooooooooo.ooooo", "ooooooooooooooooooooooooooooooooooooo.ooooooooo.oo", "oooo.oooo.oooooo.ooooo.ooooooo.ooooooooooooooooooo", "oooooooo.oooooooooooooooooooooooooooo.ooooooooooo.", "ooooo.ooooo.o.ooooooooooooooo.oooooooooooooooooooo", "ooooooo.oooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooo.ooooooooo.oooooooo.oooooo", "oooooooooooo.oo.oooooooooooooooooooooooooooooooooo", ".ooooooo.oooooooooooooooooooo..ooooooooooooo.oo.oo", "oooooooooooooooooooo.ooooooooooooo.oooooo.ooooooo.", "ooooo.ooooooooooooooooooooooooooooo.oooooooooooooo", "ooooooooooooooooooooooooooooooooooooooooooooo.oooo", "ooooooooooooooooooooo.oooooooooooooooooooooooooooo", "oooooooooooo.ooooo.oooooooooooooooooo..ooooooooooo", "oo.oooooooooooooooo..oooooooooooooooo.oooooooo.ooo", "ooooooooooooo.ooooooooo.oo.o.ooooooooo.ooooooo.o.o", "ooooooooo.ooooooooo.oooooooooooooooooooooooooooooo", "ooooooooooo..ooooooooo.ooooooooo.o.o.ooooooooooooo", "ooooooooooooooooooooooooooooo.ooo.ooo.ooooooo.oooo", "oo.o.oooooo.ooooooooooooooooo.oooooooooooooooooooo", "oooooooooo.o.oooooooo.oooooooooooooooooooooooooooo", "ooo.ooooo.ooooooooooooo.oooooo.ooooooooooooooooooo", "oooo.o.ooooo.ooooooooooo.ooooo.ooooooooo.ooooooooo", "oooooooooooooooooooooooooooooooo.ooooooooooo.ooooo", "oooooooooooooooooooooooooooo.oooooooooooooooo.oooo", "ooooooo.oooooooo.ooooooooooooooooooooooooooooooooo", ".oo.oooooooooooooooooooooooooooooooooooooooooooooo", "oooooooo..ooooooo.oooooooooooooooo.oooooo.oooooooo", "o..oooo.ooooooooooo.ooo.oooooooooooooooooooo.ooooo", "ooooooooooooooooooooo.oooooooooooooooooooooooooooo", "ooooooooooo.ooooooooooooooooo.o..ooo.oooooooooo.oo", "ooooooo.oooooooooooooooooooooooooooooooooooooooooo", "ooooooooooo.oooooooooooooooooooooooooooooooooooooo", "oooo.oooooooooooooooo.ooooooooooo.oooooooooooooooo", "ooooooooooooooooooooooooooooooooooooo.ooooooo.oooo", "ooooooooooooo.oooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooo.oooooooooooo.ooo.oooooooo.ooo", "ooooooooooo.ooooooooooooooooooo.oo.ooooooooooooooo", "ooooooooooooooooooooooooooooo.oooooooooooooooooooo", "ooooooooo.oooooooooooooooooooo.ooooooooooo.ooooooo", "o.oo.oooooooooooooooooooooooooo.oooooooooooooooooo", "ooooooooooooooooooooo.o.oooooooooooooooooooooooooo", "oooooo.ooooooooo.ooooooooooooooooooooooooo.ooooooo", "ooooooooooooooooo.oo.oo.ooooooooooooooooooooooo.o.", "ooooooooooooo.ooo.oo.oooooooooooooooooooooooooooo.", "oo.oooooooooooooooo.oooooooo.oooooooo.oo.ooooooooo", "ooooooooooooooooooooooooo.ooooooooo.oooooooooooooo", "ooo.oo.oo.oooooo.o.oooooooooooooooooo.oooooooooooo"};
    int K = 813393356;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 810987583490;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> field = {"oo.oooooooooooooooooooo.ooooooo.o.oooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooo.ooooooooooooooooooo.o.oo", "ooooooooooooooooooooooooooooooooooo.oooooooooooooo", "o.ooooooooooooooooooooooooooooooooooooo.oooooooooo", "oooooooooooooo.ooooooooooooooooooooooooooooooooooo", "ooooooooo.oooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooo.ooo", "oooooooooooo.ooooooooooooooooooooooooooooooooooooo", "ooooooooooo.ooooooooo.oooooooooooooooooooooooooooo", ".oooooooooooooooooooooooooooooooooooooooooooooo.oo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "ooooooooo.o.oooooooooooooooooooooooooooooooooooooo", "oooo.oooooooooooooo.ooo.oooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooo.oooooooooooo.oo", "oooooooooooooooooooooooooooooooooo.ooo.o.ooooooooo", "ooooooooooooooooooooo.oooo.ooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooo.ooooooooooooooooo.oooo.ooo.oo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "o.ooo.oooooooooooooooo.ooo.ooooooooooo.ooooooooooo", "oooooooooooooooo.ooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooo.oooooooooooooooooooooooooooo.oooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "ooooooo.oooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooo.ooooooooooooooooooooooo", "oo..oooooooooooooooooooooooo.ooooooooooooooooooooo", ".oooooooooooooooooooooooooooooo.oooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooo.ooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooo.o", "oo.ooooooooooooooooooooo.ooooooooooooooooooooooooo", "ooooooo.oooo.ooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooo.ooooooooooooooooooooo.ooooo", "oooooooooooooooooooooooooooooooooooooooooooooo.o.o", "oooooooooooooo.ooooooooooooooooooooooooooooooooooo", "oooooooooooooo.oooooooooooooooooooooooooo.oooooooo", "oooooooooooooooooooooooooooooooo.ooooooooooooooooo", "o.oooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooo.oooooooooooooooooooooooo", "ooooooooooooooooooo.oooooo.ooooooooooooooooooooooo", "ooooooooooooooooooooooo.oooooooooooooooooooooooooo", "ooooo.oooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo"};
    int K = 884295309;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 212871078125;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> field = {"..o.ooo...o...oo.......o.........o.ooo.....o...o..", "......o.....oo..oo....o.o.o...o....o.......o....o.", "......o..ooo......o.............oo..o...ooo..oo.o.", "ooo.o......o.......o.oo...o..ooo....o..oo.oooooo..", ".o....ooo..o...o...o...oo.oo........o..oo....oo..o", "...oo....o........o..oo.oo...o.........o.o.oo.o..o", ".....o..o......o.oo.o.o..o...oo........o...o.oo.o.", ".o...........o....o........o..o....o...o..o...o.o.", ".o..o.....o..oo.......o..o.....ooo.o...oooo....o..", ".......o.........oo....o.o.......o...oo...o.o.....", "o....o.oo.o...oo.o..oo..ooo........o..o.o..o...o..", "..oooo.o..o..o...o.....o......o.............ooo...", "....o.o........o.o..o...o.....o...o.o........o...o", "........o.....oo.oo..oo........ooo.....oo..oo...o.", "o......o..oo.o...o..o...ooo.o.o.o...o....o..o.....", "o.oo.o.o.........o.o.oo.oo..o...o..o...o.o....oo..", "oo...o....o.o.oo...o....o..ooooo.o.o.........o..o.", "..oooo....oo.....o.......o....ooo.oo....o.o..o.o..", "oooo...o.....ooo..o......oo....ooo.......o..o.oo..", "o.o.o...o......o..o..oooo.oooo....o.......ooo....o", ".........o.ooo.o..o...o..o.ooo....o.o...oo........", "ooooo..o...o.........o...........oo...o.o.......o.", ".ooooooooo.o.....o....o...o.o...o..o.oo..o..o.....", "...o.ooo....oo.o.....o.o.o..o...o.o.....o.o.......", "o..o...o.....o.....o........oo.o..oo......o...o..o", ".oo.o....o......ooo...o...o........o.o........o.o.", ".o.o..oo...o.......oo.o...o..o........o.ooooo.oo.o", ".o..o....o..o.o..o.ooo.oo.o.oo.o.o......oo..o..o..", "...oooo........o..o....o.oo.o.ooo......o..oo......", ".....o...o...oo..o.......oo.......o.o..o..oooo....", "....o.o......oo.o...o.o........o.o....o.oo......oo", "...............o..o.oo.........o...o.o..oo..o.o.o.", "oo......oo.ooo..oo.oo.......oo....o........o.oo.o.", ".o.o.o............o.o..ooo.o.....o...o.....o.oo..o", "....ooo......o.o..o...oo.o.o..oo...o..o...........", "......o.o...o......oo..oo..o....o......o...o.....o", "o............oooo.......o.o.o.....oo...o...o.o.o..", "o..oo.oo...o..o...o..oo.o...o...oo.....o...oo....o", "....o.oo.o.o...o...o.oo....o..o...ooo.o....o.....o", "o.o.o...oo..o...o..oo.o.....o....o.o.o.o........o.", "....o...........o...ooo..oo......oo..o.o.o.....o.o", ".........oo.ooo......o.oooo..oo....o.o...oo..o.o..", "...o...o.....o.ooo........o.............o......oo.", "...o...o..o...oo...oo.o.o.......o...o..o..o.....o.", "....o...oo....o.oo..oo...o....o....o..o.o...o.....", "......o.....ooo..o....ooo..o.oo...o.o..oo..o.o....", "..o...oo.....oo.oo.o..oo......o..oooo.o..oo......o", ".o....o..oo....o...o...o.....o.....o........o.ooo.", "o...o.........o........o...o.....o.o.ooo...o..o...", "o..o...o....o...o.o.o...ooooo.oo.....oo.oo....o.oo"};
    int K = 1000000000;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 103101002875;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> field = {".o.....o...........oo.o..ooooo....o.o..o........o.", "oo.o..ooo...o.oo.oo......oo..o.....oo......o...o..", ".o......o......oo.o..o.......ooo.....oo....o.o....", ".......oo.o...o...oooo.o.ooooo.oo.....oo.o.....o..", ".......oo............o..o.o..o......o.oo......ooo.", "..o.o..o......oo.oo..o.oo.o......oo..o.o.o..oooo..", ".....o..o...o.oooooo.o.o.......oo.oo...o..o..o..oo", "..o.oo..o.....o.o.......oo......o.oo.o.oo.oo...oo.", ".oo.....o...o..................oo...o.....o...oooo", "oo..ooo.o....o..o.oo.....o..o....o...o....o.o..o..", ".o........o...........ooo.....o..........o......o.", ".........o...o..oo..oo.......o....o..oo.o..o.o.o.o", "oo...........o..o..o...o..o.oo...o....o.oo.o....oo", ".........o......o.o.oooo..oo.o.....o.o..o.....oo..", "..ooo..o.o...o.......ooo......o.o.o.......o....o..", ".oo.oo.o.ooo..o...........oo.o.....o.....ooo.....o", "...o..o.o..o.............oo........oo........o....", "o.......o......o..o..oo.o..o.........o.ooo.o.o....", "oooo..........oo...oo.o..o.o...o.oo.o.....oo.o...o", "o.......oo....o..o...oo..o.oo.o.o..o..oooo..oo....", "...o.....o......oo..o...oo.o.o....o...............", ".o..o.o....o.....o......ooo.o.o.o..o....o.........", "oo...oo..o.........o...oo............o..o...o...o.", "o.........o.......o...o...o.o.....o...o......o..o.", "o.o...o..oo..........o.....o..oo...o.oooo.oo..o.oo", ".....oo.o........ooo.ooo.......o.o...o.oo........o", "..o.o.o..oo..oo...o......o...o..o.o.o..........o.o", "oo.......o..oo.o...ooooo...ooooooo...o.........o..", "..o...o....o......o......o...oo..ooo..o......oooo.", "o...oo.........o.......o.............o....ooo..oo.", ".o.o.o...o..o.o......o....o..o.........oo.........", ".o..o.oo..o..o...o..o..o..o...oo.o.oo......o......", "...o....o...o...oo..o..oo...oo...oo..ooo.o..o..o.o", "o........o........oo.o..o...o.o..o.oo.....oo....oo", "..o....o...o....o...o...oo..o....o.....o.oo.....oo", "ooo.o..........o.o.......o.o.......o.......o..oooo", ".........oo.o.o.o.....o.o...ooo....o......o....o.o", "o.....oo..o.o.o.o.....o.......oooo...o.o.ooo..oo..", "o...o.o..o.o...o.o...o...o.....o...o..o......ooo.o", "..o.oo....o.......o.o..o.o...oo....o......o..o..oo", ".....ooo.....ooo....o..........o...o.o.o.....o.o.o", ".o.o.o...oo.........o...oo........o....o..oo.....o", "..oo..o..........o....oo.ooooo.oo.o...o....o.oooo.", "......o......o.....o..oo.oo...ooo.......o...o.o.o.", ".ooo.o........o...o.....o...o.........o..o..o.....", "oo.o...o...o..........o..........ooo.o....o..o....", "o..........o.....o.oooo.....o....oo.oo..oo.o...o..", "..ooo....o.o........o.....oooo..o...oo.o......oo..", "....o..o.oo....oo.....oo.oo...o...o.o..o..o..o....", "o..o...oo....oo.oo......o.o.o.oo...o..oo..o.ooo.o."};
    int K = 1000000000;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 101622370500;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> field = {".o......o......o......o.oo............oo....oo.oo.", "o..o...o...o..o....ooooo.o......oo.oo..o....o.o...", "...oo....o..oo.o......o...o.......o.......o...o.oo", "....o....o.......o......oo...o..o....o.o.o.ooo.oo.", ".o.....o.....o...o.oo..o...o..o...o.o...oo.o..o...", "o..o.oo.oo..o.oooo...o.oo.o..........o.o.......oo.", "..o....o.o...o.o..ooo...........o.....oo........oo", ".....ooo.....o..o.....o.ooo.o........o...ooo...o.o", "oo..o.o..o..o.oooo.o....o.......ooo....o..o.o..o..", ".oo..oo.....oo.......o.oooo..oo..o..o.o..o.ooooo.o", "o...o....oo.......o............o......oo....o.....", ".o.ooo..o..o....oo...o...o....o....o..o.....oo...o", "ooo.....o.oo.oo...o..ooooooo.o.o..o.o.o.....o...oo", ".o.o.o....o...oo....oo..o........oo.oo...o.o.....o", "o.o...ooo..o.o......o....o........o...oo.oo..o....", "..o.....o.ooo......o.oo.....o.o...o.o.o.oo.o.oo...", ".o.....o..o......ooo.o...oo....ooo.oo..o..o......o", ".o...o..ooo..o..o..o....o..........o....oooooo....", ".o.o.....oo.........o...o.oo.....o...o.o.....o..oo", ".o....o.oo.o.o.o.o.o......o.oo................o...", ".oo......o...oo.o...........o.....o....oo.o.......", "o.o.......o.oo.o.o....ooo....oooooo..o.oo.........", ".o....oooooo..........................o.o........o", "..oo....oo.o.o...oo..o.oo..o..o......o.........o.o", "...o...o.....o......o....ooo..o.......o....ooo....", "o..........o..o..........oooo.o.oo.....o..o......o", "o.o....o........o.o.o.......oo.oo..o.o....ooo...o.", ".o...o....o...o.o..o...ooooo........oo.......o....", "....oo...o.............o........o.......o..o..o...", "o.....oo..oo...oo..o...o...oo.......o.........o..o", "ooo.......o..o.o.o.....o...o....ooo...oo....o.o.o.", "oo..........oooo....o....o.o....ooo..o.o..o...o.oo", "......o....o..o..oo.....oo..ooo.ooo...o..ooo......", ".o....oo.oo.......o.o......o.ooo.......ooo...o....", ".o.o.o.......oo..oo..oo.......oo....ooo.......o...", ".oo.oo.....o..oo.o....o.o.oo.o.o...o....o...ooo...", "o..o.ooo.oo..o..oo.o........o........o.....o......", "..oo.......o...o.o.o...o.oo.o......o...o......oo..", "..o.o.o..o..o.o..o.oo.o..ooo....oo.o.....o.....o..", "....o.oo.o.....o.o......o.o..oooo..o.....o......o.", "..oo..ooooo.o..o.o..o.o.o...oo....oo.o.......ooo..", "...o.o..o....oo........o.oo.o...o.o.ooooooo.o..o..", "ooo...o...........oo.....o.o..o.....o.oo.o.o.o..o.", "...oo.oo..o.o.o..o....oo.oooo..ooo.....oo...oo.oo.", "....o......o.o....oooo.o...o.oo..o..o...o..o.o.o.o", "o...oooo.ooo..............oo...oo.....oo..o.o.....", ".o...o.o..ooo....o...ooo....o.o.......oo.o..o.o...", "......ooo....o...o..o....o.ooo..ooooo.o......oo.oo", ".............ooo....oooo.......o.....o.o..o....oo.", "oo..oo..o..........o...o....oooo.o......o..o.o..o."};
    int K = 1000000000;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 106999215500;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> field = {"o...o.....o........oo...o..oo....o.oo....o.o....oo", "o...oo.....o..ooo..o...o.o.....ooooo..o.o.o...o...", ".o...o....o.ooo....o.o.....o......oooo.......o.o..", "....oo.....o.o...o....o..o....oo...o....o.....o.o.", "oo..ooo.o....o.....o.o.o..ooo.o.oo....ooo.o......o", ".o....o..oo.o.....o.o.....oo..o....ooo.......ooo.o", "......o.......oo.o...o.ooo...oo.....o..o....oo.o.o", "o.o.o.oo.oo..o.o.oo...........o...o...o....oo....o", "..........o.o.oo..o...ooo...ooo.oo.oooo.o.......oo", "...............o..o..o...o..o..o......o.o....o.ooo", "oo...........o.o.oooo..oo.o...o....o..oo.o....o..o", ".o...oooo..o..o.o.o..o......o.......o.o.oooo......", "...oooo..oo.o.....oo..o.oo..ooo.o...ooo.....o...o.", "....o.ooooo.......oo.....o........ooo......o.....o", "oo..o...o..o.....o.o....................o.o.....o.", "...o......o.....oo..oo...o....o...o...o.o..o.....o", ".o..o.oo.o.o.o.o..oo.oo......o.o......oooo.o.o....", ".o..oo.o.o.o.o.......o.........o.o..o....o...o....", ".....oo.oo........o.oo.....o...o.oo.....ooo......o", "o...oo...o.oo...o..o.oo.o..o.ooo.oo...o.......oo..", ".oo...oo.oooo..ooo........o..o.o......o....oo.....", "....ooo.......o..o...oo.o.....ooo..oo.o.....o.oooo", "..o.ooooo...o.o....o.o.o.oooo...oo........ooo...oo", "o.......o..o.ooo..ooo.o......o......o..o......oooo", "o..o..o....o..o.....oo......o..............o...o.o", ".......ooo....oo.o.oo.o...o........o..o..o.ooo....", "oo..oo..........o.....o.oo..o..o...o..o.o.....o...", "o..o..oo.....o..o...............o.o...o.o..o.o....", "o.....o.o.o.o.o.....ooo....o..o.......o........o.o", "....o.o.o....o....oo.o...o....o..........o....ooo.", "o...o......oo.....o.ooo.oo..oo..o.......o.........", "....o..oo...o.o..oo.o..oo...........oo......ooo..o", "...o........o....o....o.o..o..oo....o.o.o...o..o.o", "o....o.o.o.ooo...o.o....o.o...o...oo..o...o..oo...", ".o...o...o...o..ooo.......o...o.....o...o...oo...o", "..o..o.o.o.....ooo......oo.oo..o.oo....oo.o.......", ".....o...ooo.o......o.oo.o..oo.o.oo..oo..o...o.o..", "..o...o.o....o.o..o.oo..oo.o.........oo..ooo..oo..", "...............o....ooo.....oo........o.o..ooooo.o", "o........ooooo..o.o...o.o......o.........o.......o", ".o..o.........o...o..oo..o.........oooo.....o....o", ".....o............o..oo........oo...o..oo..o.o....", "..ooo..oo..o....oo..o..o...o....oo..o..o..oo..o...", "..o..o.o...o.o.o............oo.....oo....o........", "o.o..ooo.o...o........o.......o.oo....oo..o...o.o.", "o.oooo.o.ooo....oo....o.o.o.o....o.............ooo", ".o...o..o.....o.o......ooo.o.......o......oo....o.", "..o....oo...o.....oo..ooo....o..o.o.o..o.o.o..oo..", "...o.oo..o.o.o.o..o..oooooo.o....oo....o..o......o", "oo.o..oo..o........o.o.o...o....o........o.o...o.o"};
    int K = 1000000000;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 106461531000;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> field = {".o.....o..o.o..ooo......oo.o.....o...o.o....o..oo.", "...o.o.o.....o.............ooo.o..o..oo....o..ooo.", ".......oo.......o..o..ooo..o......oo..oo.o........", "........oooo.........oo..........o..o.o......o.o..", "..o......o.o.o.......oo.o..oo...o.o.....oo..o..o.o", "o.o...o..o...oo.o....o.oo..o..o...o...oo.....o....", "..o......o.........o.....o....oo..oo...oooo....o..", ".o...o.....oo....o..o..o.o..o....o.....o...o...ooo", ".oo.o....o....o...........o......o.ooo.....o..oo..", ".....o.oo...o....oo.o.o.o......ooo..o...o......oo.", "o........o..o..oo...oo......o.........o.o.o....o..", "..ooo.o........oo..o.o...o.o...ooo.....o...o...oo.", ".......o...oo.o..o....o.o...o..oooo.o........o....", "...o..o......o...o..o...o.o.o.......oooo.o....o...", "o.oo..oo.....o...o.o....o..oo...................o.", "o.....ooo...oo....ooo....oooo....o...o......oo....", "o..oo..o...oooo.o.oo.....o...........o....oo....o.", ".o.....oo..o.o....ooo.ooo.o.oo..oo................", "...oo.......o....oo...o......o...o.o.o..o...o...o.", "..oo......oo.o..o.....ooo...o.......o.............", "........o...o.....o......o.....o..oo..oo...oo....o", "..o.oo............oo...o...........o..o...o...o...", "......o.o..o....oo..........o.o.......oo..o.o..o.o", "o..o..o.....oo....o..o...o..o.o.oo...oo...o.o.....", "..oooo....oo..o.o.o.o.ooo.o....o..oo..............", "....ooo...................oooooo....oo..o...ooo.o.", "..o.....oo...ooo..o...o.oo.oo.......o..o....oo.o..", "...oo....oo..oo.o...o...oo......o..o.oo...o......o", "....ooo...o.........o..o..o...oo.o....oo.o....o.o.", "o.o.o....o.o.o.oo........o........oo..o.o...oo..o.", ".o.oo.....ooo...o..o.o......o.o.....oo.oo...oo....", "o.o.....o...o..ooo...o...oo.oo.o..o....o..o..oo...", "o..o....o..o.o....o..oo.oo......o.o........o......", "o.o..oo.......o.oo...ooo.o..............o...o.o...", ".ooo..oooo..oo..o..o..ooo.oo..o.oo....o.........oo", "o......o.o....ooo...o.oo.....oo....o............o.", "o..o.o.ooooo.o..oo.o..oo.ooo..ooo...oo..o.o.......", ".......o...o........oo.o......o.o..oooo.o.......o.", "o.o.....o.oo.o.o.o.oo....o.o.o......o.o...o......o", "....o..o.o.....o......ooo.o.........o......oo.....", ".......o...o......o.o.........oo...oo....o.oo...o.", "..oooo........oo....o...o..o...o...oo.o...ooooooo.", ".o.o...o....o....o.....o..o.o........o..ooo......o", "..ooo....oo...o......o..ooo......o.oo.oo.o..o..oo.", ".o...oo.o.....oo.o..o....oo..oooo..o.o.....o.o.o..", "......oo...o....o...o....o.....o....o...oo....o...", ".o.....o.oo..o..o.........o...o.oo..o....o.o....o.", "...o.............ooooo..o.o..ooo..o........o..o..o", "o.o...o......o.o....o........o....o.o....o.o..o.o.", "o..o...o.....oo....ooo...........oo.....oo..o.oo.."};
    int K = 1000000000;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 100412580375;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> field = {"o"};
    int K = 1703;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 25925;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> field = {"o"};
    int K = 2346;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3125;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> field = {"o"};
    int K = 6358;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 24565;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> field = {"o"};
    int K = 5724;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 25925;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> field = {"o"};
    int K = 2466;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2125;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> field = {"o...o..o", "oooooooo", "......oo", "o.o.o.o.", "oooo....", "........"};
    int K = 999888997;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8317979215;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> field = {"o.oo.ooo", "o.o.o.oo", "ooo.oooo", "o.o..o.o", "o.o..o.o", "o..oooo.", "..o.o.oo", "oo.ooo.o"};
    int K = 987654321;
    XorLife* pObj = new XorLife();
    clock_t start = clock();
    long result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    long expected = 447104494375;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22714443&rd=14733&pm=11886
********************************************************************************
//  SRM 541 (C) 
 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cmath> 
#include <cassert> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <utility> 
#include <numeric> 
#include <algorithm> 
#include <bitset> 
#include <complex> 
 
using namespace std; 
 
typedef unsigned uint; 
typedef long long Int; 
typedef vector<int> vint; 
typedef pair<int,int> pint; 
#define mp make_pair 
 
template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; } 
template<class T> void chmin(T &t, T f) { if (t > f) t = f; } 
template<class T> void chmax(T &t, T f) { if (t < f) t = f; } 
 
 
 
struct XorLife { 
   
  vector<vint> cut(vector<vint> a) { 
    int m = a.size(), n = a[0].size(); 
    int x, y; 
    int xMin = m, yMin = n, xMax = -1, yMax = -1; 
    for (x = 0; x < m; ++x) for (y = 0; y < n; ++y) if (a[x][y]) { 
      chmin(xMin, x); 
      chmin(yMin, y); 
      chmax(xMax, x); 
      chmax(yMax, y); 
    } 
    if (xMin > xMax || yMin > yMax) return vector<vint>(); 
    vector<vint> b(xMax - xMin + 1, vint(yMax - yMin + 1)); 
    for (x = xMin; x <= xMax; ++x) for (y = yMin; y <= yMax; ++y) { 
      b[x - xMin][y - yMin] = a[x][y]; 
    } 
    return b; 
  } 
   
  map<Int,Int> mem; 
  Int solve(vector<vint> a, int k) { 
    a = cut(a); 
    if (a.empty()) { 
      return 0; 
    } 
    int m = a.size(), n = a[0].size(); 
// cout<<m<<" "<<n<<" "<<k<<endl; 
    int x, y; 
    if (m == 1 && n == 1) { 
      if (mem.count(k)) { 
        return mem[k]; 
      } 
    } 
    Int ret = 0; 
    if (k == 0) { 
      for (x = 0; x < m; ++x) for (y = 0; y < n; ++y) if (a[x][y]) { 
        ++ret; 
      } 
    } else { 
      if (k % 2 != 0) { 
        vector<vint> b(m + 2, vint(n + 2, 0)); 
        for (x = 0; x < m; ++x) for (y = 0; y < n; ++y) if (a[x][y]) { 
          b[x + 0][y + 1] ^= 1; 
          b[x + 1][y + 0] ^= 1; 
          b[x + 1][y + 1] ^= 1; 
          b[x + 1][y + 2] ^= 1; 
          b[x + 2][y + 1] ^= 1; 
        } 
        ret += solve(b, k - 1); 
      } else { 
        int rx, ry; 
        for (rx = 0; rx < 2; ++rx) for (ry = 0; ry < 2; ++ry) { 
          vector<vint> b(m / 2 + 1, vint(n / 2 + 1)); 
          for (x = rx; x < m; x += 2) for (y = ry; y < n; y += 2) { 
            b[x / 2][y / 2] = a[x][y]; 
          } 
          ret += solve(b, k / 2); 
        } 
      } 
    } 
    if (m == 1 && n == 1) { 
      mem[k] = ret; 
    } 
    return ret; 
  } 
   
  long long countAliveCells(vector <string> field, int K) { 
    int M = field.size(), N = field[0].size(); 
    int x, y; 
     
    vector<vint> a(M, vint(N)); 
    for (x = 0; x < M; ++x) for (y = 0; y < N; ++y) { 
      a[x][y] = (field[x][y] == 'o') ? 1 : 0; 
    } 
     
    mem.clear(); 
    Int res = solve(a, K); 
    return res; 
     
     
  } 
   
};

********************************************************************************
*******************************************************************************/