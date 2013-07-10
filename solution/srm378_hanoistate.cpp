/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8303
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

class HanoiState {
public:
    string partwayState(string target, int moves);
};

string HanoiState::partwayState(string target, int moves) {
    string ret;
    return ret;
}


int test0() {
    string target = "CCC";
    int moves = 4;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BBC";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string target = "AAC";
    int moves = 7;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "AAC";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string target = "AAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    int moves = 0;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string target = "ABCABCABCABCABCABCABCABCABCABC";
    int moves = 100000000;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCCCCCCBAAAABBBBACBAAAAACBAAA";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string target = "A";
    int moves = 0;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string target = "B";
    int moves = 0;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string target = "B";
    int moves = 1;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string target = "C";
    int moves = 0;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string target = "C";
    int moves = 1;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string target = "CCCC";
    int moves = 0;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAA";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string target = "CCCC";
    int moves = 1;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BAAA";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string target = "CCCC";
    int moves = 2;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BCAA";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string target = "CCCC";
    int moves = 3;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "CCAA";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string target = "CCCC";
    int moves = 4;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "CCBA";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string target = "CCCC";
    int moves = 5;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "ACBA";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string target = "CCCC";
    int moves = 6;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBA";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string target = "CCCC";
    int moves = 7;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBA";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string target = "CCCC";
    int moves = 8;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBC";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string target = "CCCC";
    int moves = 9;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "CBBC";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string target = "CCCC";
    int moves = 10;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "CABC";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string target = "CCCC";
    int moves = 11;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "AABC";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string target = "CCCC";
    int moves = 12;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "AACC";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string target = "CCCC";
    int moves = 13;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BACC";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string target = "CCCC";
    int moves = 14;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BCCC";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string target = "CCCC";
    int moves = 15;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCC";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string target = "CBAC";
    int moves = 0;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAA";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string target = "CBAC";
    int moves = 1;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BAAA";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string target = "CBAC";
    int moves = 2;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BCAA";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string target = "CBAC";
    int moves = 3;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "CCAA";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string target = "CBAC";
    int moves = 4;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "CCBA";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string target = "CBAC";
    int moves = 5;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "ACBA";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string target = "CBAC";
    int moves = 6;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBA";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string target = "CBAC";
    int moves = 7;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBA";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string target = "CBAC";
    int moves = 8;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBC";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string target = "CBAC";
    int moves = 9;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBC";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string target = "CBAC";
    int moves = 10;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "ACBC";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string target = "CBAC";
    int moves = 11;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "CCBC";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string target = "CBAC";
    int moves = 12;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "CCAC";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string target = "CBAC";
    int moves = 13;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "ACAC";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string target = "CBAC";
    int moves = 14;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "ABAC";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string target = "CBAC";
    int moves = 15;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "CBAC";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string target = "CABBCCBACCBACCABAACCCCACABABAB";
    int moves = 0;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string target = "BAACCBACBBBBACAACCAACCAABAACCA";
    int moves = 432853159;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BAACCBACBBBBACAACCAACCAABAACCA";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string target = "ABCCBCACCBCABABBAABCCBAABACBAC";
    int moves = 536870911;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBA";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string target = "ABCCBCACCBCABABBAABCCBAABACBAC";
    int moves = 536870912;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBC";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string target = "ABCCBCACCBCABABBAABCCBAABACBAC";
    int moves = 536870913;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBC";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string target = "ABCCBCACCBCABABBAABCCBAABACBAC";
    int moves = 268435456;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCBA";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string target = "ABCCBCACCBCABABBAABCCBAABACBAC";
    int moves = 268435455;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCAA";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string target = "CAAAABAACBCACCACCAACACCBABAAAB";
    int moves = 1000000000;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAABCABBAABCABBAABBBCAAB";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string target = "CAAAABAACBCACCACCAACACCBABAAAB";
    int moves = 100000000;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBBBCAAAACCCCABCAAAAABCAAA";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string target = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    int moves = 1073741823;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string target = "CCBAABBCBBABBCBBABABCBABAAABAB";
    int moves = 395488233;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BCCBACCCCCBACBACBACCABBAAAABCA";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string target = "ABCABCABCABCABCABCABCABCABCCAB";
    int moves = 900909000;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBACCAAAAABBBCCBACCAACBBCABAB";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string target = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    int moves = 1000000000;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCCCCCCCABCAACCABCAACCAAABCCC";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string target = "BCBC";
    int moves = 9;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBC";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string target = "BACBAACC";
    int moves = 201;
    HanoiState* pObj = new HanoiState();
    clock_t start = clock();
    string result = pObj->partwayState(target, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "BCCBAACC";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22654735&rd=10798&pm=8303
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <sstream> 
#include <math.h> 
 
using namespace std; 
 
typedef long long int64; 
typedef vector <int> VI; 
 
#define sqr(x) ((x)*(x)) 
#define abs(a) ((a)>0 ? (a) : (-(a))) 
#define min(a,b) ((a)<(b) ? (a) : (b)) 
#define max(a,b) ((a)>(b) ? (a) : (b)) 
 
struct HanoiState{ 
 public: 
  string partwayState(string target, int moves)  
  { 
    int n=target.size(); 
    int a[30]; 
    int b[30]; 
    for (int i=0;i<n;i++) 
      a[i]=1; 
    for (int i=0;i<n;i++) 
    { 
       if (target[i]=='A') b[i]=1; else if (target[i]=='B') b[i]=2; else b[i]=3;       
    } 
    for (int i=n-1;i>=0;i--) 
    { 
      if (a[i]==b[i]) continue; 
      int x=1; 
      for (int h=0;h<i;h++) 
      { 
        x*=2; 
      } 
      int t=1; 
      if ((t==a[i])||(t==b[i])) t++; 
      if ((t==a[i])||(t==b[i])) t++; 
      if (x<=moves) 
      { 
        for (int h=0;h<i;h++) 
          a[h]=t; 
        a[i]=b[i]; 
        moves=moves-x; 
      } else 
      { 
        for (int h=0;h<i;h++) 
          b[h]=t;  
      } 
    } 
    string res=""; 
    for (int i=0;i<n;i++) 
    { 
      if (a[i]==1) res+='A'; else if (a[i]==2) res+='B'; else res+='C'; 
    } 
    return res; 
  } 
};

********************************************************************************
*******************************************************************************/