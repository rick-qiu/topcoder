/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11890
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

class NonXorLife {
public:
    int countAliveCells(vector<string> field, int K);
};

int NonXorLife::countAliveCells(vector<string> field, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<string> field = {"oo", "o."};
    int K = 3;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
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
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
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
    vector<string> field = {"o"};
    int K = 1000;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2002001;
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
    int K = 1234;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3082590;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> field = {"oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo"};
    int K = 1500;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4799500;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> field = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int K = 1500;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
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
    vector<string> field = {"...", "o..", "..o"};
    int K = 40;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3442;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> field = {".o..", "....", "....", "...o"};
    int K = 27;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1676;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> field = {"o..o.", ".....", "...oo", "..o.o", "....."};
    int K = 50;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5660;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> field = {"....o.", ".o...o", "......", "oo...o", ".....o", "....o."};
    int K = 89;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17285;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> field = {"o.....o", ".o...o.", "ooo..o.", "...ooo.", "o.o....", "o..o...", "o...o.."};
    int K = 25;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1874;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> field = {"o.oo...o", "...o..oo", "........", "....o...", "...o..o.", "...o....", "o.......", "o...ooo."};
    int K = 46;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5603;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> field = {"oo...o..o", ".o.....o.", "..o.oo..o", "....o.o..", "..o.o.o..", "...o...oo", ".........", ".ooo...oo", "...oo...."};
    int K = 42;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4879;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> field = {"o.oo......", ".o.oo.....", "...o..o..o", "o.....o...", "........oo", "o....o....", "o..o..ooo.", "o.o....o..", "...o.....o", "..o......o"};
    int K = 11;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 680;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> field = {"ooo..oo....", "..o.......o", "...........", "..o.oo.o...", "o..o..o...o", "o.oooo..ooo", "....o...o.o", ".....o.oo.o", "....o...o..", "o.o.....o..", "o.....o.o.."};
    int K = 13;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 935;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> field = {".......o.ooo", "..o..o.o....", ".o..o..oo...", "...o...o....", ".ooo........", ".o..oooooo..", "............", "o....o.o...o", "..o.o...ooo.", "o.o.oo...oo.", "....oo......", "oo.o.....o.."};
    int K = 64;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10914;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> field = {"o.o..oo.o...o", "o........o...", "...o...oo.o.o", ".o.......o..o", "......o..o.o.", "o............", ".....o.o....o", "o.....o..o...", "..o....o.o.oo", "...oo..ooo...", "........o..oo", "ooo.o.o.o.ooo", "oooo...o...oo"};
    int K = 94;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22512;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> field = {".......o.....o", "..oo.....ooooo", "......oo..o..o", "..oo.o..o.ooo.", ".oo.....o.....", "......o....o..", ".oo.o.........", "oo....o..oo.oo", ".ooo.o...o..oo", ".....ooo.....o", ".oo.oo...oo..o", "....o..oo.o...", "o..o...oo.....", ".....oo...o.o."};
    int K = 25;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2620;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> field = {"ooo....oo.....o", ".....o...oooooo", "....o.o.ooooo..", "...ooo.......o.", "......oo...o...", ".o...o......oo.", "o.........o.ooo", ".......o.oo...o", "o..oo....o.....", "..........o.o..", "ooo..o....o....", "...oooo.o....o.", "...oo..o..o..oo", "..ooooooo....oo", "...o....o..o..o"};
    int K = 41;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5794;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> field = {"........oo.o.oo.", ".o.o..oo..oo..o.", "o...o.o...o.oo..", "......o......o.o", ".oo.o.........o.", "......o.o...oo.o", "......o.o..o....", "..o..oo.....oooo", "....o.oo...o..o.", ".o.o......ooooo.", ".........o..oo.o", "o..oo...o.......", ".o......ooo..o..", "...o...o.....oo.", "...o..oo..o...o.", "......oo.o...o.."};
    int K = 65;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12092;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> field = {"o.o...o.o.o.oo...", "..oo..o.o....oooo", "......o.oooo....o", ".o...o...ooo.o.oo", ".ooo....o..o.o.o.", "....o...o...o....", "......o......ooo.", "o...o.o.....o.o..", "....o.o..o...o...", ".....o....o......", "o.o...o....o....o", "...o.o.....o....o", "...o.o..ooo.o.o..", "o...oo.......o.o.", "o...o...o...o...o", ".....o...o..o...o", "........o.o.ooo.."};
    int K = 48;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7817;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> field = {".o....ooooo.o.....", "..oo.ooo.o.o...o..", ".....oo.......oo..", "o........o.......o", "o.o......o.o.o.o..", ".o...oo.....oo....", "..ooo..o.oo.......", "o...oo..ooo.oo..oo", "....o..o.o........", ".o..o....o.o.o..oo", "........o..oo.o...", ".o.o...o.....oooo.", ".....o..oo..o.o.o.", "o.oo..o....o..o.oo", ".o..............o.", "o.........ooo.o...", "o...o...o.o..o....", "...o..o...o.oo...."};
    int K = 67;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13333;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> field = {"oo............oo...", ".....o.o.......o.o.", "........o......ooo.", ".o.o.o.........oo..", ".o.oo.oo...o.o.....", "...oo.o.o...o....o.", "...o...ooo..ooooo.o", "..ooo...o..o.ooo.o.", "o..o..oo.oo.o....oo", "..o.o.o.....oo.....", "o..o....oooo..o...o", "....o..o..o..ooo.o.", ".......oo.o.ooo.o..", "ooo.....oo..o......", "..o..o......oo.o...", "ooooo.oo...........", ".....o..ooo........", "...o....o.o...o.oo.", "o...ooo.o..o..ooo.o"};
    int K = 73;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16198;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> field = {"......o......oooooo.", ".......o..ooo.....o.", ".o.oo....oo..o..o...", ".o...oo.oo..o.o.....", ".o.........o...o...o", ".oo.o..oo......o.oo.", "..........o..o....o.", ".oo...o......o......", "o...oo...oooooo.o...", "o.o..o....o...ooo...", ".o........o.o.o.....", "o.oo...o..o.oo......", ".......o....oo.....o", "..o.oo.o...ooo..o...", "..o..o.....o.o....oo", ".o.o..o....oo..o...o", "oo...oo..o..oo.....o", "o.o.o.....oo....o...", ".....oo...o.o.......", "o.o...o...oo....o..."};
    int K = 56;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10573;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> field = {"...o..............o..", "..........oo.oo.ooo..", "oo..o.o..ooo.........", "o...oo......o...o....", "o.o...........o..o..o", "........oo.o.ooo.o..o", ".oo.oo...o....oo.oo..", "o.......o..o.oo.oo..o", "...o...........o.oo..", "..oo.o..ooo...o...o..", "oo.......o..........o", "o.o.....ooo...o...o.o", "o...o.oo...o...o....o", ".o.......o..oooo.o..o", ".oo.oo........o...o.o", "...o......o..oo..o..o", ".....o..oo.....o...oo", "..oo.o........o.o..o.", "oo.oo...o..o..oo.....", ".o...ooooo..........o", "o.o........o........."};
    int K = 14;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1829;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> field = {"..o......oo....o.oooo.", "oo........o..o.......o", "o....oo.ooo....o...o.o", "o.o..oo.oo......oooo..", "oo........o.oo........", "oo..o........oo.......", ".oo....oo........o..o.", "......oo...o..o..ooo.o", "oo.o.....o..o.o......o", "...o.o.....oo....oo..o", ".o.o.o.oo..o.oo...o.o.", ".....oooo.oo...o.....o", "o...o....oo.o...o..o..", "..oo....o.o..o.....o.o", "ooo.........oooo....oo", ".....ooo..o....ooo.o.o", "o.....oo..o..o.o.o....", "..o...o..o.o...o......", "o.......o....o........", "..o..oo..o.oo...o.o...", "..o..o.o..o.......o...", ".ooo.......oooo.o....."};
    int K = 19;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2640;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> field = {"...o....oo..oo.o.....o.", "o.oo...o.o..o..o....o.o", ".ooo...o..o........o...", "....ooo.ooo..o.o.....o.", "o.ooo...o....o.....o...", "oo...........o..o.o..o.", "...o.........o.......o.", "o..o..o....o..o..o..o.o", ".o..o...o...o......o...", "...oo...o.....oo....o.o", ".oo.oooo.oo.o..oo......", "...o.o.o.oo..o....ooo..", "ooo..o....o..........o.", ".oo.ooooo..............", "..oo.oo...oo..o..o.....", ".oo...oo.......o.......", ".o..o.....oo..o..o..o.o", "...o.o.......oo.o.o.o..", "..o....o.....o..o.oooo.", ".o.oo...o.o..oooo..o...", ".o...o.o..oo......ooooo", "..o.o.oo.o.o......oo...", "..o...o.o....o..o......"};
    int K = 44;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8012;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> field = {"o...o...ooo.oooo.....o..", "o......oo..oo...o....o..", "..ooo...o..ooo....o...o.", "o.oo.oo.o..oo.o..oo....o", "...o.o...o...o......oo..", ".o............o..o...o..", "....o..oo.oo......o.....", "..o......oo.oo.o..o...oo", "........................", "......o...o.....o.....o.", "o....o....ooo.oo...oo...", "..o.oo...o...o......o...", "...o..oo.ooo.o.oo..o....", "o.........oo.o.o..o...oo", ".......o.o.....o.o..o..o", "oo..o....o........o.o...", "oo.oooo.......oo.......o", "o..oo.oo...ooo.o..ooo..o", "o..oo......oo..o.o......", "o.o.....o.oo..o..o..o...", "...o..o............o..o.", "oo...o..o..oooo...o...o.", "...o...oooo.....o..o....", ".oo.o..o..o.oo.....oo..."};
    int K = 89;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24177;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> field = {".o..o......o.......o.o...", "o..o..oo...ooo..o.o..oo.o", "...o....o....oo.o..o.oo..", "......o...o........oo....", "o.......o....o...ooo..o..", "...o........o.oo.o....o..", ".......o.o.......o...o...", ".....oo.ooooo.ooo.o....o.", "o..ooo.......oo...oo.o..o", "......o..o.ooo.....o...o.", ".o.oo...o.o..o...oo..oo..", "o...o..oo..o.o......o.o..", ".oo...o....o..........o..", ".....o....o.o.o..oooo..oo", "......o.o...o.o.....o.o..", ".ooo....o...oo.oo.....o.o", "...o.o.oo..o.o.o.o.......", "o.o....oo.o....o....o.o..", ".....o.oo.o....o.o..o..o.", "....o...oo...o.....oo....", "o...o.....o.o..o...o...oo", "o.oo.o..o.oo.o......o.o..", "......oo..oo.o.o..ooo.o..", "oo....o.....o.o.oo..oo..o", "oo...o....o...oo.o.o....o"};
    int K = 65;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15227;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> field = {".ooo...ooooo..oo....o.....", "oo.oo....oo.o.o..........o", "o.o...o......o..........o.", ".......o.........oo...o.o.", ".....o........ooo..o.o..o.", ".o..oo......o.....o.o.oo.o", ".o......o..o....o....o....", "o......o.o..o.........o.o.", "..oo.o..oo...............o", "o.....o.o...o.ooo....o.o..", "o.o.oo........o..oo.oo..oo", ".oo..o...........o......oo", ".oo..oo......o....o...o...", ".oo..o...ooo.o..o.oo......", "o.oo.....ooo.........oo...", "o....o.oooo....o...o..o...", "..........oooooo.o....oo..", "......o.o..o...o.....o.o..", ".o....ooo.o...ooo.o.o.....", ".ooo.....o..oo..o....o.o..", "....o..o........ooo.ooo.o.", ".o.oo......o....o.......o.", "....o.....o..........oo.oo", ".........oo...o..o.o.o...o", ".....oo.....o......oo...o.", ".o...ooo....o...o.oo.oo.o."};
    int K = 11;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1904;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> field = {".o...oo...o...oo...o..o....", "..o.oo.oo......o....ooo....", ".......oo..o.o.........oo..", ".ooo.....oo....o..........o", "...o......oo.o....o.oo.....", ".o........oo......oo..o.o..", "oo..o.........o......oo....", "oo.o.oo.o......o..o...o..o.", "o..oooooo........o..o.ooo..", "..ooo.oo.o.o.....o.....o.o.", "..oo..o................oo..", "o......ooo..oo...oo..oo....", "o...o.o.........o...o.oooo.", ".o..o...o..ooo.oo.o..oooo..", "o..o.o.o....o...o..o...o..o", "..oooo.o.........o.oo..o.o.", ".o......oo...o.....o...o.o.", "......o.....o.o......oo...o", "....oo.....o...o....oooo.oo", "o......o.o.o.........ooo..o", ".ooo.oo..o..........ooo....", ".o..o..o.o..o.o....o..o..o.", "o.....oo...o.oo.......ooo..", ".o.......o....o.....o..o...", "ooo.oo......oo...oo..o.....", ".o..oo....o..o..o...o...oo.", ".o.o.o...oooo.oo.o..o.o..o."};
    int K = 12;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2128;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> field = {".o..ooo....o........o.o.o...", "..oo...oo..o.......o.o..o..o", "o....oooo.o...o.o.o..o.o..oo", ".........o.o..........o.....", ".o....o...oo..oo..o..o.ooo..", "....ooo.oo....oo.o......oo..", "o.....o.o.o........o.o...o..", ".....o....o....oo.oo.o.o....", "o..o....oo.o.oo.o....o..o...", "oo.o.o.o.oo.oo..ooo.oo.oo...", "o.o.......oo....o...ooo.oo..", "oo.o..o........oo...ooo...oo", "oo.o..o..............o.o...o", "o.....o.oo..o....ooooooo....", "o..o...oo...o.o...o.o...oo..", "o.o.......o......o.....o....", ".o...o....o.oo...o...o...ooo", ".o....o.o..o...........o....", "o..oo...o.....oo..oo...o..o.", ".....o..o.o..oo.o.o.o.o....o", "....o....o.o............o...", "o.......ooo...o.oo.o..oo..oo", ".o.o...ooo...oo.oo.......o.o", ".o.ooo....o.o..o..oo.ooo..o.", ".oo...o.....o.o.....o..oo...", "....o..ooo..o.o..o....o....o", ".ooo..o.o....o.......o......", "..o.o....oo....o...oo.o..o.."};
    int K = 42;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8587;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> field = {".......o..o...oo.oo...oo....o", ".o....oo................o..o.", ".....o.oo....o.o..o.oo...o..o", "..o.o..o.o.ooo....oo.o.ooo.o.", ".....o.....o..o...........o..", ".....o....o..o......o.....oo.", "...oo.o...o..ooooo....o.....o", "....oo....o.o.o.o....o.......", ".o...o...o...o...o.o.....o...", ".o.o..ooo...o....ooo..o....o.", "o.o.oooo.o.....o.oo.o.oo...o.", "o.o..o....ooo.oo.o...oo......", "o...o..o......o...oo...ooo.o.", "o...o...oo..oo.o..o.oo....o..", ".o.oo..o.o..o..oo.........o..", "..ooo...o..ooo.oo...oo...o...", "...........o.o......o.o..oo.o", "......o.....o.....oo........o", "o....o...o.o......o.o.oo.ooo.", "...oo..oo...ooo...o.o...oooo.", "..o....oo.ooo....o..o.....o..", "..oo.oooo..o....o.oo......oo.", "....o...o..o.......o.....o..o", "...o..o......o..o..........o.", "..o.o..o.ooo.....o.......o...", "o.oo..o......o....o.oo..o...o", "...o.ooo.........o.oo.o.o.ooo", "......o..oo.oo.o....o...o..o.", ".o..o...o.......o..........o."};
    int K = 21;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3906;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> field = {".o..o..oo....ooooo.oooo..oo.o.", ".oo.o........o..o..........o..", ".o..oo......o.oo..oo..oo...o..", ".oo.........oooo....o......oo.", "....ooo..o.oo.o..o.....o......", "..o.....oo..........o..o.o.o..", ".oo............o.o.o...ooo.o..", "o...o....oo......oo..o.o..o.oo", "..o.o...ooo........o.....oo...", "oo....o.ooo...o.....o.o...o...", "o......oo.o....o..o...o...o.o.", "oooo.o..o...o...o..o.oo..o..o.", "....o.oo.o..ooo..o.o..........", "...o.o...oo..o..oo......o.o..o", ".o....oo...o....oo.....o......", ".o.oo..o.o.ooo.o.............o", "..o..o...ooo.o.oo...o.........", "..o.......o......o.oo.....o...", "oo..o..oo..o........o.oo..o...", "...oo...o..o....o..ooo.....oo.", "...o.oo...oo..oo.o...........o", ".......o......o.o...oo..o...o.", "........o.....oo..o..o.ooo....", "....o.o.ooooo..o.......oo....o", ".....oo.oo......o...o.oo....o.", "..o....o.o..o...o..ooo..o.....", "ooo.o..o...oo...oo....ooo.o...", "..........oo.o.oo.......o.o.o.", "....o.........o..o.oo........o", "oo.ooooooo..oo..o......o..oooo"};
    int K = 38;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8099;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> field = {"..oo.............ooo.oo.......o", "ooo.......o....o..o..ooo.oooo.o", "..o..o......o.o...o...oooo.....", ".oooo.......oooo.o....oo...oooo", ".o.o...o.o..o...oo..o.ooo......", ".......o.oo.....o.o...o........", "..oo..o..o......o.......o.o....", "..o...oo......oo.ooo..o..o.o...", "ooo.o...oo..........o.oo......o", "o.....o..o......ooo....oo.o...o", "....o.o.oo.....o......oo...o...", "...oo.oo..o...ooo......o..o...o", "oo.oo..o.o......o...o......oo..", "o.......o..o.o.........o..o.o..", "......oo......o...ooo....oo....", "....o...o....oo...o....o..oo.oo", "...........o.o...o...oo.o.o....", ".oooo.......o.o.......o.o.o....", "oo..oo...o....o...oo....o..o.oo", "oooo...o..oo...o..o....o.oo.oo.", ".....o.......o...o.o...........", "oo.o..oo...o......o.....o..oo..", ".....oo....o.o................o", "...o.o..........o......oo.....o", ".o..o...oo...o......o..........", "..o.o..o.....oo...o...oo.......", "oo.oo.oo.o.o.o..oo....o....o..o", "..o..o.o............oo....oo..o", ".o.o...oo..ooo.oo.....o.o..o.o.", ".oo...o.....o..o.o.o...o...oo..", ".......ooo......ooo.....o.o...."};
    int K = 16;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3209;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> field = {"o.oo....o..o........o.o....o.o..", "o..............o....o..oo...oo..", "...........o....o..o.o.o....o..o", "..o.o................o.o......o.", "oo...oo.o.o..oo..oooo.....o.....", "...oooo............o.o.oooo...o.", ".......oo..oo..oo..oooo..o......", "o..oo.....o.oo..oo..o...o....o.o", "oo...oo.....o.o..o.....o...oo..o", ".......o.o......o..oo...o......o", "..o....o..o...oo...o..oo..o..o..", "..o.o......o........o.ooo..ooo..", "..oo..o....o..o..o...ooo....oo..", "...ooo..oo.o..o........o....o..o", ".o..o...ooo...o..o.....o.oo..o..", "......o.....o.......o.....o...o.", "..oo.......o.o.o..o....o..o.....", ".o.oo.........oo...o.oo..o...o..", "......o..o......o...o..oo....ooo", "...o..o...ooooo........o..o.o.o.", "oo....o.o.o..o..oo.o...o....o...", "o......o..........ooo.o.........", "o..o....o........o..oo.oooo..o.o", "oo...oo......oo.....o.....o....o", "o.o..........o....o...o.o.......", "..o.......o....o..oo...oo....o.o", "....o.....o...o.oo.ooo..........", "..o.o....o...o......o..o.o.o....", "..o...o........oo.o.o...o......o", "o...o..o......o...o.oo.oo.o...o.", "....ooo.....o......o..o.........", ".oo..........oo..o..o.o...o..oo."};
    int K = 20;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4146;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> field = {"o.o..ooooo..o..o.oo......o.....o.", ".....o..o..o...oo.o......oo......", "o.o.oo..o.o.o......oo..o...o.....", ".o.....oo.o.....oo...o..o.ooo....", ".o.......o....oo..o.o.....o..oo..", "..oo.oo...oo..o.oo..o...o.o.o..o.", "..oo.o..o.oo....o.o.o..o..o...oo.", "....oo.o..o..oo..oo..............", "....oo..o...o..........oo...oo...", ".o...o.oo.oo....o....oo........oo", ".o..o......o.o..o..o....o...oo.o.", ".o.o....ooooo.o.......o...o....oo", ".....oo..o.o.o..o.o..oo..o......o", "o.oo...o.o........oo...o....oo..o", ".....oo...o....ooo..o.........oo.", ".......oo.o.o.oo..o.o...ooo......", "o...ooo..o.o..o.o.ooo............", "...o....o..o......o.o.....o......", ".o...o..oo.o...o.oo......ooo..oo.", "o.oo....o.oo.o...o.....oo..oo..oo", "....o....o.o...o.ooooooo...o..ooo", ".ooo.............o......o..oo....", "...o..o...............o..........", "oo..o......oo..ooo.o..o..o..o...o", ".o...o..o.........o..oo....oo....", ".o..o...............o...o...o..o.", ".ooo.o..o...o....o......oo...oo..", "o.o.oo.ooo.oooo....o.o..o...oo.o.", "....o.......o.o.oo...oo......o...", "..o..oo.........o.o......o.......", "o..o.....o...o....o.o.o...oooo.o.", "......o.o.o...ooo.o..o...ooo.o...", "......oo.oo..o...o............o.."};
    int K = 59;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15289;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> field = {".....oo.o.o..o.o.o..ooo.oo.oo...o.", ".o..o.....o..oo...o.....o.oo.oooo.", "...o.........o..oo.......oo......o", "oooo.ooo.o.....oo.....o..o..o....o", ".o..o..o.o.o..o.....o.o.........o.", "o....o.o..oo.oo.oo.o...o.oo.o..ooo", "....ooo...o......o.....ooo...o....", ".o..o....o.o......o..o.o.o..oo.oo.", "....o.ooo......o..o.o......o.o.o..", "......o....o..o..oooo...oo.oo..o..", "....oo.oo..o.o.o...o......o..oooo.", "oooo....o....oo.o..........o.....o", "oo....oo..o........oo.o.o...o.oo.o", ".o.ooo...oo.o.oo..o...o.oo..o.....", ".......ooo......oo...o.o.o.o...oo.", "....o...oo..o.o.o......oo.....o.o.", "o..o.o.o....o.......oo..o.......o.", "o..oo.o..o.o.oooo.....o........o..", "o...ooooo.o.o.o.o.oo.oo..o....o.oo", ".o....o.......oo...ooo..oo.oo.....", "........oo....o.oo..o...o.......o.", "...................o........ooo...", "oo.o..o......o..o..o.oo.o....o.o.o", "..o.o.o..o....o......ooo.o...oooo.", "o..oo.o.o...ooo.o...o........oo.o.", "...o.oo.o...o.o.o.o..o.o.....o....", ".......o.o.....o.ooo.o.oo.....o...", "..........o.oo.o..o...o.ooo.......", "..oo..o......o........o.o.oo.o....", "..o.ooo..o..o....o........o.....oo", "..oo.o...o.......oo....o.oo.o...o.", "..o..o..o..........oo.ooo...o...o.", "o...o.....oo.o...o....o.....o..o..", ".......oo..o.............oo.o...o."};
    int K = 15;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3416;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> field = {"..o.o.....o..............o..ooooo.o", ".oo.ooo........o.....ooo...ooo...oo", "......o..oooo..o.......o.o....o.o..", "....o...ooo...o............o..ooo..", ".o...o.....oo....o..o..ooo...oo..o.", "....oo.o.o.o.o......oo....o.o.o.o..", "oo.o.ooo....o.ooo......o..o..o...oo", "...o...o.oo.o.o.o.oo....ooo..ooo...", "....o.....oo...oo.oo..oo.o.o...o...", "o.o.o.o.oo..o...o...o.o..ooo...oo..", "......o.o.o.o....o.....o..o....oooo", "o......o...o...o......o.oo.......o.", ".o..oo....oo...oo.......o..o...oo..", ".........o.o.....o..o.o.....o...o..", "oo.o..ooo.o..o.......oo.o....o.....", "o...o.oooo..o.o..o..o.o.o..........", "..o...........o.o.oo.oo..o....o..o.", ".oo.o.o...o.o...oooo.o.oo.o......oo", "..oo..o.o....o.o.o..o.oo..o......o.", "........oo.......o..oo....o.o.o...o", "...o...o..o...o.o...oo.oo.o...o...o", "....o.o.....o..o.oo..o....o........", ".....oooo.o..........o....o........", "...o...o...o.o......o........o..ooo", "oo.o.o..oo.o..oo.o..o....o....o..o.", "o...o.o.......o.oo..ooo..ooo..o.o.o", ".oo..o...o.ooo...........oo.oo..o..", "....o..oo.oo.o..o.oo..oo.oo.......o", ".oo...o....o..............o.o......", "...o....oooooo..o..o.oo.o.o....oo..", "..o...o..o.......o........o...o..o.", "....o.o.......o.......ooo..o..oo.o.", ".o...o..o..o.o.....o...oo.o.o.o.o..", "..o.o......o...o...........o..o..oo", ".....oo.oo.o.o.o....oo....o.o.o..oo"};
    int K = 91;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 29752;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> field = {".o.........oo.o....o...o.o..oo..oo.o", "o............o...o.oo...oo..o...o...", ".....o...o..o...o....ooo.o....oo.ooo", "oo..o..o.o..o....o..o...........o.o.", "o.o...oo..o..oo.o...o.....o...o..o..", ".oo.oo...o....o.....o..oo..oo.ooo...", "o.oo.....ooo......o.o......ooo.ooo.o", "............o..o......o......o.....o", ".o..o...o..........oo..oo.....o.o...", "o..o..oo.....o...oo.oo..o.o.o.o.o..o", "........ooo...oo.o.oo....o..ooo.o.o.", "..oooo..oo.....o..oo.oo...o..o.o....", ".o...oo..o.oo.oo..o............oo..o", "....oo.ooo.oo............o.o.....oo.", "..........ooo.o.......o......o...o..", "....o..o.o..o.o..ooo..o..oo..o.....o", ".o.o.........o...oooo........oo.o...", ".....oo.oo.ooo...o.oo..oo......oo...", "...oo.o.....oooo.oo...o..o.oo.oo....", "...o.o.o..o..ooo..o..o.o.....o...ooo", ".oooo....oo....o....o......o....o.oo", "o...oo.........o..o..o...o.....o...o", ".o.ooo..o.o....o......oo....o.ooo.oo", "....o.oooooo.o.....o...o.....o...o..", ".....o.....oo...oo.........o....o.oo", "o...o.oo.o..oo.o...oooo........oo...", "...o...o..oo..o.oo.o.......o.o.o....", ".o.oooo...o..o..o.o..........o.ooo.o", "..o..........o....o..o..oo....o....o", "....o.....o..o...o..o....o........o.", "o...oo...........o.......o.oo.......", ".............o.....ooo.o.o.....o.o..", "...oo......o...o.......o.o.oo..o.o..", "....o.....o...o.o.o..........oo.....", "..o.o.o..o..oo...o....o...oo........", "......o.o..o..........o......o......"};
    int K = 36;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8523;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> field = {"o.o..ooo.....o...............o.....o.", ".o...ooo.....ooo.o...o...............", "..o..o.......o......o...ooo....o.oo..", "oo...oo........o......ooo.o.o..o..o..", "..o..........o...o..ooo....oo....oo..", "..o..o......oo...ooo..o.o..o..o......", "o..o...o...o.....oo..o...oo..oo.oo...", "....o...o...........o..o.o..ooo.....o", "o......o..o.o.....o....o....o..o..o..", ".ooo.......o..oo......o...o.....o..oo", "....o..oo....o..o..o.......o..o...o..", "..o.o..o.......ooo..oo..o.o.o.......o", "....oo....o.....oo........o.o........", "..o.o.o.o.o..o....o...oo....o........", "o....oo.o..o.o.o.oo..oo.....ooooo...o", "..o.o.o.......oo.oo.......o.oooo.o..o", ".ooo...o....ooo..o...oo...o.oo.o.....", ".oo......o...ooo.o.o......o.oo.oo.o..", "oo.oo.......o.o.oo.o......o..oooo.o..", ".oo....oo..oooo...ooo....o.oo.....ooo", "o......o.........o...oo.....o..o.....", "........o.o.........o.o..ooo..o.o..oo", ".......oo..o.oo..oo.oo.oo..o...o.o...", "oo.......o...o..oo.oo.o....ooo..o.o.o", "o..o.oo....o.....o.oo....o.o..o..oo..", ".o...o.oo..oo.....o...oo.o.ooo..o.oo.", ".ooooo.o..o..o...oo..ooo.o..o.o.....o", "o...o.....o......o..o.o..o..o........", "......oo..............o.oo..oo.o.....", ".........o....oo..ooo......o.....o...", ".o......o..oo.oo.......o.oo..o....oo.", "...o..o..o....oo..o.oo...o.o...o.....", ".o...oooo.....o....o..o..o.oo...oo.o.", ".o......o....o...o..oo....o..o.o.o.oo", ".o..ooo.o...o...o...oo..oo...........", "...oo....oo..........o.o.....o..o..o.", "......o...o..o..o.........o..ooo..ooo"};
    int K = 28;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6764;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> field = {"....o..oo.o....o.o...o..o.oo..oo..o.oo", "oo.o.o.oo.o.......o.....o.o.oo.oo.oo..", "..o.o..o.o.o..........o.o.oo....o...o.", "..o.oooo....o.o....o.o...o....o..oo...", "o.......o...o..o...oo.......o.oooo...o", "oo.o..o.oo.o.o..o..o...o...oooo...ooo.", "......o.oo..oo..o...o.o...o.....o.o..o", "o.o...o.....o......o.o..o.oo.o.....oo.", ".oooo...o..o...............o.....o.oo.", "...o.....ooo..o..oo.o....o...o...o.o..", "..ooo.o.o..o...oo...o.....o.oo..o.o..o", "..o..o..o..o.......oooo..o........o.oo", "o..o...ooo..o...o.o...................", "o.....o.o.......o.oo.........o.o......", "oo....oo....o..o...........o..........", "..o..oo...........oo.....o..o..o....oo", ".o......o...oo......o.o.oo..o...o..o..", "o...o.oo..o..........oo...o.o.........", "o.o....o.o..........o...ooo..o........", "..oo.o..o.o...oo....ooo.....o.o.....o.", ".oooo.o......o.oo..o....o..oo.o.o..oo.", "o..........o............o...o..o.oooo.", "....o..o.....ooo.......oooo........ooo", ".o.o....oo......o.o.o.....o..o..ooo...", ".o..o.....o....oo...ooo...ooo...o.o.oo", ".oo....o.o...o...o......o.....o...o..o", ".............oo.oo..o..o.o....oo.oo...", ".ooo.....o.......o.....oo.o..ooo......", ".o.o.....o.o.o....o.o..o......o...o...", "o.....o....oo.....o..o.ooo.oo.........", "o.....oo.o.........o.ooo......ooo....o", "....o.o...oo....o.o........o......oooo", "..o....oo.oo..oo.o......o.o.oo........", "..ooo.o......o.o.o.o....o...o...o.o...", "o.......o.....o.oo.oooo....oo..o...o..", "..o..o....o......o.....oo.......o.....", ".......oo.o.ooo.......ooo......o.oooo.", ".o.o.o.......o.......o.o.ooo..ooo.oo.."};
    int K = 52;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14322;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> field = {"...oo..oo..o...o.ooo.o........o.oo..oo.", "...........o.....ooo.o...o..o..........", "...o....oo..o.oo....o...........o.o....", "o....o.o...ooo.........ooo.o..ooo.o..o.", ".oo.o...o...o...o..oo..o....o.oo.ooo...", "o....o..o.o....oo..o......o.....o..ooo.", "o......oo......o...ooo.o.........oo....", "......oo...o.oo.o..oo....o.....o......o", "..ooo.o....o.oo....o.oo....oooo..o.....", "........o....oo..o...o....oo..ooo......", "o.oo.....oooo...oo..o.o.o.oo.o.o.......", "o...o.....o..o...o......o.........oo..o", ".o..ooo.....o.o.o...o.o..oo...o..o...o.", "ooo.o............o....o..o.ooo.........", "..o...o..oo.oo....o..o....oo.o.oo..oo..", ".....o...oo...oo...oooooo..oo..oo.o....", "ooo.o.oo...o............o...oo...o.....", "...o..ooooo..o......o...ooooo..o..o.oo.", "ooo...o.o.....ooooo...o..o.ooo...o...o.", "o....oo........o..oo....o..o...........", "....o.o.o..oo........o..o.oo....o...o..", ".......o..oo.....o.o.o........oo.......", "o..o....o.......oooo.oooo...o.oo...oo..", "...o.o..o...oo.o...o..o.o..o......oo..o", ".....o.......o...ooo..o.o...o.........o", ".o..o..o...o..oo.....o.....oo.....o.o..", "ooooo.o..oo.oo....o.o..o..oo..o..o..oo.", "...o.o...o....o.o...oo.oo....o..oo.....", ".o..oo.o.o.o.....o..o......oo.o.ooo..oo", "..o....oooo...o...oo......o........oo..", "..o............o.o..oo...o...o...o.oo..", "..o.....o.oo.....o...o......oo....oo...", "...o............o.o....o.........oooooo", "o..........o...o....o.........o.....o..", ".o.....oo..o.o.....o..ooo..oooo...ooo.o", ".......o.oo...oo...o.o.o...o.ooo.o.o...", ".........o....oo.....oo..o..o...oo....o", "....o....o.....o.o.......o.oo.......o..", "o..o..o......o..o..o.......o.....o.o..."};
    int K = 69;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21108;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> field = {".....oo.o.o....o.oo..............o....oo", "..o...........o....o.o....oo...o.oo.....", "..oo.oo..ooo.......oo..oo...o.....o.oo..", "oo.o.oo.....oo..ooo..o..oo...o..........", ".ooo.o.......ooo...oo...o.o.oo....o..o..", ".......o..ooo..ooo..o...oo..oo......oo..", "..o.o.o.o..ooo......o...oooo..........o.", ".....o.o.o.......o..o.o.o.......o....o..", "o.o..o....o.....o.o.o.o...oo..........o.", "oo..oo..o.o.o......o.oo.o.o........o.oo.", "...............ooo........oo.oo.....o.o.", ".....ooooo.......oooo.o.o..o..o..o.o....", "....oo...oo....o.o.o...o.oo....oo..o.o..", ".o.o.oo.......oo..o.o...o...o..o..o.....", "..oo...o..o..o.....o.ooo....o.....o...o.", "o.o........o...o...oo...o..oo...o...o..o", "oo.ooo.o....o...........ooo...ooo..o....", ".......o.o...o...o..o....ooo....o.......", "oo.oo............oo....o.oo...o..o.o....", "oo.o.oo..................o.oooo..ooo...o", "....o....o...oo....o...o..o.oo.o.oo.ooo.", "o....oo..oo....oo...o.o......o.......o..", "ooo.o..o.o....o....oo..o...oo.....o..o..", "oooo..o.....o..oooo.o.......o.o..o....oo", "....o.o.....o..o..o.......o.o...o...oo..", "...o.......o.........oo............o....", ".oo..oo.o.........o......o.o..ooo...oooo", "o.....o...o..........o.o.oo.....o..o...o", "........o.o.oooo.....o...o........oo.oo.", ".oo..o.o.............o.o....o..o.o.....o", ".o.oo.oo..o....o.......o...ooo...o....o.", ".......oo...o......o...o.oo.oo.....ooo..", "o.o...oo....o..oo.oo..o..oooo.oo..o.ooo.", ".......o..........o.........o...oo......", "o....ooo..o.............oo.o...o......o.", ".o.o.......o.oo.....o...o.o..o..o.ooo..o", ".oooo...oo.......o...o.....oooo...o.....", "o.o...oo.o.o........o..o..oo....o.......", "o.oo.oo...o.o....ooo..ooo..ooooo..o...oo", "o.oo....o......oo.ooo.o.o..o...o.....oo."};
    int K = 51;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14511;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> field = {".......oooo......oo......o.o........oo..o", "....o....o....o......o......oo...o..o.o..", "..oo..ooooooo.o.o.o.........o.oo....o...o", "...o........o.....o.........ooo.......o.o", "o..oo...o..o..oo.o..oo....oo.oo...o....o.", ".o..o..o..o..o....................o.oo...", "..o..........o...o...o..oo......o.....ooo", "o.o.o.o..oo.o.o.o..o......o.oo..o..o...o.", "oo.......o..o.oo......ooo...oo..ooo....o.", ".........ooo..o.oo...o..oo...o.....oo.o..", "...o.o..o.......o..o.oo.o.o..o....o......", "oo.oo.oo...o..o.o.oo.o.oo......oo..oo..oo", "o..o..o.....o....o.......oo....ooo.oo....", "....o.o.o.......o.......o....o..oo.o.....", "o.o.oo..o.o.......o.o...o.o...ooo..ooo.oo", ".....o....o.........o....o.o.oo..o.o....o", "o.oo........o..ooo.oo..o.o....o.o.....ooo", ".o...ooo.o...o...oo..o..o............o.o.", ".....o.oo.o.....oo........o..oo.o.....oo.", ".o.......o....o....o.oo..o....oo.o.o...o.", "o....oo..o.......o..o....o..o.o.oo.......", "o.o...o.o...o......oo..o...o..o....ooo...", "..........o.oo.o...............o.o....o..", "...o......o.........o...oo.....oooo..o...", "oo....o........o.........o.o......o......", ".oo........o..o..o...oo.o.oo.o..oo......o", "o...o.o........o..ooo....o.......o.o..o..", "..o..o.......o..o...o.o.......oo.oo.oo...", "ooo..oo.o.oo...o...oo..o.o.o.oo........oo", "....o.....oo......oo.o...o...o...o.....o.", ".....o...o.o.....o................o...oo.", "o....o....o..o.o...o......ooo......o.o..o", "o......o...oo.....oo.......o....o..o.....", ".o.o.......ooo........oo.......o...o..oo.", ".oo........o......o......o.o........o....", ".......ooo.o.o.o..o....ooo......ooo....oo", "oo.ooo.o..ooo.oo..o.ooo........o..o......", "o.o....o...o...........o.....o...oo....o.", "oo.....o...o.o.......o..oo.o.....o....oo.", "...o...o.oo.....oo............o...oooo..o", ".oo.o..o..o.o.......o..oo..o...o..o.o..o."};
    int K = 75;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24499;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> field = {"......oo......ooo...o.........o.o...o.o...", "o.....o....oo....ooo..o..oo...o...o.....oo", "oo.......o.o.o.ooo.o..o..........o...o....", ".o..o.............o.o...o..o.........o....", "o...........o.oo......o...o..oo....o......", "..ooo...o.....oo...o...o.o.o...oo...o.o.o.", "o.oooo.ooo..o..o.............oo.o.o..o.oo.", "o.......o...o..o.o.o....o...o.o.oo.o.....o", ".o..o..o........o.o.....o..o....oooo...o.o", ".....oo....o.o.....o.......o...o...o.o..oo", "o.o..........oo.oo.o.oo..o.oo...ooo.o..o.o", "....o.....o...o...oo...o....oo......ooooo.", "....oooo...o....ooo..o..oo.ooo...o..o.o.o.", "..ooo...o..oo..oo.......oo..o....o......oo", "o.o...o..o..o....oo....o...o..o.oo...oo..o", ".o...o.oo.o....o...o.o.....o..o......o....", ".o...o.o..o..ooo...o.o.......o..o..o..o.o.", "..............oo......o..oo..o.....oo.oo..", "....o....oo.....o.o.o........oo..oo.o.oooo", ".........o..oooooo.o...oo........oooo.oo..", "ooo...o.o....o...o.oo.o..o.oooo.oooo..oo..", "...o...o...o...ooo...o..oo.o..o......o...o", "ooo..ooo.ooo....o..oo..o....oo...o..o.o.o.", ".o..oo..oo..o.o.o.o.....oo....oo.o.......o", "..........oo....o.oo..o.oo.oo...........o.", "......o...oo.............o..o......ooo...o", ".o...o..oo.oooo.o....o........o...o.oo.o..", ".o.o.o...o..o....o.....ooo................", "...oo...o.o...o.ooo.oo.o....o...ooo.o..oo.", "o...ooo......oo..o....oo.......o.......o.o", "..oo.o.o..oo.o.o..o.o............o.......o", "..ooo....oo.oo.o.........oo.oo..o...oo.o.o", "...oo..oo....o...........o..o.oo........o.", ".o....ooo.o........oo....o.o......ooo....o", "o......o..o..o...........o..oo....o..oooo.", "o.o.....oo...o...o.....oo..o...o..oo..oo..", "....o...ooo.oo...o.oo.o.o.oo.o....o..o....", ".o.........o.o...o....oo.o..o...oooo...o.o", "o........o.oo..oo....oo.o.o.oooo.o.....oo.", "o..o.o.o...o.o..o.....oo.....o.oo.oo......", "o.oo.........o..o....o.o.............o....", "..o........o.....o..o...o........o..oo...."};
    int K = 53;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15648;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> field = {"oo............o...oo......oo..o.....ooo....", "..oo.......o..oo...o..o....o....o...o..o..o", "o..o..oo...oo...........o...o....ooo....o..", "..ooo.......o..o..o.oo..o..oo..o......oo..o", "..o..o....o..oo...ooo...o.o.oo......o.ooo..", ".oo.........o........o..oo..o.o..o.o.....oo", "..o.......o.o..oo.....ooo.o...o....o...o.oo", "o.....o....o.........ooo...oo....oo.oo..o..", "....ooo...o....oo.o.o......o.o....o.....ooo", "ooo..oo..oo..........oo.........o......o...", "ooooo....o.....o..o.....o..oooo....o.oo.o.o", ".....ooo..o.o......oo..o..o........o..oo...", "....o...........o.....o...o...oo.o....o.oo.", "o.o....ooo.....o...o.....o..o...oo........o", "oooo....o.........o.oooo..oo..o..oo..o.o...", "o..o.....o...oo....oo..o.o.o..........o.ooo", "........o..ooo.oo..o.o.o.o....ooo....o..o..", "o..o.oooo.o....oo.o..o.oo...o...o.o..oo....", "oo.o.o..o....o.o.............o.o.......o.o.", "..oo.oo.o.oo.o.........ooo..o.....oo.o.o...", "....o.....o..o.oooooo....oo....o.oo.oo..o..", ".....ooo.oo..oo......oo.o................o.", ".o....o.o.o..o....o.........o.....o.oo...oo", "o.oooo..oo..o..oo.oo..oo.o............o....", "o...o.o.....o.o...o.o......o.o...o..o...o..", "....o.....o....o..o...o.oo.........o...oo..", "....o.....o....o.o....o..o.o.o..o.......o.o", ".o....o..o.o..o.......ooo..o..o......oooo.o", "...ooo..o.o.oo.ooo...oo....ooo....o.o.....o", "..ooooo.oo.oo......oo.oo..o.o.o.o.o..o.o...", "......oo.o...oo....o..o.o..o.o.o..o.o..o..o", "..o...o.o..oo..o......o...o.o....o.o.oo.oo.", "o...o.o..oo.o......o....o....oo.oo...oo...o", ".o...o....o......oo...o..............o.....", "o..oo....o......o....o...ooooo....o........", "...ooo....oo.o.oo.o......oo..o..o.o.o.o...o", "o...oo.ooo....o..o.oo.oo..oo...oo..o......o", "oo....o....ooo.oo.o.....o.o..o...o.o.o...o.", ".ooo.....o....o..oo..o..o..oo.....o..oo..oo", "o..o.ooo..o....o...o.o.oooo.o..o..ooo.o...o", "o....oo..o..oo..o...oooo..oo.....ooo..o...o", ".o.....o.o.o....o.....o.o.oo.oo...oo...o...", "....o..o.o...oo.o..oo..o..o.o..ooo.....o.o."};
    int K = 45;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13231;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> field = {"....oo.oo........o..o.......................", "...o.....oo.....o............o..o.......o...", ".o....o.......o.o.o...o.o.........o.o.o..ooo", "...o.o.o....o.ooooo...o...........o.....ooo.", "o.....o.o.o..oo....o.o................oo...o", ".o.o...o...oo...o...oo......o..ooo..o....ooo", "......o......o....o.............o......o..o.", "..o....o..o..o.o.o.............o.o.o..o.o...", "..o.....oo...oo.oo.....o..o....o.o..o..o.o.o", "..o.ooo..o.o................o.o...o..oo...o.", "o........o.o........ooooo.....o...oooo.o..o.", "o.....o...o....o....o.....oo.ooo.o....o.....", "..ooo....o....oo.o...o.o.o.oo.....o.........", "....o..o.o.oo....oo..o.o..oo...o........o.oo", "..o...o..o...o...o.o..ooo.....o..o...oo..o.o", "...o.....o.oo....o..o.o.o...ooo.o.o....o....", "o.ooo.o........o.o.o.....oo.o..o..o..o.o.o..", ".o.o...oooo.o.ooo..o..oo.....o..o.o.o....ooo", ".o..o....o..o..o.................o........o.", "..o...oo......oo..o.o....o....o.o.o.........", "....o.oo.....o.o..o.....o...ooo...o...o.oooo", "...o.oo.ooo..ooo.....o..o...o...oo...oo..o..", "o.oo.o.o..o..o.....o....o...o...o......oo...", "..o....o.o..o..ooo....ooo.oo....o...o...oo.o", "...o.o.o...o..o.o........o......o.o......o..", ".............o.......o...........o.o.......o", "oo......o......ooooooo.o..o...o...o.........", ".ooo....o....o.....o.....o..ooo.........o...", ".oo...o.oo..oo....o.o....oo...........o..o.o", "o...o.o......o.oo.........ooo..o..o..o.o....", ".o...o..o...oooo.oo..ooo..o.ooo...o.........", "...o...o.......o........o...o.....o...o.o.oo", "ooo.ooo....o...o..ooo...oo..........o.......", "....oo....o.....o.......o......o....o....ooo", "....o.o.....oo.oo.o.........oooo..o.o.......", "o.o.o..........o.o..o.o.oo....oooo.oooooo..o", "...........o..o.oo.o.......ooo..ooo.....o.oo", ".o....o.o...o.o..o.o..ooo..o.o..o......o...o", "o.....o..oo..oo..........o.oo..o..o....o.ooo", "....o.oo..........o.....oo..o.o...o..oo...o.", "o..oo......o....o..o.....o....ooo.o..o...ooo", "...ooo..o...o.o.o.o..o....o.o.o..ooooo..o.o.", "o...o..o.......oo.....o.....o.oooo.o.oo..oo.", "o...ooo.o...o...........o..o..o...o.oooo...."};
    int K = 31;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8860;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> field = {"..o...o.o................o.o......o..oo......", "o......o..........o.....o....o.ooo.o.ooo.oo.o", ".o........o.oo...o.o....o.....ooooo..o......o", ".....o...o.o..o.o.o...o.oo.o.....oo..o..o...o", ".......o...o.o...o.........o.oo...o..o.o.oooo", "..o....ooo....o.oo...ooo.o.......o.o....o....", ".o..o..o...o.o.o..o.o.....o..o.....o.....o.oo", "......o.o.o..o..oo....o.o...o.oo..o.o.oo.oo..", "....o.....o.o.o..oo...o.oooo....o....ooooo...", "...o.o......o.oo.oo.o.ooo......o.o...ooooo...", ".....ooo.o.o..oo...o.oo.oo..o...o.o....o.o.o.", "oo.o....o...o......o..o..o.o..o.ooo.....o..o.", "ooo..oo......oo..o.ooooo.ooo...o..oo.oo.....o", ".........o..oo.....o.o...oooooo....o......o..", "oooo..o......o......oooo.....o.o....o...o..o.", "..oo...o.o...o.......o....o.o..o...o..o..o...", ".o..o.o.....o.......o......oo..oo.....o.o...o", ".o.o..o.o.o..o....o.o..oo..o....o.oo.o..o....", ".........o..o..o.o......ooooo.....oo.o...o...", "oo..o......o.....o.....o.oo.o.o...o...oo.....", "oo..o...oo..o..o...o.o.o...o.o..ooooo.o....oo", ".oooo.o.o..ooo.o.o..o...oo........o.......o..", "o.oooo.ooo.o.o..oo.o..o.o.....o.ooooo.o....o.", "..o.........o....o....o...o..ooo..oo.o.......", "...........o..o.........o.oo......o....o....o", "..o...ooo....oo..o.ooo.....o...o.....oo......", "...o.o.o.o..oo............o....o..o..o.o...oo", "o......o.....o.o.o..oo.o................o....", "..o.oo....oo.........o....oo..o.o...ooo.....o", "ooo..o....o.oo....o...o..oo...o.o....oo.o.ooo", "..oo...o.....o..........oo...o....ooo.o....oo", ".....oooooo..o..........o....oo.oo....oo....o", ".......o..o.......o..o.....o...oo...ooo..o..o", "..o...o..........o.......oo...........o......", "..oo..oooo.....o.........oooo.............oo.", "oo....o....o...........o.....oo.o.o.....o.o..", "............o..oo.......o..............ooo.o.", "o..........o.....o.....o.o..o.......ooo..o.o.", "..o...o.o....o...o..oo.oo.o..o....oo....oo.oo", "o...o.o....o.o.o.o...o.......oo.....o......o.", "oooo..........o..o.....ooo..o...o..o.......oo", "....o..o...oo......o.o.oo..o.o.o....oo.....oo", "..oo.o...ooo.o.o....o...........ooo.o..oo..oo", "o........o......o..o...o.oo....oo...........o", "o.....ooo...oo...ooo..o.o..oooo....o......oo."};
    int K = 43;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13077;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> field = {"..o..o......oooo....oo.o...o..o..o.ooooo.o....", "o.o.o.oo..o......o.o..oo.o........o..o.oo.....", "..oo..o.......o..o.o..oo.o...o......oo.o...oo.", ".o....o....o......o.o....o....o..o....o..o....", "..o....o...o.o.......o.oo....o...ooo....o.....", "oo.o..ooo...o.o..ooo.....o......o.o...........", ".oo..o....o...o...o...o...........oo.o........", ".o...ooo.....ooo...o....oo..o.o......oo....o..", "......o..oo..ooo.....oo..o....o.o..o.oo.o..o..", "o...oo.o.o.oo.o.o.......o...oo...oo..oooooo...", "o............oooo....o.o.....ooo.oo.......o...", "..o..o.o.o......o.ooo....o..o..ooo..oo.....ooo", "...oo........o.o.o....o.....o....o.........o..", "..o.o..o.ooo.o.oo..ooo.oo.........oo...o.o....", "oo.....o..o.o...o...o...oo.o........o.o.o..o..", ".ooo..o..........oooo........o..........o..oo.", "...o.o.....o.....o.........oo........o..o.....", "oo....oo........o..o.o.o.oo...o..o........o.oo", "o....o...oo..........o...o..o............o..o.", "o......o...o......o..o.o.o.oo.....oo.o.o....o.", "...........o....ooo......oo.o.o.o.o.o..oo.o..o", "o.o....o....o..ooo.o.oo....o.o..oo....ooo.o..o", ".......o.....ooo...o.oo.o...o......oo.........", ".o.....oo..o......oo...oo..............o.....o", ".....oo...o.o......o.o...o....o.....o..oo.....", "o.o.o...o..ooo..oooooo....oooooo.o...o....o.o.", ".....oo.o.....o..oo.......oo...o.oo.o...o.....", "o.oo.o.oo...o.o..o.o......o...o..o..o.o.....o.", "......o.oo..o..................o....o....o.o.o", "o..o......o..ooo....o....o..oo.........oo..o.o", ".....o..o.....o..o.o.o...oo.o..ooo..o..o....o.", "...oo..o.......ooo.o..o.o........o....o...o.o.", "..ooo......o.o....o.oo................o..o..o.", ".o...o..o.....o..o..oo.oo.o..o..o....o...o..o.", "..o.....o........o..oo.....o........o....oooo.", "oo..o..o.o.oo.o..o.o.o......o.o.ooo...ooo.oo..", "...............o....o..o..o..o..o.........o...", "o...o...oo...oo...o..........o.o....oo..oo...o", "o.....ooo.o....o...oo...o..o.........oo....o..", "o...o...ooo...o....o..o.....o.........o....o.o", "o...oo..oo.o.oo..ooo.oo.o....o.o.ooo...o..ooo.", ".o.........oo...oo...o.oo.oo.oo......oo....o..", ".........oooo...o.....o.oo.....oo...oo...o....", "..o...o...o....oo..o....o...............ooo.o.", ".....o.o.o.oo.........o..o.o.o..o.o......o...o", ".o.o....o.....o.o....o...oo.o..o.o........ooo."};
    int K = 98;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 38407;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> field = {"..........o..o..oo....oo.ooo.oo.........o..oooo", "....o......o....o...o....oo...ooo....oo..o....o", "o....oo...oo.oo.ooooo.....o...o.o....ooo.......", ".....o.o......oo..o..o..o.......o............o.", ".ooo.o................o..oo....o.o..o.ooo.oo.o.", "..oo...o.ooo..oo.oooo.oo.o..o.o..o.......oo...o", ".oo..oo.o..o.oooo..oo..o....o...o...o....oo....", ".o............o.....o.o.......o..oo....oo......", "..o..o.o..o....oo...o.....o.o..o.o.o..o....o...", "o..o............o.o...oo........oo..........ooo", ".........o.ooo.o.oo......o......o......o.....o.", ".o.oo......o.o.......oo...oo....o....o....o.o..", "o..o.o.....o...o.o.o.o.....o.oo.....oooo.o.....", "o..o.........oo..oo.o...o.....o.oo.oo..........", "o..o.o....oo.o....o...oo..ooo.....o...o..o.o.o.", "....oo...o...oo..........o.o...o.o..o..o.o.o.o.", ".o..........o....o...oo.o...oo....oo........o..", "...o.o..o..o.o...oo...........oo..o....o.o.o...", "...o..o..oo.o..ooo.ooooo...o...oo..o.o..o...ooo", "o....o.o....oo..oo.......oooo......o.ooo..o..oo", ".o.....o...o....o.oo..o..oo..o..o.o..o.........", "...o.o...o....o...ooo...o..o......ooo.o..o....o", "..........oo.o.o.oo.oo.o..oo........o..ooo...o.", ".o..ooo.ooo.o..o.o..o....o.oo..o..o.o.o.oo...oo", "...oo.o.o...o.....ooo.o.oooooo.o......o....o...", ".o..o..oo.........o.o......o...o...o..o........", "....o.........o..o...o.oooo.........o......o..o", ".o........ooo...o..o.o.o.o.oo.o....o.o...o..o.o", "....o..o.o.o..o.......o.ooo....o.o.o..o..oo.oo.", "..o..oo.....ooo.o.oo.....oo.o...oo......o...o..", ".....o..o.ooo.o..o.oo.ooooo...o.o...o.o..o.....", "oo....o......oo.o.o.oo.o.o.....o......o.ooo..o.", "oo...o.oo....ooo...ooo......o...o.oo.....o.....", "oo........o.....o.o.oo.......o.......oo..oo..o.", "...oo...o...o.o...o...o....o.........o....o.o..", "o......o...o.......o...o.o.o..o.o...oo..o......", "o..........o.o......o.o..oo...o......o.o..oo...", "o.....o.....o......ooo.o..o...oo..o...o...oo..o", "...o.......o.......o..o.....o.....o......o.oo.o", "....o..o..........oo.....o.o..o...o.o.o.o.....o", "o...o.o...oo..oo............o...o....o...oo.ooo", "........o..o.oo....o....ooooo...o............o.", "....o.o.ooo.oo.o..o...........o.o.o.o.ooo...oo.", "o..o...o.o......o..o..oooooo.oooo.o........o..o", "o.....o....oo..o....o........o.........o.......", ".o..o....oo.oo.o...o.....oo...ooo..o.o..o......", ".....oooo...ooo..oo.oo..o..o...o.o............o"};
    int K = 22;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7010;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> field = {"....o..oo...oo...o.....o...o...oo..ooo.oo..o....", "o..o.oooo.....oo...oo..ooo..o.o..oo......o....o.", "....o.oooo.......oo...o.........o.o............o", "o...o.....o.............o...o...oooooooo..oo....", "..oooo.o.....o......o..o..o......o.o...o..o..o.o", "...o.....o.o..o.....o.oo.......o.......oo..o.o.o", "..o.oo..o......oo........oo..oooooo..o...o....oo", "o..o.o..o...o..o.oo....o.......oo......o...o....", "ooo..ooo....oo.oo..o.......ooo...ooo.o.ooo.o..o.", ".o.....o.o......o......o..o....o.oo.oo.......o.o", "o......oo...o.oo.o..o..ooo.o...oo.o.o........oo.", "oo....o...o...oo....oo..o..o.o.........o........", ".o...o..ooo.....o.o......o.o.o.o.o.o..ooooo..oo.", ".o..o..oo...ooo.o.o...oo.o..o..o......o.o...o...", ".o....o.oo.......o..o..o..o.o.....o.oo...o..o...", ".o.o....o.....o....ooo.....oo.......oo.o...o....", "..o.......o..o.o..o...oo.o.o.o.oo.....o...o.....", "........o....o.......oo...o.....o.o.......o...o.", "...o...oo.o.o.o....ooo.o.oo....o.....o..oo.o....", "o.......oooo.o...ooo..ooo.o.......o...oo.o...o.o", "o.o..o..oo.o......o..o..oo..o..o.oo.ooo..o..o..o", "oo..o..o..o.o...oo.o......oo.....oooo.....o...o.", ".....o.......o..oo..oo..oo....ooo.....o..o.o.ooo", "....o..o.....o..o.o.......oooo..o.ooo...ooo.o...", "..oo.....o..o....o..o.o....ooo.o....o....o......", "...o.o.o...o.o.o....o..o.o...o.o..oo.....oo..o..", ".o.oo..o.o....oo..............o.o.....o..o.oo...", ".oo....o.....o..o.....o.......o...o.o..o.o.....o", "o..o..oo..oo.o.o....o....o..ooo..o.o..o.......o.", "o.o..oo.oo.o.............o.oo........o........o.", "..ooo..o......o.o..o.o.oo..o...............ooo..", "..o....o...o..................o.o.ooo..o.....o.o", ".oo..o.......o....o.....o........o...o........oo", "..o...o.o..oo.oo..o....o.o..o..o...o.o.o.o......", "oo....o.o..o...o....oo..o...........o..oo..o....", "o...o..o........o...oooo...ooo.......oo..oo....o", "..o......oooo..o..o.....ooo..o.o..............o.", ".o....o....o.o..oo.oo.oo..oo....oo..o..o.oo...o.", ".o....o.o.......oo.oo..o....oo........ooo..o.o.o", "o.o.o...o..o...oo.o......oo.o.oo.....o..o.ooo...", "o.o........o..o.......o......o.ooo..o.o...ooo.o.", "..o..o..oo.....o.o.....o.......oo....o.o...o....", "oo....o..o....o.o...oooo....oo..ooo.o..oo....oo.", ".........ooo.o..oo..o......oo.o..oo.oo..........", "..o.ooo.....oo.....oo.o.....o....ooo..o.....o.o.", ".oo...o..oo.ooooo....o.....o.....o..o..o.o..ooo.", "...o..oo..oo.o.o..o......o.o.o.ooo..o.o.....oooo", ".o...o....oo.....oo..o.......o..oooo..oo...o.oo."};
    int K = 48;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15635;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> field = {"o...o....o.....o...ooooo.....o...o.ooo..oo....o.o", ".o.........o..o.........o......oo....oooo........", "....o............o...o..o....oooo.o....o.......oo", "..o.o.o.o..oo.........ooo.......o....oo....o.oo..", "..oo.o.o......o........o..ooo.o..oo..o...o..o...o", ".o.oo........o.......o.o..o.......o........o...oo", "o.o...ooo...o..o..o.oo...........oo..o.o..o....oo", ".........o.o.o..o..o...o...o....o............oo..", "...oo..o.oo..o.....o.o....oooo..o....o........oo.", "....o....o.o.oo..o..o...o..o..o.o....oo..oo....o.", "..oo...oo..o....o..oo.o......o..o....o.o.o.......", "o...oooo.o.o......o..o...ooo.o.........ooo.......", ".o.o.oo......o.ooo..o..o.o...ooo.o...oo...o.o...o", ".oo......o..oo..o..oo..oooo...o...o..o....o....o.", "..oo...ooo.o..o....ooo.....oo..o......o...o..o..o", "..oo..oo....oo.ooo.o....o...............o.o.....o", "....ooo..o..o.o.o.o.......o.ooo...o....o.o.o.o.o.", "o...o....o.....oo..oo...o...o.oooo..oo.......ooo.", "..o.oo..o..o......o.o..o.oo.....o...o...oo.oo..o.", ".o...o.o..oo...o..o...o.o.....o...o.o...oo.ooo...", "......oo...o.....o..o.o..o.o.........o.o..o.o.o..", "....o.ooo.......ooo...oo.o...oo.......oo.......o.", ".....o..o...o...........oo..oo....oo.o..o.o.o....", ".....o..o...oo......o....o...o.o....o..oo......o.", "o...o.oo...o.....o...o.oo.o...o..........o..o..oo", ".oo.o.o..o.......o...oo.oo..oooo..ooo.o..ooo....o", "o.oo.o....o..o.o.o...oo.o.o.o.o..o......o.o.o.oo.", "..o..o.....o.....ooo.o..o..........o...oooo...o..", "oo.o...ooo..o..oo........oo....o........o.ooo.o..", "o.oo.........o.ooo.o..........o.o..oo.o.o....o..o", "....o..o............o.o.o.o...oo..o.o...o.oooooo.", "..oo.o.....o...ooo.o........o.o......o.o.....oo.o", "..ooooo............o.o...o.o...o...o.o...oo.o....", ".....o....o.ooo..o.ooo......ooo........oo........", "o............oooooo...ooo.o..oo.o..o.o.o.....o...", "..oo...oo....oo.o....o..o......o........o...o.o.o", ".oooo..oo.....o....oo..o.......o.......oo........", "..ooo.oo..o.......oo.o........o...o...oo.o.o...o.", "..o......oo.o.o...o..o.....o.o..oo....oo.o.o..oo.", "o.ooo.....o..o..o....o.oo.o.o...o......o.o.o....o", ".oo......o..o....o.oooo.ooo..o.o...oo.o..o...oo.o", "..o..............o..o..o.o.oo....ooo.o..o..o...o.", ".......o...........ooo.o...ooo..o.oo....oo...o...", "ooo.ooo.....oo.o...oo...oo.o...o..o...o...oo..o..", "...........o....o...o.....o..oo.....oo..oooo.ooo.", ".o.....oo..o........o.....o......o.oooo..o..o...o", ".o...o..o.......o..o.o..oo..oo.oo.......o.ooo.o.o", ".........o.o....o...o.ooo..o.o.o.o....o.o.....o..", "........oo......o...ooo..o..ooo...oo.oo.o..o.o.o."};
    int K = 51;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17112;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> field = {"...o......oo....ooo.o.........o....o..oo..ooo..o..", ".oo..o.......o.oo..o.o...oo.o.o.....o....o......o.", ".oo..oo....o..o..........o.o.....o..o......o...o..", "o.........ooo.oo...o.oo......ooo.....o.o.....o....", "o.oooooo.oo...ooo.o..oooo......o....o........o...o", ".......o...oo.o..o...oo.o.........o....o..o.o....o", "o..o..o.o.....ooo.........................oo...o..", "..oo..o...o....o......ooo.o.oooo.....o..o.o.o.....", "...o..o.....o.o..ooo.o.oo.o..o..o....oo..o.....oo.", "o...oo.....ooo......o...o.o.o...........o.o.o.....", "...o.....oo.o..........oo....o..o.oo.o.o.o..o..oo.", "....oo.o.ooooo.....oo.o..o.....o...o...o..o...o...", "o.......o....o..oo.....oo....o.o..oo...o....o....o", "oo...oo...o..o.o.o.o..o..o..o.......o...o.......oo", ".o.o..oo..ooo.....o...oo.ooo..oo.......oo..oo...oo", "....o..ooo...o..o..oo...o..o...oo.o...ooo.....o.oo", "o.....o......oo..o.o...o...o..oo.o.....oo..o...o..", "...o...o.o...ooo..o..ooo.....o......o.o.oooo.o....", "....o.o...oo.oo...o.oo......ooo.......o.o.o.......", "...oo.................oo.o.......o..o.o......o..o.", "..oo..o.oo.oo.....o..o.o..oo......................", "..oo...oo......o.o......o...ooo..o....o.o..oo.o.o.", "ooo..oo.o.oo.o........o...o.o.o.......oo...o......", "....oo.oo.......o...oo..oo.o.o..o...o...........o.", "..o..o.o.ooo...o....o.....oo.o..oo....o...........", "o...o.....o...........o..o....o...o.o.....o.o...o.", "..o.oo..o.....o.o.......o.o..oo..o.....o.o..o..oo.", ".o....oo.o.......oooo.....oo......o..o....o.....o.", ".o..o.ooo.....oo..oo..o...o...o.ooooo.o.....o.o...", "....o........ooo.......o....................o.....", "oo...o...................o.oo....o.o.........o.o.o", "..oo.oo.oo....o...o..ooo..o..oo..oo.o..o..........", "o.o.....o.....oo...oo..o.o.....oo..o.oooo.......o.", ".o.ooo...o.oo...oo.....oo..o...........o...o..o...", ".o.o...o...oooo.....oooo.........o.oo.....o..o..o.", ".....o.........ooo...ooo...oo..o...o.oo..........o", "oo...o..oo..o....o..o.o...o.......o.o.o.o...o.....", "..o..o.....o.o......o.o.....oo.oo.o....o.ooo.o....", "o...o.o..o......o...o..o....oooo.o..oo........o...", "..o.oo.o.o..oo.oo....o..........o.....o...o......o", "......o..o...o...o...ooo......o...o....o..o.......", "oo..oo..o.....oo.o.oo.oo..o.o..ooo..o..o..o....ooo", "....o..o.o...o.......oo.......o...o.....o...o.o.oo", ".o..o...o..o........o..o....o..o....o.....o.oo..oo", "oo..o.o.o...oo..ooo..o...ooo.....o...o.o.o.....o.o", "......o....oo.........oo.o.....oo....oo..o.o...o..", ".oooo....o..oo.o..o...o.oo...o.o.o.o.o.o..o...oo..", "oo....o..o.o...oo.....oo....oo.......ooo..o.oo.o..", "oo...........ooo....o..o.........o........o.oo.ooo", "o..oo.o.oo..oooo..ooo....oo....oo.o.......oo..o..."};
    int K = 12;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4939;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> field = {".", ".", "o", ".", ".", ".", "o", "o", ".", "o"};
    int K = 397;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 321568;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> field = {"o", ".", ".", "o", "o", ".", ".", ".", ".", ".", "o", "o", ".", ".", ".", ".", "o", "o", ".", ".", ".", ".", ".", "o", ".", ".", "o", "o", "o", ".", ".", ".", ".", "o", ".", "o", "o", ".", ".", ".", ".", "o", "o", "o", "o", ".", ".", ".", "o", "."};
    int K = 575;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 717559;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> field = {"oo.o.o.o.o"};
    int K = 643;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 839760;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> field = {"..oo.o...oo......oo.....o...o....o.o.oo..o..o....."};
    int K = 887;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1649779;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> field = {"..................................................", ".......................................o..........", "..................................................", "..................................................", "..................................................", "...................o..............................", "..................................................", "..................................................", "..................................................", "..........o.......................................", "..................................................", "..................................................", ".o................................................", ".......o........................................o.", "..................................................", "..................................................", "..................................................", "..................................................", "........o.........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "............................o.....................", ".....................................o............", "..................................................", "..................................................", "..................................................", "..................................................", ".............o....................................", "..................................................", "..................................................", "...................................o..............", "..................................................", "...............o..................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............o....................................", "..................................................", "..................................................", ".................................................."};
    int K = 1404;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4122976;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> field = {"....................o..........................o..", "....o............................o..o.............", ".....................o......o..o.......o..........", ".......o..........................................", "...............o...........o......o...............", "..................................................", "..........o...........o...........o.o.............", ".o........o......................o..o.............", "..............................o........o..........", ".........o......................................o.", ".o..........................o.............o.......", "..................o.o.............................", "..................................................", ".................o.........o......o...............", "..o...................o...........................", "...................o.o....o...................o...", ".o......................................o.........", ".....o.....o...................................o..", ".............o...................o.......o........", "................................o.................", "...............o.....o............................", "............................o.....................", ".........o...........o........o..........o........", "................................o.................", ".............................o................o...", "..................................................", "..................................................", ".o..........................o.....................", "..............o...................................", "..................................................", ".........o.o....................ooo...............", "...o....................o.........................", "......................o.....o..................o..", "..o...o...o.....................o...........o...o.", "o.o................o..............................", ".....................o............................", "..................o................o..............", "...................o..............................", "........o.........................................", ".....o.o.........................o..........o.o...", "..................................................", "......o......o........oo..o.......................", ".....................o............................", ".......o...o..o......................oo.o.........", "..............o.....o....o.............o..........", "..............o........................o....o.....", "..................................................", "......................................o.....o.....", "......o......................o....................", "..........o............................o.........."};
    int K = 1210;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3144216;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> field = {"......o................................oo.........", "...o..............o.....o....o.o..................", "......o..o...............o....oo......o........o..", ".........o..o......o..o...........................", ".........o...o.o.......o.........o..oo............", ".....................o.....................o......", "...........o............o.....o...................", "..o.......o...o.........o...............o....o..o.", "....o...........o.....................o...o..o....", "...o.o...................o..o......o..oo..........", "......o.........o.o...o...o.oo...............o.o..", "..................................................", ".............o.......o.o..................o.......", "........o.............oo..........................", "....o........................o................o...", "................................o................o", "......oo................o..........o..o..........o", "..o.............o.o.....o.........o...............", ".o......o.........o...oo........o.....o...........", "...................o........o.....................", "o......................o..............o...........", "o....o.......................o.......o.....o......", "............................o.....................", "........o............oo......................o...o", ".....o...o...o.........o......o....o.....o.....o..", "..o...........o................o.....oo...........", ".....oo....o.o.....................o..........o...", "....o...............o...o.......o.....o...........", "o......oo...o..o.............o....................", "o.....o......o.......o.....................o......", ".......o...............o.........................o", ".o.o............o.........................o.......", "........................o......o.......oo.........", "...............o..........................o......o", "......o..o................o.o.oo.......o..........", "o............o......................o.....o.......", "..o.......o.....................o...........oo....", "....o......o..........oo.....o...............o.o..", "..o..................................o........o...", "...................o............................o.", "o...o...o..............................o..o.......", "o..............o.o...o.....o......................", "..........o....o..o...............oo.......o....o.", "............o......o.....o.......................o", "...o.o...o..........o.........................o...", "..o.............o......o.....o...............o....", "..o.........o...........o.....................o...", ".................o......o....ooo.................o", "..o.....................................o...o.o...", "....o.............oo........o......o...........o.."};
    int K = 101;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 41196;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> field = {"..o...............o...o........o.................o", "o......o.o..o........o...o.o....o.....o...........", ".....o................o.........o.................", "..............o.o..o....o..........o.o..........o.", "..........oo.......o.......................oo.....", "o.....o.......o..o...o..................o...o.....", "....o...o.o.................o........o............", "....o.o.....o.o.................................oo", "...o..........o.o.ooo.........o..o................", "........o......o....o.........o..o..o.o...o.....o.", "o......................o..oo.......o.........o....", "....o........o......o..............o..............", ".oo...o........o..o.............oo...o............", ".....o...o...........................o............", ".......o......o........o..o..o...........o.o......", "...o..o...o......o.......o......o.....o..o..oo....", ".o.........o...oo..................o.............o", "..o..........o...o..............o..........o.o.o.o", "o.................o......o..............o.........", "..............o.o.o.......o.o...................o.", "............oo.......o.o..o.....o............o....", ".o..........o..........oo........o.......o........", ".o..........o......o.oo.o..........o..o...........", "...o..............ooo.......o.............o..o....", "...................o.....o...........o..........o.", "......o............oo.........o.......o...........", ".....................o....o.......o..o..........oo", ".o.................o.o........oo.....o......o.o...", "...o..o.......o..o.oo.....o..o....................", "......o............................o......o.o...o.", "................o..........o..................o...", "....o..o..o..........oo...oo...........o..........", "....................oo...o......o....o.........o..", ".........................oo.....o....o.....o......", "......o..o............oo............o...o.........", "..........o.................o...o......o......oo..", ".o...o......................o..o..........o.....o.", ".o............o....o.......o......................", ".................o...o............o..............o", "o...o.........o......................o........o...", ".....o...........o...o....................o.......", ".........o..........o.o..o.....o.......o..........", "....................o....o......o..o.oo..o........", "o..o................o...o......o......o.........o.", ".......o............................o....o......o.", ".o.o....o..o........................o.o.o..o.o.o..", ".......o....o........o......o.o...................", "o...o..oooo.................o.o...............o...", ".o.................oo.oo...o........o...o.......o.", ".......o...o....o...o....o.o......oo.............."};
    int K = 1455;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4517046;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> field = {"o....o..o...o........o.......o......oo..o......o..", "...o...........o..o.........oo.......o......o.....", ".........o.....o..o...o..o.......o.o...o..........", ".o..o..oo.....o...o.......oo.......o..o...........", ".....................o..........oo.....oo..oo.o...", "o......o......o..oo............o.o...............o", "......o..o.............o..o.........o..o..o.oo....", "o...ooo.o..o.o.........o.............o............", "...o.o.......o.......o.....o.o.........o.....o..o.", "..o...........oo.o.....oo......o....oo...o..o...o.", "..o...........o.o..o.............o...........o..o.", "...o...oo...............o....o....................", ".........o.......o.oo....o....o.....o............o", "...............o..o...o....o......o.o.............", "..o..ooo....................o...o........o...o.o..", "o..........o....o..o.............o...........o...o", ".........o.o.........o.......o...........oo.......", "............................o.......oo...oo.o....o", "...oo........o...o....o.oo...o...oo...............", "..oo......................o..o.o..........o...o..o", ".....o.....o.o..o.....o..o..o.....o..............o", "....o.o..........o.......o..o.........o.......o...", ".....o...o.o......o......o........................", ".....o...o..o..o.....o..oo.........o......oooo....", "oo....o....o...........o..o..o......o..........oo.", ".o..o.....o..........o.o...oo......o.........o.o..", "..o..o......o..ooo...o..................oo........", "oo.........................o........o..o....o.....", "..o...oo.o.o.....o.......o..o..........o..........", ".o.......o.o.................o.o.........o...o....", ".o........o......o.o...o.o........o............o..", "oo........o..o.....o..o..o.........o........o....o", "........o..o..o......o.o.o..o....o.......o..oo....", ".......oo....o...............o...o...........o....", ".......o..o...o...o.....o....o.........o..oo.o....", "....o....o......o......o.....o....o.........oo....", "...oo......o.......................o..........o.o.", "........ooo...o....o....o.....oo.......o......o.o.", "...o......o....o..o.o..........o..........o.o..o.o", "........o...............o................o..o.o...", "............o....................o...o.o.....o....", ".o......o..oo..o.oo......o............o...........", "o...............o........o...o.........o...o..o..o", "...o................oo.....o.oo......o.....o....oo", "...............o.................o..o.....o.......", ".....o........o............oo.......o......o....o.", "o..................o..........o.o...o.......o....o", "..oo.....o....o..oo.o......o.o......o.........oo..", "........oo............o.o....o....o....o.......oo.", "..............o.................o.......oo.....o.."};
    int K = 722;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1182692;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> field = {"....o.oo..o....o...ooo........o.o.oo....o.......o.", ".......o...o..o...o................oo.ooo.......o.", "..o....o..o..o....o................o..oo..ooo.o...", "..o.......................o..oo..........o....oo..", "....o...o........o.........o...o..o.oo..........o.", ".......o.....o.........o.....o..........oo...o..o.", "....o..oo.o...o...o..............o..o.oo.o.oo.o.o.", ".o....o..........o.o..o............o..o.o..o.o....", "oooo...o.oo..............oo.oo...................o", "o................oo....o....o.o.....oo.o..........", "....o.o.o.o................ooo...o....oo......o.oo", ".o........o.oo.o...................oooo...o...ooo.", "o...............oo..oo..o.o..o.o....o.....ooo..oo.", "o.............o.o..o.......o.....o...o.......o..o.", "...............o.oo...............................", ".o.....o.....o..oo.....o.......o................o.", "......oo.o.......o..o..o..o....o..o....o.....o....", "....o...........o..o.o......o.....................", "......o.......o.o...o....o.o.............oo....o..", ".o.....oo.....o....oo.......................o...o.", "..o..oo.......o.o......o...................oooo...", "oo........o..o....o.o...o.o....o.oo...o..o...o...o", "...............o..o.o....o.....o.........o........", ".....oo.o.o.............o.o..o......o........o.o..", "....oo..o.o..o..o.............oo.......o.o........", ".......oo.o.......o..o.....o.......oo......o......", "...o.......o.o...o........o....o............o.o...", "..o......oooo.o........o.oo.......o....o..oo..o..o", "......o..o....o.o.......oo..o...o.....o..o.....oo.", "......o..o....oo....o.o....o.oo.o..........o..o...", "......ooo.oo.................o..o.......o...o...oo", "o.....o..o.o.ooo...........o......o..o...o..o.....", "............o..o...oo........o....o.....o.o...o...", "..o.....o.....o......o...o..o....o..............o.", "..o...o.......oo...ooo.o......o.....o........o....", ".o....o.oo....o.........o.....o..................o", ".......o.........o......o...oo..o....o....o.......", "........o......ooo.....o.o....o.....oo...o......o.", "...oo....o.o....o...o.........o.................o.", "...........o...oo.o..o......o.....................", "o................o.o...o........o...o........o....", "..................o...........o...o.....o.....o..o", "ooo.o..o.o.ooo.o.o..o....o...o....o.....oo........", "...o...........o....oo.....o....oo.....o.....o..o.", "..............oo.o..oo......oo.oo....o.....oo.oo..", "o.......oo....o..o.o..o......o.o...........oo.....", ".....o............o.o.o...o...oo..oo...o....o..oo.", "........o..o.......o.o..........o......o.o.o......", "....o..o...o.o..........................o.o.......", "...o............o........o..o.......o...oo...o...."};
    int K = 606;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 849432;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> field = {"..o.....o..o..ooo.............o...........o.......", "o...o....o.o.o...o..o...oo.....o..o.....oo.o...o.o", "o....o...o...o..oo.....oo.o...o.....oo..oo........", "..o.o..o.....o..o.o....o.o..o..oo.........o..oo...", "..oo...........o...o..o...o.oo..o.o...o...oo..o.o.", "o.........o.o..........ooo..o......o..oo..........", "..oo.o..o....o.......o....oo..o.o...oo.........oo.", "..........o......ooo...o.oooo.oo...oo..oo..o......", ".....ooo...oooo..o..o.o......o.oo.....o.......o.o.", "oo...........oooo...ooo.........oo.o..o...oo....oo", "o.o...oo............o.....o....oo...o....o..o.o..o", "o.....o.o........oo.o.o.........o......o...ooo....", "..o.oo....o...oo..o..o...o...o.oo..oo...oo.o......", "o....o.......o.o...............o...............o..", ".o.o.o...o......o..o....o.....o...........o.o.....", "o....o...oo....ooo........o.ooo.....o..o..oo.....o", ".o..................o...o.....oo.........oo.o..oo.", "....o.o...........o......o.o........o.........oo.o", ".o..o..ooo...oo..o.....o.o.o.......oo..o.o......o.", "o...oo..o....o..o..o...oo......o...o..............", ".o...o....oo.............o......o...........oo....", ".o...o........o...o....oo..oo......oo...o.o.o.....", ".o....o...o.o.....o..oo......o.o..o..............o", "....o...o..o.o...o...ooooo....o...o.oo.o...oo...o.", ".o.......oo....o..o.....oo........o.......o......o", ".ooo..o.........o....o......o....oo..oo.....oo....", "...........o...............o.o....o...oo.....o....", ".o.....o..........o..o.oo...o.........o...o.o....o", ".oo.o..................o..o.o.oo..........o.o.o...", "...oo.oo.....o.....ooo.o.o.o......o.ooo......o..o.", ".....o...oo..........o.o.o......o.ooo..o....o..o.o", "...o.o....o..o.oo......o..o.o..o....o...........oo", ".........o..oo........o.....o...o...ooo..ooo.....o", ".o......o....oo..o.oo...oo...o....o.o.o....o.o....", "......o..ooooo.......o...o....oooo..o...o.........", "....o..ooo...o.o.o.o...o.....o.o.....o.....o......", "..oo.o.o.......o...........o..o..o.....o.....oo..o", "oo.ooo.o..o..........o.........oo.....oo.o.o......", "o......o.........ooooo..o......o.....o..o.o.o.o.o.", "o..........o.o........oo.........oooo.o....oo...oo", "..o.....o....o........o..oo..o....o..o.o....oo....", "...o.......o............oo..o....oo........o..o...", "o......o...o.o..............o..........o.o..o..oo.", ".oo.o.o........oooo..o.o......o.o..........o.....o", "o...............o..o.o......ooo...................", "........oo....o.oo.o.oo.o.......o..ooo..o.....ooo.", "..o....o.......o.o..o..o...o.......o...o.o..oo.o..", "....oo...oo..oo.....ooo..o.....oo.o.o...o....o.o..", "....o......o.oo.........ooo......oo.....o.o.o..ooo", "o....o......o.........o..oooo......o...ooo.....oo."};
    int K = 772;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1344790;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> field = {".o........oooo.o.o.o..........ooo....o..oo.o......", "ooo..o...o.ooo..o.oo....o.o...o......oo..o...o.o..", ".o.......ooo..o......oo.....o..o......o...oo...ooo", "..o..oo..o...o.o..o..ooo.o...............o...o..o.", ".....o..o.o....oo....ooooo.....o..o......o....o.o.", "..o....ooo....oo.....oo.....o....o..........oo...o", ".o..o.oo..oo.o....oo..o...o.......o.............o.", ".....o.o....o..oo.oooooo.........o.o..o..oo.o..oo.", "o..o......o..o.o.oo......o......o......o.o...o..o.", "..oo....ooo....ooo.ooo....oo...o..o.......o.oo..o.", ".o.o...o........oooo.o..........oo.o......o......o", ".o..o....oo.....o............o.o..oo..oo.......o.o", "..o.o..o.....o.o.o.o.o...o.o..o.....o.......o..o.o", "o....o..oo....o.....oo........o.oooo.....o..oo..o.", ".....oo......ooo..o.ooo..........o.....o......o...", "...oooooo..............oo....o.oo....o......o.....", "......oooo...o.oo..oo.....o.o.o..o..oo..o...o.....", "..o...o...o.oo.....o.o........o..oo...oo...o....o.", "....oooo.o..o.....o..o..o.o....o..o..oo.oo...o....", ".....o.....oo.o....o.o.oooo.oo.....oo..........o..", ".....oo.o.........o..........o....oo.o..o.o...o...", "ooo....o......o...o.o...o....o....oo.o.......o.o..", "o..o.......o....ooo..o.o...o.o.o......o.o.......oo", "..o..o......o....o...o...oo.........o.o.o.oo.....o", "...........o.o.o.o......o......oo.o..o.....o.oo..o", "...oo.......o...........oo.o...oo....o...oo..o..o.", "....ooo..o.o...oo.o..ooo...o...........o.oooo.....", ".o..o.oo.o...o.......o...oo.....o.o...oo..o.....o.", ".........o...ooo..o....o.ooooo....o.........o.o..o", "....o.o..ooo..o....oo.....o.o..ooo.o....oo.o..oo.o", ".......o...ooo....o.......o...oo.oo.o...o....o..o.", "o..o..o......o.....o.o......o.o.......o...........", "..oo.o...oo...........o....o.....o.....o..oo.....o", "..ooo..oo....oo..oo......ooo...o..oo..o..o.o.oo.o.", "..o.............o............o...oo......o.ooooo.o", "....o.....o..o..oo....o..ooo....oo.o.o.........o..", ".o.oo.......o..o.o..o.....o....o...o....o........o", "....o.o.o...o................o.oo.....o.o.o.o..ooo", ".o..oo.ooo...........o..o.o.o.oo......o..oo....o..", "................o.o...............o..o......o.o..o", "o...oo.o...o...o....oo...o......o.o.........oo....", "o....oo........o.o.o.....oo....oo...o...o..o...o..", ".....o.o..oo.....o..oo.o.o.o.o.o...o.oo....o..o...", ".o...oo....oo.....ooo...o.o...o.......oo.o.o.oo...", "...o...........oo...o...o.o.o...o..o.....oo.o....o", ".o.....oo.....o..oooo.o..ooo.....o...o..oo.o.o..o.", "....o.o......o.oo..ooo..oo................o......o", "....o......o.......oo...o.oooo.o.oooo.oo....o..oo.", "...........o...o...o.....ooo..o......o.o..o..o....", ".......o.oo..o.oooo.o.o...o.oo.o...o.....o.....o.."};
    int K = 1101;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2633687;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> field = {"o.o...o......oo.o.o...o.o...o.o..o.o.oo.oo......o.", "..ooo.....o...o..o.....o..oo..o...oo.oo.....ooooo.", ".o..oo.o..oo..o..o..oo........o.......o....o.oo.oo", "ooo......o....o...o..oo...o....o.......oo......oo.", "o..oo.oo..oooo...o....o........o..o..o..o..o..o...", "o.oo......o.oo...o.o.o......................ooo..o", ".....oo....o...oo...oo....ooo.......ooo.o..o.....o", "..ooo......o....o.ooo...o.o..o.o.....oo...........", "...o..oo..ooo.oo....o....o...oo..........ooo..o.oo", ".o...oo....o.o...o.......o..o....oo..o....oo.o.o.o", "...o..o..o.....oooooo.o...o...o.o...oo...o.......o", "..o...oo..oooooo..oo......o..o.o.ooo.oo..ooo......", "......o......o......o.oo.o....o.o.o..........o.o..", "..o.....o...o...........oo..o..ooo..oo.o...o......", "o.oo.o.......o...ooo..o.....oo.....o......o.....o.", "oo..o..o.....o...oo...o...o.oo.oo....oo.......o...", "o......o...o...o....o......o...o..o.oo.oo.oo...oo.", ".ooo..ooo..o....o.o....ooo.....oo.o..o.o.oo.o.o...", "o..o.o.ooo.o.....o.ooo..oo.ooo..o....o.....oo....o", "o.o...o..o....o..o.............o..oooo....o..oo...", "oo.......o.oo.oo....oo.o....o.o.oo.o.o.....oo.....", ".o.o.ooo.o.o....o...ooooo..oo.o..ooo...o.o.o..oo.o", "o....o.....o.o.o..o.....oo..o.o....o...o.o..oo...o", "...ooo...o.o.o...oo..o........o.o...o.....o..o..oo", "..........oo..o.oo....o....o.oooooo....oo..oooo...", ".o........ooo......o.o..o...o...oo..oo......o.o..o", "o..ooo........o.ooo.o.....o.....o.o.o.......o.oo..", "oo.ooo.o...o.o....o..o....o..o....o....oo.....o.o.", "......oo.o.oo....ooo...oo..o.o...o.......o..oo.o..", "ooo.o..oo.....o...ooo.oo......oooooo....oo.oo..o.o", ".o.....o.o.o.o..o.oo..oo.o.....o...o...oo..o......", ".ooo......o....o.......o.o..........o..........oo.", ".o..o..o..o..o..o..o....oo.o..oo.....o.o..o...o..o", ".....o.ooo..o..o.......o.oo..oo.o....o....o.oo....", ".....o...o.o.o.o.o....oo.o.o..o...oo..o..oo..oo..o", "..oooooo..o.o.........o..o.....o...o.....o..oo....", "...o.o....o..oo.o.....oo.....o....o.o..........o..", ".....o...o..o.oo...o.....o...oooo..oo..o....o...o.", "oo..ooo.o.o...o..........o....o.o...o..o....oooooo", ".o..ooo.o..o........oo..o......oo......o.o...o.oo.", "....o.......o.....ooo......o.o.o.oo......o.o......", "oo.o.o.....o...o.o.......oo.oo.....oo.o......o.o..", "..o..o.....oo..o.o..o......o.oo.o...o...o..oooo..o", "o.o.....ooooooo..oo..o.oo.o...ooo....o......o...o.", "o...o.o...o......o..oo..ooo..o....ooo.o.o....o....", "....o..o....o...o.o.ooo.o..o.o.o..o.o.o.........o.", ".oo..o.o..o....o.ooo...oo.........o......o........", ".o.o.....o......oo...oo..o..o..o..o.o....o.o..o...", "..oo.o...oo.o...o....o.oo.oo..ooo..oo......oo.....", "o.........oo..o.ooo...o....o....o.o...ooo.....ooo."};
    int K = 789;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1402023;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> field = {"o..o.......o..o.....o..o.o.........oo.....o..o...o", "..oo.oo..o......oo.o...o.o.....o.....oo...oo.oo..o", "o..ooo.....o...o.o...........oo.......o........o.o", "....oo.....o.o...o.o........o.....o.......o.oo..oo", "o..oo....o.o.o.o..ooo...........o.o....o.o.oo.....", "..oo..o...o....o.ooo...ooo...oo.oo...o..ooo.o....o", "...ooo.oo..oo.o..o..o...o...o.............o.o..o..", ".......o...o.......o..oo.o....o.....o...o.o.....o.", "o......oo.....o.ooo.oo.....oo.o.ooo.oo.o.o..o...oo", "o.oo..o.o.o..oooo....o.ooo.......oooo.o.....o.oooo", "o......o.o....oo...oo.....ooo.....o..o...oo..o.o..", "o.....o..o.ooo.o....o..oooo......oo.o....o..oo.o..", "oo.....o..ooo......o..oo.o.......o...o.o.o.o...o..", ".oo......o....o.oo.o.o.o...o...o..o..oo..oo...o..o", "o....o..ooo..o...o.oo........o.o.o.....oo.oo...o.o", "......o.oooooo...o.o.oo....o.......oo.o.o.oo.oo...", "oo.o..o.o...o.o......o..o..o...o...o.o.ooo.o..o.o.", "o....oo.......oo...o.o.o..o.oooo..o...o...o.o.o...", "..oo...ooo.o...o........o...o..o...oo.o.oooo..ooo.", "o.oo.....o...oo.o.o.o.o..o...o.o....o...oo..oo.o..", ".o...ooo.oo..o...o.oooo.......oo.....oo.o.ooo.....", "....o..oo.oo...o....o...o.ooo.o.o.....o..oo...o.oo", "o.......oo.......o..ooooooo.o.o.ooo.o..o...o.oo...", "oo...o.......o...o.o..o..ooo.o..o..o.oo..o....o...", "o.......oo.ooo.oo....oo.o....o...o.oo.o.o...o..o..", "o..oo..oo.o.o...o..o.o..oo...ooo..o.o..o......o.oo", "oo..o........oo.o......o.ooo..o.oo..o..o.o..o...oo", "..o..oo.o.o.o.oo.....ooo.ooo.ooo.o.oooo......o.o.o", "....oo.o.........o..o.......oooo.oo....o......o...", ".o....o.o...o...o..oo.oooo..o..oo......o.oo.......", "oo.o....o..ooo..o.o...o...o....o..oo.oo...o.o.o.o.", "..o.ooo.o..o......oo.oo....o....o.o..oooo.o...o.o.", "...oo.o........o.o...o..o...o.o..oo.o.ooo....ooooo", "o..o...oo....o......oo..o.o..o..o....o..o.o.oo...o", "oo.oo..o.........oo.....o.o....oo.o.o.oo.o.o.oooo.", "........o.o..o.o..oo.o.o..o..oooo..o...o..o..o...o", "...o.o.o...oo..o.o.....o...o.......o.o..o...o.ooo.", ".....oooo.o..o.o..o.o.ooo..o..o.oooo...o..o....o.o", "oo.oo....ooo.....oo....oo..o...o.o.oo.o.o...o.o..o", "oo.o.o.o....oo...o..o..oooo...o.ooo.....oo...o..oo", "..o...o..o.o..o....oo...o....o.oo.ooo.....o.oooo..", "o...oo.o..ooo..oo.o....ooooo.oo...o.o.o....oo.oo.o", ".oo.o....oo..o..o..o..oo......o....o.....ooo.o...o", "o.ooooo.o.o.oo.ooo.o..o..........o.o..o..o...o.o..", "..o.ooo..oooo..oo.o.o....ooo.o...o....oo.ooo.o...o", "o..o.o..o.o..oo...o...ooo.........o.....oo.o.o....", "....o....o.o......o.....o.o.o.ooo.o...oo..oo.o..oo", ".o....o.o.oo.....oo.o.o..oo......o...ooo....ooo...", "o..oo...ooo.oo.oo..o..ooo.o.o.o.oo.oo.oo......oo..", "oooo.o....o........o.o.o.o...o.oooo....o.........o"};
    int K = 371;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 351087;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> field = {"....o......o..o......o...ooo.o.oo...o......o..o...", "ooooo.o.ooo..o....o..ooo.o...oo.o..o.o....o...o..o", ".oo.oo.....oo.o..o..ooooo....o..o..o...o.oo...oo..", "ooo.........oo..oo....ooo..o.oo..o..o.ooo.ooo.oo..", ".o.....o..ooo...........o..o.....oo....oo.o.oooo.o", "o.o..oo.o.o.oo.o..o.ooo..oo.o.oo...oo...o..ooo.ooo", ".o.....oooo.o.o..o..........oo....o..o....ooo.o...", "..o...o...oo...o...o....o..o.oo...oo.oo.....oooo..", ".o..oooo...o.....o..o.o..ooo.o...........o...o...o", "...oooo..o.o....o.o......ooo....o..o......o.......", "o..o........o..oooo.oo.oo..o..oo.o......o.o.o.o.oo", ".o..o.o..o.....o..ooo.....ooo...o.oooo...o.oo.o...", ".ooooo.....o...ooo......o..oooo.o....o......ooo.o.", "..o.oo.o.o..oooooo......oo..o..oo.o..oo.oo.o.o.ooo", "...o.oo..o.o.o...oo.oo.oo.o.oo....ooo.oo.o..oo.o..", ".o...o..oo..o....o.ooo.oo.o..oo..o.oo..o.o.o.o..oo", "...o...ooo....oooo.o..o....oooo..o.o......o.oo..o.", "..ooo..o...o...o.o..ooo....o.oo...o.o.o.oo..o..oo.", "..ooo...oo....o.o......o.o..o.o.....o...o...o..o..", ".oooo.oo...o.oo.o.o.oo.o....o....o..o..o..........", "o.o..o.ooooo.o..oo......o..o..o.....ooo..o.oo.....", "...o.......oo..o.o...oo.o...ooo..o.o....oo.o.o....", ".o.oo...o.....oo.oo....o.o..o.oo.o.oo.oo.o.o..o...", "o...o.oo.o..o.o.oooo.ooooooo.oooooo..oo..oo.......", "..o.o....o..oo..oo.oo..o.oo....o..........oooo..o.", ".........o..oo..oo..oo.o.oo.oooo.o...o.o...o.o...o", "oo...o.oo.o.oo...o.........o..oooo.oo..o......o..o", ".o.o..oo....o...o.ooo.o..oo.o...o......o.oo..oo..o", ".o...ooo...oo.......oo.oo.o.oooooo..o........oo.oo", "o.o.o....oo........o....o.o....o..o..oo.....oo.oo.", "o...o.oooo.o.oo.......o.oo.o.oo...oo.ooo.....o.o..", "ooo...o...ooooo...o...o........oo.o.ooooo.o..o..o.", "......o.oo....o...o.oooo..o..........oo...oo....oo", "..o.oooo.....oooo.ooo....oo..oo....oo.....o.....o.", "..o....o..o.o..o..o.......o......oooo.....oo.ooo.o", "o..o.o.oo....o....o..o.o.o....o...o....o.o...o....", "......o.oo.oooo..oo..oo..o...o..o..o.oo.o.....o...", "oo..oo.o.ooo.o.ooo.oo.ooo.ooo.oo.o..o...oo..o.....", "oo.................o.....o.o.oo.o..o..o.ooo..oo.oo", ".o..o.o.oo...o.o..o..o.oooo.oo...oo...o..o.o..o...", "o.o...o.o..o.ooo...ooo...o.o..o...o.o.o..oo.o.ooo.", "..o.o...ooo..oooo..oo..ooo....o..oo....ooo...o....", "...o.oooo.o...o...o.oo....o....o.oooo..o...o..ooo.", ".oo.ooo.o......oo.ooo.o.......oo.o..........o.o..o", ".oo.oo.o.ooo.oo...oooo.o.o.o.o..o..ooo...oo.o.o.oo", ".o.oo.o.o..o.o.oooo..o.o.....o.o..oo..o.oo.o..o...", "oo.ooo..o..ooo.....o.oo......ooo.o.oooooo.ooo.o...", ".o.o..o..o..o.o......o.o.oooo..o.......oooo.....oo", "..o..o.o.o....o.o.o.....o..oooo..o..ooo.o.....o..o", ".......o.o....o..o.o......ooo.oo....ooo...o......."};
    int K = 745;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1255406;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> field = {"oo...oo...o.......oo.oo.o..o...o.o.o...ooo.....o.o", "oo.o..o...ooo...o.o..o..o.oo..o...o..ooo.ooooooo..", "ooo.o..o.oo...ooo.oo..o.oo.oo.oo........ooooooooo.", "o.oo.....ooo.oo......o...oo.o.....o......oo......o", ".oo..oo.........o.ooo.oooo..ooo...o.....o..ooo....", ".oooo.oo.ooo.oo.....o..o.o..o.o.o..oo.oo..o.ooo..o", "o..o....oo.o....o......oo...o..o.o.oooo.o..o....oo", "oooo.oo.ooo.oo...o..o.oo.o.oo.o....ooo.......o....", "ooo....ooo.o.o.o.o.o.o.ooo....ooooooo.oo.oooo....o", ".....o....ooooo...ooo..oo.o..o.....ooooooo..o.ooo.", "o..o......ooo.oooo.o....ooooo.o.o...o..o..o.o.ooo.", ".oo..o.......oo.oo...oooo.ooo..ooo....o.oo.oo...oo", "ooo...o..o..oo.oo..ooo...o.oo...oo.o.o.oooo.o.oo..", "o..o..oo.o...o....o.o.o.....oooo..o.ooo...oo....o.", ".ooo...o..oooooo....o.o...o...o.oo.....o.o..oo..o.", "o..o.o..o.o.o..o...o.o.oo...oo..o...o.ooo..o...oo.", "ooo.o.oooooo.o..oo.oo....o...o.o.oooo..oo.........", "oo..oo...oo..o.o..o....o.oooo.o...o.o..o..ooo..o..", "....oo...oo...o.oooo.ooo.o..o..o.o.....o......o...", "....o..o.....oo...o.oo..ooo...ooo.o..o.o.o.o..oooo", ".o.oo...o.....oo.o...o..o.o.oo...oo.o....o.oo....o", ".o...o.ooo..o.oo..ooo....o.oooooo.o.o.....o....o..", "o.o.ooo...oooooooo....ooo..o.o....ooo...o.o.oo..oo", ".ooo.o......oooo...o.o..ooooo..ooo...o..o...ooooo.", ".o.o....oooo..o..o....oo.o..oooo.o.oo.o..oooo.oo.o", "o..o........o..o...ooo.o..oo...oo.o..ooooo...ooo..", ".o.oo.o..oo.....o.ooo..o.o...o...oo...o.....o..oo.", ".....oo.oo...oooo...o.o....ooo..o.o....ooo....o.o.", "oooooooo......ooo....o...o...o.o...ooo.....ooo..o.", ".o.o..ooo.o...o..o.o..o.o...o..o..o..o..o.ooo.oo..", "o.oooo.o.oo.oo.oooo..oo..o..o..o..o....o..........", "o......o.o..ooo..oo....o..oo.o...o.ooo.oo.o..o.oo.", "...o.o..oo..o.o.oooo..o....oo.ooo...o.o..ooo..oooo", "o.o.o..o.oo.oo..o..o..o..o.oooo...o...oo.oooo.ooo.", "o..o.o...o.o.o.o..ooo.ooooo.o..o.oo...o.o..oo..oo.", "oo....o.o.oo..o..o.o.oo........o.oo..oo..o..o..oo.", ".o.o.o.ooo..o..o.o......oooo.o.o.o.o........ooo...", "o.....oo...oooo...oo...o...o..oo...ooo.oo.oo.oo.oo", "....oo.o.o..o......o.oo.o..o..oooo..o..o...o...ooo", ".o.ooooo.o..o...o.o..oo...oo.oo.o.oo..ooo..o.o....", "ooo.o..o.o.o...oo.ooooo.o.o.oo.o....o.o...o.o.o.o.", "..o.o....o...oooo.o...oooo.oo.ooo..o.oo.........oo", "......o....o.o.oo..oo..o.o.oo.o...o...o..oo.o...o.", ".o..oo.oo...o...o.o.oo..o....oo.oo.oooooo.ooooo...", "o.o...oo..oooooooo...oo.oo....ooooo..oo.oo..o...o.", ".o....o.ooo..oo.......o.o.......oo...o.o..ooo...o.", "o.o.o.oo.ooooooo.o....o....o.o...ooooo.....o.oo...", "oo.oo..o...oooo......o...o.o.....o.ooo...o.ooo.oo.", "o...oo.o.o..o...o...o.oo.oo.ooo.ooo..ooo.o.oo.....", "o...o.o.....o...oo..o......ooo..o.o.oo....o...o..o"};
    int K = 639;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 945524;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> field = {"o.....oo.o.oooooo.oo....oooo..ooo..o.....ooo...ooo", "o...o.....o.o.o..o...oo..ooooo.oo..o...oo...o..o..", "ooo..ooo.oo..o..o.oo....o.o...oo...o.o.o....o.ooo.", ".ooo..o...o.o..o......oo.oo...o....oooo.oo.oo....o", ".o.oooooo.....ooo.oo...o.o...o.ooo.o..oooooo..oooo", ".ooo..oo....o..o.oooooooo..o..o.o..o.oo..o.ooo...o", ".o....o.ooooo..o........o..oo.ooo....o..o..o.o...o", "ooo.....oo.oo.....ooo........oo.o..o.o...o.oo.oooo", "o.o.o..oooo.oo.oo.oo.ooo..o..o.oo........oo...o...", "..oooo..oo...oo.....oo....o.o...oo.o..o..o..ooo.oo", ".o.oo..o..o.....o.oo.o.....o.ooo..o..o.oo...o.ooo.", "oo.oooo..o.o.o.o.o...o..oooo..ooooo.oo...o.o.ooooo", "oo....o.....o.o...o.o.oooo.oo.o.o.o..oo.o.oo.o....", ".oo..o..oooooo.....o.oo..oo..ooooo....o......o....", ".....o.ooo..ooooooo...o..oo.oo.o..oo.o.ooo........", ".oo.o...o..oo...o...o..o.o...o..o.o..oo..o.oo...oo", "o..o..o.o...oo...oo...ooo..o..o.o.ooo...ooo.oooo..", "o...oo.ooo.o...oo..o...o..o.o.ooooo.oo..o.oo.o.o..", "...o..o.o.o..o.oo.oo.oooo...ooooo.....ooo....ooo.o", "o.......oo.o..o...oo.ooo.....oo..o.....o.ooooo....", "..oo.ooo..ooo.o.o.oo.oo.oo.oo.oo....o....oooo...oo", ".oooo.o.o..ooo...ooo.ooooo.ooo.o..oo.o.oo....o..o.", "o..o.oo..o.ooo.o.o....oooo..o..o.oo..o.o..o......o", "oo.o..o..o.o..o..o..o....ooo..ooo..o.oo.o.o..o....", ".o.oo.o.oooo.o....o.ooooooooo.ooo.o.o..o.oo.oo.o..", "o.o.o....o..o.oooo...oooo...ooooo.ooo.oo.ooo..o.o.", ".o..o.o.oo.oo.o.oo.ooo.ooo...o.oooooooo..o.o.....o", ".oooo..o..o.o..o.oo..ooo.o....o..o.o..o....o.o...o", "o.ooo.oo.o.o.o.o.o.oooooo..o.o.o....oo..ooooo.o.oo", ".o.....ooo..o.o.ooo.ooo.o...ooo..o..oo.oooo...oooo", "..o.o.o....o..o.oooooo.o.o....o.o.ooo.oooo..oo...o", "..o..o..o..o...oooo.ooooo.o...o.....o.o.o...oo..oo", "oooooo.ooo.oo..ooo....o.o.o....ooo.......oo.o.o..o", ".oo...ooo.oooo....oooo.ooo..o..oo.....o.oo.ooooo..", "..ooo.oooo......o.oo.o.o.o..oo..oo.o.oo.o.ooo.ooo.", "..ooo..o.o..oo.oo....oo.............oooo..o...oo..", "o.o.oo..o.oo.o.ooo.o...o..o..ooo...........oo...o.", "o...oo.ooo...ooo.ooo..oo.o....o.o.oo..o....o.o...o", "oo.o.o.o..o.o.ooo.oo..oooo.....o....o.ooo..o..oo.o", "..o.o..ooo..ooo.oo.o.........o.ooo.o...oo...o.o.oo", "o.....o.o..ooooooo..oooo....o......ooo.ooooo...oo.", "o.ooo..o.o.o.....ooo..o.oo.oooo..oo...oo...o...o..", ".....o.ooo...o.oo.oo.........o.oo.oo..o.oooo.oo...", ".ooo..oo......o..oo.o...oooo..o..oo..oo.ooooooo...", "oo.o.oo.o.o.ooo.o.o..o..ooo..oooo.o..ooooo..oooooo", "...oo.oooooooo.oo..o.o.o..oo...o.o.o..o..o.o.o..oo", "oo..o......ooo.....o.ooo...ooo.....oo..o..oo..ooo.", ".oooooo...o....o.o....o.ooo.....oo....o.o.oo.o....", "...o..o......oo..o...o.oooo....o...o.oo.o.ooo.oooo", ".o.o.o.oooo..oooo...oo..o.oooooo...o.oooooooo...o."};
    int K = 1154;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2892005;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> field = {"...ooooooooooo...oo...ooooo..oo..o.o...oo.oo..oooo", "o.ooo...o...o.o..ooo..ooooo.o......o...ooo..ooo..o", "o..o...ooo..oooo.....o...ooo.ooo..o....oo.o.oo.oo.", "oo..ooo..oo.o..ooooo.....o....oo..oooo....o.....oo", "o..o.o.ooo..o.o..o.o...oo.o.oo......o..o.oooooo...", "....oo..ooooo.oo.......ooooo..o..o.ooo.ooo..oooo..", "..ooo.o..o.ooo..o.o..o.oooo..o.ooo.oo........o.o.o", ".oo...ooo..ooo...o..o.o.o.o.oo.oo..o..oo..o...oooo", ".o..ooo..oo.oooo...o.oo..ooo.oo....o..o.o..oo.oooo", ".oo...ooooo..o...o...o.o...oo..o..ooo.oo.oo.o..o..", ".ooooooo...ooo...oo.oo..o.oooo..o.o.o.....oo......", ".oooooo..ooooo.oooooo.o.o.oo...o.oooooo..o.oo.o.o.", "..o.ooo.o.ooo..oo..o..oo.o..oooo..o......ooo.o.oo.", "..o.ooooooo.o.ooo..oo.o...o.o.oooooo..oooo.oo..oo.", "oooo.oo.o.o.o.....o.oo..o.o...o...oooo.o...ooo.o.o", "oooooooo...oooo..o.oo.o..o..o..o..oooooo...ooooo..", "oo...oo.oo.....o..o.ooooo.o.o..o...o.o.ooo....o..o", "ooooooo.oo.o.ooo....oo..o.oo..ooo.o..o..o.oo..oo.o", "oo.oooo..o.o...ooo..o..o.oo.oooo..oo...o.o.ooo.oo.", "ooo.o.oo.o..ooo..o..o.oo..oo...o.o.o...o.oo.ooo...", "...oo...o..ooooooo.o..o...o.o.o.oo.o.ooo.o.o.ooooo", "...o.o....ooo.oo..o...o.oo...o.o..ooo..oo..o...oo.", "...o...o.....o.oo...o.oo.oooo.o.oo..oo...o...o....", "ooooooo.o.o.ooo..o.ooo.o..ooooo......o..oo.o..oooo", "ooo.o..oo.o..o....oo.oo..o......o..ooo.o..o.o..o.o", "..o.o..o.ooo...o.o.oo..oo..o.o.o...oooo.o..ooo.o..", "oooo..o..o.o..o...o.oo.....o...o....o..ooo....o.oo", ".oo.o.ooo...o.oo.......o.oo.o..oo.o..ooo...o.o.oo.", "oo.o..o.ooooo.ooo.oooo..o.oo.o.ooo.oo..oo..o..o.oo", ".o..o.o.o.oo...o.oo.oo.o.ooooo..oo.o...o.oo.oooooo", ".o.o....o.oooo.o.o.oo.oooo.o.o.....o..ooo.o..oo.o.", "oo.ooo...o.ooo....oooo.o...oooo.o.o.oo...ooooo...o", ".o.ooo...oo...ooo..o...oooo...oooo.oo.o..ooooo.o.o", "...o..oo..o..o.o.ooo.o.o....ooooo..o..oo.o.oooo.o.", ".oooo...oooo.oo....oo...oooo..o.o.ooooooo.oooooo..", ".o.o.oooo...o.o..o...ooo...oo.o.ooo.oo.o...o.o.o.o", ".oo.oo.oo....o.o.o.oo.oo.o.oooooo..oo.o..ooo.oooo.", ".oooo..o.....o..o.oo..o.oo...ooo.ooo...o.ooooo.o..", "ooooo...o..ooo.o.o.oo.ooo....ooo.o.oo..oo..o.ooo..", "oooo.oo.o...ooo....o..oo.oo.oo.o..o..oo.o....o.ooo", "..oo.o.ooooo.ooo......oo..oo.....o.oooo...o.o.o.oo", ".o.....oo.ooo.ooo......o....o.o.ooooo..ooooo.oooo.", "oo.ooooo.ooo...o.....o..oooo.oooo..ooo.o....o.o...", "o.oo..oo.o.oooo..oo.o.oo.oo....oo.o.ooo.oo...ooooo", "o...ooo....o...o.o..ooo..ooo.oooo...oooooo..ooo.o.", "o.o.o..o..o....oo...o.oo.o..ooo...o.o.o....oooo..o", "o.........o.o.oooo..o..ooo.o.o.oo....oooo..o...ooo", "oo.oo.o.o.o.oo....oo..o...ooo.oooo..o...o..oo..oo.", "o.o...oo..oo..o.o..o.........oooo....oooo.oooooooo", "o..oo..o..o...oo.o..o.o.o.oooooo..ooooooo.......oo"};
    int K = 670;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1032186;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> field = {"o..o..ooooooooo..o....ooo.o.o.oo..ooooooooo.oo.ooo", "....oo..o..oooo.o.oo.oo.oo..o.ooo.ooo.oo.o.oo.oooo", "oo.oooo.o...ooooo..o...ooooo.o.o.oooo.oooo...ooo..", "oo.oo.oo..o.o..o..ooo.ooo...ooo.oo.oo.ooooo.oo....", "ooooo.o.o..oo.oooo.o.o..o..ooooo.oooo..oo...oooo.o", "...o.o....o.oooooo.ooo.ooooooooooo..oo.ooo..ooo.oo", "....oo..ooooo.o.oo.ooo.oo.o.ooo.o..oo.o..oooo...oo", "ooo.oo.oo.oo..oo.....oooooo......ooo.......ooo.o..", "..ooo.o.oo.oooooo.ooo..oo.o....oo...ooo....ooo.oo.", "..o....o.o.o.oooo.o.oooo.o.o.o.o.oo...o..o..o...oo", "..oo.o...ooooooo...oo...o..o...oooo.o..o..o..ooooo", ".oooooooo..ooo.o.o.oo..ooo.ooo.oo..ooo.o....oo.oo.", "oo..oo...ooo.oo.o.o....oo..o.....oo..oo.oo.o..o.oo", "..ooo.o.o......o..o..oooo.ooooo.o....o.oooooo.o..o", "..o.ooo.o.ooooo.o..o.oo...o...o...oo.oo.o..ooooooo", ".o.ooooo.o..o..ooooo.o.ooo.oooooo...o.o.oooo..o.oo", "oo....oo.oo.oo.oo..oo.oo..oo.oo.o.oooo..o.o.o.oo..", "o.o.oooo.ooo.o.o.oooo.o..oo.....oo.o.oo.o.oo...oo.", ".o..oo....oo..ooo..o..oo.oooo...oooo.ooo.oo..oo..o", ".o.o...o...oo.....oooo.ooo.o...o.o..oooo.o..o..o..", "oooo..ooo.ooo...o...o.ooo.o.ooo.ooo.o.oooo.oo..ooo", "oo...ooo.ooo.o..oo..oo.oooo.oo.ooooo.o....oo..o..o", "..o..oo.oo.oooooooooooo..o.o..o..ooooo.....ooo..o.", ".o.o..oooo.o.o.o.o.oo..o.oooo..oo.o.oooo.oooo.ooo.", ".o..o.oo.ooo.oo.o.o...oo...o.oooooo....oooooooo...", "o.o.o.o.oooooo.o....o.....o...o.oo.o.ooo.oooo..o..", ".oo.o..o.o.oo.o.o..oooooo.o.oo..ooooooo....o.oo.oo", "..oooooo.oo.....o.oooo.ooo.o..oo.o.o..ooo.oo...oo.", "oooo.o.o...oooooo..ooo.oo..oo.ooooo..ooooo..oo..oo", ".o.ooo.oo..o.oo..oo..oo.o.oo...oooo.oo.ooooo.o..oo", "....o..o.o.oo.oo.oooooo.oo..o..o.o.oo..oo..oo.o.oo", "oooo..oo.o.o.ooooo..o.......oo..oooo.o..o..o.o.oo.", "o.o.o.oo.o.oooo.o.ooooo.o..ooo...ooo.o.o......oooo", "o..o.o.....o.o..ooo.oooo..ooo.o.ooooooooo....oooo.", ".oo...o.o.ooo.o..o.o..ooooo.ooo.o..o..ooooooo.o.o.", ".oooooooo.oo...oo.ooo.o.o.o...o.oooo..oooo...o..o.", "o.o.o....o.oooooooo.....oo.o.oooooo.oo..oo..ooo.oo", "o.o..o.oo..o.oo...o.....o.oooo.oooooo.o.....o...o.", "o......o.o.o..oo.ooo..o..oooo..o.ooooooo.oooo.oooo", "ooo.oo..o.oooo...ooo.oo.o..o..oo....oo.ooo.oo.o.o.", "..ooooooo.o.o.....ooo..o.oo.o.ooo.o.o.o.o..ooo.oo.", "o.oo..oooo.oo..ooo....oooo.oooo.oo.ooooo.oo....o..", "o.o.o.oo.oooo.oo.oo..o..o..ooo.o.o.oooo....oooo.oo", "o..oooo..ooo.oooo...oo..oooo.o...o.o.....oo...o.oo", "oooo..ooooo..oooooo.o.o.oo..o.....oooo.ooooooooo.o", ".o.oo..ooooo.oo.o..o..o.o.oo.o.oo.oooooo.ooo.oo..o", ".o.oo.o.oo.oo.oo.o.ooooooooo..oo...oo.o.oooo..oooo", "o.oooo...ooooo.ooooo.ooo..o.ooooooo...o.....oo.oo.", "o.o..oooooo.o.ooo.o..o....ooo.ooooo.o.oo.o.oooo...", "o.oo.o.o.oo..o..oo.o.oooo.oo.o.oo..ooooo.o.o.o.o.."};
    int K = 1269;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3471855;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> field = {"oooo.ooooo...ooo..o.ooo.ooooo..ooo.oo..ooooo..o.o.", ".o.oo.o...oo.oo..oo......oo.ooo.o.oo...oo.o.o.....", ".ooooo.o.oooo.ooo.oo..oooo..ooo.o..o.oooo.o.o.oooo", "...oo.oooooooooo.o.o.o.ooooooo..oo.ooo.ooooo.o.ooo", "o.o.o...oooo.oooo.oooooo..o.o.o...ooo...o..o..o.oo", "...oo.oo.ooo....oo.o.oooo..oo.oooooo.oooooo..ooo.o", "oo......oooo.oo..oo..o.ooo.o.o...o.oooo.oooo.ooooo", "o.ooo..oo.ooooo.oooo.ooo....oooo.oooo..ooooo.o.ooo", "..ooo.o.ooo.ooo.ooooooo.o.ooooooo.ooo.ooooooo.oo..", "..o.ooooo...ooo....oo.o.......o.oo.oooo.....ooo.oo", "o.ooo.oo.o..ooo..o.o...oo.o.o..oo.o.ooo..o.ooooo.o", "o..o.o.o....ooooo.ooo.ooo..o...o.o.oooo....oooo..o", ".oo.o..oo.ooo.o.oo..oo.o.ooo.o..oooooo..oo....ooo.", ".oo...ooo...oo.ooo.oooo.o.oo..o.o.oo.oooo.oooo..o.", "oooo..ooooooo.oo....oo.o.oo...o.ooo...o....o...o..", "ooo..oooooooo.o.o..ooo.oooo.o.o.oo.ooo.....o.o..oo", "ooo...ooooooo.ooo.oooo....o..oo.o.oooooooo....o.oo", ".oo..oooo.oooo..oooooooo..ooo.oo..o.oooo....o.o.o.", ".o..oooo.ooo.o...o..oo.o.oo.o..oo.o.o.oo..oooo.ooo", ".oo..o.o.ooooooo..o...o.oo....ooooooo..o..oo..oo..", ".oo.oo.ooooooo.oo.o...oo.ooo.ooo.o....oo.ooooo.oo.", "o.oo.ooooooo.ooo.oooo..o.o.ooooooo.o.o..ooo.oo.ooo", "oo..o.ooo...o.o..ooooooo.ooo.o....o..ooo.oo.o.oo..", "o.o.ooo.o.oo.o.oo..oooo...o.ooo..ooooo.o.oooooooo.", ".o..o...oo.o..ooo.oo.o.o.oo....oo.ooooooo..o.o..oo", ".oooooo.ooo...ooo.o.oooo.o.oooooo..o..oooo.oo..o.o", ".o..ooo....oo.oooooooo.oooo.oo...ooo.ooo.ooo...oo.", "o....oo..oo...o.oo...o...ooo..ooooo....o.o.ooooooo", ".ooo..oo.o....oooo.o.oooo.o.oo....oo.oo.oooo..oo.o", "...o.o.ooo.o..o....o.ooo.o.o..oooo.oooo.oo.o.ooooo", "oooo..o.oooooooo.o.....oo.o..ooo.ooo.ooooooo.ooo.o", "o.oo.o.oo.ooo.o.o.ooo.ooooo..oooo.ooo.....o.o..ooo", "..oooo..ooo.oo..o..o.ooooo..o.oooo..oo.oo..oo.oo.o", "oooooooo.o.oooo..ooo.o.o.o.o....ooooo.oo.o..oo....", "oooo.ooo..o.oo........ooo.oooo.oooo..oooo.oo.oooo.", "oo.o..oo...oo.o.o.oooooo.o..o....oo..oo.oooooo..o.", "oooo..ooo...ooooo.o..ooo.ooo.oo.o..ooo.ooooo.o..o.", ".o.ooo.ooo.o.....o..oo.oooo...oo.o......ooo..o.o.o", "oo.o.ooo...o.o...o.ooo..oooo..o.o..oooooo.oooo.oo.", "o.o..o.oo...oooooooooo...ooooo.oo...o..o.ooooooooo", "o..o.o.o...oo.o....oo.o...oooo.o.o.o.o..o..oo.oooo", "oo.o.oo..oo.oooo.o.o...oo.ooooooo.oo.oo..oo.ooo.oo", "ooo..o..ooooooo.oo..oooo...o.ooooo.oooooo..oo..o.o", "..o....oooooooooo..ooo.o..o.oo...ooo..ooo.ooooo...", "oo.oo..o.o.ooo.oooo...oo.oo..oo.oooo...ooooooooooo", "oo.o.ooooo.oo..o.o.o.oooo..oo.o.ooo........ooo.ooo", "o.oo.o.oo...oooo.ooooo..o..o.oo...oo.ooooo.o.o..o.", "ooo...oo.ooo...oooo.o.oo...o.ooooo...ooo.o.o...oo.", "ooo...oo.ooo.oo....ooo.o..oo.oo...ooo.oo.ooo.o...o", "oooo.o.oooooo..oo..oo...ooo.o.oo.o.o..o.oo.oo.o.oo"};
    int K = 550;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 715774;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> field = {"ooo..ooooo.oooo..o.oooooo.oooooooooooo.oo...ooo.oo", "o.o.oooo.ooooo.o.ooo.o.ooo.oooooo.oooooooo.ooo.o..", "oo.o..ooo.oooo.ooooo..oo.ooo.o.oo.ooooo.ooo..o.ooo", ".o..ooo......oooooooooo.o.o.oo.oo.ooo.oooo.oo.oo.o", "oo.oo.o....ooo.oooo..oooooo..o.oo.oo.o..ooooooo...", ".oo.o..o..oo..o..oooooo.oooooooooooo.ooo.o.oooo.oo", "ooo..oooo...oo.oo.oo.oooo.o.oooooo.o.oooooooo.o...", "ooooooo.oooo.ooo.oo.o.oo.ooo.oooo....o.o.ooo.oooo.", "o.ooo.o.o..oooo..o.ooooo....oooo.o..o.o.oo...o.oo.", ".o..o.o.ooooo...oo.o.o..oooo.o.ooo.ooo.oooo...o.o.", "ooo.o.o.ooo.oooo.oooo.oooooooo.ooo..ooooo..oo.oo.o", "o.o....o..o.ooooo.oo.o.o.ooo.o..o.o.oooo.oooooooo.", "ooooo.ooo.o..oo.ooooo.ooo.o.oooo.oooooo.oooooo.ooo", ".o.oooo.o.oo.oo.oooooo..o.o..oo.ooooo.o..oo.oooo.o", "o..o...oo..o.ooo.oo.o..oo...o..oooooo.ooo.oo.oooo.", "o.o..ooo.oo.oo.ooooo..ooooo.oooo..oooooo..o..oo...", ".oo...oooo.o...o.oooo.ooo.ooo.o..o.o.ooooo.oo...oo", ".oo.oo..o..o.o..o..oo.oooooo..oo.oooo.o.o..ooooooo", "..oooo.oooooo.o.ooooo.ooo.ooo.oo..oo.o.ooo....oooo", "..oo.o.o.ooo.oo....oooooo.oo..oo..o..ooooooooooooo", "oo.o.oo..ooo.ooo...ooo..o.ooooo.oo.oooooooooooo...", "..oo.oo.oooo.....o....o..oo.oo.oooo.oooo..o.o....o", "o...o.oooo..o.o.ooo.oooo.o.oo.o.oo.o.ooo.ooooo..oo", "o..oo.oo..ooooooo.oo.oo..oooooooooo...oooo..oooo.o", "o.oo.oooooooooo.ooooo.oo.oooo....oooo.o.ooooooooo.", "oo..ooooo.oooo.oo..o..o.o.o.ooo.ooooo.oo.oo.oo.o.o", "o...oo.oooooo.ooo..o.o.o.ooooo.oooo..oo.ooooo.o..o", ".ooo.o...ooo.o...o.o...oo.oo.o.oo..o.o.oooo.oooooo", "o.oooooo..oo.o..o...o.o.oo...o.ooo.o.o.oo.o..o.ooo", "o.ooooo.o.ooo....oo..ooo.o....o..o.o.ooooo.ooo.oo.", "oo.o.ooo..o..oooo.ooooo.o.o..oooooooooooooo.oooo..", "o.ooooo..oooo...oo.o.oo.o......ooooooo.o.oo..oooo.", ".ooo.ooo...ooooooo.ooooooooo..oooo.o.ooo.ooooooooo", ".oooooooo..o..o..o.oo.o.oo..oooo.oooooooo...oooooo", "..o.oo.ooo.o.o.ooooooo.oo.o....ooo.oo..ooooo....o.", "oo......o..o.ooo.o.oo..o..oo..o.o.oooooooo..oooo.o", "o.oooo.o.ooooo..ooo.ooo.oo.o.o..oo.oooo.oo.o..ooo.", "o..o.o......ooooo.ooo...oooo.ooooo...o..o....o.o..", "o.o.o.oo..oooo.o.oo.oo..ooooooooooo..ooo...oo.oo..", "o.oo..oo.o.oo.oo..o.ooooo.oo.o.oo.oo.o...oo.ooo.oo", ".oooo.oooooo.o.ooo.ooo.oo.ooooooo......o.o.oo.oooo", "o.oo.oooo.o.o.o.oo.oooo.oooo.oo..oo.o..o.oo..o.ooo", "ooo..o..o.o....o.o..ooo.oo.o..oooo....o.o.oooo.o.o", "o.oooooooooo.o.oo.oooo..ooo..oooo.o.oooooooooo.ooo", ".o..o.oo.oo.oo..oo.o.oooo.oooo.ooo.ooooooo.ooooo.o", ".ooooo...o...o.ooo.o.ooooooo.oooooo..o.o.o..oo.o.o", "o.oo...o.ooo.o.oooo.ooooo.o...o..ooo..o.o.oo..o.oo", "oooo.oooo.oo..oo..o.....o.o.o..ooo.oooo.ooo..oooo.", "ooo...oooo.o.ooo..ooooooooo.oo.oooo..ooo.o..oo.oo.", "o.oooooooooo.oo.ooo..oooo.oooooo.oooo..oooo..ooo.o"};
    int K = 860;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1651916;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> field = {"o.oo.ooooo..ooo.o...o.o.o.o.o...o.ooo.o.ooo..o.ooo", "oo.oo.oooo.o.o..ooo...oooo..oooooo.ooo..ooo..o.ooo", "o..ooooo.ooooo.oo.o.o.oooo...oooo.ooo.ooo.o..ooooo", "oo.oooo..oooooo..oo.o..oo...ooo..ooo.oooooo.o.oo..", "oo..ooo.ooooo.oooooo...o.o.oooooo...ooo..o.o.oooo.", "oooo.o.o..o.oooo.o.oooooo.ooo.ooooo.oooo.oo..oooo.", "..ooo....oooooooooooooo.ooo.ooo.ooooo..o.oo.oo.ooo", "oooo.o.ooooo.o.oooooo..oo..oooo.oo.oo.o.oooo.ooooo", "..o.o..ooooo..oooooooo.o..oooo..oooo.ooooo.oooo.oo", "oo.oo.o...ooo.oo.o.ooo.o.ooo.oo.oo..o.oo.oooo.o.oo", "oooo.o...oo.oo.o.oooo...ooooo.ooooo.ooo.ooo.ooo..o", "ooo.o.oo.oooooo.ooooo.o.ooooo.ooo.oo.o.oo...ooo..o", "..oo.o..o.oo...oo..o.ooo.oo.o.oooooooo.ooooo.o.oo.", ".oooo.oo.oooooooo...o.o...oooooooooooooo.oooo.oooo", "ooo.ooo.o....ooo.o.oo.oooooooooo.ooo.o.o..ooo.oooo", "o.ooooooo.o.oooo..oooo.o.ooo..ooooo..o.o.oo.ooo..o", "ooo.oo.oooooo.o...oo.oo.o.ooo.o.ooo...oooooo.ooooo", "ooo...o.o...oooooooo..oooo..o..ooooo..o.ooo.ooooo.", "ooooooo.oo..ooo...oooo.oooooo.oo...oooo.o.oo.ooooo", "o..ooo..oo.oo.o.ooooo.o.o.oo..oo.oooo.oooooooooooo", ".ooo.oooo.o.oooo.o....ooooooo....o.ooooooo.ooo.ooo", ".oooo.o..ooooo..o...o.ooo..ooo.ooooooo.o.o.o..o..o", "oo..o.o.ooo.o.o..o.oo.oo.ooooooo.oooooooo.oo.o.ooo", "o.o.oooooo..oooo.o..o.ooo.oo.o.oooooo..ooo.o.oo.o.", "oooo..ooo..o.oo.oo.....oooooo.oo.o..ooooooooooo.o.", ".ooo.oo.oooo.ooo..oo...ooo.ooooooooo.o.oooo..ooooo", "oooo.oooooooo.oooo.ooooooo...oooo.ooo.oo...ooooo..", "ooo.ooo.o.oooo..ooo.o..o.o..oooo.oooooo...o.o.o..o", "o..oooo.o..ooooo.oo.oo.oooo.ooo....o..oo...ooo.o.o", "oooo.oo.ooooo...oo.oooo.o..oo..oo.ooo.ooooo..ooooo", "o..o.oo.oo..o.ooo.ooo.ooo.oo..oo.oo..ooooo.oo.ooo.", ".oooo.ooooooo.oo.oooooooooo.oo..o.oo..ooo..ooooo.o", "ooo.oo.oo..o..ooooooooooooo.oo.ooooo.ooooooo.ooooo", "ooooooooo...o..o.oooooooo.oo.ooo..ooo.o.o.o..oo..o", ".o.oo.o.oooooooo....ooooo.o.oo.ooo.oo.oo.ooooooo.o", "oooo...oo.oo.ooo.oooooooo.ooooo.oooo.oo..o.ooo..oo", "ooooooo..o.oooo..o.oo..o.ooooo..o.o.oo..oo.oooo...", "ooo.oooo.o.oo....o.oooo.oooo..o..oooo....ooooo.o.o", "o....o...o.o.o.oo.o..ooo.ooo..o.ooooo.ooo.oooo.ooo", "o.ooooo..o.oo..o.o...oo.oooo.o..oo.ooo.ooooooooooo", "o..ooo.o.o.o.oooooo.o..o..o.o..ooo...ooooooo..oooo", "oo..oooooooo.oo.oooo.o.ooooooo.oo.o.o.oo.o.ooo.oo.", "o.o..o.o..o...ooooooooo.oo..oooo.ooo.ooo.oo.o..ooo", ".ooooo.o.oo.oooo.o..oooo..oo.o.oooooo...ooooooo.oo", ".ooooo.oo.oooo...o.ooo.oooo..o.oooo..ooo.ooooooooo", "oo.ooo.ooo.oooooo..oooo.oo.o.oo..ooo....oo..ooo.oo", "ooo.ooo.ooo..oooooo.oooo.o.oo.oo.o.o.o.oo..o..oooo", "..oo.oo..ooo.o...ooo.oooo.o...ooooo.ooooooo.o..oo.", ".oo..oo....ooo.oo.oo.oooo....oooooo..ooo.oo.oo.ooo", ".o..ooooooooooooooo.oooo.o.ooooooooooo.oo..oo.oooo"};
    int K = 597;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 832871;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> field = {".oo.oooooo..o.o..o.o.oo.ooooooo..o.oo...ooooo.oooo", "oo.o.o.oooooooo...oooo.ooo.o.oo.oooo.oo.oooo.ooooo", "o..o.oooooooooo.oo.ooo.o.ooo.oo.ooooooooooooo.o.oo", "oo.oo.oooo..oooooo..o.o.oo.oo.ooooooooo..oo.oo...o", ".oooo.oooooo.oooo..oooooooo.oo.oooooo...o.oooooooo", "oo..oooooo.o.o.oooooooo.oo..oooooooo.o.oo.o.oooo.o", "ooo.ooo.o.oo.ooooo.oo.o.ooo...oo.ooo.o...o..oooo.o", "o.o.oooooo.o.oo.oo..ooooo.ooooooooooo.oo...oo.oooo", "oooooooooo..oooooo.oo.oooo....o.ooooo.ooooo.oooooo", "o.o.oooooooo.oooooooo..o..ooooooo...ooo.ooo.oooooo", "oooo.ooo.oo...oooo.o.oo..ooooo..oooo.o.oo.oooooooo", "oooooo.ooooooooo.oo..o..oo.o.ooo.ooo.o.ooooo.oooo.", "o.o.ooo.oooo...o.ooo.oo..oo.o.o..oooo..oooo..oooo.", "ooooooooooooooooooooo.oooo.oo..oooooooooooooo.oooo", "ooo..o..oooo.ooo.ooooooooooo...ooo..oooooo.ooooo..", "o.ooooooooooooooooooooo..o..o.o.oo..oooooooooo..o.", "oo.oo.oooo..oo...oooooooooooo..ooooooo.ooooo..oooo", "oo..ooooo.ooooooooo.o.ooo..ooo.oo..oo.oo.ooo..o.oo", "oooo.o.oooo.ooooooooooo.ooo.o.oooooooooo..o.oooo..", "o..o.oo.ooo..o.oo.ooooooooo.o.ooooooo.oooo.ooooooo", "ooo.ooooo.ooooooo.o.ooooooooooooooo.o.ooo.oo.ooooo", "o.ooooo.oo.ooooooooooo.o..ooooo...oo.oooooooo.oooo", ".ooooooooo.oo.oo.ooo.o.o.oo.ooooo.ooooo.ooooooo.oo", "ooooooooooooo..o.ooooo..o.o.o.oo..o.ooo.o..ooooooo", "oo.o...ooo.oo..ooo.oo.ooo.oooo.oo.o.o.ooo..o.oo.oo", ".ooooooo...oooo..ooooo.ooo.oo.oooooooooo..oooooooo", "o..oo.o.oo.oooooo.ooooooooooo.oo.o...o...oo.oooooo", "oooooooo.ooo..oo.ooooo.o.o.o..ooo.o.ooooooo.ooooo.", ".ooooo.oooooooooo.oooooo.oo.oooooo.oo.ooo.oooooooo", ".oooooooo.oo..o..oooooooooo..ooo.oo.o.oo.ooooooooo", "..o..oo.oo.oooooooooooo.oooooooo.o.ooo.ooo.o..oo.o", "oo.oo.ooo..oooo.ooooooooo..oo.ooo..ooooooo.ooo.o.o", "oooooo..o.o.ooo..o..ooo...oooooooo.ooo..ooooooooo.", ".ooo...o..o.oo..oo.ooooo.o.o..ooo.oo..oo.ooooo.ooo", ".oooooooo..oo.ooo.o..oo.ooooo.oooooo.oooo..ooooooo", "ooooo.oooo.oo..ooo.oo..o.ooooooo.ooooo.oooooooooo.", ".ooooo..oo.o.o..o.ooooooooooo...oo.o.oooo.oooo.oo.", "ooooooo..o.o.oo.oooo.oooooo.oooooo.oooo...oooo...o", "oooo.ooooo.oo.....ooooooooooooo..oooooo.ooooo.o...", "o.oo..oooo.oo.oo.ooo...o.o.oo..oooo.o.ooooooooo.o.", "oo.o....oo.ooooo.o....oooooooooo.o.oooo.oooo.oo.oo", "ooo.ooooo.oo.o..o.ooo.ooo.ooo.ooo..ooo.oo.o.o.oooo", ".ooo...o.o..ooo.o.ooo.oo..ooooo.ooo..o..o.oo..oooo", "..oo..o.o.oo.oo..o.o.o.o..ooooo.oo.ooooo.ooo..o..o", "....ooo..ooooooooo.o.oo.oooooooo.oooooooo.oooooooo", "oo.oooooo...o.o.oooooo.o.oooo.ooooo.oo.oo.oo..oooo", "o.o.ooo..oo.ooo.o.oo.ooo.o..o.oo.ooooo..ooo...o.oo", "ooooooo.oooo..ooooooo.o.ooooo..oooo...ooo.o...o.o.", "ooooooooo.ooooo.o..ooo..oooooo.ooo.oo.oooo..oooooo", "o.oooooooooo.oooooooooo.ooooooooo...oooo.o.ooooo.o"};
    int K = 137;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 66975;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> field = {"oooo.oooooooo.oo.ooooooooooooooo.ooooooooooooooooo", "ooooooo.ooo.ooo..ooo.o.o.oooooooooooooooooo.oooooo", "ooo.ooooooooo.o.ooooo.oo..oo..o.oo..ooooo.o.o.oooo", "ooo.o.o..oo.ooooooooo.oooo.oo.ooooooo.ooooo.oo.ooo", "oooooo.ooooo.ooooooooooooo..ooooooo.ooo.o..ooooooo", ".ooooo.ooo.oo.ooooooo.o.oo.oooooooo.o.oooo.oo.oooo", "ooooooo.oooooooo.oooooooooo.ooo..o.o.ooo..oo.ooooo", "ooooooo.ooooooooooo.ooooooo.o..oo..oooo....ooooooo", "oooo.o.oo.o..oooooo..ooooooooo.o...o.o.ooo.o.oooo.", "ooo.oo.ooooo.oo..o.ooo.ooooo.oooooooo.o.ooo.ooooo.", ".oooooooooo.oooo.oo.ooo.o.oo.ooooooo.oooooo.o.oooo", "ooooooooooooooooooooooooooooooo..oooooooooo.oo...o", "o.oo...o.oo.ooooo.oooo.ooo..oo.ooooo.oooooooooooo.", "o.o.oooooo.o..ooooooo.ooooooooooo.ooooo.o.o.ooo.oo", "ooooooooo.ooooo.oooo.oo.oo.oooooo.o.oo.oooooooo.o.", "oooo.oo.o.ooooooooo.ooo.o.o.o.oo....ooooooo.oooooo", "oooooo.o.ooooo..oo.oooooo.o.ooo.oooooo..oo.ooo.ooo", ".ooooo.oo.o.....o.o.ooooo.oooo.ooooooooooooo.ooooo", ".ooooo.oo.oooo..oo.ooo.oo.o..o.o.ooooooooo.ooooo.o", "o.ooooooooooooo.oo.o...oooo.o.oooo.ooo.oooooooo..o", "ooooo.oo..oooooo.ooooo..oooooo..oooooo.o..ooo.o.o.", "oo..oooooo.oooooo.o..oooooooooooooooooooo..ooooo.o", ".oooooooo...ooo..o..oooooo.oooooooooo...oooo.ooo..", "oo.oooooooo.o.ooo.oooooooooooooo.oo.ooo.ooooooo..o", ".ooooooooo.ooooo..o.ooo.oo.oooooooooooo.oo.oooo.oo", "oo.o..ooooo.ooo...ooooo.ooooooooooooo.oooooooooooo", ".o..ooooo..oooooooooooooo.oooooo.ooooo.ooo.ooo.oo.", "oooo.oo.ooo.oooo.ooo.ooo.o.oooooooooo.o.o.o.oooooo", ".o...ooooo..ooo.ooo.ooooo.o.oo..o.ooooooooooo.o.o.", ".oooo.ooo..oo.o.oooooooooo..o.oooo..oooooo..oo.ooo", ".o.o.ooo.oooooo..ooooooooo.ooooooooo..oo.ooooooooo", "o.ooooooooooooooooooo.ooo.oooo.ooo.ooooooo..oooooo", "o.oooooooooooooooooo.oooooo.ooo.oooooo.ooooo.ooooo", "ooooo..oo.oooooooo.oo.ooooo.oo.oooo..oooooooo.oooo", "oo.oo.ooooooooooo.oo..ooooooooo.ooo.oooo..oooo.oo.", "oo...o..ooooo...oooo.oooooo...ooo.ooo.ooooo..o.ooo", "o...ooooooooo.ooooo.ooooooooo.o.ooooo.ooo.ooooo..o", "ooooooo..oo.ooo.oooo.o.o.oo.ooooo.ooo.o.oooooo.ooo", "ooo.oo..oooo.oooo.oooooooooo..oo.oo.oo.ooooo.ooooo", "o.oooooo..oo.o.ooooo.o.o.oo.oooooooooooooo.oooo.oo", "ooo.oooooo....oo.ooo.ooooooooo.oooo.oooooooo.ooo.o", "o.o.oooo.oooooooo.o.oo.oo.oooooo.oooo.o.oo..oo.oo.", "o.ooooo.ooo.o.ooooooooo....oooooo..oo.oooo.oooo.oo", "oo.oo.o.oooooo.oo.oooooooooooo.ooo.oo..oooo.o..ooo", "...ooooooo.o.o..oo.oooooo.ooooooo.oo.oooo.ooo.o.oo", "ooo.oooo.ooo.oo.o.oooooo.oooooooo.ooooo.oooooo.ooo", "ooooooooooooooo..oo...oo...ooo.ooooooo.o.o.oooo.oo", "ooo.o..oo..ooooooooo..oooo..oo.o..o..ooooooo..oo.o", "oooooooooooo.o.ooooo.o.o...ooo.oo.ooo..o.ooooooo..", "ooooooo.ooooooooo..o.ooo.ooooooooooooo.oooo.ooo..o"};
    int K = 428;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 453577;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> field = {"oo.ooo.o.oooooooooo..oo.oo.ooooooooooooooooooooo.o", "ooooo.oooo.o.oo..oooooooooo..ooo.o.oooo.ooooooo.oo", "oo.oooo.o..ooo.ooooo.oooooo.oooooo..oooooo.ooooooo", "o.o.oooooooooooo.ooooo.oooooooo.o.oo.oooo.o.oo..o.", "o....o.oooooooooo.o..oooo.ooooooooooooooooo...oooo", "o.o.oooooooooooo.oo.o.oo.oo..oo.o.ooo.oooooooooo..", "oooo.ooooooo.oooooo.ooo.ooo.oooooooooo.oo.ooooo.oo", ".ooooooooo.ooo.o..o.ooooo.ooo.oo..o..ooooo.ooo.o..", "oo.oooooo..o..ooo.ooooooooooooooooooooooo.ooooooo.", "ooo..ooo.oooooooooooo.ooo.oooooooo.o.ooooooooooo.o", ".oo.ooo.ooo.ooooo.ooooooo.oooooooo.o..ooooo.oo.oo.", "ooooo.oo.o.o.o.o.oo.ooo.oo.ooooo.ooooooo.oo.o.oooo", "ooo.oooooooooooooooo...ooo...o.ooooooooooo.o.ooooo", "oooooooo.ooo..oo.ooooooo.ooooooo.oooooooooooo.ooo.", "ooooooooooo.oooooooooooooo.ooooo.ooo..ooo.ooo..ooo", "oooo.oooooooo...ooooooooooooooooooooo.ooooo.oooooo", "o.oooooo.oooo.oooo.ooo.ooooooooooooooooo..o.oooooo", ".oooo.ooooooooooooooooooooooooooo.ooooooo.oo.ooo.o", "oo.ooo.oooooo.ooooooooooooooooooo...ooooooooooo.oo", "oooooo.ooooooo..ooooooooooooo.oo.ooo.oooooo.o.oo.o", "o.ooooo.oooo..oo.oooooooooo.ooooooo.oooo..o.ooo.oo", "oooooooo.oooooooooo.oooo.oooo.oooooooo.oo.ooooo.oo", ".ooooooooo..ooooooooooooooooooooo.oooooooooooooooo", "ooooooooooo.oo.oooo..oooooooooooo.o...oooo.o.o.ooo", "ooooooooooooo...oo.oo..ooooooooooo.ooo...ooooooooo", "oooooo.oooooo..ooooooooooo.oo.o.oo.oooooo.ooo.o.oo", "ooo.o.ooooo.oooooooooooooo...oo.ooo.oooo.oooooooo.", "o....oo.ooooo.ooo.ooooooo..ooo.ooo.ooooooooooooo..", "ooooooooooooooooooooooo.o.o.o.oo.ooo.oooooooooo.oo", "ooooo.ooo.ooooooooooooooo.ooo.ooooooooo.oo.oo.oooo", "oo.oooooooooo..ooooooooooo.oo..ooooooooooooooooooo", "oooooooooo.oooo.ooooo..oooooooo...oo.oooooooooo.oo", "ooooooooooo.oooooooooo..oooooooo.oo.ooooooo.o.o.o.", ".oooooooo.ooooooo..oooo..o.oooo.ooooo..ooooo.ooooo", "ooooo.oooo.oooooooo.ooo.oooo.ooooo.ooooooooooooo.o", ".ooo.ooooooooooooo.ooooooo.ooooooooooooooooooooooo", "ooo.oooooooo.oo.o.oooooooooo..ooooooooooo.oooooooo", "oooo.o.oo.o.ooooo.ooooo..oooooo.oo.oooooo.oooooooo", "oooooooooo..oooooooo.ooooooo.ooooooooooooooooooooo", "oooo.oooooooo.oo..oooooooo.oooooo.oooooooooooooooo", "ooooooooooooo.ooooooooo.o..oooooooooo.oooooooooo.o", "o.ooo.o.oooo.ooo....oooooooo.o.ooooo.ooo.ooooo.ooo", "ooooooo..oo.oooooo.ooooooooooooooooooo.ooooo.oooo.", "ooooooooooooooooo.o.....ooo.ooooooooo.oooooooooooo", "..ooooo.oooooooooooo..oo...o.ooooooooo.oo..ooooooo", "ooooooo..ooooooooooooo.ooooooooooo.ooooo.o.ooo.o.o", ".o.oooooooooooooooooooo.ooo.ooooooo.ooo..ooo..oooo", "ooooooo.oo..ooo..oooo.oo..ooooooo.oo..o.oooooooooo", "oo.oo...ooooooooooooooo.o.oooo.o..o.o.oooo.ooooooo", "ooooooo.oooo.o.oooo.ooooooooo.oooo..oo.oo.o.oo...o"};
    int K = 995;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2179521;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> field = {"oooooo.ooooooooooo.o.o.o..oooooooooooooo.ooooooooo", "oooooooooooooooooooooooooo.ooo.oo.oooo.o.ooooooooo", "..ooo.o.o..oooooooooooo.o..oo.ooo.oo...oo..o.ooooo", "ooooooo.o..o.oooooooo..oooo..oooooooooo.oo.ooo.o.o", "oooooooooooooo.ooo.ooooooooooo.o.oooo.ooo.oooooooo", "oooo.oo.oooo.o..ooooooooooo.ooooooo.o.ooooooooo.o.", "oo.o.oo.ooo..oooooooo..ooooooo.ooooooooooooooo.ooo", "oo.oooooooooooooooooooo.oooo..oo.oooo.ooo.oooooooo", ".oooo....ooo.oo.ooooooooooooooo.oooo..oo.ooooo.o.o", "ooooo...oooooooooooooo.ooooooooooo.oooo.ooo.oooo.o", "ooooooooo.oooooo.ooooooooooooooo...oooooooo.ooooo.", "oooo.ooooo.o.ooo.ooooooooooooo.oooo.oooooooooooooo", ".ooo..ooooooooo.oooo.ooooooooooooooo.oooooo..oooo.", "ooooo.ooooooooo.ooo..o.oo.ooooooo.oooooooooooooooo", "ooooooooo..o.ooooooo.oo..o.o.ooooooooooooooooooooo", "oooo.ooo.oo.ooooooooooooooooooooooooooo.oooooooooo", "ooo.o.oooooooooooooooooooooooooooooooooooo.oooooo.", "oooooo.ooooooooo..oo.o.oo..ooooooooooooooo.o.ooooo", "ooooo....oo.oooooooo.oooo.o..oo.ooooooo.o.oooooooo", "ooooooo.oooo.oo..ooooo.oooo.ooooooooooooo..oooo..o", "ooo.oooooooo.ooooooooo.ooooooo.oooooooo.o.ooooooo.", "ooooooooooooooooo.oooooo.oo..o..oooo.oo.ooo.oo.ooo", "ooo.oo..oo.ooooooo.oooooo.oooooooooooooooo.ooo.ooo", ".oooooo.ooooooooo.ooooooooo.ooo.oooo.oooooo.o.oooo", "oooooooooooo.ooooooooo.oooo.ooooooo.oo..ooooooo.oo", "..oooo.oo.oooooo..ooooo.ooo..ooooooo.oooo.oooooooo", "oooooooooooooooooooooooooooooooooooooo.oooooo...oo", "oooooo.oooooooo.ooooooooooo.oo.ooooooooooooooooooo", "ooooooooo..ooooooo..oooooooooooooooo.ooooooooooo.o", "oo.o.oooooo..oo.oo..o..o.oooooooooooo..oooooo.oooo", "oooo.oooooooo.oooooo.ooooooooooooooo.oo..oo.oooooo", "oooo.oooooooooo...oooooooo.oooooooo.oo.oooooo.oooo", "oo.ooo.oooooo.oooooo.ooooooooooooooooooooooooo.ooo", "o.oooooooooo.oo.ooooooooooo.o..oo..oo.ooooooooo.oo", "ooo.o.ooo.ooooo..oo.o.o.o.oooo.ooooooooooooooooooo", "ooo..ooo..oooooooooooooo.ooooo..oooo.ooooooooooooo", ".oooooo....oo.oo.ooooo.oooooooooooo.oooooooooooooo", "ooooo.oooooooo.oooooooooooooooo..ooooooo.oo.oooooo", ".oooooooooooooo.ooooooooo.ooooooooooo.oooooooooooo", "ooooooooooooooo.oooo.oooooo.oooooooooooooo.oo.oooo", "ooo.oo.ooooooo...ooooooooooo.ooo..oooooo.ooooooo.o", "oooooooooooooooooo.oo.ooo..oo.ooooooooo.oooooooooo", "oooo.ooo.oooooooooooooo.ooooooooooo.oo.ooooooooooo", "oooooooo.ooooooooooooooooo.ooooooooooo.ooooooo.ooo", "o.ooooooo.ooooooo.ooooo.oo...ooo.ooo..ooooooooo.oo", "o.oo.oooooooo.oooooooooooo.ooo.ooooooo.o.ooo.ooo.o", "oooooooooooooooo.oooooo..ooooo..ooo.oooooo.oooo.oo", "o.ooooooooooooooooooo.oooooooooo.ooooo...oooooo.oo", "ooooooooo...oooooooooo.ooooooooooooooo.oooooooo..o", "ooooooooooooo.ooo.oo.ooo.oo.oooooooooo..o.ooo..ooo"};
    int K = 320;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 270631;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> field = {"oooooo.o.o.o.ooooo.ooooooooooooooooooooooo.o.ooooo", "ooo.ooooooooooooooooooooooo.o.oooo.o.ooooooo..oo.o", "oooo.oooooooooooooo.oooooooooooooooooooooooooooooo", "ooooooooooooooo.oooooo.o.oooooooooooooooo.oooooooo", "oooooooooooooooo.ooooooooooooooooo.ooooooooooooooo", "oooooooooooooooooooo.oooooooooooooooooooooooooooo.", "ooooooooooooooooo.oo.oooooooo.oo.ooooooooooooo..o.", ".oooooooo.ooooooooooooooooooooooooooooo.oooo.ooooo", "oo..oooooooooooooo.ooooooooooooooooooooooo.oo.oooo", "oooooo.o.ooooooooooooooooooooooooo.ooooooooo.ooooo", "ooooooooooooooooooooooooo.ooooo..ooo.ooo.ooo.ooooo", "o..ooooo.o..oooooooo.ooooooooooooooooooo.ooo.oooo.", "o.ooooooooooooooooooo.ooooooooooo.ooooooooooooo.oo", "oo.oooooooooo.oooo.ooooooo.ooooooooo.oooooooooo.oo", "oooo.o.ooooooooo.ooo.oooooooooooooo..ooooooooooooo", "oooo.o.ooooooooooooooooooooooooooo.ooooooooooooooo", "ooooo.oooooooo.ooooooooo.oooooo.oo.oooo.o.o.oooo.o", "oooooooooo.oo..o.oooooo.oooo.oooo.oooo.o.ooooooooo", "oooooooooooooooooo.ooooooooooooooooooooooooooooo.o", "ooooooo.ooooooooooooo.oo.ooooooooooo.ooooooooooo.o", "ooooooooooooooooo.oooooo.oooooooooooooooo.oooooooo", "ooooooooooo.oooooooooooooooooo.oooooooooo.oooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooo.ooooooooo.oooooooooooo.ooooooo..o", "oo.oooooooooooooo.ooooooooooooooooooooooooooooooo.", "ooooooooooooooo.ooo.ooooo.oooooooooooooooooo.ooooo", "oo.ooooo.oooooo.ooooooooooo.oo.o.ooo.ooooooooooooo", ".ooooooooooo.oooooo.ooooooooooooooooo..ooo.ooooooo", ".ooooooo.oooooo.oo.ooooooooooooooooooooooooooooooo", "ooooo.oo.oooooo.ooooooooooooooooooooooooooo.oooooo", "ooooooooo.ooooo.oooooooooo.oooooooooo.oooo..oo.ooo", "o..oooooooo.oooooooooooooo.ooooooooooooooooooooooo", "oooooooooooo.oooooooooooooooooo.oooooooooo.ooo.oo.", "ooooo..oooooooooooooooooo.ooooooooooooooooo...oo.o", "oooo.o.ooooooooooooooooooo.ooooo.o.ooooooooooooooo", "o.ooooo.oooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooo.ooooo", "oooo.ooooooooo.oooooooooo.ooooooooo.oooooooooooooo", "o..ooooooooooo.ooooooooooooooo.oooooooooooo.oooooo", "oooooo.oo.oo.ooooooooooo.oooooooooooo.o.ooooooo..o", "ooooooo.oooooo.ooooooo.ooooooooooooooooooooooo.ooo", "ooooooooooooooooooooooooooooooooooooooooooooooooo.", "ooooooooooooo.oooooo.ooooooooooooooooo.oooooooooo.", "oooooo.ooooooooooooo.oooooo.ooooo..ooooooooooo.ooo", "ooo.ooooooo.oooooooooo.ooo.oo.oo.oo.oooooo.ooooooo", ".oooooooooo.oo.oo.oooooo.ooooo.o.ooooo.o.ooooooooo", "ooooooooooooooooooo.oooo.oooo.oooo.oooo.oooo.ooooo", "ooooo.o.oooooooo.oooooooooooooooo.ooo.ooooo.oo.ooo", ".oooooooooooooooooooooo.ooooooooooo.o..ooooooooooo", "oooo.ooooooooooooooo.ooooooo.o.oooooooooooo.oooooo"};
    int K = 507;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 616960;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> field = {"ooooooooooooooooooooooooooo.ooooooo.ooooooo.oooooo", "ooooooooooooo.oooooooooo.oooooooo.ooooo.oooo.ooooo", "oooooooooooooooooooo.ooo.ooooooooooooooooo.ooooooo", "oooooooooooo..ooooooooooo.oooooooooooooooooooooooo", "ooooooooo.ooooooo.ooooooo.oooooooooooooooooooooooo", ".oooooooooooooooo..o.ooooooooooooooooooooooooooooo", "oooooooo..oooooooooooooo.oooooooooo.oooooooooooooo", "ooooooooooooooooooooooooo.ooooooooo.oooooooooooooo", "o.ooo.oooooooooooo.oooooo.o.oooooooooooooooooo..oo", "oooooo.o.oooooooooooooooooo.ooooooooooooooooo.oooo", "ooooooooooooooooo.oooooooooooooo.ooooooooooooooooo", "oooooooooooooooooooooo.ooo.oooooooooooooooooo.oooo", "oooooooooooooo.o.oooooooooooo..ooooo.ooooooooooooo", ".oooooooo..oo.ooooooooo.oooooooooo.ooooooooooooooo", "ooooo.oooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooo.oooooooooooo..oooo.ooo.oooooooooooo", "oooo.ooooooooo.oooo.ooooooooooooooooooooooo.oooooo", "ooooooooooooo.oo.oooooooooooooooo.oooooooooooooooo", "oooooooooooooo.o.oooooooooooooooooo.oo.ooooooooooo", "oooooooo.ooooooooooooooooooooo.ooooooooooooooooooo", "ooooooo..ooooooooooooooooo.ooooooooooooo.o..ooo.o.", "oooo.oo.oooooooo.ooooooooooooooooooooooooooooooooo", "ooo.oooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooo.oooooooooo.oo.ooo.ooo", "oooooooooooooooooo.oooooooooooooooo.ooo.oooooooo.o", "oooo.ooooooooooooooooooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooooooooooooooooo.oooooo", "oooooooooooooooooooooooo.ooooooo.ooooooooooooooooo", "oooooooooooo.ooooooooooo.ooooooooooooooooooooooooo", "oooooooooo.o.oo.ooooooooooooo.ooooooooooooooooo.oo", "oooooooooo.oooooooooooooooooooooo.oooooooooooooooo", "ooooooooooooooooooooooooooooooooooooooooooooo.o.o.", "o.ooooooooooooo.ooooooooooooooo.oo.o.oooooooooo.oo", "o.o.ooooooo..ooooooooooooooooooooooooooo.oooooooo.", "o.ooooooooo.ooooo.ooooooooooooo.oooooo.ooooooooooo", ".ooooooo.oooooo.oo.ooooooooooo.ooooo.ooo.oooooooo.", "oooooooooooooooooooooooooooooo.ooooo.o.oooooooo.oo", "oooooo.ooooo.oooooo.oooooooooo.ooooooooooooooooooo", "oooooooooooo.oooooooooooooooooooooooooooo.ooooooo.", ".oooo.ooooooooooooooooooooo.ooooo.o.o..ooooooooooo", "oo.ooooooo.oooooooooooooooooo.oo.ooooooooooooooooo", "oo.oooooooooooooo.oooooooooooooooooooooo.ooooooooo", "ooooo..ooooooo.o.ooooooooooooooooooooooooooooooooo", "ooooooooo.oooooooo.ooooooooooooooooooooo.oooooo.oo", ".ooooooooooooooooooooooooooooo.oooooooooooooooo.oo", "ooooooooo.ooooooo.ooooooo.ooo.oooooooo.ooo.ooooooo", "ooooo.ooooooooooooooooooooooo.ooooooooo.ooooo.oooo", "oooooooooooooooo.ooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooo.ooooooo", "oooooooooooooooooooooooo.oooo.oooooooooooooooooooo"};
    int K = 1337;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3842349;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> field = {"ooooooooooooooooooooooooooooooooooo.oooooooooooooo", "oooooooooooooooooooo.ooooooooooooooooooooooooooooo", "ooooo.oooooooooooooooooooooo.ooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooooooo.oooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooo.ooooooooooooooooooo.ooooooo", "ooooooooooooooooooooo.oooooooooooooooooooooooooooo", ".ooooooooooooooooooooooooooooooooooooooo.ooooooooo", "ooooooooooo.oooooooooooooooooooooooooooooooooooo.o", "oooooooooo.oooooo.oooooooooooooooooooooooooooooooo", "ooooooooooooo.ooooo..ooooooo.ooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooo.ooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooo.oooooooooooooooooooooo.oooooooooooooo", "ooooooo.oooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "ooooooooooooooooooo.oooooooooooooooooooooooooooooo", "oooooo.oooooooooooooooooooooooooooooooo..oooo.o.oo", "ooooooooooooooooooooo.oooooooooooooooooooooooooooo", "oooooooo.ooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooo.oooooooooooooooooooo.oooooooooooo.ooooooooo", "oooo.ooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooo.ooooooooooooooooooooooooooooooooooooo.ooooooo", "oooooooooooooo.oooooooooooooooooooooo.oooooooooooo", "ooo.oooooooooooooo.ooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "ooooooooooooooooooooooooooooooo.oooooooooooooooooo", "oo.ooooooooooo.ooooooooooooooooooooooooooooooooooo", "oooooooooooooooooo.ooooooooooooooooooooooooooooooo", "ooooooooo.oooooooooooooooo.ooooooooooooooooooooooo", "oooooooooooooooooooooooooooooo.ooooooooooooooooooo", "oooooooooooooooo.oooooooooooooooooooo.oo.ooooo.ooo", "ooooooooooooooooooo.oooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooo.ooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooo.ooooooooooooooooooooooooooooooo", "ooooo.oooooooooooooooooooooo.oooooooooooooo.oooooo", ".oooooooooooooo.oooooooooooooooooooooo.ooooooooo.o", "ooooooooooooooooooooooooooooooooo.ooooooo.oooooooo"};
    int K = 1455;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4524635;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> field = {"oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo"};
    int K = 821;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1513140;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> field = {"....oo...............o.o...oo.o..o..o.ooo.oo..o...", "oo...o..............o......oo...o.o..o..o.o.o.o...", "o.....o......o.....oo.........o...o......o..oooo..", "o.oo.o...o..o...o.o.o..o.o..oo..ooo............o..", "oo...o.oo.o..oo.o..oooo.....o.o..o..oo.oo.oooooo..", "oo...o..o.oo...........o.oo............o...o..o...", ".o...ooo.o..o..o..ooooo.....o....o.o.....o...ooooo", ".......o..o.oo.oo..oo.o.........oo..o.o..o....o..o", "..oo.o.....oo..o.o...........o.o....o.oo.....o....", "o.oooo..o..oo......oo..o..oo..o..o..oo..o..oooo...", "o..oo.o...o...............o......o.....o.o.o.o....", ".oo.o...o....o........oo...o...oo.o..o......o..o.o", "...o.o.o.o..o.ooo.o.o.o.oooo.....oo........o....o.", "o.ooo..oooo.oo......o..........o.....o...o..oo....", "..oo..oooo...o...o.o..o............oo..oo....o...o", "o.o.o..o.o.....o..o.o...ooo.ooo......o.o.....oo...", "....o....ooo......o..o..oo........o..o..o...o.oo.o", "......o....o......o.o.....o....o..o...........oo..", ".o..oooo.ooo..........oo..o...o.oo.o.....oo..o.oo.", "oo..o......o..o....ooo.oo.....o.o.....o....oo.ooo.", "o...o.oo...oo....o....o.....ooo.o..o..o.o.o......o", "o.........o....ooo.o.ooo.o..o..o.oo..o..o...oo..o.", "o........oo.....ooo...oo.....o...ooo..o..oo..ooo.o", ".o.......o..oo....o............o.o...o..o....o...o", ".oooo.o.....o..............o....o...o.o.....o.....", "..oo..o.....o.o.....o.o...o.o..o..o...o..oo.o.o...", ".o.....o....o....o....ooo.o..oo.oo..ooo.ooo.o....o", "......o.........o..o.o.o.ooo.........o.oo..o....o.", "...oo......ooo.o...o..oo.ooo.o....oo...ooo.o.o....", "oooo....o..o......o.o......oooo...o..o.....o..o...", ".........oooooo......o...o...o.o.o..ooo..o......o.", "...o.o...o.o.oo.o.o..o.o....o......o...o.........o", "......o..oo..o.o........o.........oo..o.oo...o.o..", "o......oo......o............oo.oo......o........o.", "....o....ooo.o..o.o....o.o...o...o..o.........o...", ".oo........o..o..ooo.o...o..oo.o......oo..o.ooo...", "o.o...o.............ooo.........oo....oo..o.....oo", ".......o.....o.....o.o.oo.......o..oo..oo.oo.o...o", "oo...o...o......oo....o.......o.oo...o.o....o.....", "....o...o.o.oo.o.oo.oo.oo..oo.oo.....o.o.o.o......", ".....o.ooo.oooo......o...oo....oo.....ooo.oo..o...", "...........o.........o......o...o.o....o..o..o..o.", "o..ooo.....o.o..o.o.o...o......o.....o.o.o.o......", "..oo.oo.o.o.ooo...o..oo.o..ooo......o..oo......o..", "..o.......o....o.......o..o.......o.......ooooo...", ".......o..o...o..o....o....o...o..ooo...o.........", ".o.........o.ooo....o.o....o......ooo....o.o.o..o.", ".o................o....oo..o.oo...o...ooo..oo...oo", "..o..o.o.o..o........oo...o..oo......ooo......oo.o", ".....o..o....oo.ooo............o..o.oo...o.......o"};
    int K = 1500;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4788798;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> field = {"o............oo...o.oo...o....oo..o.o.........oo..", "..oo..o.ooo........oo...........o.ooo...ooo.o.....", "..o............oo...o.o..o...o.o..o.o.....o..o.o.o", ".o..o.......o......o.....oo...oooo..oo.oo..ooooo..", ".oo.....o.......o..o..o.o...o.o.........o.ooo....o", "....o.........o...oo..o...o.oo....o...oo.....oo.o.", "..oo...o.oo......o.oo..oo....oo....o........o.oooo", "..o.o.......o.o.o..o.o......o......o...o....o..ooo", "o....o..o...oo...o..o....o.............o....oo...o", "...o..o.....o......ooo...oooooo.ooo.....o....o....", "....o.o....o....o.o...o..o.o..o.....o.o.ooo.o....o", "oo.o.....o.o....o..o..........oo......o...o..o....", "..oo....ooo.oo..o...o.o...o.o.oo..o.o.o....ooo....", ".....o.oo....o.o..o......oo....o.........o........", "......o.o.oooo.oo.o...o.o..o...o.oo...oo..........", ".o..o....oo...oooo..o.......o..oo.....oo.o......o.", "..oo..ooooo..o.o..o........o.oo...o......o...o....", "....oo...oooo.......ooo...o.oo.......oo.....o..o..", "o..oo....ooo.o..o..ooo........oo..o.o...o.oo.....o", "o....o.o..o..o.o..oo...............ooo.....o.oo.oo", "....o.o........o..o.oo......o.o...ooo......ooooo..", "............oo.oo.......o..o..o....oo.oo......o..o", "..o....o....o.......o.o..oo.....o...oo..o......o..", ".o.o.o..o.o......o......oo....o....ooo......o.o.o.", "..o..o....o..oo.o.ooo...o...o........oo.......o.o.", ".o....o.o......o.o..o..o..o.o..o......o..oooo.o...", "..ooo.o.o.oo..............o.o...o.......o.oo......", "o..........o.oo.o.oooo..o......o..o....oo.ooo.o...", ".o.....o..oo...oooo..o..o.o.....o....o.o........o.", "o....o..ooo.o...o.oo.o.....o.o.o..o..o.....o......", "oo.....o..........o...ooo.o...o.....o.......oo....", "o.....o...oo...o..o.o.....oo...o......o..o.o..o.oo", "....o...o.....oo...oo....ooo.............oo...o.o.", ".......o.........o....o.......oo.o..o.oo..o.o.....", "....o.oo..o.oooo..ooo........o.oooo.............o.", "oo...o..o....o.o.o...o.o....o..o.oo..oo...........", "...o.o.ooo.......o.....o............o.....o.o....o", ".o.o...o...o.o.........o...o......o.o..oo...oo.o..", ".o..o..oo...oo..o.....oo.o............o..oo..o.o..", "..ooo....o..o.....o....................o.oo.o.oo.o", "............o........o...o......o.o....o.o...o...o", "o.ooo.o....o..ooo..o...o.o.....oo.o......o..o....o", "........o....oo....o.oo...o..oo........o...oo.....", ".....o.oo..............o.....oo..o.ooo...o.oo.....", "....o...o...oo.oo.....o..o.oo..........o..o.......", "o.ooo.o..o..o....o....ooo.....oo.......o.....ooo..", ".o......o....o.oo.......o...oo..o.o....o..........", ".....oo....o.o...o.............o.......o.o.ooo..o.", "o.oo....o.o..o.o..o....o.o...o....oo...........o..", "oo......oo.o...o.o......o...oo..o...........o.o..."};
    int K = 1500;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4791796;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> field = {"..o...........o..o.oo.o.o.oo.o...o...o...o.....o..", "o......o..o...o..oo.......o..oo.oo.o........o.o...", "...o.o..oo.o....o...oo..o....o.ooo..o.............", ".o..o..o............o.o...oo............o..o..o.o.", "..o.o.o......o..ooo....oo.o.....o....o.ooo..o.o..o", ".......o.o....oo.......o..o.o..oo..o.o............", ".o........oo....oo..o..oo.......o......oo..oo..o..", ".o......ooooo.o...o..o..ooo.oo..o.o.o....o...ooooo", "o..........o.o...o.o.o.ooo..o...ooo...o....o....o.", "..o.oo..o..o.o...o.o.....o...o....................", "o..o...oo..o..ooo.ooo..o.o...o...ooooo.oo...o.o.o.", "..o.o..o..o..o..o.o..o..........oo..oo.......ooo..", ".......o...o...o..o.oo.....o..o.....oo...o..o.o...", "..o..oooo.o...o......o.......o....o...o.o.o....o..", "o.....o..o.oo.......o..oo..o.o..oo..oo............", "...o..oo......o.....o......o...o.ooo.o..o...oooo..", ".o......o..o..oo..o.o....ooo..........o..o........", ".o......o....oo..o...o...o....o..o.....oo.o.o...o.", "...o..ooooo.o.o.o...ooo...ooo..o...o.o....o.o.o...", ".o.oo..o.o.o.o..o..o.........o.ooo.oo...o.........", "oo.oo.ooo....oo...o.....oo..oo.o..o..oo..o.......o", ".o....ooo.o........o.oo...o...o.o.oo.o...o.....oo.", "..oo....ooo........o.o.o.o.oo..oo..oo.....o....o..", "oo..o.o....oo...ooo..o.oo.o..o......o..o..o.......", "..oo...........o.oo..........oo..o.....ooo..o.o...", "oo.o.oo..........oo.....ooo.o.oo.oo..o....o..oo..o", "..oo.oo................o.oo.oo.o...............o..", "o..o....o....oo....o....oo.o..o....o.o..o.....o...", "o.....o....o..o..o.o.ooo.o....oo...oo....o....o...", "o.o..o.....o...oo..o...o.o.o........o..oo.....oo.o", "o.o..o...o.o....oo.......oo.oo.....o..oo.o....o...", "o....o..oo......o........o...oo.o....o.......o.o..", "...ooo.ooo......o..o..o.....ooo..o.o...o..o....o..", ".....o......o....o.o.o...o...........o...oo..o.o.o", "....oo.........o..oo..o......o...ooo.....o.......o", "oo....o........oooo....o..o.oo........ooo...o....o", "oo......o.....o....oo..oo....o.o...o.o.o.o.o....o.", ".......o..o.ooo..o.o....o.oo..oo......o.o..oo.....", "..o.ooo...o..o.o......o.....o.o..o...o.......oo...", "..o..o.oooo.o.......o......oo......o..o.......o..o", ".o....o.oo...oo.o....oo.oo...ooo..o........o.o.oo.", "..o.......o.oooo....o.....o...oo.oo........oo..o..", ".o......o.....o.o.......o............o.o.o....o...", "......o.o.oooo...ooo.o......oo.oo.....oo..o...ooo.", "o.oo...o......ooo..o.....ooo..o.....oo..o.o....o..", "o......o..o..o..o....o..o.o.o......o..ooo..oo....o", "oo.o.o.......o.....o...o...o........o.o.....oooo.o", "o.o.o....o.o....oo....o.ooo.o..oo.....o...o..o....", "o.o..o.o...oo.o.o..o....o....oo....o....oo....o..o", "....o.o..o.oo...o...o..ooo..oo..oo.........o...o.."};
    int K = 1500;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4791818;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> field = {".oo..o.....o..........o..oo.....ooo...o..o..o...o.", "oooo.......o......o.......o...o...o.o.....o.....o.", "o...o..o.o.o.....o.o......o..oo.oo.o.........oo...", "o..o....oo.o....o.o.o..o....o..o...oo.........o...", ".o.......oo.o.....o...o..o...o.....o.....oo..ooo..", ".o..o..o....o.o...o.o.o......oo..o..o.o....oo....o", ".....o.....o.....ooo.o...............oo..o........", "..ooo..oo..o.oo...o...............ooo.oo....oooo..", "o...o..o...o......oo...o.......o...o..o.....o.oo..", "o.oooo..............o......oo............oo..o....", "oo..o..oo....o..o...o..........oo..o.o........oo.o", "...............o.o..o.oo.o......o.o..oo....oo.o..o", "o.oo.ooo...o.oo...oo............o.........ooo..ooo", ".oo...o.oo..o..o..o......oo.........ooo.oooooo...o", "...o......oo....o..ooo..ooo...ooo....o.oo.oo..oo.o", ".o.o...ooo....o...oo..o.o..o.......o...oo.........", "oo...oo....o.oo....o...oo..o.o.....o.o.ooo........", "o............oo.....ooo..oooo...o..oo......o...o.o", "....o.o..o...o.o...o..ooooo..o.oo......o.....oo..o", ".o....o.....o.oo........o.o......oo.o...oo.o...o.o", "o.ooo.oo.ooo..o...o..ooooo.o..o.......o.o.o......o", "......o.o.o..o...ooo..ooo.oo.ooo.......o.o.....o..", "....oo...o......oo....oo..o....o.o.o...o..o..o..o.", "...o.............ooo......o.oo.o.ooo.oo..o.oo..o.o", "..o..o....o.o....o.oo.o....o...o.o.o..o.o.....o..o", "..ooo.ooo......oo....oo...ooo..oooo.ooo....ooo..o.", ".oooooo...o.oo...o.....o.....o.....oo..oo......o..", "oo......o......o.o...ooo.....o..o....o.o.o..o.oooo", ".oo..oo...oo..oo...oo..........oo..o......oo..o...", "..o..ooo..oo.....o..o...o....o......oo...o..o.....", "..o..o..oo..oo.o.o.....o.....oo.o..........o.o...o", "..o.o.oo..oo.o.......o..ooooo..oo.o.oo...ooo...ooo", ".o...o...o....o.o.o....o.oo..oooo.o.....oo..o..oo.", "....oo......oo.o...o.o..o..........o..o.oo......o.", "..o..o.oo...o....o...o.........o..o.o...o.oo.oo.o.", "o.o......o.oo.....o....ooooo...oo.....o.oo..ooo...", "oo.....oo..o...ooo...o....oo....oo....o.o....oo..o", "....o.o...oo.......ooo............o....o........o.", "...o.o....o.oo.........o..oo.o.oo.o...o.....o.o...", "......o.....o.o.o...oooo.....o...o....o.o.........", "oo...o.oo............oo....o..oo...o...o..o.o....o", "o.....o..o...ooo..o.o..o...o....o..o.oooo...ooo...", "..o..o........o....oo.o.o...o.oo.......ooo.o......", "o..oo....oo..o......o.o.....o.o..ooo.o..oo.o..ooo.", ".ooo.o....o..o.o.o.o...oo..ooo..o..o.o.oo..oo..o..", "....o.o.o.o...........o.....o.o.oo.o....o.oo....o.", "...o..o.o.o...o..oo..........o.......o..o..oo.....", ".oo......o.........oo.....o...o..ooo.o.ooo...o.o.o", "oo......o...o....o...o.o..ooo..oo.oo...o..oo.o.o..", ".o.o...oo..........o.o.o.......o..o.oo.o.o.o....o."};
    int K = 1500;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4793317;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> field = {".o.o.o.o..o.o......o..oo.oooo.o....oo..o.oo.oo..oo", "....oo..o.....o...oo....o.o..........o.oo...o.o.o.", "o...o..o.....oo.oo..o.o.oo...o.....o...oo....ooo..", "..o.........o..o.....o....o.ooo...oo.o..o......o..", ".o.........o..o.oo.o......oooooo.o...oo.......ooo.", ".o.o.ooo..oo..o....o.o.......o.........o..oo....o.", "o......o...oo..o.oo.o...o.o....o....o..oo..o.o.o..", "..o.o......o...oo...o..............o..o......o.o..", "....o...o.o.oo.oo..........oo....oo........o..oo..", ".o.........ooo..ooo.oo.oo...oo.o..oo....o..o..o...", ".........o.o.....o..oo.....o.oooo..oooo..o.oo.oo..", ".o..oo.o...o...o.....o...oooo....ooo.....o.oo...o.", "ooo.o....o...ooo......o..o..o.o.o...o...oo....o...", "..o....oo..o..oo...oo.ooo.o.....oo.o..o..oo.......", "...o.o.o...o..ooooo...o.o.o..o.o....o..o....oo.o.o", ".....o....oo...o...o.....o.......o...oo.oo....o.o.", "o.o..oo.........o.o......ooo.oo.oo....o.....ooo..o", "o..oo.........ooo.o.o...o.ooo......o...o.o.o......", ".o.o...o.o.o...oooo....o...o.o.ooo....oo..o..o....", "....o..o...o.o.oo...o...oo.o..o.oo..o.......o.....", "o..oo..oo.........o.........ooo..o..oo.oo.o.o.o...", "..o.....oo.o....ooo..ooo...o..oo..o.o..o..oo.o....", ".o.o..oo......o.........o.....o..oo.......o..o.o.o", ".o........o.o..ooo...o..o.........ooo...o...o.o..o", ".o..ooo...oo..ooo.o.o....o..o.....o..o.........oo.", "o.....oo........ooo....o....o....o............o.o.", "....o.o...o.o.o......oo...........oo..oo.o..o.oo..", "..o....o..o.........o........o..oo.......o.o..o.o.", "o...o.oo.....oo....o.o.o...o..o.o...oo........o..o", "...o.oo..o.ooo.o....o.....oo.oo.o..o...o.oo..o...o", "o.o.....oo.o.o.oo...oo......ooo.o...ooo..o..o...o.", "o.o........ooo..o..o.o.o..o.o.oo.o.oo.o....ooo.o..", "...o.....oo...o.o....o..o.o.oo...o.o..oo.o........", "o.o..o.o....oo..ooo......o...oo..o...o.o.oo..o..o.", ".o....o..o......ooo..oo...o..o.o..oo.......o.oooo.", "...o...oo..oo.o..o.........o..........o...o...o...", "oo...o....oo.o..o.o.....o...o.oo..oo.......o......", ".o.oo.o.........oo...o...ooo......o..oo.ooo....o..", ".o..o..oo....o..ooo.......ooo............o..o..o..", "o..o..o......o...o..oo........ooo..o.o.....oo.....", "......o..o....o..o..ooo....oo....ooo..o.......oooo", ".o.....o.....o...oo....o.......o...o.oo..o...oo...", ".o.........o........o..o.o..o.ooo.......o.o...oo..", "..o.........o..oo..oo...o.....oo.o....o........o..", ".oo..o..oo.....o...o...oo..o.oo.....oooo..ooo....o", ".o.........oo..ooooo..o.oo.oo.oo.....o.o...o..oo.o", "....o.o.....o...oo......o..oo..o..o.......oo...o.o", "oo.....oo......o.......o.ooo........o...oo...o.o..", ".o.oo..oo....oo..o....o..o........o..o..ooo.......", "....oo.....o.o.......ooo..ooo....o..o.o..o....o.o."};
    int K = 1500;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4793325;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> field = {"o"};
    int K = 1491;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4449145;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> field = {"o"};
    int K = 1075;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2313401;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> field = {"o"};
    int K = 1010;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2042221;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> field = {"o"};
    int K = 825;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1362901;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> field = {"o"};
    int K = 652;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 851513;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> field = {"..", ".."};
    int K = 23;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> field = {"o.oo.ooo", "o.o.o.oo", "ooo.oooo", "o.o..o.o", "o.o..o.o", "o..oooo.", "..o.o.oo", "oo.ooo.o"};
    int K = 1500;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4545058;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> field = {"ooooooooooo.oooooooooooooooooooooooooooooooooooooo", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o.....................o..........................o", "o....................o.o.........................o", "o.....................o..........................o", "o................................................o", "o...........................ooo..................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o.................o..............................o", "o.................................................", "o.....................o..........................o", "o.......................o........................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", "o................................................o", ".................................................o", ".............................o...................o", "..............................o..................o", "o............................o...................o", "o................................................o", "o................................................o", "o................................................o", "o.........................o......................o", "oooooooooooooooooooooooooooooooooooooooooooooooooo"};
    int K = 1498;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4787106;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> field = {"oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo"};
    int K = 1500;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4799500;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> field = {"o.oo.ooo", "o.o.o.oo", "ooo.oooo", "o.o..o.o", "o.o..o.o", "o..oooo.", "..o.o.oo", "oo.ooo.o"};
    int K = 1234;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3082590;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> field = {".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo", ".........ooooooooooooo...........ooooooooooooooooo"};
    int K = 1500;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4771978;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> field = {"o.o.o.o...o..o.....o...o...o...o.o...o....o..o", "o.o.o.o...o..o.....o...o...o...o.o...o....o..o", "o.o.o.o...o..o.....o...o...o...o.o...o....o..o", "o.o.o.o...o..o.....o...o...o...o.o...o....o..o", "o.o.o.o...o..o.....o.......o...o.o...o....o..o"};
    int K = 1337;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3708979;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> field = {"oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo"};
    int K = 1499;
    NonXorLife* pObj = new NonXorLife();
    clock_t start = clock();
    int result = pObj->countAliveCells(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4793304;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23067462&rd=14733&pm=11890
********************************************************************************
#include <cstdio>
#include <iostream>
#include <sstream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>
#define MP make_pair
#define F first
#define S second
using namespace std ;
#define For(i , n) for(int i = 0 ; i < (n) ; ++i)
#define SZ(x)  (int)((x).size())
typedef long long LLI;
const int maxint = -1u>>2;
const double eps = 1e-7;
 
bool vis[3200][3200];
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
queue< pair<pair<int, int>, int> > q;
 
class NonXorLife
{
    public:
        int countAliveCells(vector <string> field, int K)
        {
            while(!q.empty())
                q.pop();
 
            int n = field.size();
            int m = field[0].size();
 
            int ans = 0;
            memset(vis, 0, sizeof(vis));
            for(int i=0;i<n;i++)
                for(int j=0;j<m;j++)
                    if(field[i][j] == 'o')
                        q.push( MP( MP(i+1550, j+1550), 0) ), vis[i+1550][j+1550] = 1, ans++;
 
            while(!q.empty())
            {
                pair<pair<int, int>, int> now = q.front();
                q.pop();
 
                for(int i=0;i<4;i++)
                {
                    int tx = now.F.F + dir[i][0];
                    int ty = now.F.S + dir[i][1];
 
                    int tz = now.S + 1;
 
 
                    if(tz <= K && !vis[tx][ty])
                    {
                        vis[tx][ty] = 1;
                        ans++;
 
                        q.push( MP(MP(tx, ty), tz) );
                    }
                }
            }
 
 
            return ans;
        }
 
        
 
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/