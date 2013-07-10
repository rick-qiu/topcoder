/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2422
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

class ThirtyOne {
public:
    int findWinner(vector<string> hands);
};

int ThirtyOne::findWinner(vector<string> hands) {
    int ret;
    return ret;
}


int test0() {
    vector<string> hands = {"10 A A", "K 2 3"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> hands = {"2 3 4", "10 6 8", "A K 3"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> hands = {"J 5 2", "2 7 5", "10 J 2", "J 6 2", "J Q K"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> hands = {"Q K K", "10 J Q", "A 8 A", "2 2 2"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> hands = {"Q 6 6", "7 8 3", "3 7 2", "K Q 6", "Q 6 3", "5 3 8", "10 J Q", "4 8 4", "Q 2 5", "8 A 8", "9 10 10", "2 K 5", "10 4 5", "Q 4 Q", "3 J 2", "7 4 4", "3 9 7", "A 4 4", "Q 7 7", "10 9 A", "J 3 5", "5 8 9", "Q Q 7"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
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
    vector<string> hands = {"10 5 K", "9 A 5", "5 J 2", "8 Q 9", "2 2 9", "Q 2 2", "2 6 Q", "2 9 Q", "4 J 2", "9 Q K", "6 Q 10", "8 6 10", "6 7 A", "K A 8", "7 K 9", "A 9 K", "9 3 A", "7 10 K", "6 J J", "8 5 5", "2 9 K", "3 8 2", "6 5 A", "10 J J", "3 5 4", "3 7 6", "A 10 5", "K 10 7", "5 10 7", "7 3 9", "5 4 Q"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> hands = {"10 6 Q", "9 4 Q", "K 4 2", "4 K 10", "A 8 2", "2 J 2", "7 5 4", "7 5 10", "K 6 10", "8 5 3", "7 8 5", "Q 7 2", "A Q A", "10 9 K", "2 4 3", "7 7 4"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> hands = {"K 4 K", "2 10 7", "10 A 9", "10 J K", "2 6 7", "3 5 7", "9 8 8", "2 J 10", "9 8 2", "10 3 3", "A 8 8", "7 9 6", "8 Q J", "10 10 K", "3 8 J", "10 K 8", "A 7 3", "Q Q 5", "J 4 A", "9 3 10", "2 K 4", "10 4 9", "K 8 8", "4 5 9", "Q J Q", "7 5 A", "7 8 5", "4 7 4", "3 A K", "8 K 8", "10 J Q", "A 4 2", "6 5 8", "A 7 4", "2 5 8", "2 3 A", "Q 8 10", "3 K K", "9 A 3", "3 Q A", "10 K 2", "4 A A", "3 2 K"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> hands = {"6 9 Q", "2 A A", "K Q 7", "10 2 8", "10 8 10", "10 9 K", "Q 2 Q", "K 10 7", "A J 2", "J 2 2", "2 A 4", "Q A J", "8 7 9", "5 A 9", "5 10 8", "9 7 6", "7 4 6", "9 5 2", "Q 7 2", "4 5 A", "2 6 9", "K 6 A", "A 9 5", "Q 8 9", "A A J", "Q 5 6", "8 Q 7", "2 6 J", "K 10 8", "A Q 10", "7 6 5", "2 5 A", "3 10 8", "3 10 2", "3 K 10", "6 10 6", "Q 3 K", "5 Q 7", "8 9 5", "7 7 2", "8 Q J"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> hands = {"5 4 6", "3 10 Q", "A Q J", "2 8 7", "10 Q 3", "6 6 2", "4 4 Q", "Q A 8", "3 Q 8", "7 2 K", "7 10 6", "5 10 4", "A 8 3", "8 Q 8", "2 A K", "5 6 7", "J 4 6", "3 Q 8", "3 4 2", "4 Q 5", "K 10 7", "6 J A", "10 3 7", "6 9 2", "10 3 6", "Q 5 6", "K Q 10", "8 7 9", "9 K J", "A 7 5", "9 2 6", "7 8 J", "5 J K", "3 K Q", "8 5 J", "4 6 J", "8 J 8"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> hands = {"Q 6 9", "9 9 A", "9 4 A", "9 8 2", "Q 7 K", "J 4 6", "2 Q J", "7 J K", "4 6 3", "9 J A", "Q 7 Q", "7 Q Q", "7 Q 8", "Q 3 6", "A Q 10", "2 9 4", "9 4 A", "5 A 2", "K 9 A", "6 J J", "5 K 8", "9 5 5", "10 4 5", "Q J 2", "K 2 A", "Q K J", "2 2 Q", "6 A A", "7 5 5", "4 2 K", "6 J 4", "9 4 J", "5 7 J", "3 7 Q", "6 9 6", "2 3 10", "3 Q 3", "K 8 A", "4 A 7", "9 5 7", "3 8 Q", "Q 5 3", "9 9 Q", "3 2 J", "3 3 5", "6 J K", "3 6 8", "J J A", "2 K 8", "A 7 3"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> hands = {"J 4 7", "6 10 3", "6 4 J", "6 J 6", "K A 8", "2 10 9", "6 3 5", "A 4 4", "3 4 10", "8 2 K", "J A 3", "6 J J", "10 8 5", "7 7 2", "3 6 8", "J Q 7", "3 7 5", "9 4 7", "6 2 3", "2 4 3", "A K 2", "10 7 7", "J 2 4", "4 7 3", "A J K", "A 2 K", "8 8 8", "4 10 7", "4 4 9", "K Q 6", "7 3 4", "7 A 7", "9 6 7", "2 6 Q", "K 5 6", "8 9 3", "Q 4 A", "5 Q 9", "6 K 6", "3 J 6", "9 Q J", "7 Q K", "6 3 7", "A 6 J", "5 9 3"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> hands = {"8 J 8", "J 5 3", "8 A 3", "J 4 9", "J 6 8", "6 4 Q", "5 A 9", "7 4 A"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> hands = {"10 4 6", "4 5 3", "K 7 Q", "10 9 9", "10 A A", "Q J 3", "9 A K", "4 K Q", "J J 8", "8 A A", "9 6 4", "7 9 A", "9 8 K", "2 3 2", "J Q 6", "4 J 3", "J J 7"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> hands = {"J A A", "A K 6", "4 4 9", "3 9 4", "K 4 6", "A 4 3", "5 4 3", "K 4 5", "7 2 2", "K 9 J", "Q 4 9", "K 4 A", "Q 8 Q", "2 4 J", "4 10 2", "Q Q 8", "5 8 K", "3 2 3"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> hands = {"Q 5 8", "6 8 10", "4 Q A", "J 3 7", "9 9 Q", "4 7 6", "6 4 3", "3 5 6", "6 10 10", "8 10 6", "Q 4 8", "2 Q 5", "4 Q 5", "3 5 Q", "8 K 8", "8 Q 6"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> hands = {"2 3 9", "6 5 Q", "Q 9 5", "7 6 9", "J 2 5", "J 8 K", "3 J Q", "3 Q 6", "Q 6 Q", "A K Q"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> hands = {"6 6 9", "3 4 10", "J 6 7", "3 8 6", "6 2 2", "K K 6", "8 2 3", "6 6 8", "2 5 3", "8 8 2"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> hands = {"9 5 3", "Q A 7", "8 10 4", "10 7 Q", "9 A 9", "Q K 4", "5 8 A", "3 4 3", "Q A K", "10 3 2", "A 2 4", "J K 9", "4 A Q", "10 6 10", "9 9 2", "9 10 10", "5 5 Q", "6 4 6", "Q K A", "6 3 5", "10 8 3", "6 2 10"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> hands = {"Q 9 2", "Q 10 5", "2 2 6", "8 Q 8", "6 Q Q", "J 8 3", "5 J 6", "A 8 7", "J 8 9", "3 J 9", "10 J K", "10 7 6", "10 2 9", "9 2 7", "Q 8 A", "3 8 10", "J K 10", "3 8 Q", "8 10 J", "4 Q A"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> hands = {"3 Q 3", "3 4 6", "9 7 A", "8 2 4", "9 10 3", "Q 7 K", "6 A J", "A 4 5", "2 2 9", "9 10 7", "J 8 2", "10 J Q", "5 5 Q", "A 7 Q", "7 7 6", "2 Q A", "10 3 10", "10 2 10", "7 3 Q"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> hands = {"4 8 2", "5 7 6", "3 3 A", "6 J 8", "J 4 6", "J 3 Q", "5 10 8", "Q Q 8", "A 9 J", "7 8 J", "A 3 2", "10 3 4", "J 5 7", "4 A Q", "4 7 J", "10 J 8", "6 6 8", "4 5 K", "J 6 A", "J J 4", "Q 4 4", "J 7 K", "5 8 7", "10 10 8", "3 2 5", "6 8 5", "8 J 9", "3 A Q", "A 2 3", "4 3 3"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> hands = {"5 10 2", "A J 9", "7 7 6", "Q 3 7", "8 K 4", "6 K 10", "8 10 Q", "2 J 4", "J K Q", "5 Q 9", "A 3 10", "J 7 K", "7 2 J", "7 9 A", "K K 9", "10 K J", "3 3 9", "9 Q Q", "J 8 J", "2 4 Q", "A 2 A", "7 J Q", "5 3 7", "6 4 10", "10 Q 6", "6 3 7", "9 A Q", "3 10 4"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> hands = {"J 2 3", "8 9 5", "5 A J", "4 7 A", "J K K", "J 9 8", "6 3 5", "9 K 9", "4 J 7", "5 2 3", "Q 9 K", "9 A 7", "Q 8 7", "8 2 A", "2 5 3", "3 Q J", "J 4 7", "8 3 4", "7 9 K", "6 A 7", "Q 4 Q", "J Q 2", "K K 10", "2 Q J", "4 6 K", "7 A Q", "K 10 3"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> hands = {"K 5 K", "K 4 9", "10 5 A", "2 2 6", "9 9 10", "6 Q J", "2 7 6", "K 4 4", "2 4 8", "8 4 J", "A J 9", "9 J 10", "8 9 5", "J K 2", "J K A", "5 9 6", "7 10 4", "9 J 6", "3 9 8", "J 3 K"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> hands = {"6 10 10", "3 10 Q", "J K K", "10 6 5", "7 10 K", "Q J 10", "4 8 A", "7 4 4", "Q 5 Q", "5 6 8", "Q 8 A", "J Q 7", "K 8 4", "5 Q K", "A 10 Q"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> hands = {"Q 5 A", "Q 4 3", "2 5 5", "7 6 4", "3 8 Q", "10 2 4", "A 4 7", "6 10 8", "6 8 6", "J 4 5", "6 4 3", "4 6 K", "4 4 6", "8 Q K", "K J 9", "A Q 9", "K 6 4", "10 A 7", "A 3 8", "2 9 9", "4 Q 5", "10 A Q", "8 K Q", "6 3 9", "4 2 7", "8 10 7", "7 5 Q", "6 4 10"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> hands = {"8 A 9", "Q 2 8", "6 J 6", "5 10 2", "4 3 K", "3 2 6", "8 Q K", "10 9 A", "J K 2", "K J 9", "10 7 2", "2 7 6", "9 2 A", "2 3 Q", "8 2 10", "6 3 8", "5 5 3", "Q 10 10", "9 9 A", "3 2 2", "10 J 2", "Q 9 J", "6 J 3", "5 6 5"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> hands = {"A 4 2", "Q 3 J", "7 Q J", "K 6 2", "6 7 6", "Q K 10", "A Q 8", "K Q 10", "Q 9 2", "Q J 5", "3 3 3", "Q 4 9", "8 9 4", "6 K K", "7 Q 2", "4 3 K", "Q 9 10", "4 Q K", "K J 5", "A 9 4", "3 10 A"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> hands = {"J 9 K", "J Q Q", "J J 6", "K 8 7", "8 9 4", "6 6 2", "2 K Q", "K 8 6", "8 3 4", "10 6 K", "5 J 8", "J 6 10", "5 Q K", "4 8 10", "3 9 A", "5 K K", "Q 5 A", "3 5 K", "3 2 J", "10 3 10", "4 A 9", "9 3 10", "8 9 6", "3 9 10", "6 K 3", "6 7 5", "5 6 10", "5 J 10", "K 2 6", "4 5 J", "3 9 10", "8 K J", "A 8 10", "10 8 K", "8 6 2", "8 8 A", "10 10 6", "K K K", "8 3 4"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> hands = {"5 9 Q", "2 8 J", "K 10 Q", "4 6 9", "Q 10 K", "2 2 2", "3 A 8", "7 9 K", "6 3 J"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> hands = {"8 A 10", "3 6 K", "Q 2 9", "5 2 3", "Q 3 J", "K A 7", "10 K 4", "6 8 7", "4 5 J", "Q 10 J", "4 9 5", "2 J 3", "6 2 7", "6 3 K", "7 6 4", "8 4 10", "10 5 10", "5 2 2", "K 10 K", "3 10 2", "Q 5 A", "8 4 6", "6 10 2", "5 9 6", "A A 5", "J Q 10", "Q Q Q", "3 Q 3", "A 5 5", "5 6 7", "J 7 10", "5 4 4", "7 7 3", "5 4 4", "J 7 Q"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> hands = {"8 4 5", "6 9 5", "3 5 J", "10 A 2", "K 5 4", "8 8 4", "Q 5 Q", "8 A 2", "7 5 4", "5 3 7", "2 2 K", "2 10 7", "6 9 8"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> hands = {"5 3 K", "4 Q K", "8 4 9"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> hands = {"2 7 5", "4 5 7", "2 8 2", "10 3 8", "4 7 6", "2 9 2", "9 5 6"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> hands = {"2 J 5", "8 7 10", "10 7 3", "7 4 Q", "A 3 10", "5 2 K", "A K A", "4 4 J", "8 K 2", "7 10 8", "6 5 5", "K K 2", "2 8 A"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> hands = {"10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10", "10 10 10"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> hands = {"2 3 4", "2 3 4", "2 3 4", "2 2 2", "3 3 3", "4 4 4", "5 5 5", "6 6 6", "7 7 7", "8 8 8", "9 9 9", "10 10 10", "J J J", "Q Q Q", "K K K", "A A A"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> hands = {"A A A", "A 10 10"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> hands = {"Q 6 6", "7 8 3", "3 7 2", "K Q 6", "Q 6 3", "5 3 8", "10 J Q", "4 8 4", "Q 2 5", "8 A 8", "9 10 10", "2 K 5", "10 4 5", "Q 4 Q", "3 J 2", "7 4 4", "3 9 7", "A 4 4", "Q 7 7", "10 9 A", "J 3 5", "5 8 9", "Q Q 7"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> hands = {"3 4 5", "A A J"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> hands = {"2 2 2", "K K A"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> hands = {"A K K", "2 2 2"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> hands = {"10 A A", "A A 10"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> hands = {"K K K", "A K K"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> hands = {"K 5 2", "A A 2"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> hands = {"2 2 2", "A A 10"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> hands = {"A A A", "A A K", "3 2 10"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> hands = {"4 10 J", "8 9 A"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> hands = {"A 8 2", "2 3 8"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> hands = {"A A A", "A K K"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> hands = {"2 2 3", "3 3 2"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> hands = {"K Q J", "K Q A"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> hands = {"Q K K", "10 J Q", "A 8 A", "2 2 2"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> hands = {"2 3 4", "10 5 4", "A A 10"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> hands = {"2 2 3", "A A K", "2 2 4"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> hands = {"J Q K", "J J J"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> hands = {"J J A", "5 5 5"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> hands = {"2 2 2", "A A K"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
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
    vector<string> hands = {"A A K", "K J J"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> hands = {"A A A", "A A K"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> hands = {"10 10 A", "10 10 J"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> hands = {"A A 10", "A A 5"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> hands = {"A A 10", "2 3 4"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> hands = {"10 10 10", "10 10 A"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> hands = {"A 10 K", "2 2 2"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> hands = {"A A 10", "9 9 K"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> hands = {"A A A", "K K K", "Q Q Q", "J J J"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> hands = {"2 2 3", "A A K", "2 2 2", "A K K"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> hands = {"A A K", "K A A", "10 10 8"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> hands = {"10 10 A", "K K K"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> hands = {"A A K", "8 8 8"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> hands = {"A A K", "9 9 7"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> hands = {"A A K", "K K K"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> hands = {"A A A", "K K A"};
    ThirtyOne* pObj = new ThirtyOne();
    clock_t start = clock();
    int result = pObj->findWinner(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8445017&rd=5069&pm=2422
********************************************************************************
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
 
using namespace std;
 
class ThirtyOne {
  
  int toNumber (string c)
  {
    if (c == "A") return 11;
    if (c == "K") return 10;
    if (c == "Q") return 10;
    if (c == "J") return 10;
    if (c == "10") return 10;
    if (c == "9") return 9;
    if (c == "8") return 8;
    if (c == "7") return 7;
    if (c == "6") return 6;
    if (c == "5") return 5;
    if (c == "4") return 4;
    if (c == "3") return 3;
    if (c == "2") return 2;
    return -31;
  }
  
  double getValue (string hand)
  {
    string card [3];
    int nums [3];
    vector<double> vals;
    vals.push_back (0);
    
    stringstream ss;
    ss << hand;
    ss >> card[0] >> card[1] >> card[2];
    nums[0] = toNumber(card[0]);
    nums[1] = toNumber(card[1]);
    nums[2] = toNumber(card[2]);
    
    int i, j;
    for (i = 0; i < 3; ++i)
    {
      int l = vals.size();
      for (j = 0; j < l; ++j)
      {
        if (nums[i] != 11) vals[j] += nums[i];
        else 
        {
          vals.push_back (vals[j] + 1);
          vals[j] += 11;
        }
      }
    }
    if (card[0] == card[1] && card[0] == card[2]) vals.push_back (30.5);    
    
    double max = 0.0;
    for (i = 0; i < vals.size(); ++i)
      if (vals[i] > max && vals[i] <= 31.0) max = vals[i];
    return max;
  }
  
  public:
  int findWinner(vector <string> hands) {
    int i;
    vector<double> ret;
    for (i = 0; i < hands.size(); ++i) ret.push_back (getValue(hands[i]));
    
    int maxi = 0;
    for (i = 1; i < ret.size(); ++i)
      if (ret[i] > ret[maxi]) maxi = i;
    return maxi;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/