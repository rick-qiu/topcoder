/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10759
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

class PotatoGame {
public:
    string theWinner(int n);
};

string PotatoGame::theWinner(int n) {
    string ret;
    return ret;
}


int test0() {
    int n = 1;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 2;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 3;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 4;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 5;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 6;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 7;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 8;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 9;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 1000000000;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 999999999;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 999999998;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 999999997;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 999999996;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 999999995;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 999999994;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 999999993;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 999999992;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 536870909;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 536870910;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 536870911;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 536870912;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 536870913;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 536870914;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 536870915;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 73;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 12;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 400;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 756;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 9119;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 6351;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 52843;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 18705;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 754108;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 846393;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 6118330;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 9932169;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 83226917;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 95669847;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 877206980;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 501950427;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 9999998;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 9999;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 13;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 22;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 102;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 19999999;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 535432525;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 15;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 991829257;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 100000000;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 41432437;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 30;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 999966512;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 987345765;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 7605203;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 444444444;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 173;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 10;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 987987987;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 974782859;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 19;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 998997992;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 67;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 34;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 1324322;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 192;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 256;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 500000000;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 7788;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 1000;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 99988789;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 388148910;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 200;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 35;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 17;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 10000009;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 10000000;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 80;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 11478;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 16;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 13214;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 334424233;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 265353484;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 100;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 999999;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 14;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 20;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 987998764;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 25;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 998799634;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 68;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 18;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 123456789;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 334424238;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 99;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 987345998;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 64;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 174576865;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 354339;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 949199136;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 28;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 32;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 18467;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 259;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 131074;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 989998898;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 19169;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 98742;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Hanako";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 999;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 76;
    PotatoGame* pObj = new PotatoGame();
    clock_t start = clock();
    string result = pObj->theWinner(n);
    clock_t end = clock();
    delete pObj;
    string expected = "Taro";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14154&pm=10759
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
 
class PotatoGame {
public:
  string theWinner(int);
};
 
string PotatoGame::theWinner(int n) {
  if (n % 5 == 1 || n % 5 == 3 || n % 5 == 4) return "Taro";
  else return "Hanako";
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/