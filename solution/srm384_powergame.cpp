/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7756
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

class PowerGame {
public:
    string winner(int size0, int size1);
};

string PowerGame::winner(int size0, int size1) {
    string ret;
    return ret;
}


int test0() {
    int size0 = 10000;
    int size1 = 10000;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 1 moves";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int size0 = 4;
    int size1 = 9;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 1 moves";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int size0 = 4;
    int size1 = 3;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 1 moves";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int size0 = 2;
    int size1 = 3;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win after 2 moves";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int size0 = 7;
    int size1 = 13;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win after 4 moves";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int size0 = 2136;
    int size1 = 1244;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 7 moves";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int size0 = 3;
    int size1 = 5;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win after 2 moves";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int size0 = 1;
    int size1 = 1;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 1 moves";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int size0 = 1;
    int size1 = 10000;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 1 moves";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int size0 = 28;
    int size1 = 17;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 7 moves";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int size0 = 884;
    int size1 = 5521;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 15 moves";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int size0 = 9113;
    int size1 = 2842;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 23 moves";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int size0 = 6673;
    int size1 = 8111;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 25 moves";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int size0 = 24;
    int size1 = 9019;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 5 moves";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int size0 = 502;
    int size1 = 213;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 9 moves";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int size0 = 9999;
    int size1 = 9999;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 31 moves";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int size0 = 9112;
    int size1 = 9112;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 21 moves";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int size0 = 7172;
    int size1 = 42;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 9 moves";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int size0 = 8806;
    int size1 = 9753;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 31 moves";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int size0 = 2224;
    int size1 = 5813;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 5 moves";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int size0 = 8444;
    int size1 = 8444;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 35 moves";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int size0 = 9013;
    int size1 = 9017;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 15 moves";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int size0 = 46;
    int size1 = 47;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 5 moves";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int size0 = 883;
    int size1 = 7721;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 17 moves";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int size0 = 2;
    int size1 = 2;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win after 2 moves";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int size0 = 3;
    int size1 = 3;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 3 moves";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int size0 = 4;
    int size1 = 4;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 1 moves";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int size0 = 5;
    int size1 = 5;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win after 2 moves";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int size0 = 99;
    int size1 = 99;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 13 moves";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int size0 = 4234;
    int size1 = 3852;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 17 moves";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int size0 = 515;
    int size1 = 61;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 7 moves";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int size0 = 8;
    int size1 = 8887;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 5 moves";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int size0 = 6642;
    int size1 = 6642;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win after 40 moves";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int size0 = 4009;
    int size1 = 4009;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 29 moves";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int size0 = 4567;
    int size1 = 8671;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 9 moves";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int size0 = 8999;
    int size1 = 9999;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 19 moves";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int size0 = 4563;
    int size1 = 2314;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 5 moves";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int size0 = 3454;
    int size1 = 4456;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 31 moves";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int size0 = 9563;
    int size1 = 8914;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 25 moves";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int size0 = 9000;
    int size1 = 8999;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 19 moves";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int size0 = 9876;
    int size1 = 1234;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 15 moves";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int size0 = 9456;
    int size1 = 8754;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Alan will win after 21 moves";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int size0 = 10;
    int size1 = 10;
    PowerGame* pObj = new PowerGame();
    clock_t start = clock();
    string result = pObj->winner(size0, size1);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win after 4 moves";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22692050&rd=10808&pm=7756
********************************************************************************
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional> 
using namespace std;
 
class PowerGame { 
  public: string winner(int size0, int size1) { 
    int a[10001];
    bool b[10001];
 
    a[0] = 0;
    b[0] = false;
    for (int i=1;i<=10000;++i) {
      a[i] = 0;
      b[i] = false;
      for (int r=1;r<101;++r) {
        int p = i-r*r;
        if (p>=0) {
          if (b[p]!=false && b[i] == false) a[i] = max(a[p]+1,a[i]);
          else if (b[p]!=true && b[i] == true) a[i] = min(a[p]+1,a[i]);
          else if (b[p]!=true && b[i] == false) {
            b[i] = true;
            a[i] = a[p]+1;
          }
        }
      }
    }
 
    ostringstream sout;
    string w;
    int z;
    z = min(a[size0],a[size1]);
    if (z%2) w = "Alan";
    else w = "Bob";
    sout << z;
 
    return w + " will win after " + sout.str() + " moves";
  } 
  
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/