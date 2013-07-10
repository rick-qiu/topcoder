/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11566
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

class RowAndCoins {
public:
    string getWinner(string cells);
};

string RowAndCoins::getWinner(string cells) {
    string ret;
    return ret;
}


int test0() {
    string cells = "ABBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string cells = "BBBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string cells = "BA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string cells = "BABBABBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string cells = "ABABBBABAABBAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string cells = "BBBAAABBAAABBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string cells = "AA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string cells = "BA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string cells = "AB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string cells = "BB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string cells = "AAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string cells = "BAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string cells = "ABA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string cells = "BBA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string cells = "AAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string cells = "BAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string cells = "ABB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string cells = "BBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string cells = "AAAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string cells = "BAAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string cells = "ABAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string cells = "BBAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string cells = "AABA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string cells = "BABA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string cells = "ABBA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string cells = "BBBA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string cells = "AAAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string cells = "BAAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string cells = "ABAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string cells = "BBAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string cells = "AABB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string cells = "BABB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string cells = "ABBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string cells = "BBBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string cells = "ABBBA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string cells = "ABBBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string cells = "BBBBA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string cells = "BBBBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string cells = "AAAABA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string cells = "AAAABB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string cells = "BAAABA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string cells = "BAAABB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string cells = "ABBBABA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string cells = "ABBBABB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string cells = "BBBBABA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string cells = "BBBBABB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string cells = "ABABAAAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string cells = "ABABAAAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string cells = "BBABAAAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string cells = "BBABAAAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string cells = "AAABBBBAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string cells = "AAABBBBAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string cells = "BAABBBBAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string cells = "BAABBBBAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string cells = "AABAAABABA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string cells = "AABAAABABB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string cells = "BABAAABABA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string cells = "BABAAABABB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string cells = "ABABBBBBAAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string cells = "ABABBBBBAAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string cells = "BBABBBBBAAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string cells = "BBABBBBBAAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string cells = "ABBABABAABAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string cells = "ABBABABAABAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string cells = "BBBABABAABAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string cells = "BBBABABAABAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string cells = "ABBBBAAAAAAAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string cells = "ABBBBAAAAAAAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string cells = "BBBBBAAAAAAAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string cells = "BBBBBAAAAAAAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string cells = "AABBBAAAAAABBA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string cells = "AABBBAAAAAABBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string cells = "BABBBAAAAAABBA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string cells = "BABBBAAAAAABBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string cells = "AAAAAAAAAAAAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string cells = "AAAAAAAAAAAAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string cells = "BAAAAAAAAAAAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string cells = "BAAAAAAAAAAAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string cells = "ABBBBBBBBBBBA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string cells = "ABBBBBBBBBBBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string cells = "BBBBBBBBBBBBA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string cells = "BBBBBBBBBBBBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string cells = "ABABABABABABA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string cells = "ABABABABABABB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string cells = "BBABABABABABA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string cells = "BBABABABABABB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string cells = "AABABABABABAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string cells = "AABABABABABAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string cells = "BABABABABABAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string cells = "BABABABABABAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string cells = "AAAAAAAAAAAAAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string cells = "AAAAAAAAAAAAAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string cells = "BAAAAAAAAAAAAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string cells = "BAAAAAAAAAAAAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string cells = "AAAAAAABAAAAAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string cells = "AAAAAAABAAAAAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string cells = "BAAAAAABAAAAAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string cells = "BAAAAAABAAAAAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string cells = "ABBBBBBBBBBBBA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string cells = "ABBBBBBBBBBBBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string cells = "BBBBBBBBBBBBBA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string cells = "BBBBBBBBBBBBBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string cells = "ABBBBBBBABBBBA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string cells = "ABBBBBBBABBBBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string cells = "BBBBBBBBABBBBA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string cells = "BBBBBBBBABBBBB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string cells = "ABABABABABABAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string cells = "ABABABABABABAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string cells = "BBABABABABABAA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string cells = "BBABABABABABAB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string cells = "AABABABABABABA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string cells = "AABABABABABABB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string cells = "BABABABABABABA";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string cells = "BABABABABABABB";
    RowAndCoins* pObj = new RowAndCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23017434&rd=14547&pm=11566
********************************************************************************
#include<iostream> 
#include<cstdio> 
#include<cstdlib> 
#include<string> 
#include<cstring> 
#include<cmath> 
#include<vector> 
#include<map> 
#include<queue> 
#include<stack> 
#include<sstream> 
#include<algorithm> 
#include<complex> 
using namespace std; 
#define MP make_pair 
#define F first 
#define S second 
#define PB push_back 
class RowAndCoins { 
  public: 
  string getWinner(string s) { 
    if (s[0] == 'A' || s[s.size() - 1] == 'A') return "Alice"; 
    else return "Bob"; 
  } 
};

********************************************************************************
*******************************************************************************/