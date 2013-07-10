/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11605
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

class RowAndManyCoins {
public:
    string getWinner(string cells);
};

string RowAndManyCoins::getWinner(string cells) {
    string ret;
    return ret;
}


int test0() {
    string cells = "ABBB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "ABBAAABBBBABBABAAAAABBBA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "ABBAAABBBBABBABAAAAABBBB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BBBAAABBBBABBABAAAAABBBA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BBBAAABBBBABBABAAAAABBBB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AAABAAABABBABBBBBAABBABABAABABBBBAAAAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AAABAAABABBABBBBBAABBABABAABABBBBAAAAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BAABAAABABBABBBBBAABBABABAABABBBBAAAAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BAABAAABABBABBBBBAABBABABAABABBBBAAAAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AAAABBBAAAAAABBBBBAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AAAABBBAAAAAABBBBBAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BAAABBBAAAAAABBBBBAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BAAABBBAAAAAABBBBBAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "ABAABABABABBBAABA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "ABAABABABABBBAABB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BBAABABABABBBAABA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BBAABABABABBBAABB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AABBBBBABBABBABABAABBAABBABAAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AABBBBBABBABBABABAABBAABBABAAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BABBBBBABBABBABABAABBAABBABAAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BABBBBBABBABBABABAABBAABBABAAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "ABABABABABABABABABABABABABABABABABABABABABABABABA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "ABABABABABABABABABABABABABABABABABABABABABABABABB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BBABABABABABABABABABABABABABABABABABABABABABABABA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BBABABABABABABABABABABABABABABABABABABABABABABABB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AABABABABABABABABABABABABABABABABABABABABABABABAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AABABABABABABABABABABABABABABABABABABABABABABABAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BABABABABABABABABABABABABABABABABABABABABABABABAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BABABABABABABABABABABABABABABABABABABABABABABABAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "ABABABABABABABABABABABABABABABABABABABABABABABABAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "ABABABABABABABABABABABABABABABABABABABABABABABABAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BBABABABABABABABABABABABABABABABABABABABABABABABAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BBABABABABABABABABABABABABABABABABABABABABABABABAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AABABABABABABABABABABABABABABABABABABABABABABABABA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "AABABABABABABABABABABABABABABABABABABABABABABABABB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BABABABABABABABABABABABABABABABABABABABABABABABABA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BABABABABABABABABABABABABABABABABABABABABABABABABB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BBBABABBBBBBBA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BABAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string cells = "BBBBBABA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BABABABA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string cells = "ABBBBA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BAAAAAAAAAAAAAAAAAAAAAAAAA";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
    string cells = "BABABAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
    clock_t start = clock();
    string result = pObj->getWinner(cells);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string cells = "BAABAAB";
    RowAndManyCoins* pObj = new RowAndManyCoins();
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22889236&rd=14547&pm=11605
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
 
class RowAndManyCoins { 
public: 
  string getWinner(string); 
}; 
 
string RowAndManyCoins::getWinner(string cells) { 
  int i,a,b; 
  string s; 
  vector<char> v; 
  vector<char> :: iterator it; 
  s = cells; 
  for(i =0; i < s.size(); i++) { 
    v.push_back(s[i]); 
  } 
   
  it = unique(v.begin(), v.end()); 
  v.resize(it-v.begin()); 
   
  if(v[0] == 'A' || v[v.size()-1] == 'A') { 
    return "Alice"; 
  } 
  a = b = 0; 
  for(i = 0; i < v.size(); i++) { 
    if(v[i] == 'A')  
      a++; 
    else b++; 
  } 
  if(b>a) return "Bob"; 
  else return "Alice"; 
}

********************************************************************************
*******************************************************************************/